/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03685d44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int in_w9;
  undefined4 unaff_w20;
  undefined8 uVar5;
  long *unaff_x23;
  
  if (in_w9 == 0) {
    thunk_FUN_01ee6d7c(param_1);
    param_1 = *unaff_x23;
  }
  puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_3__;
  puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_29__;
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x10) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(param_1);
      param_1 = *unaff_x23;
    }
    uVar5 = **(undefined8 **)(param_1 + 0xb8);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_26__);
    FUN_02e665f4(uVar3,uVar5,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_28__,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_01f51358(puVar4,uVar3);
  }
  uVar3 = FUN_023039f4();
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0255facc(uVar5,unaff_w20,uVar3,*(undefined8 *)puVar1);
  return uVar5;
}


