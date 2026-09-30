/*
FUNCTION_NAME: OVRManager_GetPassthroughCapabilities_m843A43C3748FF0EA151020DFEA978B85B11D645B
ENTRY_POINT: 02d8e3c8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_7
*/


undefined8
OVRManager_GetPassthroughCapabilities_m843A43C3748FF0EA151020DFEA978B85B11D645B(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  void *pvVar7;
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  local_18 = param_1;
  if ((OVRManager_GetPassthroughCapabilities_m843A43C3748FF0EA151020DFEA978B85B11D645B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_3__
              );
    OVRManager_GetPassthroughCapabilities_m843A43C3748FF0EA151020DFEA978B85B11D645B::
    s_Il2CppMethodInitialized = 1;
  }
  local_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(long *)(lVar6 + 0x1d8) == 0) {
    il2cpp_codegen_initobj(&local_28,0xc);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    uVar5 = OVRPlugin_GetPassthroughCapabilities_m50CDB20C00D569A6B8DDDE2C59BDF50935827158
                      (&local_28);
    bVar4 = OVRPlugin_IsSuccess_mEE88CFE2FC1D7DF1AE2BE4002D086A28D5244D68(uVar5,0);
    if ((bVar4 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      uStack_24 = OVRPlugin_GetPassthroughCapabilityFlags_m17CE0E3D6F476E63ECE69CC29FA167DE14C6DD3B
                            (0);
      local_20 = 0x40;
    }
    uVar5 = local_20;
    uVar3 = uStack_24;
    pvVar7 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_3__
                               );
    PassthroughCapabilities__ctor_m968699248C8F4D30B39B64036A32FA4997807118
              (pvVar7,(uVar3 & 1) == 1,(uVar3 & 2) == 2,uVar5,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(void **)(lVar6 + 0x1d8) = pvVar7;
    lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x1d8),pvVar7);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(undefined8 *)(lVar6 + 0x1d8);
}


