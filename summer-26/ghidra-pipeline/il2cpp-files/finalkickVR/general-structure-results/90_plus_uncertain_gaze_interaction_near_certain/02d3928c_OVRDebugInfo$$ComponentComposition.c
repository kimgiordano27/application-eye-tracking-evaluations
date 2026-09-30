/*
FUNCTION_NAME: OVRDebugInfo$$ComponentComposition
ENTRY_POINT: 02d3928c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4;functionality_possible_biometrics_hits_4
*/


void OVRDebugInfo__ComponentComposition
               (ulong *param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x29;
  undefined4 uVar8;
  undefined8 in_stack_000000f8;
  MethodInfo *in_stack_00000100;
  long in_stack_000001b0;
  undefined8 *in_stack_000001e0;
  undefined8 *in_stack_00000218;
  undefined8 *in_stack_00000220;
  undefined8 *in_stack_00000228;
  undefined8 *in_stack_00000238;
  undefined8 *in_stack_00000240;
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
  undefined4 in_stack_00000500;
  undefined4 in_stack_00000560;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined4 in_stack_00000780;
  undefined4 in_stack_00000788;
  undefined4 in_stack_00001010;
  undefined4 in_stack_00001014;
  undefined4 in_stack_00001018;
  undefined4 in_stack_00001040;
  undefined4 in_stack_00001044;
  undefined4 in_stack_00001048;
  
  uVar6 = *param_1;
  Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(in_stack_00000100);
  in_stack_000001e0[0x1f] = in_stack_000001e0[0x1d];
  in_stack_000001e0[0x1e] = in_stack_000001e0[0x1c];
  uVar5 = in_stack_000001e0[0x1e];
  *(undefined8 *)(in_stack_000001b0 + 0xe8) = in_stack_000001e0[0x1f];
  *(undefined8 *)(in_stack_000001b0 + 0xe0) = uVar5;
  Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(in_stack_00000100);
  in_stack_000001e0[0x1b] = in_stack_000001e0[0x19];
  in_stack_000001e0[0x1a] = in_stack_000001e0[0x18];
  uVar5 = in_stack_000001e0[0x1a];
  *(undefined8 *)(in_stack_000001b0 + 0xd8) = in_stack_000001e0[0x1b];
  *(undefined8 *)(in_stack_000001b0 + 0xd0) = uVar5;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
  bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                    (4,4,3,0xffffffff,in_stack_000000f8,in_stack_00000100);
  if ((bVar1 & 1) != 0) {
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar7 = *(ulong *)(unaff_x29 + -0x100);
    uVar8 = *(undefined4 *)(unaff_x29 + -0xf8);
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar7 & 0xffffffff,(int)(uVar7 >> 0x20),uVar8,pvVar2,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
  bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                    (5,4,4,0xffffffff,&stack0x00001780,0);
  if ((bVar1 & 1) != 0) {
    pvVar2 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),param_4,pvVar2,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
  bVar1 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                    (4,5,3,0xffffffff,&stack0x00001770,0);
  if ((bVar1 & 1) != 0) {
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar5 = *(undefined8 *)(in_stack_000001b0 + 0xe0);
    in_stack_000001e0[9] = *(undefined8 *)(in_stack_000001b0 + 0xe8);
    in_stack_000001e0[8] = uVar5;
    NullCheck(pvVar2);
    in_stack_000001e0[7] = in_stack_000001e0[9];
    in_stack_000001e0[6] = in_stack_000001e0[8];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00001040,in_stack_00001044,in_stack_00001048,pvVar2,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
  bVar1 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                    (5,5,4,0xffffffff,&stack0x00001760,0);
  if ((bVar1 & 1) != 0) {
    pvVar2 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar5 = *(undefined8 *)(in_stack_000001b0 + 0xd0);
    in_stack_000001e0[3] = *(undefined8 *)(in_stack_000001b0 + 0xd8);
    in_stack_000001e0[2] = uVar5;
    NullCheck(pvVar2);
    in_stack_000001e0[1] = in_stack_000001e0[3];
    *in_stack_000001e0 = in_stack_000001e0[2];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00001010,in_stack_00001014,in_stack_00001018,pvVar2,0);
  }
  pvVar2 = (void *)OVRCameraRig_get_trackerAnchor_m861560DB752DD287DA540064E72C61997FF33BE2_inline
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar5 = *(undefined8 *)(in_stack_000001b0 + 0x1c0);
  *(undefined8 *)((long)in_stack_00000218 + 0xa4) = *(undefined8 *)(in_stack_000001b0 + 0x1c8);
  *(undefined8 *)((long)in_stack_00000218 + 0x9c) = uVar5;
  NullCheck(pvVar2);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(in_stack_00000780,pvVar2,0);
  OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
  *(undefined8 *)((long)in_stack_00000218 + 100) = in_stack_00000218[9];
  *(undefined8 *)((long)in_stack_00000218 + 0x5c) = in_stack_00000218[8];
  uVar5 = *(undefined8 *)((long)in_stack_00000218 + 0x5c);
  *(undefined8 *)(in_stack_000001b0 + 0x138) = *(undefined8 *)((long)in_stack_00000218 + 100);
  *(undefined8 *)(in_stack_000001b0 + 0x130) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xbc) = in_stack_00000738;
  *(undefined8 *)(unaff_x29 + -0xc4) = in_stack_00000730;
  OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
  *(undefined8 *)((long)in_stack_00000218 + 0x24) = in_stack_00000218[1];
  *(undefined8 *)((long)in_stack_00000218 + 0x1c) = *in_stack_00000218;
  uVar5 = *(undefined8 *)((long)in_stack_00000218 + 0x1c);
  *(undefined8 *)(in_stack_000001b0 + 0x118) = *(undefined8 *)((long)in_stack_00000218 + 0x24);
  *(undefined8 *)(in_stack_000001b0 + 0x110) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xdc) = in_stack_000006f8;
  *(undefined8 *)(unaff_x29 + -0xe4) = in_stack_000006f0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000238);
  if (*(int *)(lVar3 + 0x100) == 2) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
    OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4(4);
    *(undefined8 *)((long)in_stack_00000220 + 0xfc) = in_stack_00000220[0x1c];
    *(undefined8 *)((long)in_stack_00000220 + 0xf4) = in_stack_00000220[0x1b];
    uVar5 = *(undefined8 *)((long)in_stack_00000220 + 0xf4);
    *(undefined8 *)(in_stack_000001b0 + 0x138) = *(undefined8 *)((long)in_stack_00000220 + 0xfc);
    *(undefined8 *)(in_stack_000001b0 + 0x130) = uVar5;
    *(undefined8 *)(unaff_x29 + -0xbc) = in_stack_000006b8;
    *(undefined8 *)(unaff_x29 + -0xc4) = in_stack_000006b0;
    OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4(5,0);
    *(undefined8 *)((long)in_stack_00000220 + 0xbc) = in_stack_00000220[0x14];
    *(undefined8 *)((long)in_stack_00000220 + 0xb4) = in_stack_00000220[0x13];
    uVar5 = *(undefined8 *)((long)in_stack_00000220 + 0xb4);
    *(undefined8 *)(in_stack_000001b0 + 0x118) = *(undefined8 *)((long)in_stack_00000220 + 0xbc);
    *(undefined8 *)(in_stack_000001b0 + 0x110) = uVar5;
    *(undefined8 *)(unaff_x29 + -0xdc) = in_stack_00000678;
    *(undefined8 *)(unaff_x29 + -0xe4) = in_stack_00000670;
    pvVar2 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    pvVar4 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar4,0);
    uVar6 = in_stack_00000220[0xd];
    NullCheck(pvVar2);
    Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
              (uVar6 & 0xffffffff,pvVar2,0);
    uVar6 = in_stack_00000220[10];
    uVar8 = in_stack_00000788;
    pvVar2 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    pvVar4 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar4,0);
    uVar7 = in_stack_00000220[3];
    NullCheck(pvVar2);
    Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
              (uVar7 & 0xffffffff,pvVar2,0);
    uVar5 = *in_stack_00000220;
    pvVar2 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar2);
    Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
    in_stack_00000228[0x53] = in_stack_00000228[0x51];
    in_stack_00000228[0x52] = in_stack_00000228[0x50];
    in_stack_00000228[0x4b] = in_stack_00000228[0x53];
    in_stack_00000228[0x4a] = in_stack_00000228[0x52];
    Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000560,0);
    in_stack_00000228[0x4f] = in_stack_00000228[0x4d];
    in_stack_00000228[0x4e] = in_stack_00000228[0x4c];
    pvVar2 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar2);
    Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
    in_stack_00000228[0x47] = in_stack_00000228[0x45];
    in_stack_00000228[0x46] = in_stack_00000228[0x44];
    in_stack_00000228[0x3f] = in_stack_00000228[0x4f];
    in_stack_00000228[0x3e] = in_stack_00000228[0x4e];
    in_stack_00000228[0x3d] = in_stack_00000228[0x47];
    in_stack_00000228[0x3c] = in_stack_00000228[0x46];
    Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(in_stack_00000500,0);
    in_stack_00000228[0x43] = in_stack_00000228[0x41];
    in_stack_00000228[0x42] = in_stack_00000228[0x40];
    pvVar2 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar2);
    Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
    in_stack_00000228[0x39] = in_stack_00000228[0x37];
    in_stack_00000228[0x38] = in_stack_00000228[0x36];
    in_stack_00000228[0x31] = in_stack_00000228[0x39];
    in_stack_00000228[0x30] = in_stack_00000228[0x38];
    Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000490,0);
    in_stack_00000228[0x35] = in_stack_00000228[0x33];
    in_stack_00000228[0x34] = in_stack_00000228[0x32];
    pvVar2 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar2);
    Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
    in_stack_00000228[0x2d] = in_stack_00000228[0x2b];
    in_stack_00000228[0x2c] = in_stack_00000228[0x2a];
    in_stack_00000228[0x25] = in_stack_00000228[0x35];
    in_stack_00000228[0x24] = in_stack_00000228[0x34];
    in_stack_00000228[0x23] = in_stack_00000228[0x2d];
    in_stack_00000228[0x22] = in_stack_00000228[0x2c];
    Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(in_stack_00000430,0);
    in_stack_00000228[0x29] = in_stack_00000228[0x27];
    in_stack_00000228[0x28] = in_stack_00000228[0x26];
    in_stack_00000228[0x1d] = in_stack_00000228[0x43];
    in_stack_00000228[0x1c] = in_stack_00000228[0x42];
    in_stack_00000228[0x1b] = in_stack_00000228[0x29];
    in_stack_00000228[0x1a] = in_stack_00000228[0x28];
    OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5
              (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),in_stack_00000788,(int)uVar5,
               (int)((ulong)uVar5 >> 0x20),uVar8,0);
  }
  pvVar2 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar5 = *(undefined8 *)(in_stack_000001b0 + 0x110);
  in_stack_00000228[0x15] = *(undefined8 *)(in_stack_000001b0 + 0x118);
  in_stack_00000228[0x14] = uVar5;
  NullCheck(pvVar2);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
            (in_stack_000003b0 & 0xffffffff,(int)(in_stack_000003b0 >> 0x20),in_stack_000003b8,
             pvVar2,0);
  pvVar2 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar5 = *(undefined8 *)(in_stack_000001b0 + 0x110);
  in_stack_00000228[0xb] = *(undefined8 *)(in_stack_000001b0 + 0x118);
  in_stack_00000228[10] = uVar5;
  uVar5 = *(undefined8 *)(unaff_x29 + -0xe4);
  in_stack_00000228[9] = *(undefined8 *)(unaff_x29 + -0xdc);
  in_stack_00000228[8] = uVar5;
  NullCheck(pvVar2);
  in_stack_00000228[7] = in_stack_00000228[9];
  in_stack_00000228[6] = in_stack_00000228[8];
  Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
            (in_stack_00000340,in_stack_00000344,in_stack_00000348,in_stack_0000034c,pvVar2,0);
  pvVar2 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar5 = *(undefined8 *)(in_stack_000001b0 + 0x130);
  in_stack_00000228[1] = *(undefined8 *)(in_stack_000001b0 + 0x138);
  *in_stack_00000228 = uVar5;
  NullCheck(pvVar2);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
            (in_stack_00000310 & 0xffffffff,(int)(in_stack_00000310 >> 0x20),in_stack_00000318,
             pvVar2,0);
  pvVar2 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xbc);
  uVar6 = *(ulong *)(unaff_x29 + -0xc4);
  NullCheck(pvVar2);
  Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
            (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),(int)uVar5,(int)((ulong)uVar5 >> 0x20),pvVar2,0
            );
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
  pvVar2 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar2);
  if ((*(byte *)((long)pvVar2 + 0x112) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
    pvVar2 = (void *)OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
                               (0);
    if (pvVar2 != (void *)0x0) {
      pvVar4 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar4);
      uVar5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar4,0);
      NullCheck(pvVar2);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar2,uVar5,0,0);
      uVar5 = OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                        (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar2);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar2,uVar5,1,0);
      uVar5 = Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                        (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar2);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar2,uVar5,2,0);
    }
  }
  VirtualActionInvoker0::Invoke(0xc,*(Il2CppObject **)(unaff_x29 + -8));
  VirtualActionInvoker0::Invoke(0xb,*(Il2CppObject **)(unaff_x29 + -8));
  return;
}


