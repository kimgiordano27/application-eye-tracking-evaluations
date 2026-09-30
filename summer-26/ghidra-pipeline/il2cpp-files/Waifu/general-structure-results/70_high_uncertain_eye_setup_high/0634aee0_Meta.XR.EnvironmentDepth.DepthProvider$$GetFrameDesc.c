/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProvider$$GetFrameDesc
ENTRY_POINT: 0634aee0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_EnvironmentDepth_DepthProvider__GetFrameDesc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long unaff_x22;
  undefined1 auVar3 [16];
  undefined4 in_stack_000000e8;
  undefined4 uStack00000000000000ec;
  
  if (param_1 != 0) {
    lVar1 = FUN_06317848(param_1,0);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x50) != 0)) && (*(long *)(unaff_x22 + 0x18) != 0)) {
      lVar1 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                    /* try { // try from 0634af1c to 0644af27 has its CatchHandler @ 0634af54 */
      if (((lVar1 != 0) && (*(long *)(lVar1 + 0x58) != 0)) && (*(long *)(unaff_x22 + 0x18) != 0)) {
        lVar1 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                    /* try { // try from 0634af3c to 0644af3f has its CatchHandler @ 0634af84 */
                    /* try { // try from 0634af40 to 0644af43 has its CatchHandler @ 0634af70 */
                    /* try { // try from 0634af44 to 0644af47 has its CatchHandler @ 0634af80 */
                    /* try { // try from 0634af48 to 0644af4b has its CatchHandler @ 0634af68 */
                    /* try { // try from 0634af4c to 0644af4f has its CatchHandler @ 0634af60 */
        if (((lVar1 != 0) && (*(long *)(lVar1 + 0x60) != 0)) && (*(long *)(unaff_x22 + 0x18) != 0))
        {
                    /* try { // try from 0634af50 to 0644af53 has its CatchHandler @ 0634af78 */
                    /* catch() { ... } // from try @ 0634af1c with catch @ 0634af54
                       try { // try from 0634af54 to 0644af9b has its CatchHandler @ 0634ab94 */
                    /* catch() { ... } // from try @ 0634aeb4 with catch @ 0634af58 */
                    /* catch() { ... } // from try @ 0634ad94 with catch @ 0634af5c */
          lVar1 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                    /* catch() { ... } // from try @ 0634af4c with catch @ 0634af60 */
                    /* catch() { ... } // from try @ 0634ad20 with catch @ 0634af64 */
                    /* catch() { ... } // from try @ 0634af48 with catch @ 0634af68 */
                    /* catch() { ... } // from try @ 0634ae1c with catch @ 0634af6c */
                    /* catch() { ... } // from try @ 0634af40 with catch @ 0634af70 */
          if (((lVar1 != 0) && (*(long *)(lVar1 + 0xa0) != 0)) && (*(long *)(unaff_x22 + 0x18) != 0)
             ) {
                    /* catch() { ... } // from try @ 0634ae38 with catch @ 0634af74 */
                    /* catch() { ... } // from try @ 0634ad30 with catch @ 0634af78
                       catch() { ... } // from try @ 0634af50 with catch @ 0634af78 */
            lVar1 = FUN_0631798c(*(long *)(unaff_x22 + 0x18),0);
            if (((lVar1 != 0) && (*(long *)(lVar1 + 0x58) != 0)) &&
               (*(long *)(unaff_x22 + 0x18) != 0)) {
              lVar1 = FUN_063178b4(*(long *)(unaff_x22 + 0x18),0);
              if (((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) &&
                 (*(long *)(unaff_x22 + 0x18) != 0)) {
                lVar1 = FUN_0631798c(*(long *)(unaff_x22 + 0x18),0);
                if (((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) &&
                   (*(long *)(unaff_x22 + 0x18) != 0)) {
                  lVar1 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                  if (((lVar1 != 0) && (*(long *)(lVar1 + 0xa8) != 0)) &&
                     (*(long *)(unaff_x22 + 0x18) != 0)) {
                    lVar1 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                    if (((lVar1 != 0) && (*(long *)(lVar1 + 0xc0) != 0)) &&
                       (*(long *)(unaff_x22 + 0x18) != 0)) {
                      lVar1 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                      if (lVar1 != 0) {
                        if ((*(long *)(lVar1 + 200) != 0) && (*(long *)(unaff_x22 + 0x18) != 0)) {
                          lVar1 = FUN_06317848(*(long *)(unaff_x22 + 0x18),0);
                          if (lVar1 != 0) {
                            if ((DAT_086de93e & 1) == 0) {
                              FUN_0335b6c8(&DAT_083eb4b0,1);
                              DataMemoryBarrier(2,3);
                              DAT_086de93e = 1;
                            }
                            if (*(long *)(lVar1 + 0x18) == 0) {
                              uVar2 = 0;
                            }
                            else {
                              uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x18) + 0x30);
                            }
                            uStack00000000000000ec = 0;
                            auVar3 = FUN_0400281c(&stack0x000000e8,uVar2,0x40);
                            return auVar3;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


