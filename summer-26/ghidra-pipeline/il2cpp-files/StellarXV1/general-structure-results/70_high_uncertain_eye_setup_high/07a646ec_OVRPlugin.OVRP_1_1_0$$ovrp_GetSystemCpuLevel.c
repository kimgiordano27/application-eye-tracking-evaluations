/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemCpuLevel
ENTRY_POINT: 07a646ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel(void)

{
  uint uVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined8 uStack0000000000000134;
  undefined8 in_stack_00000140;
  undefined4 uStack0000000000000148;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined4 uStack00000000000001d8;
  
  uStack00000000000001c0 = 0;
  uStack00000000000001c8 = 0;
  uStack00000000000001d8 = 0;
  uStack00000000000001d0 = 0;
  FUN_089d99f0(&stack0x000001c0,0);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  in_stack_000001a8 = uStack00000000000001c8;
  in_stack_000001a0 = uStack00000000000001c0;
  *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x74);
  *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x6c);
  if (0x16 < uVar1) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x54);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x4c);
    *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
    *(undefined8 *)(unaff_x20 + 0x2f8) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x2f0) = uVar3;
    uVar2 = DAT_01aeca94;
    *(undefined8 *)(unaff_x20 + 0x2ec) = uStack00000000000001c8;
    *(undefined8 *)(unaff_x20 + 0x2e4) = uStack00000000000001c0;
    in_stack_00000180 = 0;
    in_stack_00000188 = 0;
    in_stack_00000198 = 0;
    in_stack_00000190 = 0;
    FUN_089d99f0(DAT_01aed208,uStack000000000000002c,uStack0000000000000028,uStack0000000000000024,
                 uVar2,DAT_01aecf60,uStack0000000000000020,&stack0x00000180,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    in_stack_00000168 = in_stack_00000188;
    in_stack_00000160 = in_stack_00000180;
    *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
    *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
    if (0x17 < uVar1) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x14);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xc);
      *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
      *(undefined8 *)(unaff_x20 + 0x318) = uVar4;
      *(undefined8 *)(unaff_x20 + 0x310) = uVar3;
      uVar2 = DAT_01aeb7f4;
      *(undefined8 *)(unaff_x20 + 0x30c) = in_stack_00000188;
      *(undefined8 *)(unaff_x20 + 0x304) = in_stack_00000180;
      in_stack_00000140 = 0;
      uStack0000000000000148 = 0;
      uStack000000000000014c = 0;
      in_stack_00000158 = 0;
      uStack0000000000000150 = 0;
      uStack0000000000000154 = 0;
      FUN_089d99f0(DAT_01aec64c,uStack000000000000001c,uStack0000000000000018,uStack0000000000000014
                   ,uVar2,DAT_01aeb8dc,uStack0000000000000010,&stack0x00000140,0);
      uStack0000000000000134 = CONCAT44(in_stack_00000158,uStack0000000000000154);
      uStack0000000000000128 = uStack0000000000000148;
      in_stack_00000120 = in_stack_00000140;
      uStack000000000000012c = uStack000000000000014c;
      uStack0000000000000130 = uStack0000000000000150;
      if (0x18 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 800) = 0x17;
        *(undefined8 *)(unaff_x20 + 0x338) = uStack0000000000000134;
        *(ulong *)(unaff_x20 + 0x330) = CONCAT44(uStack0000000000000150,uStack000000000000014c);
        *(ulong *)(unaff_x20 + 0x32c) = CONCAT44(uStack000000000000014c,uStack0000000000000148);
        *(undefined8 *)(unaff_x20 + 0x324) = in_stack_00000140;
        in_stack_00000100 = 0;
        uStack0000000000000108 = 0;
        uStack000000000000010c = 0;
        in_stack_00000118 = 0;
        uStack0000000000000110 = 0;
        uStack0000000000000114 = 0;
        FUN_089d99f0(DAT_01aec2b8,uStack000000000000000c,uStack0000000000000008,&stack0x00000100,0);
        if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
          *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114);
          *(ulong *)(unaff_x20 + 0x350) = CONCAT44(uStack0000000000000110,uStack000000000000010c);
          *(ulong *)(unaff_x20 + 0x34c) = CONCAT44(uStack000000000000010c,uStack0000000000000108);
          *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
          if (unaff_x19 != 0) {
            *(long *)(unaff_x19 + 0x10) = unaff_x20;
            thunk_FUN_040ec700();
            *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
            thunk_FUN_040ec700();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


