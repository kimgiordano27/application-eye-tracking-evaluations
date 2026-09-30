/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitialized
ENTRY_POINT: 07a2c3d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughInitialized(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_09285bb0);
  *(undefined1 *)(unaff_x21 + 0x1f2) = 1;
  thunk_FUN_040b4efc(*unaff_x22);
                    /* try { // try from 07a2c3f8 to 07b2c3ff has its CatchHandler @ 07a2c4c0 */
  FUN_075d444c();
                    /* try { // try from 07a2c408 to 07b2c40f has its CatchHandler @ 07a2c4bc */
  FUN_079799f4();
                    /* try { // try from 07a2c424 to 07b2c427 has its CatchHandler @ 07a2c4b4 */
                    /* try { // try from 07a2c430 to 07b2c433 has its CatchHandler @ 07a2c4c0 */
  if ((*(long *)(unaff_x19 + 0x128) != 0) &&
     (lVar2 = FUN_04f38b94(*(long *)(unaff_x19 + 0x128),*(undefined8 *)PTR_DAT_09289950), lVar2 != 0
     )) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar3 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      do {
        if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar3 = uVar3 - 1;
        uVar1 = uVar1 - 1;
      } while (uVar3 != 0);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x168);
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_089ca704(uVar4,0,0);
    FUN_07979a98();
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 07a2c47c with catch @ 07a2c4a4 */
  FUN_04077830();
}


