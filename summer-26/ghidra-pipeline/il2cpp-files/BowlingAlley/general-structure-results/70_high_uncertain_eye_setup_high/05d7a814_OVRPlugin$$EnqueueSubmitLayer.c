/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 05d7a814
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSubmitLayer(ulong param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *unaff_x21;
  long unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uStack000000000000002c;
  
                    /* catch() { ... } // from try @ 05d7a7b4 with catch @ 05d7a814
                       catch() { ... } // from try @ 05d7a7f4 with catch @ 05d7a814 */
                    /* catch() { ... } // from try @ 05d7a6d0 with catch @ 05d7a818
                       catch() { ... } // from try @ 05d7a71c with catch @ 05d7a818 */
                    /* catch() { ... } // from try @ 05d7a700 with catch @ 05d7a81c
                       catch() { ... } // from try @ 05d7a734 with catch @ 05d7a81c */
  if ((param_1 & 1) == 0) {
                    /* catch() { ... } // from try @ 05d7a5f4 with catch @ 05d7a820 */
                    /* catch() { ... } // from try @ 05d7a698 with catch @ 05d7a824 */
                    /* catch() { ... } // from try @ 05d7a5ac with catch @ 05d7a828 */
    thunk_FUN_032e1da0(PTR_DAT_072aefc0);
                    /* catch() { ... } // from try @ 05d7a514 with catch @ 05d7a82c */
                    /* catch() { ... } // from try @ 05d7a558 with catch @ 05d7a830 */
    *(undefined1 *)(unaff_x22 + 0x7af) = 1;
  }
                    /* catch() { ... } // from try @ 05d7a78c with catch @ 05d7a834
                       catch() { ... } // from try @ 05d7a79c with catch @ 05d7a834 */
                    /* catch() { ... } // from try @ 05d7a7b8 with catch @ 05d7a838
                       catch() { ... } // from try @ 05d7a7dc with catch @ 05d7a838 */
  uVar1 = *param_3;
                    /* catch() { ... } // from try @ 05d7a7c0 with catch @ 05d7a83c
                       catch() { ... } // from try @ 05d7a7d4 with catch @ 05d7a83c */
                    /* catch() { ... } // from try @ 05d7a798 with catch @ 05d7a840
                       catch() { ... } // from try @ 05d7a7d0 with catch @ 05d7a840
                       catch() { ... } // from try @ 05d7a7e8 with catch @ 05d7a840 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 05d7a7ac with catch @ 05d7a844
                       catch() { ... } // from try @ 05d7a7c8 with catch @ 05d7a844 */
    thunk_FUN_032cd7c0();
  }
                    /* catch() { ... } // from try @ 05d7a7a0 with catch @ 05d7a848
                       catch() { ... } // from try @ 05d7a7e4 with catch @ 05d7a848 */
                    /* catch() { ... } // from try @ 05d7a46c with catch @ 05d7a84c */
  uVar2 = FUN_05d7a504(uVar1);
                    /* catch() { ... } // from try @ 05d7a4b4 with catch @ 05d7a850 */
  lVar3 = *(long *)(param_2 + 0x140);
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 05d7a868 to 05e7a86b has its CatchHandler @ 05d7a890 */
                    /* try { // try from 05d7a86c to 05e7a89f has its CatchHandler @ 05d7a248 */
      lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
      *(undefined4 *)(lVar3 + 0x20) = unaff_s11;
      *(undefined4 *)(lVar3 + 0x24) = unaff_s10;
      *(undefined4 *)(lVar3 + 0x28) = unaff_s9;
      *(undefined4 *)(lVar3 + 0x2c) = unaff_s8;
      lVar3 = *(long *)(param_2 + 0xd0);
      if (lVar3 == 0) goto LAB_05d7a8c8;
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                    /* catch() { ... } // from try @ 05d7a868 with catch @ 05d7a890 */
                    /* try { // try from 05d7a8a0 to 05e7a8b3 has its CatchHandler @ 05d7a914 */
        *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20) = 0x3f800000;
        uStack000000000000002c = 2;
        FUN_05d7a8d0(param_2,uVar2,&stack0x0000002c,0);
                    /* catch() { ... } // from try @ 05d7a450 with catch @ 05d7a8b4
                       try { // try from 05d7a8b4 to 05e7a8cb has its CatchHandler @ 05d7a248 */
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d7a8cc to 05e7a8cf has its CatchHandler @ 05d7a8f0 */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_05d7a8c8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


