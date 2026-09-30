/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 0909c9a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x20;
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = *unaff_x23;
  uVar3 = puVar2[2];
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *(undefined4 *)(unaff_x19 + 0x128) = 1;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar4;
  uVar1 = thunk_FUN_04983f60(uVar1);
  FUN_06b7f60c(uVar1,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar1;
  thunk_FUN_049ee3d8(unaff_x19 + 0x130,uVar1);
  FUN_0717c524();
  return;
}


