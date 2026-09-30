/*
FUNCTION_NAME: OVRManager$$UseDirectCompositionFromCmd
ENTRY_POINT: 02c059a0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UseDirectCompositionFromCmd(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w8;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  
  if (in_w8 < 1) {
    uVar2 = FUN_02c05614();
  }
  else {
                    /* try { // try from 02c059a8 to 02d059af has its CatchHandler @ 02c05a18 */
    uVar2 = FUN_02c05614();
                    /* try { // try from 02c059b0 to 02d059fb has its CatchHandler @ 02c0572c */
    uVar2 = FUN_02a503d0(uVar2,*(undefined8 *)PTR_DAT_037f4e90);
  }
  if (*(long *)(unaff_x20 + 0x28) == 0) {
LAB_02c05b00:
    lVar3 = FUN_02c05794();
    if (lVar3 != 0) {
      uVar4 = FUN_02c145cc(0);
      uVar2 = FUN_02a503d0(uVar2,uVar4,lVar3,0);
      return uVar2;
    }
    return uVar2;
  }
  lVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2cb0,6);
  if (lVar3 != 0) {
                    /* try { // try from 02c059fc to 02d059ff has its CatchHandler @ 02c05a14 */
                    /* catch() { ... } // from try @ 02c0593c with catch @ 02c05a00
                       try { // try from 02c05a00 to 02d05a2f has its CatchHandler @ 02c0572c */
    if (*(int *)(lVar3 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 02c058f4 with catch @ 02c05a04 */
                    /* catch() { ... } // from try @ 02c05930 with catch @ 02c05a08 */
      *(undefined8 *)(lVar3 + 0x20) = uVar2;
                    /* catch() { ... } // from try @ 02c0591c with catch @ 02c05a0c */
                    /* catch() { ... } // from try @ 02c05914 with catch @ 02c05a10 */
                    /* catch() { ... } // from try @ 02c058f8 with catch @ 02c05a14
                       catch() { ... } // from try @ 02c059fc with catch @ 02c05a14 */
      thunk_FUN_0188fd20((undefined8 *)(lVar3 + 0x20),uVar2);
                    /* catch() { ... } // from try @ 02c0585c with catch @ 02c05a18
                       catch() { ... } // from try @ 02c059a8 with catch @ 02c05a18 */
      if (1 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 02c05a30 to 02d05a47 has its CatchHandler @ 02c05a7c */
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_03803cc8;
        thunk_FUN_0188fd20();
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_02c05b5c;
                    /* try { // try from 02c05a48 to 02d05a6b has its CatchHandler @ 02c0572c */
        uVar2 = FUN_02c05914(*(long *)(unaff_x20 + 0x28),unaff_w19 & 1,unaff_w21 & 1);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar2;
          thunk_FUN_0188fd20((undefined8 *)(lVar3 + 0x30),uVar2);
          uVar2 = FUN_02c145cc(0);
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = uVar2;
            thunk_FUN_0188fd20((undefined8 *)(lVar3 + 0x38),uVar2);
            puVar1 = PTR_DAT_0380ae20;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_037ff190;
              thunk_FUN_0188fd20((undefined8 *)(lVar3 + 0x40));
              uVar2 = FUN_02c108dc(*(undefined8 *)puVar1,0);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar2;
                thunk_FUN_0188fd20();
                uVar2 = FUN_02a507f8(lVar3,0);
                goto LAB_02c05b00;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
LAB_02c05b5c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


