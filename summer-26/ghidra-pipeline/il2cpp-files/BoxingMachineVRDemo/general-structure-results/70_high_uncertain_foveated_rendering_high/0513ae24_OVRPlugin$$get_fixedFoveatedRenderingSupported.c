/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 0513ae24
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_05007004(param_1,param_2,0);
  uVar1 = thunk_FUN_02dc61f4(PTR_DAT_067817b0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(param_1,uVar1);
}


