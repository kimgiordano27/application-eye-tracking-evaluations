/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.PlayerNameTagNGO.<UpdateNameUI>d__9$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06e1e248
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_NGO_PlayerNameTagNGO_<UpdateNameUI>d__9__System_Collections_IEnumerator_Reset
               (void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898();
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_06e1a9b0(*(long *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18),
                 *(undefined8 *)PTR_DAT_08e933c8,*(undefined1 *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
        FUN_05d690c0(lVar2,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08e93370);
      }
      if (*(char *)(unaff_x19 + 0x20) == '\0') {
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_06e1e368;
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0x38);
          if (lVar2 == 0) goto LAB_06e1e368;
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
    }
  }
LAB_06e1e368:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


