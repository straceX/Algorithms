auto alternatingCharacters(std::string &sparam)
    -> int
    {
    auto currentCh   = sparam[0];
    auto deleteCount = 0;
    for (auto index = 1; index < sparam.length(); ++index)
        {
        if (sparam[index] == currentCh)
            ++deleteCount;
        else
            currentCh = sparam[index];
        }
    return deleteCount;
    }