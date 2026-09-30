/*
FUNCTION_NAME: OVRManager$$GetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 01a013d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 126
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__GetDynamicFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    param_1 = *unaff_x26;
  }
  lVar6 = *(long *)(param_1 + 0xb8);
  bVar3 = unaff_w20 != 1;
  lVar8 = 0x2c;
  if (bVar3) {
    lVar8 = 0x74;
  }
  lVar1 = 0x28;
  if (bVar3) {
    lVar1 = 0x70;
  }
  lVar2 = 0x24;
  if (bVar3) {
    lVar2 = 0x6c;
  }
  fVar12 = (float)FUN_02699088(in_stack_00000018._4_4_,fStack0000000000000020,fStack0000000000000024
                               ,in_stack_00000028,*(undefined4 *)(lVar6 + lVar2),
                               *(undefined4 *)(lVar6 + lVar1),*(undefined4 *)(lVar6 + lVar8),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar13 = fStack000000000000000c * fStack000000000000000c +
           fStack000000000000007c * fStack000000000000007c + unaff_s14 * unaff_s14;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar13) {
    fVar15 = fStack000000000000000c * fStack0000000000000024 +
             fStack000000000000007c * fVar12 + unaff_s14 * fStack0000000000000020;
    fVar12 = fVar12 - (fStack000000000000007c * fVar15) / fVar13;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s14 * fVar15) / fVar13;
    fStack0000000000000024 = fStack0000000000000024 - (fStack000000000000000c * fVar15) / fVar13;
  }
  if (*(char *)(unaff_x24 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x24 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar13 = SQRT(fStack0000000000000024 * fStack0000000000000024 +
                fVar12 * fVar12 + fStack0000000000000020 * fStack0000000000000020);
  if (fVar13 <= fStack0000000000000008) {
    if (*(char *)(unaff_x25 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x25 + 0xd76) = 1;
    }
    pfVar7 = *(float **)(*unaff_x23 + 0xb8);
    fVar12 = *pfVar7;
    fStack0000000000000020 = pfVar7[1];
    fStack0000000000000024 = pfVar7[2];
  }
  else {
    fVar12 = fVar12 / fVar13;
    fStack0000000000000020 = fStack0000000000000020 / fVar13;
    fStack0000000000000024 = fStack0000000000000024 / fVar13;
  }
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar13 = SQRT((unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12 + unaff_s15 * unaff_s15) *
                (fStack0000000000000024 * fStack0000000000000024 +
                fVar12 * fVar12 + fStack0000000000000020 * fStack0000000000000020));
  fVar15 = 0.0;
  if (DAT_028aa5c8 <= fVar13) {
    fVar13 = (unaff_s13 * fStack0000000000000024 +
             unaff_s15 * fVar12 + unaff_s12 * fStack0000000000000020) / fVar13;
    fVar15 = fVar13;
    if (1.0 < fVar13) {
      fVar15 = 1.0;
    }
    if (fVar13 < -1.0) {
      fVar15 = -1.0;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar14 = acos((double)fVar15);
    fVar15 = (float)dVar14 * DAT_028aa158;
  }
  plVar11 = *(long **)(unaff_x19 + 0x20);
  fVar13 = 1.0;
  if (fStack000000000000000c * (unaff_s12 * fVar12 - unaff_s15 * fStack0000000000000020) +
      fStack000000000000007c *
      (unaff_s13 * fStack0000000000000020 - unaff_s12 * fStack0000000000000024) +
      fStack0000000000000078 * (unaff_s15 * fStack0000000000000024 - unaff_s13 * fVar12) < 0.0) {
    fVar13 = -1.0;
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x21) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_01a016d4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x21,0);
LAB_01a016d4:
  iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
  fVar12 = -(fVar13 * fVar15);
  if (iVar4 != 1) {
    fVar12 = fVar13 * fVar15;
  }
  if (fVar12 < -70.0) {
    fVar12 = fVar12 + 360.0;
  }
  return fVar12;
}


