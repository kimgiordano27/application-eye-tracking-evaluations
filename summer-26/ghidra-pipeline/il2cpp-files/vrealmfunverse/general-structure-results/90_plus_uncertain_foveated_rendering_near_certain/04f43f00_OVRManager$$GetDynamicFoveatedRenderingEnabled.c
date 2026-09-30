/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 04f43f00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(undefined8 *param_1,long param_2)

{
  long unaff_x19;
  undefined4 uVar1;
  undefined4 unaff_s10;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0xb4) = *param_1;
  *(undefined4 *)(unaff_x19 + 0xbc) = uVar1;
  if (param_2 != 0) {
    FUN_04f3f8c8(unaff_s10,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


