/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 09083ba8
PROGRAM: Hyper-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 09083bac to 09183bdf has its CatchHandler @ 09083a0c */
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xef8));
  *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    OVRManager__add_HMDAcquired(*(long *)(unaff_x19 + 0x20),0);
                    /* try { // try from 09083be0 to 09183bfb has its CatchHandler @ 09083c90 */
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


