/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 07c798b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryDimensions(undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float unaff_s8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  while( true ) {
    lVar8 = *unaff_x21;
    uStack0000000000000010 = in_stack_00000090;
    uStack0000000000000024 = *(undefined8 *)(unaff_x23 + 0x24);
    uVar7 = *(undefined8 *)(unaff_x23 + 0x1c);
    fStack0000000000000018 = (float)in_stack_00000098;
    uStack000000000000001c = (undefined4)uVar7;
    uStack0000000000000020 = (undefined4)((ulong)uVar7 >> 0x20);
    uStack0000000000000080 = uStack0000000000000000;
    uStack0000000000000088 = uStack0000000000000008;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000108 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    in_stack_00000100 = in_stack_00000090;
    lVar10 = *unaff_x25;
    *(undefined8 *)(unaff_x23 + 0x94) = uStack0000000000000024;
    *(undefined8 *)(unaff_x23 + 0x8c) = uVar7;
    lVar9 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    in_stack_000000f0 = uStack0000000000000000;
    in_stack_000000f8 = uStack0000000000000008;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      uVar7 = *(undefined8 *)(unaff_x23 + 0x8c);
      lVar9 = lVar9 + (int)uVar1 * unaff_x27;
      *(undefined8 *)(lVar9 + 0x44) = *(undefined8 *)(unaff_x23 + 0x94);
      *(undefined8 *)(lVar9 + 0x3c) = uVar7;
      *(undefined8 *)(lVar9 + 0x28) = uStack0000000000000008;
      *(undefined8 *)(lVar9 + 0x20) = uStack0000000000000000;
      *(undefined8 *)(lVar9 + 0x38) = in_stack_00000108;
      *(undefined8 *)(lVar9 + 0x30) = in_stack_00000090;
    }
    else {
      uStack0000000000000054 = *(undefined8 *)(unaff_x23 + 0x94);
      uStack0000000000000038 = (undefined4)uStack0000000000000008;
      fStack000000000000003c = (float)((ulong)uStack0000000000000008 >> 0x20);
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_00000090;
      fStack0000000000000044 = (float)((ulong)in_stack_00000090 >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x23 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x8c) >> 0x20);
      in_stack_00000030 = uStack0000000000000000;
      FUN_05a2bbfc(lVar8,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = FUN_0765f784(&stack0x000000b0,*unaff_x24);
    if ((uVar6 & 1) == 0) {
      FUN_0765f780(&stack0x000000b0,*unaff_x22);
      return;
    }
    uVar7 = *(undefined8 *)((long)unaff_x26 + 0x1c);
    uStack0000000000000088 = unaff_x26[1];
    uStack0000000000000080 = *unaff_x26;
    in_stack_00000098 = unaff_x26[3];
    in_stack_00000090 = unaff_x26[2];
    uVar16 = *(undefined8 *)((long)unaff_x26 + 0x14);
    uVar15 = *(undefined8 *)((long)unaff_x26 + 0xc);
    *(undefined8 *)(unaff_x23 + 0x24) = *(undefined8 *)((long)unaff_x26 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x1c) = uVar7;
    in_stack_000000f8 = unaff_x26[1];
    in_stack_000000f0 = *unaff_x26;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x23 + 0x84) = uVar16;
    *(undefined8 *)(unaff_x23 + 0x7c) = uVar15;
    FUN_07c1de88(&stack0x00000030,uVar7,&stack0x000000f0,0);
    fVar5 = fStack0000000000000048;
    fVar4 = fStack0000000000000044;
    fVar3 = fStack0000000000000040;
    fVar2 = fStack000000000000003c;
    fVar14 = (float)uVar15;
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000078 = uStack0000000000000038;
    fVar13 = 0.0;
    fVar12 = unaff_s8;
    fVar11 = (float)FUN_09516910(0);
    in_stack_000000f0 = in_stack_00000070;
    in_stack_000000f8 =
         CONCAT44((fVar3 * fVar13 + fVar5 * fVar11 + fVar2 * fVar14) - fVar4 * fVar12,
                  in_stack_00000078);
    in_stack_00000100 =
         CONCAT44((fVar2 * fVar12 + fVar5 * fVar13 + fVar4 * fVar14) - fVar3 * fVar11,
                  (fVar4 * fVar11 + fVar5 * fVar12 + fVar3 * fVar14) - fVar2 * fVar13);
    in_stack_00000108 =
         CONCAT44(in_stack_00000108._4_4_,
                  ((fVar5 * fVar14 - fVar2 * fVar11) - fVar3 * fVar12) - fVar4 * fVar13);
    FUN_07c1dc80(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
    uStack0000000000000008 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
    *(ulong *)(unaff_x23 + 0x14) = CONCAT44(fStack0000000000000048,fStack0000000000000044);
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(fStack0000000000000040,fStack000000000000003c);
    uStack0000000000000000 = in_stack_00000030;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


