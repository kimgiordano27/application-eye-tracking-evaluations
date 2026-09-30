/*
FUNCTION_NAME: Interop_GetExceptionForIoErrno_m701F71EF26E8E84C4DB2278B54D7F89BD522C7E7
ENTRY_POINT: 025973a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 220
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Interop_GetExceptionForIoErrno_m701F71EF26E8E84C4DB2278B54D7F89BD522C7E7
          (undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_30 [2];
  
  puVar5 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_Resolve__;
  puVar4 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
  ;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
  ;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>__ctor__
  ;
  local_30[0] = param_1;
  if ((Interop_GetExceptionForIoErrno_m701F71EF26E8E84C4DB2278B54D7F89BD522C7E7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<int>_Remove__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Oculus_Platform_CAPI_StringToNative__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__)
    ;
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_IO_CStreamReader_Read__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Globalization_Calendar_TimeToTicks__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Globalization_Calendar_ToFourDigitYear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Globalization_Calendar_VerifyWritable__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    Interop_GetExceptionForIoErrno_m701F71EF26E8E84C4DB2278B54D7F89BD522C7E7::
    s_Il2CppMethodInitialized = 1;
  }
  iVar7 = ErrorInfo_get_Error_mF34947899E06A00CA22985B73034CE96610FBD2B_inline
                    ((ErrorInfo_t776D0DEFF42C5321EB2548D87ED238CBE55467F8 *)local_30,
                     (MethodInfo *)0x0);
  if (iVar7 < 0x1000c) {
    if (iVar7 < 0x10007) {
      if (iVar7 == 0x10002) goto LAB_02597828;
      if (iVar7 == 0x10006) {
        bVar6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
        if ((bVar6 & 1) == 0) {
          uVar10 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09
                             (*(undefined8 *)
                               Method_Oculus_Platform_CAPI_DictionaryToOVRKeyValuePairs__,param_2);
          uVar8 = ErrorInfo_get_RawErrno_m1B6C0E156EF3B567945C1389B2B111C1A6FEB027(local_30,0);
          uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
          IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(uVar11,uVar10,uVar8,0);
          return uVar11;
        }
        uVar8 = ErrorInfo_get_RawErrno_m1B6C0E156EF3B567945C1389B2B111C1A6FEB027(local_30);
        uVar10 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
        IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A
                  (uVar10,*(undefined8 *)Method_Oculus_Platform_CAPI_IntPtrToByteArray__,uVar8,0);
        return uVar10;
      }
    }
    else {
      if (iVar7 == 0x10008) {
LAB_02597828:
        uVar10 = Interop_GetIOException_m4AEFBBA1E1D56F9C4D69CDD0626267AB8CFC9943(local_30[0]);
        bVar6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
        if ((bVar6 & 1) == 0) {
          uVar11 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09
                             (*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,
                              param_2);
          uVar9 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
          UnauthorizedAccessException__ctor_m37F82265DB9C7D153840E157E860BBF373E9459F
                    (uVar9,uVar11,uVar10,0);
          return uVar9;
        }
        uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
        UnauthorizedAccessException__ctor_m37F82265DB9C7D153840E157E860BBF373E9459F
                  (uVar11,*(undefined8 *)
                           Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                   ,uVar10,0);
        return uVar11;
      }
      if (iVar7 == 0x1000b) {
        uVar10 = il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_UnityEngine_UIElements_ObjectPool<List<VisualElement>>__ctor__);
        OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(uVar10,0);
        return uVar10;
      }
    }
  }
  else if (iVar7 < 0x10017) {
    if (iVar7 == 0x10014) {
      bVar6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
      if ((bVar6 & 1) == 0) {
        uVar10 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09
                           (*(undefined8 *)
                             Method_System_Globalization_CalendarData_GetJapaneseEraNames__,param_2)
        ;
        uVar8 = ErrorInfo_get_RawErrno_m1B6C0E156EF3B567945C1389B2B111C1A6FEB027(local_30,0);
        uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
        IOException__ctor_m9748591C355AD9F4C53B456CD8125C26C61B754A(uVar11,uVar10,uVar8,0);
        return uVar11;
      }
    }
    else if (iVar7 == 0x10016) {
      uVar10 = il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                         );
      ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66
                (uVar10,*(undefined8 *)Method_System_Collections_Generic_HashSet<int>_Remove__,
                 *(undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__,0);
      return uVar10;
    }
  }
  else {
    if (iVar7 == 0x10025) {
      bVar6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
      if ((bVar6 & 1) == 0) {
        uVar10 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09
                           (*(undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__,
                            param_2);
        uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
        PathTooLongException__ctor_m2E98EE527C0503C02F7305BC57045AB86BB202A7(uVar11,uVar10,0);
        return uVar11;
      }
      uVar10 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      PathTooLongException__ctor_m2E98EE527C0503C02F7305BC57045AB86BB202A7
                (uVar10,*(undefined8 *)Method_System_IO_CStreamReader_Read__,0);
      return uVar10;
    }
    if (iVar7 == 0x1002d) {
      if ((param_3 & 1) != 0) {
        bVar6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
        if ((bVar6 & 1) == 0) {
          uVar10 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09
                             (*(undefined8 *)
                               Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__
                              ,param_2);
          uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
          DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235
                    (uVar11,uVar10,0);
          return uVar11;
        }
        uVar10 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
        DirectoryNotFoundException__ctor_mA7F098E81D1D163C09BF5E64A34634290B76F235
                  (uVar10,*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
        return uVar10;
      }
      bVar6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(param_2,0);
      if ((bVar6 & 1) == 0) {
        uVar10 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09
                           (*(undefined8 *)
                             Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                            ,param_2);
        uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
        FileNotFoundException__ctor_mC4247CABF75A7B484A21790CD7F8EFA8AC101677
                  (uVar11,uVar10,param_2,0);
        return uVar11;
      }
      uVar10 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
      FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1
                (uVar10,*(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__
                 ,0);
      return uVar10;
    }
    if (iVar7 == 0x10042) goto LAB_02597828;
  }
  uVar10 = Interop_GetIOException_m4AEFBBA1E1D56F9C4D69CDD0626267AB8CFC9943(local_30[0],0);
  return uVar10;
}


