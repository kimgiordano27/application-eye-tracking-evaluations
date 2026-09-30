/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeAcceleration2
ENTRY_POINT: 0534d3a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetNodeAcceleration2(undefined1 param_1 [16])

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  uint in_w8;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 uStack00000000000000c0;
  
  uStack00000000000000c0 = param_1._0_8_;
  *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
  *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
  if (0x14 < in_w8) {
    uVar11 = *(undefined8 *)(unaff_x21 + 0x54);
    uVar13 = *(undefined8 *)(unaff_x21 + 0x4c);
    *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
    *(undefined8 *)(unaff_x20 + 0x308) = uVar11;
    *(undefined8 *)(unaff_x20 + 0x300) = uVar13;
    *(long *)(unaff_x20 + 0x2fc) = param_1._8_8_;
    *(undefined8 *)(unaff_x20 + 0x2f4) = uStack00000000000000c0;
    uVar4 = DAT_011b0630;
    uVar3 = DAT_011b02a8;
    uVar2 = DAT_011afce8;
    *(undefined4 *)(unaff_x20 + 0x310) = 0;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    FUN_060fda18(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x000000a0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    /* try { // try from 0534d428 to 0544d42f has its CatchHandler @ 0534d4e4 */
    in_stack_00000088 = in_stack_000000a8;
    in_stack_00000080 = in_stack_000000a0;
    *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
    *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
    if (0x15 < uVar1) {
      uVar11 = *(undefined8 *)(unaff_x21 + 0x14);
      uVar13 = *(undefined8 *)(unaff_x21 + 0xc);
      *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
      *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
      *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
      uVar3 = DAT_011afb4c;
      uVar2 = DAT_011afb48;
      *(undefined8 *)(unaff_x20 + 0x32c) = uVar11;
      *(undefined8 *)(unaff_x20 + 0x324) = uVar13;
      uVar4 = DAT_011afef0;
      *(undefined4 *)(unaff_x20 + 0x334) = 0;
      in_stack_00000060 = 0;
      uStack0000000000000068 = 0;
      uStack000000000000006c = 0;
      in_stack_00000078 = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000074 = 0;
      FUN_060fda18(uVar2,uVar4,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
      uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
      uStack0000000000000048 = uStack0000000000000068;
      in_stack_00000040 = in_stack_00000060;
      uStack000000000000004c = uStack000000000000006c;
      uStack0000000000000050 = uStack0000000000000070;
      if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
        *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
        *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
        *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
        *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
        uVar4 = DAT_011b0804;
        uVar3 = DAT_011b05cc;
        uVar2 = DAT_011b05c8;
        *(undefined4 *)(unaff_x20 + 0x358) = 0;
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_060fda18(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x00000020,0);
        if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
          *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
          *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
          *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
          *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
          *(undefined4 *)(unaff_x20 + 0x37c) = 0;
          if (unaff_x19 != 0) {
            lVar12 = *unaff_x23;
            *(long *)(unaff_x19 + 0x10) = unaff_x20;
            **(long **)(lVar12 + 0xb8) = unaff_x19;
            lVar12 = thunk_FUN_02f45270(*unaff_x23);
            FUN_0534c790();
            puVar9 = Unity_Collections_FixedString512Bytes_TypeInfo;
            puVar8 = Unity_Collections_FixedString4096Bytes_TypeInfo;
            puVar7 = Unity_Collections_FixedString32Bytes_TypeInfo;
            puVar6 = Unity_Collections_FixedString128Bytes_TypeInfo;
            puVar5 = System_Net_FixedSizeReadStream_TypeInfo;
            if (**(long **)(*unaff_x23 + 0xb8) != 0) {
              lVar10 = *(long *)Unity_Collections_FixedString512Bytes_TypeInfo;
              uVar13 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
                lVar10 = *(long *)puVar9;
              }
              uVar14 = **(undefined8 **)(lVar10 + 0xb8);
              uVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar7);
              FUN_04dfeddc(uVar11,uVar14,*(undefined8 *)puVar8,0);
              uVar13 = FUN_0339a72c(uVar13,uVar11,*(undefined8 *)puVar5);
              uVar13 = FUN_033a4348(uVar13,*(undefined8 *)puVar6);
              if (lVar12 != 0) {
                lVar10 = *unaff_x23;
                *(undefined8 *)(lVar12 + 0x10) = uVar13;
                *(long *)(*(long *)(lVar10 + 0xb8) + 8) = lVar12;
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


