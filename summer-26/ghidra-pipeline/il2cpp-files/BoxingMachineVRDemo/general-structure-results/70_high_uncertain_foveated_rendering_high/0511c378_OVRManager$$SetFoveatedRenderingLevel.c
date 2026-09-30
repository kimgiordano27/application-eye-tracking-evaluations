/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 0511c378
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetFoveatedRenderingLevel
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06779690);
    *(undefined1 *)(unaff_x23 + 0xc06) = 1;
  }
  FUN_0504920c(param_2,0);
  FUN_050f136c(param_3,*unaff_x22,0);
  *(undefined8 *)(param_2 + 0x10) = param_3;
  thunk_FUN_02dd37b4((undefined8 *)(param_2 + 0x10),param_3);
  *(undefined8 *)(param_2 + 0x18) = param_4;
  thunk_FUN_02dd37b4((undefined8 *)(param_2 + 0x18),param_4);
  return;
}


