/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 07477200
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryVisible(long param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 074771e0 with catch @ 07477200 */
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 07476f7c with catch @ 07477204 */
                    /* catch() { ... } // from try @ 07476fa4 with catch @ 07477208
                       catch() { ... } // from try @ 07476fdc with catch @ 07477208
                       catch() { ... } // from try @ 07477058 with catch @ 07477208 */
                    /* catch() { ... } // from try @ 07476fc4 with catch @ 0747720c */
                    /* catch() { ... } // from try @ 07476f80 with catch @ 07477210 */
                    /* catch() { ... } // from try @ 07476ff0 with catch @ 07477214 */
    in_stack_00000018 = FUN_07468b50(param_2);
    if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 0747722c to 0757722f has its CatchHandler @ 0747723c */
      FUN_0749011c(0x3f800000,*(long *)(param_1 + 0x48),&stack0x00000018,0);
      uVar2 = 0;
                    /* catch() { ... } // from try @ 0747722c with catch @ 0747723c */
                    /* try { // try from 07477240 to 0757725f has its CatchHandler @ 07477274 */
      while (lVar1 = FUN_07469510(param_2), lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        iStack000000000000000c = *(int *)(lVar1 + uVar2 * 4 + 0x20);
        uStack0000000000000008 = (uint)uVar2;
                    /* try { // try from 07477260 to 0757726b has its CatchHandler @ 07476ee0 */
                    /* try { // try from 0747726c to 07577273 has its CatchHandler @ 07477274 */
        if (iStack000000000000000c == 1 &&
            (1 << (ulong)(uStack0000000000000008 & 0x1f) & param_3) != 0) {
          iStack000000000000000c = 2;
        }
                    /* catch() { ... } // from try @ 07477240 with catch @ 07477274
                       catch() { ... } // from try @ 0747726c with catch @ 07477274 */
        if (*(long *)(param_1 + 0x48) == 0) break;
        FUN_07490600(*(long *)(param_1 + 0x48),&stack0x00000008,(long)&stack0x00000008 + 4,0,0);
        uVar2 = uVar2 + 1;
        if (uVar2 == 5) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


