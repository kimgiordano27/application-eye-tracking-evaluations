/*
FUNCTION_NAME: OVRDebugInfo$$VariableObjectManager
ENTRY_POINT: 02d383ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 253
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_6;functionality_possible_biometrics_hits_21
*/


void OVRDebugInfo__VariableObjectManager
               (undefined8 param_1,byte param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *pOVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_x9;
  long unaff_x29;
  undefined4 uVar14;
  undefined4 uStack000000000000016c;
  uint uStack00000000000001a4;
  undefined8 *in_stack_000001b0;
  undefined8 *in_stack_000001b8;
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
  ulong *in_stack_00000230;
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
  undefined4 in_stack_00001530;
  float in_stack_00001538;
  undefined8 in_stack_00001590;
  undefined8 in_stack_00001598;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(byte *)(in_x9 + 0x1f7) = param_2 & 1;
  *(byte *)(in_x9 + 0x1f6) = param_3 & 1;
  *(undefined8 *)(unaff_x29 + -0x18) = param_4;
  if ((OVRCameraRig_UpdateAnchors_mB5BC0B0A82AEF24EFEBAFEDC89001337D10183DD::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000230);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRCameraRig_UpdateAnchors_mB5BC0B0A82AEF24EFEBAFEDC89001337D10183DD::s_Il2CppMethodInitialized
         = 1;
  }
  *(undefined1 *)((long)in_stack_000001b0 + 0x1e7) = 0;
  *(undefined1 *)((long)in_stack_000001b0 + 0x1e6) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
                    /* catch() { ... } // from try @ 02d38320 with catch @ 02d38484 */
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined4 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
                    /* try { // try from 02d38494 to 02e384b3 has its CatchHandler @ 02d38688 */
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined4 *)(unaff_x29 + -0x78) = 0;
                    /* catch() { ... } // from try @ 02d38328 with catch @ 02d3849c */
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined4 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
                    /* try { // try from 02d384c0 to 02e38503 has its CatchHandler @ 02d3851c */
  *(undefined4 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xf0) = 0;
  *(undefined8 *)(unaff_x29 + -0xe8) = 0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 0;
  *(undefined4 *)(unaff_x29 + -0xd8) = 0;
  *(undefined8 *)(unaff_x29 + -0x100) = 0;
  *(undefined4 *)(unaff_x29 + -0xf8) = 0;
                    /* try { // try from 02d38504 to 02e38547 has its CatchHandler @ 02d37e00 */
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02d384c0 with catch @ 02d3851c
                       catch(type#1 @ 0474a728) { ... } // from try @ 02d38604 with catch @ 02d3851c
                        */
  lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(byte *)((long)in_stack_000001b0 + 0x9f) = *(byte *)(lVar6 + 0x180) & 1;
  if ((*(byte *)((long)in_stack_000001b0 + 0x9f) & 1) != 0) {
                    /* try { // try from 02d38550 to 02e38553 has its CatchHandler @ 02d38668 */
                    /* try { // try from 02d38554 to 02e38603 has its CatchHandler @ 02d37e00 */
    VirtualActionInvoker0::Invoke(0xd,*(Il2CppObject **)(unaff_x29 + -8));
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<string,_ProbeReferenceVolumeProfile>__ctor__
              );
    bVar3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(0);
    *(byte *)((long)in_stack_000001b0 + 0x9e) = bVar3 & 1;
    if ((*(byte *)((long)in_stack_000001b0 + 0x9e) & 1) != 0) {
      *(byte *)((long)in_stack_000001b0 + 0x9d) = *(byte *)(*(long *)(unaff_x29 + -8) + 0xab) & 1;
      if ((*(byte *)((long)in_stack_000001b0 + 0x9d) & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        pvVar7 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                                   ((MethodInfo *)0x0);
        NullCheck(pvVar7);
        bVar3 = OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218(pvVar7,0);
        uStack000000000000016c = 1;
        *(byte *)((long)in_stack_000001b8 + 0x53) = bVar3 & 1;
        *(byte *)((long)in_stack_000001b0 + 0x1e7) = *(byte *)((long)in_stack_000001b8 + 0x53) & 1;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        bVar3 = OVRNodeStateProperties_IsHmdPresent_m007E7C0AA8B7D85019F2238007C8F5F28DB3547D(0);
        *(byte *)((long)in_stack_000001b8 + 0x52) = bVar3 & (byte)uStack000000000000016c;
        *(byte *)((long)in_stack_000001b0 + 0x1e6) =
             *(byte *)((long)in_stack_000001b8 + 0x52) & (byte)uStack000000000000016c;
        pvVar7 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                                   ((MethodInfo *)0x0);
        NullCheck(pvVar7);
        OVRTracker_GetPose_mAC65ADC8922B1456F70F4E2CC5C3F48FCF7A9A25(pvVar7,0,0);
        *(undefined8 *)((long)in_stack_000001b8 + 0x24) = in_stack_000001b8[1];
        *(undefined8 *)((long)in_stack_000001b8 + 0x1c) = *in_stack_000001b8;
        uVar10 = *(undefined8 *)((long)in_stack_000001b8 + 0x1c);
        in_stack_000001b0[0x39] = *(undefined8 *)((long)in_stack_000001b8 + 0x24);
        in_stack_000001b0[0x38] = uVar10;
        *(undefined8 *)(unaff_x29 + -0x2c) = in_stack_00001598;
        *(undefined8 *)(unaff_x29 + -0x34) = in_stack_00001590;
        pvVar7 = (void *)OVRCameraRig_get_trackerAnchor_m861560DB752DD287DA540064E72C61997FF33BE2_inline
                                   (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                     (unaff_x29 + -8),(MethodInfo *)0x0);
        uVar10 = in_stack_000001b0[0x38];
        in_stack_000001c0[0x1f] = in_stack_000001b0[0x39];
        in_stack_000001c0[0x1e] = uVar10;
        uVar10 = *(undefined8 *)(unaff_x29 + -0x34);
        in_stack_000001c0[0x1d] = *(undefined8 *)(unaff_x29 + -0x2c);
        in_stack_000001c0[0x1c] = uVar10;
        NullCheck(pvVar7);
        in_stack_000001c0[0x1b] = in_stack_000001c0[0x1d];
        in_stack_000001c0[0x1a] = in_stack_000001c0[0x1c];
        Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                  (in_stack_00001530,pvVar7,0);
        pOVar8 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
                 OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                           ((MethodInfo *)0x0);
        NullCheck(pOVar8);
        OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                  (pOVar8,(MethodInfo *)0x0);
        uVar10 = *(undefined8 *)((long)in_stack_000001c0 + 0xac);
        pOVar8 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
                 OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                           ((MethodInfo *)0x0);
        NullCheck(pOVar8);
        OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                  (pOVar8,(MethodInfo *)0x0);
        uVar11 = *(undefined8 *)((long)in_stack_000001c0 + 0x84);
        pOVar8 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
                 OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                           ((MethodInfo *)0x0);
        NullCheck(pOVar8);
        OVRManager_get_headPoseRelativeOffsetRotation_m24093D9748A541A44618C282B5858BD49C83F3C9_inline
                  (pOVar8,(MethodInfo *)0x0);
        HBAO__get_presets(-(float)uVar10,-(float)((ulong)uVar11 >> 0x20),in_stack_00001538,
                          (MethodInfo *)0x0);
        in_stack_000001c0[9] = in_stack_000001c0[7];
        in_stack_000001c0[8] = in_stack_000001c0[6];
        uVar10 = in_stack_000001c0[8];
        in_stack_000001b0[0x37] = in_stack_000001c0[9];
        in_stack_000001b0[0x36] = uVar10;
        *(byte *)((long)in_stack_000001c0 + 0x2f) = *(byte *)((long)in_stack_000001b0 + 0x1f7) & 1;
        if ((*(byte *)((long)in_stack_000001c0 + 0x2f) & 1) != 0) {
          *(byte *)((long)in_stack_000001c0 + 0x2e) = *(byte *)((long)in_stack_000001b0 + 0x1e6) & 1
          ;
          if ((*(byte *)((long)in_stack_000001c0 + 0x2e) & 1) == 0) {
            pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            uVar10 = in_stack_000001b0[0x36];
            *(undefined8 *)((long)in_stack_000001c8 + 0x84) = in_stack_000001b0[0x37];
            *(undefined8 *)((long)in_stack_000001c8 + 0x7c) = uVar10;
            NullCheck(pvVar7);
            *(undefined8 *)((long)in_stack_000001c8 + 0x74) =
                 *(undefined8 *)((long)in_stack_000001c8 + 0x84);
            *(undefined8 *)((long)in_stack_000001c8 + 0x6c) =
                 *(undefined8 *)((long)in_stack_000001c8 + 0x7c);
            Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                      (in_stack_000013c0,pvVar7,0);
            pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
            pOVar8 = (OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4 *)
                     OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
            NullCheck(pOVar8);
            OVRManager_get_headPoseRelativeOffsetTranslation_m699900022730F69357C46494506381ED7647BC0C_inline
                      (pOVar8,(MethodInfo *)0x0);
            uVar12 = in_stack_000001c8[8];
            NullCheck(pvVar7);
            Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                      (uVar12 & 0xffffffff,pvVar7,0);
            in_stack_00001538 = in_stack_000013c8;
          }
          else {
            Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
            *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)((long)in_stack_000001c0 + 0x14);
            *(float *)(unaff_x29 + -0x58) = in_stack_00001538;
            Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                      ((MethodInfo *)0x0);
            uVar10 = *(undefined8 *)((long)in_stack_000001c8 + 0xfc);
            in_stack_000001c0[1] = *(undefined8 *)((long)in_stack_000001c8 + 0x104);
            *in_stack_000001c0 = uVar10;
            uVar10 = *in_stack_000001c0;
            in_stack_000001b0[0x33] = in_stack_000001c0[1];
            in_stack_000001b0[0x32] = uVar10;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                              (2,4,2,0xffffffff,unaff_x29 + -0x60,0);
            *(byte *)((long)in_stack_000001c8 + 0xfb) = bVar3 & 1;
            if ((*(byte *)((long)in_stack_000001c8 + 0xfb) & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar12 = *(ulong *)(unaff_x29 + -0x60);
              in_stack_00001538 = *(float *)(unaff_x29 + -0x58);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
            }
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (2,5,2,0xffffffff,unaff_x29 + -0x70,0);
            *(byte *)((long)in_stack_000001c8 + 0xcb) = bVar3 & 1;
            if ((*(byte *)((long)in_stack_000001c8 + 0xcb) & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar10 = in_stack_000001b0[0x32];
              *(undefined8 *)((long)in_stack_000001c8 + 0xb4) = in_stack_000001b0[0x33];
              *(undefined8 *)((long)in_stack_000001c8 + 0xac) = uVar10;
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_000001c8 + 0xa4) =
                   *(undefined8 *)((long)in_stack_000001c8 + 0xb4);
              *(undefined8 *)((long)in_stack_000001c8 + 0x9c) =
                   *(undefined8 *)((long)in_stack_000001c8 + 0xac);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_000013f0,pvVar7,0);
              in_stack_00001538 = in_stack_000013f8;
            }
          }
          *(byte *)((long)in_stack_000001c8 + 0x33) = *(byte *)((long)in_stack_000001b0 + 0x1e6) & 1
          ;
          *(byte *)((long)in_stack_000001c8 + 0x32) = *(byte *)((long)in_stack_000001b0 + 0x1e7) & 1
          ;
          if ((*(byte *)((long)in_stack_000001c8 + 0x33) & 1) == 0 ||
              (*(byte *)((long)in_stack_000001c8 + 0x32) & 1) != 0) {
            pvVar7 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            pvVar9 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar9);
            Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar9,0);
            uVar12 = *in_stack_000001c8;
            NullCheck(pvVar7);
            Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                      (uVar12 & 0xffffffff,pvVar7,0);
            pvVar7 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            pvVar9 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar9);
            Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar9,0);
            uVar12 = *(ulong *)((long)in_stack_000001d0 + 0xfc);
            NullCheck(pvVar7);
            Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                      (uVar12 & 0xffffffff,pvVar7,0);
            pvVar7 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            pvVar9 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar9);
            Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar9,0);
            in_stack_000001d0[0x1b] = in_stack_000001d0[0x19];
            in_stack_000001d0[0x1a] = in_stack_000001d0[0x18];
            NullCheck(pvVar7);
            in_stack_000001d0[0x17] = in_stack_000001d0[0x1b];
            in_stack_000001d0[0x16] = in_stack_000001d0[0x1a];
            Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                      (in_stack_000012d0,pvVar7,0);
            pvVar7 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            pvVar9 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar9);
            Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar9,0);
            in_stack_000001d0[0x13] = in_stack_000001d0[0x11];
            in_stack_000001d0[0x12] = in_stack_000001d0[0x10];
            NullCheck(pvVar7);
            in_stack_000001d0[0xf] = in_stack_000001d0[0x13];
            in_stack_000001d0[0xe] = in_stack_000001d0[0x12];
            Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                      (in_stack_00001290,pvVar7,0);
            in_stack_00001538 = in_stack_00001298;
          }
          else {
            Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
            *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)((long)in_stack_000001d0 + 0x54);
            *(float *)(unaff_x29 + -0x78) = in_stack_00001538;
            Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
            *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)((long)in_stack_000001d0 + 0x3c);
            *(float *)(unaff_x29 + -0x88) = in_stack_00001538;
            Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                      ((MethodInfo *)0x0);
            in_stack_000001d0[5] = in_stack_000001d0[3];
            in_stack_000001d0[4] = in_stack_000001d0[2];
            uVar10 = in_stack_000001d0[4];
            in_stack_000001b0[0x2d] = in_stack_000001d0[5];
            in_stack_000001b0[0x2c] = uVar10;
            Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                      ((MethodInfo *)0x0);
            uVar10 = *(undefined8 *)((long)in_stack_000001d8 + 0xfc);
            in_stack_000001d0[1] = *(undefined8 *)((long)in_stack_000001d8 + 0x104);
            *in_stack_000001d0 = uVar10;
            uVar10 = *in_stack_000001d0;
            in_stack_000001b0[0x2b] = in_stack_000001d0[1];
            in_stack_000001b0[0x2a] = uVar10;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                              (0,4,0,0xffffffff,unaff_x29 + -0x80,0);
            *(byte *)((long)in_stack_000001d8 + 0xfb) = bVar3 & 1;
            if ((*(byte *)((long)in_stack_000001d8 + 0xfb) & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar12 = *(ulong *)(unaff_x29 + -0x80);
              in_stack_00001538 = *(float *)(unaff_x29 + -0x78);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
            }
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                              (1,4,1,0xffffffff,unaff_x29 + -0x90,0);
            *(byte *)((long)in_stack_000001d8 + 0xcb) = bVar3 & 1;
            if ((*(byte *)((long)in_stack_000001d8 + 0xcb) & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar12 = *(ulong *)(unaff_x29 + -0x90);
              in_stack_00001538 = *(float *)(unaff_x29 + -0x88);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
            }
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (0,5,0,0xffffffff,unaff_x29 + -0xa0,0);
            if ((bVar3 & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar10 = in_stack_000001b0[0x2c];
              *(undefined8 *)((long)in_stack_000001d8 + 0x84) = in_stack_000001b0[0x2d];
              *(undefined8 *)((long)in_stack_000001d8 + 0x7c) = uVar10;
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_000001d8 + 0x74) =
                   *(undefined8 *)((long)in_stack_000001d8 + 0x84);
              *(undefined8 *)((long)in_stack_000001d8 + 0x6c) =
                   *(undefined8 *)((long)in_stack_000001d8 + 0x7c);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00001180,pvVar7,0);
              in_stack_00001538 = in_stack_00001188;
            }
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (1,5,1,0xffffffff,unaff_x29 + -0xb0,0);
            if ((bVar3 & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar10 = in_stack_000001b0[0x2a];
              *(undefined8 *)((long)in_stack_000001d8 + 0x54) = in_stack_000001b0[0x2b];
              *(undefined8 *)((long)in_stack_000001d8 + 0x4c) = uVar10;
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_000001d8 + 0x44) =
                   *(undefined8 *)((long)in_stack_000001d8 + 0x54);
              *(undefined8 *)((long)in_stack_000001d8 + 0x3c) =
                   *(undefined8 *)((long)in_stack_000001d8 + 0x4c);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00001150,pvVar7,0);
              in_stack_00001538 = in_stack_00001158;
            }
          }
        }
        if ((*(byte *)((long)in_stack_000001b0 + 0x1f6) & 1) != 0) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          if (*(int *)(lVar6 + 0x100) == 2) {
            Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
            *(ulong *)(unaff_x29 + -0x100) = in_stack_000001d8[3];
            *(float *)(unaff_x29 + -0xf8) = in_stack_00001538;
            Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
            uVar12 = *in_stack_000001d8;
            Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                      ((MethodInfo *)0x0);
            in_stack_000001e0[0x1f] = in_stack_000001e0[0x1d];
            in_stack_000001e0[0x1e] = in_stack_000001e0[0x1c];
            uVar10 = in_stack_000001e0[0x1e];
            in_stack_000001b0[0x1d] = in_stack_000001e0[0x1f];
            in_stack_000001b0[0x1c] = uVar10;
            Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                      ((MethodInfo *)0x0);
            in_stack_000001e0[0x1b] = in_stack_000001e0[0x19];
            in_stack_000001e0[0x1a] = in_stack_000001e0[0x18];
            uVar10 = in_stack_000001e0[0x1a];
            in_stack_000001b0[0x1b] = in_stack_000001e0[0x1b];
            in_stack_000001b0[0x1a] = uVar10;
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                              (4,4,3,0xffffffff,unaff_x29 + -0x100,0);
            if ((bVar3 & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar13 = *(ulong *)(unaff_x29 + -0x100);
              uVar14 = *(undefined4 *)(unaff_x29 + -0xf8);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar13 & 0xffffffff,(int)(uVar13 >> 0x20),uVar14,pvVar7,0);
            }
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyVector3_mFA9CA29D9B8B68721EBFF755AE379F019ADB3EA1
                              (5,4,4,0xffffffff,&stack0x00001780,0);
            if ((bVar3 & 1) != 0) {
              pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,(int)(uVar12 >> 0x20),in_stack_00001538,pvVar7,0);
            }
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (4,5,3,0xffffffff,&stack0x00001770,0);
            if ((bVar3 & 1) != 0) {
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar10 = in_stack_000001b0[0x1c];
              in_stack_000001e0[9] = in_stack_000001b0[0x1d];
              in_stack_000001e0[8] = uVar10;
              NullCheck(pvVar7);
              in_stack_000001e0[7] = in_stack_000001e0[9];
              in_stack_000001e0[6] = in_stack_000001e0[8];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00001040,in_stack_00001044,in_stack_00001048,pvVar7,0);
            }
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
            bVar3 = OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
                              (5,5,4,0xffffffff,&stack0x00001760,0);
            if ((bVar3 & 1) != 0) {
              pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              uVar10 = in_stack_000001b0[0x1a];
              in_stack_000001e0[3] = in_stack_000001b0[0x1b];
              in_stack_000001e0[2] = uVar10;
              NullCheck(pvVar7);
              in_stack_000001e0[1] = in_stack_000001e0[3];
              *in_stack_000001e0 = in_stack_000001e0[2];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00001010,in_stack_00001014,in_stack_00001018,pvVar7,0);
            }
          }
          else {
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
            iVar4 = OVRInput_GetActiveControllerForHand_m3D6D1A5329F4C8A17CBD11FFEF42C0EB0B98B1CF(1)
            ;
            iVar5 = OVRInput_GetActiveControllerForHand_m3D6D1A5329F4C8A17CBD11FFEF42C0EB0B98B1CF
                              (2,0);
            if (iVar4 == 0) {
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
              bVar3 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                                (0x20,0);
              if ((bVar3 & 1) == 0) {
                il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
                bVar3 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                                  (1,0);
                if ((bVar3 & 1) != 0) {
                  iVar4 = 1;
                }
              }
              else {
                iVar4 = 0x20;
              }
            }
            if (iVar5 == 0) {
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
              bVar3 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                                (0x40,0);
              if ((bVar3 & 1) == 0) {
                il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
                bVar3 = OVRInput_GetControllerPositionValid_m3ACDABE2BD5335A8DE615A2F9A5C9D63CE329E94
                                  (2,0);
                if ((bVar3 & 1) != 0) {
                  iVar5 = 2;
                }
              }
              else {
                iVar5 = 0x40;
              }
            }
            pvVar7 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
            OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(iVar4,0);
            uVar12 = in_stack_000001e8[0x2b];
            NullCheck(pvVar7);
            Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                      (uVar12 & 0xffffffff,pvVar7,0);
            pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(iVar5,0);
            uVar12 = in_stack_000001e8[0x25];
            NullCheck(pvVar7);
            Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                      (uVar12 & 0xffffffff,pvVar7,0);
            pvVar7 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(iVar4,0);
            *(undefined8 *)((long)in_stack_000001e8 + 0xfc) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xec);
            *(undefined8 *)((long)in_stack_000001e8 + 0xf4) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xe4);
            NullCheck(pvVar7);
            *(undefined8 *)((long)in_stack_000001e8 + 0xdc) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xfc);
            *(undefined8 *)((long)in_stack_000001e8 + 0xd4) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xf4);
            Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                      (in_stack_00000f50,pvVar7,0);
            pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(iVar5,0);
            *(undefined8 *)((long)in_stack_000001e8 + 0xbc) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xac);
            *(undefined8 *)((long)in_stack_000001e8 + 0xb4) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xa4);
            NullCheck(pvVar7);
            *(undefined8 *)((long)in_stack_000001e8 + 0x9c) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xbc);
            *(undefined8 *)((long)in_stack_000001e8 + 0x94) =
                 *(undefined8 *)((long)in_stack_000001e8 + 0xb4);
            Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                      (in_stack_00000f10,pvVar7,0);
            iVar4 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A
                              (0,0);
            if (iVar4 == 2) {
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
              OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(1,0);
              uVar12 = in_stack_000001e8[0xd];
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(1,0);
              *(undefined8 *)((long)in_stack_000001e8 + 0x4c) =
                   *(undefined8 *)((long)in_stack_000001e8 + 0x3c);
              *(undefined8 *)((long)in_stack_000001e8 + 0x44) =
                   *(undefined8 *)((long)in_stack_000001e8 + 0x34);
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_000001e8 + 0x2c) =
                   *(undefined8 *)((long)in_stack_000001e8 + 0x4c);
              *(undefined8 *)((long)in_stack_000001e8 + 0x24) =
                   *(undefined8 *)((long)in_stack_000001e8 + 0x44);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000ea0,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = *in_stack_000001e8;
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              in_stack_000001f0[0x27] = in_stack_000001f0[0x25];
              in_stack_000001f0[0x26] = in_stack_000001f0[0x24];
              NullCheck(pvVar7);
              in_stack_000001f0[0x23] = in_stack_000001f0[0x27];
              in_stack_000001f0[0x22] = in_stack_000001f0[0x26];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000e30,pvVar7,0);
            }
            else if (iVar4 == 1) {
              pvVar7 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
              OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(0x20,0);
              uVar12 = *(ulong *)((long)in_stack_000001f0 + 0xe4);
              NullCheck(pvVar7);
              Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44
                        (uVar12 & 0xffffffff,pvVar7,0);
              uVar12 = *(ulong *)((long)in_stack_000001f0 + 0xcc);
              pvVar7 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              pvVar9 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              NullCheck(pvVar9);
              Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                        (uVar12 & 0xffffffff,pvVar9,0);
              uVar12 = *(ulong *)((long)in_stack_000001f0 + 0x84);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              pvVar9 = (void *)OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              NullCheck(pvVar9);
              Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar9,0);
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
              uVar10 = in_stack_000001f0[4];
              *(undefined8 *)((long)in_stack_000001f8 + 0xbc) = in_stack_000001f0[5];
              *(undefined8 *)((long)in_stack_000001f8 + 0xb4) = uVar10;
              *(undefined8 *)((long)in_stack_000001f8 + 0xac) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0xfc);
              *(undefined8 *)((long)in_stack_000001f8 + 0xa4) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0xf4);
              Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                        (in_stack_00000cd0,0);
              *(undefined8 *)((long)in_stack_000001f8 + 0xdc) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0xcc);
              *(undefined8 *)((long)in_stack_000001f8 + 0xd4) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0xc4);
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_000001f8 + 0x9c) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0xdc);
              *(undefined8 *)((long)in_stack_000001f8 + 0x94) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0xd4);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000cb0,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = in_stack_000001f8[0xe];
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              *(undefined8 *)((long)in_stack_000001f8 + 0x4c) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0x3c);
              *(undefined8 *)((long)in_stack_000001f8 + 0x44) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0x34);
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_000001f8 + 0x2c) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0x4c);
              *(undefined8 *)((long)in_stack_000001f8 + 0x24) =
                   *(undefined8 *)((long)in_stack_000001f8 + 0x44);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000c40,pvVar7,0);
            }
            else {
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = *in_stack_000001f8;
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              in_stack_00000200[0x1f] = in_stack_00000200[0x1d];
              in_stack_00000200[0x1e] = in_stack_00000200[0x1c];
              NullCheck(pvVar7);
              in_stack_00000200[0x1b] = in_stack_00000200[0x1f];
              in_stack_00000200[0x1a] = in_stack_00000200[0x1e];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000bd0,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = *(ulong *)((long)in_stack_00000200 + 0xac);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              in_stack_00000200[0x11] = in_stack_00000200[0xf];
              in_stack_00000200[0x10] = in_stack_00000200[0xe];
              NullCheck(pvVar7);
              in_stack_00000200[0xd] = in_stack_00000200[0x11];
              in_stack_00000200[0xc] = in_stack_00000200[0x10];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000b60,pvVar7,0);
            }
            il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
            iVar4 = OVRInput_GetControllerIsInHandState_m1F89D272E3F3FD38292CC65DA0C176F315C05C9A
                              (1,0);
            if (iVar4 == 2) {
              pvVar7 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
              OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(2,0);
              uVar12 = *(ulong *)((long)in_stack_00000200 + 0x34);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              OVRInput_GetLocalControllerRotation_mF2ECF5F8BBB3EF1CF9D4B5E0A1BEC6CA9036515F(2,0);
              in_stack_00000200[3] = in_stack_00000200[1];
              in_stack_00000200[2] = *in_stack_00000200;
              NullCheck(pvVar7);
              uVar10 = in_stack_00000200[2];
              *(undefined8 *)((long)in_stack_00000208 + 0x104) = in_stack_00000200[3];
              *(undefined8 *)((long)in_stack_00000208 + 0xfc) = uVar10;
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000af0,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = in_stack_00000208[0x1b];
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              *(undefined8 *)((long)in_stack_00000208 + 0xb4) =
                   *(undefined8 *)((long)in_stack_00000208 + 0xa4);
              *(undefined8 *)((long)in_stack_00000208 + 0xac) =
                   *(undefined8 *)((long)in_stack_00000208 + 0x9c);
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_00000208 + 0x94) =
                   *(undefined8 *)((long)in_stack_00000208 + 0xb4);
              *(undefined8 *)((long)in_stack_00000208 + 0x8c) =
                   *(undefined8 *)((long)in_stack_00000208 + 0xac);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000a80,in_stack_00000a84,in_stack_00000a88,pvVar7,0);
            }
            else if (iVar4 == 1) {
              pvVar7 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000230);
              OVRInput_GetLocalControllerPosition_mD8A4504C441B477AB11C92CB7FBD561ECF15E253(0x40,0);
              uVar12 = in_stack_00000208[0xc];
              NullCheck(pvVar7);
              Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44
                        (uVar12 & 0xffffffff,pvVar7,0);
              uVar12 = in_stack_00000208[9];
              pvVar7 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              pvVar9 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              NullCheck(pvVar9);
              Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                        (uVar12 & 0xffffffff,pvVar9,0);
              uVar12 = *in_stack_00000208;
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              pvVar9 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              NullCheck(pvVar9);
              Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(pvVar9,0);
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
              Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                        (in_stack_00000920,0);
              in_stack_00000210[0x25] = in_stack_00000210[0x23];
              in_stack_00000210[0x24] = in_stack_00000210[0x22];
              NullCheck(pvVar7);
              in_stack_00000210[0x1d] = in_stack_00000210[0x25];
              in_stack_00000210[0x1c] = in_stack_00000210[0x24];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000900,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = *(ulong *)((long)in_stack_00000210 + 0xbc);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              in_stack_00000210[0x13] = in_stack_00000210[0x11];
              in_stack_00000210[0x12] = in_stack_00000210[0x10];
              NullCheck(pvVar7);
              in_stack_00000210[0xf] = in_stack_00000210[0x13];
              in_stack_00000210[0xe] = in_stack_00000210[0x12];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000890,in_stack_00000894,in_stack_00000898,pvVar7,0);
            }
            else {
              pvVar7 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = *(ulong *)((long)in_stack_00000210 + 0x4c);
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              in_stack_00000210[5] = in_stack_00000210[3];
              in_stack_00000210[4] = in_stack_00000210[2];
              NullCheck(pvVar7);
              in_stack_00000210[1] = in_stack_00000210[5];
              *in_stack_00000210 = in_stack_00000210[4];
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_00000820,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
              uVar12 = in_stack_00000218[0x23];
              NullCheck(pvVar7);
              Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                        (uVar12 & 0xffffffff,pvVar7,0);
              pvVar7 = (void *)OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                                         (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9
                                            **)(unaff_x29 + -8),(MethodInfo *)0x0);
              Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                        ((MethodInfo *)0x0);
              *(undefined8 *)((long)in_stack_00000218 + 0xf4) =
                   *(undefined8 *)((long)in_stack_00000218 + 0xe4);
              *(undefined8 *)((long)in_stack_00000218 + 0xec) =
                   *(undefined8 *)((long)in_stack_00000218 + 0xdc);
              NullCheck(pvVar7);
              *(undefined8 *)((long)in_stack_00000218 + 0xd4) =
                   *(undefined8 *)((long)in_stack_00000218 + 0xf4);
              *(undefined8 *)((long)in_stack_00000218 + 0xcc) =
                   *(undefined8 *)((long)in_stack_00000218 + 0xec);
              Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                        (in_stack_000007b0,in_stack_000007b4,in_stack_000007b8,pvVar7,0);
            }
          }
          pvVar7 = (void *)OVRCameraRig_get_trackerAnchor_m861560DB752DD287DA540064E72C61997FF33BE2_inline
                                     (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                       (unaff_x29 + -8),(MethodInfo *)0x0);
          uVar10 = in_stack_000001b0[0x38];
          *(undefined8 *)((long)in_stack_00000218 + 0xa4) = in_stack_000001b0[0x39];
          *(undefined8 *)((long)in_stack_00000218 + 0x9c) = uVar10;
          NullCheck(pvVar7);
          Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                    (in_stack_00000780,pvVar7,0);
          OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
          *(undefined8 *)((long)in_stack_00000218 + 100) = in_stack_00000218[9];
          *(undefined8 *)((long)in_stack_00000218 + 0x5c) = in_stack_00000218[8];
          uVar10 = *(undefined8 *)((long)in_stack_00000218 + 0x5c);
          in_stack_000001b0[0x27] = *(undefined8 *)((long)in_stack_00000218 + 100);
          in_stack_000001b0[0x26] = uVar10;
          *(undefined8 *)(unaff_x29 + -0xbc) = in_stack_00000738;
          *(undefined8 *)(unaff_x29 + -0xc4) = in_stack_00000730;
          OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
          *(undefined8 *)((long)in_stack_00000218 + 0x24) = in_stack_00000218[1];
          *(undefined8 *)((long)in_stack_00000218 + 0x1c) = *in_stack_00000218;
          uVar10 = *(undefined8 *)((long)in_stack_00000218 + 0x1c);
          in_stack_000001b0[0x23] = *(undefined8 *)((long)in_stack_00000218 + 0x24);
          in_stack_000001b0[0x22] = uVar10;
          *(undefined8 *)(unaff_x29 + -0xdc) = in_stack_000006f8;
          *(undefined8 *)(unaff_x29 + -0xe4) = in_stack_000006f0;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          lVar6 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
          if (*(int *)(lVar6 + 0x100) == 2) {
            il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
            OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4(4);
            *(undefined8 *)((long)in_stack_00000220 + 0xfc) = in_stack_00000220[0x1c];
            *(undefined8 *)((long)in_stack_00000220 + 0xf4) = in_stack_00000220[0x1b];
            uVar10 = *(undefined8 *)((long)in_stack_00000220 + 0xf4);
            in_stack_000001b0[0x27] = *(undefined8 *)((long)in_stack_00000220 + 0xfc);
            in_stack_000001b0[0x26] = uVar10;
            *(undefined8 *)(unaff_x29 + -0xbc) = in_stack_000006b8;
            *(undefined8 *)(unaff_x29 + -0xc4) = in_stack_000006b0;
            OVRManager_GetOpenVRControllerOffset_mCA3A47777AA4F15B22B35DF6732091990E8CC9B4(5,0);
            *(undefined8 *)((long)in_stack_00000220 + 0xbc) = in_stack_00000220[0x14];
            *(undefined8 *)((long)in_stack_00000220 + 0xb4) = in_stack_00000220[0x13];
            uVar10 = *(undefined8 *)((long)in_stack_00000220 + 0xb4);
            in_stack_000001b0[0x23] = *(undefined8 *)((long)in_stack_00000220 + 0xbc);
            in_stack_000001b0[0x22] = uVar10;
            *(undefined8 *)(unaff_x29 + -0xdc) = in_stack_00000678;
            *(undefined8 *)(unaff_x29 + -0xe4) = in_stack_00000670;
            pvVar7 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            pvVar9 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar9);
            Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar9,0);
            uVar12 = in_stack_00000220[0xd];
            NullCheck(pvVar7);
            Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                      (uVar12 & 0xffffffff,pvVar7,0);
            uVar12 = in_stack_00000220[10];
            uVar14 = in_stack_00000788;
            pvVar7 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            pvVar9 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar9);
            Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar9,0);
            uVar13 = in_stack_00000220[3];
            NullCheck(pvVar7);
            Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D
                      (uVar13 & 0xffffffff,pvVar7,0);
            uVar10 = *in_stack_00000220;
            pvVar7 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar7);
            Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar7,0);
            in_stack_00000228[0x53] = in_stack_00000228[0x51];
            in_stack_00000228[0x52] = in_stack_00000228[0x50];
            in_stack_00000228[0x4b] = in_stack_00000228[0x53];
            in_stack_00000228[0x4a] = in_stack_00000228[0x52];
            Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000560,0);
            in_stack_00000228[0x4f] = in_stack_00000228[0x4d];
            in_stack_00000228[0x4e] = in_stack_00000228[0x4c];
            pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar7);
            Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar7,0);
            in_stack_00000228[0x47] = in_stack_00000228[0x45];
            in_stack_00000228[0x46] = in_stack_00000228[0x44];
            in_stack_00000228[0x3f] = in_stack_00000228[0x4f];
            in_stack_00000228[0x3e] = in_stack_00000228[0x4e];
            in_stack_00000228[0x3d] = in_stack_00000228[0x47];
            in_stack_00000228[0x3c] = in_stack_00000228[0x46];
            Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                      (in_stack_00000500,0);
            in_stack_00000228[0x43] = in_stack_00000228[0x41];
            in_stack_00000228[0x42] = in_stack_00000228[0x40];
            pvVar7 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar7);
            Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar7,0);
            in_stack_00000228[0x39] = in_stack_00000228[0x37];
            in_stack_00000228[0x38] = in_stack_00000228[0x36];
            in_stack_00000228[0x31] = in_stack_00000228[0x39];
            in_stack_00000228[0x30] = in_stack_00000228[0x38];
            Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(in_stack_00000490,0);
            in_stack_00000228[0x35] = in_stack_00000228[0x33];
            in_stack_00000228[0x34] = in_stack_00000228[0x32];
            pvVar7 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar7);
            Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar7,0);
            in_stack_00000228[0x2d] = in_stack_00000228[0x2b];
            in_stack_00000228[0x2c] = in_stack_00000228[0x2a];
            in_stack_00000228[0x25] = in_stack_00000228[0x35];
            in_stack_00000228[0x24] = in_stack_00000228[0x34];
            in_stack_00000228[0x23] = in_stack_00000228[0x2d];
            in_stack_00000228[0x22] = in_stack_00000228[0x2c];
            Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                      (in_stack_00000430,0);
            in_stack_00000228[0x29] = in_stack_00000228[0x27];
            in_stack_00000228[0x28] = in_stack_00000228[0x26];
            in_stack_00000228[0x1d] = in_stack_00000228[0x43];
            in_stack_00000228[0x1c] = in_stack_00000228[0x42];
            in_stack_00000228[0x1b] = in_stack_00000228[0x29];
            in_stack_00000228[0x1a] = in_stack_00000228[0x28];
            OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5
                      (uVar12 & 0xffffffff,(int)(uVar12 >> 0x20),in_stack_00000788,(int)uVar10,
                       (int)((ulong)uVar10 >> 0x20),uVar14,0);
          }
          pvVar7 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                                     (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                       (unaff_x29 + -8),(MethodInfo *)0x0);
          uVar10 = in_stack_000001b0[0x22];
          in_stack_00000228[0x15] = in_stack_000001b0[0x23];
          in_stack_00000228[0x14] = uVar10;
          NullCheck(pvVar7);
          Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                    (in_stack_000003b0 & 0xffffffff,(int)(in_stack_000003b0 >> 0x20),
                     in_stack_000003b8,pvVar7,0);
          pvVar7 = (void *)OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                                     (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                       (unaff_x29 + -8),(MethodInfo *)0x0);
          uVar10 = in_stack_000001b0[0x22];
          in_stack_00000228[0xb] = in_stack_000001b0[0x23];
          in_stack_00000228[10] = uVar10;
          uVar10 = *(undefined8 *)(unaff_x29 + -0xe4);
          in_stack_00000228[9] = *(undefined8 *)(unaff_x29 + -0xdc);
          in_stack_00000228[8] = uVar10;
          NullCheck(pvVar7);
          in_stack_00000228[7] = in_stack_00000228[9];
          in_stack_00000228[6] = in_stack_00000228[8];
          Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                    (in_stack_00000340,in_stack_00000344,in_stack_00000348,in_stack_0000034c,pvVar7,
                     0);
          pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                                     (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                       (unaff_x29 + -8),(MethodInfo *)0x0);
          uVar10 = in_stack_000001b0[0x26];
          in_stack_00000228[1] = in_stack_000001b0[0x27];
          *in_stack_00000228 = uVar10;
          NullCheck(pvVar7);
          Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
                    (in_stack_00000310 & 0xffffffff,(int)(in_stack_00000310 >> 0x20),
                     in_stack_00000318,pvVar7,0);
          pvVar7 = (void *)Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                                     (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                       (unaff_x29 + -8),(MethodInfo *)0x0);
          uVar10 = *(undefined8 *)(unaff_x29 + -0xbc);
          uVar12 = *(ulong *)(unaff_x29 + -0xc4);
          NullCheck(pvVar7);
          Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA
                    (uVar12 & 0xffffffff,(int)(uVar12 >> 0x20),(int)uVar10,
                     (int)((ulong)uVar10 >> 0x20),pvVar7,0);
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        pvVar7 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                                   ((MethodInfo *)0x0);
        NullCheck(pvVar7);
        if ((*(byte *)((long)pvVar7 + 0x112) & 1) != 0) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          pvVar7 = (void *)OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
                                     (0);
          if (pvVar7 != (void *)0x0) {
            pvVar9 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                       (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                         (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar9);
            uVar10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar9,0);
            NullCheck(pvVar7);
            XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                      (pvVar7,uVar10,0,0);
            uVar10 = OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar7);
            XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                      (pvVar7,uVar10,1,0);
            uVar10 = Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                               (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                                 (unaff_x29 + -8),(MethodInfo *)0x0);
            NullCheck(pvVar7);
            XRDisplaySubsystem_MarkTransformLateLatched_m413E10547A6E6607F4B41F0ED6CFA2EC6986E944
                      (pvVar7,uVar10,2,0);
          }
        }
        VirtualActionInvoker0::Invoke(0xc,*(Il2CppObject **)(unaff_x29 + -8));
        VirtualActionInvoker0::Invoke(0xb,*(Il2CppObject **)(unaff_x29 + -8));
      }
      else {
        uVar10 = OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                           (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                             (unaff_x29 + -8),(MethodInfo *)0x0);
        OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
        in_stack_000001b0[0xf] = *(undefined8 *)((long)in_stack_000001b0 + 0x5c);
        in_stack_000001b0[0xe] = *(undefined8 *)((long)in_stack_000001b0 + 0x54);
                    /* try { // try from 02d38604 to 02e38627 has its CatchHandler @ 02d3851c */
        in_stack_000001b0[7] = in_stack_000001b0[0xf];
        in_stack_000001b0[6] = in_stack_000001b0[0xe];
        uStack00000000000001a4 = 1;
        OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
                  (uVar10,&stack0x000016c0,1,0);
        uVar10 = OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                           (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                             (unaff_x29 + -8),(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 02d38548 with catch @ 02d38650 */
        OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
                    /* try { // try from 02d38660 to 02e3867f has its CatchHandler @ 02d38688 */
                    /* catch() { ... } // from try @ 02d38550 with catch @ 02d38668 */
        uVar11 = in_stack_000001b8[0x1e];
        in_stack_000001b0[1] = in_stack_000001b8[0x1f];
        *in_stack_000001b0 = uVar11;
                    /* try { // try from 02d38680 to 02e3868b has its CatchHandler @ 02d37e00 */
        uVar11 = *in_stack_000001b0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02d38494 with catch @ 02d38688
                       catch(type#2 @ 00000000) { ... } // from try @ 02d38660 with catch @ 02d38688
                        */
        *(undefined8 *)((long)in_stack_000001b8 + 0xd4) = in_stack_000001b0[1];
        *(undefined8 *)((long)in_stack_000001b8 + 0xcc) = uVar11;
        OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
                  (uVar10,&stack0x00001650,uStack00000000000001a4 & 1,0);
        uVar10 = OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                           (*(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
                             (unaff_x29 + -8),(MethodInfo *)0x0);
        OVRPose_get_identity_m80A35AA376851112A6104A67226582D63EB0739B(0);
        *(undefined8 *)((long)in_stack_000001b8 + 0xa4) = in_stack_000001b8[0x11];
        *(undefined8 *)((long)in_stack_000001b8 + 0x9c) = in_stack_000001b8[0x10];
        *(undefined8 *)((long)in_stack_000001b8 + 100) =
             *(undefined8 *)((long)in_stack_000001b8 + 0xa4);
        *(undefined8 *)((long)in_stack_000001b8 + 0x5c) =
             *(undefined8 *)((long)in_stack_000001b8 + 0x9c);
        OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
                  (uVar10,&stack0x000015e0,uStack00000000000001a4 & 1,0);
      }
    }
  }
  return;
}


