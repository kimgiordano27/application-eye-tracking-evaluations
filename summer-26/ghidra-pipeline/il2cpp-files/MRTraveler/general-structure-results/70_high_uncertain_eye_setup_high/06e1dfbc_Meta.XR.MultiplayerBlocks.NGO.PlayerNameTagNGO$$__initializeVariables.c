/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagNGO$$__initializeVariables
ENTRY_POINT: 06e1dfbc
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


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagNGO____initializeVariables(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((DAT_0941a026 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e866f8);
    FUN_03c8f898(PTR_DAT_08e91ce0);
    FUN_03c8f898(PTR_DAT_08e93370);
    FUN_03c8f898(PTR_DAT_08e933b8);
    DAT_0941a026 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 06e1e00c to 06f1e01b has its CatchHandler @ 06e1e01c */
                    /* catch() { ... } // from try @ 06e1df6c with catch @ 06e1e01c
                       catch() { ... } // from try @ 06e1e00c with catch @ 06e1e01c */
                    /* try { // try from 06e1e020 to 06f1e023 has its CatchHandler @ 06e1e02c */
                    /* try { // try from 06e1e024 to 06f1e02f has its CatchHandler @ 06e1dd80 */
    FUN_06e1a9b0(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)PTR_DAT_08e933b8,*(undefined1 *)(param_1 + 0x20),0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06e1e020 with catch @ 06e1e02c
                        */
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0)) {
        FUN_05d690c0(lVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_08e93370);
      }
      if (((*(long *)(param_1 + 0x18) != 0) &&
          (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x90), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
        uVar1 = FUN_0717850c(lVar2,0);
        if ((uVar1 & 1) == 0) {
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x90), lVar2 == 0)) goto LAB_06e1e0c0;
          FUN_05ac913c(lVar2,0,*(undefined8 *)PTR_DAT_08e866f8);
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_06e1d3dc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                       *(undefined1 *)(param_1 + 0x20));
          return;
        }
      }
    }
  }
LAB_06e1e0c0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


