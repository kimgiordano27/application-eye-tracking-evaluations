/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 01a01244
PROGRAM: Lovesick-libil2cpp.so
SCORE: 126
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_12;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__get_fixedFoveatedRenderingSupported(float param_1,float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  int in_w8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar21;
  float unaff_s14;
  float unaff_s15;
  float fStack000000000000000c;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000078;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x24 + 0x18c) = 1;
  }
  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
  param_1 = unaff_s14 - param_1;
  param_2 = unaff_s11 - param_2;
  param_3 = unaff_s15 - param_3;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar18 = DAT_028aa038;
  fStack000000000000000c = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fStack000000000000000c <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar10 = *(float **)(*unaff_x23 + 0xb8);
    param_1 = *pfVar10;
    param_2 = pfVar10[1];
    fStack000000000000000c = pfVar10[2];
  }
  else {
    param_1 = param_1 / fStack000000000000000c;
    param_2 = param_2 / fStack000000000000000c;
    fStack000000000000000c = param_3 / fStack000000000000000c;
  }
  fVar19 = unaff_s12 * fStack000000000000000c;
  fVar21 = in_stack_00000078._4_4_ * fStack000000000000000c;
  if (*(char *)(unaff_x24 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x24 + 0x18c) = 1;
  }
  fVar19 = fVar19 - unaff_s13 * param_2;
  fVar21 = unaff_s13 * param_1 - fVar21;
  fVar20 = in_stack_00000078._4_4_ * param_2 - unaff_s12 * param_1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar14 = SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21);
  if (fVar14 <= fVar18) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar10 = *(float **)(*unaff_x23 + 0xb8);
    fVar19 = *pfVar10;
    fVar21 = pfVar10[1];
    fVar20 = pfVar10[2];
  }
  else {
    fVar19 = fVar19 / fVar14;
    fVar21 = fVar21 / fVar14;
    fVar20 = fVar20 / fVar14;
  }
  puVar4 = StringLiteral_1471;
  if (unaff_w20 != 1) {
    fVar19 = -fVar19;
    fVar21 = -fVar21;
    fVar20 = -fVar20;
  }
  lVar7 = *(long *)StringLiteral_1471;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar4;
  }
  lVar9 = *(long *)(lVar7 + 0xb8);
  bVar5 = unaff_w20 != 1;
  lVar7 = 0x2c;
  if (bVar5) {
    lVar7 = 0x74;
  }
  lVar1 = 0x28;
  if (bVar5) {
    lVar1 = 0x70;
  }
  lVar2 = 0x24;
  if (bVar5) {
    lVar2 = 0x6c;
  }
  fVar14 = (float)FUN_02699088(in_stack_00000018._4_4_,fStack0000000000000020,fStack0000000000000024
                               ,in_stack_00000028,*(undefined4 *)(lVar9 + lVar2),
                               *(undefined4 *)(lVar9 + lVar1),*(undefined4 *)(lVar9 + lVar7),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar15 = fStack000000000000000c * fStack000000000000000c + param_1 * param_1 + param_2 * param_2;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar15) {
    fVar17 = fStack000000000000000c * fStack0000000000000024 +
             param_1 * fVar14 + param_2 * fStack0000000000000020;
    fVar14 = fVar14 - (param_1 * fVar17) / fVar15;
    fStack0000000000000020 = fStack0000000000000020 - (param_2 * fVar17) / fVar15;
    fStack0000000000000024 = fStack0000000000000024 - (fStack000000000000000c * fVar17) / fVar15;
  }
  if (*(char *)(unaff_x24 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x24 + 0x18c) = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar15 = SQRT(fStack0000000000000024 * fStack0000000000000024 +
                fVar14 * fVar14 + fStack0000000000000020 * fStack0000000000000020);
  if (fVar15 <= fVar18) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar10 = *(float **)(*unaff_x23 + 0xb8);
    fVar14 = *pfVar10;
    fStack0000000000000020 = pfVar10[1];
    fStack0000000000000024 = pfVar10[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fStack0000000000000020 = fStack0000000000000020 / fVar15;
    fStack0000000000000024 = fStack0000000000000024 / fVar15;
  }
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar18 = SQRT((fVar20 * fVar20 + fVar21 * fVar21 + fVar19 * fVar19) *
                (fStack0000000000000024 * fStack0000000000000024 +
                fVar14 * fVar14 + fStack0000000000000020 * fStack0000000000000020));
  fVar15 = 0.0;
  if (DAT_028aa5c8 <= fVar18) {
    fVar18 = (fVar20 * fStack0000000000000024 + fVar19 * fVar14 + fVar21 * fStack0000000000000020) /
             fVar18;
    fVar15 = fVar18;
    if (1.0 < fVar18) {
      fVar15 = 1.0;
    }
    if (fVar18 < -1.0) {
      fVar15 = -1.0;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar16 = acos((double)fVar15);
    fVar15 = (float)dVar16 * DAT_028aa158;
  }
  plVar13 = *(long **)(unaff_x19 + 0x20);
  fVar18 = 1.0;
  if (fStack000000000000000c * (fVar21 * fVar14 - fVar19 * fStack0000000000000020) +
      param_1 * (fVar20 * fStack0000000000000020 - fVar21 * fStack0000000000000024) +
      param_2 * (fVar19 * fStack0000000000000024 - fVar20 * fVar14) < 0.0) {
    fVar18 = -1.0;
  }
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar7 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x21) {
        puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_01a016d4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_00d59724(plVar13,*unaff_x21,0);
LAB_01a016d4:
  iVar6 = (*(code *)*puVar8)(plVar13,puVar8[1]);
  fVar19 = -(fVar18 * fVar15);
  if (iVar6 != 1) {
    fVar19 = fVar18 * fVar15;
  }
  if (fVar19 < -70.0) {
    fVar19 = fVar19 + 360.0;
  }
  return fVar19;
}


