/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 0603d650
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x2a8));
  FUN_031f20f4(PTR_DAT_075f7c80);
  *(undefined1 *)(unaff_x21 + 0xc70) = 1;
  puVar1 = PTR_DAT_075f7c78;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_03e95fc8(*(undefined8 *)puVar1);
  uVar2 = FUN_06e587d8();
  puVar1 = PTR_DAT_075f7c80;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06de0af4(*(undefined8 *)puVar1,0);
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
    uVar3 = FUN_06e550fc();
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x20);
    }
    FUN_06e60af8(uVar3,0);
    return;
  }
  return;
}


