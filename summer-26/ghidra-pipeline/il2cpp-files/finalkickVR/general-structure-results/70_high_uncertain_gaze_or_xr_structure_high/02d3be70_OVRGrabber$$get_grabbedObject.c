/*
FUNCTION_NAME: OVRGrabber$$get_grabbedObject
ENTRY_POINT: 02d3be70
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_21;ui_or_gameplay_sink_hits_12;functionality_possible_biometrics_hits_4
*/


void OVRGrabber__get_grabbedObject
               (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *param_1,MethodInfo *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000014;
  MethodInfo *pMStack0000000000000070;
  undefined8 *in_stack_00000160;
  int *in_stack_00000168;
  undefined8 *in_stack_00000170;
  undefined8 *in_stack_00000178;
  undefined8 *in_stack_00000188;
  undefined8 *in_stack_00000190;
  undefined8 *in_stack_00000198;
  byte bStack00000000000001a7;
  byte bStack00000000000001b7;
  byte bStack00000000000001c7;
  
  pMStack0000000000000070 = param_2;
  uVar3 = OVRCameraRig_get_trackerAnchor_m861560DB752DD287DA540064E72C61997FF33BE2_inline
                    (param_1,param_2);
  in_stack_00000160[0x13] = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                    (in_stack_00000160[0x13],pMStack0000000000000070);
  if ((bVar1 & 1) != 0) {
    uVar3 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                      ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                       in_stack_00000160[0x6e],(MethodInfo *)0x0);
    in_stack_00000160[0x11] = uVar3;
    in_stack_00000160[0x10] = *(undefined8 *)(in_stack_00000160[0x6e] + 0xb8);
    uVar3 = VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
            ::Invoke(0xe,(Il2CppObject *)in_stack_00000160[0x6e],
                     (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)in_stack_00000160[0x11],
                     (String_t *)in_stack_00000160[0x10]);
    in_stack_00000160[0xf] = uVar3;
    OVRCameraRig_set_trackerAnchor_m722C0541F1B2010A3E642D38A3689E9EA86D69B7_inline
              ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)in_stack_00000160[0x6e],
               (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)in_stack_00000160[0xf],
               (MethodInfo *)0x0);
  }
  uVar3 = Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                    ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                     in_stack_00000160[0x6e],(MethodInfo *)0x0);
  in_stack_00000160[0xe] = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_00000160[0xe],0);
  if ((bVar1 & 1) != 0) {
    uVar3 = OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                      ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                       in_stack_00000160[0x6e],(MethodInfo *)0x0);
    in_stack_00000160[0xc] = uVar3;
    in_stack_00000160[0xb] = *(undefined8 *)(in_stack_00000160[0x6e] + 0xe8);
    uVar3 = VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
            ::Invoke(0xe,(Il2CppObject *)in_stack_00000160[0x6e],
                     (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)in_stack_00000160[0xc],
                     (String_t *)in_stack_00000160[0xb]);
    in_stack_00000160[10] = uVar3;
    OVRCameraRig_set_leftControllerAnchor_m52BC7D80A2807A4877304F1AC69B5ACDF303CD57_inline
              ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)in_stack_00000160[0x6e],
               (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)in_stack_00000160[10],
               (MethodInfo *)0x0);
  }
  uVar3 = OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                    ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                     in_stack_00000160[0x6e],(MethodInfo *)0x0);
  in_stack_00000160[9] = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_00000160[9],0);
  if ((bVar1 & 1) != 0) {
    uVar3 = Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                      ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                       in_stack_00000160[0x6e],(MethodInfo *)0x0);
    in_stack_00000160[7] = uVar3;
    in_stack_00000160[6] = *(undefined8 *)(in_stack_00000160[0x6e] + 0xf0);
    uVar3 = VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
            ::Invoke(0xe,(Il2CppObject *)in_stack_00000160[0x6e],
                     (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)in_stack_00000160[7],
                     (String_t *)in_stack_00000160[6]);
    in_stack_00000160[5] = uVar3;
    OVRCameraRig_set_rightControllerAnchor_mD8034490959F032452D3EEBC91A57653D071FD73_inline
              ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)in_stack_00000160[0x6e],
               (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)in_stack_00000160[5],
               (MethodInfo *)0x0);
  }
  in_stack_00000160[4] = *(undefined8 *)(in_stack_00000160[0x6e] + 0x128);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_00000160[4],0);
  if ((bVar1 & 1) == 0) {
    in_stack_00000160[2] = *(undefined8 *)(in_stack_00000160[0x6e] + 0x130);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
    bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_00000160[2],0);
    if ((bVar1 & 1) != 0) goto LAB_02d3c124;
    *in_stack_00000160 = *(undefined8 *)(in_stack_00000160[0x6e] + 0x138);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
    bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(*in_stack_00000160,0);
    if ((bVar1 & 1) != 0) goto LAB_02d3c124;
  }
  else {
LAB_02d3c124:
    uVar3 = OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                      ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                       in_stack_00000160[0x6e],(MethodInfo *)0x0);
    *(undefined8 *)(in_stack_00000168 + 0x3f) = uVar3;
    NullCheck(*(void **)(in_stack_00000168 + 0x3f));
    uVar3 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4
                      (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)
                        (in_stack_00000168 + 0x3f),(MethodInfo *)*in_stack_00000170);
    *(undefined8 *)(in_stack_00000168 + 0x3d) = uVar3;
    *(undefined8 *)(in_stack_00000160[0x6e] + 0x128) = *(undefined8 *)(in_stack_00000168 + 0x3d);
    Il2CppCodeGenWriteBarrier
              ((void **)(in_stack_00000160[0x6e] + 0x128),*(void **)(in_stack_00000168 + 0x3d));
    uVar3 = OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                      ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                       in_stack_00000160[0x6e],(MethodInfo *)0x0);
    *(undefined8 *)(in_stack_00000168 + 0x3b) = uVar3;
    NullCheck(*(void **)(in_stack_00000168 + 0x3b));
    uVar3 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4
                      (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)
                        (in_stack_00000168 + 0x3b),(MethodInfo *)*in_stack_00000170);
    *(undefined8 *)(in_stack_00000168 + 0x39) = uVar3;
    *(undefined8 *)(in_stack_00000160[0x6e] + 0x130) = *(undefined8 *)(in_stack_00000168 + 0x39);
    Il2CppCodeGenWriteBarrier
              ((void **)(in_stack_00000160[0x6e] + 0x130),*(void **)(in_stack_00000168 + 0x39));
    uVar3 = OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                      ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                       in_stack_00000160[0x6e],(MethodInfo *)0x0);
    *(undefined8 *)(in_stack_00000168 + 0x37) = uVar3;
    NullCheck(*(void **)(in_stack_00000168 + 0x37));
    uVar3 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4
                      (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)
                        (in_stack_00000168 + 0x37),(MethodInfo *)*in_stack_00000170);
    *(undefined8 *)(in_stack_00000168 + 0x35) = uVar3;
    *(undefined8 *)(in_stack_00000160[0x6e] + 0x138) = *(undefined8 *)(in_stack_00000168 + 0x35);
    Il2CppCodeGenWriteBarrier
              ((void **)(in_stack_00000160[0x6e] + 0x138),*(void **)(in_stack_00000168 + 0x35));
    *(undefined8 *)(in_stack_00000168 + 0x33) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x128);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
    bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                      (*(undefined8 *)(in_stack_00000168 + 0x33),0);
    if ((bVar1 & 1) != 0) {
      uVar3 = OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                        ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                         in_stack_00000160[0x6e],(MethodInfo *)0x0);
      *(undefined8 *)(in_stack_00000168 + 0x2f) = uVar3;
      NullCheck(*(void **)(in_stack_00000168 + 0x2f));
      uVar3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                        (*(undefined8 *)(in_stack_00000168 + 0x2f),0);
      *(undefined8 *)(in_stack_00000168 + 0x2d) = uVar3;
      NullCheck(*(void **)(in_stack_00000168 + 0x2d));
      uVar3 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142
                        (*(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                          (in_stack_00000168 + 0x2d),(MethodInfo *)*in_stack_00000178);
      *(undefined8 *)(in_stack_00000168 + 0x2b) = uVar3;
      *(undefined8 *)(in_stack_00000160[0x6e] + 0x128) = *(undefined8 *)(in_stack_00000168 + 0x2b);
      Il2CppCodeGenWriteBarrier
                ((void **)(in_stack_00000160[0x6e] + 0x128),*(void **)(in_stack_00000168 + 0x2b));
      *(undefined8 *)(in_stack_00000168 + 0x29) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x128);
      NullCheck(*(void **)(in_stack_00000168 + 0x29));
      Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E
                (*(undefined8 *)(in_stack_00000168 + 0x29),*in_stack_00000198,0);
    }
    *(undefined8 *)(in_stack_00000168 + 0x27) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x130);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
    bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                      (*(undefined8 *)(in_stack_00000168 + 0x27),0);
    if ((bVar1 & 1) != 0) {
      uVar3 = OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                        ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                         in_stack_00000160[0x6e],(MethodInfo *)0x0);
      *(undefined8 *)(in_stack_00000168 + 0x23) = uVar3;
      NullCheck(*(void **)(in_stack_00000168 + 0x23));
      uVar3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                        (*(undefined8 *)(in_stack_00000168 + 0x23),0);
      *(undefined8 *)(in_stack_00000168 + 0x21) = uVar3;
      NullCheck(*(void **)(in_stack_00000168 + 0x21));
      uVar3 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142
                        (*(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                          (in_stack_00000168 + 0x21),(MethodInfo *)*in_stack_00000178);
      *(undefined8 *)(in_stack_00000168 + 0x1f) = uVar3;
      *(undefined8 *)(in_stack_00000160[0x6e] + 0x130) = *(undefined8 *)(in_stack_00000168 + 0x1f);
      Il2CppCodeGenWriteBarrier
                ((void **)(in_stack_00000160[0x6e] + 0x130),*(void **)(in_stack_00000168 + 0x1f));
      *(undefined8 *)(in_stack_00000168 + 0x1d) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x130);
      NullCheck(*(void **)(in_stack_00000168 + 0x1d));
      Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E
                (*(undefined8 *)(in_stack_00000168 + 0x1d),*in_stack_00000198,0);
    }
    *(undefined8 *)(in_stack_00000168 + 0x1b) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x138);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000190);
    bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                      (*(undefined8 *)(in_stack_00000168 + 0x1b),0);
    if ((bVar1 & 1) != 0) {
      uVar3 = OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                        ((OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *)
                         in_stack_00000160[0x6e],(MethodInfo *)0x0);
      *(undefined8 *)(in_stack_00000168 + 0x17) = uVar3;
      NullCheck(*(void **)(in_stack_00000168 + 0x17));
      uVar3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                        (*(undefined8 *)(in_stack_00000168 + 0x17),0);
      *(undefined8 *)(in_stack_00000168 + 0x15) = uVar3;
      NullCheck(*(void **)(in_stack_00000168 + 0x15));
      uVar3 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142
                        (*(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                          (in_stack_00000168 + 0x15),(MethodInfo *)*in_stack_00000178);
      *(undefined8 *)(in_stack_00000168 + 0x13) = uVar3;
      *(undefined8 *)(in_stack_00000160[0x6e] + 0x138) = *(undefined8 *)(in_stack_00000168 + 0x13);
      Il2CppCodeGenWriteBarrier
                ((void **)(in_stack_00000160[0x6e] + 0x138),*(void **)(in_stack_00000168 + 0x13));
      *(undefined8 *)(in_stack_00000168 + 0x11) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x138);
      NullCheck(*(void **)(in_stack_00000168 + 0x11));
      Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E
                (*(undefined8 *)(in_stack_00000168 + 0x11),*in_stack_00000198,0);
    }
    *(undefined8 *)(in_stack_00000168 + 0xf) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x128);
    NullCheck(*(void **)(in_stack_00000168 + 0xf));
    Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
              (*(undefined8 *)(in_stack_00000168 + 0xf),3);
    *(undefined8 *)(in_stack_00000168 + 0xd) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x130);
    NullCheck(*(void **)(in_stack_00000168 + 0xd));
    Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
              (*(undefined8 *)(in_stack_00000168 + 0xd),1,0);
    *(undefined8 *)(in_stack_00000168 + 0xb) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x138);
    NullCheck(*(void **)(in_stack_00000168 + 0xb));
    Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
              (*(undefined8 *)(in_stack_00000168 + 0xb),2,0);
  }
  if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
