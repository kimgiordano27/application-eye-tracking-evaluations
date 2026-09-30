/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetControllerState4
ENTRY_POINT: 0740e13c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_GetControllerState4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_0941ea6a & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e80830);
    DAT_0941ea6a = 1;
  }
  puVar1 = PTR_DAT_08e80830;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  iVar2 = FUN_07119d8c(param_1,0);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = FUN_07119dec(param_1,iVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar1);
      }
      iVar3 = FUN_0701a724(uVar5,0);
      iVar2 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      iVar3 = FUN_07119d8c(param_1,0);
    } while (iVar4 < iVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar5 = FUN_07019b70(iVar2,0);
  iVar2 = FUN_07119d8c(param_1,0);
  if (0 < iVar2) {
    iVar2 = 0;
    uVar8 = uVar5;
    do {
      uVar6 = FUN_07119dec(param_1,iVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar1);
      }
      FUN_0701ada4(uVar6,uVar8,0,0);
      lVar7 = FUN_0714e4d8(uVar8,0);
      uVar8 = FUN_07119dec(param_1,iVar2,0);
      iVar4 = FUN_0701a724(uVar8,0);
      uVar8 = FUN_0714e4cc(lVar7 + iVar4,0);
      iVar2 = iVar2 + 1;
      iVar4 = FUN_07119d8c(param_1,0);
    } while (iVar2 < iVar4);
  }
  return uVar5;
}


