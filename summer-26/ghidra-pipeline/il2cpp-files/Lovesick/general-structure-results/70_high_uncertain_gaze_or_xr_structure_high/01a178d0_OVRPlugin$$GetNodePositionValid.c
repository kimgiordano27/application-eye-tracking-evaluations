/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 01a178d0
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


void OVRPlugin__GetNodePositionValid(undefined1 param_1 [16],float param_2)

{
  float *pfVar1;
  undefined8 *unaff_x19;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float unaff_s13;
  undefined8 in_stack_00000010;
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
  
  fVar2 = (float)FUN_02699088(0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar3 = fStack000000000000001c * fStack000000000000001c +
          in_stack_00000010._4_4_ * in_stack_00000010._4_4_ +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar3) {
    fVar5 = fStack000000000000001c * unaff_s13 +
            in_stack_00000010._4_4_ * fVar2 + fStack0000000000000018 * param_2;
    fVar2 = fVar2 - (in_stack_00000010._4_4_ * fVar5) / fVar3;
    param_2 = param_2 - (fStack0000000000000018 * fVar5) / fVar3;
    unaff_s13 = unaff_s13 - (fStack000000000000001c * fVar5) / fVar3;
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar3 = SQRT(unaff_s13 * unaff_s13 + fVar2 * fVar2 + param_2 * param_2);
  if (fVar3 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar2 = *pfVar1;
    param_2 = pfVar1[1];
    unaff_s13 = pfVar1[2];
  }
  else {
    fVar2 = fVar2 / fVar3;
    param_2 = param_2 / fVar3;
    unaff_s13 = unaff_s13 / fVar3;
  }
  fVar3 = (float)FUN_01a16800(uStack0000000000000028,fStack0000000000000024,fStack0000000000000020);
  fVar2 = fStack000000000000002c * fVar2;
  uVar6 = (ulong)(uint)(fStack000000000000002c * param_2 + fStack0000000000000024);
  uVar9 = (ulong)(uint)(fStack000000000000002c * unaff_s13 + fStack0000000000000020);
  uVar4 = FUN_01a16c3c(fVar2 + fVar3,uVar6,uVar9);
  uVar7 = uVar6;
  uVar10 = uVar9;
  fVar3 = (float)FUN_01a17b3c();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  fVar5 = (float)uVar7;
  fVar8 = (float)uVar10;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_02666aac(uVar4,uVar6,uVar9,
               (fStack0000000000000038 * fVar5 +
               fStack0000000000000030 * fVar2 + fStack0000000000000034 * fVar3) -
               fStack000000000000003c * fVar8,
               (fStack0000000000000030 * fVar8 +
               fStack000000000000003c * fVar2 + fStack0000000000000034 * fVar5) -
               fStack0000000000000038 * fVar3,
               (fStack000000000000003c * fVar3 +
               fStack0000000000000038 * fVar2 + fStack0000000000000034 * fVar8) -
               fStack0000000000000030 * fVar5,
               ((fStack0000000000000034 * fVar2 - fStack0000000000000030 * fVar3) -
               fStack000000000000003c * fVar5) - fStack0000000000000038 * fVar8);
  return;
}


