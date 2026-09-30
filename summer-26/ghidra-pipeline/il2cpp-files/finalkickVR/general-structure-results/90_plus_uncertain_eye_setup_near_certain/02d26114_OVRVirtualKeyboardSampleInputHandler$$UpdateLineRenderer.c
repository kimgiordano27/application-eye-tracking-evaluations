/*
FUNCTION_NAME: OVRVirtualKeyboardSampleInputHandler$$UpdateLineRenderer
ENTRY_POINT: 02d26114
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_17;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRVirtualKeyboardSampleInputHandler__UpdateLineRenderer(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *pIVar10;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar11;
  void *pvVar12;
  void *pvVar13;
  Il2CppObject *pIVar14;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *this;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *pOVar15;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *pUVar16;
  long unaff_x29;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fStack000000000000001c;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000dc;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  void *in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *in_stack_00000110;
  void *in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *in_stack_00000130;
  void *in_stack_00000138;
  byte bStack0000000000000147;
  undefined4 in_stack_00000148;
  uint uStack000000000000014c;
  undefined4 in_stack_00000150;
  undefined4 uStack0000000000000154;
  Il2CppObject *in_stack_00000158;
  undefined4 in_stack_00000160;
  uint uStack0000000000000164;
  undefined4 in_stack_00000168;
  undefined4 uStack000000000000016c;
  Il2CppObject *in_stack_00000170;
  uint uStack000000000000017c;
  void *in_stack_00000180;
  void *in_stack_00000188;
  ulong in_stack_00000190;
  ulong in_stack_00000198;
  undefined4 in_stack_000001a0;
  undefined4 uStack00000000000001a4;
  undefined4 in_stack_000001a8;
  undefined4 uStack00000000000001ac;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  Il2CppObject *in_stack_000001c8;
  void *in_stack_000001d0;
  void *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19();
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
  NullCheck(pvVar13);
  uVar4 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8
                    (pvVar13,in_stack_00000050);
  pIVar14 = *(Il2CppObject **)(unaff_x29 + -0x20);
  NullCheck(pIVar14);
  uVar5 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                    (2,(Il2CppClass *)*in_stack_000000a0,pIVar14);
  uVar6 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(uVar5,in_stack_00000050);
  pIVar14 = *(Il2CppObject **)(unaff_x29 + -0x20);
  NullCheck(pIVar14);
  uVar5 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                    (4,(Il2CppClass *)*in_stack_000000a0,pIVar14);
  uVar7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(uVar5,in_stack_00000050);
  NullCheck(pvVar12);
  Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32
            (pvVar12,uVar4 & (uVar6 ^ 0xffffffff) | uVar7,in_stack_00000050);
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
  this = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
          (*(long *)(unaff_x29 + -8) + 0x88);
  NullCheck(this);
  uVar8 = RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(this,0);
  NullCheck(pvVar12);
  Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4
            (pvVar12,uVar8,in_stack_00000050);
  if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & 1) == 0) {
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
              (&stack0x00000358,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
    NullCheck(pvVar12);
    Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(0,0,0,0,pvVar12,0);
  }
  pIVar14 = *(Il2CppObject **)(unaff_x29 + -0x20);
  NullCheck(pIVar14);
  lVar9 = InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
          ::Invoke(0x36,(Il2CppClass *)*in_stack_000000a0,pIVar14);
  if (lVar9 == 0) {
    pvVar12 = *(void **)(unaff_x29 + -0x18);
    NullCheck(pvVar12);
    pGVar11 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
              Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    pvVar12 = (void *)Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3
                                (pGVar11,(MethodInfo *)*in_stack_000000a8);
    *(void **)(*(long *)(unaff_x29 + -8) + 0x48) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x48),pvVar12);
  }
  else {
    pIVar14 = *(Il2CppObject **)(unaff_x29 + -0x20);
    NullCheck(pIVar14);
    pIVar10 = (InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *)
              InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
              ::Invoke(0x36,(Il2CppClass *)*in_stack_000000a0,pIVar14);
    pvVar12 = *(void **)(unaff_x29 + -0x18);
    NullCheck(pvVar12);
    pGVar11 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
              Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12);
    NullCheck(pIVar10);
    pvVar12 = (void *)InstantiateMrcCameraDelegate_Invoke_mB6693C4AF7C65BE930BF160D96A8630F7D21E488_inline
                                (pIVar10,pGVar11,1,(MethodInfo *)0x0);
    *(void **)(*(long *)(unaff_x29 + -8) + 0x48) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x48),pvVar12);
  }
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
  NullCheck(pvVar12);
  Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47
            (pvVar12,*(undefined8 *)Method_System_IO_Stream_SynchronousAsyncResult_EndRead__);
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
  NullCheck(pvVar12);
  uVar8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(pvVar12,0);
  if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x10) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x68) = uVar8;
    pvVar12 = *(void **)(unaff_x29 + -0x10);
    NullCheck(pvVar12);
    uVar8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(pvVar12,0);
    *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x68);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x60) = uVar8;
    pOVar15 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
               (*(long *)(unaff_x29 + -8) + 0x18);
    NullCheck(pOVar15);
    uVar8 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                      (pOVar15,(MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
  }
  NullCheck(*(void **)(unaff_x29 + -0x78));
  Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234
            (*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x70));
  pGVar11 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
             (*(long *)(unaff_x29 + -8) + 0x48);
  NullCheck(pGVar11);
  uVar8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                    (pGVar11,(MethodInfo *)*in_stack_00000088);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
  bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
  if ((bVar3 & 1) != 0) {
    pGVar11 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
               (*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(pGVar11);
    uVar8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                      (pGVar11,(MethodInfo *)*in_stack_00000088);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(uVar8,0);
  }
  pGVar11 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
             (*(long *)(unaff_x29 + -8) + 0x48);
  NullCheck(pGVar11);
  uVar8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                    (pGVar11,(MethodInfo *)*in_stack_00000098);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
  bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
  if ((bVar3 & 1) != 0) {
    pGVar11 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
               (*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(pGVar11);
    uVar8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                      (pGVar11,(MethodInfo *)*in_stack_00000098);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(uVar8,0);
  }
  pGVar11 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
             (*(long *)(unaff_x29 + -8) + 0x48);
  NullCheck(pGVar11);
  pvVar12 = (void *)GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6
                              (pGVar11,(MethodInfo *)*in_stack_00000090);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x50) = pvVar12;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x50),pvVar12);
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(pvVar12);
  Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(pvVar12,*in_stack_000000b8);
  uVar8 = CameraExtensions_GetUniversalAdditionalCameraData_m38406768FA69BDC80D45CA7698EC0B8755448604
                    (*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50),0);
  *(undefined8 *)(unaff_x29 + -0x38) = uVar8;
  uVar8 = *(undefined8 *)(unaff_x29 + -0x38);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
  bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar8,0);
  if ((bVar3 & 1) != 0) {
    pUVar16 = *(UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 **)
               (unaff_x29 + -0x38);
    NullCheck(pUVar16);
    UniversalAdditionalCameraData_set_allowXRRendering_mE9DE096F60A0E523B8C06F7E660A6FF1387B07F7_inline
              (pUVar16,false,(MethodInfo *)0x0);
  }
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  pvVar13 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
  NullCheck(pvVar13);
  fVar17 = (float)Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(pvVar13);
  NullCheck(pvVar12);
  fStack000000000000001c = 1.0;
  il2cpp_codegen_add<float,float>(fVar17,1.0);
  Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(pvVar12,0);
  pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
            (&stack0x000001f0,0.5,0.0,0.5,fStack000000000000001c,(MethodInfo *)0x0);
  NullCheck(pvVar12);
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001e0._4_4_ = 0;
  uVar18 = 0;
  in_stack_000001e8._4_4_ = 0;
  uVar5 = in_stack_000001e0._4_4_;
  uVar19 = in_stack_000001e8._4_4_;
  Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(0,pvVar12,0);
  in_stack_000001d8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(in_stack_000001d8);
  Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(in_stack_000001d8,2,0);
  in_stack_000001d0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  in_stack_000001c8 = *(Il2CppObject **)(unaff_x29 + -0x20);
  NullCheck(in_stack_000001c8);
  in_stack_000001a0 =
       InterfaceFuncInvoker0<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>::Invoke
                 (0xc,(Il2CppClass *)*in_stack_000000a0,in_stack_000001c8);
  in_stack_000001b8 = CONCAT44(uVar19,uVar18);
  in_stack_000001b0 = CONCAT44(uVar5,in_stack_000001a0);
  uStack00000000000001a4 = uVar5;
  in_stack_000001a8 = uVar18;
  uStack00000000000001ac = uVar19;
  NullCheck(in_stack_000001d0);
  in_stack_00000198 = in_stack_000001b8;
  uVar2 = in_stack_00000198;
  in_stack_00000190 = in_stack_000001b0;
  uVar1 = in_stack_00000190;
  in_stack_00000190._4_4_ = (undefined4)(in_stack_000001b0 >> 0x20);
  uVar5 = in_stack_00000190._4_4_;
  in_stack_00000198._4_4_ = (undefined4)(in_stack_000001b8 >> 0x20);
  uVar19 = in_stack_00000198._4_4_;
  in_stack_00000190 = uVar1;
  in_stack_00000198 = uVar2;
  Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138
            (in_stack_000001b0 & 0xffffffff,uVar5,in_stack_000001b8 & 0xffffffff,uVar19,
             in_stack_000001d0,0);
  in_stack_00000188 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  in_stack_00000180 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(in_stack_00000180);
  uStack000000000000017c =
       Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(in_stack_00000180,0);
  in_stack_00000170 = *(Il2CppObject **)(unaff_x29 + -0x20);
  NullCheck(in_stack_00000170);
  in_stack_00000160 =
       InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                 (2,(Il2CppClass *)*in_stack_000000a0,in_stack_00000170);
  in_stack_00000168 = in_stack_00000160;
  uStack000000000000016c = in_stack_00000160;
  uStack0000000000000164 =
       LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(in_stack_00000160,0);
  in_stack_00000158 = *(Il2CppObject **)(unaff_x29 + -0x20);
  NullCheck(in_stack_00000158);
  in_stack_00000148 =
       InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                 (4,(Il2CppClass *)*in_stack_000000a0,in_stack_00000158);
  in_stack_00000150 = in_stack_00000148;
  uStack0000000000000154 = in_stack_00000148;
  uStack000000000000014c =
       LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(in_stack_00000148,0);
  NullCheck(in_stack_00000188);
  Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32
            (in_stack_00000188,
             uStack000000000000017c & (uStack0000000000000164 ^ 0xffffffff) | uStack000000000000014c
             ,0);
  bStack0000000000000147 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & 1;
  if (bStack0000000000000147 == 0) {
    in_stack_00000118 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
    in_stack_00000110 =
         *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
          (*(long *)(unaff_x29 + -8) + 0x98);
    NullCheck(in_stack_00000110);
    in_stack_00000108._4_4_ = 0;
    in_stack_00000100 =
         RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(in_stack_00000110,0);
    NullCheck(in_stack_00000118);
    Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4
              (in_stack_00000118,in_stack_00000100);
    in_stack_000000f8 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
    in_stack_000000e8 = 0;
    in_stack_000000f0 = 0;
    Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
              ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)&stack0x000000e8,0.0,0.0,1.0,1.0,
               (MethodInfo *)0x0);
    NullCheck(in_stack_000000f8);
    uStack00000000000000d4 = (undefined4)(in_stack_000000e8 >> 0x20);
    uStack00000000000000dc = (undefined4)(in_stack_000000f0 >> 0x20);
    Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19
              (in_stack_000000e8 & 0xffffffff,uStack00000000000000d4,in_stack_000000f0 & 0xffffffff,
               uStack00000000000000dc,in_stack_000000f8,0);
  }
  else {
    in_stack_00000138 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
    in_stack_00000130 =
         *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
          (*(long *)(unaff_x29 + -8) + 0x88);
    NullCheck(in_stack_00000130);
    in_stack_00000128._4_4_ = 0;
    in_stack_00000120 =
         RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(in_stack_00000130,0);
    NullCheck(in_stack_00000138);
    Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4
              (in_stack_00000138,in_stack_00000120,0);
  }
  pvVar12 = *(void **)(unaff_x29 + -0x18);
  NullCheck(pvVar12);
  pvVar12 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12,0);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x40) = pvVar12;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x40),pvVar12);
  return;
}


