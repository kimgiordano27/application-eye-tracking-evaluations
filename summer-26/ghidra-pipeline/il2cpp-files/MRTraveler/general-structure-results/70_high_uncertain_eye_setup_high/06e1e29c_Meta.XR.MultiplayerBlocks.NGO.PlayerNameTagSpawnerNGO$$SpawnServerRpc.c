/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagSpawnerNGO$$SpawnServerRpc
ENTRY_POINT: 06e1e29c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagSpawnerNGO__SpawnServerRpc
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  
  FUN_05d690c0(param_2,*(undefined8 *)(unaff_x19 + 0x18),**(undefined8 **)(param_1 + 0x370));
  if (*(char *)(unaff_x19 + 0x20) == '\0') {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06e1e368;
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06e1e1d8 with catch @ 06e1e338
                        */
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
      lVar2 = *(long *)(lVar2 + 0x38);
      if (lVar2 == 0) goto LAB_06e1e368;
                    /* try { // try from 06e1e350 to 06f1e367 has its CatchHandler @ 06e1e400 */
      FUN_05d690c0(lVar2,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08e93370);
    }
  }
  if (((*(long *)(unaff_x19 + 0x18) != 0) &&
      (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x98), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
    uVar1 = FUN_0717850c(lVar2,0);
    if ((uVar1 & 1) == 0) {
      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x98), lVar2 == 0)) goto LAB_06e1e368;
      FUN_05ac913c(lVar2,1,*(undefined8 *)PTR_DAT_08e866f8);
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x18) + 0x58) != 3) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_06e1c0d8();
        return;
      }
    }
  }
LAB_06e1e368:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 06e1e368 to 06f1e3ef has its CatchHandler @ 06e1e164 */
  FUN_03c8fb30();
}


