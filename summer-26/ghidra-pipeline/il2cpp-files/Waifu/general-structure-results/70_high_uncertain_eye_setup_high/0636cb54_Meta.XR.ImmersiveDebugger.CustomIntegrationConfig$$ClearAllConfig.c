/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig$$ClearAllConfig
ENTRY_POINT: 0636cb54
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
Meta_XR_ImmersiveDebugger_CustomIntegrationConfig__ClearAllConfig
          (undefined1 param_1 [16],long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  undefined8 uStack0000000000000198;
  undefined8 uStack00000000000001a0;
  undefined4 uStack00000000000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  
  uStack0000000000000198 = 0;
  uStack00000000000001a0 = 0;
  uStack00000000000001a8 = 0;
  if (*(int *)(param_2 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar3 = FUN_07a0d2c4();
  if (((uVar3 & 1) == 0) || (unaff_x19 != 0)) {
    if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_07a0d2c4();
    in_stack_00000110 = in_stack_000001e0;
    in_stack_00000118 = in_stack_000001e8;
    in_stack_00000100 = in_stack_000001d0;
    in_stack_00000108 = in_stack_000001d8;
    in_stack_000000f8 = in_stack_000001c8;
    in_stack_000000f0 = in_stack_000001c0;
    in_stack_000000e8 = in_stack_000001b8;
    in_stack_000000e0 = in_stack_000001b0;
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uStack00000000000001a8);
    in_stack_00000008 = uStack00000000000001a0;
    in_stack_00000000 = uStack0000000000000198;
    in_stack_00000060 = in_stack_000001f0;
    in_stack_00000068 = in_stack_000001f8;
    in_stack_00000070 = in_stack_00000200;
    in_stack_00000078 = in_stack_00000208;
    in_stack_00000080 = param_1._0_8_;
    in_stack_00000088 = param_1._8_8_;
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      NEON_fmov(0x3f800000,4);
      NEON_fmov(0x3f800000,4);
      uVar2 = FUN_043908bc(*(long *)(unaff_x20 + 0x18),&stack0x00000220,DAT_083ebcb8);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
                    /* try { // try from 0636cd20 to 0646cd27 has its CatchHandler @ 0636cdb4 */
        FUN_0438673c(*(long *)(unaff_x20 + 0x20),0x3f8000003f800000,0,DAT_083eb7b8);
        if (*(long *)(unaff_x20 + 0x28) != 0) {
          FUN_0438673c(*(long *)(unaff_x20 + 0x28),0,0,DAT_083eb7b8);
          if (*(long *)(unaff_x20 + 0x30) != 0) {
            FUN_0438673c(*(long *)(unaff_x20 + 0x30),0,0,DAT_083eb7b8);
            if (*(long *)(unaff_x20 + 0x38) != 0) {
              FUN_0438673c(*(long *)(unaff_x20 + 0x38),0,0,DAT_083eb7b8);
              if (*(long *)(unaff_x20 + 0x40) != 0) {
                FUN_0438673c(*(long *)(unaff_x20 + 0x40),0,0,DAT_083eb7b8);
                in_stack_00000128 = 0;
                in_stack_00000120 = 0;
                in_stack_00000138 = 0;
                in_stack_00000130 = 0;
                in_stack_00000148 = 0;
                in_stack_00000140 = 0;
                in_stack_00000158 = 0;
                in_stack_00000150 = 0;
                in_stack_00000168 = 0;
                in_stack_00000160 = 0;
                in_stack_00000178 = 0;
                in_stack_00000170 = 0;
                in_stack_00000188 = 0;
                in_stack_00000180 = 0;
                in_stack_00000190 = 0;
                if (*(int *)(*(long *)(unaff_x22 + 0x7d8) + 0xe0) == 0) {
                  FUN_033b9870();
                }
                FUN_07a119fc();
                lVar4 = *(long *)(unaff_x20 + 0x48);
                memcpy(&stack0x00000060,&stack0x00000120,0x74);
                uVar1 = DAT_083ebd28;
                if (lVar4 != 0) {
                  memcpy(&stack0x00000248,&stack0x00000060,0x74);
                  FUN_0439238c(lVar4,&stack0x00000220,uVar1);
                  uVar1 = DAT_083ebd00;
                  lVar4 = *(long *)(unaff_x20 + 0x50);
                  in_stack_00000050 = 0;
                  in_stack_00000038 = 0;
                  in_stack_00000030 = 0;
                  in_stack_00000048 = 0;
                  in_stack_00000040 = 0;
                  in_stack_00000018 = 0;
                  in_stack_00000010 = 0;
                  in_stack_00000028 = 0;
                  in_stack_00000020 = 0;
                  in_stack_00000008 = 0;
                  in_stack_00000000 = 0;
                  if (lVar4 != 0) {
                    memcpy(&stack0x00000220,&stack0x00000000,0x54);
                    FUN_04391be0(lVar4,&stack0x00000220,uVar1);
                    if (*(long *)(unaff_x20 + 0x68) != 0) {
                      FUN_05cb6720(*(long *)(unaff_x20 + 0x68),uVar2);
                      return uVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


