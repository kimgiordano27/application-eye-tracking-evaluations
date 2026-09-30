/*
FUNCTION_NAME: OVRExternalComposition_RefreshCameraObjects_mBC8081FB45BBACE6A9F40D282C5EB05BC9261358
ENTRY_POINT: 02d25998
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 201
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21
*/


void OVRExternalComposition_RefreshCameraObjects_mBC8081FB45BBACE6A9F40D282C5EB05BC9261358
               (long param_1,void *param_2,void *param_3,Il2CppObject *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_55c;
  undefined4 uStack_554;
  ulong local_548;
  ulong uStack_540;
  void *local_538;
  undefined8 local_530;
  undefined4 local_524;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *local_520;
  void *local_518;
  undefined8 local_510;
  undefined4 local_504;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *local_500;
  void *local_4f8;
  byte local_4e9;
  undefined4 local_4e8;
  uint local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  Il2CppObject *local_4d8;
  undefined4 local_4d0;
  uint local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  Il2CppObject *local_4c0;
  uint local_4b4;
  void *local_4b0;
  void *local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  ulong local_480;
  ulong uStack_478;
  Il2CppObject *local_468;
  void *local_460;
  void *local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  ulong local_440;
  undefined8 uStack_438;
  void *local_430;
  float local_424;
  void *local_420;
  void *local_418;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_410;
  byte local_401;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_400;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_3f8;
  undefined8 local_3f0;
  void *local_3e8;
  void *local_3e0;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_3d8;
  undefined8 local_3d0;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_3c8;
  byte local_3b9;
  undefined8 local_3b8;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_3b0;
  undefined8 local_3a8;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_3a0;
  byte local_391;
  undefined8 local_390;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_388;
  undefined8 local_380;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_378;
  undefined8 local_370;
  void *local_368;
  byte local_359;
  void *local_358;
  void *local_350;
  void *local_348;
  void *local_340;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_338;
  void *local_330;
  void *local_328;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_320;
  void *local_318;
  InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *local_310;
  Il2CppObject *local_308;
  long local_300;
  Il2CppObject *local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  ulong local_2d8;
  ulong uStack_2d0;
  void *local_2c8;
  byte local_2b9;
  undefined8 local_2b8;
  undefined4 local_2ac;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *local_2a8;
  void *local_2a0;
  undefined4 local_298;
  uint local_294;
  undefined4 local_290;
  undefined4 local_28c;
  Il2CppObject *local_288;
  undefined4 local_280;
  uint local_27c;
  undefined4 local_278;
  undefined4 local_274;
  Il2CppObject *local_270;
  uint local_264;
  void *local_260;
  void *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  ulong local_240;
  ulong uStack_238;
  void *local_230;
  void *local_228;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_220;
  byte local_211;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_210;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_208;
  undefined8 local_200;
  void *local_1f8;
  void *local_1f0;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_1e8;
  undefined8 local_1e0;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_1d8;
  byte local_1c9;
  undefined8 local_1c8;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_1c0;
  undefined8 local_1b8;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_1b0;
  byte local_1a1;
  undefined8 local_1a0;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_198;
  undefined8 local_190;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_188;
  undefined8 local_180;
  void *local_178;
  byte local_169;
  void *local_168;
  void *local_160;
  void *local_158;
  void *local_150;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_148;
  void *local_140;
  void *local_138;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_130;
  void *local_128;
  InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *local_120;
  Il2CppObject *local_118;
  long local_110;
  Il2CppObject *local_108;
  void *local_100;
  void *local_f8;
  long local_f0;
  long local_e8;
  Il2CppObject *local_e0;
  void *local_d8;
  void *local_d0;
  Il2CppArray *local_c8;
  Il2CppArray *local_c0;
  byte local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_58;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *local_50;
  undefined8 local_48;
  Il2CppObject *local_40;
  void *local_38;
  void *local_30;
  long local_28;
  
  puVar7 = Method_System_IO_Stream_NullStream_EndRead__;
  puVar6 = Method_System_IO_Stream_NullStream_BeginWrite__;
  puVar5 = Method_System_IO_Stream_NullStream_BeginRead__;
  puVar4 = Method_System_IO_Stream_<>c_<RunReadWriteTaskWhenReady>b__49_0__;
  puVar3 = Method_System_Collections_Generic_List<double>_ToArray__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRExternalComposition_RefreshCameraObjects_mBC8081FB45BBACE6A9F40D282C5EB05BC9261358::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_NullStream_EndWrite__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_ReadWriteTask_InvokeAsyncCallback__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_SynchronousAsyncResult_EndRead__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    OVRExternalComposition_RefreshCameraObjects_mBC8081FB45BBACE6A9F40D282C5EB05BC9261358::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *)0x0;
  local_58 = (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *)0x0;
  local_60 = (void *)0x0;
  local_68 = (void *)0x0;
  local_70 = 0;
  local_78 = (void *)0x0;
  local_80 = (void *)0x0;
  local_88 = (void *)0x0;
  local_90 = 0;
  local_98 = (void *)0x0;
  local_a0 = local_38;
  NullCheck(local_38);
  local_a8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_a0,0);
  local_b0 = *(undefined8 *)(local_28 + 0x40);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_b1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_a8,local_b0,0);
  local_b1 = local_b1 & 1;
  if (local_b1 != 0) {
    local_c8 = (Il2CppArray *)
               SZArrayNew(*(Il2CppClass **)
                           Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                          ,1);
    local_d0 = local_38;
    local_c0 = local_c8;
    NullCheck(local_38);
    local_d8 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_d0);
    NullCheck(local_d8);
    local_e0 = (Il2CppObject *)Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(local_d8,0)
    ;
    NullCheck(local_c8);
    ArrayElementTypeCheck(local_c8,local_e0);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_c8,0,local_e0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)Method_System_IO_Stream_ReadWriteTask_InvokeAsyncCallback__,local_c8,0
              );
    local_e8 = local_28 + 0x58;
    OVRCompositionUtil_SafeDestroy_m7A340325537FB13185AE399E80B4953CA5AE8693(local_e8,0);
    *(undefined8 *)(local_28 + 0x60) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x60),(void *)0x0);
    local_f0 = local_28 + 0x48;
    OVRCompositionUtil_SafeDestroy_m7A340325537FB13185AE399E80B4953CA5AE8693(local_f0,0);
    *(undefined8 *)(local_28 + 0x50) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x50),(void *)0x0);
    local_f8 = local_30;
    local_100 = local_38;
    OVRComposition_RefreshCameraRig_m0D0711A58604F6BD4A665DDB13C253D73039932C
              (local_28,local_30,local_38,0);
    local_108 = local_40;
    NullCheck(local_40);
    local_110 = InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
                ::Invoke(0x36,*(Il2CppClass **)puVar6,local_108);
    if (local_110 == 0) {
      local_140 = local_38;
      NullCheck(local_38);
      local_148 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                  Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_140,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_150 = (void *)Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3
                                    (local_148,*(MethodInfo **)puVar3);
      *(void **)(local_28 + 0x58) = local_150;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x58),local_150);
    }
    else {
      local_118 = local_40;
      NullCheck(local_40);
      local_120 = (InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *)
                  InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
                  ::Invoke(0x36,*(Il2CppClass **)puVar6,local_118);
      local_128 = local_38;
      NullCheck(local_38);
      local_130 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                  Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_128);
      NullCheck(local_120);
      local_138 = (void *)InstantiateMrcCameraDelegate_Invoke_mB6693C4AF7C65BE930BF160D96A8630F7D21E488_inline
                                    (local_120,local_130,2,(MethodInfo *)0x0);
      *(void **)(local_28 + 0x58) = local_138;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x58),local_138);
    }
    local_158 = *(void **)(local_28 + 0x58);
    NullCheck(local_158);
    Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47
              (local_158,*(undefined8 *)Method_System_IO_Stream_NullStream_EndWrite__);
    local_160 = *(void **)(local_28 + 0x58);
    NullCheck(local_160);
    local_168 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                  (local_160,0);
    local_169 = *(byte *)(local_28 + 0x10) & 1;
    if (local_169 == 0) {
      local_178 = local_30;
      local_68 = local_168;
      NullCheck(local_30);
      local_180 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(local_178,0);
      local_78 = local_68;
      local_70 = local_180;
    }
    else {
      local_188 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)(local_28 + 0x18);
      local_60 = local_168;
      NullCheck(local_188);
      local_190 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                            (local_188,(MethodInfo *)0x0);
      local_78 = local_60;
      local_70 = local_190;
    }
    NullCheck(local_78);
    Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(local_78,local_70);
    local_198 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x58);
    NullCheck(local_198);
    local_1a0 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                          (local_198,*(MethodInfo **)puVar4);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_1a1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_1a0,0);
    local_1a1 = local_1a1 & 1;
    if (local_1a1 != 0) {
      local_1b0 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x58);
      NullCheck(local_1b0);
      local_1b8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                            (local_1b0,*(MethodInfo **)puVar4);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(local_1b8,0);
    }
    local_1c0 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x58);
    NullCheck(local_1c0);
    local_1c8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                          (local_1c0,*(MethodInfo **)puVar5);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_1c9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_1c8,0);
    local_1c9 = local_1c9 & 1;
    if (local_1c9 != 0) {
      local_1d8 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x58);
      NullCheck(local_1d8);
      local_1e0 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                            (local_1d8,*(MethodInfo **)puVar5);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(local_1e0,0);
    }
    local_1e8 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x58);
    NullCheck(local_1e8);
    local_1f0 = (void *)GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6
                                  (local_1e8,*(MethodInfo **)puVar2);
    *(void **)(local_28 + 0x60) = local_1f0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x60),local_1f0);
    local_1f8 = *(void **)(local_28 + 0x60);
    NullCheck(local_1f8);
    Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(local_1f8,*(undefined8 *)puVar7);
    local_200 = *(undefined8 *)(local_28 + 0x60);
    local_210 = (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *)
                CameraExtensions_GetUniversalAdditionalCameraData_m38406768FA69BDC80D45CA7698EC0B8755448604
                          (local_200,0);
    local_208 = local_210;
    local_50 = local_210;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_211 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_210,0);
    local_211 = local_211 & 1;
    if (local_211 != 0) {
      local_220 = local_50;
      NullCheck(local_50);
      UniversalAdditionalCameraData_set_allowXRRendering_mE9DE096F60A0E523B8C06F7E660A6FF1387B07F7_inline
                (local_220,false,(MethodInfo *)0x0);
    }
    local_228 = *(void **)(local_28 + 0x60);
    NullCheck(local_228);
    Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(0x47c34b00,local_228);
    local_230 = *(void **)(local_28 + 0x60);
    local_240 = 0;
    uStack_238 = 0;
    Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_240,0.0,0.0,0.5,1.0,
               (MethodInfo *)0x0);
    NullCheck(local_230);
    uStack_248 = uStack_238;
    uVar9 = uStack_248;
    local_250 = local_240;
    uVar8 = local_250;
    local_250._4_4_ = (undefined4)(local_240 >> 0x20);
    uVar12 = local_250._4_4_;
    uStack_248._4_4_ = (undefined4)(uStack_238 >> 0x20);
    uVar14 = uStack_248._4_4_;
    local_250 = uVar8;
    uStack_248 = uVar9;
    Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19
              (local_240 & 0xffffffff,uVar12,uStack_238 & 0xffffffff,uVar14,local_230,0);
    local_258 = *(void **)(local_28 + 0x60);
    local_260 = *(void **)(local_28 + 0x60);
    NullCheck(local_260);
    local_264 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(local_260,0);
    local_270 = local_40;
    NullCheck(local_40);
    local_280 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                          (2,*(Il2CppClass **)puVar6,local_270);
    local_278 = local_280;
    local_274 = local_280;
    local_27c = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(local_280,0);
    local_288 = local_40;
    NullCheck(local_40);
    local_298 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                          (4,*(Il2CppClass **)puVar6,local_288);
    local_290 = local_298;
    local_28c = local_298;
    local_294 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(local_298,0);
    NullCheck(local_258);
    Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32
              (local_258,local_264 & (local_27c ^ 0xffffffff) | local_294,0);
    local_2a0 = *(void **)(local_28 + 0x60);
    local_2a8 = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)(local_28 + 0x88)
    ;
    NullCheck(local_2a8);
    local_2ac = 0;
    local_2b8 = RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(local_2a8,0);
    NullCheck(local_2a0);
    Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(local_2a0,local_2b8,0);
    local_2b9 = *(byte *)(local_28 + 0x71) & 1;
    if (local_2b9 == 0) {
      local_2c8 = *(void **)(local_28 + 0x60);
      local_2d8 = 0;
      uStack_2d0 = 0;
      Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_2d8,0.0,0.0,1.0,1.0,
                 (MethodInfo *)0x0);
      NullCheck(local_2c8);
      uStack_2e8 = uStack_2d0;
      uVar9 = uStack_2e8;
      local_2f0 = local_2d8;
      uVar8 = local_2f0;
      local_2f0._4_4_ = (undefined4)(local_2d8 >> 0x20);
      uVar12 = local_2f0._4_4_;
      uStack_2e8._4_4_ = (undefined4)(uStack_2d0 >> 0x20);
      uVar14 = uStack_2e8._4_4_;
      local_2f0 = uVar8;
      uStack_2e8 = uVar9;
      Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19
                (local_2d8 & 0xffffffff,uVar12,uStack_2d0 & 0xffffffff,uVar14,local_2c8,0);
    }
    local_2f8 = local_40;
    NullCheck(local_40);
    local_300 = InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
                ::Invoke(0x36,*(Il2CppClass **)puVar6,local_2f8);
    if (local_300 == 0) {
      local_330 = local_38;
      NullCheck(local_38);
      local_338 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                  Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_330,0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_340 = (void *)Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3
                                    (local_338,*(MethodInfo **)puVar3);
      *(void **)(local_28 + 0x48) = local_340;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x48),local_340);
    }
    else {
      local_308 = local_40;
      NullCheck(local_40);
      local_310 = (InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *)
                  InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
                  ::Invoke(0x36,*(Il2CppClass **)puVar6,local_308);
      local_318 = local_38;
      NullCheck(local_38);
      local_320 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                  Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(local_318);
      NullCheck(local_310);
      local_328 = (void *)InstantiateMrcCameraDelegate_Invoke_mB6693C4AF7C65BE930BF160D96A8630F7D21E488_inline
                                    (local_310,local_320,1,(MethodInfo *)0x0);
      *(void **)(local_28 + 0x48) = local_328;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x48),local_328);
    }
    local_348 = *(void **)(local_28 + 0x48);
    NullCheck(local_348);
    Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47
              (local_348,*(undefined8 *)Method_System_IO_Stream_SynchronousAsyncResult_EndRead__);
    local_350 = *(void **)(local_28 + 0x48);
    NullCheck(local_350);
    local_358 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                  (local_350,0);
    local_359 = *(byte *)(local_28 + 0x10) & 1;
    if (local_359 == 0) {
      local_368 = local_30;
      local_88 = local_358;
      NullCheck(local_30);
      local_370 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(local_368,0);
      local_98 = local_88;
      local_90 = local_370;
    }
    else {
      local_378 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)(local_28 + 0x18);
      local_80 = local_358;
      NullCheck(local_378);
      local_380 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                            (local_378,(MethodInfo *)0x0);
      local_98 = local_80;
      local_90 = local_380;
    }
    NullCheck(local_98);
    Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(local_98,local_90);
    local_388 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x48);
    NullCheck(local_388);
    local_390 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                          (local_388,*(MethodInfo **)puVar4);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_391 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_390,0);
    local_391 = local_391 & 1;
    if (local_391 != 0) {
      local_3a0 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x48);
      NullCheck(local_3a0);
      local_3a8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                            (local_3a0,*(MethodInfo **)puVar4);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(local_3a8,0);
    }
    local_3b0 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x48);
    NullCheck(local_3b0);
    local_3b8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                          (local_3b0,*(MethodInfo **)puVar5);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_3b9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_3b8,0);
    local_3b9 = local_3b9 & 1;
    if (local_3b9 != 0) {
      local_3c8 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x48);
      NullCheck(local_3c8);
      local_3d0 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                            (local_3c8,*(MethodInfo **)puVar5);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(local_3d0,0);
    }
    local_3d8 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(local_28 + 0x48);
    NullCheck(local_3d8);
    local_3e0 = (void *)GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6
                                  (local_3d8,*(MethodInfo **)puVar2);
    *(void **)(local_28 + 0x50) = local_3e0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x50),local_3e0);
    local_3e8 = *(void **)(local_28 + 0x50);
    NullCheck(local_3e8);
    Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(local_3e8,*(undefined8 *)puVar7);
    local_3f0 = *(undefined8 *)(local_28 + 0x50);
    local_400 = (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *)
                CameraExtensions_GetUniversalAdditionalCameraData_m38406768FA69BDC80D45CA7698EC0B8755448604
                          (local_3f0,0);
    local_3f8 = local_400;
    local_58 = local_400;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_401 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_400,0);
    local_401 = local_401 & 1;
    if (local_401 != 0) {
      local_410 = local_58;
      NullCheck(local_58);
      UniversalAdditionalCameraData_set_allowXRRendering_mE9DE096F60A0E523B8C06F7E660A6FF1387B07F7_inline
                (local_410,false,(MethodInfo *)0x0);
    }
    local_418 = *(void **)(local_28 + 0x50);
    local_420 = *(void **)(local_28 + 0x60);
    NullCheck(local_420);
    local_424 = (float)Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(local_420);
    NullCheck(local_418);
    pvVar11 = local_418;
    il2cpp_codegen_add<float,float>(local_424,1.0);
    Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(pvVar11,0);
    local_430 = *(void **)(local_28 + 0x50);
    local_440 = 0;
    uStack_438 = 0;
    Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_440,0.5,0.0,0.5,1.0,
               (MethodInfo *)0x0);
    NullCheck(local_430);
    uStack_448 = uStack_438;
    uVar10 = uStack_448;
    local_450 = local_440;
    uVar8 = local_450;
    local_450._4_4_ = (undefined4)(local_440 >> 0x20);
    uVar13 = (undefined4)uStack_438;
    uStack_448._4_4_ = (undefined4)((ulong)uStack_438 >> 0x20);
    uVar12 = local_450._4_4_;
    uVar14 = uStack_448._4_4_;
    local_450 = uVar8;
    uStack_448 = uVar10;
    Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(local_440 & 0xffffffff,local_430,0);
    local_458 = *(void **)(local_28 + 0x50);
    NullCheck(local_458);
    Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(local_458,2,0);
    local_460 = *(void **)(local_28 + 0x50);
    local_468 = local_40;
    NullCheck(local_40);
    local_490 = InterfaceFuncInvoker0<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>::Invoke
                          (0xc,*(Il2CppClass **)puVar6,local_468);
    uStack_478 = CONCAT44(uVar14,uVar13);
    local_480 = CONCAT44(uVar12,local_490);
    uStack_48c = uVar12;
    uStack_488 = uVar13;
    uStack_484 = uVar14;
    NullCheck(local_460);
    uStack_498 = uStack_478;
    uVar9 = uStack_498;
    local_4a0 = local_480;
    uVar8 = local_4a0;
    local_4a0._4_4_ = (undefined4)(local_480 >> 0x20);
    uVar12 = local_4a0._4_4_;
    uStack_498._4_4_ = (undefined4)(uStack_478 >> 0x20);
    uVar14 = uStack_498._4_4_;
    local_4a0 = uVar8;
    uStack_498 = uVar9;
    Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138
              (local_480 & 0xffffffff,uVar12,uStack_478 & 0xffffffff,uVar14,local_460,0);
    local_4a8 = *(void **)(local_28 + 0x50);
    local_4b0 = *(void **)(local_28 + 0x50);
    NullCheck(local_4b0);
    local_4b4 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(local_4b0,0);
    local_4c0 = local_40;
    NullCheck(local_40);
    local_4d0 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                          (2,*(Il2CppClass **)puVar6,local_4c0);
    local_4c8 = local_4d0;
    local_4c4 = local_4d0;
    local_4cc = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(local_4d0,0);
    local_4d8 = local_40;
    NullCheck(local_40);
    local_4e8 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                          (4,*(Il2CppClass **)puVar6,local_4d8);
    local_4e0 = local_4e8;
    local_4dc = local_4e8;
    local_4e4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(local_4e8,0);
    NullCheck(local_4a8);
    Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32
              (local_4a8,local_4b4 & (local_4cc ^ 0xffffffff) | local_4e4,0);
    local_4e9 = *(byte *)(local_28 + 0x71) & 1;
    if (local_4e9 == 0) {
      local_518 = *(void **)(local_28 + 0x50);
      local_520 = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
                   (local_28 + 0x98);
      NullCheck(local_520);
      local_524 = 0;
      local_530 = RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(local_520,0);
      NullCheck(local_518);
      Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(local_518,local_530);
      local_538 = *(void **)(local_28 + 0x50);
      local_548 = 0;
      uStack_540 = 0;
      Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
                ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&local_548,0.0,0.0,1.0,1.0,
                 (MethodInfo *)0x0);
      NullCheck(local_538);
      uStack_55c = (undefined4)(local_548 >> 0x20);
      uStack_554 = (undefined4)(uStack_540 >> 0x20);
      Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19
                (local_548 & 0xffffffff,uStack_55c,uStack_540 & 0xffffffff,uStack_554,local_538,0);
    }
    else {
      local_4f8 = *(void **)(local_28 + 0x50);
      local_500 = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
                   (local_28 + 0x88);
      NullCheck(local_500);
      local_504 = 0;
      local_510 = RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(local_500,0);
      NullCheck(local_4f8);
      Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(local_4f8,local_510,0);
    }
    pvVar11 = local_38;
    NullCheck(local_38);
    pvVar11 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar11,0);
    *(void **)(local_28 + 0x40) = pvVar11;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x40),pvVar11);
  }
  return;
}


