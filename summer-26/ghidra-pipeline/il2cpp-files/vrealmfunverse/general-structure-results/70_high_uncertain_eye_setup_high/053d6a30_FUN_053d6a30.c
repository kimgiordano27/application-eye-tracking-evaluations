/*
FUNCTION_NAME: FUN_053d6a30
ENTRY_POINT: 053d6a30
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_053d6a30(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_58;
  
  puVar4 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
  if ((DAT_066d09e3 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    DAT_066d09e3 = 1;
  }
  local_58 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_053d65b0(param_1,param_2);
  uVar1 = FUN_04cb7c3c(param_5,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_04d938a0(param_4,0,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_053d6c84(param_2,param_4,&local_58);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar5);
      }
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar2);
      FUN_053d5b38(param_1,param_3,param_4,local_58);
      *(undefined8 *)(param_1 + 0x58) = param_5;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),param_5);
      *(undefined8 *)(param_1 + 0x70) = param_6;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x70),param_6);
      *(undefined8 *)(param_1 + 0x78) = param_7;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x78),param_7);
      return;
    }
    uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar3 = FUN_02b3c908(uVar2,1);
    uVar2 = FUN_053d6158(param_2);
    FUN_0275e13c(uVar3);
    FUN_0275a400(uVar3,uVar2);
    FUN_0275a434(uVar3,0,uVar2);
    puVar4 = OVRPlugin_OVRP_1_53_0_TypeInfo;
  }
  else {
    uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar3 = FUN_02b3c908(uVar2,1);
    uVar2 = FUN_053d6158(param_2);
    FUN_0275e13c(uVar3);
    FUN_0275a400(uVar3,uVar2);
    FUN_0275a434(uVar3,0,uVar2);
    puVar4 = OVRPlugin_OVRP_1_52_0_TypeInfo;
  }
  uVar2 = thunk_FUN_02ba3594(puVar4);
  uVar2 = FUN_0540ce80(uVar2,uVar3,0);
  thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
  uVar3 = thunk_FUN_02b79644();
  FUN_053f0c5c(uVar3,uVar2,0);
  uVar2 = FUN_0540c738(uVar3,0);
  uVar3 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_54_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar2,uVar3);
}


