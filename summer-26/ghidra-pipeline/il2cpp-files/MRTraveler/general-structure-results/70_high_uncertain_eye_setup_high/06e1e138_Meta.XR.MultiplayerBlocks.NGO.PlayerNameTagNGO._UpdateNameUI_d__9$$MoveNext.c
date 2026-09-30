/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagNGO.<UpdateNameUI>d__9$$MoveNext
ENTRY_POINT: 06e1e138
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagNGO_<UpdateNameUI>d__9__MoveNext(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  
  lVar2 = *(long *)(unaff_x19 + 0x18);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0xa0);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28))
      ;
      lVar2 = *(long *)(unaff_x19 + 0x18);
      if (lVar2 == 0) goto LAB_06e1e200;
    }
    *(undefined8 *)(lVar2 + 0xa0) = 0;
                    /* try { // try from 06e1e164 to 06f1e1d7 has its CatchHandler @ 06e1e164
                       catch() { ... } // from try @ 06e1e164 with catch @ 06e1e164
                       catch() { ... } // from try @ 06e1e1e0 with catch @ 06e1e164
                       catch() { ... } // from try @ 06e1e368 with catch @ 06e1e164
                       catch() { ... } // from try @ 06e1e408 with catch @ 06e1e164 */
    thunk_FUN_03d233cc((undefined8 *)(lVar2 + 0xa0),0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
        FUN_05d690c0(lVar2,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08e93370);
      }
      if (((*(long *)(unaff_x19 + 0x18) != 0) &&
          (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x90), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
        uVar1 = FUN_0717850c(lVar2,0);
        if ((uVar1 & 1) != 0) {
          return;
        }
                    /* try { // try from 06e1e1d8 to 06f1e1df has its CatchHandler @ 06e1e338 */
                    /* try { // try from 06e1e1e0 to 06f1e34f has its CatchHandler @ 06e1e164 */
        if ((*(long *)(unaff_x19 + 0x18) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x90), lVar2 != 0)) {
          FUN_05ac913c(lVar2,1,*(undefined8 *)PTR_DAT_08e866f8);
          return;
        }
      }
    }
  }
LAB_06e1e200:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


