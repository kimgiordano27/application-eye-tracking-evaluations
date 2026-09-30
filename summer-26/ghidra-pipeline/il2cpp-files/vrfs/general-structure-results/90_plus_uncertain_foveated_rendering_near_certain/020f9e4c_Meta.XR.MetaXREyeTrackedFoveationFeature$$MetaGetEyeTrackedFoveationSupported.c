/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 020f9e4c
PROGRAM: vrfs-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined4 *)(unaff_x19 + 0x20) = param_1;
    *(undefined4 *)(unaff_x19 + 0x24) = param_2;
    *(undefined4 *)(unaff_x19 + 0x28) = param_3;
    *(undefined4 *)(unaff_x19 + 0x2c) = param_4;
    *(long *)(unaff_x20 + 0x30) = unaff_x19;
    thunk_FUN_01656ef8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


