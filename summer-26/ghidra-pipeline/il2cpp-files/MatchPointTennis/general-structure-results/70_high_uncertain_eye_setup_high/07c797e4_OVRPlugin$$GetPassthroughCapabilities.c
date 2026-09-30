/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 07c797e4
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


void OVRPlugin__GetPassthroughCapabilities(undefined8 param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 in_w9;
  long lVar8;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_d3;
  undefined8 uVar13;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  uStack0000000000000070 = param_1;
  uStack0000000000000078 = in_w9;
  while( true ) {
    fVar3 = fStack0000000000000048;
    fVar2 = fStack0000000000000044;
    fVar12 = (float)in_d3;
    fVar11 = 0.0;
    fVar10 = unaff_s8;
    fVar9 = (float)FUN_09516910(0);
    in_stack_000000f0 = uStack0000000000000070;
    in_stack_000000f8 =
         CONCAT44((unaff_s10 * fVar11 + fVar3 * fVar9 + unaff_s11 * fVar12) - fVar2 * fVar10,
                  uStack0000000000000078);
    in_stack_00000100 =
         CONCAT44((unaff_s11 * fVar10 + fVar3 * fVar11 + fVar2 * fVar12) - unaff_s10 * fVar9,
                  (fVar2 * fVar9 + fVar3 * fVar10 + unaff_s10 * fVar12) - unaff_s11 * fVar11);
    in_stack_00000108 =
         CONCAT44(in_stack_00000108._4_4_,
                  ((fVar3 * fVar12 - unaff_s11 * fVar9) - unaff_s10 * fVar10) - fVar2 * fVar11);
    FUN_07c1dc80(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
    in_stack_00000088 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
    in_stack_00000080 = in_stack_00000030;
    *(ulong *)(unaff_x23 + 0x14) = CONCAT44(fStack0000000000000048,fStack0000000000000044);
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(fStack0000000000000040,fStack000000000000003c);
    lVar6 = *unaff_x21;
    fStack0000000000000018 = (float)in_stack_00000098;
    uStack000000000000001c = (undefined4)*(undefined8 *)(unaff_x23 + 0x1c);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_000000f0 = in_stack_00000030;
    in_stack_00000108 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    in_stack_00000100 = in_stack_00000090;
    lVar8 = *unaff_x25;
    *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0x1c);
    lVar7 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    in_stack_000000f8 = in_stack_00000088;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      uVar5 = *(undefined8 *)(unaff_x23 + 0x8c);
      lVar7 = lVar7 + (int)uVar1 * unaff_x27;
      *(undefined8 *)(lVar7 + 0x44) = *(undefined8 *)(unaff_x23 + 0x94);
      *(undefined8 *)(lVar7 + 0x3c) = uVar5;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_00000088;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar7 + 0x38) = in_stack_00000108;
      *(undefined8 *)(lVar7 + 0x30) = in_stack_00000090;
    }
    else {
      uStack0000000000000054 = *(undefined8 *)(unaff_x23 + 0x94);
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_00000090;
      fStack0000000000000044 = (float)((ulong)in_stack_00000090 >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x23 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x8c) >> 0x20);
      FUN_05a2bbfc(lVar6,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    uVar4 = FUN_0765f784(&stack0x000000b0,*unaff_x24);
    if ((uVar4 & 1) == 0) {
      FUN_0765f780(&stack0x000000b0,*unaff_x22);
      return;
    }
    uVar5 = *(undefined8 *)((long)unaff_x26 + 0x1c);
    in_stack_00000088 = unaff_x26[1];
    in_stack_00000080 = *unaff_x26;
    in_stack_00000098 = unaff_x26[3];
    in_stack_00000090 = unaff_x26[2];
    uVar13 = *(undefined8 *)((long)unaff_x26 + 0x14);
    in_d3 = *(undefined8 *)((long)unaff_x26 + 0xc);
    *(undefined8 *)(unaff_x23 + 0x24) = *(undefined8 *)((long)unaff_x26 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x1c) = uVar5;
    in_stack_000000f8 = unaff_x26[1];
    in_stack_000000f0 = *unaff_x26;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x23 + 0x84) = uVar13;
    *(undefined8 *)(unaff_x23 + 0x7c) = in_d3;
    FUN_07c1de88(&stack0x00000030,uVar5,&stack0x000000f0,0);
    uStack0000000000000070 = in_stack_00000030;
    uStack0000000000000078 = uStack0000000000000038;
    unaff_s10 = fStack0000000000000040;
    unaff_s11 = fStack000000000000003c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


