/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 01a16d04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetLayerTextureStageCount(void)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar3;
  double dVar4;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  float in_stack_00000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  if (*(char *)(unaff_x23 + 0xd76) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x23 + 0xd76) = 1;
  }
  pfVar2 = *(float **)(*unaff_x22 + 0xb8);
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar3 = (float)FUN_01a16340();
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
  fStack000000000000002c = unaff_s9;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar6 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar3 < fVar6) {
    if (DAT_0377518c == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_0377518c = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (fVar6 <= DAT_028aa038) {
      if (*(char *)(unaff_x23 + 0xd76) == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        *(undefined1 *)(unaff_x23 + 0xd76) = 1;
      }
      pfVar2 = *(float **)(*unaff_x22 + 0xb8);
      fVar7 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
    }
    else {
      fVar7 = fVar7 / fVar6;
      fVar8 = fVar8 / fVar6;
      fVar9 = fVar9 / fVar6;
    }
    fVar7 = fVar3 * fVar7;
    fVar8 = fVar3 * fVar8;
    fVar9 = fVar3 * fVar9;
  }
  if (in_stack_00000028 * fVar9 + unaff_s10 * fVar7 + fStack000000000000002c * fVar8 < 0.0) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
  }
  fStack0000000000000024 = unaff_s10;
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (in_stack_00000020 + fVar7);
  fStack0000000000000010 = fStack0000000000000010 - (in_stack_00000018._4_4_ + fVar8);
  fStack0000000000000014 = fStack0000000000000014 - (unaff_s11 + fVar9);
  if (**(float **)(*unaff_x24 + 0xb8) <= unaff_s12) {
    fVar3 = in_stack_00000028 * fStack0000000000000014 +
            fStack0000000000000024 * in_stack_00000008._4_4_ +
            fStack000000000000002c * fStack0000000000000010;
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000024 * fVar3) / unaff_s12
    ;
    fStack0000000000000010 = fStack0000000000000010 - (fStack000000000000002c * fVar3) / unaff_s12;
    fStack0000000000000014 = fStack0000000000000014 - (in_stack_00000028 * fVar3) / unaff_s12;
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar9 = fStack0000000000000014 * fStack0000000000000014;
  fVar8 = SQRT(fVar9 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
                       fStack0000000000000010 * fStack0000000000000010);
  fVar3 = DAT_028aa038;
  if (fVar8 <= DAT_028aa038) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    in_stack_00000008._4_4_ = *pfVar2;
    fStack0000000000000010 = pfVar2[1];
    fStack0000000000000014 = pfVar2[2];
  }
  else {
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ / fVar8;
    fStack0000000000000010 = fStack0000000000000010 / fVar8;
    fStack0000000000000014 = fStack0000000000000014 / fVar8;
  }
  fVar8 = (float)FUN_01a15ea0();
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar6 = SQRT((fStack0000000000000014 * fStack0000000000000014 +
               in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
               fStack0000000000000010 * fStack0000000000000010) *
               (fVar3 * fVar3 + fVar8 * fVar8 + fVar9 * fVar9));
  fVar5 = 0.0;
  if (DAT_028aa5c8 <= fVar6) {
    fVar6 = (fStack0000000000000014 * fVar3 +
            in_stack_00000008._4_4_ * fVar8 + fStack0000000000000010 * fVar9) / fVar6;
    fVar5 = fVar6;
    if (1.0 < fVar6) {
      fVar5 = 1.0;
    }
    if (fVar6 < -1.0) {
      fVar5 = -1.0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar4 = acos((double)fVar5);
    fVar5 = (float)dVar4 * DAT_028aa158;
  }
  fVar6 = 1.0;
  if (in_stack_00000028 * (fStack0000000000000010 * fVar8 - in_stack_00000008._4_4_ * fVar9) +
      fStack0000000000000024 * (fStack0000000000000014 * fVar9 - fStack0000000000000010 * fVar3) +
      fStack000000000000002c * (in_stack_00000008._4_4_ * fVar3 - fStack0000000000000014 * fVar8) <
      0.0) {
    fVar6 = -1.0;
  }
  fVar9 = fVar6 * fVar5 - (float)(int)((fVar6 * fVar5) / 360.0) * 360.0;
  fVar3 = fVar9;
  if (360.0 < fVar9) {
    fVar3 = 360.0;
  }
  if (fVar9 < 0.0) {
    fVar3 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    fVar9 = *(float *)(*(long *)(unaff_x20 + 0x18) + 0x2c);
    if ((fVar9 < fVar3) &&
       (in_stack_00000008._4_4_ = fVar8, ABS(fVar3 - fVar9) < ABS(360.0 - fVar3))) {
      in_stack_00000008._4_4_ = (float)FUN_01a15f4c();
    }
    fVar3 = (float)FUN_01a16160();
    return in_stack_00000020 + fVar7 + in_stack_00000008._4_4_ * fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