LAB_02d3c680:
    *(undefined8 *)(in_stack_00000168 + 1) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x128);
    NullCheck(*(void **)(in_stack_00000168 + 1));
    iVar2 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538
                      (*(undefined8 *)(in_stack_00000168 + 1),0);
    *in_stack_00000168 = iVar2;
    if (*in_stack_00000168 != 3) {
      pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x128);
      NullCheck(pvVar4);
      Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(pvVar4,3,0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000188);
    bVar1 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
    if ((bVar1 & 1) != 0) goto LAB_02d3c680;
    *(undefined8 *)(in_stack_00000168 + 7) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x128);
    NullCheck(*(void **)(in_stack_00000168 + 7));
    iVar2 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538
                      (*(undefined8 *)(in_stack_00000168 + 7),0);
    in_stack_00000168[6] = iVar2;
    if (in_stack_00000168[6] != 1) {
      *(undefined8 *)(in_stack_00000168 + 3) = *(undefined8 *)(in_stack_00000160[0x6e] + 0x128);
      NullCheck(*(void **)(in_stack_00000168 + 3));
      Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD
                (*(undefined8 *)(in_stack_00000168 + 3),1,0);
    }
  }
  if ((*(byte *)(in_stack_00000160[0x6e] + 0xaa) & 1) != 0) {
    pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x128);
    NullCheck(pvVar4);
    uStack0000000000000014 = 0;
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar4,0);
    pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x130);
    NullCheck(pvVar4);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
              (pvVar4,uStack0000000000000014 & 1,0);
    pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x138);
    NullCheck(pvVar4);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
              (pvVar4,uStack0000000000000014 & 1,0);
    return;
  }
  pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x128);
  NullCheck(pvVar4);
  bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar4,0);
  if ((bVar1 & 1) != (*(byte *)(in_stack_00000160[0x6e] + 0xa8) & 1)) {
    pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x130);
    NullCheck(pvVar4);
    bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar4,0);
    if ((bool)(bVar1 & 1) != ((*(byte *)(in_stack_00000160[0x6e] + 0xa8) & 1) == 0)) {
      pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x138);
      NullCheck(pvVar4);
      bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar4,0);
      if ((*(byte *)(in_stack_00000160[0x6e] + 0xa8) & 1) == 0) {
        *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
        *(undefined4 *)(in_stack_00000160 + 0x6b) = 1;
        *(byte *)(unaff_x29 + -0x21) = *(byte *)(unaff_x29 + -0x19) & 1;
      }
      else {
        *(byte *)(unaff_x29 + -0x1a) = bVar1 & 1;
        if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
          *(byte *)(unaff_x29 + -0x1b) = *(byte *)(unaff_x29 + -0x1a) & 1;
          *(undefined4 *)(in_stack_00000160 + 0x6b) = 0;
          *(byte *)(unaff_x29 + -0x21) = *(byte *)(unaff_x29 + -0x1b) & 1;
        }
        else {
          *(byte *)(unaff_x29 + -0x1c) = *(byte *)(unaff_x29 + -0x1a) & 1;
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000188);
          bVar1 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
          *(uint *)(in_stack_00000160 + 0x6b) = (uint)((bVar1 & 1) == 0);
          *(byte *)(unaff_x29 + -0x21) = *(byte *)(unaff_x29 + -0x1c) & 1;
        }
      }
      if ((*(byte *)(unaff_x29 + -0x21) & 1) != *(uint *)(in_stack_00000160 + 0x6b))
      goto LAB_02d3c9ac;
    }
  }
  *(undefined1 *)(in_stack_00000160[0x6e] + 0xab) = 1;
