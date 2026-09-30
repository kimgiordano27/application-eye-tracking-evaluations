/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 01a01520
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__set_useDynamicFixedFoveatedRendering(float param_1,float param_2)

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
  long unaff_x25;
  double dVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if (param_1 <= param_2) {
    if (*(char *)(unaff_x25 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x25 + 0xd76) = 1;
    }
    pfVar3 = *(float **)(*unaff_x23 + 0xb8);
    fVar11 = *pfVar3;
    fVar12 = pfVar3[1];
    param_1 = pfVar3[2];
  }
  else {
    fVar11 = unaff_s8 / param_1;
    fVar12 = unaff_s9 / param_1;
    param_1 = unaff_s10 / param_1;
  }
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar9 = SQRT((unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12 + unaff_s15 * unaff_s15) *
               (param_1 * param_1 + fVar11 * fVar11 + fVar12 * fVar12));
  fVar10 = 0.0;
  if (DAT_028aa5c8 <= fVar9) {
    fVar9 = (unaff_s13 * param_1 + unaff_s15 * fVar11 + unaff_s12 * fVar12) / fVar9;
    fVar10 = fVar9;
    if (1.0 < fVar9) {
      fVar10 = 1.0;
    }
    if (fVar9 < -1.0) {
      fVar10 = -1.0;
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar8 = acos((double)fVar10);
    fVar10 = (float)dVar8 * DAT_028aa158;
  }
  plVar7 = *(long **)(unaff_x19 + 0x20);
  fVar9 = 1.0;
  if (in_stack_00000008._4_4_ * (unaff_s12 * fVar11 - unaff_s15 * fVar12) +
      fStack000000000000007c * (unaff_s13 * fVar12 - unaff_s12 * param_1) +
      fStack0000000000000078 * (unaff_s15 * param_1 - unaff_s13 * fVar11) < 0.0) {
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
  fVar11 = -(fVar9 * fVar10);
  if (iVar1 != 1) {
    fVar11 = fVar9 * fVar10;
  }
  if (fVar11 < -70.0) {
    fVar11 = fVar11 + 360.0;
  }
  return fVar11;
}


