/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<EraseAnchorByUuid>d__26$$SetStateMachine
ENTRY_POINT: 06347e38
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuid>d__26__SetStateMachine
          (void)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 unaff_w25;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_stack_00000008;
  uint uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 uStack000000000000001c;
  undefined8 uStack0000000000000024;
  undefined8 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb2e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb030,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb048,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb2f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb9a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08412d88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08412d30,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x24 + 0x885) = unaff_w25;
  if (unaff_x23 != 0) {
    if (unaff_x21 == 0) {
      return 0xffffffff;
    }
    if (*(long *)(unaff_x23 + 0x18) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      lVar1 = FUN_05b961dc(DAT_083dfcb0);
      if ((((lVar1 != 0) && (lVar1 = FUN_0631798c(lVar1,0), lVar1 != 0)) &&
          (*(long *)(lVar1 + 0x18) != 0)) && (*(long *)(unaff_x22 + 0x20) != 0)) {
        auVar3 = FUN_042ac53c(*(long *)(unaff_x22 + 0x20),*(undefined4 *)(unaff_x23 + 0x18),
                              DAT_083eb2e0);
        if (*(long *)(unaff_x22 + 0x28) != 0) {
          auVar4 = FUN_0429eef4(*(long *)(unaff_x22 + 0x28),*(undefined4 *)(unaff_x21 + 0x18),
                                DAT_083eb030);
          lVar1 = *(long *)(unaff_x22 + 0x20);
          if (lVar1 != 0) {
            FUN_0405da84(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                         auVar3._0_8_ >> 0x20);
            lVar1 = *(long *)(unaff_x22 + 0x28);
            if (lVar1 != 0) {
              FUN_0405d584(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                           auVar4._0_8_ >> 0x20);
              if (*(long *)(unaff_x22 + 0x30) != 0) {
                uStack000000000000000c = unaff_w20 & 1;
                _uStack000000000000001c = auVar3;
                _uStack000000000000002c = auVar4;
                uVar2 = FUN_0438acdc(*(long *)(unaff_x22 + 0x30),&stack0x00000008,DAT_083eb9a0);
                return uVar2;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  return 0xffffffff;
}


