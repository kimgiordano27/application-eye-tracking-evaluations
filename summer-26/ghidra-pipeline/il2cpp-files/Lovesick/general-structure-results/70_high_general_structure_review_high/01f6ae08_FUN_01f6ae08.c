/*
FUNCTION_NAME: FUN_01f6ae08
ENTRY_POINT: 01f6ae08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


long FUN_01f6ae08(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_0378042c & 1) == 0) {
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
    DAT_0378042c = 1;
  }
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
  ;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    uVar5 = **(undefined8 **)
              (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
              + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableAsyncBase<float3>_set_Value__
                              );
    if (lVar4 == 0) {
LAB_01f6af6c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01f730c0(lVar4,*(undefined8 *)
                        Method_Meta_WitAi_Requests_WitSocketRequest_ReturnRawResponse__,uVar5,0);
  }
  else {
                    /* try { // try from 01f6ae8c to 0206b123 has its CatchHandler @ 01f6ae8c
                       catch() { ... } // from try @ 01f6ae8c with catch @ 01f6ae8c
                       catch() { ... } // from try @ 01f6b204 with catch @ 01f6ae8c
                       catch() { ... } // from try @ 01f6b2e8 with catch @ 01f6ae8c
                       catch() { ... } // from try @ 01f6b3a0 with catch @ 01f6ae8c */
    if (*(int *)(*(long *)Method_SceneSelect_<>c_<Hide>b__32_1__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar2 = FUN_01f6826c(param_1,0);
    if (iVar2 == *(int *)(param_1 + 0x10)) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(undefined8 *)StringLiteral_14127;
      uVar6 = *(undefined8 *)
               Method_System_Collections_Generic_Dictionary<IntVec3,_List<int>>_get_Count__;
      uVar3 = FUN_01f74b5c(param_1,iVar2,0);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 == 0) goto LAB_01f6af6c;
      if (iVar2 != 0) {
        uVar5 = uVar6;
      }
      FUN_01f74254(lVar4,uVar5,uVar3,0);
    }
  }
  return lVar4;
}


