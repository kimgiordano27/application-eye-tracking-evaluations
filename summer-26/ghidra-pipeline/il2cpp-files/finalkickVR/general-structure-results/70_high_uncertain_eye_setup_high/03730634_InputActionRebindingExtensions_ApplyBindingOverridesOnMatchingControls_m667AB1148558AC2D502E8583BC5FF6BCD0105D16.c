/*
FUNCTION_NAME: InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls_m667AB1148558AC2D502E8583BC5FF6BCD0105D16
ENTRY_POINT: 03730634
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls_m667AB1148558AC2D502E8583BC5FF6BCD0105D16
          (void *param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;
  undefined8 uVar6;
  int local_4c;
  undefined4 local_48;
  undefined1 local_40 [16];
  undefined8 local_28;
  long local_20;
  void *local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if ((InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls_m667AB1148558AC2D502E8583BC5FF6BCD0105D16
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14887);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14888);
    InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls_m667AB1148558AC2D502E8583BC5FF6BCD0105D16
    ::s_Il2CppMethodInitialized = 1;
  }
  pvVar1 = local_18;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (local_18 != (void *)0x0) {
    if (local_20 != 0) {
      NullCheck(local_18);
      local_40 = InputActionMap_get_actions_mC8FEA8D1BC6F750FBE202105EF0E7F41C166DF1E(pvVar1,0);
      iVar2 = ReadOnlyArray_1_get_Count_mA742A0394D2FF18202FA60460D4053977BA6EC4F_inline
                        ((ReadOnlyArray_1_t87BBFDC4C52C189E583DEC4E87E663DF435F7915 *)local_40,
                         *(MethodInfo **)StringLiteral_14887);
      local_48 = 0;
      local_4c = 0;
      while( true ) {
        if (iVar2 <= local_4c) break;
        uVar6 = ReadOnlyArray_1_get_Item_mF91AFAC9F8866849A41306E7F7897A20BE538464
                          ((ReadOnlyArray_1_t87BBFDC4C52C189E583DEC4E87E663DF435F7915 *)local_40,
                           local_4c,*(MethodInfo **)StringLiteral_14888);
        local_48 = InputActionRebindingExtensions_ApplyBindingOverridesOnMatchingControls_mCBFD0B0B1CBE64B5D854E451496524269D694391
                             (uVar6,local_20,0);
        local_4c = il2cpp_codegen_add<int,int>(local_4c,1);
      }
      return local_48;
    }
    pIVar3 = (Il2CppClass *)
             il2cpp_codegen_initialize_runtime_metadata_inline
                       ((ulong *)
                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                       );
    pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
    uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                      ((ulong *)Method_Unity_Collections_NativeSlice<Vertex>__ctor__);
    ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar4,uVar6,0);
    pMVar5 = (MethodInfo *)
             il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14970);
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  pIVar3 = (Il2CppClass *)
           il2cpp_codegen_initialize_runtime_metadata_inline
                     ((ulong *)
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                     );
  pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
  uVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                    ((ulong *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(pEVar4,uVar6,0);
  pMVar5 = (MethodInfo *)
           il2cpp_codegen_initialize_runtime_metadata_inline((ulong *)StringLiteral_14970);
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar4,pMVar5);
}


