# Write your MySQL query statement below
# Write your MySQL query statement below
select e.name from Employee as e
inner join Employee as m 
on  e.id = m.managerId
group by m.managerId
Having count(m.managerId) >=5