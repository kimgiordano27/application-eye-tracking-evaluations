/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 01a17704
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


void OVRPlugin__GetNodeOrientationTracked
               (undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
               float param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  FUN_01a159b4(&stack0x00000040,param_6,param_8);
  fVar11 = in_stack_00000058;
  fVar10 = fStack0000000000000050;
  fStack0000000000000014 = (float)FUN_01a1631c(param_6,param_8);
  fVar6 = param_3;
  fStack000000000000001c = param_4;
  fStack000000000000000c = (float)FUN_01a163f8(param_6,param_8);
  fStack0000000000000004 = param_5;
  fStack000000000000002c = (float)FUN_01a16160(param_6,param_8);
  uVar8 = *param_7;
  fStack0000000000000024 = (float)param_7[1];
  fVar21 = (float)param_7[6];
  fVar9 = (float)param_7[2];
  fVar18 = (float)param_7[3];
  fVar19 = (float)param_7[4];
  fVar20 = (float)param_7[5];
  fStack0000000000000034 = fVar11;
  fStack000000000000003c = fVar10;
  fVar22 = fStack0000000000000054;
  fVar4 = (float)FUN_02698858(in_stack_00000048._4_4_,0);
  fVar17 = (fVar20 * fVar4 + fVar21 * fVar10 + fVar19 * fVar11) - fVar18 * fVar22;
  fVar16 = (fVar19 * fVar22 + fVar21 * fVar4 + fVar18 * fVar11) - fVar20 * fVar10;
  fVar5 = (fVar18 * fVar10 + fVar21 * fVar22 + fVar20 * fVar11) - fVar19 * fVar4;
  fVar10 = ((fVar21 * fVar11 - fVar18 * fVar4) - fVar19 * fVar10) - fVar20 * fVar22;
  fVar4 = fStack000000000000000c * fVar10;
  fVar18 = fStack0000000000000004 * fVar16;
  fVar19 = fStack000000000000000c * fVar16;
  fVar11 = fStack0000000000000004 * fVar10;
  fVar22 = (fStack000000000000000c * fVar5 + fVar6 * fVar10 + fStack0000000000000004 * fVar17) -
           param_4 * fVar16;
  fVar10 = (fVar6 * fVar16 + param_4 * fVar10 + fStack0000000000000004 * fVar5) -
           fStack000000000000000c * fVar17;
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
  fVar11 = (float)FUN_02699088((param_4 * fVar17 + fVar4 + fVar18) - fVar6 * fVar5,fVar22,fVar10,
                               ((fVar11 - fVar19) - fVar6 * fVar17) - param_4 * fVar5,
                               *(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
                               *(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_0377518b == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_0377518b = '\x01';
  }
  fVar6 = fStack000000000000001c * fStack000000000000001c +
          fStack0000000000000014 * fStack0000000000000014 + param_3 * param_3;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar6) {
    fVar4 = fStack000000000000001c * fVar10 + fStack0000000000000014 * fVar11 + param_3 * fVar22;
    fVar11 = fVar11 - (fStack0000000000000014 * fVar4) / fVar6;
    fVar22 = fVar22 - (param_3 * fVar4) / fVar6;
    fVar10 = fVar10 - (fStack000000000000001c * fVar4) / fVar6;
  }
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar6 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar22 * fVar22);
  if (fVar6 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar22 = pfVar3[1];
    fVar10 = pfVar3[2];
  }
  else {
    fVar11 = fVar11 / fVar6;
    fVar22 = fVar22 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  fVar6 = fStack0000000000000024;
  fVar4 = (float)FUN_01a16800(uVar8,fStack0000000000000024,fVar9,param_6,param_8);
  fVar11 = fStack000000000000002c * fVar11;
  uVar12 = (ulong)(uint)(fStack000000000000002c * fVar22 + fVar6);
  uVar14 = (ulong)(uint)(fStack000000000000002c * fVar10 + fVar9);
  uVar7 = FUN_01a16c3c(fVar11 + fVar4,uVar12,uVar14,param_6,param_8);
  uVar13 = uVar12;
  uVar15 = uVar14;
  fVar10 = (float)FUN_01a17b3c(param_6,param_8);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  fVar6 = (float)uVar13;
  fVar22 = (float)uVar15;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_02666aac(uVar7,uVar12,uVar14,
               (fStack0000000000000054 * fVar6 +
               in_stack_00000048._4_4_ * fVar11 + fStack0000000000000034 * fVar10) -
               fStack000000000000003c * fVar22,
               (in_stack_00000048._4_4_ * fVar22 +
               fStack000000000000003c * fVar11 + fStack0000000000000034 * fVar6) -
               fStack0000000000000054 * fVar10,
               (fStack000000000000003c * fVar10 +
               fStack0000000000000054 * fVar11 + fStack0000000000000034 * fVar22) -
               in_stack_00000048._4_4_ * fVar6,
               ((fStack0000000000000034 * fVar11 - in_stack_00000048._4_4_ * fVar10) -
               fStack000000000000003c * fVar6) - fStack0000000000000054 * fVar22,param_1,0);
  return;
}


