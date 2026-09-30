/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagNGO$$.ctor
ENTRY_POINT: 06e1deb0
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


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagNGO___ctor(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e866f8);
    FUN_03c8f898(PTR_DAT_08e91ce0);
    FUN_03c8f898(PTR_DAT_08e933a8);
    FUN_03c8f898(PTR_DAT_08e933b0);
    *(undefined1 *)(unaff_x20 + 0x25) = 1;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_06e1a9b0(*(long *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                 *(undefined8 *)PTR_DAT_08e933b0,*(undefined1 *)(param_2 + 0x20),
                 *(undefined8 *)(param_2 + 0x28));
    if (*(long *)(param_2 + 0x10) != 0) {
      lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x48);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
        FUN_05d6ca54(lVar2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28),
                     *(undefined8 *)PTR_DAT_08e933a8);
      }
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06e1ddf4 with catch @ 06e1df54
                        */
      if (((*(long *)(param_2 + 0x18) != 0) &&
          (lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 0x90), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
        uVar1 = FUN_0717850c(lVar2,0);
                    /* try { // try from 06e1df6c to 06f1df83 has its CatchHandler @ 06e1e01c */
        if ((uVar1 & 1) == 0) {
          if ((*(long *)(param_2 + 0x18) == 0) ||
             (lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 0x90), lVar2 == 0)) goto LAB_06e1dfb0;
                    /* try { // try from 06e1df84 to 06f1e00b has its CatchHandler @ 06e1dd80 */
          FUN_05ac913c(lVar2,0,*(undefined8 *)PTR_DAT_08e866f8);
        }
        if (*(long *)(param_2 + 0x10) != 0) {
          FUN_06e1d3dc(*(long *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                       *(undefined1 *)(param_2 + 0x20));
          return;
        }
      }
    }
  }
LAB_06e1dfb0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


