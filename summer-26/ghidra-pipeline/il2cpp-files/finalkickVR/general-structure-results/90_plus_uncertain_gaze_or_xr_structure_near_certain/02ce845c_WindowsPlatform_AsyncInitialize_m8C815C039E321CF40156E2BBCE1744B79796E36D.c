/*
FUNCTION_NAME: WindowsPlatform_AsyncInitialize_m8C815C039E321CF40156E2BBCE1744B79796E36D
ENTRY_POINT: 02ce845c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_tDF5315C7EB8AA620C19730D55185214ADD908497 *
WindowsPlatform_AsyncInitialize_m8C815C039E321CF40156E2BBCE1744B79796E36D
          (WindowsPlatform_tB49116598B4ED1B05AEE6E288F55C2449418D9FC *param_1,undefined8 param_2)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  ulong uVar6;
  Request_1_tDF5315C7EB8AA620C19730D55185214ADD908497 *pRVar7;
  
  if ((WindowsPlatform_AsyncInitialize_m8C815C039E321CF40156E2BBCE1744B79796E36D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_InteractorGroup_<>c_<_cctor>b__85_1__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Interaction_InteractorGroup_<>c_<_cctor>b__85_2__);
    WindowsPlatform_AsyncInitialize_m8C815C039E321CF40156E2BBCE1744B79796E36D::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
  if ((bVar1 & 1) == 0) {
    uVar5 = WindowsPlatform_getCallbackPointer_m8421B7ACDC6D29A5AD5D4CB63D6EDA5A55D0E7EF_inline
                      (param_1,(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar6 = CAPI_ovr_UnityInitWrapperWindowsAsynchronous_mFE4E8ECABE5B1E75E973B264FA661E7E4D169500
                      (param_2,uVar5,0);
    pRVar7 = (Request_1_tDF5315C7EB8AA620C19730D55185214ADD908497 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_Oculus_Interaction_InteractorGroup_<>c_<_cctor>b__85_2__);
    Request_1__ctor_m4C83EDA6A558C77C3528DF7681A2EC32A92BADE3
              (pRVar7,uVar6,
               *(MethodInfo **)Method_Oculus_Interaction_InteractorGroup_<>c_<_cctor>b__85_1__);
    return pRVar7;
  }
  pIVar2 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
  pEVar3 = (Exception_t *)il2cpp_codegen_object_new(pIVar2);
                    /* try { // try from 02ce84f4 to 02de858f has its CatchHandler @ 02ce84f4
                       catch() { ... } // from try @ 02ce84f4 with catch @ 02ce84f4
                       catch() { ... } // from try @ 02ce8704 with catch @ 02ce84f4
                       catch() { ... } // from try @ 02ce875c with catch @ 02ce84f4
                       catch() { ... } // from try @ 02ce8820 with catch @ 02ce84f4 */
  uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Oculus_Interaction_InteractableTriggerBroadcaster_<>c_<_ctor>b__19_1__);
  UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar3,uVar5,0);
  pMVar4 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_23__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar4);
}


