/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05d65ba0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetDynamicFoveatedRenderingEnabled(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)FUN_032937ac(param_1,param_2,0);
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a8ff4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032c82b0();
}


