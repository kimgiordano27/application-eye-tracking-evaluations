/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 01a16e00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetLayerAndroidSurfaceObject(void)

{
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  float in_stack_00000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (unaff_s9 <= *(float *)(unaff_x25 + 0x38)) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar2 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar7 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s13 / unaff_s9;
    fVar4 = unaff_s14 / unaff_s9;
    fVar7 = unaff_s15 / unaff_s9;
  }
  fVar2 = unaff_s8 * fVar2;
  fVar4 = unaff_s8 * fVar4;
  fVar7 = unaff_s8 * fVar7;
  if (fStack0000000000000028 * fVar7 + unaff_s10 * fVar2 + fStack000000000000002c * fVar4 < 0.0) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar2 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar7 = pfVar1[2];
  }
  fStack0000000000000024 = unaff_s10;
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (in_stack_00000020 + fVar2);
  fStack0000000000000010 = fStack0000000000000010 - (in_stack_00000018._4_4_ + fVar4);
  fStack0000000000000014 = fStack0000000000000014 - (unaff_s11 + fVar7);
  if (**(float **)(*unaff_x24 + 0xb8) <= unaff_s12) {
    fVar4 = fStack0000000000000028 * fStack0000000000000014 +
            fStack0000000000000024 * in_stack_00000008._4_4_ +
            fStack000000000000002c * fStack0000000000000010;
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000024 * fVar4) / unaff_s12
    ;
    fStack0000000000000010 = fStack0000000000000010 - (fStack000000000000002c * fVar4) / unaff_s12;
    fStack0000000000000014 = fStack0000000000000014 - (fStack0000000000000028 * fVar4) / unaff_s12;
  }
  if (*(char *)(unaff_x26 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x26 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar8 = *(float *)(unaff_x25 + 0x38);
  fVar7 = fStack0000000000000014 * fStack0000000000000014;
  fVar4 = SQRT(fVar7 + in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
                       fStack0000000000000010 * fStack0000000000000010);
  if (fVar4 <= fVar8) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    in_stack_00000008._4_4_ = *pfVar1;
    fStack0000000000000010 = pfVar1[1];
    fStack0000000000000014 = pfVar1[2];
  }
  else {
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ / fVar4;
    fStack0000000000000010 = fStack0000000000000010 / fVar4;
    fStack0000000000000014 = fStack0000000000000014 / fVar4;
  }
  fVar4 = (float)FUN_01a15ea0();
  if (DAT_03775508 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775508 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT((fStack0000000000000014 * fStack0000000000000014 +
               in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
               fStack0000000000000010 * fStack0000000000000010) *
               (fVar8 * fVar8 + fVar4 * fVar4 + fVar7 * fVar7));
  fVar6 = 0.0;
  if (DAT_028aa5c8 <= fVar5) {
    fVar5 = (fStack0000000000000014 * fVar8 +
            in_stack_00000008._4_4_ * fVar4 + fStack0000000000000010 * fVar7) / fVar5;
    fVar6 = fVar5;
    if (1.0 < fVar5) {
      fVar6 = 1.0;
    }
    if (fVar5 < -1.0) {
      fVar6 = -1.0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar3 = acos((double)fVar6);
    fVar6 = (float)dVar3 * DAT_028aa158;
  }
  fVar5 = 1.0;
  if (fStack0000000000000028 * (fStack0000000000000010 * fVar4 - in_stack_00000008._4_4_ * fVar7) +
      fStack0000000000000024 * (fStack0000000000000014 * fVar7 - fStack0000000000000010 * fVar8) +
      fStack000000000000002c * (in_stack_00000008._4_4_ * fVar8 - fStack0000000000000014 * fVar4) <
      0.0) {
    fVar5 = -1.0;
  }
  fVar8 = fVar5 * fVar6 - (float)(int)((fVar5 * fVar6) / 360.0) * 360.0;
  fVar7 = fVar8;
  if (360.0 < fVar8) {
    fVar7 = 360.0;
  }
  if (fVar8 < 0.0) {
    fVar7 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    fVar8 = *(float *)(*(long *)(unaff_x20 + 0x18) + 0x2c);
    if ((fVar8 < fVar7) &&
       (in_stack_00000008._4_4_ = fVar4, ABS(fVar7 - fVar8) < ABS(360.0 - fVar7))) {
      in_stack_00000008._4_4_ = (float)FUN_01a15f4c();
    }
    fVar4 = (float)FUN_01a16160();
    return in_stack_00000020 + fVar2 + in_stack_00000008._4_4_ * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


