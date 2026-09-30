/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 05355928
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(void)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x21 + 0x888) = 1;
  puVar1 = PTR_DAT_067c9c00;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  __ptr = (void *)FUN_05352050();
  uVar2 = FUN_05355990();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


