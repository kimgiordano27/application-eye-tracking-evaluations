/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 06042d78
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(void)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_031f20f4(PTR_DAT_075d6af8);
  *(undefined1 *)(unaff_x22 + 0x18) = 1;
  puVar1 = PTR_DAT_075d6af8;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  __ptr = (void *)FUN_0603eab0();
  uVar2 = FUN_06042df0();
                    /* try { // try from 06042dbc to 06142dc3 has its CatchHandler @ 06042ef4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


