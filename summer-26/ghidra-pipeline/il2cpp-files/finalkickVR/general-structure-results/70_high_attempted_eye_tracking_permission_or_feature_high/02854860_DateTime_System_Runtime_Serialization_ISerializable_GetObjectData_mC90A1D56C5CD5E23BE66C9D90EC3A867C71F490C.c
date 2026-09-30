/*
FUNCTION_NAME: DateTime_System_Runtime_Serialization_ISerializable_GetObjectData_mC90A1D56C5CD5E23BE66C9D90EC3A867C71F490C
ENTRY_POINT: 02854860
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void DateTime_System_Runtime_Serialization_ISerializable_GetObjectData_mC90A1D56C5CD5E23BE66C9D90EC3A867C71F490C
               (undefined8 *param_1,void *param_2)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;
  undefined8 uVar4;
  
  if ((DateTime_System_Runtime_Serialization_ISerializable_GetObjectData_mC90A1D56C5CD5E23BE66C9D90EC3A867C71F490C
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRObjectPool_List<OVRAnchor>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVREyeGaze_OnPermissionGranted__);
    DateTime_System_Runtime_Serialization_ISerializable_GetObjectData_mC90A1D56C5CD5E23BE66C9D90EC3A867C71F490C
    ::s_Il2CppMethodInitialized = 1;
  }
  if (param_2 != (void *)0x0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>__ctor__);
    uVar4 = DateTime_get_InternalTicks_m80645EA2AFA7D75594415703E0396FFA2E2D950D(param_1);
    NullCheck(param_2);
    SerializationInfo_AddValue_m216A4FEE287DCA4612C30DB41571962A584D6324
              (param_2,*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__,uVar4,0);
    uVar4 = *param_1;
    NullCheck(param_2);
    SerializationInfo_AddValue_mA4580664C8C0D978F65E405D235E3BAF945B25AF
              (param_2,*(undefined8 *)Method_OVRObjectPool_List<OVRAnchor>__,uVar4,0);
    return;
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_System_Collections_ObjectModel_ReadOnlyCollection<Exception>_get_Item__)
  ;
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar2,uVar4,0);
  pMVar3 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)Method_OVRPlatformMenu_RetreatOneLevel__);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,pMVar3);
}


