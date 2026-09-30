/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 01d690b8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_010303a8();
  uVar1 = thunk_FUN_010400dc();
  FUN_01c96740();
  uVar2 = thunk_FUN_010303a8(PTR_DAT_023587d8);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar1,uVar2);
}


