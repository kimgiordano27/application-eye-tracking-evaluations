/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 0693c798
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_chromatic(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x21;
  
  if (param_1 != 0) {
    uVar2 = FUN_07c379b4(param_1,*(undefined8 *)PTR_DAT_084b60e0,0);
                    /* try { // try from 0693c7b0 to 06a3c7d7 has its CatchHandler @ 0693c8f8 */
    uVar2 = FUN_044c8b18(uVar2,*unaff_x21);
    *(undefined8 *)(unaff_x19 + 200) = uVar2;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 200),uVar2);
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      uVar2 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60f8,0);
      uVar2 = FUN_044c8b18(uVar2,*unaff_x21);
      *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
                    /* try { // try from 0693c7fc to 06a3c803 has its CatchHandler @ 0693c8e8 */
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd8),uVar2);
      if (*(long *)(unaff_x19 + 0xb0) != 0) {
                    /* try { // try from 0693c810 to 06a3c813 has its CatchHandler @ 0693c874 */
                    /* try { // try from 0693c818 to 06a3c81b has its CatchHandler @ 0693c870 */
        uVar2 = FUN_07c379b4(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b60e8,0);
                    /* try { // try from 0693c820 to 06a3c823 has its CatchHandler @ 0693c86c */
        uVar2 = FUN_044c8b18(uVar2,*unaff_x21);
                    /* try { // try from 0693c828 to 06a3c82b has its CatchHandler @ 0693c858 */
                    /* try { // try from 0693c830 to 06a3c833 has its CatchHandler @ 0693c850 */
        *(undefined8 *)(unaff_x19 + 0xd0) = uVar2;
                    /* try { // try from 0693c838 to 06a3c83b has its CatchHandler @ 0693c840 */
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0xd0),uVar2);
                    /* try { // try from 0693c83c to 06a3c8a3 has its CatchHandler @ 0693bfdc */
                    /* catch() { ... } // from try @ 0693c838 with catch @ 0693c840 */
        if (*(long *)(unaff_x19 + 0xb0) != 0) {
                    /* catch() { ... } // from try @ 0693c6e4 with catch @ 0693c844
                       catch() { ... } // from try @ 0693c74c with catch @ 0693c844 */
                    /* catch() { ... } // from try @ 0693c630 with catch @ 0693c848 */
                    /* catch() { ... } // from try @ 0693c664 with catch @ 0693c84c */
                    /* catch() { ... } // from try @ 0693c830 with catch @ 0693c850 */
                    /* catch() { ... } // from try @ 0693c654 with catch @ 0693c854 */
                    /* catch() { ... } // from try @ 0693c828 with catch @ 0693c858 */
          FUN_07c37db0(*(long *)(unaff_x19 + 0xb0),*(undefined8 *)PTR_DAT_084b6130,unaff_x19 + 0x120
                       ,0);
          puVar1 = PTR_DAT_084883a0;
                    /* catch() { ... } // from try @ 0693c718 with catch @ 0693c85c */
                    /* catch() { ... } // from try @ 0693c698 with catch @ 0693c860 */
          if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 0693c634 with catch @ 0693c864 */
                    /* catch() { ... } // from try @ 0693c67c with catch @ 0693c868 */
                    /* catch() { ... } // from try @ 0693c820 with catch @ 0693c86c */
            lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x38);
            uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
            FUN_07cb26a0();
            if (lVar3 != 0) {
              FUN_07cb2770(lVar3,uVar2,0);
              if (*(long *)(unaff_x19 + 0x10) != 0) {
                lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
                uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                FUN_07cb26a0();
                if (lVar3 != 0) {
                  FUN_07cb2770(lVar3,uVar2,0);
                  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
                    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                    FUN_07cb26a0();
                    if (lVar3 != 0) {
                      FUN_07cb2770(lVar3,uVar2,0);
                      if (*(long *)(unaff_x19 + 0x18) != 0) {
                        *(undefined1 *)(*(long *)(unaff_x19 + 0x18) + 0x19) = 1;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


