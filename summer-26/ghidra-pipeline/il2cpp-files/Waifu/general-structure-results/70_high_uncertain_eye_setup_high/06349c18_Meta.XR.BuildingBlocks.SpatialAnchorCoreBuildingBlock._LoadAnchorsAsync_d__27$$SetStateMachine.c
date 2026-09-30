/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<LoadAnchorsAsync>d__27$$SetStateMachine
ENTRY_POINT: 06349c18
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27__SetStateMachine
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
          undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined1 auVar6 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  
  uStack0000000000000020 = param_3._0_8_;
  uStack0000000000000010 = param_2._0_8_;
  uStack0000000000000000 = param_1._0_8_;
  uStack000000000000002c = (undefined4)param_4;
  uStack0000000000000030 = (undefined4)((ulong)param_4 >> 0x20);
  if (param_5 != 0) {
    in_stack_00000080 = uStack0000000000000000;
    in_stack_00000088 = param_1._8_8_;
    in_stack_00000090 = uStack0000000000000010;
    in_stack_00000098 = param_2._8_8_;
    in_stack_000000a0 = uStack0000000000000020;
    uStack00000000000000a8 = param_3._8_4_;
    uStack00000000000000ac = uStack000000000000002c;
    in_stack_000000b0 = uStack0000000000000030;
    uVar2 = FUN_0438bc28(param_5,&stack0x00000080,DAT_083eba20);
    if (*(long *)(unaff_x21 + 0x38) != 0) {
      auVar6 = FUN_0429e128(*(long *)(unaff_x21 + 0x38),*(undefined4 *)(unaff_x22 + 0x18),
                            DAT_083eafe0);
      uVar3 = auVar6._8_8_;
      if (*(long *)(unaff_x21 + 0x38) != 0) {
        if (0 < auVar6._8_4_) {
          lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
          uVar5 = auVar6._0_8_ >> 0x20;
          do {
            *(undefined4 *)(lVar4 + (long)(int)uVar5 * 4) = unaff_w20;
            uVar1 = (int)uVar3 - 1;
            uVar3 = (ulong)uVar1;
            uVar5 = (ulong)((int)uVar5 + 1);
          } while (uVar1 != 0);
        }
        if (*(long *)(unaff_x21 + 0x40) != 0) {
          FUN_0429fcc0(*(long *)(unaff_x21 + 0x40),*(undefined4 *)(unaff_x19 + 0x18),DAT_083eb060);
          return uVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


