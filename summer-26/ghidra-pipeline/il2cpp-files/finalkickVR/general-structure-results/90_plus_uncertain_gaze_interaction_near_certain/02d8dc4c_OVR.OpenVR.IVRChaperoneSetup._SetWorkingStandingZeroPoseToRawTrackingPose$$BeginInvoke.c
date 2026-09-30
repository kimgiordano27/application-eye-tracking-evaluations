/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 02d8dc4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 165
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_18;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_18
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar8;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *pCVar9;
  long unaff_x29;
  uint uStack000000000000002c;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  ulong *in_stack_00000058;
  int iStack0000000000000064;
  
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000058);
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
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
  bVar1 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  *(byte *)(unaff_x29 + -0x2d) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x2d) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass9_0_<CreateMetallicMinValue>b__1__
               ,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    bVar1 = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
    *(byte *)(unaff_x29 + -0x2e) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x2e) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
      bVar1 = OVRPlugin_InitializeMixedReality_mF600771E1D581C7DEAEE9EA75A9741E7B95888C5();
      *(byte *)(unaff_x29 + -0x2f) = bVar1 & 1;
      bVar1 = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
      *(byte *)(unaff_x29 + -0x30) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x30) & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateMapOverlaySize>b__1_2__
                   ,0);
        return;
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_<CreateAdditionalWireframeShaderViews>b__2_4__
                 ,0);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
    bVar1 = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
    *(byte *)(unaff_x29 + -0x31) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x31) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000058);
      bVar1 = OVRPlugin_UpdateExternalCamera_m094289B0059CB8C32F17C7E6A5C4418FF0812FB6();
      *(byte *)(unaff_x29 + -0x32) = bVar1 & 1;
      bVar1 = Media_UseMrcDebugCamera_m9EC535D2E51E13AA632663A62F3BC98FA2DE7AE4(0);
      *(byte *)(unaff_x29 + -0x33) = bVar1 & 1;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
      uStack000000000000002c = (uint)*(byte *)(unaff_x29 + -0x33);
      pbVar3 = (byte *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
      *pbVar3 = (byte)uStack000000000000002c & 1;
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
      in_stack_00000038[6] = *(undefined8 *)(lVar4 + 0x38);
      if (in_stack_00000038[6] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
        in_stack_00000038[5] = *(undefined8 *)(lVar4 + 0x38);
        NullCheck((void *)in_stack_00000038[5]);
        uVar2 = VirtualFuncInvoker0<int>::Invoke(4,(Il2CppObject *)in_stack_00000038[5]);
        *(undefined4 *)(unaff_x29 + -0x4c) = uVar2;
        in_stack_00000038[3] = in_stack_00000038[0xb];
        NullCheck((void *)in_stack_00000038[3]);
        uVar2 = InterfaceFuncInvoker0<int>::Invoke
                          (8,(Il2CppClass *)*in_stack_00000048,(Il2CppObject *)in_stack_00000038[3])
        ;
        *(undefined4 *)(unaff_x29 + -0x5c) = uVar2;
        if (*(int *)(unaff_x29 + -0x4c) != *(int *)(unaff_x29 + -0x5c)) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
          lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
          in_stack_00000038[1] = *(undefined8 *)(lVar4 + 0x38);
          NullCheck((void *)in_stack_00000038[1]);
          VirtualActionInvoker0::Invoke(6,(Il2CppObject *)in_stack_00000038[1]);
          lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
          *(undefined8 *)(lVar4 + 0x38) = 0;
          lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
          Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x38),(void *)0x0);
        }
      }
      *in_stack_00000038 = in_stack_00000038[0xb];
      NullCheck((void *)*in_stack_00000038);
      uVar2 = InterfaceFuncInvoker0<int>::Invoke
                        (8,(Il2CppClass *)*in_stack_00000048,(Il2CppObject *)*in_stack_00000038);
      *(undefined4 *)(unaff_x29 + -0x74) = uVar2;
      if (*(int *)(unaff_x29 + -0x74) == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(lVar4 + 0x38);
        if (*(long *)(unaff_x29 + -0x80) == 0) {
          *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000038[0xd];
          *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000038[0xc];
          *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000038[0xb];
          uVar5 = il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass9_0_<CreateMetallicMinValue>b__0__
                            );
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar5;
          OVRExternalComposition__ctor_mDB4C8F8BDDDDA2DEC0940959B9D179CABE3ACA30
                    (*(undefined8 *)(unaff_x29 + -0xa0),*(undefined8 *)(unaff_x29 + -0x88),
                     *(undefined8 *)(unaff_x29 + -0x90),*(undefined8 *)(unaff_x29 + -0x98),0);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
          uVar5 = *(undefined8 *)(unaff_x29 + -0xa0);
          lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
          *(undefined8 *)(lVar4 + 0x38) = uVar5;
          lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
          Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x38),*(void **)(unaff_x29 + -0xa0));
        }
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000050);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000050);
        pIVar7 = *(Il2CppObject **)(lVar4 + 0x38);
        pGVar8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)in_stack_00000038[0xd];
        pCVar9 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *)in_stack_00000038[0xc];
        pIVar6 = (Il2CppObject *)in_stack_00000038[0xb];
        iStack0000000000000064 = *(int *)(unaff_x29 + -0x1c);
        NullCheck(pIVar7);
        VirtualActionInvoker4<GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*,Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*,Il2CppObject*,int>
        ::Invoke(5,pIVar7,pGVar8,pCVar9,pIVar6,iStack0000000000000064);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000038[0xb];
        NullCheck(*(void **)(unaff_x29 + -0xa8));
        uVar2 = InterfaceFuncInvoker0<int>::Invoke
                          (8,(Il2CppClass *)*in_stack_00000048,*(Il2CppObject **)(unaff_x29 + -0xa8)
                          );
        *(undefined4 *)(unaff_x29 + -0xac) = uVar2;
        *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0xac);
        Il2CppFakeBox<int>::Il2CppFakeBox
                  ((Il2CppFakeBox<int> *)&stack0x00000098,
                   *(Il2CppClass **)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__2__
                   ,(int *)(unaff_x29 + -0x2c));
        uVar5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                          ((Il2CppFakeBox<int> *)&stack0x00000098);
        uVar5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                          (*(undefined8 *)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__0__
                           ,uVar5,0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
      }
    }
  }
  return;
}


