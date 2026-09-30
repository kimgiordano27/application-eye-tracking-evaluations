/*
FUNCTION_NAME: System.Linq.Expressions.TryExpression$$get_Fault
ENTRY_POINT: 01bbb714
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_TryExpression__get_Fault
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar10;
  float in_stack_00000008;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fVar7 = *(float *)(param_1 + 0x2c);
  fVar8 = *(float *)(param_1 + 0x30);
  fVar10 = *(float *)(param_1 + 0x34);
  if (DAT_0377518c == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_0377518c = '\x01';
  }
  fVar7 = fVar7 - unaff_s11;
  fVar8 = fVar8 - unaff_s10;
  fVar10 = fVar10 - unaff_s12;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar6 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar8 * fVar8);
  fVar9 = (SQRT(param_2 + param_3 + param_4 * param_4) +
          SQRT(param_5 * param_5 + param_6 * param_6 + (param_7 - unaff_s12) * (param_7 - unaff_s12)
              )) * 0.5;
  if (fVar6 <= DAT_028aa038) {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar5 = *(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
    fVar7 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar8 = fVar8 / fVar6;
    fVar7 = fVar7 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  FUN_01bbbd30(unaff_s11 + fVar9 * fVar7,unaff_s10 + fVar9 * fVar8,unaff_s12 + fVar9 * fVar10);
  puVar3 = OVREyeGaze_TypeInfo;
  lVar4 = *(long *)(unaff_x19 + 0x50);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    FUN_0132138c(lVar4,unaff_w20,(long)&stack0x00000058 + 4,*(undefined8 *)OVREyeGaze_TypeInfo);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (unaff_w20 + 1) / iVar1;
      }
      iVar1 = (unaff_w20 + 1) - iVar2 * iVar1;
      FUN_0132138c(*(long *)(unaff_x19 + 0x50),iVar1,&stack0x00000058,*(undefined8 *)puVar3);
      fVar8 = (fStack0000000000000058 - fStack000000000000005c) -
              (float)(int)((fStack0000000000000058 - fStack000000000000005c) / 360.0) * 360.0;
      fVar7 = fVar8;
      if (360.0 < fVar8) {
        fVar7 = 360.0;
      }
      if (fVar8 < 0.0) {
        fVar7 = 0.0;
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        fVar8 = fVar7 + -360.0;
        if (fVar7 <= 180.0) {
          fVar8 = fVar7;
        }
        fStack000000000000000c = fStack000000000000005c + in_stack_00000008 * fVar8;
        FUN_01323a14(*(long *)(unaff_x19 + 0x50),iVar1,&stack0x0000000c,
                     *(undefined8 *)Method_System_Nullable<DebugWarn_Message>_GetValueOrDefault__);
        lVar4 = *(long *)(unaff_x19 + 0x10);
        *(undefined1 *)(unaff_x19 + 0x30) = 0;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


