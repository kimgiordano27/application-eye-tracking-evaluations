/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 06042a64
PROGRAM: vandalizer-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__ptr;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_075f7be0;
  if ((DAT_07a46ff0 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7be0);
    FUN_031f20f4(PTR_DAT_075d6af8);
                    /* try { // try from 06042a9c to 06142d33 has its CatchHandler @ 06042a9c
                       catch() { ... } // from try @ 06042a9c with catch @ 06042a9c
                       catch() { ... } // from try @ 06042e40 with catch @ 06042a9c
                       catch() { ... } // from try @ 06042ef0 with catch @ 06042a9c
                       catch() { ... } // from try @ 06042f3c with catch @ 06042a9c
                       catch() { ... } // from try @ 06042f7c with catch @ 06042a9c */
    DAT_07a46ff0 = 1;
  }
  puVar1 = PTR_DAT_075d6af8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  __ptr = (void *)FUN_0603eab0(param_1);
  uVar3 = FUN_06042b00();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
  }
  free(__ptr);
  return uVar3;
}


