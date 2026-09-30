/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 01a17768
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodeOrientationValid(float param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  
  fStack0000000000000024 = *(float *)(unaff_x22 + 4);
  fVar16 = *(float *)(unaff_x22 + 0x18);
  fStack0000000000000020 = *(float *)(unaff_x22 + 8);
  fVar13 = *(float *)(unaff_x22 + 0xc);
  fVar14 = *(float *)(unaff_x22 + 0x10);
  fVar15 = *(float *)(unaff_x22 + 0x14);
  uStack0000000000000028 = param_2;
  fStack000000000000002c = param_1;
  fStack0000000000000030 = unaff_s15;
  fStack0000000000000034 = unaff_s14;
  fStack0000000000000038 = unaff_s13;
  fStack000000000000003c = unaff_s12;
  fVar4 = (float)FUN_02698858(0);
  fVar12 = (fVar15 * fVar4 + fVar16 * unaff_s12 + fVar14 * unaff_s14) - fVar13 * unaff_s13;
  fVar11 = (fVar14 * unaff_s13 + fVar16 * fVar4 + fVar13 * unaff_s14) - fVar15 * unaff_s12;
  fVar5 = (fVar13 * unaff_s12 + fVar16 * unaff_s13 + fVar15 * unaff_s14) - fVar14 * fVar4;
  fVar4 = ((fVar16 * unaff_s14 - fVar13 * fVar4) - fVar14 * unaff_s12) - fVar15 * unaff_s13;
  fVar13 = (fStack000000000000000c * fVar5 +
           fStack0000000000000010 * fVar4 + in_stack_00000000._4_4_ * fVar12) -
           fStack0000000000000008 * fVar11;
  fVar14 = (fStack0000000000000010 * fVar11 +
           fStack0000000000000008 * fVar4 + in_stack_00000000._4_4_ * fVar5) -
           fStack000000000000000c * fVar12;
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar2 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  fVar4 = (float)FUN_02699088((fStack0000000000000008 * fVar12 +
                              fStack000000000000000c * fVar4 + in_stack_00000000._4_4_ * fVar11) -
                              fStack0000000000000010 * fVar5,fVar13,fVar14,
                              ((in_stack_00000000._4_4_ * fVar4 - fStack000000000000000c * fVar11) -
                              fStack0000000000000010 * fVar12) - fStack0000000000000008 * fVar5,
                              *(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
                              *(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar5 = fStack000000000000001c * fStack000000000000001c +
          fStack0000000000000014 * fStack0000000000000014 +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar5) {
    fVar11 = fStack000000000000001c * fVar14 +
             fStack0000000000000014 * fVar4 + fStack0000000000000018 * fVar13;
    fVar4 = fVar4 - (fStack0000000000000014 * fVar11) / fVar5;
    fVar13 = fVar13 - (fStack0000000000000018 * fVar11) / fVar5;
    fVar14 = fVar14 - (fStack000000000000001c * fVar11) / fVar5;
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT(fVar14 * fVar14 + fVar4 * fVar4 + fVar13 * fVar13);
  if (fVar5 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar4 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar14 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fVar13 = fVar13 / fVar5;
    fVar14 = fVar14 / fVar5;
  }
  fVar5 = fStack0000000000000024;
  fVar11 = fStack0000000000000020;
  fVar12 = (float)FUN_01a16800(uStack0000000000000028,fStack0000000000000024,fStack0000000000000020)
  ;
  fVar4 = fStack000000000000002c * fVar4;
  uVar7 = (ulong)(uint)(fStack000000000000002c * fVar13 + fVar5);
  uVar9 = (ulong)(uint)(fStack000000000000002c * fVar14 + fVar11);
  uVar6 = FUN_01a16c3c(fVar4 + fVar12,uVar7,uVar9);
  uVar8 = uVar7;
  uVar10 = uVar9;
  fVar5 = (float)FUN_01a17b3c();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  fVar13 = (float)uVar8;
  fVar14 = (float)uVar10;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_02666aac(uVar6,uVar7,uVar9,
               (fStack0000000000000038 * fVar13 +
               fStack0000000000000030 * fVar4 + fStack0000000000000034 * fVar5) -
               fStack000000000000003c * fVar14,
               (fStack0000000000000030 * fVar14 +
               fStack000000000000003c * fVar4 + fStack0000000000000034 * fVar13) -
               fStack0000000000000038 * fVar5,
               (fStack000000000000003c * fVar5 +
               fStack0000000000000038 * fVar4 + fStack0000000000000034 * fVar14) -
               fStack0000000000000030 * fVar13,
               ((fStack0000000000000034 * fVar4 - fStack0000000000000030 * fVar5) -
               fStack000000000000003c * fVar13) - fStack0000000000000038 * fVar14);
  return;
}


