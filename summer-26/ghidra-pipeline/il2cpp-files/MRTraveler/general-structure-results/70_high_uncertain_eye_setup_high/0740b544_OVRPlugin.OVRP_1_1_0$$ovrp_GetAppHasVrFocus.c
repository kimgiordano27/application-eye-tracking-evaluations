/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 0740b544
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(void)

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
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
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  
  FUN_085e9668();
  *(undefined8 *)(unaff_x22 + 0x54) = *(undefined8 *)(unaff_x22 + 0x74);
  *(undefined8 *)(unaff_x22 + 0x4c) = *(undefined8 *)(unaff_x22 + 0x6c);
  in_stack_000001a8 = in_stack_000001c8;
  in_stack_000001a0 = in_stack_000001c0;
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x2e0) = 0x15;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x4c);
    *(undefined8 *)(unaff_x20 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0x54);
    *(undefined8 *)(unaff_x20 + 0x2f0) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x2ec) = in_stack_000001c8;
    *(undefined8 *)(unaff_x20 + 0x2e4) = in_stack_000001c0;
    in_stack_00000180 = 0;
    in_stack_00000188 = 0;
    in_stack_00000198 = 0;
    in_stack_00000190 = 0;
    FUN_085e9668(DAT_018b0bbc,uStack0000000000000024,uStack0000000000000020,uStack000000000000001c,
                 DAT_018b08c8,DAT_018afde0,uStack0000000000000018,&stack0x00000180,0);
    *(undefined8 *)(unaff_x22 + 0x14) = *(undefined8 *)(unaff_x22 + 0x34);
    *(undefined8 *)(unaff_x22 + 0xc) = *(undefined8 *)(unaff_x22 + 0x2c);
    in_stack_00000168 = in_stack_00000188;
    in_stack_00000160 = in_stack_00000180;
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x300) = 0x16;
      uVar1 = *(undefined8 *)(unaff_x22 + 0xc);
      *(undefined8 *)(unaff_x20 + 0x318) = *(undefined8 *)(unaff_x22 + 0x14);
      *(undefined8 *)(unaff_x20 + 0x310) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x30c) = in_stack_00000188;
      *(undefined8 *)(unaff_x20 + 0x304) = in_stack_00000180;
      in_stack_00000140 = 0;
      uStack0000000000000148 = 0;
      uStack000000000000014c = 0;
      in_stack_00000158 = 0;
      uStack0000000000000150 = 0;
      uStack0000000000000154 = 0;
      FUN_085e9668(DAT_018b0ee8,uStack0000000000000014,uStack0000000000000010,uStack000000000000000c
                   ,DAT_018b0b20,DAT_018b0454,uStack0000000000000008,&stack0x00000140,0);
      uStack0000000000000134 = CONCAT44(in_stack_00000158,uStack0000000000000154);
      uStack0000000000000130 = uStack0000000000000150;
      uStack0000000000000128 = uStack0000000000000148;
      uStack000000000000012c = uStack000000000000014c;
      in_stack_00000120 = in_stack_00000140;
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
        FUN_085e9668(DAT_018b0824,uStack0000000000000004,uStack0000000000000000,&stack0x00000100,0);
        if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
          *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114);
          *(ulong *)(unaff_x20 + 0x350) = CONCAT44(uStack0000000000000110,uStack000000000000010c);
          *(ulong *)(unaff_x20 + 0x34c) = CONCAT44(uStack000000000000010c,uStack0000000000000108);
          *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
          if (unaff_x19 != 0) {
            *(long *)(unaff_x19 + 0x10) = unaff_x20;
            thunk_FUN_03d233cc();
            *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
            thunk_FUN_03d233cc();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


