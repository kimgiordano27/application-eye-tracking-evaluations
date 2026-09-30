/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagSpawnerNGO$$get_IsConnected
ENTRY_POINT: 06e1e288
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagSpawnerNGO__get_IsConnected(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar1 != 0)) {
    FUN_05d690c0(lVar1,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08e93370);
  }
  if (*(char *)(unaff_x19 + 0x20) == '\0') {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06e1e368;
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
      lVar1 = *(long *)(lVar1 + 0x38);
      if (lVar1 == 0) goto LAB_06e1e368;
      FUN_05d690c0(lVar1,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08e93370);
    }
  }
  if (((*(long *)(unaff_x19 + 0x18) != 0) &&
      (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x98), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0)) {
    uVar2 = FUN_0717850c(lVar1,0);
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(unaff_x19 + 0x18) == 0) ||
         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x98), lVar1 == 0)) goto LAB_06e1e368;
      FUN_05ac913c(lVar1,1,*(undefined8 *)PTR_DAT_08e866f8);
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
  FUN_03c8fb30();
}


