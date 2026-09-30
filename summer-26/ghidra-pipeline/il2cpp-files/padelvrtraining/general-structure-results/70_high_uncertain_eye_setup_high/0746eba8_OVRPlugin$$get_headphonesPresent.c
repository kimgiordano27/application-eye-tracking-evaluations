/*
FUNCTION_NAME: OVRPlugin$$get_headphonesPresent
ENTRY_POINT: 0746eba8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_headphonesPresent(long param_1)

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
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  while( true ) {
    uStack0000000000000008 = in_stack_00000088;
    uStack0000000000000000 = in_stack_00000080;
    uStack0000000000000010 = in_stack_00000090;
    uStack0000000000000024 = *(undefined8 *)(unaff_x23 + 0x24);
    uVar7 = *(undefined8 *)(unaff_x23 + 0x1c);
    fStack0000000000000018 = (float)in_stack_00000098;
    uStack000000000000001c = (undefined4)uVar7;
    uStack0000000000000020 = (undefined4)((ulong)uVar7 >> 0x20);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    in_stack_000000f8 = in_stack_00000088;
    in_stack_000000f0 = in_stack_00000080;
    in_stack_00000108 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    in_stack_00000100 = in_stack_00000090;
    lVar9 = *unaff_x25;
    *(undefined8 *)(unaff_x23 + 0x94) = uStack0000000000000024;
    *(undefined8 *)(unaff_x23 + 0x8c) = uVar7;
    lVar8 = *(long *)(param_1 + 0x10);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      uVar7 = *(undefined8 *)(unaff_x23 + 0x8c);
      lVar8 = lVar8 + (int)uVar1 * unaff_x27;
      *(undefined8 *)(lVar8 + 0x44) = *(undefined8 *)(unaff_x23 + 0x94);
      *(undefined8 *)(lVar8 + 0x3c) = uVar7;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000088;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000080;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000108;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000090;
    }
    else {
      uStack0000000000000054 = *(undefined8 *)(unaff_x23 + 0x94);
      uStack0000000000000038 = (undefined4)in_stack_00000088;
      fStack000000000000003c = (float)((ulong)in_stack_00000088 >> 0x20);
      in_stack_00000030 = in_stack_00000080;
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_00000090;
      fStack0000000000000044 = (float)((ulong)in_stack_00000090 >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x23 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0x8c) >> 0x20);
      FUN_0592f0c4(param_1,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = FUN_06d87180(&stack0x000000b0,*unaff_x24);
    if ((uVar6 & 1) == 0) {
      FUN_06d8717c(&stack0x000000b0,*unaff_x22);
      return;
    }
    uVar7 = *(undefined8 *)((long)unaff_x26 + 0x1c);
    in_stack_00000088 = unaff_x26[1];
    in_stack_00000080 = *unaff_x26;
    in_stack_00000098 = unaff_x26[3];
    in_stack_00000090 = unaff_x26[2];
    uVar15 = *(undefined8 *)((long)unaff_x26 + 0x14);
    uVar14 = *(undefined8 *)((long)unaff_x26 + 0xc);
    *(undefined8 *)(unaff_x23 + 0x24) = *(undefined8 *)((long)unaff_x26 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x1c) = uVar7;
    in_stack_000000f8 = unaff_x26[1];
    in_stack_000000f0 = *unaff_x26;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x23 + 0x84) = uVar15;
    *(undefined8 *)(unaff_x23 + 0x7c) = uVar14;
    FUN_07411d10(&stack0x00000030,uVar7,&stack0x000000f0,0);
    fVar5 = fStack0000000000000048;
    fVar4 = fStack0000000000000044;
    fVar3 = fStack0000000000000040;
    fVar2 = fStack000000000000003c;
    fVar13 = (float)uVar14;
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000078 = uStack0000000000000038;
    fVar12 = 0.0;
    fVar11 = unaff_s8;
    fVar10 = (float)FUN_08a447dc(0);
    in_stack_000000f0 = in_stack_00000070;
    in_stack_000000f8 =
         CONCAT44((fVar3 * fVar12 + fVar5 * fVar10 + fVar2 * fVar13) - fVar4 * fVar11,
                  in_stack_00000078);
    in_stack_00000100 =
         CONCAT44((fVar2 * fVar11 + fVar5 * fVar12 + fVar4 * fVar13) - fVar3 * fVar10,
                  (fVar4 * fVar10 + fVar5 * fVar11 + fVar3 * fVar13) - fVar2 * fVar12);
    in_stack_00000108 =
         CONCAT44(in_stack_00000108._4_4_,
                  ((fVar5 * fVar13 - fVar2 * fVar10) - fVar3 * fVar11) - fVar4 * fVar12);
    FUN_07411b08(&stack0x00000030,*(undefined8 *)(unaff_x20 + 0x28),&stack0x000000f0,0);
    in_stack_00000088 = CONCAT44(fStack000000000000003c,uStack0000000000000038);
    *(ulong *)(unaff_x23 + 0x14) = CONCAT44(fStack0000000000000048,fStack0000000000000044);
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(fStack0000000000000040,fStack000000000000003c);
    in_stack_00000080 = in_stack_00000030;
    param_1 = *unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


