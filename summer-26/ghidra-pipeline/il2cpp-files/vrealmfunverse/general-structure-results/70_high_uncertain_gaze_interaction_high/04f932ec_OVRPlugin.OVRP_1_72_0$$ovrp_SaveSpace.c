/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SaveSpace
ENTRY_POINT: 04f932ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_SaveSpace(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    param_1 = *unaff_x22;
  }
  puVar1 = System_Func<UIHoverEventArgs>_TypeInfo;
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3[4] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar3;
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)System_Func<TransitionStartEvent>_TypeInfo);
    FUN_049c8240(uVar2,uVar4,*(undefined8 *)System_Func<Vector3>_TypeInfo,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *puVar3 = uVar2;
    thunk_FUN_02bb0e9c(puVar3,uVar2);
  }
  uVar2 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_03bdeaf8(uVar2,3);
  return uVar2;
}


