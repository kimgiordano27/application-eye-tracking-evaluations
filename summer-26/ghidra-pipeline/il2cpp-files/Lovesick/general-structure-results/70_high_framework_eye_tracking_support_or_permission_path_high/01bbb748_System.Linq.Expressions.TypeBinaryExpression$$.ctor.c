/*
FUNCTION_NAME: System.Linq.Expressions.TypeBinaryExpression$$.ctor
ENTRY_POINT: 01bbb748
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_TypeBinaryExpression___ctor
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int in_w8;
  float *pfVar5;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar8;
  float unaff_s15;
  float fVar9;
  float in_stack_00000008;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x18c) = 1;
  }
  param_4 = param_4 - unaff_s11;
  fVar8 = unaff_s8 - unaff_s10;
  fVar9 = unaff_s15 - unaff_s12;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar6 = SQRT(fVar9 * fVar9 + param_4 * param_4 + fVar8 * fVar8);
  fVar7 = (unaff_s9 + SQRT(param_2 + param_3)) * 0.5;
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
    param_4 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar9 = pfVar5[2];
  }
  else {
    fVar8 = fVar8 / fVar6;
    param_4 = param_4 / fVar6;
    fVar9 = fVar9 / fVar6;
  }
  FUN_01bbbd30(unaff_s11 + fVar7 * param_4,unaff_s10 + fVar7 * fVar8,unaff_s12 + fVar7 * fVar9);
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
      fVar9 = (fStack0000000000000058 - fStack000000000000005c) -
              (float)(int)((fStack0000000000000058 - fStack000000000000005c) / 360.0) * 360.0;
      fVar8 = fVar9;
      if (360.0 < fVar9) {
        fVar8 = 360.0;
      }
      if (fVar9 < 0.0) {
        fVar8 = 0.0;
      }
      if (*(long *)(unaff_x19 + 0x50) != 0) {
        fVar9 = fVar8 + -360.0;
        if (fVar8 <= 180.0) {
          fVar9 = fVar8;
        }
        fStack000000000000000c = fStack000000000000005c + in_stack_00000008 * fVar9;
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


