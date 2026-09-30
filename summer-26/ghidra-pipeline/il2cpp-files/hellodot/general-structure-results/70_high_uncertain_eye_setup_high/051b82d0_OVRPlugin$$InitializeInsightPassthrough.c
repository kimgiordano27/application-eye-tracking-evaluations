/*
FUNCTION_NAME: OVRPlugin$$InitializeInsightPassthrough
ENTRY_POINT: 051b82d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__InitializeInsightPassthrough(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float in_s3;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
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
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  while( true ) {
    uVar6 = FUN_0480642c(&stack0x000000c0,param_2);
    if ((uVar6 & 1) == 0) {
      FUN_04806428(&stack0x000000c0,*unaff_x23);
      return;
    }
    uVar11 = *(undefined8 *)((long)unaff_x25 + 0x1c);
    in_stack_00000098 = unaff_x25[1];
    in_stack_00000090 = *unaff_x25;
    in_stack_000000a8 = unaff_x25[3];
    in_stack_000000a0 = unaff_x25[2];
    *(undefined8 *)(unaff_x22 + 0x24) = *(undefined8 *)((long)unaff_x25 + 0x24);
    *(undefined8 *)(unaff_x22 + 0x1c) = uVar11;
    FUN_051b88b0(&stack0x00000030,&stack0x00000090,*(undefined8 *)(unaff_x20 + 0x28),0);
    fVar5 = fStack0000000000000048;
    fVar4 = fStack0000000000000044;
    fVar3 = fStack0000000000000040;
    fVar2 = fStack000000000000003c;
    _uStack0000000000000084 = CONCAT44(fStack0000000000000048,fStack0000000000000044);
    fStack0000000000000080 = fStack0000000000000040;
    uStack0000000000000078 = uStack0000000000000038;
    fStack000000000000007c = fStack000000000000003c;
    in_stack_00000070 = in_stack_00000030;
    fVar13 = 0.0;
    fVar12 = unaff_s8;
    fVar10 = (float)FUN_05ee9d24(0);
    fVar14 = fVar2 * in_s3;
    fVar15 = fVar3 * in_s3;
    fVar16 = fVar5 * in_s3;
    in_s3 = fVar2 * fVar12 + fVar5 * fVar13 + fVar4 * in_s3;
    fStack000000000000007c = (fVar3 * fVar13 + fVar5 * fVar10 + fVar14) - fVar4 * fVar12;
    fStack0000000000000080 = (fVar4 * fVar10 + fVar5 * fVar12 + fVar15) - fVar2 * fVar13;
    uStack0000000000000088 = ((fVar16 - fVar2 * fVar10) - fVar3 * fVar12) - fVar4 * fVar13;
    uStack0000000000000084 = in_s3 - fVar3 * fVar10;
    FUN_051b8900(&stack0x00000090,&stack0x00000070,*(undefined8 *)(unaff_x20 + 0x28),0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    fStack0000000000000018 = (float)in_stack_000000a8;
    uStack000000000000001c = (undefined4)*(undefined8 *)(unaff_x22 + 0x1c);
    if (lVar7 == 0) break;
    in_stack_00000108 = in_stack_00000098;
    in_stack_00000100 = in_stack_00000090;
    in_stack_00000118 = CONCAT44(uStack000000000000001c,fStack0000000000000018);
    in_stack_00000110 = in_stack_000000a0;
    lVar9 = *unaff_x24;
    *(undefined8 *)(unaff_x22 + 0x94) = *(undefined8 *)(unaff_x22 + 0x24);
    *(undefined8 *)(unaff_x22 + 0x8c) = *(undefined8 *)(unaff_x22 + 0x1c);
    lVar8 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      uVar11 = *(undefined8 *)(unaff_x22 + 0x8c);
      lVar8 = lVar8 + (int)uVar1 * unaff_x26;
      *(undefined8 *)(lVar8 + 0x44) = *(undefined8 *)(unaff_x22 + 0x94);
      *(undefined8 *)(lVar8 + 0x3c) = uVar11;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000098;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000090;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000118;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_000000a0;
    }
    else {
      uStack0000000000000054 = *(undefined8 *)(unaff_x22 + 0x94);
      uStack0000000000000038 = (undefined4)in_stack_00000098;
      fStack000000000000003c = (float)((ulong)in_stack_00000098 >> 0x20);
      in_stack_00000030 = in_stack_00000090;
      fStack0000000000000048 = fStack0000000000000018;
      fStack0000000000000040 = (float)in_stack_000000a0;
      fStack0000000000000044 = (float)((ulong)in_stack_000000a0 >> 0x20);
      uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x22 + 0x8c);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x22 + 0x8c) >> 0x20);
      FUN_038c45b0(lVar7,&stack0x00000030,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    param_2 = *unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


