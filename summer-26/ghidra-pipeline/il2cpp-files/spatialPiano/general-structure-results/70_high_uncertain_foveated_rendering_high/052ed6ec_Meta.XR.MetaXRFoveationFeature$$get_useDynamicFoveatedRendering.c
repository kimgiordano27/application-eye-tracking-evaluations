/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 052ed6ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x21;
  
  uVar1 = FUN_060f078c(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060f078c(uVar2,0,0);
  }
  FUN_05236568();
  return;
}


