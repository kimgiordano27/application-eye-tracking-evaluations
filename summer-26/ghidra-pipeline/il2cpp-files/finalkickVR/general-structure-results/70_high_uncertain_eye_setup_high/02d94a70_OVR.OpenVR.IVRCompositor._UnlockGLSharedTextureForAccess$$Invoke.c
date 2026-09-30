/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._UnlockGLSharedTextureForAccess$$Invoke
ENTRY_POINT: 02d94a70
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_13;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess__Invoke
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 *__src;
  long lVar6;
  TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *this;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x29;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  
  do {
    uVar3 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(param_5);
    *(undefined4 *)(in_stack_00000068 + 0x52) = uVar3;
    if (*(int *)(in_stack_00000068 + 0x52) + -0xb == 0) {
      *(undefined4 *)(in_stack_00000068 + 0x69) = 1;
    }
    else {
      uVar3 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545
                        (*(int *)(in_stack_00000068 + 0x52) + -0xb,0);
      *(undefined4 *)((long)in_stack_00000068 + 0x28c) = uVar3;
      *(uint *)(in_stack_00000068 + 0x69) = (uint)(*(int *)((long)in_stack_00000068 + 0x28c) == 8);
    }
    *(bool *)(unaff_x29 + -0x4a) = *(int *)(in_stack_00000068 + 0x69) != 0;
    in_stack_00000068[0x50] = in_stack_00000068[0x76];
    NullCheck((void *)in_stack_00000068[0x50]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(5,(Il2CppObject *)in_stack_00000068[0x50]);
    *(undefined4 *)((long)in_stack_00000068 + 0x27c) = uVar3;
    in_stack_00000068[0x4e] = *(undefined8 *)(in_stack_00000068[0x7c] + 0xf8);
    *(undefined4 *)((long)in_stack_00000068 + 0x26c) =
         *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
    NullCheck((void *)in_stack_00000068[0x4e]);
    *(undefined4 *)(in_stack_00000068 + 0x4d) = *(undefined4 *)((long)in_stack_00000068 + 0x26c);
    uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                      ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                       in_stack_00000068[0x4e],(long)*(int *)(in_stack_00000068 + 0x4d));
    in_stack_00000068[0x4c] = uVar5;
    NullCheck((void *)in_stack_00000068[0x4c]);
    uVar3 = VirtualFuncInvoker0<int>::Invoke(5,(Il2CppObject *)in_stack_00000068[0x4c]);
    *(undefined4 *)((long)in_stack_00000068 + 0x25c) = uVar3;
    if (*(int *)((long)in_stack_00000068 + 0x27c) == *(int *)((long)in_stack_00000068 + 0x25c)) {
      in_stack_00000068[0x4a] = in_stack_00000068[0x76];
      NullCheck((void *)in_stack_00000068[0x4a]);
      uVar3 = VirtualFuncInvoker0<int>::Invoke(7,(Il2CppObject *)in_stack_00000068[0x4a]);
      *(undefined4 *)((long)in_stack_00000068 + 0x24c) = uVar3;
      in_stack_00000068[0x48] = *(undefined8 *)(in_stack_00000068[0x7c] + 0xf8);
      *(undefined4 *)((long)in_stack_00000068 + 0x23c) =
           *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
      NullCheck((void *)in_stack_00000068[0x48]);
      *(undefined4 *)(in_stack_00000068 + 0x47) = *(undefined4 *)((long)in_stack_00000068 + 0x23c);
      uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                        ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                         in_stack_00000068[0x48],(long)*(int *)(in_stack_00000068 + 0x47));
      in_stack_00000068[0x46] = uVar5;
      NullCheck((void *)in_stack_00000068[0x46]);
      uVar3 = VirtualFuncInvoker0<int>::Invoke(7,(Il2CppObject *)in_stack_00000068[0x46]);
      *(undefined4 *)((long)in_stack_00000068 + 0x22c) = uVar3;
      *(uint *)((long)in_stack_00000068 + 0x344) =
           (uint)(*(int *)((long)in_stack_00000068 + 0x24c) ==
                 *(int *)((long)in_stack_00000068 + 0x22c));
    }
    else {
      *(undefined4 *)((long)in_stack_00000068 + 0x344) = 0;
    }
    *(bool *)(unaff_x29 + -0x4b) = *(int *)((long)in_stack_00000068 + 0x344) != 0;
    in_stack_00000068[0x44] = *(undefined8 *)(in_stack_00000068[0x7c] + 0xf8);
    *(undefined4 *)((long)in_stack_00000068 + 0x21c) =
         *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
    NullCheck((void *)in_stack_00000068[0x44]);
    *(undefined4 *)(in_stack_00000068 + 0x43) = *(undefined4 *)((long)in_stack_00000068 + 0x21c);
    uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                      ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                       in_stack_00000068[0x44],(long)*(int *)(in_stack_00000068 + 0x43));
    in_stack_00000068[0x42] = uVar5;
    NullCheck((void *)in_stack_00000068[0x42]);
    uVar3 = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023
                      (in_stack_00000068[0x42]);
    *(undefined4 *)((long)in_stack_00000068 + 0x20c) = uVar3;
    in_stack_00000068[0x40] = in_stack_00000068[0x76];
    NullCheck((void *)in_stack_00000068[0x40]);
    uVar3 = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023
                      (in_stack_00000068[0x40],0);
    *(undefined4 *)((long)in_stack_00000068 + 0x1fc) = uVar3;
    *(bool *)(unaff_x29 + -0x4c) =
         *(int *)((long)in_stack_00000068 + 0x20c) == *(int *)((long)in_stack_00000068 + 0x1fc);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
    bVar2 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(0);
    if ((bVar2 & 1) == 0) {
      *(undefined4 *)(in_stack_00000068 + 0x68) = 0;
    }
    else {
      *(uint *)(in_stack_00000068 + 0x68) = (uint)((*(byte *)(unaff_x29 + -0x4a) & 1) == 0);
    }
    if ((*(uint *)(in_stack_00000068 + 0x68) & (uint)(*(byte *)(unaff_x29 + -0x4b) & 1) &
        (uint)(*(byte *)(unaff_x29 + -0x4c) & 1)) == 0) {
      *(undefined4 *)(in_stack_00000068 + 0x75) = 0;
      while (*(int *)(in_stack_00000068 + 0x75) < *(int *)((long)in_stack_00000068 + 0x3dc)) {
        in_stack_00000068[0x74] = 0;
        in_stack_00000068[0x3a] = *in_stack_00000060;
        *(undefined4 *)((long)in_stack_00000068 + 0x1cc) = *(undefined4 *)(in_stack_00000068 + 0x3a)
        ;
        *(undefined4 *)(in_stack_00000068 + 0x39) = *(undefined4 *)(in_stack_00000068 + 0x75);
        *(int *)((long)in_stack_00000068 + 0x39c) =
             *(int *)((long)in_stack_00000068 + 0x1cc) >>
             (*(uint *)(in_stack_00000068 + 0x39) & 0x1f);
        *(undefined4 *)((long)in_stack_00000068 + 0x1c4) =
             *(undefined4 *)((long)in_stack_00000068 + 0x39c);
        if (*(int *)((long)in_stack_00000068 + 0x1c4) < 1) {
          *(undefined4 *)((long)in_stack_00000068 + 0x39c) = 1;
        }
        in_stack_00000068[0x37] = *in_stack_00000060;
        *(undefined4 *)((long)in_stack_00000068 + 0x1b4) =
             *(undefined4 *)((long)in_stack_00000068 + 0x1bc);
        *(undefined4 *)(in_stack_00000068 + 0x36) = *(undefined4 *)(in_stack_00000068 + 0x75);
        *(int *)(in_stack_00000068 + 0x73) =
             *(int *)((long)in_stack_00000068 + 0x1b4) >>
             (*(uint *)(in_stack_00000068 + 0x36) & 0x1f);
        *(undefined4 *)((long)in_stack_00000068 + 0x1ac) = *(undefined4 *)(in_stack_00000068 + 0x73)
        ;
        if (*(int *)((long)in_stack_00000068 + 0x1ac) < 1) {
          *(undefined4 *)(in_stack_00000068 + 0x73) = 1;
        }
        *(undefined4 *)(in_stack_00000068 + 0x35) = *(undefined4 *)((long)in_stack_00000068 + 0x39c)
        ;
        *(undefined4 *)((long)in_stack_00000068 + 0x1a4) = *(undefined4 *)(in_stack_00000068 + 0x73)
        ;
        *(undefined4 *)(in_stack_00000068 + 0x34) = *(undefined4 *)(in_stack_00000068 + 0x78);
        __src = (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 *)
                (unaff_x29 + -0x94);
        RenderTextureDescriptor__ctor_mE27A3C225736C1F806C12A7C31C0DC66A0AFE61B
                  (__src,*(undefined4 *)(in_stack_00000068 + 0x35),
                   *(undefined4 *)((long)in_stack_00000068 + 0x1a4),
                   *(undefined4 *)(in_stack_00000068 + 0x34),0);
        *(undefined4 *)((long)in_stack_00000068 + 0x19c) =
             *(undefined4 *)((long)in_stack_00000068 + 0x3d4);
        RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline
                  (__src,*(int *)((long)in_stack_00000068 + 0x19c),(MethodInfo *)0x0);
        RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539(__src,1,0);
        RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414
                  (__src,0,0);
        RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429(__src,1,0);
        memcpy(&stack0x00000290,__src,0x34);
        memcpy(&stack0x00000254,&stack0x00000290,0x34);
        uVar5 = RenderTexture_GetTemporary_mA8C827B80D3C07D0B8CDF7F5270FB5D3E53DD235
                          (&stack0x00000254,0);
        in_stack_00000068[0x2c] = uVar5;
        in_stack_00000068[0x74] = in_stack_00000068[0x2c];
        in_stack_00000068[0x24] = in_stack_00000068[0x74];
        NullCheck((void *)in_stack_00000068[0x24]);
        bVar2 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006
                          (in_stack_00000068[0x24],0);
        if ((bVar2 & 1) == 0) {
          in_stack_00000068[0x22] = in_stack_00000068[0x74];
          NullCheck((void *)in_stack_00000068[0x22]);
          RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(in_stack_00000068[0x22],0);
        }
        in_stack_00000068[0x20] = in_stack_00000068[0x74];
        NullCheck((void *)in_stack_00000068[0x20]);
        RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32
                  (in_stack_00000068[0x20],0);
        in_stack_00000068[0x6b] = 0;
        *(undefined4 *)((long)in_stack_00000068 + 0xfc) =
             *(undefined4 *)(in_stack_00000068[0x7c] + 0xec);
        if ((*(int *)((long)in_stack_00000068 + 0xfc) == 2) ||
           (*(undefined4 *)(in_stack_00000068 + 0x1f) =
                 *(undefined4 *)(in_stack_00000068[0x7c] + 0xec),
           *(int *)(in_stack_00000068 + 0x1f) == 4)) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
          lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000080);
          in_stack_00000068[0x1d] = *(undefined8 *)(lVar6 + 0x10);
          in_stack_00000068[0x6b] = in_stack_00000068[0x1d];
        }
        else {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
          lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000080);
          in_stack_00000068[0x1e] = *(undefined8 *)(lVar6 + 8);
          in_stack_00000068[0x6b] = in_stack_00000068[0x1e];
        }
        in_stack_00000068[0x1c] = in_stack_00000068[0x6b];
        if ((*(byte *)(unaff_x29 + -0x49) & 1) == 0) {
          in_stack_00000068[0x65] = *in_stack_00000090;
          in_stack_00000068[100] = in_stack_00000068[0x1c];
          *(undefined4 *)((long)in_stack_00000068 + 0x31c) = 0;
          in_stack_00000068[0x62] = in_stack_00000068[0x65];
          in_stack_00000068[0x61] = in_stack_00000068[100];
        }
        else {
          in_stack_00000068[0x67] = *in_stack_00000090;
          in_stack_00000068[0x66] = in_stack_00000068[0x1c];
          *(undefined4 *)((long)in_stack_00000068 + 0x31c) = 1;
          in_stack_00000068[0x62] = in_stack_00000068[0x67];
          in_stack_00000068[0x61] = in_stack_00000068[0x66];
        }
        NullCheck((void *)in_stack_00000068[0x61]);
        Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A
                  (in_stack_00000068[0x61],in_stack_00000068[0x62],
                   *(undefined4 *)((long)in_stack_00000068 + 0x31c),0);
        *(undefined4 *)(in_stack_00000068 + 0x1b) = *(undefined4 *)(in_stack_00000068[0x7c] + 0xec);
        if ((*(int *)(in_stack_00000068 + 0x1b) == 2) ||
           (*(undefined4 *)((long)in_stack_00000068 + 0xd4) =
                 *(undefined4 *)(in_stack_00000068[0x7c] + 0xec),
           *(int *)((long)in_stack_00000068 + 0xd4) == 4)) {
          *(undefined4 *)((long)in_stack_00000068 + 0x354) = 0;
          while (*(int *)((long)in_stack_00000068 + 0x354) < 6) {
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
            lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000080);
            *in_stack_00000068 = *(undefined8 *)(lVar6 + 0x10);
            uVar3 = *(undefined4 *)((long)in_stack_00000068 + 0x354);
            NullCheck((void *)*in_stack_00000068);
            Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A
                      (*in_stack_00000068,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass1_0_<CreateMapOverlaySize>b__1__
                       ,uVar3);
            this = *(TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 **)
                    (in_stack_00000068[0x7c] + 0xf8);
            iVar1 = *(int *)((long)in_stack_00000068 + 0x3bc);
            NullCheck(this);
            uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt(this,(long)iVar1)
            ;
            uVar7 = in_stack_00000068[0x74];
            lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000080);
            uVar8 = *(undefined8 *)(lVar6 + 0x10);
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
            Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(uVar5,uVar7,uVar8,0);
            Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718
                      (in_stack_00000068[0x74],0,0,in_stack_00000068[0x76],
                       *(undefined4 *)((long)in_stack_00000068 + 0x354),
                       *(undefined4 *)(in_stack_00000068 + 0x75),0);
            uVar3 = il2cpp_codegen_add<int,int>(*(int *)((long)in_stack_00000068 + 0x354),1);
            *(undefined4 *)((long)in_stack_00000068 + 0x354) = uVar3;
          }
        }
        else {
          in_stack_00000068[0x19] = in_stack_00000068[0x6b];
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
          uVar3 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
          *(undefined4 *)((long)in_stack_00000068 + 0xc4) = uVar3;
          if (*(int *)((long)in_stack_00000068 + 0xc4) == 3) {
            in_stack_00000068[0x60] = *in_stack_00000098;
            in_stack_00000068[0x5f] = in_stack_00000068[0x19];
            *(undefined4 *)((long)in_stack_00000068 + 0x2e4) = 1;
            in_stack_00000068[0x5b] = in_stack_00000068[0x60];
            in_stack_00000068[0x5a] = in_stack_00000068[0x5f];
          }
          else {
            in_stack_00000068[0x5e] = *in_stack_00000098;
            in_stack_00000068[0x5d] = in_stack_00000068[0x19];
            *(undefined4 *)((long)in_stack_00000068 + 0x2e4) = 0;
            in_stack_00000068[0x5b] = in_stack_00000068[0x5e];
            in_stack_00000068[0x5a] = in_stack_00000068[0x5d];
          }
          NullCheck((void *)in_stack_00000068[0x5a]);
          Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A
                    (in_stack_00000068[0x5a],in_stack_00000068[0x5b],
                     *(undefined4 *)((long)in_stack_00000068 + 0x2e4),0);
          if ((*(byte *)(in_stack_00000068[0x7c] + 0xac) & 1) == 0) {
            in_stack_00000068[8] = *(undefined8 *)(in_stack_00000068[0x7c] + 0xf8);
            *(undefined4 *)((long)in_stack_00000068 + 0x3c) =
                 *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
            NullCheck((void *)in_stack_00000068[8]);
            *(undefined4 *)(in_stack_00000068 + 7) = *(undefined4 *)((long)in_stack_00000068 + 0x3c)
            ;
            uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                              ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                               in_stack_00000068[8],(long)*(int *)(in_stack_00000068 + 7));
            in_stack_00000068[6] = uVar5;
            in_stack_00000068[5] = in_stack_00000068[0x74];
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
            lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000080);
            in_stack_00000068[4] = *(undefined8 *)(lVar6 + 8);
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
            Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F
                      (in_stack_00000068[6],in_stack_00000068[5],in_stack_00000068[4],0);
          }
          else {
            in_stack_00000068[0x17] = *(undefined8 *)(in_stack_00000068[0x7c] + 0xf8);
            *(undefined4 *)((long)in_stack_00000068 + 0xb4) =
                 *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
            NullCheck((void *)in_stack_00000068[0x17]);
            *(undefined4 *)(in_stack_00000068 + 0x16) =
                 *(undefined4 *)((long)in_stack_00000068 + 0xb4);
            uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                              ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                               in_stack_00000068[0x17],(long)*(int *)(in_stack_00000068 + 0x16));
            in_stack_00000068[0x15] = uVar5;
            in_stack_00000068[0x14] = in_stack_00000068[0x74];
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
            lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000080);
            in_stack_00000068[0x13] = *(undefined8 *)(lVar6 + 8);
            *(undefined4 *)((long)in_stack_00000068 + 0x94) =
                 *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
            uVar3 = OVROverlay_GetBlitRect_mF6F1996AB7BA83A169ADAB0728634CC9B62281E2
                              (in_stack_00000068[0x7c],
                               *(undefined4 *)((long)in_stack_00000068 + 0x94));
            *(undefined4 *)(in_stack_00000068 + 0xd) = uVar3;
            *(undefined4 *)((long)in_stack_00000068 + 0x6c) = param_2;
            *(undefined4 *)(in_stack_00000068 + 0xe) = param_3;
            *(undefined4 *)((long)in_stack_00000068 + 0x74) = param_4;
            in_stack_00000068[0x10] = in_stack_00000068[0xe];
            in_stack_00000068[0xf] = in_stack_00000068[0xd];
            bVar2 = *(byte *)(in_stack_00000068[0x7c] + 0x68);
            in_stack_00000068[10] = in_stack_00000068[0x10];
            in_stack_00000068[9] = in_stack_00000068[0xf];
            param_2 = *(undefined4 *)((long)in_stack_00000068 + 0x4c);
            param_3 = *(undefined4 *)(in_stack_00000068 + 10);
            param_4 = *(undefined4 *)((long)in_stack_00000068 + 0x54);
            OVROverlay_BlitSubImage_mAC5F33246DE4AA1EFD2EEC09C7C945B5AB9530B1
                      (*(undefined4 *)(in_stack_00000068 + 9),in_stack_00000068[0x7c],
                       in_stack_00000068[0x15],in_stack_00000068[0x14],in_stack_00000068[0x13],
                       bVar2 & 1,0);
          }
          in_stack_00000068[3] = in_stack_00000068[0x74];
          in_stack_00000068[2] = in_stack_00000068[0x76];
          *(undefined4 *)((long)in_stack_00000068 + 0xc) = *(undefined4 *)(in_stack_00000068 + 0x75)
          ;
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
          Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718
                    (in_stack_00000068[3],0,0,in_stack_00000068[2],0,
                     *(undefined4 *)((long)in_stack_00000068 + 0xc),0);
        }
        uVar5 = in_stack_00000068[0x74];
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000088);
        bVar2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
        if ((bVar2 & 1) != 0) {
          RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2
                    (in_stack_00000068[0x74],0);
        }
        uVar3 = il2cpp_codegen_add<int,int>(*(int *)(in_stack_00000068 + 0x75),1);
        *(undefined4 *)(in_stack_00000068 + 0x75) = uVar3;
      }
    }
    else {
      in_stack_00000068[0x3e] = *(undefined8 *)(in_stack_00000068[0x7c] + 0xf8);
      *(undefined4 *)((long)in_stack_00000068 + 0x1ec) =
           *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
      NullCheck((void *)in_stack_00000068[0x3e]);
      *(undefined4 *)(in_stack_00000068 + 0x3d) = *(undefined4 *)((long)in_stack_00000068 + 0x1ec);
      uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                        ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                         in_stack_00000068[0x3e],(long)*(int *)(in_stack_00000068 + 0x3d));
      in_stack_00000068[0x3c] = uVar5;
      in_stack_00000068[0x3b] = in_stack_00000068[0x76];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
      Graphics_CopyTexture_m613750C66DF707DB4F24570A3402EE94257C0C58
                (in_stack_00000068[0x3c],in_stack_00000068[0x3b],0);
    }
    do {
      uVar3 = il2cpp_codegen_add<int,int>(*(int *)((long)in_stack_00000068 + 0x3bc),1);
      *(undefined4 *)((long)in_stack_00000068 + 0x3bc) = uVar3;
      iVar1 = *(int *)((long)in_stack_00000068 + 0x3bc);
      iVar4 = OVROverlay_get_texturesPerStage_m673F2EE33C14D1A244CBF00394A423B3E81C0D42
                        (in_stack_00000068[0x7c],0);
      if (iVar4 <= iVar1) {
        *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x31) & 1;
        return *(byte *)(unaff_x29 + -1) & 1;
      }
      in_stack_00000068[0x58] = *(undefined8 *)(in_stack_00000068[0x7c] + 0x128);
      *(undefined4 *)((long)in_stack_00000068 + 700) =
           *(undefined4 *)((long)in_stack_00000068 + 0x3bc);
      NullCheck((void *)in_stack_00000068[0x58]);
      lVar6 = LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB::GetAddressAt
                        ((LayerTextureU5BU5D_t21B057C4E8B2314D52C66E3D229DB5988584F4CB *)
                         in_stack_00000068[0x58],(long)*(int *)((long)in_stack_00000068 + 700));
      in_stack_00000068[0x56] = *(undefined8 *)(lVar6 + 0x10);
      *(undefined4 *)((long)in_stack_00000068 + 0x2ac) = *(undefined4 *)(in_stack_00000068 + 0x7a);
      NullCheck((void *)in_stack_00000068[0x56]);
      *(undefined4 *)(in_stack_00000068 + 0x55) = *(undefined4 *)((long)in_stack_00000068 + 0x2ac);
      uVar5 = TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46::GetAt
                        ((TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46 *)
                         in_stack_00000068[0x56],(long)*(int *)(in_stack_00000068 + 0x55));
      in_stack_00000068[0x54] = uVar5;
      in_stack_00000068[0x76] = in_stack_00000068[0x54];
      in_stack_00000068[0x53] = in_stack_00000068[0x76];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000088);
      bVar2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                        (in_stack_00000068[0x53],0);
    } while ((bVar2 & 1) != 0);
    *(undefined1 *)(unaff_x29 + -0x31) = 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
    bVar2 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(0);
    if ((bVar2 & 1) == 0) {
      *(uint *)((long)in_stack_00000068 + 0x34c) =
           (uint)((*(byte *)(in_stack_00000068[0x7c] + 0x100) & 1) == 0);
    }
    else {
      *(undefined4 *)((long)in_stack_00000068 + 0x34c) = 0;
    }
    *(bool *)(unaff_x29 + -0x49) = *(int *)((long)in_stack_00000068 + 0x34c) != 0;
    param_5 = 0;
  } while( true );
}


