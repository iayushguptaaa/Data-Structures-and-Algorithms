from datetime import date,timedelta

current_date = date.today().isoformat()

print("today is: ",current_date)

no_of_days_in_month=int(input("enter the number of days in the month : "))
today_day=int(input("enter the day today ex:if its 3rd of july enter 3 : "))

diff_of_the_days= no_of_days_in_month - today_day
print(f"month ends after {diff_of_the_days} days")
days_after = (date.today()+timedelta(diff_of_the_days)).isoformat()
print(days_after)
