import os
import re

def extract_comments_from_c_files(folder_path):
   comments = []
   
   # List all .c files in the folder
   c_files = [f for f in os.listdir(folder_path) if f.endswith('.c')]
   
   # Sort files in ascending order
   c_files.sort()
   
   for file_index, c_file in enumerate(c_files, start=1):
      file_path = os.path.join(folder_path, c_file)
      
      with open(file_path, 'r') as file:
            lines = file.readlines()
            comment_lines = []
            
            for line in lines:
               # Check for header file inclusion
               if re.match(r'^\s*#include', line):
                  break
               
               # Check for single-line comments               
               single_line_comment = re.match(r'^\s*//(.*)', line)
               if single_line_comment:
                  comment_lines.append(single_line_comment.group(1).strip())
               
               # Check for multi-line comments
               multi_line_comment_start = re.match(r'^\s*/\*(.*)', line)
               if multi_line_comment_start:
                  comment_lines.append(multi_line_comment_start.group(1).strip())
                  in_multiline_comment = True
               elif multi_line_comment_start:
                  if '*/' in line:
                        in_multiline_comment = False
                        comment_lines.append(line.split('*/')[0].strip())
                  else:
                        comment_lines.append(line.strip())                
               # If we encounter a line that is not a comment and not a header, we stop
               if not (single_line_comment or multi_line_comment_start or in_multiline_comment):
                  break
            
            if comment_lines:
               comments.append(f"File {file_index} ({c_file}):\n" + "\n".join(comment_lines) + "\n")

   return comments

def write_comments_to_file(comments, output_file):
   with open(output_file, 'w') as file:
      file.write("\n".join(comments))

if __name__ == "__main__":
   folder_path = "D:\VS CODE\LANG PRAC(C,C++,JAVA,PY)\C\ASSIGNMENTS"  # Change this to your folder path
   output_file = "questions.txt"

   comments = extract_comments_from_c_files(folder_path)
   write_comments_to_file(comments, output_file)
   
   print(f"Comments extracted to {output_file}")