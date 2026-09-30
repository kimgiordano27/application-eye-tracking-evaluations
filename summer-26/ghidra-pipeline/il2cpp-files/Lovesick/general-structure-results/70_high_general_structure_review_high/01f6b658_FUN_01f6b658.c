/*
FUNCTION_NAME: FUN_01f6b658
ENTRY_POINT: 01f6b658
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


long FUN_01f6b658(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03780433 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_SceneSelect_<>c_<Hide>b__32_1__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                      );
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_WitSocketRequest_ReturnRawResponse__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<IntVec3,_List<int>>_get_Count__)
    ;
    DAT_03780433 = 1;
  }
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
  ;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    uVar3 = **(undefined8 **)
              (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
              + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                              );
    if (lVar4 == 0) {
LAB_01f6b790:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01f730c0(lVar4,*(undefined8 *)
                        Method_Meta_WitAi_Requests_WitSocketRequest_ReturnRawResponse__,uVar3,0);
  }
  else {
    if (*(int *)(*(long *)Method_SceneSelect_<>c_<Hide>b__32_1__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar2 = FUN_01f68188(param_1,0);
    if (iVar2 == *(int *)(param_1 + 0x10)) {
      lVar4 = 0;
    }
    else {
      uVar3 = FUN_01f74b5c(param_1,iVar2,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01f6b790;
      FUN_01f74254(lVar4,*(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<IntVec3,_List<int>>_get_Count__
                   ,uVar3,0);
    }
  }
  return lVar4;
}


