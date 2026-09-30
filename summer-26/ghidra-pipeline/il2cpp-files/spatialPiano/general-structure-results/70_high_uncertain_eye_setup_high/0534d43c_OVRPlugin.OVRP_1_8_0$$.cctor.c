/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 0534d43c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0___cctor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 in_w8;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x21;
  undefined8 uVar13;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar10 = *(undefined8 *)(unaff_x21 + 0x14);
  uVar12 = *(undefined8 *)(unaff_x21 + 0xc);
                    /* try { // try from 0534d450 to 0544d453 has its CatchHandler @ 0534d4e0 */
                    /* try { // try from 0534d454 to 0544d4d3 has its CatchHandler @ 0534d330 */
  *(undefined4 *)(unaff_x20 + 0x314) = in_w8;
  *(undefined8 *)(unaff_x20 + 800) = in_stack_00000088;
  *(undefined8 *)(unaff_x20 + 0x318) = in_stack_00000080;
  uVar2 = DAT_011afb4c;
  uVar1 = DAT_011afb48;
  *(undefined8 *)(unaff_x20 + 0x32c) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x324) = uVar12;
  uVar3 = DAT_011afef0;
  *(undefined4 *)(unaff_x20 + 0x334) = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack000000000000006c = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  FUN_060fda18(uVar1,uVar3,uVar2,0,0,0,0xbf800000,&stack0x00000060,0);
  uStack0000000000000054 = CONCAT44(uStack0000000000000078,uStack0000000000000074);
  in_stack_00000048 = uStack0000000000000068;
  in_stack_00000040 = uStack0000000000000060;
  uStack000000000000004c = uStack000000000000006c;
  in_stack_00000050 = uStack0000000000000070;
  if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
    *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    *(undefined8 *)(unaff_x20 + 0x33c) = uStack0000000000000060;
    *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
    *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    uVar3 = DAT_011b0804;
    uVar2 = DAT_011b05cc;
    uVar1 = DAT_011b05c8;
    *(undefined4 *)(unaff_x20 + 0x358) = 0;
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_060fda18(uVar1,uVar2,uVar3,0,0,0,0xbf800000,&stack0x00000020,0);
    if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
      *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
      *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
      *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      *(undefined4 *)(unaff_x20 + 0x37c) = 0;
      if (unaff_x19 != 0) {
        lVar11 = *unaff_x23;
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        **(long **)(lVar11 + 0xb8) = unaff_x19;
        lVar11 = thunk_FUN_02f45270(*unaff_x23);
        FUN_0534c790();
        puVar8 = Unity_Collections_FixedString512Bytes_TypeInfo;
        puVar7 = Unity_Collections_FixedString4096Bytes_TypeInfo;
        puVar6 = Unity_Collections_FixedString32Bytes_TypeInfo;
        puVar5 = Unity_Collections_FixedString128Bytes_TypeInfo;
        puVar4 = System_Net_FixedSizeReadStream_TypeInfo;
        if (**(long **)(*unaff_x23 + 0xb8) != 0) {
          lVar9 = *(long *)Unity_Collections_FixedString512Bytes_TypeInfo;
          uVar12 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar9 = *(long *)puVar8;
          }
          uVar13 = **(undefined8 **)(lVar9 + 0xb8);
          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
          FUN_04dfeddc(uVar10,uVar13,*(undefined8 *)puVar7,0);
          uVar12 = FUN_0339a72c(uVar12,uVar10,*(undefined8 *)puVar4);
          uVar12 = FUN_033a4348(uVar12,*(undefined8 *)puVar5);
          if (lVar11 != 0) {
            lVar9 = *unaff_x23;
            *(undefined8 *)(lVar11 + 0x10) = uVar12;
            *(long *)(*(long *)(lVar9 + 0xb8) + 8) = lVar11;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


