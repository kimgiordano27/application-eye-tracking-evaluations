/*
FUNCTION_NAME: OVRFace$$get_FaceExpressions
ENTRY_POINT: 02d39820
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_13;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_12
*/


void OVRFace__get_FaceExpressions(long param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x29;
  undefined4 uVar8;
  MethodInfo *in_stack_000000c8;
  long in_stack_000001b0;
  ulong *in_stack_000001e8;
  undefined8 *in_stack_000001f0;
  ulong *in_stack_000001f8;
  undefined8 *in_stack_00000200;
  ulong *in_stack_00000208;
  undefined8 *in_stack_00000210;
  undefined8 *in_stack_00000218;
  undefined8 *in_stack_00000220;
  undefined8 *in_stack_00000228;
  undefined8 *in_stack_00000230;
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
  undefined4 in_stack_000007b0;
  undefined4 in_stack_000007b4;
  undefined4 in_stack_000007b8;
  undefined4 in_stack_00000820;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000894;
  undefined4 in_stack_00000898;
  undefined4 in_stack_00000900;
  undefined4 in_stack_00000920;
  undefined4 in_stack_00000970;
  undefined4 in_stack_00000a80;
  undefined4 in_stack_00000a84;
  undefined4 in_stack_00000a88;
  undefined4 in_stack_00000af0;
  undefined4 in_stack_00000b60;
  undefined4 in_stack_00000bd0;
  undefined4 in_stack_00000c40;
  undefined4 in_stack_00000cb0;
  undefined4 in_stack_00000cd0;
  undefined4 in_stack_00000d20;
  undefined4 in_stack_00000e30;
  undefined4 in_stack_00000ea0;
  undefined4 in_stack_00000f10;
  undefined4 in_stack_00000f50;
  undefined8 in_stack_00000f90;
  undefined4 in_stack_00001758;
  
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0xfc);
  *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_1 + 0xf4);
  Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
            (in_stack_00000f50,in_stack_00000f90);
  pvVar2 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                             (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                               (unaff_x29 + -8),in_stack_000000c8);
  OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F
            (in_stack_00001758,in_stack_000000c8);
  *(undefined8 *)((long)in_stack_000001e8 + 0xbc) = *(undefined8 *)((long)in_stack_000001e8 + 0xac);
  *(undefined8 *)((long)in_stack_000001e8 + 0xb4) = *(undefined8 *)((long)in_stack_000001e8 + 0xa4);
  NullCheck(pvVar2);
  *(undefined8 *)((long)in_stack_000001e8 + 0x9c) = *(undefined8 *)((long)in_stack_000001e8 + 0xbc);
  *(undefined8 *)((long)in_stack_000001e8 + 0x94) = *(undefined8 *)((long)in_stack_000001e8 + 0xb4);
  Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
            (in_stack_00000f10,pvVar2,in_stack_000000c8);
  iVar1 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A
                    (0,in_stack_000000c8);
  if (iVar1 == 2) {
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
    OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(1,0);
    uVar6 = in_stack_000001e8[0xd];
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(1,0);
    *(undefined8 *)((long)in_stack_000001e8 + 0x4c) =
         *(undefined8 *)((long)in_stack_000001e8 + 0x3c);
    *(undefined8 *)((long)in_stack_000001e8 + 0x44) =
         *(undefined8 *)((long)in_stack_000001e8 + 0x34);
    NullCheck(pvVar2);
    *(undefined8 *)((long)in_stack_000001e8 + 0x2c) =
         *(undefined8 *)((long)in_stack_000001e8 + 0x4c);
    *(undefined8 *)((long)in_stack_000001e8 + 0x24) =
         *(undefined8 *)((long)in_stack_000001e8 + 0x44);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000ea0,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = *in_stack_000001e8;
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    in_stack_000001f0[0x27] = in_stack_000001f0[0x25];
    in_stack_000001f0[0x26] = in_stack_000001f0[0x24];
    NullCheck(pvVar2);
    in_stack_000001f0[0x23] = in_stack_000001f0[0x27];
    in_stack_000001f0[0x22] = in_stack_000001f0[0x26];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000e30,pvVar2,0);
  }
  else if (iVar1 == 1) {
    pvVar2 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
    OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(0x20,0);
    uVar6 = *(ulong *)((long)in_stack_000001f0 + 0xe4);
    NullCheck(pvVar2);
    Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(uVar6 & 0xffffffff,pvVar2,0);
    uVar6 = *(ulong *)((long)in_stack_000001f0 + 0xcc);
    pvVar2 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    pvVar4 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
              (uVar6 & 0xffffffff,pvVar4,0);
    uVar6 = *(ulong *)((long)in_stack_000001f0 + 0x84);
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    pvVar4 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar4,0);
    in_stack_000001f0[9] = in_stack_000001f0[7];
    in_stack_000001f0[8] = in_stack_000001f0[6];
    in_stack_000001f0[1] = in_stack_000001f0[9];
    *in_stack_000001f0 = in_stack_000001f0[8];
    Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000d20,0);
    in_stack_000001f0[5] = in_stack_000001f0[3];
    in_stack_000001f0[4] = in_stack_000001f0[2];
    OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(0x20,0);
    *(undefined8 *)((long)in_stack_000001f8 + 0xfc) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xec);
    *(undefined8 *)((long)in_stack_000001f8 + 0xf4) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xe4);
    uVar5 = in_stack_000001f0[4];
    *(undefined8 *)((long)in_stack_000001f8 + 0xbc) = in_stack_000001f0[5];
    *(undefined8 *)((long)in_stack_000001f8 + 0xb4) = uVar5;
    *(undefined8 *)((long)in_stack_000001f8 + 0xac) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xfc);
    *(undefined8 *)((long)in_stack_000001f8 + 0xa4) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xf4);
    Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(in_stack_00000cd0,0);
    *(undefined8 *)((long)in_stack_000001f8 + 0xdc) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xcc);
    *(undefined8 *)((long)in_stack_000001f8 + 0xd4) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xc4);
    NullCheck(pvVar2);
    *(undefined8 *)((long)in_stack_000001f8 + 0x9c) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xdc);
    *(undefined8 *)((long)in_stack_000001f8 + 0x94) =
         *(undefined8 *)((long)in_stack_000001f8 + 0xd4);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000cb0,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = in_stack_000001f8[0xe];
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    *(undefined8 *)((long)in_stack_000001f8 + 0x4c) =
         *(undefined8 *)((long)in_stack_000001f8 + 0x3c);
    *(undefined8 *)((long)in_stack_000001f8 + 0x44) =
         *(undefined8 *)((long)in_stack_000001f8 + 0x34);
    NullCheck(pvVar2);
    *(undefined8 *)((long)in_stack_000001f8 + 0x2c) =
         *(undefined8 *)((long)in_stack_000001f8 + 0x4c);
    *(undefined8 *)((long)in_stack_000001f8 + 0x24) =
         *(undefined8 *)((long)in_stack_000001f8 + 0x44);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000c40,pvVar2,0);
  }
  else {
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = *in_stack_000001f8;
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    in_stack_00000200[0x1f] = in_stack_00000200[0x1d];
    in_stack_00000200[0x1e] = in_stack_00000200[0x1c];
    NullCheck(pvVar2);
    in_stack_00000200[0x1b] = in_stack_00000200[0x1f];
    in_stack_00000200[0x1a] = in_stack_00000200[0x1e];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000bd0,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = *(ulong *)((long)in_stack_00000200 + 0xac);
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    in_stack_00000200[0x11] = in_stack_00000200[0xf];
    in_stack_00000200[0x10] = in_stack_00000200[0xe];
    NullCheck(pvVar2);
    in_stack_00000200[0xd] = in_stack_00000200[0x11];
    in_stack_00000200[0xc] = in_stack_00000200[0x10];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000b60,pvVar2,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
  iVar1 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A(1,0);
  if (iVar1 == 2) {
    pvVar2 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
    OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(2,0);
    uVar6 = *(ulong *)((long)in_stack_00000200 + 0x34);
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(2,0);
    in_stack_00000200[3] = in_stack_00000200[1];
    in_stack_00000200[2] = *in_stack_00000200;
    NullCheck(pvVar2);
    uVar5 = in_stack_00000200[2];
    *(undefined8 *)((long)in_stack_00000208 + 0x104) = in_stack_00000200[3];
    *(undefined8 *)((long)in_stack_00000208 + 0xfc) = uVar5;
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000af0,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = in_stack_00000208[0x1b];
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    *(undefined8 *)((long)in_stack_00000208 + 0xb4) =
         *(undefined8 *)((long)in_stack_00000208 + 0xa4);
    *(undefined8 *)((long)in_stack_00000208 + 0xac) =
         *(undefined8 *)((long)in_stack_00000208 + 0x9c);
    NullCheck(pvVar2);
    *(undefined8 *)((long)in_stack_00000208 + 0x94) =
         *(undefined8 *)((long)in_stack_00000208 + 0xb4);
    *(undefined8 *)((long)in_stack_00000208 + 0x8c) =
         *(undefined8 *)((long)in_stack_00000208 + 0xac);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000a80,in_stack_00000a84,in_stack_00000a88,pvVar2,0);
  }
  else if (iVar1 == 1) {
    pvVar2 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
    OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(0x40,0);
    uVar6 = in_stack_00000208[0xc];
    NullCheck(pvVar2);
    Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(uVar6 & 0xffffffff,pvVar2,0);
    uVar6 = in_stack_00000208[9];
    pvVar2 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    pvVar4 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
              (uVar6 & 0xffffffff,pvVar4,0);
    uVar6 = *in_stack_00000208;
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    pvVar4 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar4,0);
    in_stack_00000210[0x33] = in_stack_00000210[0x31];
    in_stack_00000210[0x32] = in_stack_00000210[0x30];
    in_stack_00000210[0x2b] = in_stack_00000210[0x33];
    in_stack_00000210[0x2a] = in_stack_00000210[0x32];
    Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000970,0);
    in_stack_00000210[0x2f] = in_stack_00000210[0x2d];
    in_stack_00000210[0x2e] = in_stack_00000210[0x2c];
    OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(0x40,0);
    in_stack_00000210[0x29] = in_stack_00000210[0x27];
    in_stack_00000210[0x28] = in_stack_00000210[0x26];
    in_stack_00000210[0x21] = in_stack_00000210[0x2f];
    in_stack_00000210[0x20] = in_stack_00000210[0x2e];
    in_stack_00000210[0x1f] = in_stack_00000210[0x29];
    in_stack_00000210[0x1e] = in_stack_00000210[0x28];
    Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(in_stack_00000920,0);
    in_stack_00000210[0x25] = in_stack_00000210[0x23];
    in_stack_00000210[0x24] = in_stack_00000210[0x22];
    NullCheck(pvVar2);
    in_stack_00000210[0x1d] = in_stack_00000210[0x25];
    in_stack_00000210[0x1c] = in_stack_00000210[0x24];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000900,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = *(ulong *)((long)in_stack_00000210 + 0xbc);
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    in_stack_00000210[0x13] = in_stack_00000210[0x11];
    in_stack_00000210[0x12] = in_stack_00000210[0x10];
    NullCheck(pvVar2);
    in_stack_00000210[0xf] = in_stack_00000210[0x13];
    in_stack_00000210[0xe] = in_stack_00000210[0x12];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000890,in_stack_00000894,in_stack_00000898,pvVar2,0);
  }
  else {
    pvVar2 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = *(ulong *)((long)in_stack_00000210 + 0x4c);
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    in_stack_00000210[5] = in_stack_00000210[3];
    in_stack_00000210[4] = in_stack_00000210[2];
    NullCheck(pvVar2);
    in_stack_00000210[1] = in_stack_00000210[5];
    *in_stack_00000210 = in_stack_00000210[4];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000820,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
    uVar6 = in_stack_00000218[0x23];
    NullCheck(pvVar2);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (uVar6 & 0xffffffff,pvVar2,0);
    pvVar2 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
    *(undefined8 *)((long)in_stack_00000218 + 0xf4) =
         *(undefined8 *)((long)in_stack_00000218 + 0xe4);
    *(undefined8 *)((long)in_stack_00000218 + 0xec) =
         *(undefined8 *)((long)in_stack_00000218 + 0xdc);
    NullCheck(pvVar2);
    *(undefined8 *)((long)in_stack_00000218 + 0xd4) =
         *(undefined8 *)((long)in_stack_00000218 + 0xf4);
    *(undefined8 *)((long)in_stack_00000218 + 0xcc) =
         *(undefined8 *)((long)in_stack_00000218 + 0xec);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_000007b0,in_stack_000007b4,in_stack_000007b8,pvVar2,0);
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


