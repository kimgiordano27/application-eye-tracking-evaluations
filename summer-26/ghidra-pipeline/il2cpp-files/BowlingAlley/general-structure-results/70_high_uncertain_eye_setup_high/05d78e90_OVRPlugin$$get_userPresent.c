/*
FUNCTION_NAME: OVRPlugin$$get_userPresent
ENTRY_POINT: 05d78e90
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_userPresent(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  ulong uVar2;
  long lVar3;
  
  while( true ) {
                    /* catch() { ... } // from try @ 05d78e68 with catch @ 05d78e90 */
    lVar3 = *(long *)(unaff_x19 + 0x88);
                    /* catch() { ... } // from try @ 05d78e64 with catch @ 05d78e94 */
    unaff_x21 = unaff_x21 + 1;
                    /* catch() { ... } // from try @ 05d78d80 with catch @ 05d78e98 */
    if (lVar3 == 0) break;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x21) {
                    /* catch() { ... } // from try @ 05d78b24 with catch @ 05d78ea0 */
                    /* catch() { ... } // from try @ 05d78b00 with catch @ 05d78ea4 */
                    /* catch() { ... } // from try @ 05d78c44 with catch @ 05d78ea8 */
                    /* catch() { ... } // from try @ 05d78c28 with catch @ 05d78eac */
                    /* catch() { ... } // from try @ 05d78ce0 with catch @ 05d78eb0 */
                    /* catch() { ... } // from try @ 05d78ca0 with catch @ 05d78eb4 */
      return;
    }
    uVar1 = FUN_032d5d3c(*unaff_x22,*(undefined4 *)(unaff_x19 + 0x80));
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
LAB_05d78eb8:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    *(undefined8 *)(lVar3 + unaff_x21 * 8 + 0x20) = uVar1;
    thunk_FUN_0333a630();
    if (0 < *(int *)(unaff_x19 + 0x80)) {
      uVar2 = 0;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x88);
        if (lVar3 == 0) goto LAB_05d78e9c;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_05d78eb8;
        lVar3 = *(long *)(lVar3 + unaff_x21 * 8 + 0x20);
        if (*(char *)(unaff_x23 + 0x761) == '\0') {
          thunk_FUN_032e1da0();
          *(undefined1 *)(unaff_x23 + 0x761) = unaff_w24;
        }
        if (lVar3 == 0) goto LAB_05d78e9c;
        if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_05d78eb8;
        uVar1 = **(undefined8 **)(*unaff_x20 + 0xb8);
        lVar3 = lVar3 + uVar2 * 0x10;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(lVar3 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
        *(undefined8 *)(lVar3 + 0x20) = uVar1;
      } while ((long)uVar2 < (long)*(int *)(unaff_x19 + 0x80));
    }
  }
LAB_05d78e9c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05d78da4 with catch @ 05d78e9c */
  FUN_032d5ee8();
}


