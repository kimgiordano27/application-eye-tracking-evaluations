/*
FUNCTION_NAME: OVROverlay_CreateLayerTextures_m06511B1901D6E9246E21B5AB859A66C7D44D9842
ENTRY_POINT: 02d90b18
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 211
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVROverlay_CreateLayerTextures_m06511B1901D6E9246E21B5AB859A66C7D44D9842
               (OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *param_1,byte param_2,
               undefined8 param_3,byte param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A *pEVar12;
  LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *pLVar13;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *this;
  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 *pIVar14;
  Il2CppArray *this_00;
  undefined4 uStack_254;
  undefined4 local_248;
  int iStack_1ec;
  int local_1d0;
  undefined8 local_c0;
  undefined8 local_b8;
  Il2CppArray *local_b0;
  Il2CppArray *local_a8;
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  byte local_81;
  undefined8 local_80;
  byte local_71;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  Il2CppObject *local_60;
  int local_54;
  int local_50;
  byte local_49;
  undefined8 local_48;
  byte local_3a;
  byte local_39;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *local_38;
  undefined8 local_2c;
  byte local_21;
  
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_39 = param_2 & 1;
  local_3a = param_4 & 1;
  local_48 = param_5;
  local_38 = param_1;
  local_2c = param_3;
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
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
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
  local_49 = 0;
  local_50 = 0;
  local_54 = 0;
  local_60 = (Il2CppObject *)0x0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_71 = (byte)local_38[0xd3] & 1;
  if (local_71 == 0) {
    local_49 = 0;
    if (*(int *)(local_38 + 0x1ac) < 1) {
      local_21 = 0;
    }
    else {
      if (*(long *)(local_38 + 0x128) == 0) {
        uVar4 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                          (local_38,0);
        pvVar10 = (void *)SZArrayNew(*(Il2CppClass **)
                                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__2__
                                     ,uVar4);
        *(void **)(local_38 + 0x128) = pvVar10;
        Il2CppCodeGenWriteBarrier((void **)(local_38 + 0x128),pvVar10);
      }
      for (local_50 = 0; iVar5 = local_50,
          iVar7 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                            (local_38,0), iVar2 = local_50, iVar5 < iVar7;
          local_50 = il2cpp_codegen_add<int,int>(local_50,1)) {
        pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                   (local_38 + 0x128);
        NullCheck(pLVar13);
        lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (pLVar13,(long)iVar2);
        iVar5 = local_50;
        if (*(long *)(lVar9 + 0x10) == 0) {
          pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                     (local_38 + 0x128);
          NullCheck(pLVar13);
          pvVar10 = (void *)SZArrayNew(*(Il2CppClass **)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxv_u8__,
                                       *(uint *)(local_38 + 0x1ac));
          lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (pLVar13,(long)iVar5);
          *(void **)(lVar9 + 0x10) = pvVar10;
          lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (pLVar13,(long)iVar5);
          Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x10),pvVar10);
        }
        iVar5 = local_50;
        pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                   (local_38 + 0x128);
        NullCheck(pLVar13);
        lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (pLVar13,(long)iVar5);
        iVar5 = local_50;
        if (*(long *)(lVar9 + 0x18) == 0) {
          pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                     (local_38 + 0x128);
          NullCheck(pLVar13);
          pvVar10 = (void *)SZArrayNew(*(Il2CppClass **)
                                        Method_System_Reflection_RuntimeFieldInfo_SetValueDirect__,
                                       *(uint *)(local_38 + 0x1ac));
          lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (pLVar13,(long)iVar5);
          *(void **)(lVar9 + 0x18) = pvVar10;
          lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (pLVar13,(long)iVar5);
          Il2CppCodeGenWriteBarrier((void **)(lVar9 + 0x18),pvVar10);
        }
        for (local_54 = 0; iVar5 = local_50, local_54 < *(int *)(local_38 + 0x1ac);
            local_54 = il2cpp_codegen_add<int,int>(local_54,1)) {
          pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                     (local_38 + 0x128);
          NullCheck(pLVar13);
          lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (pLVar13,(long)iVar5);
          iVar5 = local_54;
          this = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)(lVar9 + 0x10);
          NullCheck(this);
          local_60 = (Il2CppObject *)
                     TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                               (this,(long)iVar5);
          iVar5 = local_50;
          pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                     (local_38 + 0x128);
          NullCheck(pLVar13);
          lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                            (pLVar13,(long)iVar5);
          iVar5 = local_54;
          pIVar14 = *(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)(lVar9 + 0x18);
          NullCheck(pIVar14);
          local_68 = IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::GetAt
                               (pIVar14,(long)iVar5);
          pIVar8 = local_60;
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
          bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(pIVar8,0);
          if (((bVar3 & 1) == 0) ||
             (bVar3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(local_68,0,0),
             pIVar8 = local_60, (bVar3 & 1) == 0)) {
LAB_02d91224:
            bVar3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(local_68,0,0);
            if ((bVar3 & 1) != 0) {
              uVar6 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                                (local_38,(MethodInfo *)0x0);
              iVar2 = local_50;
              iVar5 = local_54;
              il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
              local_68 = OVRPlugin_GetLayerTexture_mE4789C583C8282A195DCBBCCBBBEB5A44073A5C8
                                   (uVar6,iVar5,iVar2,0);
            }
            bVar3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(local_68,0,0);
            if ((bVar3 & 1) == 0) {
              if ((local_3a & 1) == 0) {
                local_70 = 4;
              }
              else {
                local_70 = 0x11;
              }
              local_6c = local_70;
              local_248 = (undefined4)local_2c;
              if ((*(int *)(local_38 + 0xec) == 2) || (*(int *)(local_38 + 0xec) == 4)) {
                local_60 = (Il2CppObject *)
                           Cubemap_CreateExternalTexture_m22D6FBF51B28F65E507FD3AB0A3BA98C6369BDD9
                                     (local_248,local_70,local_39 & 1,local_68,0);
              }
              else {
                uStack_254 = (undefined4)((ulong)local_2c >> 0x20);
                local_60 = (Il2CppObject *)
                           Texture2D_CreateExternalTexture_mF821F07B386D19D124696C9A6F6EBEA84212B112
                                     (local_248,uStack_254,local_70,local_39 & 1,1,local_68,0);
              }
              iVar5 = local_50;
              pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                         (local_38 + 0x128);
              NullCheck(pLVar13);
              lVar9 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                                (pLVar13,(long)iVar5);
              iVar5 = local_54;
              pIVar8 = local_60;
              this_00 = *(Il2CppArray **)(lVar9 + 0x10);
              NullCheck(this_00);
              ArrayElementTypeCheck(this_00,pIVar8);
              TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::SetAt
                        ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)this_00,
                         (long)iVar5,(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700 *)pIVar8);
              iVar5 = local_50;
              pLVar13 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                         (local_38 + 0x128);
              NullCheck(pLVar13);
              lVar11 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                                 (pLVar13,(long)iVar5);
              iVar5 = local_54;
              lVar9 = local_68;
              pIVar14 = *(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)(lVar11 + 0x18);
              NullCheck(pIVar14);
              IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::SetAt
                        (pIVar14,(long)iVar5,lVar9);
              local_49 = 1;
            }
          }
          else {
            local_1d0 = (int)local_2c;
            NullCheck(local_60);
            iVar5 = VirtualFuncInvoker0<int>::Invoke(5,pIVar8);
            pIVar8 = local_60;
            if (local_1d0 != iVar5) goto LAB_02d91224;
            iStack_1ec = (int)((ulong)local_2c >> 0x20);
            NullCheck(local_60);
            iVar5 = VirtualFuncInvoker0<int>::Invoke(7,pIVar8);
            if (iStack_1ec != iVar5) goto LAB_02d91224;
          }
        }
      }
      local_21 = local_49 & 1;
    }
  }
  else {
    local_80 = *(undefined8 *)(local_38 + 0x110);
    local_81 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(local_80,0,0);
    local_81 = local_81 & 1;
    if (local_81 != 0) {
      local_88 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                           (local_38,(MethodInfo *)0x0);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      local_90 = OVRPlugin_GetLayerAndroidSurfaceObject_m8DE03D3352A89AEC9F67BDEB8C3026140A264B97
                           (local_88,0);
      *(undefined8 *)(local_38 + 0x110) = local_90;
      local_98 = *(undefined8 *)(local_38 + 0x110);
      local_99 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(local_98,0,0);
      local_99 = local_99 & 1;
      if (local_99 != 0) {
        local_b0 = (Il2CppArray *)
                   SZArrayNew(*(Il2CppClass **)
                               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                              ,1);
        local_c0 = *(undefined8 *)(local_38 + 0x110);
        local_b8 = local_c0;
        local_a8 = local_b0;
        pIVar8 = (Il2CppObject *)
                 Box(*(Il2CppClass **)
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                     ,&local_c0);
        NullCheck(local_b0);
        ArrayElementTypeCheck(local_b0,pIVar8);
        ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
                  ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)local_b0,0,pIVar8);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                  );
        Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__3__
                   ,local_b0,0);
        if (*(long *)(local_38 + 0x118) != 0) {
          pEVar12 = *(ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A **)
                     (local_38 + 0x118);
          NullCheck(pEVar12);
          ExternalSurfaceObjectCreated_Invoke_m926D26868671FE881914F508F6A3B29907C0812C_inline
                    (pEVar12,(MethodInfo *)0x0);
        }
      }
    }
    local_21 = 0;
  }
  return local_21;
}


