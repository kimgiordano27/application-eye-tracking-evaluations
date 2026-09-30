/*
FUNCTION_NAME: OVRPlugin$$GetControllerIsInHand
ENTRY_POINT: 01d7df84
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetControllerIsInHand(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = **(undefined8 **)(param_1 + 0x700);
  thunk_FUN_0106e12c();
                    /* try { // try from 01d7df9c to 01e7dfab has its CatchHandler @ 01d7dfc0 */
  if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar1 = FUN_01d7de70(*(long *)(unaff_x20 + 0x28),unaff_w19 & 1,unaff_w21 & 1);
                    /* try { // try from 01d7dfac to 01e7dfd7 has its CatchHandler @ 01d7df14 */
  if (2 < *(uint *)(unaff_x22 + 0x18)) {
    *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01d7df9c with catch @ 01d7dfc0
                        */
    thunk_FUN_0106e12c((undefined8 *)(unaff_x22 + 0x30),uVar1);
    uVar1 = FUN_01d7e0a8();
                    /* try { // try from 01d7dfd8 to 01e7dfdb has its CatchHandler @ 01d7e008 */
    if (3 < *(uint *)(unaff_x22 + 0x18)) {
                    /* try { // try from 01d7dfdc to 01e7e00b has its CatchHandler @ 01d7df14 */
      *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
      thunk_FUN_0106e12c((undefined8 *)(unaff_x22 + 0x38),uVar1);
      if (4 < *(uint *)(unaff_x22 + 0x18)) {
                    /* catch() { ... } // from try @ 01d7dfd8 with catch @ 01d7e008 */
                    /* try { // try from 01d7e00c to 01e7e017 has its CatchHandler @ 01d7e02c */
        *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)PTR_DAT_02358fc8;
        thunk_FUN_0106e12c((undefined8 *)(unaff_x22 + 0x40));
                    /* try { // try from 01d7e018 to 01e7e023 has its CatchHandler @ 01d7df14 */
        if (5 < *(uint *)(unaff_x22 + 0x18)) {
                    /* try { // try from 01d7e024 to 01e7e02b has its CatchHandler @ 01d7e02c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01d7e00c with catch @ 01d7e02c
                       catch(type#2 @ 00000000) { ... } // from try @ 01d7e024 with catch @ 01d7e02c
                        */
          *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)PTR_DAT_02358fd0;
          thunk_FUN_0106e12c();
          uVar1 = FUN_01c515a0();
          lVar2 = FUN_01d7dc5c();
          if (lVar2 != 0) {
            uVar3 = FUN_01d7e0a8();
            uVar1 = FUN_01c513d4(uVar1,uVar3,lVar2,0);
            return uVar1;
          }
          return uVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


