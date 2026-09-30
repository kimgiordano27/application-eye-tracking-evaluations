/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagNGO$$__getTypeName
ENTRY_POINT: 06e1e0f4
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


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagNGO____getTypeName(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898(PTR_DAT_08e93370);
  FUN_03c8f898(PTR_DAT_08e933c0);
  *(undefined1 *)(unaff_x20 + 0x27) = 1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_06e1a9b0(*(long *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)PTR_DAT_08e933c0,*(undefined1 *)(unaff_x19 + 0x20),0);
    lVar2 = *(long *)(unaff_x19 + 0x18);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0xa0);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),lVar2,*(undefined8 *)(lVar3 + 0x28));
        lVar2 = *(long *)(unaff_x19 + 0x18);
        if (lVar2 == 0) goto LAB_06e1e200;
      }
      *(undefined8 *)(lVar2 + 0xa0) = 0;
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
          if ((*(long *)(unaff_x19 + 0x18) != 0) &&
             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x90), lVar2 != 0)) {
            FUN_05ac913c(lVar2,1,*(undefined8 *)PTR_DAT_08e866f8);
            return;
          }
        }
      }
    }
  }
LAB_06e1e200:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


