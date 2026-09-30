/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 01a18fdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetControllerHapticsAmplitudeEnvelope
                (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  int in_w8;
  float *pfVar2;
  long lVar3;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x23 + 0xd76) = 1;
  }
  pfVar2 = *(float **)(*unaff_x22 + 0xb8);
  fVar11 = *pfVar2;
  fVar9 = pfVar2[1];
  fVar13 = pfVar2[2];
  FUN_01a180bc();
  fStack0000000000000014 = fVar11;
  fVar4 = (float)FUN_026987a4(0);
  fVar8 = (unaff_s9 * param_3 + fStack000000000000000c * fVar11 + unaff_s11 * param_2) -
          in_stack_00000010 * fVar4;
  fVar10 = (in_stack_00000010 * param_2 + unaff_s9 * fVar11 + unaff_s11 * fVar4) -
           fStack000000000000000c * param_3;
  fVar6 = (fStack000000000000000c * fVar4 + in_stack_00000010 * fVar11 + unaff_s11 * param_3) -
          unaff_s9 * param_2;
  fVar4 = ((unaff_s11 * fVar11 - unaff_s9 * fVar4) - fStack000000000000000c * param_2) -
          in_stack_00000010 * param_3;
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  lVar3 = *(long *)(*unaff_x22 + 0xb8);
  fVar11 = fVar8;
  fVar12 = fVar6;
  fStack0000000000000008 =
       (float)FUN_02699088(fVar10,fVar8,fVar6,fVar4,*(undefined4 *)(lVar3 + 0x48),
                           *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  puVar1 = System_Func<Assembly[]>_TypeInfo;
  fVar7 = fVar13 * fVar13 + fStack0000000000000014 * fStack0000000000000014 + fVar9 * fVar9;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar7) {
    fVar5 = fVar13 * fVar12 + fStack0000000000000014 * fStack0000000000000008 + fVar9 * fVar11;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar5) / fVar7;
    fVar11 = fVar11 - (fVar9 * fVar5) / fVar7;
    fVar12 = fVar12 - (fVar13 * fVar5) / fVar7;
  }
  if (*(char *)(unaff_x21 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT(fVar12 * fVar12 + fStack0000000000000008 * fStack0000000000000008 + fVar11 * fVar11);
  if (fVar5 <= in_stack_00000018._4_4_) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar2;
    fStack0000000000000004 = pfVar2[1];
    fVar12 = pfVar2[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar5;
    fStack0000000000000004 = fVar11 / fVar5;
    fVar12 = fVar12 / fVar5;
  }
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  lVar3 = *(long *)(*unaff_x22 + 0xb8);
  fVar11 = (float)FUN_02699088(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                               uStack00000000000000ac,*(undefined4 *)(lVar3 + 0x48),
                               *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar7) {
    fVar5 = fVar13 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar11 + fVar9 * fStack00000000000000a4;
    fVar11 = fVar11 - (fStack0000000000000014 * fVar5) / fVar7;
    fStack00000000000000a4 = fStack00000000000000a4 - (fVar9 * fVar5) / fVar7;
    fStack00000000000000a8 = fStack00000000000000a8 - (fVar13 * fVar5) / fVar7;
  }
  if (*(char *)(unaff_x21 + 0x18c) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x18c) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar9 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar11 * fVar11 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar9 <= in_stack_00000018._4_4_) {
    if (*(char *)(unaff_x23 + 0xd76) == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      *(undefined1 *)(unaff_x23 + 0xd76) = 1;
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar11 = *pfVar2;
    fStack00000000000000a4 = pfVar2[1];
    fStack00000000000000a8 = pfVar2[2];
  }
  else {
    fVar11 = fVar11 / fVar9;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar9;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar9;
  }
  fVar9 = (float)FUN_026987a4(fStack0000000000000008,fStack0000000000000004,fVar12,fVar11,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar6 * fStack0000000000000004 + fVar10 * fVar11 + fVar4 * fVar9) - fVar8 * fVar12;
}


