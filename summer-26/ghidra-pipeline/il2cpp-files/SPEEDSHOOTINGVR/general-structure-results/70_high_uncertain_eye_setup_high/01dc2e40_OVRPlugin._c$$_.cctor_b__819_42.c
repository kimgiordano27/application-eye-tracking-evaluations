/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_42
ENTRY_POINT: 01dc2e40
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_42(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 *unaff_x19;
  long unaff_x24;
  
                    /* catch() { ... } // from try @ 01dc2ba4 with catch @ 01dc2e40 */
                    /* catch() { ... } // from try @ 01dc297c with catch @ 01dc2e44 */
  if (0 < (int)param_1) {
                    /* catch() { ... } // from try @ 01dc2ba0 with catch @ 01dc2e48 */
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01dc2ac0 with catch @ 01dc2e90 */
      FUN_00fdc534();
    }
                    /* catch() { ... } // from try @ 01dc2908 with catch @ 01dc2e4c */
    uVar2 = *(uint *)(unaff_x24 + 0x18);
                    /* catch() { ... } // from try @ 01dc2b54 with catch @ 01dc2e50 */
    uVar3 = 0;
                    /* catch() { ... } // from try @ 01dc2b10 with catch @ 01dc2e54 */
                    /* catch() { ... } // from try @ 01dc28d8 with catch @ 01dc2e58 */
    do {
                    /* catch() { ... } // from try @ 01dc2b98 with catch @ 01dc2e5c */
                    /* catch() { ... } // from try @ 01dc28a8 with catch @ 01dc2e60 */
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01dc299c with catch @ 01dc2e8c
                       catch() { ... } // from try @ 01dc2ba8 with catch @ 01dc2e8c */
        FUN_00fdc53c();
      }
                    /* catch() { ... } // from try @ 01dc2b94 with catch @ 01dc2e64 */
      lVar1 = uVar3 * 2;
                    /* catch() { ... } // from try @ 01dc288c with catch @ 01dc2e68 */
      uVar3 = uVar3 + 1;
                    /* catch() { ... } // from try @ 01dc2874 with catch @ 01dc2e6c */
                    /* catch() { ... } // from try @ 01dc2b90 with catch @ 01dc2e70 */
      *unaff_x19 = *(undefined2 *)(unaff_x24 + 0x20 + lVar1);
      unaff_x19 = unaff_x19 + 1;
                    /* catch() { ... } // from try @ 01dc2850 with catch @ 01dc2e74 */
    } while (param_1 != uVar3);
  }
                    /* catch() { ... } // from try @ 01dc2840 with catch @ 01dc2e78 */
                    /* catch() { ... } // from try @ 01dc2b8c with catch @ 01dc2e7c */
                    /* catch() { ... } // from try @ 01dc2828 with catch @ 01dc2e80 */
                    /* catch() { ... } // from try @ 01dc2b50 with catch @ 01dc2e84 */
                    /* catch() { ... } // from try @ 01dc2810 with catch @ 01dc2e88 */
  return;
}


