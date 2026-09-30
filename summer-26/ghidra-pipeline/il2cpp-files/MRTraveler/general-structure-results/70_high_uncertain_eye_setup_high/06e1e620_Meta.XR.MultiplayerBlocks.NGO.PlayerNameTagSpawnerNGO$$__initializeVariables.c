/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagSpawnerNGO$$__initializeVariables
ENTRY_POINT: 06e1e620
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagSpawnerNGO____initializeVariables(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 1000));
  FUN_03c8f898(PTR_DAT_08e933f0);
  *(undefined1 *)(unaff_x20 + 0x2c) = 1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_06e1a9b0(*(long *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)PTR_DAT_08e933f0,1,*(undefined8 *)(unaff_x19 + 0x20));
    lVar1 = *(long *)(unaff_x19 + 0x18);
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0xa8);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(unaff_x19 + 0x20),
                   *(undefined8 *)(lVar2 + 0x28));
        lVar1 = *(long *)(unaff_x19 + 0x18);
        if (lVar1 == 0) goto LAB_06e1e6e0;
      }
      *(undefined8 *)(lVar1 + 0xa8) = 0;
      thunk_FUN_03d233cc((undefined8 *)(lVar1 + 0xa8),0);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        lVar1 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
        if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
           (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
          FUN_05d6fa5c(lVar1,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x28),
                       *(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08e933e8);
          return;
        }
        return;
      }
    }
  }
LAB_06e1e6e0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


