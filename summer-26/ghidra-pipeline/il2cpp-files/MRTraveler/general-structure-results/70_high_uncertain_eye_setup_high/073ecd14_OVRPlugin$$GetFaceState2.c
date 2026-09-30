/*
FUNCTION_NAME: OVRPlugin$$GetFaceState2
ENTRY_POINT: 073ecd14
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState2(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 073ecb00 with catch @ 073ecd14 */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 073eccdc with catch @ 073ecd18
                       catch() { ... } // from try @ 073eccf4 with catch @ 073ecd18 */
                    /* catch() { ... } // from try @ 073eccd4 with catch @ 073ecd1c
                       catch() { ... } // from try @ 073eccfc with catch @ 073ecd1c */
    if (*(uint *)(param_1 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar1 = *(long *)(param_1 + unaff_x21 * 8 + 0x20);
    if (lVar1 != 0) {
                    /* try { // try from 073ecd30 to 074ecd33 has its CatchHandler @ 073ecdc8 */
                    /* try { // try from 073ecd34 to 074ecd83 has its CatchHandler @ 073ec82c */
      uVar3 = FUN_073ed3f4(*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c),
                           *(undefined4 *)(lVar1 + 0x20));
      uVar2 = (ulong)(*(char *)(unaff_x19 + 0x10) == '\0');
                    /* try { // try from 073ecd84 to 074ecd9b has its CatchHandler @ 073ece7c */
      FUN_073ed340(uVar3,*(undefined4 *)(&DAT_018afc20 + uVar2 * 4),
                   *(undefined4 *)(&DAT_018af750 + uVar2 * 4),DAT_018b0230);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


