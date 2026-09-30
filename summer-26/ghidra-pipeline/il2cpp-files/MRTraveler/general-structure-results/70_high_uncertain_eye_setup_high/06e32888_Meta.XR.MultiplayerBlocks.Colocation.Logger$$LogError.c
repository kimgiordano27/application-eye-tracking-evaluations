/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Logger$$LogError
ENTRY_POINT: 06e32888
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Logger__LogError(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e93370);
    FUN_03c8f898(PTR_DAT_08e93cb0);
    FUN_03c8f898(PTR_DAT_08e93ca0);
    FUN_03c8f898(PTR_DAT_08e93ca8);
    *(undefined1 *)(unaff_x21 + 0x101) = 1;
  }
  FUN_06e32158(param_2,*unaff_x22);
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0xb0) != 0) {
      if (unaff_x20 == 0) goto LAB_06e329e0;
      FUN_05d690c0(*(long *)(lVar2 + 0xb0),*(undefined8 *)(unaff_x20 + 0x10),
                   *(undefined8 *)PTR_DAT_08e93370);
      lVar2 = *(long *)(param_2 + 0x28);
      if (lVar2 == 0) goto LAB_06e3299c;
    }
    if (*(long *)(lVar2 + 0xc0) != 0) {
      if (unaff_x20 == 0) goto LAB_06e329e0;
                    /* try { // try from 06e32920 to 06f329eb has its CatchHandler @ 06e32920
                       catch() { ... } // from try @ 06e32920 with catch @ 06e32920
                       catch() { ... } // from try @ 06e32a84 with catch @ 06e32920
                       catch() { ... } // from try @ 06e32ae4 with catch @ 06e32920
                       catch() { ... } // from try @ 06e32b10 with catch @ 06e32920
                       catch() { ... } // from try @ 06e32b50 with catch @ 06e32920 */
      FUN_05d690c0(*(long *)(lVar2 + 0xc0),*(undefined8 *)(unaff_x20 + 0x10),
                   *(undefined8 *)PTR_DAT_08e93370);
      lVar2 = *(long *)(param_2 + 0x28);
      if (lVar2 == 0) goto LAB_06e3299c;
    }
    if (*(long *)(lVar2 + 0xb8) != 0) {
      if (unaff_x20 == 0) goto LAB_06e329e0;
      if (*(long *)(unaff_x20 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
      }
      FUN_05d6ca54(*(long *)(lVar2 + 0xb8),param_2,uVar1,*(undefined8 *)PTR_DAT_08e93cb0);
      lVar2 = *(long *)(param_2 + 0x28);
      if (lVar2 == 0) goto LAB_06e3299c;
    }
    if (*(long *)(lVar2 + 0x58) != 0) {
      if (unaff_x20 == 0) goto LAB_06e329e0;
      FUN_05d6ca54(*(long *)(lVar2 + 0x58),param_2,*(undefined8 *)(unaff_x20 + 0x10),
                   *(undefined8 *)PTR_DAT_08e93ca0);
      goto LAB_06e3299c;
    }
  }
  if (unaff_x20 == 0) {
LAB_06e329e0:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
LAB_06e3299c:
  if ((*(long *)(unaff_x20 + 0x40) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x20 + 0x40) + 0x58), lVar2 != 0)) {
    FUN_05d6ca54(lVar2,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_08e93ca0);
    return;
  }
  return;
}


