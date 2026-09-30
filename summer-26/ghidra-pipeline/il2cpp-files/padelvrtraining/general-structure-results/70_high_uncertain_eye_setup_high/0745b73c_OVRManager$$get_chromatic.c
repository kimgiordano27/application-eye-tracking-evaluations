/*
FUNCTION_NAME: OVRManager$$get_chromatic
ENTRY_POINT: 0745b73c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_chromatic(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  float unaff_s8;
  
  puVar5 = PTR_DAT_09222eb8;
                    /* catch() { ... } // from try @ 0745b3cc with catch @ 0745b73c */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 0745b708 with catch @ 0745b740 */
                    /* catch() { ... } // from try @ 0745b3a0 with catch @ 0745b744 */
                    /* catch() { ... } // from try @ 0745b324 with catch @ 0745b748 */
                    /* catch() { ... } // from try @ 0745b704 with catch @ 0745b74c */
    lVar6 = FUN_073f6e4c(param_1,0);
                    /* catch() { ... } // from try @ 0745b700 with catch @ 0745b750 */
    lVar7 = *(long *)puVar5;
                    /* catch() { ... } // from try @ 0745b374 with catch @ 0745b754 */
                    /* catch() { ... } // from try @ 0745b6fc with catch @ 0745b758 */
                    /* catch() { ... } // from try @ 0745b6f8 with catch @ 0745b75c */
    if (*(int *)(lVar7 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0745b328 with catch @ 0745b760 */
                    /* catch() { ... } // from try @ 0745b27c with catch @ 0745b764 */
      thunk_FUN_03db619c(lVar7);
                    /* catch() { ... } // from try @ 0745b6f4 with catch @ 0745b768 */
      lVar7 = *(long *)puVar5;
    }
                    /* catch() { ... } // from try @ 0745b6f0 with catch @ 0745b76c */
                    /* catch() { ... } // from try @ 0745b4f8 with catch @ 0745b770 */
    if (0.0 <= unaff_s8) {
      puVar1 = (undefined4 *)(unaff_x19 + 0x78);
      puVar2 = (undefined4 *)(unaff_x19 + 0x7c);
      puVar3 = (undefined4 *)(unaff_x19 + 0x80);
      puVar4 = (undefined4 *)(unaff_x19 + 0x84);
    }
    else {
                    /* catch() { ... } // from try @ 0745b6ec with catch @ 0745b774 */
      if ((unaff_x20 & 1) == 0) {
        puVar1 = (undefined4 *)(unaff_x19 + 0x88);
                    /* try { // try from 0745b7ac to 0755b7af has its CatchHandler @ 0745b7d8 */
        puVar2 = (undefined4 *)(unaff_x19 + 0x8c);
                    /* try { // try from 0745b7b0 to 0755b7e7 has its CatchHandler @ 0745b09c */
        puVar3 = (undefined4 *)(unaff_x19 + 0x90);
        puVar4 = (undefined4 *)(unaff_x19 + 0x94);
      }
      else {
                    /* catch() { ... } // from try @ 0745b264 with catch @ 0745b778 */
        puVar1 = (undefined4 *)(unaff_x19 + 0x98);
                    /* catch() { ... } // from try @ 0745b6e8 with catch @ 0745b77c */
        puVar2 = (undefined4 *)(unaff_x19 + 0x9c);
                    /* catch() { ... } // from try @ 0745b6e0 with catch @ 0745b780 */
        puVar3 = (undefined4 *)(unaff_x19 + 0xa0);
                    /* catch() { ... } // from try @ 0745b1f4 with catch @ 0745b784 */
        puVar4 = (undefined4 *)(unaff_x19 + 0xa4);
                    /* catch() { ... } // from try @ 0745b6dc with catch @ 0745b788
                       catch() { ... } // from try @ 0745b6e4 with catch @ 0745b788 */
      }
    }
    if (lVar6 != 0) {
      thunk_FUN_08a1e3fc(*puVar1,*puVar2,*puVar3,*puVar4,lVar6,
                         *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        lVar6 = FUN_073f6e4c(*(long *)(unaff_x19 + 0x58),0);
        lVar7 = *(long *)puVar5;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03db619c(lVar7);
          lVar7 = *(long *)puVar5;
        }
        if (unaff_s8 <= 0.0) {
          puVar1 = (undefined4 *)(unaff_x19 + 0x78);
          puVar2 = (undefined4 *)(unaff_x19 + 0x7c);
          puVar3 = (undefined4 *)(unaff_x19 + 0x80);
          puVar4 = (undefined4 *)(unaff_x19 + 0x84);
        }
        else if ((unaff_x20 & 1) == 0) {
          puVar1 = (undefined4 *)(unaff_x19 + 0x88);
          puVar2 = (undefined4 *)(unaff_x19 + 0x8c);
          puVar3 = (undefined4 *)(unaff_x19 + 0x90);
          puVar4 = (undefined4 *)(unaff_x19 + 0x94);
        }
        else {
          puVar1 = (undefined4 *)(unaff_x19 + 0x98);
          puVar2 = (undefined4 *)(unaff_x19 + 0x9c);
          puVar3 = (undefined4 *)(unaff_x19 + 0xa0);
          puVar4 = (undefined4 *)(unaff_x19 + 0xa4);
        }
        if (lVar6 != 0) {
          thunk_FUN_08a1e3fc(*puVar1,*puVar2,*puVar3,*puVar4,lVar6,
                             *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
          if (*(long *)(unaff_x19 + 0x50) != 0) {
            FUN_073f6ebc(*(long *)(unaff_x19 + 0x50),0);
            if (*(long *)(unaff_x19 + 0x58) != 0) {
              FUN_073f6ebc(*(long *)(unaff_x19 + 0x58),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


