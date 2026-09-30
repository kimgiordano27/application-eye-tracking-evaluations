/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionTracked
ENTRY_POINT: 01a1786c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePositionTracked
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
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
  
  fVar13 = (in_s18 + in_s16 + in_s17) - in_s19;
  fVar12 = (in_s20 + in_s22 + in_s23 * param_1) - in_s21;
  if (*(char *)(unaff_x22 + 0x377) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x22 + 0x377) = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar2 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  fVar4 = (float)FUN_02699088((param_7 + param_3 + param_4) - param_8,fVar13,fVar12,
                              ((param_2 - param_5) - param_6) - in_s24 * param_1,
                              *(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
                              *(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar5 = fStack000000000000001c * fStack000000000000001c +
          in_stack_00000010._4_4_ * in_stack_00000010._4_4_ +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar5) {
    fVar7 = fStack000000000000001c * fVar12 +
            in_stack_00000010._4_4_ * fVar4 + fStack0000000000000018 * fVar13;
    fVar4 = fVar4 - (in_stack_00000010._4_4_ * fVar7) / fVar5;
    fVar13 = fVar13 - (fStack0000000000000018 * fVar7) / fVar5;
    fVar12 = fVar12 - (fStack000000000000001c * fVar7) / fVar5;
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar5 = SQRT(fVar12 * fVar12 + fVar4 * fVar4 + fVar13 * fVar13);
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
    fVar12 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fVar13 = fVar13 / fVar5;
    fVar12 = fVar12 / fVar5;
  }
  fVar5 = (float)FUN_01a16800(uStack0000000000000028,fStack0000000000000024,fStack0000000000000020);
  fVar4 = fStack000000000000002c * fVar4;
  uVar8 = (ulong)(uint)(fStack000000000000002c * fVar13 + fStack0000000000000024);
  uVar10 = (ulong)(uint)(fStack000000000000002c * fVar12 + fStack0000000000000020);
  uVar6 = FUN_01a16c3c(fVar4 + fVar5,uVar8,uVar10);
  uVar9 = uVar8;
  uVar11 = uVar10;
  fVar13 = (float)FUN_01a17b3c();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  fVar12 = (float)uVar9;
  fVar5 = (float)uVar11;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_02666aac(uVar6,uVar8,uVar10,
               (fStack0000000000000038 * fVar12 +
               fStack0000000000000030 * fVar4 + fStack0000000000000034 * fVar13) -
               fStack000000000000003c * fVar5,
               (fStack0000000000000030 * fVar5 +
               fStack000000000000003c * fVar4 + fStack0000000000000034 * fVar12) -
               fStack0000000000000038 * fVar13,
               (fStack000000000000003c * fVar13 +
               fStack0000000000000038 * fVar4 + fStack0000000000000034 * fVar5) -
               fStack0000000000000030 * fVar12,
               ((fStack0000000000000034 * fVar4 - fStack0000000000000030 * fVar13) -
               fStack000000000000003c * fVar12) - fStack0000000000000038 * fVar5);
  return;
}


