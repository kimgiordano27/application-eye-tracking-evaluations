/*
FUNCTION_NAME: OVRManager$$set_suggestedCpuPerfLevel
ENTRY_POINT: 033a8fa0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_suggestedCpuPerfLevel(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  long *unaff_x21;
  long unaff_x22;
  
                    /* catch() { ... } // from try @ 033a8d88 with catch @ 033a8fa0
                       catch() { ... } // from try @ 033a8f7c with catch @ 033a8fa0 */
                    /* catch() { ... } // from try @ 033a8bf8 with catch @ 033a8fa4 */
                    /* catch() { ... } // from try @ 033a8f00 with catch @ 033a8fa8
                       catch() { ... } // from try @ 033a8f78 with catch @ 033a8fa8 */
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
                    /* catch() { ... } // from try @ 033a8ec8 with catch @ 033a8fac
                       catch() { ... } // from try @ 033a8f44 with catch @ 033a8fac */
                    /* catch() { ... } // from try @ 033a8ccc with catch @ 033a8fb0
                       catch() { ... } // from try @ 033a8f68 with catch @ 033a8fb0 */
                    /* catch() { ... } // from try @ 033a8c98 with catch @ 033a8fb4
                       catch() { ... } // from try @ 033a8f58 with catch @ 033a8fb4 */
  FUN_01d7d918(StringLiteral_8453);
  *(undefined1 *)(unaff_x22 + 0x894) = 1;
  uVar1 = *unaff_x20;
                    /* try { // try from 033a8fcc to 034a8fcf has its CatchHandler @ 033a8fe0 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a87c8(uVar1);
  if (unaff_x19 != 0) {
                    /* catch() { ... } // from try @ 033a8fcc with catch @ 033a8fe0 */
                    /* try { // try from 033a8fec to 034a8ff7 has its CatchHandler @ 033a900c */
    FUN_032dfb50();
                    /* try { // try from 033a8ff8 to 034a9003 has its CatchHandler @ 033a8afc */
                    /* try { // try from 033a9004 to 034a900b has its CatchHandler @ 033a900c */
                    /* catch() { ... } // from try @ 033a8fec with catch @ 033a900c
                       catch() { ... } // from try @ 033a9004 with catch @ 033a900c */
    FUN_032e0f70();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


