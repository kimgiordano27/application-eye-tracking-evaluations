/*
FUNCTION_NAME: OVRMixedReality_Update_m3D99309363838A6B8BC1BDA6F45ED303760EBD10
ENTRY_POINT: 02d8dbb4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRMixedReality_Update_m3D99309363838A6B8BC1BDA6F45ED303760EBD10
               (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *param_1,
               Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *param_2,Il2CppObject *param_3,
               int param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  byte bVar6;
  int iVar7;
  Il2CppObject *pIVar8;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *pCVar9;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  Il2CppFakeBox<int> aIStack_e8 [28];
  int local_cc;
  Il2CppObject *local_c8;
  void *local_c0;
  Il2CppObject *local_b8;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *local_b0;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_a8;
  long local_a0;
  int local_94;
  Il2CppObject *local_90;
  Il2CppObject *local_88;
  int local_7c;
  Il2CppObject *local_78;
  int local_6c;
  Il2CppObject *local_68;
  long local_60;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  int local_4c;
  undefined8 local_48;
  int local_3c;
  Il2CppObject *local_38;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *local_30;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_28;
  
  puVar4 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin_IsSame__
  ;
  puVar3 = Method_System_IO_Stream_NullStream_BeginWrite__;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_48 = param_5;
  local_3c = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRMixedReality_Update_m3D99309363838A6B8BC1BDA6F45ED303760EBD10::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass9_0_<CreateMetallicMinValue>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass9_0_<CreateMetallicMinValue>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateAdditionalWireframeShaderViews>b__2_4__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_2__
              );
    OVRMixedReality_Update_m3D99309363838A6B8BC1BDA6F45ED303760EBD10::s_Il2CppMethodInitialized = 1;
  }
  local_4c = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_4d = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  local_4d = local_4d & 1;
  if (local_4d == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass9_0_<CreateMetallicMinValue>b__1__
               ,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_4e = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
    local_4e = local_4e & 1;
    if (local_4e == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_4f = OVRPlugin_InitializeMixedReality_mF600771E1D581C7DEAEE9EA75A9741E7B95888C5();
      local_4f = local_4f & 1;
      local_50 = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
      local_50 = local_50 & 1;
      if (local_50 == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_2__
                   ,0);
        return;
      }
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateAdditionalWireframeShaderViews>b__2_4__
                 ,0);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_51 = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
    local_51 = local_51 & 1;
    if (local_51 != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      local_52 = OVRPlugin_UpdateExternalCamera_m094289B0059CB8C32F17C7E6A5C4418FF0812FB6();
      local_52 = local_52 & 1;
      local_53 = Media_UseMrcDebugCamera_m9EC535D2E51E13AA632663A62F3BC98FA2DE7AE4(0);
      local_53 = local_53 & 1;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      bVar6 = local_53;
      pbVar11 = (byte *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      *pbVar11 = bVar6 & 1;
      lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      local_60 = *(long *)(lVar12 + 0x38);
      if (local_60 != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        local_68 = *(Il2CppObject **)(lVar12 + 0x38);
        NullCheck(local_68);
        local_6c = VirtualFuncInvoker0<int>::Invoke(4,local_68);
        local_78 = local_38;
        NullCheck(local_38);
        local_7c = InterfaceFuncInvoker0<int>::Invoke(8,*(Il2CppClass **)puVar3,local_78);
        if (local_6c != local_7c) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          local_88 = *(Il2CppObject **)(lVar12 + 0x38);
          NullCheck(local_88);
          VirtualActionInvoker0::Invoke(6,local_88);
          lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          *(undefined8 *)(lVar12 + 0x38) = 0;
          lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          Il2CppCodeGenWriteBarrier((void **)(lVar12 + 0x38),(void *)0x0);
        }
      }
      local_90 = local_38;
      NullCheck(local_38);
      local_94 = InterfaceFuncInvoker0<int>::Invoke(8,*(Il2CppClass **)puVar3,local_90);
      if (local_94 == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        local_a0 = *(long *)(lVar12 + 0x38);
        if (local_a0 == 0) {
          local_a8 = local_28;
          local_b0 = local_30;
          local_b8 = local_38;
          local_c0 = (void *)il2cpp_codegen_object_new
                                       (*(Il2CppClass **)
                                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass9_0_<CreateMetallicMinValue>b__0__
                                       );
          OVRExternalComposition__ctor_mDB4C8F8BDDDDA2DEC0940959B9D179CABE3ACA30
                    (local_c0,local_a8,local_b0,local_b8,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
          pvVar5 = local_c0;
          lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          *(void **)(lVar12 + 0x38) = pvVar5;
          lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
          Il2CppCodeGenWriteBarrier((void **)(lVar12 + 0x38),local_c0);
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
        lVar12 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
        pGVar10 = local_28;
        pCVar9 = local_30;
        pIVar8 = local_38;
        iVar7 = local_3c;
        pIVar14 = *(Il2CppObject **)(lVar12 + 0x38);
        NullCheck(pIVar14);
        VirtualActionInvoker4<GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*,Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*,Il2CppObject*,int>
        ::Invoke(5,pIVar14,pGVar10,pCVar9,pIVar8,iVar7);
      }
      else {
        local_c8 = local_38;
        NullCheck(local_38);
        local_cc = InterfaceFuncInvoker0<int>::Invoke(8,*(Il2CppClass **)puVar3,local_c8);
        local_4c = local_cc;
        Il2CppFakeBox<int>::Il2CppFakeBox
                  (aIStack_e8,
                   *(Il2CppClass **)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__2__
                   ,&local_4c);
        uVar13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_e8);
        uVar13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                           (*(undefined8 *)
                             Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__0__
                            ,uVar13,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar13,0);
      }
    }
  }
  return;
}


