/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteRawAsync
ENTRY_POINT: 028e2c20
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


void Newtonsoft_Json_JsonTextWriter__WriteRawAsync(undefined8 param_1)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 uStack0000000000000010;
  ExceptionSupportStack<Il2CppObject*,1> *in_stack_00000018;
  Exception_t *in_stack_00000078;
  undefined8 in_stack_00000080;
  
  uStack0000000000000010 = param_1;
  uVar1 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)Method_OVRPlugin_PinnedArray<Guid>__ctor__);
  InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668
            (uStack0000000000000010,uVar1,in_stack_00000080,0);
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop(in_stack_00000018);
  pMVar2 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetMemberUnderlyingType__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(in_stack_00000078,pMVar2);
}


