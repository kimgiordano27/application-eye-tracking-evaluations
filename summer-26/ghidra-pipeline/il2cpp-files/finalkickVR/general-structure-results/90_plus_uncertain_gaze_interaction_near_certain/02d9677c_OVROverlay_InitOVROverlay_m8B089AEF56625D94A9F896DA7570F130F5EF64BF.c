/*
FUNCTION_NAME: OVROverlay_InitOVROverlay_m8B089AEF56625D94A9F896DA7570F130F5EF64BF
ENTRY_POINT: 02d9677c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3
*/


void OVROverlay_InitOVROverlay_m8B089AEF56625D94A9F896DA7570F130F5EF64BF(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVROverlay_InitOVROverlay_m8B089AEF56625D94A9F896DA7570F130F5EF64BF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
              );
    OVROverlay_InitOVROverlay_m8B089AEF56625D94A9F896DA7570F130F5EF64BF::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar2 & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(int *)(lVar4 + 0x100) == 2) {
    pvVar5 = (void *)OpenVR_get_Overlay_m5EC60FDA4DA7BEC8A260FF9BA611F437E0953672(0,0);
    if (pvVar5 == (void *)0x0) {
      Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,0,0);
      return;
    }
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__0__
              );
    uVar6 = OVROverlay_get_OpenVROverlayKey_mA6EFD0D14077D0B125F7EAC089FB07DA6B461C27();
    pvVar7 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(param_1,0);
    NullCheck(pvVar7);
    uVar8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(pvVar7,0);
    uVar6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(uVar6,uVar8,0);
    pvVar7 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(param_1,0);
    NullCheck(pvVar7);
    uVar8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(pvVar7,0);
    NullCheck(pvVar5);
    iVar3 = CVROverlay_CreateOverlay_m971CF579F222B3D7CB64C28AB6CF543883BD49C9
                      (pvVar5,uVar6,uVar8,param_1 + 0x1d8,0);
    if (iVar3 != 0) {
      Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,0,0);
      return;
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(lVar4 + 0x100);
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  return;
}


