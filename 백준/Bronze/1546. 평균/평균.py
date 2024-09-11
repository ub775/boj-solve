n = int(input())  # 시험 본 과목의 개수
scores = list(map(int, input().split()))  # 각 과목의 점수를 리스트로 입력받음

max_score = max(scores)  # 입력받은 점수 중 최댓값을 찾음
new_scores = [score/max_score*100 for score in scores]  # 각 점수를 최댓값으로 나눈 후 100을 곱하여 새로운 리스트에 저장
avg = sum(new_scores) / n  # 새로운 리스트의 합을 과목 수로 나누어 평균을 구함

print(avg)  # 평균을 출력