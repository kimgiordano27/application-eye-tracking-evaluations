/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 05717534
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(ulong param_1,long param_2,undefined8 param_3)

{
  long unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d57558);
    *(undefined1 *)(unaff_x21 + 0x7f5) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_056fb3f0(param_2,param_3,0);
  *(undefined4 *)(param_2 + 0x24) = 4;
  return;
}


