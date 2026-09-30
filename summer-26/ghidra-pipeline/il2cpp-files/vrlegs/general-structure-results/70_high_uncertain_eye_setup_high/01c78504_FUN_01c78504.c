/*
FUNCTION_NAME: FUN_01c78504
ENTRY_POINT: 01c78504
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c78644) */

undefined8 FUN_01c78504(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_44 [4];
  long local_38;
  
  if ((DAT_0411f9e5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc53e8);
    FUN_01ab69ac(PTR_DAT_03cc53f0);
    FUN_01ab69ac(PTR_DAT_03cc53f8);
    DAT_0411f9e5 = 1;
  }
  local_38 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar3,local_44,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = FUN_0219f8b8(*(long *)(param_1 + 0x10),uVar4,&local_38,*(undefined8 *)PTR_DAT_03cc53e8);
  if ((uVar1 & 1) == 0) {
    lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc53f8);
    FUN_01c786d4(lVar2,param_2);
    local_38 = lVar2;
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b83c(*(long *)(param_1 + 0x10),uVar4,lVar2,*(undefined8 *)PTR_DAT_03cc53f0);
  }
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *param_3 = *(undefined8 *)(local_38 + 0x20);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3);
  if (local_38 != 0) {
    uVar4 = *(undefined8 *)(local_38 + 0x10);
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


