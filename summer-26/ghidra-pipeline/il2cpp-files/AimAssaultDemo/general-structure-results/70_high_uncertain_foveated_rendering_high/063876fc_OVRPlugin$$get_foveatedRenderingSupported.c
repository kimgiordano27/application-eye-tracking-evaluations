/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 063876fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  
  while( true ) {
    *unaff_x19 = 0;
    thunk_FUN_037aeb94(param_1,param_2);
    if (unaff_w20 == unaff_w23) {
      return;
    }
    unaff_w23 = unaff_w23 + 1;
    param_1 = unaff_x19 + 1;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) break;
    param_2 = 0;
    unaff_x19 = param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


