/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 0635354c
PROGRAM: Waifu-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long unaff_x25;
  undefined4 unaff_s8;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  ulong in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  undefined8 uStack00000000000000b4;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb4f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb030,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb048,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb510,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebde0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebce0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08412d30,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08412de0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x25 + 0x8b1) = 1;
  if (unaff_x21 != 0) {
    if (unaff_x19 == 0) {
      return 0xffffffff;
    }
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar1 = FUN_05b961dc(DAT_083dfcb0);
      if (((lVar1 != 0) && (lVar1 = FUN_0631798c(lVar1,0), lVar1 != 0)) &&
         (*(long *)(lVar1 + 0x18) != 0)) {
        in_stack_00000078 = 0;
        uStack0000000000000070 = 0;
        uStack0000000000000074 = 0;
        uStack0000000000000068 = 0;
        uStack000000000000006c = 0;
        uStack0000000000000060 = 0;
        uStack0000000000000064 = 0;
        uStack0000000000000058 = 0;
        uStack000000000000005c = 0;
        in_stack_00000050 = 0;
        in_stack_00000048 = 0;
        FUN_06358b08(&stack0x00000048);
        uStack0000000000000058 = unaff_s8;
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          auVar3 = FUN_042b6e94(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x21 + 0x18),
                                DAT_083eb4f8);
          uStack000000000000005c = auVar3._0_4_;
          uStack0000000000000060 = auVar3._4_4_;
          uStack0000000000000064 = auVar3._8_4_;
          uStack0000000000000068 = auVar3._12_4_;
          if (*(long *)(unaff_x20 + 0x28) != 0) {
            auVar4 = FUN_0429eef4(*(long *)(unaff_x20 + 0x28),*(undefined4 *)(unaff_x19 + 0x18),
                                  DAT_083eb030);
            uStack000000000000006c = auVar4._0_4_;
            uStack0000000000000070 = auVar4._4_4_;
            uStack0000000000000074 = auVar4._8_4_;
            in_stack_00000078 = auVar4._12_4_;
            lVar1 = *(long *)(unaff_x20 + 0x20);
            if (lVar1 != 0) {
              FUN_0405defc(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                           auVar3._0_8_ >> 0x20);
              lVar1 = *(long *)(unaff_x20 + 0x28);
              if (lVar1 != 0) {
                FUN_0405d584(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                             auVar4._0_8_ >> 0x20);
                uStack00000000000000b4 = CONCAT44(in_stack_00000078,uStack0000000000000074);
                if (*(long *)(unaff_x20 + 0x30) != 0) {
                  in_stack_00000088 = in_stack_00000048;
                  in_stack_00000090 = in_stack_00000050;
                  in_stack_000000a8 = uStack0000000000000068;
                  uStack00000000000000ac = uStack000000000000006c;
                  in_stack_000000b0 = uStack0000000000000070;
                  in_stack_00000080 = CONCAT44(unaff_w24,unaff_w23) & 0x1ffffffff;
                  in_stack_00000098 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
                  in_stack_000000a0 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
                  uVar2 = FUN_04393a7c(*(long *)(unaff_x20 + 0x30),&stack0x00000080,DAT_083ebde0);
                  return uVar2;
                }
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


