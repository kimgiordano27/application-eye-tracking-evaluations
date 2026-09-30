/*
FUNCTION_NAME: OVRGazePointer$$SetCursorStartDest
ENTRY_POINT: 02d3acd0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRGazePointer__SetCursorStartDest(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 in_w8;
  long in_x9;
  undefined4 in_w10;
  undefined4 in_w11;
  long unaff_x29;
  ulong uVar4;
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
  
  *(undefined4 *)(in_x9 + 0x14) = in_w11;
  *(undefined4 *)(in_x9 + 0x18) = in_w10;
  *(undefined4 *)(in_x9 + 0x1c) = in_w8;
  OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5();
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


