/*
FUNCTION_NAME: OVRPlugin$$GetNodeAcceleration
ENTRY_POINT: 076c7184
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodeAcceleration(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar9;
  long unaff_x23;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  float fVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  
  puVar10 = *(undefined8 **)(unaff_x23 + 0xa28);
  lVar7 = FUN_06f681cc(param_1,param_2,*puVar10);
  if (lVar7 == 0) goto LAB_076c7320;
  uVar1 = 1 - *(int *)(unaff_x20 + 0x48);
  if (*(uint *)(lVar7 + 0x18) <= uVar1) {
LAB_076c7324:
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  if (*(long *)(unaff_x20 + 0x30) == 0) {
LAB_076c7320:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar9 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
  lVar7 = FUN_06f681cc(*(long *)(unaff_x20 + 0x30),unaff_w21,*puVar10);
  if (lVar7 == 0) goto LAB_076c7320;
  if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x20 + 0x48)) goto LAB_076c7324;
  if (lVar9 == 0) goto LAB_076c7320;
  if (*(char *)(lVar9 + 0x10) != '\0') {
    lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(unaff_x20 + 0x48) * 8 + 0x20);
    if (lVar7 == 0) goto LAB_076c7320;
    if (*(char *)(lVar7 + 0x10) != '\0') {
      uVar2 = *(ulong *)(lVar7 + 0x20);
      auVar22 = ZEXT416(*(uint *)(lVar9 + 0x28));
      fVar20 = *(float *)(lVar9 + 0x2c);
      fVar11 = *(float *)(lVar7 + 0x28);
      fVar12 = *(float *)(lVar7 + 0x2c);
      auVar19 = ZEXT416(*(uint *)(lVar9 + 0x24));
      FUN_08575760(*(undefined4 *)(lVar9 + 0x20),0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar2;
      fVar23 = (float)uVar2;
      fVar24 = (float)(uVar2 >> 0x20);
      uVar8 = 1;
      auVar21._4_4_ = fVar20;
      auVar21._0_4_ = fVar20;
      auVar21._8_4_ = fVar20;
      auVar21._12_4_ = fVar20;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = CONCAT44(0,fVar11);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,fVar11);
      auVar16._4_4_ = fVar20;
      auVar16._0_4_ = extraout_s0;
      auVar16._8_4_ = extraout_var;
      auVar16._12_4_ = extraout_var_00;
      auVar21 = NEON_ext(auVar21,auVar16,4,1);
      fVar17 = auVar22._0_4_;
      fVar15 = auVar19._0_4_;
      auVar19._4_4_ = fVar20;
      auVar19._0_4_ = extraout_s0;
      auVar19._8_4_ = fVar17;
      auVar19._12_4_ = extraout_var_00;
      auVar22._4_4_ = fVar20;
      auVar22._0_4_ = extraout_s0;
      auVar22._8_4_ = fVar17;
      auVar22._12_4_ = extraout_var_00;
      auVar22 = NEON_ext(auVar19,auVar22,4,1);
      fVar13 = auVar22._4_4_;
      auVar16 = NEON_ext(auVar5,auVar6,4,1);
      auVar16 = NEON_ext(auVar16,auVar4,0xc,1);
      auVar18._4_4_ = fVar15;
      auVar18._0_4_ = fVar13;
      auVar18._8_4_ = fVar13;
      auVar18._12_4_ = auVar22._12_4_;
      auVar19 = NEON_rev64(auVar18,4);
      fVar13 = (fVar12 * extraout_s0 + fVar23 * auVar21._0_4_ + fVar24 * fVar13) -
               auVar16._0_4_ * auVar19._0_4_;
      fVar14 = (fVar24 * fVar20 + fVar12 * fVar15 + fVar11 * auVar22._12_4_) -
               auVar16._4_4_ * auVar19._4_4_;
      fVar11 = (fVar12 * fVar17 + fVar11 * auVar21._8_4_ + fVar23 * fVar15) -
               auVar16._8_4_ * auVar19._8_4_;
      fVar12 = ((fVar12 * fVar20 - fVar23 * auVar21._12_4_) - fVar24 * fVar15) -
               auVar16._0_4_ * auVar19._12_4_;
      goto LAB_076c7308;
    }
  }
  if (DAT_09539e1a == '\0') {
    FUN_0403162c(PTR_DAT_08f67f40);
    DAT_09539e1a = '\x01';
  }
  uVar8 = 0;
  uVar3 = (*(undefined8 **)(*(long *)PTR_DAT_08f67f40 + 0xb8))[1];
  fVar11 = (float)uVar3;
  fVar12 = (float)((ulong)uVar3 >> 0x20);
  uVar3 = **(undefined8 **)(*(long *)PTR_DAT_08f67f40 + 0xb8);
  fVar13 = (float)uVar3;
  fVar14 = (float)((ulong)uVar3 >> 0x20);
LAB_076c7308:
  unaff_x19[1] = CONCAT44(fVar12,fVar11);
  *unaff_x19 = CONCAT44(fVar14,fVar13);
  return uVar8;
}


