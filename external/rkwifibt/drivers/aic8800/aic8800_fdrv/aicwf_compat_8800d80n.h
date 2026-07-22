#include <linux/types.h>

#if defined(CONFIG_RF_CALIB_LATER)
#define CONFIG_SECURE_CALIB_EXEC_ENABLED    1
#else
#define CONFIG_SECURE_CALIB_EXEC_ENABLED    0
#endif

void system_config_8800d80n(struct rwnx_hw *rwnx_hw);

int aicwf_plat_patch_load_8800d80n(struct rwnx_hw *rwnx_hw);
int aicwf_plat_patch_table_load_8800d80n(struct rwnx_hw *rwnx_hw);

void aicwf_patch_config_8800d80n(struct rwnx_hw *rwnx_hw);

int aicwf_plat_rftest_load_8800d80n(struct rwnx_hw *rwnx_hw);
int aicwf_plat_rftest_exec_8800d80n(struct rwnx_hw *rwnx_hw);

int aicwf_plat_cinit_exec_8800d80n(struct rwnx_hw *rwnx_hw);
int aicwf_plat_calib_exec_8800d80n(struct rwnx_hw *rwnx_hw);
int aicwf_plat_secure_calib_exec_8800d80n(struct rwnx_hw *rwnx_hw);
#ifdef CONFIG_REKEY_OFFLOAD
int aicwf_plat_rekey_exec_8800d80n(struct rwnx_hw *rwnx_hw);
#endif
int rwnx_plat_userconfig_load_8800d80n(struct rwnx_hw *rwnx_hw);
#ifdef CONFIG_POWER_LIMIT
int rwnx_plat_powerlimit_load_8800d80n(struct rwnx_hw *rwnx_hw);
#endif
int aicwf_set_rf_config_8800d80n(struct rwnx_hw *rwnx_hw, struct mm_set_rf_calib_cfm *cfm);


