#include <stdio.h>

int main(void) {
  const short BITS_PER_BYTE = 8;
  float down_speed_mbits_sec, file_size_mbytes, down_time_sec;

  printf("Enter the download speed in megabits per second (Mbs): ");
  scanf("%f", &down_speed_mbits_sec);
  printf("Enter the size of the file in megabytes (MB): ");
  scanf("%f", &file_size_mbytes);

  down_time_sec = (file_size_mbytes * BITS_PER_BYTE) / down_speed_mbits_sec;

  printf("At %.2f megabits per second, a file of %.2f megabytes\n"
         "downloads in %.2f seconds\n",
         down_speed_mbits_sec, file_size_mbytes, down_time_sec);

  return 0;
}
