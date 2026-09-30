/*
FUNCTION_NAME: OVRGazePointer$$Show
ENTRY_POINT: 02d3ab10
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRGazePointer__Show(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  long unaff_x29;
  ulong uVar4;
  MethodInfo *in_stack_00000050;
  long in_stack_000001b0;
  undefined8 *in_stack_00000228;
  undefined8 *in_stack_00000238;
  ulong in_stack_00000310;
  undefined4 in_stack_00000318;
  undefined4 in_stack_00000340;
  undefined4 in_stack_00000344;
  undefined4 in_stack_00000348;
  undefined4 in_stack_0000034c;
  ulong in_stack_000003b0;
  undefined4 in_stack_000003b8;
  undefined4 in_stack_00000430;
  undefined4 in_stack_00000490;
  undefined8 in_stack_000005d8;
  undefined4 in_stack_000005e0;
  ulong in_stack_00000628;
  undefined4 in_stack_00000630;
  
  Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline();
  in_stack_00000228[0x43] = in_stack_00000228[0x41];
  in_stack_00000228[0x42] = in_stack_00000228[0x40];
  pvVar1 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),in_stack_00000050);
  NullCheck(pvVar1);
  Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar1,in_stack_00000050);
  in_stack_00000228[0x39] = in_stack_00000228[0x37];
  in_stack_00000228[0x38] = in_stack_00000228[0x36];
  in_stack_00000228[0x31] = in_stack_00000228[0x39];
  in_stack_00000228[0x30] = in_stack_00000228[0x38];
  Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000490,in_stack_00000050);
  in_stack_00000228[0x35] = in_stack_00000228[0x33];
  in_stack_00000228[0x34] = in_stack_00000228[0x32];
  pvVar1 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),in_stack_00000050);
  NullCheck(pvVar1);
  Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar1,in_stack_00000050);
  in_stack_00000228[0x2d] = in_stack_00000228[0x2b];
  in_stack_00000228[0x2c] = in_stack_00000228[0x2a];
  in_stack_00000228[0x25] = in_stack_00000228[0x35];
  in_stack_00000228[0x24] = in_stack_00000228[0x34];
  in_stack_00000228[0x23] = in_stack_00000228[0x2d];
  in_stack_00000228[0x22] = in_stack_00000228[0x2c];
  Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
            (in_stack_00000430,in_stack_00000050);
  in_stack_00000228[0x29] = in_stack_00000228[0x27];
  in_stack_00000228[0x28] = in_stack_00000228[0x26];
  in_stack_00000228[0x1d] = in_stack_00000228[0x43];
  in_stack_00000228[0x1c] = in_stack_00000228[0x42];
  in_stack_00000228[0x1b] = in_stack_00000228[0x29];
  in_stack_00000228[0x1a] = in_stack_00000228[0x28];
  OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5
            (in_stack_00000628 & 0xffffffff,(int)(in_stack_00000628 >> 0x20),in_stack_00000630,
             (int)in_stack_000005d8,(int)((ulong)in_stack_000005d8 >> 0x20),in_stack_000005e0,
             in_stack_00000050);
  pvVar1 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar3 = *(undefined8 *)(in_stack_000001b0 + 0x110);
  in_stack_00000228[0x15] = *(undefined8 *)(in_stack_000001b0 + 0x118);
  in_stack_00000228[0x14] = uVar3;
  NullCheck(pvVar1);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
            (in_stack_000003b0 & 0xffffffff,(int)(in_stack_000003b0 >> 0x20),in_stack_000003b8,
             pvVar1,0);
  pvVar1 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar3 = *(undefined8 *)(in_stack_000001b0 + 0x110);
  in_stack_00000228[0xb] = *(undefined8 *)(in_stack_000001b0 + 0x118);
  in_stack_00000228[10] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x29 + -0xe4);
  in_stack_00000228[9] = *(undefined8 *)(unaff_x29 + -0xdc);
  in_stack_00000228[8] = uVar3;
  NullCheck(pvVar1);
  in_stack_00000228[7] = in_stack_00000228[9];
  in_stack_00000228[6] = in_stack_00000228[8];
  Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
            (in_stack_00000340,in_stack_00000344,in_stack_00000348,in_stack_0000034c,pvVar1,0);
  pvVar1 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar3 = *(undefined8 *)(in_stack_000001b0 + 0x130);
  in_stack_00000228[1] = *(undefined8 *)(in_stack_000001b0 + 0x138);
  *in_stack_00000228 = uVar3;
  NullCheck(pvVar1);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
            (in_stack_00000310 & 0xffffffff,(int)(in_stack_00000310 >> 0x20),in_stack_00000318,
             pvVar1,0);
  pvVar1 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar3 = *(undefined8 *)(unaff_x29 + -0xbc);
  uVar4 = *(ulong *)(unaff_x29 + -0xc4);
  NullCheck(pvVar1);
  Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
            (uVar4 & 0xffffffff,(int)(uVar4 >> 0x20),(int)uVar3,(int)((ulong)uVar3 >> 0x20),pvVar1,0
            );
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
  pvVar1 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar1);
  if ((*(byte *)((long)pvVar1 + 0x112) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
    pvVar1 = (void *)OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
                               (0);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar2);
      uVar3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar2,0);
      NullCheck(pvVar1);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar1,uVar3,0,0);
      uVar3 = OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                        (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar1);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar1,uVar3,1,0);
      uVar3 = Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                        (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar1);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar1,uVar3,2,0);
    }
  }
  VirtualActionInvoker0::Invoke(0xc,*(Il2CppObject **)(unaff_x29 + -8));
  VirtualActionInvoker0::Invoke(0xb,*(Il2CppObject **)(unaff_x29 + -8));
  return;
}


