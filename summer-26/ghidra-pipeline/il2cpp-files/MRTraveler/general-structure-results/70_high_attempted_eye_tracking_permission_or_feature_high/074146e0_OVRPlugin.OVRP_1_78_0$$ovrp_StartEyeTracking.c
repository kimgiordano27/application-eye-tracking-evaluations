/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 074146e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(undefined8 param_1)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long unaff_x20;
  long *plVar3;
  long unaff_x21;
  
  plVar3 = *(long **)(unaff_x20 + 0x158);
  if ((*(byte *)(unaff_x21 + 0xf08) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eae158);
    FUN_03c8f898(PTR_DAT_08e80830);
    *(undefined1 *)(unaff_x21 + 0xf08) = 1;
  }
  puVar1 = PTR_DAT_08e80830;
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  __ptr = (void *)FUN_0740f4a0(param_1);
  uVar2 = FUN_0741476c();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


