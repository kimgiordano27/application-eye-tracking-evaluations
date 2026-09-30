/*
FUNCTION_NAME: System.Linq.Expressions.MethodCallExpression4$$get_ArgumentCount
ENTRY_POINT: 01bb9ccc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Linq_Expressions_MethodCallExpression4__get_ArgumentCount(void)

{
  undefined *puVar1;
  float fVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar3;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x23;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar10;
  float fVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x23 + 0xe1b) = 1;
  puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_0132138c(*(long *)(unaff_x19 + 0x18),unaff_w20,&stack0x00000030,*unaff_x22);
    fVar9 = in_stack_00000038;
    fVar11 = fStack0000000000000034;
    fVar10 = fStack0000000000000030;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      fVar4 = unaff_s9 - (float)in_stack_00000010;
      fVar6 = unaff_s12 - (float)in_stack_00000020;
      FUN_0132138c(*(long *)(unaff_x19 + 0x18),unaff_w21,&stack0x00000030,*unaff_x22);
      fVar2 = in_stack_00000038;
      fVar8 = fStack0000000000000034;
      fVar7 = fStack0000000000000030;
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      fVar10 = fVar10 - fVar7;
      fVar11 = fVar11 - fVar8;
      fVar9 = fVar9 - fVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar7 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
      fVar8 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + (unaff_s11 - unaff_s8) * (unaff_s11 - unaff_s8));
      if (fVar7 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        uVar5 = **(undefined8 **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8);
        fVar9 = *(float *)(*(undefined8 **)
                            (*(long *)
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            + 0xb8) + 1);
      }
      else {
        uVar5 = CONCAT44(fVar11 / fVar7,fVar10 / fVar7);
        fVar9 = fVar9 / fVar7;
      }
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        FUN_0132138c(*(long *)(unaff_x19 + 0x18),unaff_w20,&stack0x00000030,*unaff_x22);
        puVar1 = StringLiteral_1006;
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          fVar10 = (float)uVar5 * fVar8 * 0.5 + fStack0000000000000030;
          fVar11 = (float)((ulong)uVar5 >> 0x20) * fVar8 * 0.5 + fStack0000000000000034;
          fVar9 = fVar8 * fVar9 * unaff_s10 + in_stack_00000038;
          FUN_00ac4f98(CONCAT44(fVar11,fVar10),fVar11,fVar9,*(long *)(unaff_x19 + 0x18),
                       *(undefined8 *)StringLiteral_1006);
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            fVar11 = ((float)in_stack_00000020 + fVar11) * 0.5;
            FUN_00ac4f98(CONCAT44(fVar11,((float)in_stack_00000010 + fVar10) * 0.5),fVar11,
                         (unaff_s8 + fVar9) * unaff_s10,*(long *)(unaff_x19 + 0x18),
                         *(undefined8 *)puVar1);
            if (*(long *)(unaff_x19 + 0x18) != 0) {
              FUN_00ac4f98(in_stack_00000010,in_stack_00000020,*(long *)(unaff_x19 + 0x18),
                           *(undefined8 *)puVar1);
              puVar1 = Method_System_Numerics_Vector<ushort>_get_Zero__;
              lVar3 = *(long *)(unaff_x19 + 0x50);
              if (lVar3 != 0) {
                FUN_0132138c(lVar3,*(int *)(lVar3 + 0x18) + -1,&stack0x00000030,
                             *(undefined8 *)OVREyeGaze_TypeInfo);
                FUN_00ac1d04(fStack0000000000000030,lVar3,*(undefined8 *)puVar1);
                if (*(int *)(unaff_x19 + 0x28) == 3) {
                  if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_01bb9f54;
                  FUN_01bbaee0();
                }
                lVar3 = *(long *)(unaff_x19 + 0x10);
                *(undefined1 *)(unaff_x19 + 0x30) = 0;
                if (lVar3 != 0) {
                  (**(code **)(lVar3 + 0x18))
                            (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01bb9f54:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


