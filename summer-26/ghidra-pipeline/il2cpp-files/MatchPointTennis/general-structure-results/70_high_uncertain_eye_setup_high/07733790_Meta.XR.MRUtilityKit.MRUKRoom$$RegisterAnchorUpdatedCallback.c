/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RegisterAnchorUpdatedCallback
ENTRY_POINT: 07733790
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__RegisterAnchorUpdatedCallback(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar6;
  
                    /* try { // try from 07733798 to 078337ab has its CatchHandler @ 07733af0 */
  FUN_04447ba8(PTR_DAT_09f318a8);
  FUN_04447ba8(PTR_DAT_09f31318);
  *(undefined1 *)(unaff_x21 + 0x1e5) = 1;
  puVar2 = PTR_DAT_09f218d8;
  if ((unaff_x19 != 0) && (lVar4 = *(long *)(unaff_x19 + 0x40), lVar4 != 0)) {
    uVar6 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar6) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_07733878:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) break;
      uVar1 = *(uint *)(lVar4 + (long)(int)uVar6 * 4 + 0x20);
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_07733878;
      lVar4 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      if (lVar4 == 0) break;
      uVar3 = FUN_05bae1d4(lVar4);
      if ((uVar3 & 1) != 0) {
        FUN_05baf38c(lVar4);
        if (*(int *)(lVar4 + 0x18) == 0) {
          if (*(long *)(unaff_x20 + 0x20) == 0) break;
          FUN_0564a0ec(*(long *)(unaff_x20 + 0x20),uVar1,*(undefined8 *)puVar2);
        }
      }
      lVar4 = *(long *)(unaff_x19 + 0x40);
      uVar6 = uVar6 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


