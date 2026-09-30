/*
FUNCTION_NAME: OVRManager$$set_useDynamicFoveatedRendering
ENTRY_POINT: 01a01424
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__set_useDynamicFoveatedRendering(void)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar8 = (float)FUN_02699088(0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar9 = fStack000000000000000c * fStack000000000000000c +
          fStack000000000000007c * fStack000000000000007c + unaff_s14 * unaff_s14;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar9) {
    fVar11 = fStack000000000000000c * unaff_s11 +
             fStack000000000000007c * fVar8 + unaff_s14 * unaff_s8;
    fVar8 = fVar8 - (fStack000000000000007c * fVar11) / fVar9;
    unaff_s8 = unaff_s8 - (unaff_s14 * fVar11) / fVar9;
    unaff_s11 = unaff_s11 - (fStack000000000000000c * fVar11) / fVar9;
  }
  if (*(char *)(unaff_x24 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x24 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar9 = SQRT(unaff_s11 * unaff_s11 + fVar8 * fVar8 + unaff_s8 * unaff_s8);
  if (fVar9 <= fStack0000000000000008) {
    if (*(char *)(unaff_x25 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x25 + 0xd76) = 1;
    }
    pfVar3 = *(float **)(*unaff_x23 + 0xb8);
    fVar8 = *pfVar3;
    unaff_s8 = pfVar3[1];
    unaff_s11 = pfVar3[2];
  }
  else {
    fVar8 = fVar8 / fVar9;
    unaff_s8 = unaff_s8 / fVar9;
    unaff_s11 = unaff_s11 / fVar9;
  }
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar9 = SQRT((unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12 + unaff_s15 * unaff_s15) *
               (unaff_s11 * unaff_s11 + fVar8 * fVar8 + unaff_s8 * unaff_s8));
  fVar11 = 0.0;
  if (DAT_028aa5c8 <= fVar9) {
    fVar9 = (unaff_s13 * unaff_s11 + unaff_s15 * fVar8 + unaff_s12 * unaff_s8) / fVar9;
    fVar11 = fVar9;
    if (1.0 < fVar9) {
      fVar11 = 1.0;
    }
    if (fVar9 < -1.0) {
      fVar11 = -1.0;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar10 = acos((double)fVar11);
    fVar11 = (float)dVar10 * DAT_028aa158;
  }
  plVar7 = *(long **)(unaff_x19 + 0x20);
  fVar9 = 1.0;
  if (fStack000000000000000c * (unaff_s12 * fVar8 - unaff_s15 * unaff_s8) +
      fStack000000000000007c * (unaff_s13 * unaff_s8 - unaff_s12 * unaff_s11) +
      fStack0000000000000078 * (unaff_s15 * unaff_s11 - unaff_s13 * fVar8) < 0.0) {
    fVar9 = -1.0;
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01a016d4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x21,0);
LAB_01a016d4:
  iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  fVar8 = -(fVar9 * fVar11);
  if (iVar1 != 1) {
    fVar8 = fVar9 * fVar11;
  }
  if (fVar8 < -70.0) {
    fVar8 = fVar8 + 360.0;
  }
  return fVar8;
}


