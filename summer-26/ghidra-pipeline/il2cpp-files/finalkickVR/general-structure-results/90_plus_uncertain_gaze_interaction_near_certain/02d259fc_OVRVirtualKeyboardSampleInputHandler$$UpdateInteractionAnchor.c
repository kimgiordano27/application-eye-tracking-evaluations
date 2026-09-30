/*
FUNCTION_NAME: OVRVirtualKeyboardSampleInputHandler$$UpdateInteractionAnchor
ENTRY_POINT: 02d259fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 196
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21
*/


void OVRVirtualKeyboardSampleInputHandler__UpdateInteractionAnchor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar9;
  long lVar10;
  InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *pIVar11;
  void *pvVar12;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *pOVar13;
  void *pvVar14;
  Il2CppObject *pIVar15;
  RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 *this;
  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 *pUVar16;
  long unaff_x29;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fStack000000000000001c;
  ulong *in_stack_00000088;
  ulong *in_stack_00000090;
  ulong *in_stack_00000098;
  ulong *in_stack_000000a0;
  ulong *in_stack_000000a8;
  ulong *in_stack_000000b0;
  ulong *in_stack_000000b8;
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
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  *(undefined8 *)(unaff_x29 + -0x20) = param_4;
  *(undefined8 *)(unaff_x29 + -0x28) = param_5;
  if ((OVRExternalComposition_RefreshCameraObjects_mBC8081FB45BBACE6A9F40D282C5EB05BC9261358::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000088);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000090);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000098);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_000000a0);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_000000a8);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_000000b0);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_NullStream_EndWrite__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_ReadWriteTask_InvokeAsyncCallback__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_IO_Stream_SynchronousAsyncResult_EndRead__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_000000b8);
    OVRExternalComposition_RefreshCameraObjects_mBC8081FB45BBACE6A9F40D282C5EB05BC9261358::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x18);
  NullCheck(*(void **)(unaff_x29 + -0x80));
  uVar8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (*(undefined8 *)(unaff_x29 + -0x80),0);
  *(undefined8 *)(unaff_x29 + -0x88) = uVar8;
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x40);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
  bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                    (*(undefined8 *)(unaff_x29 + -0x88),*(undefined8 *)(unaff_x29 + -0x90),0);
  *(byte *)(unaff_x29 + -0x91) = bVar3 & 1;
  if ((*(byte *)(unaff_x29 + -0x91) & 1) != 0) {
    uVar8 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                       ,1);
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar8;
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x18);
    NullCheck(*(void **)(unaff_x29 + -0xb0));
    uVar8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                      (*(undefined8 *)(unaff_x29 + -0xb0));
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
    NullCheck(*(void **)(unaff_x29 + -0xb8));
    uVar8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392
                      (*(undefined8 *)(unaff_x29 + -0xb8),0);
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar8;
    NullCheck(*(void **)(unaff_x29 + -0xa8));
    ArrayElementTypeCheck(*(Il2CppArray **)(unaff_x29 + -0xa8),*(void **)(unaff_x29 + -0xc0));
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)(unaff_x29 + -0xa8),0,
               *(Il2CppObject **)(unaff_x29 + -0xc0));
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)Method_System_IO_Stream_ReadWriteTask_InvokeAsyncCallback__,
               *(undefined8 *)(unaff_x29 + -0xa8),0);
    *(long *)(unaff_x29 + -200) = *(long *)(unaff_x29 + -8) + 0x58;
    OVRCompositionUtil_SafeDestroy_m7A340325537FB13185AE399E80B4953CA5AE8693
              (*(undefined8 *)(unaff_x29 + -200),0);
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x60) = 0;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x60),(void *)0x0);
    *(long *)(unaff_x29 + -0xd0) = *(long *)(unaff_x29 + -8) + 0x48;
    OVRCompositionUtil_SafeDestroy_m7A340325537FB13185AE399E80B4953CA5AE8693
              (*(undefined8 *)(unaff_x29 + -0xd0),0);
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50) = 0;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x50),(void *)0x0);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x29 + -0x10);
    *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0x18);
    OVRComposition_RefreshCameraRig_m0D0711A58604F6BD4A665DDB13C253D73039932C
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0xd8),
               *(undefined8 *)(unaff_x29 + -0xe0),0);
    *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x20);
    NullCheck(*(void **)(unaff_x29 + -0xe8));
    uVar8 = InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
            ::Invoke(0x36,(Il2CppClass *)*in_stack_000000a0,*(Il2CppObject **)(unaff_x29 + -0xe8));
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar8;
    if (*(long *)(unaff_x29 + -0xf0) == 0) {
      pvVar12 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar12);
      pGVar9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
               Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
      pvVar12 = (void *)Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3
                                  (pGVar9,(MethodInfo *)*in_stack_000000a8);
      *(void **)(*(long *)(unaff_x29 + -8) + 0x58) = pvVar12;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x58),pvVar12);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x20);
      NullCheck(*(void **)(unaff_x29 + -0xf8));
      uVar8 = InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
              ::Invoke(0x36,(Il2CppClass *)*in_stack_000000a0,*(Il2CppObject **)(unaff_x29 + -0xf8))
      ;
      *(undefined8 *)(unaff_x29 + -0x100) = uVar8;
      pvVar12 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar12);
      pGVar9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
               Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12);
      NullCheck(*(void **)(unaff_x29 + -0x100));
      pvVar12 = (void *)InstantiateMrcCameraDelegate_Invoke_mB6693C4AF7C65BE930BF160D96A8630F7D21E488_inline
                                  (*(InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8
                                     **)(unaff_x29 + -0x100),pGVar9,2,(MethodInfo *)0x0);
      *(void **)(*(long *)(unaff_x29 + -8) + 0x58) = pvVar12;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x58),pvVar12);
    }
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
    NullCheck(pvVar12);
    Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47
              (pvVar12,*(undefined8 *)Method_System_IO_Stream_NullStream_EndWrite__);
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
    NullCheck(pvVar12);
    uVar8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(pvVar12,0);
    if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x10) & 1) == 0) {
      *(undefined8 *)(unaff_x29 + -0x48) = uVar8;
      pvVar12 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar12);
      uVar8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(pvVar12,0);
      *(undefined8 *)(unaff_x29 + -0x50) = uVar8;
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x48);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x40) = uVar8;
      pOVar13 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                 (*(long *)(unaff_x29 + -8) + 0x18);
      NullCheck(pOVar13);
      uVar8 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (pOVar13,(MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x50) = uVar8;
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x40);
    }
    NullCheck(*(void **)(unaff_x29 + -0x58));
    Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234
              (*(undefined8 *)(unaff_x29 + -0x58),*(undefined8 *)(unaff_x29 + -0x50));
    pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x58);
    NullCheck(pGVar9);
    uVar8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                      (pGVar9,(MethodInfo *)*in_stack_00000088);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
    if ((bVar3 & 1) != 0) {
      pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                (*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pGVar9);
      uVar8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                        (pGVar9,(MethodInfo *)*in_stack_00000088);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(uVar8,0);
    }
    pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x58);
    NullCheck(pGVar9);
    uVar8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                      (pGVar9,(MethodInfo *)*in_stack_00000098);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
    if ((bVar3 & 1) != 0) {
      pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                (*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pGVar9);
      uVar8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                        (pGVar9,(MethodInfo *)*in_stack_00000098);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(uVar8,0);
    }
    pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x58);
    NullCheck(pGVar9);
    pvVar12 = (void *)GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6
                                (pGVar9,(MethodInfo *)*in_stack_00000090);
    *(void **)(*(long *)(unaff_x29 + -8) + 0x60) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x60),pvVar12);
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    NullCheck(pvVar12);
    Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(pvVar12,*in_stack_000000b8);
    uVar8 = CameraExtensions_GetUniversalAdditionalCameraData_m38406768FA69BDC80D45CA7698EC0B8755448604
                      (*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x60),0);
    *(undefined8 *)(unaff_x29 + -0x30) = uVar8;
    uVar8 = *(undefined8 *)(unaff_x29 + -0x30);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    bVar3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar8,0);
    if ((bVar3 & 1) != 0) {
      pUVar16 = *(UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93 **)
                 (unaff_x29 + -0x30);
      NullCheck(pUVar16);
      UniversalAdditionalCameraData_set_allowXRRendering_mE9DE096F60A0E523B8C06F7E660A6FF1387B07F7_inline
                (pUVar16,false,(MethodInfo *)0x0);
    }
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    NullCheck(pvVar12);
    Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(0x47c34b00,pvVar12);
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
              (&stack0x000003f0,0.0,0.0,0.5,1.0,(MethodInfo *)0x0);
    NullCheck(pvVar12);
    Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(0,0,0,0,pvVar12,0);
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    pvVar14 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    NullCheck(pvVar14);
    uVar4 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(pvVar14,0);
    pIVar15 = *(Il2CppObject **)(unaff_x29 + -0x20);
    NullCheck(pIVar15);
    uVar5 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                      (2,(Il2CppClass *)*in_stack_000000a0,pIVar15);
    uVar6 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(uVar5,0);
    pIVar15 = *(Il2CppObject **)(unaff_x29 + -0x20);
    NullCheck(pIVar15);
    uVar5 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                      (4,(Il2CppClass *)*in_stack_000000a0,pIVar15);
    uVar7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(uVar5,0);
    NullCheck(pvVar12);
    Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32
              (pvVar12,uVar4 & (uVar6 ^ 0xffffffff) | uVar7,0);
    pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    this = *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
            (*(long *)(unaff_x29 + -8) + 0x88);
    NullCheck(this);
    uVar8 = RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(this,0);
    NullCheck(pvVar12);
    Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(pvVar12,uVar8,0);
    if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & 1) == 0) {
      pvVar12 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
                (&stack0x00000358,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
      NullCheck(pvVar12);
      Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(0,0,0,0,pvVar12,0);
    }
    pIVar15 = *(Il2CppObject **)(unaff_x29 + -0x20);
    NullCheck(pIVar15);
    lVar10 = InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
             ::Invoke(0x36,(Il2CppClass *)*in_stack_000000a0,pIVar15);
    if (lVar10 == 0) {
      pvVar12 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar12);
      pGVar9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
               Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
      pvVar12 = (void *)Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3
                                  (pGVar9,(MethodInfo *)*in_stack_000000a8);
      *(void **)(*(long *)(unaff_x29 + -8) + 0x48) = pvVar12;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x48),pvVar12);
    }
    else {
      pIVar15 = *(Il2CppObject **)(unaff_x29 + -0x20);
      NullCheck(pIVar15);
      pIVar11 = (InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8 *)
                InterfaceFuncInvoker0<InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8*>
                ::Invoke(0x36,(Il2CppClass *)*in_stack_000000a0,pIVar15);
      pvVar12 = *(void **)(unaff_x29 + -0x18);
      NullCheck(pvVar12);
      pGVar9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
               Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12);
      NullCheck(pIVar11);
      pvVar12 = (void *)InstantiateMrcCameraDelegate_Invoke_mB6693C4AF7C65BE930BF160D96A8630F7D21E488_inline
                                  (pIVar11,pGVar9,1,(MethodInfo *)0x0);
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
      pOVar13 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                 (*(long *)(unaff_x29 + -8) + 0x18);
      NullCheck(pOVar13);
      uVar8 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (pOVar13,(MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
      *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x60);
    }
    NullCheck(*(void **)(unaff_x29 + -0x78));
    Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234
              (*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x70));
    pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(pGVar9);
    uVar8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                      (pGVar9,(MethodInfo *)*in_stack_00000088);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
    if ((bVar3 & 1) != 0) {
      pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                (*(long *)(unaff_x29 + -8) + 0x48);
      NullCheck(pGVar9);
      uVar8 = GameObject_GetComponent_TisAudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35_mDEDC6199AF1C4FDE9EE39005D841708A604E8D14
                        (pGVar9,(MethodInfo *)*in_stack_00000088);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(uVar8,0);
    }
    pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(pGVar9);
    uVar8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                      (pGVar9,(MethodInfo *)*in_stack_00000098);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
    bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
    if ((bVar3 & 1) != 0) {
      pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                (*(long *)(unaff_x29 + -8) + 0x48);
      NullCheck(pGVar9);
      uVar8 = GameObject_GetComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m7149AA48F5A6B640AF6C600A402072F7BE882AE6
                        (pGVar9,(MethodInfo *)*in_stack_00000098);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000b0);
      Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(uVar8,0);
    }
    pGVar9 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
              (*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(pGVar9);
    pvVar12 = (void *)GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6
                                (pGVar9,(MethodInfo *)*in_stack_00000090);
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
    pvVar14 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
    NullCheck(pvVar14);
    fVar17 = (float)Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(pvVar14);
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
               uStack000000000000017c & (uStack0000000000000164 ^ 0xffffffff) |
               uStack000000000000014c,0);
    bStack0000000000000147 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x71) & 1;
    if (bStack0000000000000147 == 0) {
      in_stack_00000118 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      in_stack_00000110 =
           *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
            (*(long *)(unaff_x29 + -8) + 0x98);
      NullCheck(in_stack_00000110);
      in_stack_00000108._4_4_ = 0;
      in_stack_00000100 =
           RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(in_stack_00000110,0)
      ;
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
                (in_stack_000000e8 & 0xffffffff,uStack00000000000000d4,
                 in_stack_000000f0 & 0xffffffff,uStack00000000000000dc,in_stack_000000f8,0);
    }
    else {
      in_stack_00000138 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      in_stack_00000130 =
           *(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6 **)
            (*(long *)(unaff_x29 + -8) + 0x88);
      NullCheck(in_stack_00000130);
      in_stack_00000128._4_4_ = 0;
      in_stack_00000120 =
           RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6::GetAt(in_stack_00000130,0)
      ;
      NullCheck(in_stack_00000138);
      Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4
                (in_stack_00000138,in_stack_00000120,0);
    }
    pvVar12 = *(void **)(unaff_x29 + -0x18);
    NullCheck(pvVar12);
    pvVar12 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar12,0);
    *(void **)(*(long *)(unaff_x29 + -8) + 0x40) = pvVar12;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x40),pvVar12);
  }
  return;
}


