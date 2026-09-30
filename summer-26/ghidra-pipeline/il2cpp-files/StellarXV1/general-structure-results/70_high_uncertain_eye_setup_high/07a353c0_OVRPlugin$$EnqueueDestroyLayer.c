/*
FUNCTION_NAME: OVRPlugin$$EnqueueDestroyLayer
ENTRY_POINT: 07a353c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__EnqueueDestroyLayer(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 in_w8;
  long lVar21;
  long lVar22;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar23;
  long unaff_x23;
  float fVar24;
  float extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined8 in_d3;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 uStack0000000000000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  *(undefined1 *)(unaff_x21 + 0x263) = in_w8;
  uStack0000000000000080 = 0;
  uStack0000000000000088 = 0;
  fStack000000000000008c = 0.0;
  fStack0000000000000098 = 0.0;
  fStack0000000000000090 = 0.0;
  fStack0000000000000094 = 0.0;
  uStack00000000000000d8 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000fc = 0;
  uStack00000000000000f0 = 0;
  uStack0000000000000108 = 0;
  uStack000000000000010c = 0;
  uStack0000000000000100 = 0;
  *(undefined8 *)(unaff_x23 + 0x24) = 0;
  *(undefined8 *)(unaff_x23 + 0x1c) = 0;
  puVar11 = PTR_DAT_092f0490;
  puVar10 = PTR_DAT_092f0460;
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  if (unaff_x19 != 0) {
    lVar17 = FUN_050092a8();
    lVar18 = thunk_FUN_040b4efc(*(undefined8 *)puVar10);
    FUN_05b21c90(lVar18,*(undefined8 *)puVar11);
    if (lVar17 != 0) {
      plVar23 = (long *)(lVar17 + 0x20);
      *plVar23 = lVar18;
      thunk_FUN_040ec700(plVar23,lVar18);
      puVar12 = PTR_DAT_092f0480;
      puVar11 = PTR_DAT_092f0470;
      puVar10 = PTR_DAT_092f0468;
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        FUN_05b23170(&stack0x00000040,*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_092f0488);
        uVar9 = DAT_01aecba0;
        uStack00000000000000d8 = CONCAT44(fStack000000000000004c,uStack0000000000000048);
        uStack00000000000000e0 = CONCAT44(fStack0000000000000054,fStack0000000000000050);
        uStack00000000000000e8 = CONCAT44(uStack000000000000005c,fStack0000000000000058);
        uStack00000000000000d0 = in_stack_00000040;
        uStack00000000000000f0 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
        uStack00000000000000f8 = uStack0000000000000068;
        uStack00000000000000fc = uStack000000000000006c;
        uStack0000000000000108 = (undefined4)in_stack_00000078;
        uStack000000000000010c = (undefined4)((ulong)in_stack_00000078 >> 0x20);
        uStack0000000000000100 = in_stack_00000070;
        while( true ) {
          fVar30 = (float)in_d3;
          uVar19 = FUN_0710ec4c(&stack0x000000d0,*(undefined8 *)puVar11);
          if ((uVar19 & 1) == 0) {
            FUN_0710ec48(&stack0x000000d0,*(undefined8 *)puVar10);
            return lVar17;
          }
          auVar33._8_4_ = uStack00000000000000f8;
          auVar33._0_8_ = uStack00000000000000f0;
          auVar33._12_4_ = uStack00000000000000fc;
          auVar8._4_8_ = uStack0000000000000100;
          auVar8._0_4_ = uStack00000000000000fc;
          auVar7._12_4_ = uStack0000000000000108;
          auVar7._0_12_ = auVar8;
          uVar20 = *(undefined8 *)(unaff_x20 + 0x28);
          uStack00000000000000a8 = uStack00000000000000e8;
          uStack00000000000000a0 = uStack00000000000000e0;
          uStack00000000000000b8 = auVar33._8_8_;
          uStack00000000000000b0 = uStack00000000000000f0;
          *(long *)(unaff_x23 + 0x24) = auVar7._8_8_;
          *(long *)(unaff_x23 + 0x1c) = auVar8._0_8_;
          FUN_07a35940(&stack0x00000040,&stack0x000000a0,uVar20,0);
          fVar16 = fStack0000000000000058;
          fVar15 = fStack0000000000000054;
          fVar14 = fStack0000000000000050;
          fVar13 = fStack000000000000004c;
          fStack0000000000000094 = fStack0000000000000054;
          fStack0000000000000098 = fStack0000000000000058;
          fStack0000000000000090 = fStack0000000000000050;
          uStack0000000000000088 = uStack0000000000000048;
          fStack000000000000008c = fStack000000000000004c;
          uStack0000000000000080 = in_stack_00000040;
          auVar6._4_4_ = fStack0000000000000050;
          auVar6._0_4_ = fStack000000000000004c;
          uVar19 = CONCAT44(0,fStack0000000000000054);
          auVar28 = ZEXT816(0);
          auVar34 = ZEXT416(uVar9);
          FUN_089b9180(uVar9,0);
          auVar6._8_8_ = 0;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar19;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar19;
          auVar32._4_4_ = fVar30;
          auVar32._0_4_ = fVar30;
          auVar32._8_4_ = fVar30;
          auVar32._12_4_ = fVar30;
          auVar26._4_4_ = fVar30;
          auVar26._0_4_ = extraout_s0;
          auVar26._8_4_ = extraout_var;
          auVar26._12_4_ = extraout_var_00;
          auVar33 = NEON_ext(auVar32,auVar26,4,1);
          fVar27 = auVar28._0_4_;
          fVar25 = auVar34._0_4_;
          auVar34._4_4_ = fVar30;
          auVar34._0_4_ = extraout_s0;
          auVar34._8_4_ = fVar27;
          auVar34._12_4_ = extraout_var_00;
          auVar28._4_4_ = fVar30;
          auVar28._0_4_ = extraout_s0;
          auVar28._8_4_ = fVar27;
          auVar28._12_4_ = extraout_var_00;
          auVar34 = NEON_ext(auVar34,auVar28,4,1);
          fVar24 = auVar34._4_4_;
          auVar26 = NEON_ext(auVar4,auVar5,4,1);
          fVar31 = fVar15 * auVar34._12_4_;
          in_d3 = CONCAT44(fVar31,fVar14 * fVar24);
          auVar26 = NEON_ext(auVar26,auVar6,0xc,1);
          auVar29._4_4_ = fVar25;
          auVar29._0_4_ = fVar24;
          auVar29._8_4_ = fVar24;
          auVar29._12_4_ = auVar34._12_4_;
          auVar34 = NEON_rev64(auVar29,4);
          fStack000000000000008c =
               (fVar16 * extraout_s0 + fVar13 * auVar33._0_4_ + fVar14 * fVar24) -
               auVar26._0_4_ * auVar34._0_4_;
          fStack0000000000000090 =
               (fVar14 * fVar30 + fVar16 * fVar25 + fVar31) - auVar26._4_4_ * auVar34._4_4_;
          fStack0000000000000094 =
               (fVar16 * fVar27 + fVar15 * auVar33._8_4_ + fVar13 * fVar25) -
               auVar26._8_4_ * auVar34._8_4_;
          fStack0000000000000098 =
               ((fVar16 * fVar30 - fVar13 * auVar33._12_4_) - fVar14 * fVar25) -
               auVar26._0_4_ * auVar34._12_4_;
          FUN_07a35990(&stack0x000000a0,&stack0x00000080,*(undefined8 *)(unaff_x20 + 0x28),0);
          lVar18 = *plVar23;
          if (lVar18 == 0) break;
          iVar1 = *(int *)(lVar18 + 0x1c);
          in_stack_00000118 = uStack00000000000000a8;
          in_stack_00000110 = uStack00000000000000a0;
          in_stack_00000120 = uStack00000000000000b0;
          in_stack_00000128 = uStack00000000000000b8;
          lVar21 = *(long *)(lVar18 + 0x10);
          lVar22 = *(long *)puVar12;
          *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0x24);
          *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0x1c);
          *(int *)(lVar18 + 0x1c) = iVar1 + 1;
          if (lVar21 == 0) break;
          uVar2 = *(uint *)(lVar18 + 0x18);
          if (uVar2 < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + (long)(int)uVar2 * 0x2c;
            uVar20 = *(undefined8 *)(unaff_x23 + 0x8c);
            uVar3 = *(undefined8 *)(unaff_x23 + 0x94);
            *(uint *)(lVar18 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar21 + 0x28) = uStack00000000000000a8;
            *(undefined8 *)(lVar21 + 0x20) = uStack00000000000000a0;
            *(undefined8 *)(lVar21 + 0x38) = uStack00000000000000b8;
            *(undefined8 *)(lVar21 + 0x30) = uStack00000000000000b0;
            *(undefined8 *)(lVar21 + 0x44) = uVar3;
            *(undefined8 *)(lVar21 + 0x3c) = uVar20;
          }
          else {
            auVar26 = *(undefined1 (*) [16])(unaff_x23 + 0x8c);
            uStack0000000000000048 = (undefined4)uStack00000000000000a8;
            fStack000000000000004c = (float)((ulong)uStack00000000000000a8 >> 0x20);
            in_stack_00000040 = uStack00000000000000a0;
            fStack0000000000000058 = (float)uStack00000000000000b8;
            fStack0000000000000050 = (float)uStack00000000000000b0;
            fStack0000000000000054 = (float)((ulong)uStack00000000000000b0 >> 0x20);
            uStack0000000000000064 = auVar26._8_4_;
            uStack0000000000000068 = auVar26._12_4_;
            uStack000000000000005c = auVar26._0_4_;
            uStack0000000000000060 = auVar26._4_4_;
            FUN_05b225a8(lVar18,&stack0x00000040,
                         *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


