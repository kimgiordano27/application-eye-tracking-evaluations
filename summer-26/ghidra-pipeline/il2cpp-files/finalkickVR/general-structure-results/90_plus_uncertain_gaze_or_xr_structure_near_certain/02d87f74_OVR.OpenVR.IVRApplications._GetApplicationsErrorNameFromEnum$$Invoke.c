/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetApplicationsErrorNameFromEnum$$Invoke
ENTRY_POINT: 02d87f74
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum__Invoke
               (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar5;
  byte in_w9;
  long lVar6;
  long unaff_x29;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uStack0000000000000044;
  undefined4 uStack0000000000000144;
  uint uStack00000000000001ac;
  undefined4 uStack00000000000001bc;
  undefined8 in_stack_00000338;
  byte in_stack_00000344;
  undefined8 *in_stack_00000380;
  undefined8 *in_stack_00000388;
  undefined8 *in_stack_00000390;
  undefined8 *in_stack_00000398;
  undefined8 *in_stack_000003a0;
  undefined8 *in_stack_000003a8;
  
  NullCheck((void *)*param_1);
  OVRTracker_set_isEnabled_m34B6A72018F2C6362EF2CD79DEF6CB52C746E79B
            (*in_stack_00000380,in_w9 & 1,in_stack_00000338);
  bVar2 = *(byte *)(in_stack_00000380[0x74] + 0x10d);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  OVRPlugin_set_rotation_m920187095C1DC0E97287249A8AA27D0CB5E80A7C
            (bVar2 & in_stack_00000344 & 1,in_stack_00000338);
  OVRPlugin_set_useIPDInPositionTracking_m8C4F941E9A7273575ACC10F250E07665DFB5D6FF
            (*(byte *)(in_stack_00000380[0x74] + 0x10e) & in_stack_00000344 & 1,in_stack_00000338);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__);
  bVar2 = OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D
                    (in_stack_00000338);
  OVRManager_set_isHmdPresent_m4879663A8AA591EE662CEF9F18686D6B89789B7E
            (bVar2 & in_stack_00000344 & 1,in_stack_00000338);
  if ((*(byte *)(in_stack_00000380[0x74] + 0x2c) & in_stack_00000344 & 1) != 0) {
    uVar7 = QualitySettings_get_antiAliasing_m71FB82E1C9D9923D313430621C898008D967F516();
    *(undefined4 *)(in_stack_00000388 + 0x21) = uVar7;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar3 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                      ((MethodInfo *)0x0);
    *(undefined8 *)((long)in_stack_00000388 + 0xfc) = uVar3;
    NullCheck(*(void **)((long)in_stack_00000388 + 0xfc));
    uVar7 = OVRDisplay_get_recommendedMSAALevel_mF7498063717D350637404B308FD185AC7F753FEA
                      (*(undefined8 *)((long)in_stack_00000388 + 0xfc),0);
    *(undefined4 *)(in_stack_00000388 + 0x1f) = uVar7;
    if (*(int *)(in_stack_00000388 + 0x21) != *(int *)(in_stack_00000388 + 0x1f)) {
      uVar3 = SZArrayNew(*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_ReflectionProbeManager_CachedProbe>_TryGetValue__
                         ,5);
      *(undefined8 *)((long)in_stack_00000388 + 0xec) = uVar3;
      *(undefined8 *)((long)in_stack_00000388 + 0xe4) =
           *(undefined8 *)((long)in_stack_00000388 + 0xec);
      NullCheck(*(void **)((long)in_stack_00000388 + 0xe4));
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)
                  ((long)in_stack_00000388 + 0xe4),0,
                 *(String_t **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__0__
                );
      *(undefined8 *)((long)in_stack_00000388 + 0xdc) =
           *(undefined8 *)((long)in_stack_00000388 + 0xe4);
      uVar7 = QualitySettings_get_antiAliasing_m71FB82E1C9D9923D313430621C898008D967F516();
      *(undefined4 *)(in_stack_00000388 + 0x1b) = uVar7;
      *(undefined4 *)((long)in_stack_00000380 + 0x36c) = *(undefined4 *)(in_stack_00000388 + 0x1b);
      uVar3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(unaff_x29 + -0x3c,0);
      *(undefined8 *)((long)in_stack_00000388 + 0xcc) = uVar3;
      NullCheck(*(void **)((long)in_stack_00000388 + 0xdc));
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)
                  ((long)in_stack_00000388 + 0xdc),1,*(String_t **)((long)in_stack_00000388 + 0xcc))
      ;
      *(undefined8 *)((long)in_stack_00000388 + 0xc4) =
           *(undefined8 *)((long)in_stack_00000388 + 0xdc);
      NullCheck(*(void **)((long)in_stack_00000388 + 0xc4));
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)
                  ((long)in_stack_00000388 + 0xc4),2,
                 *(String_t **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__2__
                );
      *(undefined8 *)((long)in_stack_00000388 + 0xbc) =
           *(undefined8 *)((long)in_stack_00000388 + 0xc4);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar3 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                        ((MethodInfo *)0x0);
      *(undefined8 *)((long)in_stack_00000388 + 0xb4) = uVar3;
      NullCheck(*(void **)((long)in_stack_00000388 + 0xb4));
      uVar7 = OVRDisplay_get_recommendedMSAALevel_mF7498063717D350637404B308FD185AC7F753FEA
                        (*(undefined8 *)((long)in_stack_00000388 + 0xb4),0);
      *(undefined4 *)(in_stack_00000388 + 0x16) = uVar7;
      *(undefined4 *)((long)in_stack_00000380 + 0x36c) = *(undefined4 *)(in_stack_00000388 + 0x16);
      uVar3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(unaff_x29 + -0x3c,0);
      *(undefined8 *)((long)in_stack_00000388 + 0xa4) = uVar3;
      NullCheck(*(void **)((long)in_stack_00000388 + 0xbc));
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)
                  ((long)in_stack_00000388 + 0xbc),3,*(String_t **)((long)in_stack_00000388 + 0xa4))
      ;
      *(undefined8 *)((long)in_stack_00000388 + 0x9c) =
           *(undefined8 *)((long)in_stack_00000388 + 0xbc);
      NullCheck(*(void **)((long)in_stack_00000388 + 0x9c));
      StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::SetAt
                (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)
                  ((long)in_stack_00000388 + 0x9c),4,
                 *(String_t **)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__0__
                );
      uVar3 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A
                        (*(undefined8 *)((long)in_stack_00000388 + 0x9c),0);
      *(undefined8 *)((long)in_stack_00000388 + 0x94) = uVar3;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)((long)in_stack_00000388 + 0x94),0);
      uVar3 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                        ((MethodInfo *)0x0);
      *(undefined8 *)((long)in_stack_00000388 + 0x8c) = uVar3;
      NullCheck(*(void **)((long)in_stack_00000388 + 0x8c));
      uVar7 = OVRDisplay_get_recommendedMSAALevel_mF7498063717D350637404B308FD185AC7F753FEA
                        (*(undefined8 *)((long)in_stack_00000388 + 0x8c),0);
      *(undefined4 *)(in_stack_00000388 + 0x11) = uVar7;
      QualitySettings_set_antiAliasing_mBC4220AF5820137CFEBB38155D4CCD12822E2C7E
                (*(undefined4 *)(in_stack_00000388 + 0x11),0);
    }
  }
  bVar2 = OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218
                    (in_stack_00000380[0x74],0);
  if ((bVar2 & 1) != (*(byte *)(in_stack_00000380[0x74] + 0x2d) & 1)) {
    OVRManager_set_monoscopic_m1EAAB3C2A3CDB7D72B1700D635AAA6C2AE41893D
              (in_stack_00000380[0x74],*(byte *)(in_stack_00000380[0x74] + 0x2d) & 1,0);
  }
  uVar7 = OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                    ((OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)in_stack_00000380[0x74]
                     ,(MethodInfo *)0x0);
  *(undefined4 *)(in_stack_00000388 + 0xd) = uVar7;
  *(undefined4 *)((long)in_stack_00000388 + 0x6c) = param_3;
  *(undefined4 *)(in_stack_00000388 + 0xe) = param_4;
  *(undefined8 *)((long)in_stack_00000388 + 0x74) = in_stack_00000388[0xd];
  *(undefined4 *)((long)in_stack_00000388 + 0x7c) = *(undefined4 *)(in_stack_00000388 + 0xe);
  lVar6 = in_stack_00000380[0x74];
  *(undefined8 *)((long)in_stack_00000388 + 0x5c) = *(undefined8 *)(lVar6 + 0x4c);
  *(undefined4 *)((long)in_stack_00000388 + 100) = *(undefined4 *)(lVar6 + 0x54);
  *(undefined8 *)((long)in_stack_00000388 + 0x4c) = *(undefined8 *)((long)in_stack_00000388 + 0x74);
  *(undefined4 *)((long)in_stack_00000388 + 0x54) = *(undefined4 *)((long)in_stack_00000388 + 0x7c);
  *(undefined8 *)((long)in_stack_00000388 + 0x3c) = *(undefined8 *)((long)in_stack_00000388 + 0x5c);
  *(undefined4 *)((long)in_stack_00000388 + 0x44) = *(undefined4 *)((long)in_stack_00000388 + 100);
  uVar7 = *(undefined4 *)(in_stack_00000388 + 10);
  uVar9 = *(undefined4 *)((long)in_stack_00000388 + 0x54);
  bVar2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline
                    (*(undefined4 *)((long)in_stack_00000388 + 0x4c),uVar7,uVar9,
                     *(undefined4 *)((long)in_stack_00000388 + 0x3c),
                     *(undefined4 *)(in_stack_00000388 + 8),
                     *(undefined4 *)((long)in_stack_00000388 + 0x44),0);
  if ((bVar2 & 1) != 0) {
    lVar6 = in_stack_00000380[0x74];
    *(undefined8 *)((long)in_stack_00000388 + 0x2c) = *(undefined8 *)(lVar6 + 0x4c);
    *(undefined4 *)((long)in_stack_00000388 + 0x34) = *(undefined4 *)(lVar6 + 0x54);
    uVar3 = in_stack_00000380[0x74];
    *(undefined8 *)((long)in_stack_00000388 + 0x1c) =
         *(undefined8 *)((long)in_stack_00000388 + 0x2c);
    *(undefined4 *)((long)in_stack_00000388 + 0x24) =
         *(undefined4 *)((long)in_stack_00000388 + 0x34);
    uVar7 = *(undefined4 *)(in_stack_00000388 + 4);
    uVar9 = *(undefined4 *)((long)in_stack_00000388 + 0x24);
    OVRManager_set_headPoseRelativeOffsetRotation_m607DFB21F99CE3107ECA6BD9E1C0A2B6AC4242FC
              (*(undefined4 *)((long)in_stack_00000388 + 0x1c),uVar3,0);
  }
  uVar8 = OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline
                    ((OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)in_stack_00000380[0x74]
                     ,(MethodInfo *)0x0);
  *(undefined4 *)((long)in_stack_00000390 + 0x404) = uVar8;
  *(undefined4 *)(in_stack_00000390 + 0x81) = uVar7;
  *(undefined4 *)((long)in_stack_00000390 + 0x40c) = uVar9;
  *(undefined8 *)((long)in_stack_00000388 + 0xc) = *in_stack_00000388;
  *(undefined4 *)((long)in_stack_00000388 + 0x14) = *(undefined4 *)(in_stack_00000388 + 1);
  lVar6 = in_stack_00000380[0x74];
  in_stack_00000390[0x7f] = *(undefined8 *)(lVar6 + 0x58);
  *(undefined4 *)(in_stack_00000390 + 0x80) = *(undefined4 *)(lVar6 + 0x60);
  in_stack_00000390[0x7d] = *(undefined8 *)((long)in_stack_00000388 + 0xc);
  *(undefined4 *)(in_stack_00000390 + 0x7e) = *(undefined4 *)((long)in_stack_00000388 + 0x14);
  in_stack_00000390[0x7b] = in_stack_00000390[0x7f];
  *(undefined4 *)(in_stack_00000390 + 0x7c) = *(undefined4 *)(in_stack_00000390 + 0x80);
  bVar2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline
                    (*(undefined4 *)(in_stack_00000390 + 0x7d),
                     *(undefined4 *)((long)in_stack_00000390 + 0x3ec),
                     *(undefined4 *)(in_stack_00000390 + 0x7e),
                     *(undefined4 *)(in_stack_00000390 + 0x7b),
                     *(undefined4 *)((long)in_stack_00000390 + 0x3dc),
                     *(undefined4 *)(in_stack_00000390 + 0x7c),0);
  if ((bVar2 & 1) != 0) {
    lVar6 = in_stack_00000380[0x74];
    in_stack_00000390[0x79] = *(undefined8 *)(lVar6 + 0x58);
    *(undefined4 *)(in_stack_00000390 + 0x7a) = *(undefined4 *)(lVar6 + 0x60);
    uVar3 = in_stack_00000380[0x74];
    in_stack_00000390[0x77] = in_stack_00000390[0x79];
    *(undefined4 *)(in_stack_00000390 + 0x78) = *(undefined4 *)(in_stack_00000390 + 0x7a);
    OVRManager_set_headPoseRelativeOffsetTranslation_m8B70891033EA3A0A28D9C1986E7B5D58016CCBA6
              (*(undefined4 *)(in_stack_00000390 + 0x77),
               *(undefined4 *)((long)in_stack_00000390 + 0x3bc),
               *(undefined4 *)(in_stack_00000390 + 0x78),uVar3,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0xea) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
    if ((bVar2 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x73] = *(undefined8 *)(lVar6 + 0x38);
      if (in_stack_00000390[0x73] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x72] = *(undefined8 *)(lVar6 + 0x38);
        NullCheck((void *)in_stack_00000390[0x72]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x72],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0xea) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass1_0_<CreateLightingFeatures>b__0__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x69] = *(undefined8 *)(lVar6 + 0x30);
      if (in_stack_00000390[0x69] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x68] = *(undefined8 *)(lVar6 + 0x30);
        NullCheck((void *)in_stack_00000390[0x68]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x68],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  bVar2 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445();
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar6 + 0xea) = bVar2 & 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  bVar2 = OVRPlugin_get_userPresent_mDC6C3FFE8897342A888E529C7BEAF368413C8151(0);
  OVR_OpenVR_IVRTrackedCamera__GetCameraErrorNameFromEnum__BeginInvoke
            (in_stack_00000380[0x74],bVar2 & 1,0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if (((*(byte *)(lVar6 + 0x146) & 1) != 0) &&
     (bVar2 = OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D
                        (in_stack_00000380[0x74],0), (bVar2 & 1) == 0)) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__2__
               ,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x60] = *(undefined8 *)(lVar6 + 0x48);
    if (in_stack_00000390[0x60] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x5f] = *(undefined8 *)(lVar6 + 0x48);
      NullCheck((void *)in_stack_00000390[0x5f]);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x5f],
                 (MethodInfo *)0x0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if (((*(byte *)(lVar6 + 0x146) & 1) == 0) &&
     (bVar2 = OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D
                        (in_stack_00000380[0x74],0), (bVar2 & 1) != 0)) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__0__
               ,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x57] = *(undefined8 *)(lVar6 + 0x40);
    if (in_stack_00000390[0x57] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x56] = *(undefined8 *)(lVar6 + 0x40);
      NullCheck((void *)in_stack_00000390[0x56]);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x56],
                 (MethodInfo *)0x0);
    }
  }
  bVar2 = OVRManager_get_isUserPresent_m1E7754523C4912B5EFADE6950DC9D7AA5072699D
                    (in_stack_00000380[0x74]);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar6 + 0x146) = bVar2 & 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  bVar2 = OVRPlugin_get_hasVrFocus_m3BE22CA34415F44FD722A0D2547388F0C943900E(0);
  OVRManager_set_hasVrFocus_m85C981DA02ECC6A7829D348FCBC2149040CD5321(bVar2 & 1,0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0xed) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    bVar2 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90(0);
    if ((bVar2 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass0_0_<CreateMaterialOverride>b__2__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x4e] = *(undefined8 *)(lVar6 + 0x58);
      if (in_stack_00000390[0x4e] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x4d] = *(undefined8 *)(lVar6 + 0x58);
        NullCheck((void *)in_stack_00000390[0x4d]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x4d],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0xed) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    bVar2 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90(0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x45] = *(undefined8 *)(lVar6 + 0x50);
      if (in_stack_00000390[0x45] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x44] = *(undefined8 *)(lVar6 + 0x50);
        NullCheck((void *)in_stack_00000390[0x44]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x44],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  bVar2 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90();
  uStack00000000000001bc = 1;
  uStack00000000000001ac = (uint)(bVar2 & 1);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar6 + 0xed) = (byte)uStack00000000000001ac & (byte)uStack00000000000001bc;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  bVar2 = OVRPlugin_get_hasInputFocus_m26E031618D6BF901538C11D3A4FF8F82208BEEDD(0);
  *(byte *)(unaff_x29 + -0x11) = bVar2 & (byte)uStack00000000000001bc & (byte)uStack00000000000001bc
  ;
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if (((*(byte *)(lVar6 + 0xee) & 1) != 0) && ((*(byte *)(unaff_x29 + -0x11) & 1) == 0)) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__3_4__
               ,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x3c] = *(undefined8 *)(lVar6 + 0x68);
    if (in_stack_00000390[0x3c] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x3b] = *(undefined8 *)(lVar6 + 0x68);
      NullCheck((void *)in_stack_00000390[0x3b]);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x3b],
                 (MethodInfo *)0x0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if (((*(byte *)(lVar6 + 0xee) & 1) == 0 & *(byte *)(unaff_x29 + -0x11) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateMaterialValidationMode>b__2_4__
               ,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x33] = *(undefined8 *)(lVar6 + 0x60);
    if (in_stack_00000390[0x33] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x32] = *(undefined8 *)(lVar6 + 0x60);
      NullCheck((void *)in_stack_00000390[0x32]);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x32],
                 (MethodInfo *)0x0);
    }
  }
  bVar2 = *(byte *)(unaff_x29 + -0x11);
  uStack0000000000000144 = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar6 + 0xee) = bVar2 & 1 & (byte)uStack0000000000000144;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  uVar3 = OVRPlugin_get_audioOutId_m5D5085CAAC63B5F1C4FB8E2160278EBC7BC7CCDA(0);
  in_stack_00000390[0x2a] = uVar3;
  in_stack_00000380[0x71] = in_stack_00000390[0x2a];
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x147) & (byte)uStack0000000000000144 & 1) == 0) {
    in_stack_00000390[0x28] = in_stack_00000380[0x71];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar3 = in_stack_00000390[0x28];
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined8 *)(lVar6 + 0x150) = uVar3;
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x150),(void *)in_stack_00000390[0x28]);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined1 *)(lVar6 + 0x147) = 1;
  }
  else {
    in_stack_00000390[0x27] = in_stack_00000380[0x71];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x26] = *(undefined8 *)(lVar6 + 0x150);
    bVar2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (in_stack_00000390[0x27],in_stack_00000390[0x26],0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x24] = *(undefined8 *)(lVar6 + 0x70);
      if (in_stack_00000390[0x24] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x23] = *(undefined8 *)(lVar6 + 0x70);
        NullCheck((void *)in_stack_00000390[0x23]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x23],
                   (MethodInfo *)0x0);
      }
      in_stack_00000390[0x1c] = in_stack_00000380[0x71];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar3 = in_stack_00000390[0x1c];
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      *(undefined8 *)(lVar6 + 0x150) = uVar3;
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x150),(void *)in_stack_00000390[0x1c]);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  uVar3 = OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE(0);
  in_stack_00000390[0x1b] = uVar3;
  in_stack_00000380[0x70] = in_stack_00000390[0x1b];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x148) & 1) == 0) {
    in_stack_00000390[0x19] = in_stack_00000380[0x70];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar3 = in_stack_00000390[0x19];
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined8 *)(lVar6 + 0x158) = uVar3;
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x158),(void *)in_stack_00000390[0x19]);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined1 *)(lVar6 + 0x148) = 1;
  }
  else {
    in_stack_00000390[0x18] = in_stack_00000380[0x70];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x17] = *(undefined8 *)(lVar6 + 0x158);
    bVar2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (in_stack_00000390[0x18],in_stack_00000390[0x17],0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x15] = *(undefined8 *)(lVar6 + 0x78);
      if (in_stack_00000390[0x15] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x14] = *(undefined8 *)(lVar6 + 0x78);
        NullCheck((void *)in_stack_00000390[0x14]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x14],
                   (MethodInfo *)0x0);
      }
      in_stack_00000390[0xd] = in_stack_00000380[0x70];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar3 = in_stack_00000390[0xd];
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      *(undefined8 *)(lVar6 + 0x158) = uVar3;
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x158),(void *)in_stack_00000390[0xd]);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x160) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar3 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    in_stack_00000390[0xb] = uVar3;
    NullCheck((void *)in_stack_00000390[0xb]);
    bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0
                      (in_stack_00000390[0xb],0);
    if ((bVar2 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[9] = *(undefined8 *)(lVar6 + 0x88);
      if (in_stack_00000390[9] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[8] = *(undefined8 *)(lVar6 + 0x88);
        NullCheck((void *)in_stack_00000390[8]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[8],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x160) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar3 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    *in_stack_00000390 = uVar3;
    NullCheck((void *)*in_stack_00000390);
    bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0
                      (*in_stack_00000390,0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      if (*(long *)(lVar6 + 0x80) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        pAVar5 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar6 + 0x80);
        NullCheck(pAVar5);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar5,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  pvVar4 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar4);
  bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar4,0);
  uStack0000000000000044 = (uint)(bVar2 & 1);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar6 + 0x160) = (byte)uStack0000000000000044 & 1;
  pvVar4 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar4);
  OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6(pvVar4,0);
  if (*(int *)(in_stack_00000380[0x74] + 0x114) != *(int *)(in_stack_00000380[0x74] + 0x118)) {
    *(undefined4 *)(in_stack_00000380[0x74] + 0x114) =
         *(undefined4 *)(in_stack_00000380[0x74] + 0x118);
    *(undefined4 *)((long)in_stack_00000380 + 0x304) =
         *(undefined4 *)(in_stack_00000380[0x74] + 0x114);
    iVar1 = *(int *)((long)in_stack_00000380 + 0x304);
    if (iVar1 == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(0);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (iVar1 == 1) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (iVar1 == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
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
  OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4(in_stack_00000380[0x74],0);
  uVar3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (in_stack_00000380[0x74],0);
  uVar7 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (in_stack_00000380[0x74],0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (in_stack_00000380[0x74],uVar3,uVar7,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(in_stack_00000380[0x74] + 0x101) & 1,0);
  return;
}


