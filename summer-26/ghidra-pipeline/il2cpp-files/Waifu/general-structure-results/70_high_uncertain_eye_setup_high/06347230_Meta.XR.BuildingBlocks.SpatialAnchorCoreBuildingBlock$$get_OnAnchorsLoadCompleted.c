/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$get_OnAnchorsLoadCompleted
ENTRY_POINT: 06347230
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__get_OnAnchorsLoadCompleted(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x24;
  undefined4 unaff_s8;
  undefined4 unaff_s10;
  undefined1 auVar6 [16];
  undefined4 uStack0000000000000008;
  uint uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  uVar3 = FUN_042ab770();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 != 0) {
    FUN_0405d9b4(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),unaff_x24 >> 0x20);
    lVar4 = *(long *)(unaff_x20 + 0x28);
    if (lVar4 != 0) {
      FUN_0405da1c(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),uVar3 >> 0x20);
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        uStack000000000000000c = unaff_w22 & 1;
        uStack0000000000000008 = unaff_w19;
        in_stack_00000010 = unaff_s10;
        in_stack_00000018 = unaff_s8;
        uVar2 = FUN_0438a51c(*(long *)(unaff_x20 + 0x30),&stack0x00000008,DAT_083eb960);
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          auVar6 = FUN_0429e128(*(long *)(unaff_x20 + 0x38),*(undefined4 *)(unaff_x21 + 0x18),
                                DAT_083eafe0);
          uVar3 = auVar6._8_8_;
          if (*(long *)(unaff_x20 + 0x38) != 0) {
            if (0 < auVar6._8_4_) {
              lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
              uVar5 = auVar6._0_8_ >> 0x20;
              do {
                *(undefined4 *)(lVar4 + (long)(int)uVar5 * 4) = unaff_w19;
                uVar1 = (int)uVar3 - 1;
                uVar3 = (ulong)uVar1;
                uVar5 = (ulong)((int)uVar5 + 1);
              } while (uVar1 != 0);
            }
            return uVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


