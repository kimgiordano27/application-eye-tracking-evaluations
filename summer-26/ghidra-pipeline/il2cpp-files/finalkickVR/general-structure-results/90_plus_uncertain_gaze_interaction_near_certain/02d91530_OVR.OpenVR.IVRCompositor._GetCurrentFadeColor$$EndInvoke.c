/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetCurrentFadeColor$$EndInvoke
ENTRY_POINT: 02d91530
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_6
*/


byte OVR_OpenVR_IVRCompositor__GetCurrentFadeColor__EndInvoke(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700 *pTVar7;
  LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *pLVar8;
  Il2CppArray *this;
  IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 *this_00;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined4 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  do {
    uVar3 = il2cpp_codegen_add<int,int>(param_1,1);
    in_stack_00000030[0x8d] = uVar3;
    while (*(int *)(*(long *)(in_stack_00000030 + 0x94) + 0x1ac) <= (int)in_stack_00000030[0x8d]) {
      uVar3 = il2cpp_codegen_add<int,int>(in_stack_00000030[0x8e],1);
      in_stack_00000030[0x8e] = uVar3;
      iVar1 = in_stack_00000030[0x8e];
      iVar4 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                        (*(undefined8 *)(in_stack_00000030 + 0x94),0);
      if (iVar4 <= iVar1) {
        *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x29) & 1;
        return *(byte *)(unaff_x29 + -1) & 1;
      }
      *(undefined8 *)(in_stack_00000030 + 0x62) =
           *(undefined8 *)(*(long *)(in_stack_00000030 + 0x94) + 0x128);
      in_stack_00000030[0x61] = in_stack_00000030[0x8e];
      NullCheck(*(void **)(in_stack_00000030 + 0x62));
      lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                        (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                          (in_stack_00000030 + 0x62),(long)(int)in_stack_00000030[0x61]);
      *(undefined8 *)(in_stack_00000030 + 0x5e) = *(undefined8 *)(lVar5 + 0x10);
      if (*(long *)(in_stack_00000030 + 0x5e) == 0) {
        *(undefined8 *)(in_stack_00000030 + 0x5c) =
             *(undefined8 *)(*(long *)(in_stack_00000030 + 0x94) + 0x128);
        in_stack_00000030[0x5b] = in_stack_00000030[0x8e];
        NullCheck(*(void **)(in_stack_00000030 + 0x5c));
        in_stack_00000030[0x5a] = *(undefined4 *)(*(long *)(in_stack_00000030 + 0x94) + 0x1ac);
        uVar6 = SZArrayNew(*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxv_u8__,
                           in_stack_00000030[0x5a]);
        *(undefined8 *)(in_stack_00000030 + 0x58) = uVar6;
        uVar6 = *(undefined8 *)(in_stack_00000030 + 0x58);
        lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                            (in_stack_00000030 + 0x5c),(long)(int)in_stack_00000030[0x5b]);
        *(undefined8 *)(lVar5 + 0x10) = uVar6;
        lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                            (in_stack_00000030 + 0x5c),(long)(int)in_stack_00000030[0x5b]);
        Il2CppCodeGenWriteBarrier((void **)(lVar5 + 0x10),*(void **)(in_stack_00000030 + 0x58));
      }
      *(undefined8 *)(in_stack_00000030 + 0x56) =
           *(undefined8 *)(*(long *)(in_stack_00000030 + 0x94) + 0x128);
      in_stack_00000030[0x55] = in_stack_00000030[0x8e];
      NullCheck(*(void **)(in_stack_00000030 + 0x56));
      lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                        (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                          (in_stack_00000030 + 0x56),(long)(int)in_stack_00000030[0x55]);
      *(undefined8 *)(in_stack_00000030 + 0x52) = *(undefined8 *)(lVar5 + 0x18);
      if (*(long *)(in_stack_00000030 + 0x52) == 0) {
        *(undefined8 *)(in_stack_00000030 + 0x50) =
             *(undefined8 *)(*(long *)(in_stack_00000030 + 0x94) + 0x128);
        in_stack_00000030[0x4f] = in_stack_00000030[0x8e];
        NullCheck(*(void **)(in_stack_00000030 + 0x50));
        in_stack_00000030[0x4e] = *(undefined4 *)(*(long *)(in_stack_00000030 + 0x94) + 0x1ac);
        uVar6 = SZArrayNew(*(Il2CppClass **)
                            Method_System_Reflection_RuntimeFieldInfo_SetValueDirect__,
                           in_stack_00000030[0x4e]);
        *(undefined8 *)(in_stack_00000030 + 0x4c) = uVar6;
        uVar6 = *(undefined8 *)(in_stack_00000030 + 0x4c);
        lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                            (in_stack_00000030 + 0x50),(long)(int)in_stack_00000030[0x4f]);
        *(undefined8 *)(lVar5 + 0x18) = uVar6;
        lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                            (in_stack_00000030 + 0x50),(long)(int)in_stack_00000030[0x4f]);
        Il2CppCodeGenWriteBarrier((void **)(lVar5 + 0x18),*(void **)(in_stack_00000030 + 0x4c));
      }
      in_stack_00000030[0x8d] = 0;
    }
    *(undefined8 *)(in_stack_00000030 + 0x4a) =
         *(undefined8 *)(*(long *)(in_stack_00000030 + 0x94) + 0x128);
    in_stack_00000030[0x49] = in_stack_00000030[0x8e];
    NullCheck(*(void **)(in_stack_00000030 + 0x4a));
    lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                      (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                        (in_stack_00000030 + 0x4a),(long)(int)in_stack_00000030[0x49]);
    *(undefined8 *)(in_stack_00000030 + 0x46) = *(undefined8 *)(lVar5 + 0x10);
    in_stack_00000030[0x45] = in_stack_00000030[0x8d];
    NullCheck(*(void **)(in_stack_00000030 + 0x46));
    in_stack_00000030[0x44] = in_stack_00000030[0x45];
    uVar6 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                      (*(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)
                        (in_stack_00000030 + 0x46),(long)(int)in_stack_00000030[0x44]);
    *(undefined8 *)(in_stack_00000030 + 0x42) = uVar6;
    *(undefined8 *)(in_stack_00000030 + 0x8a) = *(undefined8 *)(in_stack_00000030 + 0x42);
    *(undefined8 *)(in_stack_00000030 + 0x40) =
         *(undefined8 *)(*(long *)(in_stack_00000030 + 0x94) + 0x128);
    in_stack_00000030[0x3f] = in_stack_00000030[0x8e];
    NullCheck(*(void **)(in_stack_00000030 + 0x40));
    lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                      (*(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                        (in_stack_00000030 + 0x40),(long)(int)in_stack_00000030[0x3f]);
    *(undefined8 *)(in_stack_00000030 + 0x3c) = *(undefined8 *)(lVar5 + 0x18);
    in_stack_00000030[0x3b] = in_stack_00000030[0x8d];
    NullCheck(*(void **)(in_stack_00000030 + 0x3c));
    in_stack_00000030[0x3a] = in_stack_00000030[0x3b];
    uVar6 = IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::GetAt
                      (*(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)
                        (in_stack_00000030 + 0x3c),(long)(int)in_stack_00000030[0x3a]);
    *(undefined8 *)(in_stack_00000030 + 0x38) = uVar6;
    *(undefined8 *)(in_stack_00000030 + 0x88) = *(undefined8 *)(in_stack_00000030 + 0x38);
    *(undefined8 *)(in_stack_00000030 + 0x36) = *(undefined8 *)(in_stack_00000030 + 0x8a);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bVar2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                      (*(undefined8 *)(in_stack_00000030 + 0x36),0);
    if ((bVar2 & 1) == 0) {
LAB_02d91224:
      *(undefined8 *)(in_stack_00000030 + 0x1e) = *(undefined8 *)(in_stack_00000030 + 0x88);
      bVar2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271
                        (*(undefined8 *)(in_stack_00000030 + 0x1e),0,0);
      if ((bVar2 & 1) != 0) {
        uVar3 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                          (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)
                            (in_stack_00000030 + 0x94),(MethodInfo *)0x0);
        in_stack_00000030[0x1c] = uVar3;
        in_stack_00000030[0x1b] = in_stack_00000030[0x8d];
        in_stack_00000030[0x1a] = in_stack_00000030[0x8e];
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
        uVar6 = OVRPlugin_GetLayerTexture_mE4789C583C8282A195DCBBCCBBBEB5A44073A5C8
                          (in_stack_00000030[0x1c],in_stack_00000030[0x1b],in_stack_00000030[0x1a],0
                          );
        *(undefined8 *)(in_stack_00000030 + 0x18) = uVar6;
        *(undefined8 *)(in_stack_00000030 + 0x88) = *(undefined8 *)(in_stack_00000030 + 0x18);
      }
      *(undefined8 *)(in_stack_00000030 + 0x16) = *(undefined8 *)(in_stack_00000030 + 0x88);
      bVar2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271
                        (*(undefined8 *)(in_stack_00000030 + 0x16),0,0);
      if ((bVar2 & 1) == 0) {
        if ((*(byte *)(unaff_x29 + -0x1a) & 1) == 0) {
          in_stack_00000030[0x86] = 4;
        }
        else {
          in_stack_00000030[0x86] = 0x11;
        }
        in_stack_00000030[0x87] = in_stack_00000030[0x86];
        in_stack_00000030[0x14] = *(undefined4 *)(*(long *)(in_stack_00000030 + 0x94) + 0xec);
        if ((in_stack_00000030[0x14] == 2) ||
           (in_stack_00000030[0x13] = *(undefined4 *)(*(long *)(in_stack_00000030 + 0x94) + 0xec),
           in_stack_00000030[0x13] == 4)) {
          *(undefined8 *)(in_stack_00000030 + 2) = *in_stack_00000028;
          in_stack_00000030[1] = in_stack_00000030[2];
          *in_stack_00000030 = in_stack_00000030[0x87];
          uVar6 = Cubemap_CreateExternalTexture_m22D6FBF51B28F65E507FD3AB0A3BA98C6369BDD9
                            (in_stack_00000030[1],*in_stack_00000030,
                             *(byte *)(unaff_x29 + -0x19) & 1,
                             *(undefined8 *)(in_stack_00000030 + 0x88),0);
          *(undefined8 *)(in_stack_00000030 + 0x8a) = uVar6;
        }
        else {
          *(undefined8 *)(in_stack_00000030 + 0x10) = *in_stack_00000028;
          in_stack_00000030[0xf] = in_stack_00000030[0x10];
          *(undefined8 *)(in_stack_00000030 + 0xc) = *in_stack_00000028;
          in_stack_00000030[0xb] = in_stack_00000030[0xd];
          in_stack_00000030[10] = in_stack_00000030[0x87];
          bVar2 = *(byte *)(unaff_x29 + -0x19);
          *(undefined8 *)(in_stack_00000030 + 6) = *(undefined8 *)(in_stack_00000030 + 0x88);
          uVar6 = Texture2D_CreateExternalTexture_mF821F07B386D19D124696C9A6F6EBEA84212B112
                            (in_stack_00000030[0xf],in_stack_00000030[0xb],in_stack_00000030[10],
                             bVar2 & 1,1,*(undefined8 *)(in_stack_00000030 + 6),0);
          *(undefined8 *)(in_stack_00000030 + 4) = uVar6;
          *(undefined8 *)(in_stack_00000030 + 0x8a) = *(undefined8 *)(in_stack_00000030 + 4);
        }
        pLVar8 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                  (*(long *)(in_stack_00000030 + 0x94) + 0x128);
        iVar1 = in_stack_00000030[0x8e];
        NullCheck(pLVar8);
        lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (pLVar8,(long)iVar1);
        this = *(Il2CppArray **)(lVar5 + 0x10);
        iVar1 = in_stack_00000030[0x8d];
        pTVar7 = *(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700 **)(in_stack_00000030 + 0x8a);
        NullCheck(this);
        ArrayElementTypeCheck(this,pTVar7);
        TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::SetAt
                  ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)this,(long)iVar1,
                   pTVar7);
        pLVar8 = *(LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB **)
                  (*(long *)(in_stack_00000030 + 0x94) + 0x128);
        iVar1 = in_stack_00000030[0x8e];
        NullCheck(pLVar8);
        lVar5 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                          (pLVar8,(long)iVar1);
        this_00 = *(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832 **)(lVar5 + 0x18);
        iVar1 = in_stack_00000030[0x8d];
        lVar5 = *(long *)(in_stack_00000030 + 0x88);
        NullCheck(this_00);
        IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832::SetAt(this_00,(long)iVar1,lVar5);
        *(undefined1 *)(unaff_x29 + -0x29) = 1;
      }
    }
    else {
      *(undefined8 *)(in_stack_00000030 + 0x32) = *(undefined8 *)(in_stack_00000030 + 0x88);
      bVar2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B
                        (*(undefined8 *)(in_stack_00000030 + 0x32),0,0);
      if ((bVar2 & 1) == 0) goto LAB_02d91224;
      *(undefined8 *)(in_stack_00000030 + 0x2e) = *in_stack_00000028;
      in_stack_00000030[0x2d] = in_stack_00000030[0x2e];
      *(undefined8 *)(in_stack_00000030 + 0x2a) = *(undefined8 *)(in_stack_00000030 + 0x8a);
      NullCheck(*(void **)(in_stack_00000030 + 0x2a));
      uVar3 = VirtualFuncInvoker0<int>::Invoke(5,*(Il2CppObject **)(in_stack_00000030 + 0x2a));
      in_stack_00000030[0x29] = uVar3;
      if (in_stack_00000030[0x2d] != in_stack_00000030[0x29]) goto LAB_02d91224;
      *(undefined8 *)(in_stack_00000030 + 0x26) = *in_stack_00000028;
      in_stack_00000030[0x25] = in_stack_00000030[0x27];
      *(undefined8 *)(in_stack_00000030 + 0x22) = *(undefined8 *)(in_stack_00000030 + 0x8a);
      NullCheck(*(void **)(in_stack_00000030 + 0x22));
      uVar3 = VirtualFuncInvoker0<int>::Invoke(7,*(Il2CppObject **)(in_stack_00000030 + 0x22));
      in_stack_00000030[0x21] = uVar3;
      if (in_stack_00000030[0x25] != in_stack_00000030[0x21]) goto LAB_02d91224;
    }
    param_1 = in_stack_00000030[0x8d];
  } while( true );
}


