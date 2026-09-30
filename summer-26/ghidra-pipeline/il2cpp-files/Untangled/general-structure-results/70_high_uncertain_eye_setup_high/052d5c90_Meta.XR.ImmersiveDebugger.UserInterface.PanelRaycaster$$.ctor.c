/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$.ctor
ENTRY_POINT: 052d5c90
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster___ctor
               (float param_1,float param_2,float param_3)

{
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* try { // try from 052d5cb4 to 053d5cbf has its CatchHandler @ 052d5744 */
  FUN_067441f8(param_1 + *(float *)(unaff_x19 + 0x34c),param_2 + *(float *)(unaff_x19 + 0x350),
               param_3 + *(float *)(unaff_x19 + 0x354));
  if (*unaff_x20 != 0) {
                    /* try { // try from 052d5cc0 to 053d5cc7 has its CatchHandler @ 052d5cc8 */
                    /* catch() { ... } // from try @ 052d5c8c with catch @ 052d5cc8
                       catch() { ... } // from try @ 052d5cc0 with catch @ 052d5cc8 */
    FUN_06744330(*(undefined4 *)(unaff_x19 + 0x2d0),*(undefined4 *)(unaff_x19 + 0x2d4),
                 *(undefined4 *)(unaff_x19 + 0x2d8),*unaff_x20,0);
    FUN_0529a940(0,0,0,*(undefined8 *)(unaff_x19 + 0x430),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


