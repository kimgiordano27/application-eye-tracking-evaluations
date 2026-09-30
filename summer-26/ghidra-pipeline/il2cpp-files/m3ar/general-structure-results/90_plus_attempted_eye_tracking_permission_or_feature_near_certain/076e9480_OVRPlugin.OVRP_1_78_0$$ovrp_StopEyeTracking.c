/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 076e9480
PROGRAM: m3ar-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


float * OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(undefined1 param_1 [16],double param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined *puVar5;
  undefined *puVar6;
  float *pfVar7;
  long lVar8;
  undefined1 (*pauVar9) [12];
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float unaff_s8;
  double unaff_d9;
  float fVar32;
  float fStack0000000000000020;
  
                    /* try { // try from 076e9480 to 077e949f has its CatchHandler @ 076e9500 */
                    /* try { // try from 076e94a0 to 077e951f has its CatchHandler @ 076e93d8 */
  uVar1 = 0x80000000;
  if ((double)(long)(unaff_d9 + param_2) != INFINITY) {
    uVar1 = (int)(double)(long)(unaff_d9 + param_2);
  }
  pfVar7 = (float *)FUN_040316d0(*unaff_x20,(ulong)uVar1);
  puVar6 = PTR_DAT_08fae550;
  puVar5 = PTR_DAT_08f65568;
  if (0 < (int)uVar1) {
    iVar10 = 0;
    uVar12 = 0;
    pfVar4 = pfVar7;
    do {
      if (DAT_09539e16 == '\0') {
        FUN_0403162c(puVar5);
        DAT_09539e16 = '\x01';
      }
      lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
      fVar15 = *(float *)(lVar8 + 0x18);
      fVar19 = *(float *)(lVar8 + 0x1c);
      auVar28 = ZEXT416(*(uint *)(lVar8 + 0x20));
      fVar13 = (float)FUN_08575c64((float)iVar10 - unaff_s8,0);
      if (DAT_09539c08 == '\0') {
        FUN_0403162c(puVar5);
        DAT_09539c08 = '\x01';
      }
      fVar16 = fVar15;
      fVar20 = fVar19;
      fVar14 = (float)FUN_08575f94(fVar13,0);
      lVar8 = *(long *)puVar6;
      fVar32 = *(float *)(unaff_x19 + 0x94);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar8 = *(long *)puVar6;
      }
      if (pfVar7 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if ((uint)pfVar7[6] <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      iVar10 = iVar10 + -1;
      pauVar9 = *(undefined1 (**) [12])(lVar8 + 0xb8);
      fVar24 = (float)*(undefined8 *)(*pauVar9 + 8);
      fVar26 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
      fVar21 = (float)*(undefined8 *)*pauVar9;
      fVar22 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
      auVar30._4_4_ = fVar26;
      auVar30._0_4_ = fVar26;
      auVar30._8_4_ = fVar26;
      auVar30._12_4_ = fVar26;
      auVar31._12_4_ = fVar26;
      auVar31._0_12_ = *pauVar9;
      auVar31 = NEON_ext(auVar30,auVar31,4,1);
      fVar17 = fVar13 * fVar22;
      fVar18 = fVar15 * fVar22;
      fStack0000000000000020 = auVar28._0_4_;
      fVar23 = fVar19 * fVar22;
      fVar25 = fVar13 * fVar24;
      fVar27 = fVar19 * fVar24;
      auVar28._4_4_ = fVar17;
      auVar28._0_4_ = fVar19 * fVar21;
      auVar28._8_4_ = fVar15 * fVar24;
      auVar28._12_4_ = fVar18;
      auVar29._4_4_ = fVar17;
      auVar29._0_4_ = fVar19 * fVar21;
      auVar29._8_4_ = fVar15 * fVar24;
      auVar29._12_4_ = fVar18;
      auVar29 = NEON_ext(auVar28,auVar29,4,1);
      auVar2._4_4_ = fVar23;
      auVar2._0_4_ = fVar15 * fVar21;
      auVar2._8_4_ = fVar25;
      auVar2._12_4_ = fVar27;
      auVar3._4_4_ = fVar23;
      auVar3._0_4_ = fVar15 * fVar21;
      auVar3._8_4_ = fVar25;
      auVar3._12_4_ = fVar27;
      auVar28 = NEON_ext(auVar2,auVar3,0xc,1);
      iVar11 = (int)uVar12;
      uVar12 = uVar12 + 1;
      pfVar4[10] = fVar20 * fVar32;
      pfVar4[8] = fVar14 * fVar32;
      pfVar4[9] = fVar16 * fVar32;
      *(ulong *)(pfVar4 + 0xd) =
           CONCAT44(((fVar26 * fStack0000000000000020 - fVar13 * auVar31._12_4_) - fVar18) - fVar27,
                    (fVar24 * fStack0000000000000020 + fVar19 * auVar31._8_4_ + fVar17) -
                    auVar28._4_4_);
      *(ulong *)(pfVar4 + 0xb) =
           CONCAT44((fVar22 * fStack0000000000000020 + fVar15 * auVar31._4_4_ + auVar29._12_4_) -
                    fVar25,(fVar21 * fStack0000000000000020 + fVar13 * auVar31._0_4_ + auVar29._4_4_
                           ) - fVar23);
      pfVar4[0xf] = (1.0 / (float)(int)uVar1) * (float)iVar11;
      pfVar4 = pfVar4 + 8;
    } while (uVar1 != uVar12);
  }
  return pfVar7;
}


