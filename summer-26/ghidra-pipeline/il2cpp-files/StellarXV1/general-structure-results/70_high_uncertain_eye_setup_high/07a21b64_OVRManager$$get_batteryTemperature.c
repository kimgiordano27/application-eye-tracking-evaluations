/*
FUNCTION_NAME: OVRManager$$get_batteryTemperature
ENTRY_POINT: 07a21b64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


float * OVRManager__get_batteryTemperature(float param_1,float param_2,float param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined *puVar5;
  undefined *puVar6;
  float *pfVar7;
  int in_w8;
  long lVar8;
  undefined1 (*pauVar9) [12];
  long unaff_x19;
  long unaff_x20;
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
  double __x;
  float fVar33;
  float fStack0000000000000020;
  double in_stack_00000048;
  
  if (0.0 <= param_1) {
    param_3 = param_2;
  }
  if (in_w8 == 0) {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x20 + 0x5ac) = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar5 = PTR_DAT_092ecf70;
  __x = (double)param_3;
  dVar1 = modf(__x,&stack0x00000048);
  if (0.0 <= param_3) {
    if (dVar1 != 0.5) {
      dVar1 = (double)(long)(__x + 0.5);
      goto LAB_07a21c10;
    }
    uVar17 = 0x3ff00000;
  }
  else {
    if (dVar1 != -0.5) {
      dVar1 = (double)(long)(__x + -0.5);
      goto LAB_07a21c10;
    }
    uVar17 = 0xbff00000;
  }
  dVar1 = in_stack_00000048;
  if (((long)in_stack_00000048 & 1U) != 0) {
    dVar1 = in_stack_00000048 + (double)((ulong)uVar17 << 0x20);
  }
LAB_07a21c10:
  uVar17 = 0x80000000;
  if (dVar1 != INFINITY) {
    uVar17 = (int)dVar1;
  }
  pfVar7 = (float *)FUN_04077674(*(undefined8 *)puVar5,(ulong)uVar17);
  puVar6 = PTR_DAT_092eff38;
  puVar5 = PTR_DAT_09285d60;
  if (0 < (int)uVar17) {
    iVar10 = 0;
    uVar12 = 0;
    pfVar4 = pfVar7;
    do {
      if (DAT_098854eb == '\0') {
        FUN_04077588(puVar5);
        DAT_098854eb = '\x01';
      }
      lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
      fVar15 = *(float *)(lVar8 + 0x18);
      fVar20 = *(float *)(lVar8 + 0x1c);
      auVar29 = ZEXT416(*(uint *)(lVar8 + 0x20));
      fVar13 = (float)FUN_089b9364((float)iVar10 - unaff_s8,0);
      if (DAT_098854ec == '\0') {
        FUN_04077588(puVar5);
        DAT_098854ec = '\x01';
      }
      fVar16 = fVar15;
      fVar21 = fVar20;
      fVar14 = (float)FUN_089b9694(fVar13,0);
      lVar8 = *(long *)puVar6;
      fVar33 = *(float *)(unaff_x19 + 0x60);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *(long *)puVar6;
      }
      if (pfVar7 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if ((uint)pfVar7[6] <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
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
      fVar18 = fVar13 * fVar23;
      fVar19 = fVar15 * fVar23;
      fStack0000000000000020 = auVar29._0_4_;
      fVar24 = fVar20 * fVar23;
      fVar26 = fVar13 * fVar25;
      fVar28 = fVar20 * fVar25;
      auVar29._4_4_ = fVar18;
      auVar29._0_4_ = fVar20 * fVar22;
      auVar29._8_4_ = fVar15 * fVar25;
      auVar29._12_4_ = fVar19;
      auVar30._4_4_ = fVar18;
      auVar30._0_4_ = fVar20 * fVar22;
      auVar30._8_4_ = fVar15 * fVar25;
      auVar30._12_4_ = fVar19;
      auVar30 = NEON_ext(auVar29,auVar30,4,1);
      auVar2._4_4_ = fVar24;
      auVar2._0_4_ = fVar15 * fVar22;
      auVar2._8_4_ = fVar26;
      auVar2._12_4_ = fVar28;
      auVar3._4_4_ = fVar24;
      auVar3._0_4_ = fVar15 * fVar22;
      auVar3._8_4_ = fVar26;
      auVar3._12_4_ = fVar28;
      auVar29 = NEON_ext(auVar2,auVar3,0xc,1);
      iVar11 = (int)uVar12;
      uVar12 = uVar12 + 1;
      pfVar4[10] = fVar21 * fVar33;
      pfVar4[8] = fVar14 * fVar33;
      pfVar4[9] = fVar16 * fVar33;
      *(ulong *)(pfVar4 + 0xd) =
           CONCAT44(((fVar27 * fStack0000000000000020 - fVar13 * auVar32._12_4_) - fVar19) - fVar28,
                    (fVar25 * fStack0000000000000020 + fVar20 * auVar32._8_4_ + fVar18) -
                    auVar29._4_4_);
      *(ulong *)(pfVar4 + 0xb) =
           CONCAT44((fVar23 * fStack0000000000000020 + fVar15 * auVar32._4_4_ + auVar30._12_4_) -
                    fVar26,(fVar22 * fStack0000000000000020 + fVar13 * auVar32._0_4_ + auVar30._4_4_
                           ) - fVar24);
      pfVar4[0xf] = (1.0 / (float)(int)uVar17) * (float)iVar11;
      pfVar4 = pfVar4 + 8;
    } while (uVar17 != uVar12);
  }
  return pfVar7;
}


