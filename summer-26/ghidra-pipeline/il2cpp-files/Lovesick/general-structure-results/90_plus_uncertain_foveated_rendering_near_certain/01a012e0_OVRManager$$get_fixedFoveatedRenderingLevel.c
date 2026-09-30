/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 01a012e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__get_fixedFoveatedRenderingLevel(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 in_w8;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  float fVar21;
  float unaff_s15;
  float fStack000000000000000c;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000078;
  
  *(undefined1 *)(unaff_x25 + 0xd76) = in_w8;
  pfVar8 = *(float **)(*unaff_x23 + 0xb8);
  fVar16 = *pfVar8;
  fVar18 = pfVar8[1];
  fStack000000000000000c = pfVar8[2];
  fVar19 = unaff_s12 * fStack000000000000000c;
  fVar21 = in_stack_00000078._4_4_ * fStack000000000000000c;
  if (*(char *)(unaff_x24 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x24 + 0x18c) = 1;
  }
  fVar19 = fVar19 - unaff_s13 * fVar18;
  fVar21 = unaff_s13 * fVar16 - fVar21;
  fVar20 = in_stack_00000078._4_4_ * fVar18 - unaff_s12 * fVar16;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar13 = SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21);
  if (fVar13 <= unaff_s15) {
    if (*(char *)(unaff_x25 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x25 + 0xd76) = 1;
    }
    pfVar8 = *(float **)(*unaff_x23 + 0xb8);
    fVar19 = *pfVar8;
    fVar21 = pfVar8[1];
    fVar20 = pfVar8[2];
  }
  else {
    fVar19 = fVar19 / fVar13;
    fVar21 = fVar21 / fVar13;
    fVar20 = fVar20 / fVar13;
  }
  puVar3 = StringLiteral_1471;
  if (unaff_w20 != 1) {
    fVar19 = -fVar19;
    fVar21 = -fVar21;
    fVar20 = -fVar20;
  }
  lVar6 = *(long *)StringLiteral_1471;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar3;
  }
  lVar9 = *(long *)(lVar6 + 0xb8);
  bVar4 = unaff_w20 != 1;
  lVar6 = 0x2c;
  if (bVar4) {
    lVar6 = 0x74;
  }
  lVar1 = 0x28;
  if (bVar4) {
    lVar1 = 0x70;
  }
  lVar2 = 0x24;
  if (bVar4) {
    lVar2 = 0x6c;
  }
  fVar13 = (float)FUN_02699088(in_stack_00000018._4_4_,fStack0000000000000020,fStack0000000000000024
                               ,in_stack_00000028,*(undefined4 *)(lVar9 + lVar2),
                               *(undefined4 *)(lVar9 + lVar1),*(undefined4 *)(lVar9 + lVar6),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar14 = fStack000000000000000c * fStack000000000000000c + fVar16 * fVar16 + fVar18 * fVar18;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar14) {
    fVar17 = fStack000000000000000c * fStack0000000000000024 +
             fVar16 * fVar13 + fVar18 * fStack0000000000000020;
    fVar13 = fVar13 - (fVar16 * fVar17) / fVar14;
    fStack0000000000000020 = fStack0000000000000020 - (fVar18 * fVar17) / fVar14;
    fStack0000000000000024 = fStack0000000000000024 - (fStack000000000000000c * fVar17) / fVar14;
  }
  if (*(char *)(unaff_x24 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x24 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar14 = SQRT(fStack0000000000000024 * fStack0000000000000024 +
                fVar13 * fVar13 + fStack0000000000000020 * fStack0000000000000020);
  if (fVar14 <= unaff_s15) {
    if (*(char *)(unaff_x25 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x25 + 0xd76) = 1;
    }
    pfVar8 = *(float **)(*unaff_x23 + 0xb8);
    fVar13 = *pfVar8;
    fStack0000000000000020 = pfVar8[1];
    fStack0000000000000024 = pfVar8[2];
  }
  else {
    fVar13 = fVar13 / fVar14;
    fStack0000000000000020 = fStack0000000000000020 / fVar14;
    fStack0000000000000024 = fStack0000000000000024 / fVar14;
  }
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar14 = SQRT((fVar20 * fVar20 + fVar21 * fVar21 + fVar19 * fVar19) *
                (fStack0000000000000024 * fStack0000000000000024 +
                fVar13 * fVar13 + fStack0000000000000020 * fStack0000000000000020));
  fVar17 = 0.0;
  if (DAT_028aa5c8 <= fVar14) {
    fVar14 = (fVar20 * fStack0000000000000024 + fVar19 * fVar13 + fVar21 * fStack0000000000000020) /
             fVar14;
    fVar17 = fVar14;
    if (1.0 < fVar14) {
      fVar17 = 1.0;
    }
    if (fVar14 < -1.0) {
      fVar17 = -1.0;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar15 = acos((double)fVar17);
    fVar17 = (float)dVar15 * DAT_028aa158;
  }
  plVar12 = *(long **)(unaff_x19 + 0x20);
  fVar14 = 1.0;
  if (fStack000000000000000c * (fVar21 * fVar13 - fVar19 * fStack0000000000000020) +
      fVar16 * (fVar20 * fStack0000000000000020 - fVar21 * fStack0000000000000024) +
      fVar18 * (fVar19 * fStack0000000000000024 - fVar20 * fVar13) < 0.0) {
    fVar14 = -1.0;
  }
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x21) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_01a016d4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x21,0);
LAB_01a016d4:
  iVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
  fVar16 = -(fVar14 * fVar17);
  if (iVar5 != 1) {
    fVar16 = fVar14 * fVar17;
  }
  if (fVar16 < -70.0) {
    fVar16 = fVar16 + 360.0;
  }
  return fVar16;
}


