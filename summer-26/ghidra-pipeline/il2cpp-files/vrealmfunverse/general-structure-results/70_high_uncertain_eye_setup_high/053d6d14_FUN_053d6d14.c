/*
FUNCTION_NAME: FUN_053d6d14
ENTRY_POINT: 053d6d14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053d6d14(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  undefined8 in_x6;
  
  FUN_053d6a30();
  uVar1 = FUN_04cb7c3c(in_x5,0,0);
  if ((uVar1 & 1) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = FUN_04d94ac4(param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar2 = FUN_02b3c908(uVar2,1);
      uVar3 = FUN_053d6158(param_2);
      FUN_0275e13c(uVar2);
      FUN_0275a400(uVar2,uVar3);
      FUN_0275a434(uVar2,0,uVar3);
      uVar3 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_55_0_TypeInfo);
      uVar2 = FUN_0540ce80(uVar3,uVar2,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar3 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar3,uVar2,0);
      uVar2 = FUN_0540c738(uVar3,0);
      uVar3 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_55_1_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2,uVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = in_x5;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x60),in_x5);
  *(undefined8 *)(param_1 + 0x68) = in_x6;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x68),in_x6);
  return;
}


