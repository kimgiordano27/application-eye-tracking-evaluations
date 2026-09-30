/*
FUNCTION_NAME: FUN_02e6feb0
ENTRY_POINT: 02e6feb0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02e6ffd8) */
/* WARNING: Removing unreachable block (ram,0x02e6ff54) */
/* WARNING: Removing unreachable block (ram,0x02e6ff78) */
/* WARNING: Removing unreachable block (ram,0x02e6ffe4) */

long FUN_02e6feb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char local_38 [4];
  char local_34 [4];
  
  if ((DAT_0412a3ef & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1ea58);
    DAT_0412a3ef = 1;
  }
  local_38[0] = '\0';
  local_34[0] = '\0';
  FUN_027e0bd8(param_1,local_34,0);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    local_38[0] = '\0';
    FUN_027e0bd8(lVar2,local_38,0);
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar1 = FUN_02e700b4();
    if (local_38[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar2,0);
    }
    if (lVar1 != 0) {
      iVar3 = 4;
      goto LAB_02e6ff80;
    }
  }
  lVar1 = 0;
  iVar3 = 5;
LAB_02e6ff80:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  if ((iVar3 == 5) || (iVar3 == 0)) {
    lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1ea58);
    FUN_02e686e0(lVar1,param_2);
  }
  return lVar1;
}


