/*
FUNCTION_NAME: FUN_01f6895c
ENTRY_POINT: 01f6895c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


long FUN_01f6895c(long param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0378041c & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_SceneSelect_<>c_<Hide>b__32_1__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                      );
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_WitSocketRequest_ReturnRawResponse__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<IntVec3,_List<int>>_get_Count__)
    ;
    thunk_FUN_00d48444(StringLiteral_14127);
    DAT_0378041c = 1;
  }
  puVar3 = Method_SceneSelect_<>c_<Hide>b__32_1__;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
  ;
  if (param_1 == 0) goto LAB_01f68b28;
  if (*(int *)(param_1 + 0x10) <= param_2) {
    uVar6 = **(undefined8 **)
              (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
              + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                              );
    if (lVar7 != 0) {
      FUN_01f730c0(lVar7,*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitSocketRequest_ReturnRawResponse__,uVar6,0);
      return lVar7;
    }
    goto LAB_01f68b28;
  }
  if (*(int *)(*(long *)Method_SceneSelect_<>c_<Hide>b__32_1__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_015fa29c(param_1,param_3,0);
  uVar5 = FUN_01f6808c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar4);
  if ((uVar5 & 1) == 0) {
LAB_01f68a60:
    uVar6 = FUN_01f74b5c(param_1,param_3,0);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar1 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<IntVec3,_List<int>>_get_Count__;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_015fa29c(param_1,param_3,0);
    uVar5 = FUN_01f68928(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar4);
    if ((uVar5 & 1) != 0) goto LAB_01f68a60;
    uVar6 = FUN_01f74b5c(param_1,param_3,0);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar1 = (undefined8 *)StringLiteral_14127;
  }
  if (lVar7 != 0) {
    FUN_01f74254(lVar7,*puVar1,uVar6,0);
    return lVar7;
  }
LAB_01f68b28:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


