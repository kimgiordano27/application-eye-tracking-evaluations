/*
FUNCTION_NAME: FUN_06386164
ENTRY_POINT: 06386164
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void FUN_06386164(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_032e1da0(PTR_DAT_07279578);
  uVar1 = thunk_FUN_032a56a0();
  uVar2 = thunk_FUN_032e1da0(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
  FUN_0592371c(uVar1,uVar2,0);
  uVar2 = thunk_FUN_032e1da0(Meta_XR_MetaXRFoveationFeature_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar1,uVar2);
}


