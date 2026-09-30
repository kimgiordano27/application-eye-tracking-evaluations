/*
FUNCTION_NAME: OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533
ENTRY_POINT: 02d8629c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 227
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_14;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_6
*/


void OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533
               (Il2CppObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  undefined4 local_150;
  undefined4 local_14c;
  Il2CppArray *local_148;
  Il2CppArray *local_140;
  byte local_131;
  Il2CppObject *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  ulong uStack_118;
  undefined4 local_110;
  Il2CppArray *local_108;
  Il2CppArray *local_100;
  byte local_f5;
  int local_f4;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined4 local_e0;
  int local_d4;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined4 local_c0;
  undefined8 local_b4;
  ulong uStack_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  ulong uStack_98;
  undefined4 local_90;
  byte local_82;
  byte local_81;
  Il2CppObject *local_80;
  undefined8 local_78;
  void *local_70;
  byte local_62;
  byte local_61;
  undefined8 local_60;
  undefined1 local_52;
  byte local_51;
  undefined8 local_50;
  ulong uStack_48;
  undefined4 local_40;
  undefined8 local_30;
  Il2CppObject *local_28;
  
  puVar5 = Method_System_IO_Stream_NullStream_BeginWrite__;
  puVar4 = Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<SelectorMatchRecord>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_activarASW_<aplicarSetSpaceWarp>d__3_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_ballController_<DestruirPelotaPorDobleToque>d__11_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_ballController_<reactivarCollider>d__10_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_cargarJuego_<reintetarCapturarMandos>d__5_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_copasMuseo_<VolverADejarCelebracion>d__4_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_copasMuseo_<efectoConfetiTimer>d__5_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_fgEmoji_<destruyeEnUnSegundoYedio>d__2_System_Collections_IEnumerator_Reset__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_museoTrofeo_<ActivarCopa>d__42_System_Collections_IEnumerator_Reset__
              );
    OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_51 = 0;
  local_52 = 0;
  local_60 = 0;
  local_61 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_62 = *(byte *)(lVar9 + 0x1b0) & 1;
  if (local_62 == 0) {
    local_70 = (void *)ScriptableObject_CreateInstance_TisOVRMixedRealityCaptureSettings_tF6078D6B59F16A0EE3DEE4144FCED347444B9198_mA2CD02C40A4B9D05C1DF3C42710BC05670FFA61E
                                 (*(MethodInfo **)
                                   Method_ballController_<DestruirPelotaPorDobleToque>d__11_System_Collections_IEnumerator_Reset__
                                 );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pvVar6 = local_70;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *(void **)(lVar9 + 0x1b8) = pvVar6;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x1b8),local_70);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_78 = *(undefined8 *)(lVar9 + 0x1b8);
    local_80 = local_28;
    OVRMixedRealityCaptureConfigurationExtensions_ReadFrom_m585C78AFC92A80FE7A42CFC872B19375759C1E6D
              (local_78,local_28);
    local_82 = Media_Initialize_m940C4B3CAFAC0A7B12B461AE9C0F57F65A534772(0);
    local_82 = local_82 & 1;
    if (local_82 == 0) {
      local_60 = *(undefined8 *)
                  Method_museoTrofeo_<ActivarCopa>d__42_System_Collections_IEnumerator_Reset__;
      local_52 = 0;
    }
    else {
      local_60 = *(undefined8 *)
                  Method_cargarJuego_<reintetarCapturarMandos>d__5_System_Collections_IEnumerator_Reset__
      ;
      local_51 = local_82;
    }
    local_81 = local_82;
    local_61 = local_82;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(local_60,0);
    if ((local_61 & 1) != 0) {
      AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(&local_b4,0);
      uStack_98 = uStack_ac;
      local_a0 = local_b4;
      local_90 = local_a4;
      uStack_48 = uStack_ac;
      local_50 = local_b4;
      local_40 = local_a4;
      uStack_c8 = uStack_ac;
      uVar7 = uStack_c8;
      local_d0 = local_b4;
      local_c0 = local_a4;
      uStack_c8._0_4_ = (int)uStack_ac;
      local_d4 = (int)uStack_c8;
      if (0 < (int)uStack_c8) {
        uStack_e8 = uStack_ac;
        local_f0 = local_b4;
        local_e0 = local_a4;
        local_f4 = (int)uStack_c8;
        uStack_c8 = uVar7;
        local_f5 = Media_SetMrcAudioSampleRate_m9534D4DC9CDE248D5D7A5D9A8DAB2580B4D88E44
                             (uStack_ac & 0xffffffff);
        local_f5 = local_f5 & 1;
        local_108 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar3,1);
        uStack_118 = uStack_48;
        uVar7 = uStack_118;
        local_120 = local_50;
        local_110 = local_40;
        uStack_118._0_4_ = (undefined4)uStack_48;
        local_124 = (undefined4)uStack_118;
        local_128 = (undefined4)uStack_118;
        uStack_118 = uVar7;
        local_100 = local_108;
        local_130 = (Il2CppObject *)
                    Box(*(Il2CppClass **)
                         Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                        ,&local_128);
        NullCheck(local_108);
        ArrayElementTypeCheck(local_108,local_130);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_108,0,local_130);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                  (*(undefined8 *)
                    Method_copasMuseo_<VolverADejarCelebracion>d__4_System_Collections_IEnumerator_Reset__
                   ,local_108,0);
        uVar7 = uStack_c8;
      }
      uStack_c8 = uVar7;
      local_131 = Media_SetMrcInputVideoBufferType_mDE256F23EB488EFC24FB4E87EB5FA2220848F4E6();
      local_131 = local_131 & 1;
      local_148 = (Il2CppArray *)SZArrayNew(*(Il2CppClass **)puVar3,1);
      local_140 = local_148;
      local_150 = Media_GetMrcInputVideoBufferType_m84171F6829839074E24610A3F0BC5AD9002DA353(0);
      local_14c = local_150;
      pIVar10 = (Il2CppObject *)
                Box(*(Il2CppClass **)
                     Method_activarASW_<aplicarSetSpaceWarp>d__3_System_Collections_IEnumerator_Reset__
                    ,&local_150);
      NullCheck(local_148);
      ArrayElementTypeCheck(local_148,pIVar10);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_148,0,pIVar10);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (*(undefined8 *)
                  Method_ballController_<reactivarCollider>d__10_System_Collections_IEnumerator_Reset__
                 ,local_148,0);
      pIVar10 = local_28;
      NullCheck(local_28);
      iVar8 = InterfaceFuncInvoker0<int>::Invoke(0x34,*(Il2CppClass **)puVar5,pIVar10);
      pIVar10 = local_28;
      if (iVar8 == 0) {
        Media_SetMrcActivationMode_mE35E5A9E3D238093D464B58DD3CC40BCE5E021B7(0);
        uVar11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                           (*(MethodInfo **)puVar4);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                  (*(undefined8 *)
                    Method_fgEmoji_<destruyeEnUnSegundoYedio>d__2_System_Collections_IEnumerator_Reset__
                   ,uVar11,0);
      }
      else {
        NullCheck(local_28);
        iVar8 = InterfaceFuncInvoker0<int>::Invoke(0x34,*(Il2CppClass **)puVar5,pIVar10);
        if (iVar8 == 1) {
          Media_SetMrcActivationMode_mE35E5A9E3D238093D464B58DD3CC40BCE5E021B7(0,1);
          uVar11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                             (*(MethodInfo **)puVar4);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                    (*(undefined8 *)
                      Method_copasMuseo_<efectoConfetiTimer>d__5_System_Collections_IEnumerator_Reset__
                     ,uVar11,0);
        }
      }
      iVar8 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(0);
      if (iVar8 == 0x15) {
        Media_SetAvailableQueueIndexVulkan_m7B8F350B4D3DD38BC5CA47D1E49690EB53509A22(0,1);
        Media_SetMrcFrameImageFlipped_m7017BA5F4AE6A40CFF4D29076F4638E4CEFDA0CE(1,0);
      }
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *(undefined1 *)(lVar9 + 0x1b1) = 0;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    *(undefined1 *)(lVar9 + 0x1b0) = 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    OVRMixedRealityCaptureConfigurationExtensions_ApplyTo_m14994C97386BAF4C069891F001590BDD520955AF
              (*(undefined8 *)(lVar9 + 0x1b8),local_28,0);
  }
  return;
}


