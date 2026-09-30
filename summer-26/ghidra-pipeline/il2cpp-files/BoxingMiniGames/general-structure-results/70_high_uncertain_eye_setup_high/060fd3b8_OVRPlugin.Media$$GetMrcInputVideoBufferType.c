/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcInputVideoBufferType
ENTRY_POINT: 060fd3b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__GetMrcInputVideoBufferType(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  undefined8 *puVar8;
  long lVar9;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  ulong unaff_x22;
  long *unaff_x23;
  ulong uVar11;
  long *unaff_x24;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 unaff_s9;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
code_r0x060fd3b8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_060fd3a8;
  do {
    puVar8 = (undefined8 *)FUN_0367cd30(unaff_x23,param_3,2);
    while( true ) {
      (*(code *)*puVar8)(unaff_s9,unaff_x23,puVar8[1]);
      if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_060fd5f0;
      FUN_060f7988(*(long *)(unaff_x21 + 0xa8),unaff_x22 & 0xffffffff);
      uVar1 = (int)unaff_x22 + 1;
      unaff_x22 = (ulong)uVar1;
      if (uVar1 == 0x1a) {
        lVar10 = *(long *)(unaff_x21 + 0xa8);
        if (lVar10 == 0) goto LAB_060fd5f0;
        FUN_060f7b10(lVar10,1);
        *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar10 + 0x18);
        thunk_FUN_036b7ad0();
        puVar7 = PTR_DAT_07a207a8;
        puVar6 = PTR_DAT_079f4db8;
        uVar11 = 0;
        lVar10 = 0x2c;
        goto LAB_060fd480;
      }
      if (*(long *)(unaff_x21 + 0xa8) == 0) goto LAB_060fd5f0;
      FUN_060f7948(&stack0x00000020,*(long *)(unaff_x21 + 0xa8),unaff_x22);
      lVar10 = *(long *)(unaff_x21 + 0xa0);
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = uStack0000000000000028;
      if (lVar10 == 0) goto LAB_060fd5f0;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_060fd5f4;
      unaff_x23 = *(long **)(lVar10 + unaff_x22 * 8 + 0x20);
      if (unaff_x23 == (long *)0x0) goto LAB_060fd5f0;
      param_1 = *unaff_x23;
      param_3 = *unaff_x24;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_s9 = uStack000000000000002c;
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_060fd3a8:
      if (*(long *)(in_x10 + -2) != param_3) {
        in_x9 = in_x9 - 1;
        in_ZR = in_x9 == 0;
        goto code_r0x060fd3b8;
      }
      puVar8 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
    }
  } while( true );
LAB_060fd480:
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar9 = *(long *)puVar7;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 == 0) goto LAB_060fd5f0;
  if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_060fd5f4;
  lVar12 = *(long *)(unaff_x19 + 0x48);
  uVar1 = *(uint *)(lVar9 + uVar11 * 4 + 0x20);
  if ((int)uVar1 < 0) {
    if (DAT_07ed76b4 == '\0') {
      FUN_03642964(puVar6);
      DAT_07ed76b4 = '\x01';
    }
    puVar8 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    uVar3 = puVar8[1];
    fVar16 = (float)uVar3;
    fVar25 = (float)((ulong)uVar3 >> 0x20);
    uVar3 = *puVar8;
    fVar23 = (float)uVar3;
    fVar24 = (float)((ulong)uVar3 >> 0x20);
  }
  else {
    lVar9 = *unaff_x20;
    if (lVar9 == 0) {
LAB_060fd5f0:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
LAB_060fd5f4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar9 = lVar9 + (ulong)uVar1 * 0x1c;
    fVar16 = *(float *)(lVar9 + 0x30);
    auVar20 = ZEXT416(*(uint *)(lVar9 + 0x34));
    auVar22 = ZEXT416(*(uint *)(lVar9 + 0x38));
    fVar13 = (float)FUN_071aee04(*(undefined4 *)(lVar9 + 0x2c),0);
    lVar9 = *unaff_x20;
    if (lVar9 == 0) goto LAB_060fd5f0;
    if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_060fd5f4;
    pauVar2 = (undefined1 (*) [12])(lVar9 + lVar10);
    fVar28 = (float)*(undefined8 *)(*pauVar2 + 8);
    fVar29 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    fVar26 = (float)*(undefined8 *)*pauVar2;
    fVar27 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar21 = auVar22._0_4_;
    fVar17 = auVar20._0_4_;
    auVar18._4_4_ = fVar29;
    auVar18._0_4_ = fVar29;
    auVar18._8_4_ = fVar29;
    auVar18._12_4_ = fVar29;
    auVar19._12_4_ = fVar29;
    auVar19._0_12_ = *pauVar2;
    auVar19 = NEON_ext(auVar18,auVar19,4,1);
    fVar14 = fVar13 * fVar27;
    fVar15 = fVar16 * fVar27;
    fVar23 = fVar17 * fVar27;
    fVar24 = fVar13 * fVar28;
    fVar25 = fVar17 * fVar28;
    auVar20._4_4_ = fVar14;
    auVar20._0_4_ = fVar17 * fVar26;
    auVar20._8_4_ = fVar16 * fVar28;
    auVar20._12_4_ = fVar15;
    auVar22._4_4_ = fVar14;
    auVar22._0_4_ = fVar17 * fVar26;
    auVar22._8_4_ = fVar16 * fVar28;
    auVar22._12_4_ = fVar15;
    auVar20 = NEON_ext(auVar20,auVar22,4,1);
    auVar4._4_4_ = fVar23;
    auVar4._0_4_ = fVar16 * fVar26;
    auVar4._8_4_ = fVar24;
    auVar4._12_4_ = fVar25;
    auVar5._4_4_ = fVar23;
    auVar5._0_4_ = fVar16 * fVar26;
    auVar5._8_4_ = fVar24;
    auVar5._12_4_ = fVar25;
    auVar22 = NEON_ext(auVar4,auVar5,0xc,1);
    fVar23 = (fVar26 * fVar21 + fVar13 * auVar19._0_4_ + auVar20._4_4_) - fVar23;
    fVar24 = (fVar27 * fVar21 + fVar16 * auVar19._4_4_ + auVar20._12_4_) - fVar24;
    fVar16 = (fVar28 * fVar21 + fVar17 * auVar19._8_4_ + fVar14) - auVar22._4_4_;
    fVar25 = ((fVar29 * fVar21 - fVar13 * auVar19._12_4_) - fVar15) - fVar25;
  }
  if (lVar12 == 0) goto LAB_060fd5f0;
  if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_060fd5f4;
  lVar12 = lVar12 + uVar11 * 0x10;
  uVar11 = uVar11 + 1;
  lVar10 = lVar10 + 0x1c;
  *(ulong *)(lVar12 + 0x28) = CONCAT44(fVar25,fVar16);
  *(ulong *)(lVar12 + 0x20) = CONCAT44(fVar24,fVar23);
  if (uVar11 == 0x1a) {
    return 1;
  }
  goto LAB_060fd480;
}


