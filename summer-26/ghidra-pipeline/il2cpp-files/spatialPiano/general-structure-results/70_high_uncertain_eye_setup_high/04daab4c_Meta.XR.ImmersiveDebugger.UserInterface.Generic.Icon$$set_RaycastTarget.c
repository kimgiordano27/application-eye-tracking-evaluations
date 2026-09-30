/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$set_RaycastTarget
ENTRY_POINT: 04daab4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget(void)

{
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  float unaff_s8;
  
  FUN_02f08768(PTR_DAT_067c9848);
  *(undefined1 *)(unaff_x21 + 0xda1) = 1;
  if (unaff_x19 != 0) {
    FUN_06333f44(unaff_s8 * (float)unaff_w20 *
                 *(float *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0x10),
                 unaff_s8 * (float)unaff_w20 *
                 *(float *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0x14));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


