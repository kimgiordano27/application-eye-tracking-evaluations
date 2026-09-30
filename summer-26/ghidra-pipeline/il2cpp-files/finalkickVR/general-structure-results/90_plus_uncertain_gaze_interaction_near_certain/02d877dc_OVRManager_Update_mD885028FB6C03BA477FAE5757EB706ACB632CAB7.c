/*
FUNCTION_NAME: OVRManager_Update_mD885028FB6C03BA477FAE5757EB706ACB632CAB7
ENTRY_POINT: 02d877dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRManager_Update_mD885028FB6C03BA477FAE5757EB706ACB632CAB7
               (undefined1 param_1 [16],undefined4 param_2,float param_3,
               OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *param_4,undefined8 param_5)

{
  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 OVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *this;
  String_t *pSVar11;
  undefined8 uVar12;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 local_358;
  ExceptionSupportStack<Il2CppObject*,1> aEStack_d8 [20];
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  long local_50;
  void *local_48;
  void *local_40;
  byte local_31;
  undefined8 local_30;
  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *local_28;
  
  puVar4 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar3 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  uStack_4bc = param_2;
  local_30 = param_5;
  local_28 = param_4;
  if ((OVRManager_Update_mD885028FB6C03BA477FAE5757EB706ACB632CAB7::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_GetEnumerator__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__3__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__3_4__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateMaterialValidationMode>b__2_4__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__2__
              );
    OVRManager_Update_mD885028FB6C03BA477FAE5757EB706ACB632CAB7::s_Il2CppMethodInitialized = 1;
    uStack_4bc = param_2;
  }
  local_31 = 0;
  local_40 = (void *)0x0;
  local_48 = (void *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c4 = 0;
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::ExceptionSupportStack(aEStack_d8);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(byte *)(lVar9 + 0x180) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8();
    local_50 = OVRManager_GetCurrentDisplaySubsystemDescriptor_m774D6D4F85D85E72BCF228C576EAAF55E3CD978E
                         (0);
    if (lVar9 == 0) {
      return;
    }
    if (local_50 == 0) {
      return;
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    bVar5 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
    if ((bVar5 & 1) == 0) {
      return;
    }
    OVRManager_InitOVRManager_m70F462CB3521560EDE92D4C54EF0FAD199386053(local_28,0);
  }
  OVRManager_SetCurrentXRDevice_m28B26EC00E7F673A3AF5DEE7D732EDFA987E427F(local_28);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  bVar5 = OVRPlugin_get_shouldQuit_mBA5C91B74C034F11AB43669726D8DC8D775668E5(0);
  if ((bVar5 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__1__
              );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    uVar12 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                       ((MethodInfo *)0x0);
    OVRManager_StaticShutdownMixedRealityCapture_mA2C3B9797235B17834EA372AB99D1024EB81F0F7(uVar12,0)
    ;
    OVRManager_ShutdownInsightPassthrough_mBBB77D5EB2CE95920737C34F1A0A5E6C14A6E576(0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(0);
  }
  if (((byte)local_28[0x38] & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    bVar5 = OVRPlugin_GetEyeLayerRecommendedResolution_m33612853B67FCDC7A6D74C70003E86DD643935D9
                      (&local_58,0);
    if ((bVar5 & 1) != 0) {
      local_358 = (undefined4)local_58;
      iVar7 = XRSettings_get_eyeTextureWidth_m3B18AF3F3382398E2A818B2B01AA1FE90FEB3AAF();
      fVar14 = (float)XRSettings_get_renderViewportScale_mB35A32F5FE6B2EEE0CEF95ADFC04F171B6E5F5D1
                                (0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_GetEnumerator__
                );
      fVar14 = (float)il2cpp_codegen_multiply<float,float>((float)iVar7,fVar14);
      iVar7 = il2cpp_codegen_cast_double_to_int<int>((double)fVar14);
      uVar15 = il2cpp_codegen_subtract<int,int>(iVar7,0x20);
      uVar15 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(local_358,uVar15,0);
      local_58._0_4_ = uVar15;
      iVar7 = XRSettings_get_eyeTextureWidth_m3B18AF3F3382398E2A818B2B01AA1FE90FEB3AAF(0);
      fVar14 = (float)XRSettings_get_renderViewportScale_mB35A32F5FE6B2EEE0CEF95ADFC04F171B6E5F5D1
                                (0);
      fVar14 = (float)il2cpp_codegen_multiply<float,float>((float)iVar7,fVar14);
      iVar7 = il2cpp_codegen_cast_double_to_int<int>((double)fVar14);
      uVar6 = il2cpp_codegen_add<int,int>(iVar7,0x20);
      iVar7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(uVar15,uVar6,0);
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      iVar8 = XRSettings_get_eyeTextureWidth_m3B18AF3F3382398E2A818B2B01AA1FE90FEB3AAF(0);
      param_3 = *(float *)(local_28 + 0x40);
      uVar15 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA
                         ((float)iVar7 / (float)iVar8,*(float *)(local_28 + 0x3c) / param_3,0);
      uStack_4bc = 0x3f800000;
      uVar15 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(uVar15,0);
      XRSettings_set_renderViewportScale_m96E308EEAE4B92F92ACD2866E3958070FA3E5313(uVar15,0);
    }
  }
  if (((byte)local_28[0x110] & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    bVar5 = OVRPlugin_get_shouldRecenter_m82A62121BEF853ED4A8BF5AFB87DCFB1F7B1F5AB(0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      pvVar10 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                                  ((MethodInfo *)0x0);
      NullCheck(pvVar10);
      OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(pvVar10,0);
    }
  }
  iVar7 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0(local_28,0);
  if (iVar7 != *(int *)(local_28 + 0x108)) {
    OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo__Invoke
              (local_28,*(undefined4 *)(local_28 + 0x108),0);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  pvVar10 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                              ((MethodInfo *)0x0);
  OVar1 = local_28[0x10c];
  NullCheck(pvVar10);
  OVRTracker_set_isEnabled_m34B6A72018F2C6362EF2CD79DEF6CB52C746E79B(pvVar10,(byte)OVar1 & 1,0);
  OVar1 = local_28[0x10d];
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  OVRPlugin_set_rotation_m920187095C1DC0E97287249A8AA27D0CB5E80A7C((byte)OVar1 & 1,0);
  OVRPlugin_set_useIPDInPositionTracking_m8C4F941E9A7273575ACC10F250E07665DFB5D6FF
            ((byte)local_28[0x10e] & 1,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__);
  bVar5 = OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D(0);
  OVRManager_set_isHmdPresent_m4879663A8AA591EE662CEF9F18686D6B89789B7E(bVar5 & 1,0);
  if (((byte)local_28[0x2c] & 1) != 0) {
    iVar7 = QualitySettings_get_antiAliasing_m71FB82E1C9D9923D313430621C898008D967F516();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    pvVar10 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                                ((MethodInfo *)0x0);
    NullCheck(pvVar10);
    iVar8 = OVRDisplay_get_recommendedMSAALevel_mF7498063717D350637404B308FD185AC7F753FEA(pvVar10,0)
    ;
    if (iVar7 != iVar8) {
      this = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
             SZArrayNew(*(Il2CppClass **)
                         Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                        ,5);
      NullCheck(this);
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (this,0,*(String_t **)
                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__0__
                );
      local_5c = QualitySettings_get_antiAliasing_m71FB82E1C9D9923D313430621C898008D967F516();
      pSVar11 = (String_t *)Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(&local_5c,0);
      NullCheck(this);
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,1,pSVar11);
      NullCheck(this);
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (this,2,*(String_t **)
                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__2__
                );
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      pvVar10 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                                  ((MethodInfo *)0x0);
      NullCheck(pvVar10);
      local_5c = OVRDisplay_get_recommendedMSAALevel_mF7498063717D350637404B308FD185AC7F753FEA
                           (pvVar10,0);
      pSVar11 = (String_t *)Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(&local_5c,0);
      NullCheck(this);
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt(this,3,pSVar11);
      NullCheck(this);
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (this,4,*(String_t **)
                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__0__
                );
      uVar12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(this,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(uVar12,0);
      pvVar10 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                                  ((MethodInfo *)0x0);
      NullCheck(pvVar10);
      uVar15 = OVRDisplay_get_recommendedMSAALevel_mF7498063717D350637404B308FD185AC7F753FEA
                         (pvVar10,0);
      QualitySettings_set_antiAliasing_mBC4220AF5820137CFEBB38155D4CCD12822E2C7E(uVar15,0);
    }
  }
  bVar5 = OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218(local_28,0);
  if ((bVar5 & 1) != ((byte)local_28[0x2d] & 1)) {
    OVRManager_set_monoscopic_m1EAAB3C2A3CDB7D72B1700D635AAA6C2AE41893D
              (local_28,(byte)local_28[0x2d] & 1,0);
  }
  uVar15 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                     (local_28,(MethodInfo *)0x0);
  local_4a0 = (undefined4)*(undefined8 *)(local_28 + 0x4c);
  uStack_49c = (undefined4)((ulong)*(undefined8 *)(local_28 + 0x4c) >> 0x20);
  bVar5 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline
                    (uVar15,uStack_4bc,param_3,local_4a0,uStack_49c,*(undefined4 *)(local_28 + 0x54)
                     ,0);
  if ((bVar5 & 1) != 0) {
    param_3 = *(float *)(local_28 + 0x54);
    local_4c0 = (undefined4)*(undefined8 *)(local_28 + 0x4c);
    uStack_4bc = (undefined4)((ulong)*(undefined8 *)(local_28 + 0x4c) >> 0x20);
    OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC
              (local_4c0,local_28,0);
  }
  uVar15 = OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline
                     (local_28,(MethodInfo *)0x0);
  local_508 = (undefined4)*(undefined8 *)(local_28 + 0x58);
  uStack_504 = (undefined4)((ulong)*(undefined8 *)(local_28 + 0x58) >> 0x20);
  bVar5 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline
                    (uVar15,uStack_4bc,param_3,local_508,uStack_504,*(undefined4 *)(local_28 + 0x60)
                     ,0);
  if ((bVar5 & 1) != 0) {
    local_528 = (undefined4)*(undefined8 *)(local_28 + 0x58);
    uStack_524 = (undefined4)((ulong)*(undefined8 *)(local_28 + 0x58) >> 0x20);
    OVRManager_set_headPoseRelativeOffsetTranslation_m8B70891033EA3A0A28D9C1986E7B5D58016CCBA6
              (local_528,uStack_524,*(undefined4 *)(local_28 + 0x60),local_28,0);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(byte *)(lVar9 + 0xea) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar5 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
    if ((bVar5 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x38) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x38);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(byte *)(lVar9 + 0xea) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar5 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__0__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x30) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x30);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  bVar5 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445();
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(byte *)(lVar9 + 0xea) = bVar5 & 1;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  bVar5 = OVRPlugin_get_userPresent_mDC6C3FFE8897342A888E529C7BEAF368413C8151(0);
  OVR_OpenVR_IVRTrackedCamera__GetCameraErrorNameFromEnum__BeginInvoke(local_28,bVar5 & 1,0);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if (((*(byte *)(lVar9 + 0x146) & 1) != 0) &&
     (bVar5 = OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D(local_28,0),
     (bVar5 & 1) == 0)) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__2__
               ,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if (*(long *)(lVar9 + 0x48) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x48);
      NullCheck(pAVar13);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if (((*(byte *)(lVar9 + 0x146) & 1) == 0) &&
     (bVar5 = OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D(local_28,0),
     (bVar5 & 1) != 0)) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
               ,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if (*(long *)(lVar9 + 0x40) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x40);
      NullCheck(pAVar13);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
    }
  }
  bVar5 = OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D(local_28);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(byte *)(lVar9 + 0x146) = bVar5 & 1;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  bVar5 = OVRPlugin_get_hasVrFocus_m3BE22CA34415F44FD722A0D2547388F0C943900E(0);
  OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321(bVar5 & 1,0);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(byte *)(lVar9 + 0xed) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar5 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90(0);
    if ((bVar5 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__2__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x58) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x58);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(byte *)(lVar9 + 0xed) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    bVar5 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90(0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x50) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x50);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  bVar5 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90();
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(byte *)(lVar9 + 0xed) = bVar5 & 1;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  local_31 = OVRPlugin_get_hasInputFocus_m26E031618D6BF901538C11D3A4FF8F82208BEEDD(0);
  local_31 = local_31 & 1;
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if (((*(byte *)(lVar9 + 0xee) & 1) != 0) && ((local_31 & 1) == 0)) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__3_4__
               ,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if (*(long *)(lVar9 + 0x68) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x68);
      NullCheck(pAVar13);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if (((*(byte *)(lVar9 + 0xee) & 1) == 0 & local_31 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateMaterialValidationMode>b__2_4__
               ,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    if (*(long *)(lVar9 + 0x60) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x60);
      NullCheck(pAVar13);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
    }
  }
  bVar5 = local_31 & 1;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(byte *)(lVar9 + 0xee) = bVar5;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  local_40 = (void *)OVRPlugin_get_audioOutId_m5D5085CAAC63B5F1C4FB8E2160278EBC7BC7CCDA(0);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  pvVar10 = local_40;
  if ((*(byte *)(lVar9 + 0x147) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(void **)(lVar9 + 0x150) = pvVar10;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x150),pvVar10);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(undefined1 *)(lVar9 + 0x147) = 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (pvVar10,*(undefined8 *)(lVar9 + 0x150),0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x70) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x70);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
      pvVar10 = local_40;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(void **)(lVar9 + 0x150) = pvVar10;
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x150),pvVar10);
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  local_48 = (void *)OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  pvVar10 = local_48;
  if ((*(byte *)(lVar9 + 0x148) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(void **)(lVar9 + 0x158) = pvVar10;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x158),pvVar10);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    *(undefined1 *)(lVar9 + 0x148) = 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (pvVar10,*(undefined8 *)(lVar9 + 0x158),0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x78) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x78);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
      pvVar10 = local_48;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      *(void **)(lVar9 + 0x158) = pvVar10;
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x158),pvVar10);
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(byte *)(lVar9 + 0x160) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    pvVar10 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                                ((MethodInfo *)0x0);
    NullCheck(pvVar10);
    bVar5 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar10,0);
    if ((bVar5 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x88) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x88);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  if ((*(byte *)(lVar9 + 0x160) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    pvVar10 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                                ((MethodInfo *)0x0);
    NullCheck(pvVar10);
    bVar5 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar10,0);
    if ((bVar5 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      if (*(long *)(lVar9 + 0x80) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pAVar13 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar9 + 0x80);
        NullCheck(pAVar13);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar13,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  pvVar10 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                              ((MethodInfo *)0x0);
  NullCheck(pvVar10);
  bVar5 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar10,0);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  *(byte *)(lVar9 + 0x160) = bVar5 & 1;
  pvVar10 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                              ((MethodInfo *)0x0);
  NullCheck(pvVar10);
  OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6(pvVar10,0);
  if (*(int *)(local_28 + 0x114) != *(int *)(local_28 + 0x118)) {
    *(undefined4 *)(local_28 + 0x114) = *(undefined4 *)(local_28 + 0x118);
    local_c4 = *(int *)(local_28 + 0x114);
    if (local_c4 == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(0);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (local_c4 == 1) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (local_c4 == 2) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (1,0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076();
  OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4(local_28,0);
  uVar12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_28,0);
  uVar15 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0(local_28,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (local_28,uVar12,uVar15,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            ((byte)local_28[0x101] & 1,0);
  return;
}


