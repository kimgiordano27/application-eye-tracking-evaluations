/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 07404de0
PROGRAM: MRTraveler-libil2cpp.so
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
  long lVar2;
  long unaff_x19;
  undefined1 unaff_w22;
  
  lVar2 = thunk_FUN_03cf5234();
  FUN_07145224(lVar2,0);
  *(undefined1 *)(lVar2 + 0x10) = unaff_w22;
  *(long *)(unaff_x19 + 0x30) = lVar2;
  thunk_FUN_03d233cc((long *)(unaff_x19 + 0x30),lVar2);
  uVar1 = DAT_018ae660;
  *(undefined1 *)(unaff_x19 + 0x20) = unaff_w22;
  *(undefined4 *)(unaff_x19 + 0x1c) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x14) = uVar1;
  return;
}


