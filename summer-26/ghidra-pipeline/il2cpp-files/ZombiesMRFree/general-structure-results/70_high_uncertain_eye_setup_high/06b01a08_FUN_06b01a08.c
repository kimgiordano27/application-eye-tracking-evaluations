/*
FUNCTION_NAME: FUN_06b01a08
ENTRY_POINT: 06b01a08
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8 FUN_06b01a08(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int extraout_var;
  undefined8 uVar6;
  long lVar7;
  int local_38;
  int local_34;
  
  puVar3 = PTR_DAT_06f98e98;
  if ((DAT_073ab3ab & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f98e98);
    FUN_02fe925c(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_76_0_TypeInfo);
    DAT_073ab3ab = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f6df30;
  puVar1 = PTR_DAT_06f6d668;
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (param_2 < *(int *)(lVar7 + 0x18)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar5 = FUN_046299b8(lVar7,param_2,*(undefined8 *)OVRPlugin_OVRP_1_32_0_TypeInfo);
      if (0 < extraout_var) {
        return uVar5;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      local_38 = param_2;
      uVar5 = thunk_FUN_0301043c(*(undefined8 *)puVar2,&local_38);
      uVar6 = *(undefined8 *)OVRPlugin_OVRP_1_75_0_TypeInfo;
      goto LAB_06b01b6c;
    }
  }
  puVar4 = OVRPlugin_OVRP_1_76_0_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  local_34 = param_2;
  uVar5 = thunk_FUN_0301043c(*(undefined8 *)puVar2,&local_34);
  uVar6 = *(undefined8 *)puVar4;
LAB_06b01b6c:
  uVar5 = FUN_059693f4(uVar6,uVar5,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)puVar1);
  }
  FUN_068bd958(uVar5,0);
  return 0;
}


