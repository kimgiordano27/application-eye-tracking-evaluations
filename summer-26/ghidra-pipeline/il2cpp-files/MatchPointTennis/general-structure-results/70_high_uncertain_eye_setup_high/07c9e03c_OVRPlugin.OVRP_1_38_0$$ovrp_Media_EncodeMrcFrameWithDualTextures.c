/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 07c9e03c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures(long param_1,long param_2)

{
  uint uVar1;
  undefined1 in_CY;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  
  while (!(bool)in_CY) {
    if (unaff_x19 == 0) {
LAB_07c9e0ac:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
                    /* catch() { ... } // from try @ 07c9e01c with catch @ 07c9e048 */
    uVar1 = *(uint *)(param_1 + (long)(int)unaff_w22 * 4 + 0x20);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) break;
                    /* try { // try from 07c9e058 to 07d9e05f has its CatchHandler @ 07c9e074 */
    if (unaff_x20 == 0) goto LAB_07c9e0ac;
                    /* try { // try from 07c9e060 to 07d9e06b has its CatchHandler @ 07c9c908 */
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w22) break;
                    /* try { // try from 07c9e06c to 07d9e073 has its CatchHandler @ 07c9e074 */
    lVar2 = (long)(int)unaff_w22;
                    /* catch() { ... } // from try @ 07c9e058 with catch @ 07c9e074
                       catch() { ... } // from try @ 07c9e06c with catch @ 07c9e074 */
    unaff_w22 = unaff_w22 + 1;
    *(bool *)(unaff_x20 + lVar2 + 0x20) =
         uVar1 != 3 && *(int *)(unaff_x19 + (long)(int)uVar1 * 4 + 0x20) < 2;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_2 = *unaff_x21;
    }
    if (**(long **)(param_2 + 0xb8) == 0) goto LAB_07c9e0ac;
    if (*(int *)(**(long **)(param_2 + 0xb8) + 0x18) <= (int)unaff_w22) {
      return;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_2 = *unaff_x21;
    }
    param_1 = **(long **)(param_2 + 0xb8);
    if (param_1 == 0) goto LAB_07c9e0ac;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_w22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


