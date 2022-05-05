# @param {Integer[][]} accounts
# @return {Integer}
def maximum_wealth(accounts)
    return accounts.map { |acc| acc.sum }.max
end