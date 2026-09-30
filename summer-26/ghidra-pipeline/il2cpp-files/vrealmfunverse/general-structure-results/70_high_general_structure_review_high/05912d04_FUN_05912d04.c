/*
FUNCTION_NAME: FUN_05912d04
ENTRY_POINT: 05912d04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05912d04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long in_stack_00000020;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000070;
  long in_stack_00000418;
  
  (*(code *)*param_1)();
  if (in_stack_00000070 == (long *)0x0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    lVar3 = *in_stack_00000070;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
          goto LAB_05912d74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_02b7654c(in_stack_00000070,
                          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xc);
LAB_05912d74:
    (*(code *)*puVar1)(in_stack_00000070,1,puVar1[1]);
    lVar3 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
    ;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
      ;
    }
    puVar1 = *(undefined8 **)(lVar3 + 0xb8);
    lVar6 = puVar1[1];
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar1 = *(undefined8 **)
                  (*(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                  + 0xb8);
      }
      uVar7 = *puVar1;
      lVar6 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_Init__
                                );
      FUN_03e02810(lVar6,uVar7,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>__ctor__
                   ,0);
      plVar2 = (long *)(*(long *)(*(long *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float>_Dispose__
                                 + 0xb8) + 8);
      *plVar2 = lVar6;
      thunk_FUN_02bb0e9c(plVar2,lVar6);
    }
    if (in_stack_00000070 == (long *)0x0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    else {
      lVar3 = *in_stack_00000070;
      lVar8 = *(long *)Method_UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_StartTween__;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto TMPro_TMP_InputField__set_keepTextSelectionVisible;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar3 = FUN_02b7654c(in_stack_00000070);
TMPro_TMP_InputField__set_keepTextSelectionVisible:
      lVar3 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar3 + 8),lVar8);
      (**(code **)(lVar3 + 8))(in_stack_00000070,lVar6,lVar3);
      plVar2 = (long *)*in_stack_00000060;
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05912f00;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)PTR_DAT_06312f78,0);
LAB_05912f00:
        (*(code *)*puVar1)(plVar2,puVar1[1]);
      }
      if (in_stack_00000058 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
          return;
        }
      }
      else if (*(long *)(in_stack_00000020 + 0x28) == in_stack_00000418) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


