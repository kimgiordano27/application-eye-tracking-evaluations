/*
FUNCTION_NAME: FUN_02fa6824
ENTRY_POINT: 02fa6824
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fa6920) */

undefined4 FUN_02fa6824(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_34 [4];
  
  local_34[0] = '\0';
  FUN_027e0bd8(param_1,local_34,0);
  if (*(int *)(param_1 + 0x40) == 0) {
    if (((*(long *)(param_1 + 0x28) == 0) || (*(char *)(*(long *)(param_1 + 0x28) + 0x52) == '\0'))
       || (uVar1 = FUN_02fa9bd8(param_1,param_2), (uVar1 & 1) == 0)) {
      FUN_02fa9ff0(param_1,1);
      goto LAB_02fa68b8;
    }
    *(long *)(param_1 + 0x58) = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_1 + 0x58),param_2);
    if (param_2 != 0) {
      FUN_02eb08b0(param_2,*(undefined8 *)(param_1 + 0x48),param_1,0);
      uVar2 = 0;
      iVar3 = 7;
      goto LAB_02fa68c4;
    }
    uVar2 = 1;
  }
  else {
LAB_02fa68b8:
    uVar2 = 0;
  }
  iVar3 = 3;
LAB_02fa68c4:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  if ((iVar3 == 7) || (iVar3 == 0)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02eb0e88(param_2,0);
    uVar2 = 1;
  }
  return uVar2;
}


