/*
FUNCTION_NAME: FUN_06c94598
ENTRY_POINT: 06c94598
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06c94598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  puVar1 = PTR_DAT_072794f0;
                    /* catch() { ... } // from try @ 06c9457c with catch @ 06c945a8 */
                    /* try { // try from 06c945ac to 06d945af has its CatchHandler @ 06c945c4 */
                    /* try { // try from 06c945b0 to 06d945bb has its CatchHandler @ 06c9450c */
                    /* try { // try from 06c945bc to 06d945c3 has its CatchHandler @ 06c945c4 */
  if ((DAT_076e914f & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06c945ac with catch @ 06c945c4
                       catch(type#2 @ 00000000) { ... } // from try @ 06c945bc with catch @ 06c945c4
                        */
                    /* catch() { ... } // from try @ 06c94610 with catch @ 06c945c8
                       catch() { ... } // from try @ 06c9463c with catch @ 06c945c8
                       catch() { ... } // from try @ 06c9466c with catch @ 06c945c8 */
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_DictionaryContainsKey_Contains__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_UI_Dialog_OnCloseButtonClicked__);
    thunk_FUN_032e1da0(PTR_DAT_072b9a68);
                    /* try { // try from 06c945ec to 06d9460f has its CatchHandler @ 06c94620 */
    thunk_FUN_032e1da0(Method_System_Net_DigestSession_Authenticate__);
    thunk_FUN_032e1da0(Method_System_IO_Directory_CreateDirectory__);
    thunk_FUN_032e1da0(Method_System_IO_Directory_InsecureGetCurrentDirectory__);
                    /* try { // try from 06c94610 to 06d94637 has its CatchHandler @ 06c945c8 */
    thunk_FUN_032e1da0(Method_System_IO_Directory_InternalEnumeratePaths__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06c945ec with catch @ 06c94620
                        */
    DAT_076e914f = 1;
  }
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 06c94638 to 06d9463b has its CatchHandler @ 06c94664 */
    thunk_FUN_032cd7c0();
  }
                    /* try { // try from 06c9463c to 06d94667 has its CatchHandler @ 06c945c8 */
  uVar2 = FUN_06bece64(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
                    /* catch() { ... } // from try @ 06c94638 with catch @ 06c94664 */
                    /* try { // try from 06c94668 to 06d9466b has its CatchHandler @ 06c94680 */
                    /* try { // try from 06c9466c to 06d94677 has its CatchHandler @ 06c945c8 */
    uVar2 = FUN_06bece64(param_2,0,0);
    puVar1 = PTR_DAT_072b9a68;
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 06c94678 to 06d9467f has its CatchHandler @ 06c94680 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06c94668 with catch @ 06c94680
                       catch(type#2 @ 00000000) { ... } // from try @ 06c94678 with catch @ 06c94680
                        */
                    /* catch() { ... } // from try @ 06c946cc with catch @ 06c94684
                       catch() { ... } // from try @ 06c946f8 with catch @ 06c94684
                       catch() { ... } // from try @ 06c94728 with catch @ 06c94684 */
      if (*(int *)(*(long *)PTR_DAT_072b9a68 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar3 = FUN_06c985e4();
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto LAB_06c94780;
                    /* try { // try from 06c946a8 to 06d946cb has its CatchHandler @ 06c946dc */
      FUN_050fa644(*(long *)(lVar3 + 0x10),param_1,&local_28,
                   *(undefined8 *)Method_Unity_AppUI_UI_Dialog_OnCloseButtonClicked__);
      if (local_28 == 0) {
                    /* try { // try from 06c946f4 to 06d946f7 has its CatchHandler @ 06c94720 */
        lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_IO_Directory_InternalEnumeratePaths__);
                    /* try { // try from 06c946f8 to 06d94723 has its CatchHandler @ 06c94684 */
        FUN_03d43888(lVar3,*(undefined8 *)Method_System_IO_Directory_InsecureGetCurrentDirectory__);
        local_28 = lVar3;
        if (lVar3 == 0) {
LAB_06c94780:
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
                    /* catch() { ... } // from try @ 06c946f4 with catch @ 06c94720 */
                    /* try { // try from 06c94724 to 06d94727 has its CatchHandler @ 06c9473c */
                    /* try { // try from 06c94728 to 06d94733 has its CatchHandler @ 06c94684 */
        FUN_03d42f58(lVar3,param_2,*(undefined8 *)Method_System_IO_Directory_CreateDirectory__);
                    /* try { // try from 06c94734 to 06d9473b has its CatchHandler @ 06c9473c */
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06c94724 with catch @ 06c9473c
                       catch(type#2 @ 00000000) { ... } // from try @ 06c94734 with catch @ 06c9473c
                        */
        lVar3 = FUN_06c985e4();
                    /* catch() { ... } // from try @ 06c94788 with catch @ 06c94740
                       catch() { ... } // from try @ 06c947b4 with catch @ 06c94740
                       catch() { ... } // from try @ 06c947e4 with catch @ 06c94740 */
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto LAB_06c94780;
        FUN_050f8b10(*(long *)(lVar3 + 0x10),param_1,local_28,
                     *(undefined8 *)Method_Unity_VisualScripting_DictionaryContainsKey_Contains__);
      }
      else {
                    /* try { // try from 06c946cc to 06d946f3 has its CatchHandler @ 06c94684 */
        FUN_03d4305c(local_28,param_2,1,
                     *(undefined8 *)Method_System_Net_DigestSession_Authenticate__);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06c946a8 with catch @ 06c946dc
                        */
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
      }
                    /* try { // try from 06c94764 to 06d94787 has its CatchHandler @ 06c94798 */
      FUN_06c939e8(param_1,param_2);
    }
  }
  return;
}


