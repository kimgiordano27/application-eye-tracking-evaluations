/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 05d80e98
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


long OVRPlugin__CreatePassthroughColorLut(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  *(undefined1 *)(unaff_x26 + 0x817) = in_w8;
                    /* try { // try from 05d80ea8 to 05e80eab has its CatchHandler @ 05d80eb8 */
  uVar1 = thunk_FUN_032a52d0(*unaff_x25,&stack0x0000000c);
                    /* catch() { ... } // from try @ 05d80ea8 with catch @ 05d80eb8 */
  uVar1 = FUN_057a25c4(*unaff_x24,uVar1,0);
                    /* try { // try from 05d80ec4 to 05e80ecf has its CatchHandler @ 05d80ee4 */
  lVar2 = thunk_FUN_032a56a0(*unaff_x23);
                    /* try { // try from 05d80ed0 to 05e80edb has its CatchHandler @ 05d80ce0 */
                    /* try { // try from 05d80edc to 05e80ee3 has its CatchHandler @ 05d80ee4 */
  FUN_06be9c64(lVar2,uVar1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d80ec4 with catch @ 05d80ee4
                       catch(type#2 @ 00000000) { ... } // from try @ 05d80edc with catch @ 05d80ee4
                        */
  if ((lVar2 != 0) && (lVar2 = FUN_039efc38(lVar2,*(undefined8 *)PTR_DAT_0727b9b8), lVar2 != 0)) {
    FUN_06c411b8(0x3f800000,lVar2,0);
    FUN_06c412c0(lVar2,1,0);
    FUN_06c41240(lVar2,0,0);
    FUN_06c41404(lVar2,3,0);
    lVar3 = FUN_06be6b04(lVar2,0);
    if (lVar3 != 0) {
      FUN_06bf5194();
      FUN_06be6b04(lVar2,0);
      FUN_05cf3994();
      FUN_06c41a24(lVar2,0);
      lVar3 = FUN_06be6b40(lVar2,0);
      if (lVar3 != 0) {
        FUN_06be9a98(lVar3,0,0);
                    /* catch() { ... } // from try @ 05d80fb8 with catch @ 05d80fa8
                       catch() { ... } // from try @ 05d80fe8 with catch @ 05d80fa8
                       catch() { ... } // from try @ 05d81024 with catch @ 05d80fa8 */
        lVar3 = FUN_06be6b40(lVar2,0);
        if (lVar3 != 0) {
                    /* try { // try from 05d80fb4 to 05e80fb7 has its CatchHandler @ 05d80fcc */
          FUN_06be9a54(lVar3,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


