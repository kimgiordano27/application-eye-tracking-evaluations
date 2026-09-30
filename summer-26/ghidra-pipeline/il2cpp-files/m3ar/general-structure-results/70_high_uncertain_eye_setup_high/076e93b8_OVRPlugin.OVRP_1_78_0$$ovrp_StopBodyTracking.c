/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopBodyTracking
ENTRY_POINT: 076e93b8
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


float * OVRPlugin_OVRP_1_78_0__ovrp_StopBodyTracking(void)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined *puVar5;
  undefined *puVar6;
  float *pfVar7;
  long lVar8;
  undefined1 (*pauVar9) [12];
  long unaff_x19;
  int iVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
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
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float unaff_s8;
  float unaff_s9;
  double __x;
  float fVar33;
  float fStack0000000000000020;
  double in_stack_00000048;
  
                    /* try { // try from 076e93d8 to 077e944b has its CatchHandler @ 076e93d8
                       catch() { ... } // from try @ 076e93d8 with catch @ 076e93d8
                       catch() { ... } // from try @ 076e94a0 with catch @ 076e93d8
                       catch() { ... } // from try @ 076e9588 with catch @ 076e93d8
                       catch() { ... } // from try @ 076e95e8 with catch @ 076e93d8
                       catch() { ... } // from try @ 076e9608 with catch @ 076e93d8 */
  fVar13 = (unaff_s9 - unaff_s8) - (float)(int)((unaff_s9 - unaff_s8) / 360.0) * 360.0;
  fVar14 = 360.0;
  if (fVar13 <= 360.0) {
    fVar14 = fVar13;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar13) {
    fVar20 = fVar14;
  }
  if (DAT_09539d22 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539d22 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  puVar5 = PTR_DAT_08fac2b8;
  __x = (double)fVar20;
  dVar1 = modf(__x,&stack0x00000048);
  if (0.0 <= fVar20) {
    if (dVar1 != 0.5) {
      dVar1 = (double)(long)(__x + 0.5);
      goto LAB_076e9494;
    }
    uVar17 = 0x3ff00000;
  }
  else {
    if (dVar1 != -0.5) {
      dVar1 = (double)(long)(__x + -0.5);
      goto LAB_076e9494;
    }
    uVar17 = 0xbff00000;
  }
  dVar1 = in_stack_00000048;
  if (((long)in_stack_00000048 & 1U) != 0) {
    dVar1 = in_stack_00000048 + (double)((ulong)uVar17 << 0x20);
  }
LAB_076e9494:
  uVar17 = 0x80000000;
  if (dVar1 != INFINITY) {
    uVar17 = (int)dVar1;
  }
  pfVar7 = (float *)FUN_040316d0(*(undefined8 *)puVar5,(ulong)uVar17);
  puVar6 = PTR_DAT_08fae550;
  puVar5 = PTR_DAT_08f65568;
  if (0 < (int)uVar17) {
    iVar10 = 0;
    uVar12 = 0;
    pfVar4 = pfVar7;
    do {
      if (DAT_09539e16 == '\0') {
        FUN_0403162c(puVar5);
        DAT_09539e16 = '\x01';
      }
      lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
      fVar13 = *(float *)(lVar8 + 0x18);
      fVar20 = *(float *)(lVar8 + 0x1c);
      auVar29 = ZEXT416(*(uint *)(lVar8 + 0x20));
      fVar14 = (float)FUN_08575c64((float)iVar10 - unaff_s8,0);
      if (DAT_09539c08 == '\0') {
        FUN_0403162c(puVar5);
        DAT_09539c08 = '\x01';
      }
      fVar16 = fVar13;
      fVar21 = fVar20;
      fVar15 = (float)FUN_08575f94(fVar14,0);
      lVar8 = *(long *)puVar6;
      fVar33 = *(float *)(unaff_x19 + 0x94);
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
      fVar25 = (float)*(undefined8 *)(*pauVar9 + 8);
      fVar27 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
      fVar22 = (float)*(undefined8 *)*pauVar9;
      fVar23 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
      auVar31._4_4_ = fVar27;
      auVar31._0_4_ = fVar27;
      auVar31._8_4_ = fVar27;
      auVar31._12_4_ = fVar27;
      auVar32._12_4_ = fVar27;
      auVar32._0_12_ = *pauVar9;
      auVar32 = NEON_ext(auVar31,auVar32,4,1);
      fVar18 = fVar14 * fVar23;
      fVar19 = fVar13 * fVar23;
      fStack0000000000000020 = auVar29._0_4_;
      fVar24 = fVar20 * fVar23;
      fVar26 = fVar14 * fVar25;
      fVar28 = fVar20 * fVar25;
      auVar29._4_4_ = fVar18;
      auVar29._0_4_ = fVar20 * fVar22;
      auVar29._8_4_ = fVar13 * fVar25;
      auVar29._12_4_ = fVar19;
      auVar30._4_4_ = fVar18;
      auVar30._0_4_ = fVar20 * fVar22;
      auVar30._8_4_ = fVar13 * fVar25;
      auVar30._12_4_ = fVar19;
      auVar30 = NEON_ext(auVar29,auVar30,4,1);
      auVar2._4_4_ = fVar24;
      auVar2._0_4_ = fVar13 * fVar22;
      auVar2._8_4_ = fVar26;
      auVar2._12_4_ = fVar28;
      auVar3._4_4_ = fVar24;
      auVar3._0_4_ = fVar13 * fVar22;
      auVar3._8_4_ = fVar26;
      auVar3._12_4_ = fVar28;
      auVar29 = NEON_ext(auVar2,auVar3,0xc,1);
      iVar11 = (int)uVar12;
      uVar12 = uVar12 + 1;
      pfVar4[10] = fVar21 * fVar33;
      pfVar4[8] = fVar15 * fVar33;
      pfVar4[9] = fVar16 * fVar33;
      *(ulong *)(pfVar4 + 0xd) =
           CONCAT44(((fVar27 * fStack0000000000000020 - fVar14 * auVar32._12_4_) - fVar19) - fVar28,
                    (fVar25 * fStack0000000000000020 + fVar20 * auVar32._8_4_ + fVar18) -
                    auVar29._4_4_);
      *(ulong *)(pfVar4 + 0xb) =
           CONCAT44((fVar23 * fStack0000000000000020 + fVar13 * auVar32._4_4_ + auVar30._12_4_) -
                    fVar26,(fVar22 * fStack0000000000000020 + fVar14 * auVar32._0_4_ + auVar30._4_4_
                           ) - fVar24);
      pfVar4[0xf] = (1.0 / (float)(int)uVar17) * (float)iVar11;
      pfVar4 = pfVar4 + 8;
    } while (uVar17 != uVar12);
  }
  return pfVar7;
}