LAB_02d3c9ac:
  pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x128);
  uStack000000000000000c = 1;
  bStack00000000000001c7 = *(byte *)(in_stack_00000160[0x6e] + 0xa8) & 1;
  NullCheck(pvVar4);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (pvVar4,(bStack00000000000001c7 & 1) == 0);
  pvVar4 = *(void **)(in_stack_00000160[0x6e] + 0x130);
  bStack00000000000001b7 = *(byte *)(in_stack_00000160[0x6e] + 0xa8) & (byte)uStack000000000000000c;
  NullCheck(pvVar4);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (pvVar4,bStack00000000000001b7 & 1,0);
  bStack00000000000001a7 = *(byte *)(in_stack_00000160[0x6e] + 0xa8) & (byte)uStack000000000000000c;
  if ((bStack00000000000001a7 & 1) == 0) {
    in_stack_00000160[0x69] = *(undefined8 *)(in_stack_00000160[0x6e] + 0x138);
    *(undefined4 *)((long)in_stack_00000160 + 0x32c) = 0;
    in_stack_00000160[100] = in_stack_00000160[0x69];
  }
  else {
    in_stack_00000160[0x68] = *(undefined8 *)(in_stack_00000160[0x6e] + 0x138);
    if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
      in_stack_00000160[0x67] = in_stack_00000160[0x68];
      *(undefined4 *)((long)in_stack_00000160 + 0x32c) = 1;
      in_stack_00000160[100] = in_stack_00000160[0x67];
    }
    else {
      in_stack_00000160[0x66] = in_stack_00000160[0x68];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000188);
      bVar1 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
      *(uint *)((long)in_stack_00000160 + 0x32c) = (uint)(bVar1 & 1);
      in_stack_00000160[100] = in_stack_00000160[0x66];
    }
  }
  NullCheck((void *)in_stack_00000160[100]);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A
            (in_stack_00000160[100],*(int *)((long)in_stack_00000160 + 0x32c) != 0,0);
  return;
}


