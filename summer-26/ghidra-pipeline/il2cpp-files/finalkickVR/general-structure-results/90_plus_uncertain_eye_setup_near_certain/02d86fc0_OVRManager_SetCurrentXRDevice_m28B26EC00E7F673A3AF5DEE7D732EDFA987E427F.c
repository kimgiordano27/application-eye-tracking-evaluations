/*
FUNCTION_NAME: OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F
ENTRY_POINT: 02d86fc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_7
*/


void OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F(void)

{
  undefined *puVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pvVar3 = (void *)OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
                             (0);
  pvVar4 = (void *)OVRManager_GetCurrentDisplaySubsystemDescriptor_m774D6D4F85D85E72BCF228C576EAAF55E3CD978E
                             (0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar2 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  if ((bVar2 & 1) == 0) {
    if ((pvVar3 != (void *)0x0) && (pvVar4 != (void *)0x0)) {
      NullCheck(pvVar3);
      bVar2 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(pvVar3,0);
      if ((bVar2 & 1) != 0) {
        NullCheck(pvVar4);
        uVar5 = IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15
                          (pvVar4);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        bVar2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1
                          (uVar5,*(undefined8 *)(lVar6 + 0xf8),0);
        if ((bVar2 & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          *(undefined4 *)(lVar6 + 0x100) = 0;
          return;
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        *(undefined4 *)(lVar6 + 0x100) = 2;
        return;
      }
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined4 *)(lVar6 + 0x100) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined4 *)(lVar6 + 0x100) = 1;
  }
  return;
}


