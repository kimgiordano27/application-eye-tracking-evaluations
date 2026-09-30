/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._RemoveApplicationManifest$$BeginInvoke
ENTRY_POINT: 02d86354
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 202
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_7
*/


void OVR_OpenVR_IVRApplications__RemoveApplicationManifest__BeginInvoke(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  Il2CppObject *pIVar5;
  long unaff_x29;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  Il2CppArray *in_stack_000000c8;
  Il2CppArray *in_stack_000000d0;
  undefined8 in_stack_000000d8;
  Il2CppObject *in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 in_stack_00000100;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_cargarJuego_<reintetarCapturarMandos>d__5_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_copasMuseo_<VolverADejarCelebracion>d__4_System_Collections_IEnumerator_Reset__)
  ;
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_copasMuseo_<efectoConfetiTimer>d__5_System_Collections_IEnumerator_Reset__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_fgEmoji_<destruyeEnUnSegundoYedio>d__2_System_Collections_IEnumerator_Reset__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_museoTrofeo_<ActivarCopa>d__42_System_Collections_IEnumerator_Reset__);
  OVRManager_StaticInitializeMixedRealityCapture_mECD5892929515DFF005276CD46C2B270F0F7A533::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x20) = 0;
  *(undefined1 *)(unaff_x29 + -0x31) = 0;
  *(undefined1 *)(unaff_x29 + -0x32) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined1 *)(unaff_x29 + -0x41) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
  *(byte *)(unaff_x29 + -0x42) = *(byte *)(lVar3 + 0x1b0) & 1;
  if ((*(byte *)(unaff_x29 + -0x42) & 1) == 0) {
    uVar4 = ScriptableObject_CreateInstance_TisOVRMixedRealityCaptureSettings_tF6078D6B59F16A0EE3DEE4144FCED347444B9198_mA2CD02C40A4B9D05C1DF3C42710BC05670FFA61E
                      (*(MethodInfo **)
                        Method_ballController_<DestruirPelotaPorDobleToque>d__11_System_Collections_IEnumerator_Reset__
                      );
    *(undefined8 *)(unaff_x29 + -0x50) = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x50);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined8 *)(lVar3 + 0x1b8) = uVar4;
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x1b8),*(void **)(unaff_x29 + -0x50));
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(lVar3 + 0x1b8);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -8);
    OVRMixedRealityCaptureConfigurationExtensions_ReadFrom_m585C78AFC92A80FE7A42CFC872B19375759C1E6D
              (*(undefined8 *)(unaff_x29 + -0x58),*(undefined8 *)(unaff_x29 + -0x60));
    bVar1 = Media_Initialize_m940C4B3CAFAC0A7B12B461AE9C0F57F65A534772(0);
    *(byte *)(unaff_x29 + -0x61) = bVar1 & 1;
    *(byte *)(unaff_x29 + -0x62) = *(byte *)(unaff_x29 + -0x61) & 1;
    if ((*(byte *)(unaff_x29 + -0x62) & 1) == 0) {
      *(byte *)(unaff_x29 + -0x32) = *(byte *)(unaff_x29 + -0x62) & 1;
      *(undefined8 *)(unaff_x29 + -0x40) =
           *(undefined8 *)
            Method_museoTrofeo_<ActivarCopa>d__42_System_Collections_IEnumerator_Reset__;
      *(byte *)(unaff_x29 + -0x41) = *(byte *)(unaff_x29 + -0x32) & 1;
    }
    else {
      *(byte *)(unaff_x29 + -0x31) = *(byte *)(unaff_x29 + -0x62) & 1;
      *(undefined8 *)(unaff_x29 + -0x40) =
           *(undefined8 *)
            Method_cargarJuego_<reintetarCapturarMandos>d__5_System_Collections_IEnumerator_Reset__;
      *(byte *)(unaff_x29 + -0x41) = *(byte *)(unaff_x29 + -0x31) & 1;
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(*(undefined8 *)(unaff_x29 + -0x40),0);
    if ((*(byte *)(unaff_x29 + -0x41) & 1) != 0) {
      AudioSettings_GetConfiguration_mDA005BAD9577EBBE375F6D6C040D7F110508C910(unaff_x29 + -0x94,0);
      *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x8c);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x94);
      *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x84);
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x80);
      *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x28);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x30);
      *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x20);
      *(undefined4 *)(unaff_x29 + -0xb4) = *(undefined4 *)(unaff_x29 + -0xa8);
      if (0 < *(int *)(unaff_x29 + -0xb4)) {
        *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0x28);
        *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0x20);
        *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(unaff_x29 + -200);
        bVar1 = Media_SetMrcAudioSampleRate_m9534D4DC9CDE248D5D7A5D9A8DAB2580B4D88E44
                          (*(undefined4 *)(unaff_x29 + -0xd4));
        *(byte *)(unaff_x29 + -0xd5) = bVar1 & 1;
        uVar4 = SZArrayNew((Il2CppClass *)*in_stack_00000068,1);
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar4;
        *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xe0);
        _uStack00000000000000f8 = *(undefined8 *)(unaff_x29 + -0x28);
        in_stack_000000f0 = *(undefined8 *)(unaff_x29 + -0x30);
        in_stack_00000100 = *(undefined4 *)(unaff_x29 + -0x20);
        uStack00000000000000ec = uStack00000000000000f8;
        uStack00000000000000e8 = uStack00000000000000f8;
        in_stack_000000e0 =
             (Il2CppObject *)
             Box(*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<Transform,_HashSetList<object>>_set_Item__
                 ,&stack0x000000e8);
        NullCheck(*(void **)(unaff_x29 + -0xe8));
        ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0xe8),in_stack_000000e0);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0xe8),0
                   ,in_stack_000000e0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                  (*(undefined8 *)
                    Method_copasMuseo_<VolverADejarCelebracion>d__4_System_Collections_IEnumerator_Reset__
                   ,*(undefined8 *)(unaff_x29 + -0xe8),0);
      }
      in_stack_000000d8._7_1_ =
           Media_SetMrcInputVideoBufferType_mDE256F23EB488EFC24FB4E87EB5FA2220848F4E6();
      in_stack_000000d8._7_1_ = in_stack_000000d8._7_1_ & 1;
      in_stack_000000c8 = (Il2CppArray *)SZArrayNew((Il2CppClass *)*in_stack_00000068,1);
      in_stack_000000d0 = in_stack_000000c8;
      uStack00000000000000c0 =
           Media_GetMrcInputVideoBufferType_m84171F6829839074E24610A3F0BC5AD9002DA353(0);
      uStack00000000000000c4 = uStack00000000000000c0;
      pIVar5 = (Il2CppObject *)
               Box(*(Il2CppClass **)
                    Method_activarASW_<aplicarSetSpaceWarp>d__3_System_Collections_IEnumerator_Reset__
                   ,&stack0x000000c0);
      NullCheck(in_stack_000000c8);
      ArrayElementTypeCheck(in_stack_000000c8,pIVar5);
      ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)in_stack_000000c8,0,
                 pIVar5);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
      Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                (*(undefined8 *)
                  Method_ballController_<reactivarCollider>d__10_System_Collections_IEnumerator_Reset__
                 ,in_stack_000000c8,0);
      pIVar5 = *(Il2CppObject **)(unaff_x29 + -8);
      NullCheck(pIVar5);
      iVar2 = InterfaceFuncInvoker0<int>::Invoke(0x34,(Il2CppClass *)*in_stack_00000060,pIVar5);
      if (iVar2 == 0) {
        Media_SetMrcActivationMode_mE35E5A9E3D238093D464B58DD3CC40BCE5E021B7(0);
        uVar4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                          ((MethodInfo *)*in_stack_00000048);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                  (*(undefined8 *)
                    Method_fgEmoji_<destruyeEnUnSegundoYedio>d__2_System_Collections_IEnumerator_Reset__
                   ,uVar4,0);
      }
      else {
        pIVar5 = *(Il2CppObject **)(unaff_x29 + -8);
        NullCheck(pIVar5);
        iVar2 = InterfaceFuncInvoker0<int>::Invoke(0x34,(Il2CppClass *)*in_stack_00000060,pIVar5);
        if (iVar2 == 1) {
          Media_SetMrcActivationMode_mE35E5A9E3D238093D464B58DD3CC40BCE5E021B7(0,1);
          uVar4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline
                            ((MethodInfo *)*in_stack_00000048);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
          Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                    (*(undefined8 *)
                      Method_copasMuseo_<efectoConfetiTimer>d__5_System_Collections_IEnumerator_Reset__
                     ,uVar4,0);
        }
      }
      iVar2 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(0);
      if (iVar2 == 0x15) {
        Media_SetAvailableQueueIndexVulkan_m7B8F350B4D3DD38BC5CA47D1E49690EB53509A22(0,1);
        Media_SetMrcFrameImageFlipped_m7017BA5F4AE6A40CFF4D29076F4638E4CEFDA0CE(1,0);
      }
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined1 *)(lVar3 + 0x1b1) = 0;
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    *(undefined1 *)(lVar3 + 0x1b0) = 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000058);
    OVRMixedRealityCaptureConfigurationExtensions_ApplyTo_m14994C97386BAF4C069891F001590BDD520955AF
              (*(undefined8 *)(lVar3 + 0x1b8),*(undefined8 *)(unaff_x29 + -8),0);
  }
  return;
}


