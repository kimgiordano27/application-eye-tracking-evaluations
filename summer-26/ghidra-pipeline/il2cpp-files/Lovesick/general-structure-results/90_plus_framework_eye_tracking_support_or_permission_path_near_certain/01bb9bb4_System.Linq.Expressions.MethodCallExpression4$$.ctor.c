/*
FUNCTION_NAME: System.Linq.Expressions.MethodCallExpression4$$.ctor
ENTRY_POINT: 01bb9bb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_MethodCallExpression4___ctor
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    uStack0000000000000010 = param_2;
    uStack0000000000000020 = param_3;
    thunk_FUN_00d48444(Method_System_Numerics_Vector<ushort>_get_Zero__);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x75f) = 1;
    param_2 = uStack0000000000000010;
    param_3 = uStack0000000000000020;
  }
  puVar4 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
  if (*(char *)(param_5 + 0x20) != '\0') {
    return;
  }
  lVar7 = *(long *)(param_5 + 0x18);
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_3;
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    iVar2 = iVar1 + -1;
    FUN_0132138c(lVar7,iVar2,&stack0x00000030,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    fVar13 = in_stack_00000038;
    fVar12 = fStack0000000000000034;
    fVar10 = fStack0000000000000030;
    if (*(long *)(param_5 + 0x18) != 0) {
      iVar1 = iVar1 + -2;
      FUN_0132138c(*(long *)(param_5 + 0x18),iVar1,&stack0x00000030,*(undefined8 *)puVar4);
      if ((*(uint *)(param_5 + 0x28) | 2) == 3) {
        fVar10 = fVar10 - fStack0000000000000030;
        fVar12 = fVar12 - fStack0000000000000034;
        fVar13 = fVar13 - in_stack_00000038;
      }
      else {
        if (*(long *)(param_5 + 0x18) == 0) goto LAB_01bb9f54;
        FUN_0132138c(*(long *)(param_5 + 0x18),iVar2,&stack0x00000030,*(undefined8 *)puVar4);
        fVar13 = in_stack_00000038;
        fVar12 = fStack0000000000000034;
        fVar10 = fStack0000000000000030;
        if (DAT_03774e1b == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03774e1b = '\x01';
        }
        puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(param_5 + 0x18) == 0) goto LAB_01bb9f54;
        FUN_0132138c(*(long *)(param_5 + 0x18),iVar2,&stack0x00000030,*(undefined8 *)puVar4);
        fVar11 = in_stack_00000038;
        fVar15 = fStack0000000000000034;
        fVar14 = fStack0000000000000030;
        if (*(long *)(param_5 + 0x18) == 0) goto LAB_01bb9f54;
        fVar13 = fVar13 - (float)param_4;
        fVar10 = fVar10 - (float)uStack0000000000000010;
        fVar12 = fVar12 - (float)uStack0000000000000020;
        FUN_0132138c(*(long *)(param_5 + 0x18),iVar1,&stack0x00000030,*(undefined8 *)puVar4);
        fVar6 = in_stack_00000038;
        fVar5 = fStack0000000000000034;
        fVar9 = fStack0000000000000030;
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        fVar14 = fVar14 - fVar9;
        fVar15 = fVar15 - fVar5;
        fVar11 = fVar11 - fVar6;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar9 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar15 * fVar15);
        fVar13 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar13 * fVar13);
        if (fVar9 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          uVar8 = **(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
          fVar11 = *(float *)(*(undefined8 **)
                               (*(long *)
                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                               + 0xb8) + 1);
        }
        else {
          uVar8 = CONCAT44(fVar15 / fVar9,fVar14 / fVar9);
          fVar11 = fVar11 / fVar9;
        }
        fVar10 = (float)uVar8 * fVar13 * 0.5;
        fVar12 = (float)((ulong)uVar8 >> 0x20) * fVar13 * 0.5;
        fVar13 = fVar13 * fVar11 * 0.5;
      }
      if (*(long *)(param_5 + 0x18) != 0) {
        FUN_0132138c(*(long *)(param_5 + 0x18),iVar2,&stack0x00000030,*(undefined8 *)puVar4);
        puVar4 = StringLiteral_1006;
        if (*(long *)(param_5 + 0x18) != 0) {
          fVar10 = fVar10 + fStack0000000000000030;
          fVar12 = fVar12 + fStack0000000000000034;
          fVar13 = fVar13 + in_stack_00000038;
          FUN_00ac4f98(CONCAT44(fVar12,fVar10),fVar12,fVar13,*(long *)(param_5 + 0x18),
                       *(undefined8 *)StringLiteral_1006);
          if (*(long *)(param_5 + 0x18) != 0) {
            fVar12 = ((float)uStack0000000000000020 + fVar12) * 0.5;
            FUN_00ac4f98(CONCAT44(fVar12,((float)uStack0000000000000010 + fVar10) * 0.5),fVar12,
                         ((float)param_4 + fVar13) * 0.5,*(long *)(param_5 + 0x18),
                         *(undefined8 *)puVar4);
            if (*(long *)(param_5 + 0x18) != 0) {
              FUN_00ac4f98(uStack0000000000000010,uStack0000000000000020,param_4,
                           *(long *)(param_5 + 0x18),*(undefined8 *)puVar4);
              puVar4 = Method_System_Numerics_Vector<ushort>_get_Zero__;
              lVar7 = *(long *)(param_5 + 0x50);
              if (lVar7 != 0) {
                FUN_0132138c(lVar7,*(int *)(lVar7 + 0x18) + -1,&stack0x00000030,
                             *(undefined8 *)OVREyeGaze_TypeInfo);
                FUN_00ac1d04(fStack0000000000000030,lVar7,*(undefined8 *)puVar4);
                if (*(int *)(param_5 + 0x28) == 3) {
                  if (*(long *)(param_5 + 0x18) == 0) goto LAB_01bb9f54;
                  FUN_01bbaee0(param_5,*(int *)(*(long *)(param_5 + 0x18) + 0x18) + -1);
                }
                lVar7 = *(long *)(param_5 + 0x10);
                *(undefined1 *)(param_5 + 0x30) = 0;
                if (lVar7 == 0) {
                  return;
                }
                (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
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


