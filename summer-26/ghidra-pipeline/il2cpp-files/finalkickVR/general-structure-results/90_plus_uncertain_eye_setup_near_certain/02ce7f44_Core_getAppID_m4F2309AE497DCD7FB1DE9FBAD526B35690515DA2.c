/*
FUNCTION_NAME: Core_getAppID_m4F2309AE497DCD7FB1DE9FBAD526B35690515DA2
ENTRY_POINT: 02ce7f44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


Il2CppObject * Core_getAppID_m4F2309AE497DCD7FB1DE9FBAD526B35690515DA2(Il2CppObject *param_1)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Exception_t *pEVar4;
  undefined8 uVar5;
  MethodInfo *pMVar6;
  Il2CppArray *this;
  undefined8 local_18;
  
  if ((Core_getAppID_m4F2309AE497DCD7FB1DE9FBAD526B35690515DA2::s_Il2CppMethodInitialized & 1) == 0)
  {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Vector3>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_18__);
    Core_getAppID_m4F2309AE497DCD7FB1DE9FBAD526B35690515DA2::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Vector3>_get_Item__);
  pIVar2 = (Il2CppObject *)Core_GetAppIDFromConfig_m2226F481C623F9F2512EA67ACFE7E4FBEC00E03E(0);
  bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_1,0);
  if ((bVar1 & 1) == 0) {
    bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(pIVar2,0);
    local_18 = param_1;
    if ((bVar1 & 1) == 0) {
      this = (Il2CppArray *)
             SZArrayNew(*(Il2CppClass **)
                         Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                        ,2);
      NullCheck(this);
      ArrayElementTypeCheck(this,pIVar2);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar2);
      NullCheck(this);
      ArrayElementTypeCheck(this,param_1);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,1,param_1);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC
                (*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_18__,this,0);
      local_18 = param_1;
    }
  }
  else {
    bVar1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(pIVar2,0);
    local_18 = pIVar2;
    if ((bVar1 & 1) != 0) {
      pIVar3 = (Il2CppClass *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)Method_System_Collections_Generic_List<Vector3>_set_Capacity__);
      pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
      uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                        ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_19__);
      UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(pEVar4,uVar5,0);
      pMVar6 = (MethodInfo *)
               il2cpp_codegen_initialize_runtime_metadata_inline
                         ((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_2__);
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar4,pMVar6);
    }
  }
  return local_18;
}


