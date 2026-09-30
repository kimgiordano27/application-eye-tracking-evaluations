/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodeFrustum
ENTRY_POINT: 063b1c98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodeFrustum(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  lVar1 = RootMotion_FinalIK_Finger___ctor(param_1,2);
  if (lVar1 != 0) {
                    /* try { // try from 063b1cb8 to 064b1cbb has its CatchHandler @ 063b1cf8 */
    if ((*(int *)(lVar1 + 0x18) != 0) &&
       (*(undefined1 *)(lVar1 + 0x20) = 0xc2, *(int *)(lVar1 + 0x18) != 1)) {
                    /* try { // try from 063b1cc0 to 064b1cc3 has its CatchHandler @ 063b1cec */
      *(undefined1 *)(lVar1 + 0x21) = 0xdf;
                    /* try { // try from 063b1cc8 to 064b1cd3 has its CatchHandler @ 063b1cfc */
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8) = lVar1;
                    /* try { // try from 063b1cd4 to 064b1d13 has its CatchHandler @ 063b1a44 */
      thunk_FUN_037aeb94();
                    /* catch() { ... } // from try @ 063b1c48 with catch @ 063b1cd8 */
                    /* catch() { ... } // from try @ 063b1c38 with catch @ 063b1cdc */
                    /* catch() { ... } // from try @ 063b1c08 with catch @ 063b1ce0 */
      lVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x19,2);
                    /* catch() { ... } // from try @ 063b1bf8 with catch @ 063b1ce4 */
      if (lVar1 == 0) goto LAB_063b1d6c;
                    /* catch() { ... } // from try @ 063b1bbc with catch @ 063b1ce8 */
                    /* catch() { ... } // from try @ 063b1cc0 with catch @ 063b1cec */
                    /* catch() { ... } // from try @ 063b1b8c with catch @ 063b1cf0 */
                    /* catch() { ... } // from try @ 063b1b74 with catch @ 063b1cf4 */
                    /* catch() { ... } // from try @ 063b1b94 with catch @ 063b1cf8
                       catch() { ... } // from try @ 063b1cb8 with catch @ 063b1cf8 */
                    /* catch() { ... } // from try @ 063b1bc4 with catch @ 063b1cfc
                       catch() { ... } // from try @ 063b1cc8 with catch @ 063b1cfc */
      if ((*(int *)(lVar1 + 0x18) != 0) &&
         (*(undefined1 *)(lVar1 + 0x20) = 0xe0, *(int *)(lVar1 + 0x18) != 1)) {
        *(undefined1 *)(lVar1 + 0x21) = 0xef;
        *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = lVar1;
        thunk_FUN_037aeb94();
        lVar1 = RootMotion_FinalIK_Finger___ctor(*unaff_x19,2);
        if (lVar1 == 0) goto LAB_063b1d6c;
        if ((*(int *)(lVar1 + 0x18) != 0) &&
           (*(undefined1 *)(lVar1 + 0x20) = 0xf0, *(int *)(lVar1 + 0x18) != 1)) {
          *(undefined1 *)(lVar1 + 0x21) = 0xf4;
          *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = lVar1;
          thunk_FUN_037aeb94();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_063b1d6c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


