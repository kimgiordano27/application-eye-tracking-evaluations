/*
FUNCTION_NAME: OVRPlugin$$get_hmdPresent
ENTRY_POINT: 05d78dfc
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


void OVRPlugin__get_hmdPresent(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  ulong uVar3;
  
  do {
    uVar1 = FUN_032d5d3c(param_1,param_2);
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x21) {
LAB_05d78eb8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05d78c64 with catch @ 05d78eb8 */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    *(undefined8 *)(unaff_x25 + unaff_x21 * 8 + 0x20) = uVar1;
    thunk_FUN_0333a630();
    if (0 < *(int *)(unaff_x19 + 0x80)) {
      uVar3 = 0;
      do {
                    /* try { // try from 05d78e2c to 05e78e53 has its CatchHandler @ 05d78e78 */
        lVar2 = *(long *)(unaff_x19 + 0x88);
        if (lVar2 == 0) goto LAB_05d78e9c;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_05d78eb8;
        lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
        if (*(char *)(unaff_x23 + 0x761) == '\0') {
          thunk_FUN_032e1da0();
          *(undefined1 *)(unaff_x23 + 0x761) = unaff_w24;
        }
                    /* try { // try from 05d78e5c to 05e78e5f has its CatchHandler @ 05d78ec8 */
        if (lVar2 == 0) goto LAB_05d78e9c;
                    /* try { // try from 05d78e60 to 05e78e63 has its CatchHandler @ 05d78ec4 */
                    /* try { // try from 05d78e64 to 05e78e67 has its CatchHandler @ 05d78e94 */
                    /* try { // try from 05d78e68 to 05e78e6b has its CatchHandler @ 05d78e90 */
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_05d78eb8;
                    /* try { // try from 05d78e6c to 05e78e6f has its CatchHandler @ 05d78e8c */
                    /* catch() { ... } // from try @ 05d78b90 with catch @ 05d78e70
                       try { // try from 05d78e70 to 05e78ee3 has its CatchHandler @ 05d78994 */
                    /* catch() { ... } // from try @ 05d78ba4 with catch @ 05d78e74 */
        uVar1 = **(undefined8 **)(*unaff_x20 + 0xb8);
                    /* catch() { ... } // from try @ 05d78e2c with catch @ 05d78e78 */
        lVar2 = lVar2 + uVar3 * 0x10;
                    /* catch() { ... } // from try @ 05d78afc with catch @ 05d78e7c */
        uVar3 = uVar3 + 1;
                    /* catch() { ... } // from try @ 05d78de8 with catch @ 05d78e80 */
        *(undefined8 *)(lVar2 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
        *(undefined8 *)(lVar2 + 0x20) = uVar1;
                    /* catch() { ... } // from try @ 05d78b74 with catch @ 05d78e84 */
                    /* catch() { ... } // from try @ 05d78b60 with catch @ 05d78e88 */
                    /* catch() { ... } // from try @ 05d78e6c with catch @ 05d78e8c */
      } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x80));
    }
    unaff_x25 = *(long *)(unaff_x19 + 0x88);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x25 == 0) {
LAB_05d78e9c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((long)*(int *)(unaff_x25 + 0x18) <= (long)unaff_x21) {
      return;
    }
    param_2 = (ulong)*(uint *)(unaff_x19 + 0x80);
    param_1 = *unaff_x22;
  } while( true );
}


