/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 090c47d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 *unaff_x21;
  
  FUN_04947ee4();
  *(undefined1 *)(unaff_x20 + 0x49b) = 1;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_04983e64(uVar3,*unaff_x21);
  uVar2 = *unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_04983e64(uVar3,uVar2);
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x28),uVar1);
  return;
}


