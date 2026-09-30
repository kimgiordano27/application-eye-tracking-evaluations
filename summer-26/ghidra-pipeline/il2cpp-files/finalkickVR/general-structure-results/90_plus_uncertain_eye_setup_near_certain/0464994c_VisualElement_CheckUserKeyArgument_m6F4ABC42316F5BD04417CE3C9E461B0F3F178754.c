/*
FUNCTION_NAME: VisualElement_CheckUserKeyArgument_m6F4ABC42316F5BD04417CE3C9E461B0F3F178754
ENTRY_POINT: 0464994c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void VisualElement_CheckUserKeyArgument_m6F4ABC42316F5BD04417CE3C9E461B0F3F178754
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  Il2CppClass *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Exception_t *pEVar6;
  MethodInfo *pMVar7;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_55;
  undefined4 local_54;
  undefined4 local_50;
  byte local_49;
  undefined4 local_48;
  undefined4 local_44;
  Exception_t *local_40;
  byte local_31;
  undefined4 local_30;
  byte local_29;
  undefined4 local_28;
  byte local_22;
  byte local_21;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_20 = param_2;
  local_14 = param_1;
  if ((VisualElement_CheckUserKeyArgument_m6F4ABC42316F5BD04417CE3C9E461B0F3F178754::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement_CheckUserKeyArgument_m6F4ABC42316F5BD04417CE3C9E461B0F3F178754::
    s_Il2CppMethodInitialized = 1;
  }
  local_21 = 0;
  local_22 = 0;
  local_28 = local_14;
  local_30 = local_14;
  local_31 = PropertyName_IsNullOrEmpty_m80390EB235EF6A983214067BF86BCD6DBA2D1AEB(local_14,0);
  local_31 = local_31 & 1;
  local_29 = local_31;
  local_21 = local_31;
  if (local_31 == 0) {
    local_44 = local_14;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_54 = *(undefined4 *)(lVar2 + 0x10);
    local_50 = local_44;
    local_48 = local_54;
    local_55 = PropertyName_op_Equality_m86CFB3121BF5927D1D4D425A8272980CAAB73DAC
                         (local_44,local_54,0);
    local_55 = local_55 & 1;
    if (local_55 == 0) {
      return;
    }
    local_49 = local_55;
    local_22 = local_55;
    pIVar3 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
    il2cpp_codegen_runtime_class_init_inline(pIVar3);
    pIVar3 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)puVar1);
    lVar2 = il2cpp_codegen_static_fields_for(pIVar3);
    local_60 = *(undefined4 *)(lVar2 + 0x10);
    local_5c = local_60;
    pIVar3 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        PTR_PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2_il2cpp_TypeInfo_var_048d4d68
                       );
    uVar4 = Box(pIVar3,&local_60);
    uVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)PTR__stringLiteralC38F4BCDBFEC85D203DA10459D540E6ACF47C345_048df300)
    ;
    uVar4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(uVar5,uVar4);
    pIVar3 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Keys__
                       );
    pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
    InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(pEVar6,uVar4,0);
    pMVar7 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        PTR_VisualElement_CheckUserKeyArgument_m6F4ABC42316F5BD04417CE3C9E461B0F3F178754_RuntimeMethod_var_048df2f8
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar6,pMVar7);
  }
  pIVar3 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar6 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
  local_40 = pEVar6;
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_get_Item__
                    );
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar6,uVar4,0);
  pEVar6 = local_40;
  pMVar7 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      PTR_VisualElement_CheckUserKeyArgument_m6F4ABC42316F5BD04417CE3C9E461B0F3F178754_RuntimeMethod_var_048df2f8
                     );
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar6,pMVar7);
}


