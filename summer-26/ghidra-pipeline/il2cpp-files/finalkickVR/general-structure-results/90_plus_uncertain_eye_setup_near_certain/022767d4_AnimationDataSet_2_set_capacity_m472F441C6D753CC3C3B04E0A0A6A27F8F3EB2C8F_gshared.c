/*
FUNCTION_NAME: AnimationDataSet_2_set_capacity_m472F441C6D753CC3C3B04E0A0A6A27F8F3EB2C8F_gshared
ENTRY_POINT: 022767d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void AnimationDataSet_2_set_capacity_m472F441C6D753CC3C3B04E0A0A6A27F8F3EB2C8F_gshared
               (VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF **param_1,int param_2,
               long param_3)

{
  long lVar1;
  MethodInfo *pMVar2;
  
  if ((AnimationDataSet_2_set_capacity_m472F441C6D753CC3C3B04E0A0A6A27F8F3EB2C8F_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__)
    ;
    AnimationDataSet_2_set_capacity_m472F441C6D753CC3C3B04E0A0A6A27F8F3EB2C8F_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  Array_Resize_TisVisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_m1FD8B8EC7C3147920D03A8841C46D35C0C4E9F86
            (param_1,param_2,
             *(MethodInfo **)
              Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Quaternion>__ctor__);
  Array_Resize_TisStylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69_m9BF76492ED8683330AA277A063C0B9A48E905880
            ((StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359 **)(param_1 + 1),
             param_2,*(MethodInfo **)
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
            );
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(param_3 + 0x20));
  pMVar2 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar1 + 0xc0),2);
  Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712
            ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC **)
             (param_1 + 2),param_2,pMVar2);
  lVar1 = InitializedTypeInfo(*(Il2CppClass **)(param_3 + 0x20));
  pMVar2 = (MethodInfo *)il2cpp_rgctx_method(*(Il2CppRGCTXData **)(lVar1 + 0xc0),5);
  Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712
            ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC **)
             (param_1 + 3),param_2,pMVar2);
  return;
}


