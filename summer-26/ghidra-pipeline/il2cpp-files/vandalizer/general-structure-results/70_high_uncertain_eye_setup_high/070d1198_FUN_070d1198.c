/*
FUNCTION_NAME: FUN_070d1198
ENTRY_POINT: 070d1198
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_070d1198(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_07a5a9b4 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_9_0_TypeInfo);
    DAT_07a5a9b4 = 1;
  }
  iVar1 = *(int *)((long)param_1 + 0x1c);
  if (iVar1 == 0) {
    local_40 = param_1[4];
    uStack_58 = param_1[1];
    local_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
    puVar3 = (undefined8 *)OVRPlugin_OVRP_1_99_0_TypeInfo;
  }
  else if (iVar1 == 2) {
    local_40 = param_1[4];
    uStack_58 = param_1[1];
    local_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
    puVar3 = (undefined8 *)OVRPlugin_OVRP_1_98_0_TypeInfo;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    local_40 = param_1[4];
    uStack_58 = param_1[1];
    local_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
    puVar3 = (undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo;
  }
  uVar2 = FUN_04d0ec08(&local_60,param_2,param_3,*puVar3);
  return uVar2;
}


