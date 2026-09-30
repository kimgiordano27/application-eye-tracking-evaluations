/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetFrameTimeRemaining$$.ctor
ENTRY_POINT: 02d90b30
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 193
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_5
*/


byte OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining___ctor
               (undefined8 param_1,byte param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700 *pTVar6;
  undefined8 *in_x9;
  LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *pLVar7;
  Il2CppArray *this;
  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 *this_00;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined4 *puStack0000000000000030;
  ulong *puStack0000000000000038;
  int iStack000000000000004c;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000198;
  
  puStack0000000000000030 = (undefined4 *)&stack0x000000c8;
  puStack0000000000000038 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  *in_x9 = param_3;
  *(byte *)(unaff_x29 + -0x19) = param_2 & 1;
  *(byte *)(unaff_x29 + -0x1a) = param_4 & 1;
  if ((OVROverlay_CreateLayerTextures_m06511B1901D6E9246E21B5AB859A66C7D44D9842::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Reflection_RuntimeFieldInfo_SetValueDirect__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000038);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxv_u8__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__3__
              );
    OVROverlay_CreateLayerTextures_m06511B1901D6E9246E21B5AB859A66C7D44D9842::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined1 *)(unaff_x29 + -0x29) = 0;
  puStack0000000000000030[0x8e] = 0;
  puStack0000000000000030[0x8d] = 0;
  *(undefined8 *)(puStack0000000000000030 + 0x8a) = 0;
  *(undefined8 *)(puStack0000000000000030 + 0x88) = 0;
  puStack0000000000000030[0x87] = 0;
  puStack0000000000000030[0x86] = 0;
  *(byte *)(unaff_x29 + -0x51) = *(byte *)(*(long *)(puStack0000000000000030 + 0x94) + 0xd3) & 1;
  if ((*(byte *)(unaff_x29 + -0x51) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -0x29) = 0;
    puStack0000000000000030[0x6b] =
         *(undefined4 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x1ac);
    if ((int)puStack0000000000000030[0x6b] < 1) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      *(undefined8 *)(puStack0000000000000030 + 0x68) =
           *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128);
      if (*(long *)(puStack0000000000000030 + 0x68) == 0) {
        uVar2 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                          (*(undefined8 *)(puStack0000000000000030 + 0x94),0);
        puStack0000000000000030[0x67] = uVar2;
        uVar5 = SZArrayNew(*(Il2CppClass **)
                            Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__2__
                           ,puStack0000000000000030[0x67]);
        *(undefined8 *)(puStack0000000000000030 + 100) = uVar5;
        *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128) =
             *(undefined8 *)(puStack0000000000000030 + 100);
        Il2CppCodeGenWriteBarrier
                  ((void **)(*(long *)(puStack0000000000000030 + 0x94) + 0x128),
                   *(void **)(puStack0000000000000030 + 100));
      }
      puStack0000000000000030[0x8e] = 0;
      while( true ) {
        iStack000000000000004c = puStack0000000000000030[0x8e];
        iVar3 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                          (*(undefined8 *)(puStack0000000000000030 + 0x94),0);
        if (iVar3 <= iStack000000000000004c) break;
        *(undefined8 *)(puStack0000000000000030 + 0x62) =
             *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128);
        puStack0000000000000030[0x61] = puStack0000000000000030[0x8e];
        NullCheck(*(void **)(puStack0000000000000030 + 0x62));
        lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                            (puStack0000000000000030 + 0x62),
                           (long)(int)puStack0000000000000030[0x61]);
        *(undefined8 *)(puStack0000000000000030 + 0x5e) = *(undefined8 *)(lVar4 + 0x10);
        if (*(long *)(puStack0000000000000030 + 0x5e) == 0) {
          *(undefined8 *)(puStack0000000000000030 + 0x5c) =
               *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128);
          puStack0000000000000030[0x5b] = puStack0000000000000030[0x8e];
          NullCheck(*(void **)(puStack0000000000000030 + 0x5c));
          puStack0000000000000030[0x5a] =
               *(undefined4 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x1ac);
          uVar5 = SZArrayNew(*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxv_u8__,
                             puStack0000000000000030[0x5a]);
          *(undefined8 *)(puStack0000000000000030 + 0x58) = uVar5;
          uVar5 = *(undefined8 *)(puStack0000000000000030 + 0x58);
          lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                              (puStack0000000000000030 + 0x5c),
                             (long)(int)puStack0000000000000030[0x5b]);
          *(undefined8 *)(lVar4 + 0x10) = uVar5;
          lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                              (puStack0000000000000030 + 0x5c),
                             (long)(int)puStack0000000000000030[0x5b]);
          Il2CppCodeGenWriteBarrier
                    ((void **)(lVar4 + 0x10),*(void **)(puStack0000000000000030 + 0x58));
        }
        *(undefined8 *)(puStack0000000000000030 + 0x56) =
             *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128);
        puStack0000000000000030[0x55] = puStack0000000000000030[0x8e];
        NullCheck(*(void **)(puStack0000000000000030 + 0x56));
        lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                            (puStack0000000000000030 + 0x56),
                           (long)(int)puStack0000000000000030[0x55]);
        *(undefined8 *)(puStack0000000000000030 + 0x52) = *(undefined8 *)(lVar4 + 0x18);
        if (*(long *)(puStack0000000000000030 + 0x52) == 0) {
          *(undefined8 *)(puStack0000000000000030 + 0x50) =
               *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128);
          puStack0000000000000030[0x4f] = puStack0000000000000030[0x8e];
          NullCheck(*(void **)(puStack0000000000000030 + 0x50));
          puStack0000000000000030[0x4e] =
               *(undefined4 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x1ac);
          uVar5 = SZArrayNew(*(Il2CppClass **)
                              Method_System_Reflection_RuntimeFieldInfo_SetValueDirect__,
                             puStack0000000000000030[0x4e]);
          *(undefined8 *)(puStack0000000000000030 + 0x4c) = uVar5;
          uVar5 = *(undefined8 *)(puStack0000000000000030 + 0x4c);
          lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                              (puStack0000000000000030 + 0x50),
                             (long)(int)puStack0000000000000030[0x4f]);
          *(undefined8 *)(lVar4 + 0x18) = uVar5;
          lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                              (puStack0000000000000030 + 0x50),
                             (long)(int)puStack0000000000000030[0x4f]);
          Il2CppCodeGenWriteBarrier
                    ((void **)(lVar4 + 0x18),*(void **)(puStack0000000000000030 + 0x4c));
        }
        puStack0000000000000030[0x8d] = 0;
        while ((int)puStack0000000000000030[0x8d] <
               *(int *)(*(long *)(puStack0000000000000030 + 0x94) + 0x1ac)) {
          *(undefined8 *)(puStack0000000000000030 + 0x4a) =
               *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128);
          puStack0000000000000030[0x49] = puStack0000000000000030[0x8e];
          NullCheck(*(void **)(puStack0000000000000030 + 0x4a));
          lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                              (puStack0000000000000030 + 0x4a),
                             (long)(int)puStack0000000000000030[0x49]);
          *(undefined8 *)(puStack0000000000000030 + 0x46) = *(undefined8 *)(lVar4 + 0x10);
          puStack0000000000000030[0x45] = puStack0000000000000030[0x8d];
          NullCheck(*(void **)(puStack0000000000000030 + 0x46));
          puStack0000000000000030[0x44] = puStack0000000000000030[0x45];
          uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                            (*(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)
                              (puStack0000000000000030 + 0x46),
                             (long)(int)puStack0000000000000030[0x44]);
          *(undefined8 *)(puStack0000000000000030 + 0x42) = uVar5;
          *(undefined8 *)(puStack0000000000000030 + 0x8a) =
               *(undefined8 *)(puStack0000000000000030 + 0x42);
          *(undefined8 *)(puStack0000000000000030 + 0x40) =
               *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x128);
          puStack0000000000000030[0x3f] = puStack0000000000000030[0x8e];
          NullCheck(*(void **)(puStack0000000000000030 + 0x40));
          lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                              (puStack0000000000000030 + 0x40),
                             (long)(int)puStack0000000000000030[0x3f]);
          *(undefined8 *)(puStack0000000000000030 + 0x3c) = *(undefined8 *)(lVar4 + 0x18);
          puStack0000000000000030[0x3b] = puStack0000000000000030[0x8d];
          NullCheck(*(void **)(puStack0000000000000030 + 0x3c));
          puStack0000000000000030[0x3a] = puStack0000000000000030[0x3b];
          uVar5 = IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::GetAt
                            (*(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)
                              (puStack0000000000000030 + 0x3c),
                             (long)(int)puStack0000000000000030[0x3a]);
          *(undefined8 *)(puStack0000000000000030 + 0x38) = uVar5;
          *(undefined8 *)(puStack0000000000000030 + 0x88) =
               *(undefined8 *)(puStack0000000000000030 + 0x38);
          *(undefined8 *)(puStack0000000000000030 + 0x36) =
               *(undefined8 *)(puStack0000000000000030 + 0x8a);
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
          in_stack_00000198._7_1_ =
               Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                         (*(undefined8 *)(puStack0000000000000030 + 0x36),0);
          in_stack_00000198._7_1_ = in_stack_00000198._7_1_ & 1;
          if (in_stack_00000198._7_1_ == 0) {
LAB_02d91224:
            *(undefined8 *)(puStack0000000000000030 + 0x1e) =
                 *(undefined8 *)(puStack0000000000000030 + 0x88);
            in_stack_00000138._7_1_ =
                 IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271
                           (*(undefined8 *)(puStack0000000000000030 + 0x1e),0,0);
            in_stack_00000138._7_1_ = in_stack_00000138._7_1_ & 1;
            if (in_stack_00000138._7_1_ != 0) {
              uVar2 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                                (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)
                                  (puStack0000000000000030 + 0x94),(MethodInfo *)0x0);
              puStack0000000000000030[0x1c] = uVar2;
              puStack0000000000000030[0x1b] = puStack0000000000000030[0x8d];
              puStack0000000000000030[0x1a] = puStack0000000000000030[0x8e];
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000038);
              uVar5 = OVRPlugin_GetLayerTexture_mE4789C583C8282A195DCBBCCBBBEB5A44073A5C8
                                (puStack0000000000000030[0x1c],puStack0000000000000030[0x1b],
                                 puStack0000000000000030[0x1a],0);
              *(undefined8 *)(puStack0000000000000030 + 0x18) = uVar5;
              *(undefined8 *)(puStack0000000000000030 + 0x88) =
                   *(undefined8 *)(puStack0000000000000030 + 0x18);
            }
            *(undefined8 *)(puStack0000000000000030 + 0x16) =
                 *(undefined8 *)(puStack0000000000000030 + 0x88);
            in_stack_00000118._7_1_ =
                 IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271
                           (*(undefined8 *)(puStack0000000000000030 + 0x16),0,0);
            in_stack_00000118._7_1_ = in_stack_00000118._7_1_ & 1;
            if (in_stack_00000118._7_1_ == 0) {
              in_stack_00000118._6_1_ = *(byte *)(unaff_x29 + -0x1a) & 1;
              if (in_stack_00000118._6_1_ == 0) {
                puStack0000000000000030[0x86] = 4;
              }
              else {
                puStack0000000000000030[0x86] = 0x11;
              }
              puStack0000000000000030[0x87] = puStack0000000000000030[0x86];
              puStack0000000000000030[0x14] =
                   *(undefined4 *)(*(long *)(puStack0000000000000030 + 0x94) + 0xec);
              if ((puStack0000000000000030[0x14] == 2) ||
                 (puStack0000000000000030[0x13] =
                       *(undefined4 *)(*(long *)(puStack0000000000000030 + 0x94) + 0xec),
                 puStack0000000000000030[0x13] == 4)) {
                *(undefined8 *)(puStack0000000000000030 + 2) = *in_stack_00000028;
                puStack0000000000000030[1] = puStack0000000000000030[2];
                *puStack0000000000000030 = puStack0000000000000030[0x87];
                uVar5 = Cubemap_CreateExternalTexture_m22D6FBF51B28F65E507FD3AB0A3BA98C6369BDD9
                                  (puStack0000000000000030[1],*puStack0000000000000030,
                                   *(byte *)(unaff_x29 + -0x19) & 1,
                                   *(undefined8 *)(puStack0000000000000030 + 0x88),0);
                *(undefined8 *)(puStack0000000000000030 + 0x8a) = uVar5;
              }
              else {
                *(undefined8 *)(puStack0000000000000030 + 0x10) = *in_stack_00000028;
                puStack0000000000000030[0xf] = puStack0000000000000030[0x10];
                *(undefined8 *)(puStack0000000000000030 + 0xc) = *in_stack_00000028;
                puStack0000000000000030[0xb] = puStack0000000000000030[0xd];
                puStack0000000000000030[10] = puStack0000000000000030[0x87];
                in_stack_000000e8._7_1_ = *(byte *)(unaff_x29 + -0x19) & 1;
                *(undefined8 *)(puStack0000000000000030 + 6) =
                     *(undefined8 *)(puStack0000000000000030 + 0x88);
                uVar5 = Texture2D_CreateExternalTexture_mF821F07B386D19D124696C9A6F6EBEA84212B112
                                  (puStack0000000000000030[0xf],puStack0000000000000030[0xb],
                                   puStack0000000000000030[10],in_stack_000000e8._7_1_ & 1,1,
                                   *(undefined8 *)(puStack0000000000000030 + 6),0);
                *(undefined8 *)(puStack0000000000000030 + 4) = uVar5;
                *(undefined8 *)(puStack0000000000000030 + 0x8a) =
                     *(undefined8 *)(puStack0000000000000030 + 4);
              }
              pLVar7 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                        (*(long *)(puStack0000000000000030 + 0x94) + 0x128);
              iVar3 = puStack0000000000000030[0x8e];
              NullCheck(pLVar7);
              lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                                (pLVar7,(long)iVar3);
              this = *(Il2CppArray **)(lVar4 + 0x10);
              iVar3 = puStack0000000000000030[0x8d];
              pTVar6 = *(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700 **)
                        (puStack0000000000000030 + 0x8a);
              NullCheck(this);
              ArrayElementTypeCheck(this,pTVar6);
              TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::SetAt
                        ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)this,(long)iVar3
                         ,pTVar6);
              pLVar7 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                        (*(long *)(puStack0000000000000030 + 0x94) + 0x128);
              iVar3 = puStack0000000000000030[0x8e];
              NullCheck(pLVar7);
              lVar4 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                                (pLVar7,(long)iVar3);
              this_00 = *(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)(lVar4 + 0x18);
              iVar3 = puStack0000000000000030[0x8d];
              lVar4 = *(long *)(puStack0000000000000030 + 0x88);
              NullCheck(this_00);
              IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::SetAt
                        (this_00,(long)iVar3,lVar4);
              *(undefined1 *)(unaff_x29 + -0x29) = 1;
            }
          }
          else {
            *(undefined8 *)(puStack0000000000000030 + 0x32) =
                 *(undefined8 *)(puStack0000000000000030 + 0x88);
            in_stack_00000188._7_1_ =
                 IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B
                           (*(undefined8 *)(puStack0000000000000030 + 0x32),0,0);
            in_stack_00000188._7_1_ = in_stack_00000188._7_1_ & 1;
            if (in_stack_00000188._7_1_ == 0) goto LAB_02d91224;
            *(undefined8 *)(puStack0000000000000030 + 0x2e) = *in_stack_00000028;
            puStack0000000000000030[0x2d] = puStack0000000000000030[0x2e];
            *(undefined8 *)(puStack0000000000000030 + 0x2a) =
                 *(undefined8 *)(puStack0000000000000030 + 0x8a);
            NullCheck(*(void **)(puStack0000000000000030 + 0x2a));
            uVar2 = VirtualFuncInvoker0<int>::Invoke
                              (5,*(Il2CppObject **)(puStack0000000000000030 + 0x2a));
            puStack0000000000000030[0x29] = uVar2;
            if (puStack0000000000000030[0x2d] != puStack0000000000000030[0x29]) goto LAB_02d91224;
            *(undefined8 *)(puStack0000000000000030 + 0x26) = *in_stack_00000028;
            puStack0000000000000030[0x25] = puStack0000000000000030[0x27];
            *(undefined8 *)(puStack0000000000000030 + 0x22) =
                 *(undefined8 *)(puStack0000000000000030 + 0x8a);
            NullCheck(*(void **)(puStack0000000000000030 + 0x22));
            uVar2 = VirtualFuncInvoker0<int>::Invoke
                              (7,*(Il2CppObject **)(puStack0000000000000030 + 0x22));
            puStack0000000000000030[0x21] = uVar2;
            if (puStack0000000000000030[0x25] != puStack0000000000000030[0x21]) goto LAB_02d91224;
          }
          uVar2 = il2cpp_codegen_add<int,int>(puStack0000000000000030[0x8d],1);
          puStack0000000000000030[0x8d] = uVar2;
        }
        uVar2 = il2cpp_codegen_add<int,int>(puStack0000000000000030[0x8e],1);
        puStack0000000000000030[0x8e] = uVar2;
      }
      *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x29) & 1;
    }
  }
  else {
    *(undefined8 *)(puStack0000000000000030 + 0x82) =
         *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x110);
    bVar1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271
                      (*(undefined8 *)(puStack0000000000000030 + 0x82),0,0);
    *(byte *)(unaff_x29 + -0x61) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x61) & 1) != 0) {
      uVar2 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                        (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)
                          (puStack0000000000000030 + 0x94),(MethodInfo *)0x0);
      puStack0000000000000030[0x80] = uVar2;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000038);
      uVar5 = OVRPlugin_GetLayerAndroidSurfaceObject_m8DE03D3352A89AEC9F67BDEB8C3026140A264B97
                        (puStack0000000000000030[0x80],0);
      *(undefined8 *)(puStack0000000000000030 + 0x7e) = uVar5;
      *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x110) =
           *(undefined8 *)(puStack0000000000000030 + 0x7e);
      *(undefined8 *)(puStack0000000000000030 + 0x7c) =
           *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x110);
      bVar1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B
                        (*(undefined8 *)(puStack0000000000000030 + 0x7c),0,0);
      *(byte *)(unaff_x29 + -0x79) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x79) & 1) != 0) {
        uVar5 = SZArrayNew(*(Il2CppClass **)
                            Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                           ,1);
        *(undefined8 *)(puStack0000000000000030 + 0x78) = uVar5;
        *(undefined8 *)(puStack0000000000000030 + 0x76) =
             *(undefined8 *)(puStack0000000000000030 + 0x78);
        *(undefined8 *)(puStack0000000000000030 + 0x74) =
             *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x110);
        *(undefined8 *)(puStack0000000000000030 + 0x72) =
             *(undefined8 *)(puStack0000000000000030 + 0x74);
        uVar5 = Box(*(Il2CppClass **)
                     Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                    ,(void *)(unaff_x29 + -0xa0));
        *(undefined8 *)(puStack0000000000000030 + 0x70) = uVar5;
        NullCheck(*(void **)(puStack0000000000000030 + 0x76));
        ArrayElementTypeCheck
                  (*(Il2CppArray **)(puStack0000000000000030 + 0x76),
                   *(void **)(puStack0000000000000030 + 0x70));
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)
                    (puStack0000000000000030 + 0x76),0,
                   *(Il2CppObject **)(puStack0000000000000030 + 0x70));
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                  );
        Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__3__
                   ,*(undefined8 *)(puStack0000000000000030 + 0x76),0);
        *(undefined8 *)(puStack0000000000000030 + 0x6e) =
             *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x118);
        if (*(long *)(puStack0000000000000030 + 0x6e) != 0) {
          *(undefined8 *)(puStack0000000000000030 + 0x6c) =
               *(undefined8 *)(*(long *)(puStack0000000000000030 + 0x94) + 0x118);
          NullCheck(*(void **)(puStack0000000000000030 + 0x6c));
          ExternalSurfaceObjectCreated_Invoke_m926D26868671FE881914F508F6A3B29907C0812C_inline
                    (*(ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A **)
                      (puStack0000000000000030 + 0x6c),(MethodInfo *)0x0);
        }
      }
    }
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


