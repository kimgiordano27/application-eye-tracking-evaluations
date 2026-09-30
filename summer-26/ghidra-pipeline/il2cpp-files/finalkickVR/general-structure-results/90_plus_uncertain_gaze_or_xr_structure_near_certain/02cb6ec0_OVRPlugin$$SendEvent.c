/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 02cb6ec0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__SendEvent(undefined8 param_1,ulong param_2)

{
  Exception_t *pEVar1;
  undefined8 uVar2;
  
  if ((CAPI_IntPtrToByteArray_mF1789BBE26F5CAB1ABA62AB5231EE36E0FA64855::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_SimpleJSON_JSONNode_<get_DeepChilds>d__19_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    CAPI_IntPtrToByteArray_mF1789BBE26F5CAB1ABA62AB5231EE36E0FA64855::s_Il2CppMethodInitialized = 1;
  }
  if (0x7fffffffffffffff < param_2) {
    pEVar1 = (Exception_t *)il2cpp_codegen_get_overflow_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception
              (pEVar1,*(MethodInfo **)
                       Method_SimpleJSON_JSONNode_<get_DeepChilds>d__19_System_Collections_IEnumerator_Reset__
              );
  }
  uVar2 = SZArrayNew(*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__,
                     (uint)param_2);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
  Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(param_1,uVar2,0,param_2 & 0xffffffff,0);
  return uVar2;
}


