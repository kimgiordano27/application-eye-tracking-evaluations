/*
FUNCTION_NAME: FUN_06c939e8
ENTRY_POINT: 06c939e8
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


void FUN_06c939e8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  puVar1 = PTR_DAT_072794f0;
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06c939c0 with catch @ 06c939fc
                        */
  if ((DAT_076e9150 & 1) == 0) {
                    /* try { // try from 06c93a14 to 06d93a17 has its CatchHandler @ 06c93a34 */
                    /* try { // try from 06c93a18 to 06d93a37 has its CatchHandler @ 06c939a0 */
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_DictionaryContainsKey_Contains__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_UI_Dialog_OnCloseButtonClicked__);
    thunk_FUN_032e1da0(PTR_DAT_072b9a68);
                    /* catch() { ... } // from try @ 06c93a14 with catch @ 06c93a34 */
                    /* try { // try from 06c93a38 to 06d93a3b has its CatchHandler @ 06c93a50 */
                    /* try { // try from 06c93a3c to 06d93a47 has its CatchHandler @ 06c939a0 */
    thunk_FUN_032e1da0(Method_System_Net_DigestSession_Authenticate__);
                    /* try { // try from 06c93a48 to 06d93a4f has its CatchHandler @ 06c93a50 */
    thunk_FUN_032e1da0(Method_System_IO_Directory_CreateDirectory__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06c93a38 with catch @ 06c93a50
                       catch(type#2 @ 00000000) { ... } // from try @ 06c93a48 with catch @ 06c93a50
                        */
                    /* catch() { ... } // from try @ 06c93a94 with catch @ 06c93a54
                       catch() { ... } // from try @ 06c93acc with catch @ 06c93a54
                       catch() { ... } // from try @ 06c93af0 with catch @ 06c93a54 */
    thunk_FUN_032e1da0(Method_System_IO_Directory_InsecureGetCurrentDirectory__);
    thunk_FUN_032e1da0(Method_System_IO_Directory_InternalEnumeratePaths__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
                    /* try { // try from 06c93a74 to 06d93a93 has its CatchHandler @ 06c93ab0 */
    DAT_076e9150 = 1;
  }
  local_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
                    /* try { // try from 06c93a94 to 06d93ac7 has its CatchHandler @ 06c93a54 */
  uVar2 = FUN_06bece64(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06c93a74 with catch @ 06c93ab0
                        */
    uVar2 = FUN_06bece64(param_2,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_2 != (long *)0x0) {
                    /* try { // try from 06c93ac8 to 06d93acb has its CatchHandler @ 06c93ae8 */
                    /* try { // try from 06c93acc to 06d93aeb has its CatchHandler @ 06c93a54 */
        uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2,*(undefined8 *)(*param_2 + 0x2c0));
        puVar1 = PTR_DAT_072b9a68;
        if ((uVar2 & 1) == 0) {
          return;
        }
                    /* catch() { ... } // from try @ 06c93ac8 with catch @ 06c93ae8 */
                    /* try { // try from 06c93aec to 06d93aef has its CatchHandler @ 06c93b04 */
                    /* try { // try from 06c93af0 to 06d93afb has its CatchHandler @ 06c93a54 */
        if (*(int *)(*(long *)PTR_DAT_072b9a68 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar3 = FUN_06c985e4();
                    /* try { // try from 06c93afc to 06d93b03 has its CatchHandler @ 06c93b04 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06c93aec with catch @ 06c93b04
                       catch(type#2 @ 00000000) { ... } // from try @ 06c93afc with catch @ 06c93b04
                        */
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
                    /* catch() { ... } // from try @ 06c93b44 with catch @ 06c93b08
                       catch() { ... } // from try @ 06c93b78 with catch @ 06c93b08
                       catch() { ... } // from try @ 06c93b98 with catch @ 06c93b08 */
          FUN_050fa644(*(long *)(lVar3 + 0x18),param_1,&local_28,
                       *(undefined8 *)Method_Unity_AppUI_UI_Dialog_OnCloseButtonClicked__);
                    /* try { // try from 06c93b24 to 06d93b43 has its CatchHandler @ 06c93b5c */
          if (local_28 != 0) {
            FUN_03d4305c(local_28,param_2,1,
                         *(undefined8 *)Method_System_Net_DigestSession_Authenticate__);
            return;
          }
                    /* try { // try from 06c93b44 to 06d93b73 has its CatchHandler @ 06c93b08 */
          lVar3 = thunk_FUN_032a56a0(*(undefined8 *)
                                      Method_System_IO_Directory_InternalEnumeratePaths__);
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06c93b24 with catch @ 06c93b5c
                        */
          FUN_03d43888(lVar3,*(undefined8 *)Method_System_IO_Directory_InsecureGetCurrentDirectory__
                      );
          local_28 = lVar3;
          if (lVar3 != 0) {
                    /* try { // try from 06c93b74 to 06d93b77 has its CatchHandler @ 06c93b90 */
                    /* try { // try from 06c93b78 to 06d93b93 has its CatchHandler @ 06c93b08 */
            FUN_03d42f58(lVar3,param_2,*(undefined8 *)Method_System_IO_Directory_CreateDirectory__);
                    /* catch() { ... } // from try @ 06c93b74 with catch @ 06c93b90 */
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 06c93b94 to 06d93b97 has its CatchHandler @ 06c93bac */
              thunk_FUN_032cd7c0();
            }
                    /* try { // try from 06c93b98 to 06d93ba3 has its CatchHandler @ 06c93b08 */
            lVar3 = FUN_06c985e4();
                    /* try { // try from 06c93ba4 to 06d93bab has its CatchHandler @ 06c93bac */
            if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06c93b94 with catch @ 06c93bac
                       catch(type#2 @ 00000000) { ... } // from try @ 06c93ba4 with catch @ 06c93bac
                        */
                    /* catch() { ... } // from try @ 06c93bec with catch @ 06c93bb0
                       catch() { ... } // from try @ 06c93c20 with catch @ 06c93bb0
                       catch() { ... } // from try @ 06c93c40 with catch @ 06c93bb0 */
              FUN_050f8b10(*(long *)(lVar3 + 0x18),param_1,local_28,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_DictionaryContainsKey_Contains__);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
                    /* try { // try from 06c93bcc to 06d93beb has its CatchHandler @ 06c93c04 */
  return;
}


