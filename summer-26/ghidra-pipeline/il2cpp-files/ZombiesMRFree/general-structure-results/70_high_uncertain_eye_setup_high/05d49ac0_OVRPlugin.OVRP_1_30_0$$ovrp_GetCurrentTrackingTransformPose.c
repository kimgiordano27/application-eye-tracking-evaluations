/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 05d49ac0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_05b32c00();
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  *(long *)(unaff_x19 + 0x28) = unaff_x20;
  thunk_FUN_03048534();
  lVar2 = thunk_FUN_0301080c(*unaff_x21);
  FUN_05b32c00(lVar2,0);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  *(long *)(unaff_x19 + 0x30) = lVar2;
  thunk_FUN_03048534((long *)(unaff_x19 + 0x30),lVar2);
  uVar1 = DAT_0136ad30;
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
  *(undefined4 *)(unaff_x19 + 0x1c) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x14) = uVar1;
  return;
}


