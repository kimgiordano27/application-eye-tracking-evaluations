/*
FUNCTION_NAME: OVRDebugInfo$$UpdateEyeDepthOffset
ENTRY_POINT: 02d388ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_21;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_21
*/


void OVRDebugInfo__UpdateEyeDepthOffset
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,MethodInfo *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *pOVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x29;
  undefined4 uVar11;
  MethodInfo *in_stack_00000180;
  long in_stack_000001b0;
  undefined8 *in_stack_000001c0;
  ulong *in_stack_000001c8;
  undefined8 *in_stack_000001d0;
  ulong *in_stack_000001d8;
  undefined8 *in_stack_000001e0;
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
  undefined4 in_stack_00001010;
  undefined4 in_stack_00001014;
  undefined4 in_stack_00001018;
  undefined4 in_stack_00001040;
  undefined4 in_stack_00001044;
  undefined4 in_stack_00001048;
  undefined4 in_stack_00001150;
  float in_stack_00001158;
  undefined4 in_stack_00001180;
  float in_stack_00001188;
  undefined4 in_stack_00001290;
  float in_stack_00001298;
  undefined4 in_stack_000012d0;
  undefined4 in_stack_000013c0;
  float in_stack_000013c8;
  undefined4 in_stack_000013f0;
  float in_stack_000013f8;
  float in_stack_00001508;
  
  uVar8 = *(undefined8 *)((long)in_stack_000001c0 + 0x84);
  pOVar4 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
           OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline(param_4);
  NullCheck(pOVar4);
  OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
            (pOVar4,in_stack_00000180);
  HBAO__get_presets(-in_stack_00001508,-(float)((ulong)uVar8 >> 0x20),param_3,in_stack_00000180);
  in_stack_000001c0[9] = in_stack_000001c0[7];
  in_stack_000001c0[8] = in_stack_000001c0[6];
  uVar8 = in_stack_000001c0[8];
  *(undefined8 *)(in_stack_000001b0 + 0x1b8) = in_stack_000001c0[9];
  *(undefined8 *)(in_stack_000001b0 + 0x1b0) = uVar8;
  *(byte *)((long)in_stack_000001c0 + 0x2f) = *(byte *)(in_stack_000001b0 + 0x1f7) & 1;
  if ((*(byte *)((long)in_stack_000001c0 + 0x2f) & 1) != 0) {
    *(byte *)((long)in_stack_000001c0 + 0x2e) = *(byte *)(in_stack_000001b0 + 0x1e6) & 1;
    if ((*(byte *)((long)in_stack_000001c0 + 0x2e) & 1) == 0) {
      pvVar6 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      uVar8 = *(undefined8 *)(in_stack_000001b0 + 0x1b0);
      *(undefined8 *)((long)in_stack_000001c8 + 0x84) = *(undefined8 *)(in_stack_000001b0 + 0x1b8);
      *(undefined8 *)((long)in_stack_000001c8 + 0x7c) = uVar8;
      NullCheck(pvVar6);
      *(undefined8 *)((long)in_stack_000001c8 + 0x74) =
           *(undefined8 *)((long)in_stack_000001c8 + 0x84);
      *(undefined8 *)((long)in_stack_000001c8 + 0x6c) =
           *(undefined8 *)((long)in_stack_000001c8 + 0x7c);
      Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                (in_stack_000013c0,pvVar6,0);
      pvVar6 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
      pOVar4 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
               OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                         ((MethodInfo *)0x0);
      NullCheck(pOVar4);
      OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline
                (pOVar4,(MethodInfo *)0x0);
      uVar9 = in_stack_000001c8[8];
      NullCheck(pvVar6);
      Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                (uVar9 & 0xffffffff,pvVar6,0);
      param_3 = in_stack_000013c8;
    }
    else {
      Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)((long)in_stack_000001c0 + 0x14);
      *(float *)(unaff_x29 + -0x58) = param_3;
      Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
      uVar8 = *(undefined8 *)((long)in_stack_000001c8 + 0xfc);
      in_stack_000001c0[1] = *(undefined8 *)((long)in_stack_000001c8 + 0x104);
      *in_stack_000001c0 = uVar8;
      uVar8 = *in_stack_000001c0;
      *(undefined8 *)(in_stack_000001b0 + 0x198) = in_stack_000001c0[1];
      *(undefined8 *)(in_stack_000001b0 + 400) = uVar8;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                        (2,4,2,0xffffffff,unaff_x29 + -0x60,0);
      *(byte *)((long)in_stack_000001c8 + 0xfb) = bVar1 & 1;
      if ((*(byte *)((long)in_stack_000001c8 + 0xfb) & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar9 = *(ulong *)(unaff_x29 + -0x60);
        param_3 = *(float *)(unaff_x29 + -0x58);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                        (2,5,2,0xffffffff,unaff_x29 + -0x70,0);
      *(byte *)((long)in_stack_000001c8 + 0xcb) = bVar1 & 1;
      if ((*(byte *)((long)in_stack_000001c8 + 0xcb) & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar8 = *(undefined8 *)(in_stack_000001b0 + 400);
        *(undefined8 *)((long)in_stack_000001c8 + 0xb4) = *(undefined8 *)(in_stack_000001b0 + 0x198)
        ;
        *(undefined8 *)((long)in_stack_000001c8 + 0xac) = uVar8;
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_000001c8 + 0xa4) =
             *(undefined8 *)((long)in_stack_000001c8 + 0xb4);
        *(undefined8 *)((long)in_stack_000001c8 + 0x9c) =
             *(undefined8 *)((long)in_stack_000001c8 + 0xac);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_000013f0,pvVar6,0);
        param_3 = in_stack_000013f8;
      }
    }
    *(byte *)((long)in_stack_000001c8 + 0x33) = *(byte *)(in_stack_000001b0 + 0x1e6) & 1;
    *(byte *)((long)in_stack_000001c8 + 0x32) = *(byte *)(in_stack_000001b0 + 0x1e7) & 1;
    if ((*(byte *)((long)in_stack_000001c8 + 0x33) & 1) == 0 ||
        (*(byte *)((long)in_stack_000001c8 + 0x32) & 1) != 0) {
      pvVar6 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar7);
      Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar7,0);
      uVar9 = *in_stack_000001c8;
      NullCheck(pvVar6);
      Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                (uVar9 & 0xffffffff,pvVar6,0);
      pvVar6 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar7);
      Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar7,0);
      uVar9 = *(ulong *)((long)in_stack_000001d0 + 0xfc);
      NullCheck(pvVar6);
      Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                (uVar9 & 0xffffffff,pvVar6,0);
      pvVar6 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar7);
      Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar7,0);
      in_stack_000001d0[0x1b] = in_stack_000001d0[0x19];
      in_stack_000001d0[0x1a] = in_stack_000001d0[0x18];
      NullCheck(pvVar6);
      in_stack_000001d0[0x17] = in_stack_000001d0[0x1b];
      in_stack_000001d0[0x16] = in_stack_000001d0[0x1a];
      Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                (in_stack_000012d0,pvVar6,0);
      pvVar6 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar7);
      Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar7,0);
      in_stack_000001d0[0x13] = in_stack_000001d0[0x11];
      in_stack_000001d0[0x12] = in_stack_000001d0[0x10];
      NullCheck(pvVar6);
      in_stack_000001d0[0xf] = in_stack_000001d0[0x13];
      in_stack_000001d0[0xe] = in_stack_000001d0[0x12];
      Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                (in_stack_00001290,pvVar6,0);
      param_3 = in_stack_00001298;
    }
    else {
      Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)((long)in_stack_000001d0 + 0x54);
      *(float *)(unaff_x29 + -0x78) = param_3;
      Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)((long)in_stack_000001d0 + 0x3c);
      *(float *)(unaff_x29 + -0x88) = param_3;
      Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
      in_stack_000001d0[5] = in_stack_000001d0[3];
      in_stack_000001d0[4] = in_stack_000001d0[2];
      uVar8 = in_stack_000001d0[4];
      *(undefined8 *)(in_stack_000001b0 + 0x168) = in_stack_000001d0[5];
      *(undefined8 *)(in_stack_000001b0 + 0x160) = uVar8;
      Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
      uVar8 = *(undefined8 *)((long)in_stack_000001d8 + 0xfc);
      in_stack_000001d0[1] = *(undefined8 *)((long)in_stack_000001d8 + 0x104);
      *in_stack_000001d0 = uVar8;
      uVar8 = *in_stack_000001d0;
      *(undefined8 *)(in_stack_000001b0 + 0x158) = in_stack_000001d0[1];
      *(undefined8 *)(in_stack_000001b0 + 0x150) = uVar8;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                        (0,4,0,0xffffffff,unaff_x29 + -0x80,0);
      *(byte *)((long)in_stack_000001d8 + 0xfb) = bVar1 & 1;
      if ((*(byte *)((long)in_stack_000001d8 + 0xfb) & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar9 = *(ulong *)(unaff_x29 + -0x80);
        param_3 = *(float *)(unaff_x29 + -0x78);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                        (1,4,1,0xffffffff,unaff_x29 + -0x90,0);
      *(byte *)((long)in_stack_000001d8 + 0xcb) = bVar1 & 1;
      if ((*(byte *)((long)in_stack_000001d8 + 0xcb) & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar9 = *(ulong *)(unaff_x29 + -0x90);
        param_3 = *(float *)(unaff_x29 + -0x88);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                        (0,5,0,0xffffffff,unaff_x29 + -0xa0,0);
      if ((bVar1 & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar8 = *(undefined8 *)(in_stack_000001b0 + 0x160);
        *(undefined8 *)((long)in_stack_000001d8 + 0x84) = *(undefined8 *)(in_stack_000001b0 + 0x168)
        ;
        *(undefined8 *)((long)in_stack_000001d8 + 0x7c) = uVar8;
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_000001d8 + 0x74) =
             *(undefined8 *)((long)in_stack_000001d8 + 0x84);
        *(undefined8 *)((long)in_stack_000001d8 + 0x6c) =
             *(undefined8 *)((long)in_stack_000001d8 + 0x7c);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00001180,pvVar6,0);
        param_3 = in_stack_00001188;
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                        (1,5,1,0xffffffff,unaff_x29 + -0xb0,0);
      if ((bVar1 & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar8 = *(undefined8 *)(in_stack_000001b0 + 0x150);
        *(undefined8 *)((long)in_stack_000001d8 + 0x54) = *(undefined8 *)(in_stack_000001b0 + 0x158)
        ;
        *(undefined8 *)((long)in_stack_000001d8 + 0x4c) = uVar8;
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_000001d8 + 0x44) =
             *(undefined8 *)((long)in_stack_000001d8 + 0x54);
        *(undefined8 *)((long)in_stack_000001d8 + 0x3c) =
             *(undefined8 *)((long)in_stack_000001d8 + 0x4c);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00001150,pvVar6,0);
        param_3 = in_stack_00001158;
      }
    }
  }
  if ((*(byte *)(in_stack_000001b0 + 0x1f6) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
    lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000238);
    if (*(int *)(lVar5 + 0x100) == 2) {
      Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
      *(ulong *)(unaff_x29 + -0x100) = in_stack_000001d8[3];
      *(float *)(unaff_x29 + -0xf8) = param_3;
      Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
      uVar9 = *in_stack_000001d8;
      Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
      in_stack_000001e0[0x1f] = in_stack_000001e0[0x1d];
      in_stack_000001e0[0x1e] = in_stack_000001e0[0x1c];
      uVar8 = in_stack_000001e0[0x1e];
      *(undefined8 *)(in_stack_000001b0 + 0xe8) = in_stack_000001e0[0x1f];
      *(undefined8 *)(in_stack_000001b0 + 0xe0) = uVar8;
      Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
      in_stack_000001e0[0x1b] = in_stack_000001e0[0x19];
      in_stack_000001e0[0x1a] = in_stack_000001e0[0x18];
      uVar8 = in_stack_000001e0[0x1a];
      *(undefined8 *)(in_stack_000001b0 + 0xd8) = in_stack_000001e0[0x1b];
      *(undefined8 *)(in_stack_000001b0 + 0xd0) = uVar8;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                        (4,4,3,0xffffffff,unaff_x29 + -0x100,0);
      if ((bVar1 & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar10 = *(ulong *)(unaff_x29 + -0x100);
        uVar11 = *(undefined4 *)(unaff_x29 + -0xf8);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar10 & 0xffffffff,(int)(uVar10 >> 0x20),uVar11,pvVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                        (5,4,4,0xffffffff,&stack0x00001780,0);
      if ((bVar1 & 1) != 0) {
        pvVar6 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,(int)(uVar9 >> 0x20),param_3,pvVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                        (4,5,3,0xffffffff,&stack0x00001770,0);
      if ((bVar1 & 1) != 0) {
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar8 = *(undefined8 *)(in_stack_000001b0 + 0xe0);
        in_stack_000001e0[9] = *(undefined8 *)(in_stack_000001b0 + 0xe8);
        in_stack_000001e0[8] = uVar8;
        NullCheck(pvVar6);
        in_stack_000001e0[7] = in_stack_000001e0[9];
        in_stack_000001e0[6] = in_stack_000001e0[8];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00001040,in_stack_00001044,in_stack_00001048,pvVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000240);
      bVar1 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                        (5,5,4,0xffffffff,&stack0x00001760,0);
      if ((bVar1 & 1) != 0) {
        pvVar6 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar8 = *(undefined8 *)(in_stack_000001b0 + 0xd0);
        in_stack_000001e0[3] = *(undefined8 *)(in_stack_000001b0 + 0xd8);
        in_stack_000001e0[2] = uVar8;
        NullCheck(pvVar6);
        in_stack_000001e0[1] = in_stack_000001e0[3];
        *in_stack_000001e0 = in_stack_000001e0[2];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00001010,in_stack_00001014,in_stack_00001018,pvVar6,0);
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
      iVar2 = OVRInput_GetActiveControllerForHand_m3D6D1A5329F4C8A17CBD11FFEF42C0EB0B98B1CF(1);
      iVar3 = OVRInput_GetActiveControllerForHand_m3D6D1A5329F4C8A17CBD11FFEF42C0EB0B98B1CF(2,0);
      if (iVar2 == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
        bVar1 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                          (0x20,0);
        if ((bVar1 & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
          bVar1 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94(1,0)
          ;
          if ((bVar1 & 1) != 0) {
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 0x20;
        }
      }
      if (iVar3 == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
        bVar1 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                          (0x40,0);
        if ((bVar1 & 1) == 0) {
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
          bVar1 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94(2,0)
          ;
          if ((bVar1 & 1) != 0) {
            iVar3 = 2;
          }
        }
        else {
          iVar3 = 0x40;
        }
      }
      pvVar6 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
      OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(iVar2,0);
      uVar9 = in_stack_000001e8[0x2b];
      NullCheck(pvVar6);
      Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                (uVar9 & 0xffffffff,pvVar6,0);
      pvVar6 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(iVar3,0);
      uVar9 = in_stack_000001e8[0x25];
      NullCheck(pvVar6);
      Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                (uVar9 & 0xffffffff,pvVar6,0);
      pvVar6 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(iVar2,0);
      *(undefined8 *)((long)in_stack_000001e8 + 0xfc) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xec);
      *(undefined8 *)((long)in_stack_000001e8 + 0xf4) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xe4);
      NullCheck(pvVar6);
      *(undefined8 *)((long)in_stack_000001e8 + 0xdc) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xfc);
      *(undefined8 *)((long)in_stack_000001e8 + 0xd4) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xf4);
      Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                (in_stack_00000f50,pvVar6,0);
      pvVar6 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(iVar3,0);
      *(undefined8 *)((long)in_stack_000001e8 + 0xbc) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xac);
      *(undefined8 *)((long)in_stack_000001e8 + 0xb4) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xa4);
      NullCheck(pvVar6);
      *(undefined8 *)((long)in_stack_000001e8 + 0x9c) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xbc);
      *(undefined8 *)((long)in_stack_000001e8 + 0x94) =
           *(undefined8 *)((long)in_stack_000001e8 + 0xb4);
      Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                (in_stack_00000f10,pvVar6,0);
      iVar2 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A(0,0);
      if (iVar2 == 2) {
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
        OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(1,0);
        uVar9 = in_stack_000001e8[0xd];
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(1,0);
        *(undefined8 *)((long)in_stack_000001e8 + 0x4c) =
             *(undefined8 *)((long)in_stack_000001e8 + 0x3c);
        *(undefined8 *)((long)in_stack_000001e8 + 0x44) =
             *(undefined8 *)((long)in_stack_000001e8 + 0x34);
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_000001e8 + 0x2c) =
             *(undefined8 *)((long)in_stack_000001e8 + 0x4c);
        *(undefined8 *)((long)in_stack_000001e8 + 0x24) =
             *(undefined8 *)((long)in_stack_000001e8 + 0x44);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000ea0,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = *in_stack_000001e8;
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        in_stack_000001f0[0x27] = in_stack_000001f0[0x25];
        in_stack_000001f0[0x26] = in_stack_000001f0[0x24];
        NullCheck(pvVar6);
        in_stack_000001f0[0x23] = in_stack_000001f0[0x27];
        in_stack_000001f0[0x22] = in_stack_000001f0[0x26];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000e30,pvVar6,0);
      }
      else if (iVar2 == 1) {
        pvVar6 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
        OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(0x20,0);
        uVar9 = *(ulong *)((long)in_stack_000001f0 + 0xe4);
        NullCheck(pvVar6);
        Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44
                  (uVar9 & 0xffffffff,pvVar6,0);
        uVar9 = *(ulong *)((long)in_stack_000001f0 + 0xcc);
        pvVar6 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        pvVar7 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        NullCheck(pvVar7);
        Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                  (uVar9 & 0xffffffff,pvVar7,0);
        uVar9 = *(ulong *)((long)in_stack_000001f0 + 0x84);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        pvVar7 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        NullCheck(pvVar7);
        Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar7,0);
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
        uVar8 = in_stack_000001f0[4];
        *(undefined8 *)((long)in_stack_000001f8 + 0xbc) = in_stack_000001f0[5];
        *(undefined8 *)((long)in_stack_000001f8 + 0xb4) = uVar8;
        *(undefined8 *)((long)in_stack_000001f8 + 0xac) =
             *(undefined8 *)((long)in_stack_000001f8 + 0xfc);
        *(undefined8 *)((long)in_stack_000001f8 + 0xa4) =
             *(undefined8 *)((long)in_stack_000001f8 + 0xf4);
        Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(in_stack_00000cd0,0)
        ;
        *(undefined8 *)((long)in_stack_000001f8 + 0xdc) =
             *(undefined8 *)((long)in_stack_000001f8 + 0xcc);
        *(undefined8 *)((long)in_stack_000001f8 + 0xd4) =
             *(undefined8 *)((long)in_stack_000001f8 + 0xc4);
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_000001f8 + 0x9c) =
             *(undefined8 *)((long)in_stack_000001f8 + 0xdc);
        *(undefined8 *)((long)in_stack_000001f8 + 0x94) =
             *(undefined8 *)((long)in_stack_000001f8 + 0xd4);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000cb0,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = in_stack_000001f8[0xe];
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        *(undefined8 *)((long)in_stack_000001f8 + 0x4c) =
             *(undefined8 *)((long)in_stack_000001f8 + 0x3c);
        *(undefined8 *)((long)in_stack_000001f8 + 0x44) =
             *(undefined8 *)((long)in_stack_000001f8 + 0x34);
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_000001f8 + 0x2c) =
             *(undefined8 *)((long)in_stack_000001f8 + 0x4c);
        *(undefined8 *)((long)in_stack_000001f8 + 0x24) =
             *(undefined8 *)((long)in_stack_000001f8 + 0x44);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000c40,pvVar6,0);
      }
      else {
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = *in_stack_000001f8;
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        in_stack_00000200[0x1f] = in_stack_00000200[0x1d];
        in_stack_00000200[0x1e] = in_stack_00000200[0x1c];
        NullCheck(pvVar6);
        in_stack_00000200[0x1b] = in_stack_00000200[0x1f];
        in_stack_00000200[0x1a] = in_stack_00000200[0x1e];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000bd0,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = *(ulong *)((long)in_stack_00000200 + 0xac);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        in_stack_00000200[0x11] = in_stack_00000200[0xf];
        in_stack_00000200[0x10] = in_stack_00000200[0xe];
        NullCheck(pvVar6);
        in_stack_00000200[0xd] = in_stack_00000200[0x11];
        in_stack_00000200[0xc] = in_stack_00000200[0x10];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000b60,pvVar6,0);
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
      iVar2 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A(1,0);
      if (iVar2 == 2) {
        pvVar6 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
        OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(2,0);
        uVar9 = *(ulong *)((long)in_stack_00000200 + 0x34);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(2,0);
        in_stack_00000200[3] = in_stack_00000200[1];
        in_stack_00000200[2] = *in_stack_00000200;
        NullCheck(pvVar6);
        uVar8 = in_stack_00000200[2];
        *(undefined8 *)((long)in_stack_00000208 + 0x104) = in_stack_00000200[3];
        *(undefined8 *)((long)in_stack_00000208 + 0xfc) = uVar8;
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000af0,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = in_stack_00000208[0x1b];
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        *(undefined8 *)((long)in_stack_00000208 + 0xb4) =
             *(undefined8 *)((long)in_stack_00000208 + 0xa4);
        *(undefined8 *)((long)in_stack_00000208 + 0xac) =
             *(undefined8 *)((long)in_stack_00000208 + 0x9c);
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_00000208 + 0x94) =
             *(undefined8 *)((long)in_stack_00000208 + 0xb4);
        *(undefined8 *)((long)in_stack_00000208 + 0x8c) =
             *(undefined8 *)((long)in_stack_00000208 + 0xac);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000a80,in_stack_00000a84,in_stack_00000a88,pvVar6,0);
      }
      else if (iVar2 == 1) {
        pvVar6 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
        OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(0x40,0);
        uVar9 = in_stack_00000208[0xc];
        NullCheck(pvVar6);
        Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44
                  (uVar9 & 0xffffffff,pvVar6,0);
        uVar9 = in_stack_00000208[9];
        pvVar6 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        NullCheck(pvVar7);
        Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                  (uVar9 & 0xffffffff,pvVar7,0);
        uVar9 = *in_stack_00000208;
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        NullCheck(pvVar7);
        Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar7,0);
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
        Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(in_stack_00000920,0)
        ;
        in_stack_00000210[0x25] = in_stack_00000210[0x23];
        in_stack_00000210[0x24] = in_stack_00000210[0x22];
        NullCheck(pvVar6);
        in_stack_00000210[0x1d] = in_stack_00000210[0x25];
        in_stack_00000210[0x1c] = in_stack_00000210[0x24];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000900,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = *(ulong *)((long)in_stack_00000210 + 0xbc);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        in_stack_00000210[0x13] = in_stack_00000210[0x11];
        in_stack_00000210[0x12] = in_stack_00000210[0x10];
        NullCheck(pvVar6);
        in_stack_00000210[0xf] = in_stack_00000210[0x13];
        in_stack_00000210[0xe] = in_stack_00000210[0x12];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000890,in_stack_00000894,in_stack_00000898,pvVar6,0);
      }
      else {
        pvVar6 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = *(ulong *)((long)in_stack_00000210 + 0x4c);
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        in_stack_00000210[5] = in_stack_00000210[3];
        in_stack_00000210[4] = in_stack_00000210[2];
        NullCheck(pvVar6);
        in_stack_00000210[1] = in_stack_00000210[5];
        *in_stack_00000210 = in_stack_00000210[4];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00000820,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
        uVar9 = in_stack_00000218[0x23];
        NullCheck(pvVar6);
        Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                  (uVar9 & 0xffffffff,pvVar6,0);
        pvVar6 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline((MethodInfo *)0x0);
        *(undefined8 *)((long)in_stack_00000218 + 0xf4) =
             *(undefined8 *)((long)in_stack_00000218 + 0xe4);
        *(undefined8 *)((long)in_stack_00000218 + 0xec) =
             *(undefined8 *)((long)in_stack_00000218 + 0xdc);
        NullCheck(pvVar6);
        *(undefined8 *)((long)in_stack_00000218 + 0xd4) =
             *(undefined8 *)((long)in_stack_00000218 + 0xf4);
        *(undefined8 *)((long)in_stack_00000218 + 0xcc) =
             *(undefined8 *)((long)in_stack_00000218 + 0xec);
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_000007b0,in_stack_000007b4,in_stack_000007b8,pvVar6,0);
      }
    }
    pvVar6 = (void *)OVRCameraRig_get_trackerAnchor_m861560DB752DD287DA540064E72C61997FF33BE2_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar8 = *(undefined8 *)(in_stack_000001b0 + 0x1c0);
    *(undefined8 *)((long)in_stack_00000218 + 0xa4) = *(undefined8 *)(in_stack_000001b0 + 0x1c8);
    *(undefined8 *)((long)in_stack_00000218 + 0x9c) = uVar8;
    NullCheck(pvVar6);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (in_stack_00000780,pvVar6,0);
    OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
    *(undefined8 *)((long)in_stack_00000218 + 100) = in_stack_00000218[9];
    *(undefined8 *)((long)in_stack_00000218 + 0x5c) = in_stack_00000218[8];
    uVar8 = *(undefined8 *)((long)in_stack_00000218 + 0x5c);
    *(undefined8 *)(in_stack_000001b0 + 0x138) = *(undefined8 *)((long)in_stack_00000218 + 100);
    *(undefined8 *)(in_stack_000001b0 + 0x130) = uVar8;
    *(undefined8 *)(unaff_x29 + -0xbc) = in_stack_00000738;
    *(undefined8 *)(unaff_x29 + -0xc4) = in_stack_00000730;
    OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
    *(undefined8 *)((long)in_stack_00000218 + 0x24) = in_stack_00000218[1];
    *(undefined8 *)((long)in_stack_00000218 + 0x1c) = *in_stack_00000218;
    uVar8 = *(undefined8 *)((long)in_stack_00000218 + 0x1c);
    *(undefined8 *)(in_stack_000001b0 + 0x118) = *(undefined8 *)((long)in_stack_00000218 + 0x24);
    *(undefined8 *)(in_stack_000001b0 + 0x110) = uVar8;
    *(undefined8 *)(unaff_x29 + -0xdc) = in_stack_000006f8;
    *(undefined8 *)(unaff_x29 + -0xe4) = in_stack_000006f0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
    lVar5 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000238);
    if (*(int *)(lVar5 + 0x100) == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
      OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4(4);
      *(undefined8 *)((long)in_stack_00000220 + 0xfc) = in_stack_00000220[0x1c];
      *(undefined8 *)((long)in_stack_00000220 + 0xf4) = in_stack_00000220[0x1b];
      uVar8 = *(undefined8 *)((long)in_stack_00000220 + 0xf4);
      *(undefined8 *)(in_stack_000001b0 + 0x138) = *(undefined8 *)((long)in_stack_00000220 + 0xfc);
      *(undefined8 *)(in_stack_000001b0 + 0x130) = uVar8;
      *(undefined8 *)(unaff_x29 + -0xbc) = in_stack_000006b8;
      *(undefined8 *)(unaff_x29 + -0xc4) = in_stack_000006b0;
      OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4(5,0);
      *(undefined8 *)((long)in_stack_00000220 + 0xbc) = in_stack_00000220[0x14];
      *(undefined8 *)((long)in_stack_00000220 + 0xb4) = in_stack_00000220[0x13];
      uVar8 = *(undefined8 *)((long)in_stack_00000220 + 0xb4);
      *(undefined8 *)(in_stack_000001b0 + 0x118) = *(undefined8 *)((long)in_stack_00000220 + 0xbc);
      *(undefined8 *)(in_stack_000001b0 + 0x110) = uVar8;
      *(undefined8 *)(unaff_x29 + -0xdc) = in_stack_00000678;
      *(undefined8 *)(unaff_x29 + -0xe4) = in_stack_00000670;
      pvVar6 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar7);
      Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar7,0);
      uVar9 = in_stack_00000220[0xd];
      NullCheck(pvVar6);
      Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                (uVar9 & 0xffffffff,pvVar6,0);
      uVar9 = in_stack_00000220[10];
      uVar11 = in_stack_00000788;
      pvVar6 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      pvVar7 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar7);
      Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar7,0);
      uVar10 = in_stack_00000220[3];
      NullCheck(pvVar6);
      Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                (uVar10 & 0xffffffff,pvVar6,0);
      uVar8 = *in_stack_00000220;
      pvVar6 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar6);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar6,0);
      in_stack_00000228[0x53] = in_stack_00000228[0x51];
      in_stack_00000228[0x52] = in_stack_00000228[0x50];
      in_stack_00000228[0x4b] = in_stack_00000228[0x53];
      in_stack_00000228[0x4a] = in_stack_00000228[0x52];
      Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000560,0);
      in_stack_00000228[0x4f] = in_stack_00000228[0x4d];
      in_stack_00000228[0x4e] = in_stack_00000228[0x4c];
      pvVar6 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar6);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar6,0);
      in_stack_00000228[0x47] = in_stack_00000228[0x45];
      in_stack_00000228[0x46] = in_stack_00000228[0x44];
      in_stack_00000228[0x3f] = in_stack_00000228[0x4f];
      in_stack_00000228[0x3e] = in_stack_00000228[0x4e];
      in_stack_00000228[0x3d] = in_stack_00000228[0x47];
      in_stack_00000228[0x3c] = in_stack_00000228[0x46];
      Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(in_stack_00000500,0);
      in_stack_00000228[0x43] = in_stack_00000228[0x41];
      in_stack_00000228[0x42] = in_stack_00000228[0x40];
      pvVar6 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar6);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar6,0);
      in_stack_00000228[0x39] = in_stack_00000228[0x37];
      in_stack_00000228[0x38] = in_stack_00000228[0x36];
      in_stack_00000228[0x31] = in_stack_00000228[0x39];
      in_stack_00000228[0x30] = in_stack_00000228[0x38];
      Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000490,0);
      in_stack_00000228[0x35] = in_stack_00000228[0x33];
      in_stack_00000228[0x34] = in_stack_00000228[0x32];
      pvVar6 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar6);
      Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar6,0);
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
                (uVar9 & 0xffffffff,(int)(uVar9 >> 0x20),in_stack_00000788,(int)uVar8,
                 (int)((ulong)uVar8 >> 0x20),uVar11,0);
    }
    pvVar6 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar8 = *(undefined8 *)(in_stack_000001b0 + 0x110);
    in_stack_00000228[0x15] = *(undefined8 *)(in_stack_000001b0 + 0x118);
    in_stack_00000228[0x14] = uVar8;
    NullCheck(pvVar6);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (in_stack_000003b0 & 0xffffffff,(int)(in_stack_000003b0 >> 0x20),in_stack_000003b8,
               pvVar6,0);
    pvVar6 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar8 = *(undefined8 *)(in_stack_000001b0 + 0x110);
    in_stack_00000228[0xb] = *(undefined8 *)(in_stack_000001b0 + 0x118);
    in_stack_00000228[10] = uVar8;
    uVar8 = *(undefined8 *)(unaff_x29 + -0xe4);
    in_stack_00000228[9] = *(undefined8 *)(unaff_x29 + -0xdc);
    in_stack_00000228[8] = uVar8;
    NullCheck(pvVar6);
    in_stack_00000228[7] = in_stack_00000228[9];
    in_stack_00000228[6] = in_stack_00000228[8];
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (in_stack_00000340,in_stack_00000344,in_stack_00000348,in_stack_0000034c,pvVar6,0);
    pvVar6 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar8 = *(undefined8 *)(in_stack_000001b0 + 0x130);
    in_stack_00000228[1] = *(undefined8 *)(in_stack_000001b0 + 0x138);
    *in_stack_00000228 = uVar8;
    NullCheck(pvVar6);
    Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
              (in_stack_00000310 & 0xffffffff,(int)(in_stack_00000310 >> 0x20),in_stack_00000318,
               pvVar6,0);
    pvVar6 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
    uVar8 = *(undefined8 *)(unaff_x29 + -0xbc);
    uVar9 = *(ulong *)(unaff_x29 + -0xc4);
    NullCheck(pvVar6);
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
              (uVar9 & 0xffffffff,(int)(uVar9 >> 0x20),(int)uVar8,(int)((ulong)uVar8 >> 0x20),pvVar6
               ,0);
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
  pvVar6 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar6);
  if ((*(byte *)((long)pvVar6 + 0x112) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000238);
    pvVar6 = (void *)OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
                               (0);
    if (pvVar6 != (void *)0x0) {
      pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                 (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                   (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar7);
      uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar7,0);
      NullCheck(pvVar6);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar6,uVar8,0,0);
      uVar8 = OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                        (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar6);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar6,uVar8,1,0);
      uVar8 = Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                        (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar6);
      XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                (pvVar6,uVar8,2,0);
    }
  }
  VirtualActionInvoker0::Invoke(0xc,*(Il2CppObject **)(unaff_x29 + -8));
  VirtualActionInvoker0::Invoke(0xb,*(Il2CppObject **)(unaff_x29 + -8));
  return;
}


