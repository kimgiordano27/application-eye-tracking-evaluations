/*
FUNCTION_NAME: FUN_020b221c
ENTRY_POINT: 020b221c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_020b221c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((DAT_0482f8f5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item2__);
    thunk_FUN_01efb3a4(Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<DictationSession>_RemoveListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<int>__ctor__);
    thunk_FUN_01efb3a4(Method_TMPro_TweenRunner<FloatTween>_Init__);
    thunk_FUN_01efb3a4(Method_TMPro_TweenRunner<FloatTween>_StartTween__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_Init__);
    DAT_0482f8f5 = 1;
  }
  FUN_020af30c(param_1);
  puVar2 = Method_UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_Init__;
  puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar6 = FUN_040766fc(*(long *)(param_1 + 0xd8),0);
    uVar6 = FUN_03405678(uVar6,*(undefined8 *)puVar2,0);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar7,uVar6,0);
    puVar5 = Method_UnityEngine_Events_UnityEvent<int>_Invoke__;
    puVar2 = Method_UnityEngine_Events_UnityEvent<DictationSession>_RemoveListener__;
    puVar1 = Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item3__;
    if (lVar7 != 0) {
      uVar6 = FUN_04073258(lVar7,0);
      *(undefined8 *)(param_1 + 0x130) = uVar6;
      thunk_FUN_01f51358(param_1 + 0x130);
      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_02e631d0(uVar6,param_1,*(undefined8 *)puVar2,0);
      lVar7 = *(long *)puVar5;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar5;
      }
      puVar4 = Method_UnityEngine_Events_UnityEvent<int>__ctor__;
      puVar3 = Method_TMPro_TweenRunner<FloatTween>_StartTween__;
      puVar2 = Method_TMPro_TweenRunner<FloatTween>_Init__;
      puVar1 = Method_System_Tuple<Task,_Task,_TaskContinuation>_get_Item2__;
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar10 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar5;
        }
        uVar11 = **(undefined8 **)(lVar7 + 0xb8);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                  (lVar10,uVar11,
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<int>_AddListener__,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
        *plVar8 = lVar10;
        thunk_FUN_01f51358(plVar8,lVar10);
      }
      uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                (uVar11,param_1,*(undefined8 *)puVar4,0);
      uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
      FUN_025d758c(uVar9,uVar6,lVar10,uVar11,0,1,10,10000,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x138) = uVar9;
      thunk_FUN_01f51358(param_1 + 0x138,uVar9);
      if ((*(long *)(param_1 + 0xe8) != 0) &&
         (lVar7 = FUN_040703d4(*(long *)(param_1 + 0xe8),0), lVar7 != 0)) {
        FUN_04073314(lVar7,0,0);
        FUN_020b24a4(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


