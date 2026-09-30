/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteIndentSpaceAsync
ENTRY_POINT: 028e2aec
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


void Newtonsoft_Json_JsonTextWriter__WriteIndentSpaceAsync
               (ExceptionSupportStack<Il2CppObject*,1> *param_1,Il2CppObject *param_2)

{
  undefined8 uVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  long unaff_x29;
  
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::push(param_1,param_2);
  *(undefined4 *)(unaff_x29 + -0x6c) = 4;
  __cxa_end_catch();
  if (*(int *)(unaff_x29 + -0x6c) != 4) {
    uVar1 = il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::top
                      ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x30));
    *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
    uVar5 = *(undefined8 *)(unaff_x29 + -0x20);
    pIVar2 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                       );
    pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
    uVar1 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(pEVar3,uVar1,uVar5,0);
    il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
              ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x30));
    pMVar4 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_Newtonsoft_Json_Utilities_ReflectionUtils_GetMemberUnderlyingType__);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar4);
  }
  uVar1 = il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::top
                    ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x30));
  *(undefined8 *)(unaff_x29 + -0x78) = uVar1;
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10);
  IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF
            (*(undefined8 *)(unaff_x29 + -0x80),0);
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0x30));
  return;
}


