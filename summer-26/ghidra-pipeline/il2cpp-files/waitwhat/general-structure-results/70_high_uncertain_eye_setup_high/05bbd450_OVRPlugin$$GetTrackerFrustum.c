/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 05bbd450
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerFrustum(undefined4 param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
                    /* try { // try from 05bbd454 to 05cbd457 has its CatchHandler @ 05bbd4a4 */
                    /* try { // try from 05bbd458 to 05cbd47b has its CatchHandler @ 05bbd2ac */
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bbd3ec with catch @ 05bbd460
                        */
  if (param_3 != 0) {
                    /* try { // try from 05bbd47c to 05cbd47f has its CatchHandler @ 05bbd48c */
    uStack0000000000000008 = FUN_05bc7640(param_3,0);
                    /* try { // try from 05bbd480 to 05cbd49b has its CatchHandler @ 05bbd2ac */
    if (*(long *)(param_2 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 05bbd47c with catch @ 05bbd48c */
                    /* try { // try from 05bbd49c to 05cbd4a3 has its CatchHandler @ 05bbd4a4 */
      FUN_05be94c0(param_1,*(long *)(param_2 + 0x30),&stack0x00000008,0);
      uVar3 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bbd454 with catch @ 05bbd4a4
                       catch(type#2 @ 00000000) { ... } // from try @ 05bbd49c with catch @ 05bbd4a4
                        */
      while (lVar2 = FUN_05bc7eec(param_3,0), lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        iVar1 = *(int *)(lVar2 + uVar3 * 4 + 0x20);
        if ((1 << (ulong)((uint)uVar3 & 0x1f) & param_4) != 0 && iVar1 == 1) {
          iVar1 = 2;
        }
        uStack0000000000000000 = CONCAT44(iVar1,(uint)uVar3);
        if (*(long *)(param_2 + 0x30) == 0) break;
        FUN_05be99a4();
        uVar3 = uVar3 + 1;
        if (uVar3 == 5) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


