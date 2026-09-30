/*
FUNCTION_NAME: OVRCameraRig_EnsureGameObjectIntegrity_m6199C2977C6DF3CA1ED7B24D311A31081E42D01B
ENTRY_POINT: 02d3b498
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 247
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_21;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_possible_biometrics_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRCameraRig_EnsureGameObjectIntegrity_m6199C2977C6DF3CA1ED7B24D311A31081E42D01B
               (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *param_1,undefined8 param_2)

{
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 OVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *pTVar11;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *pCVar12;
  void *pvVar13;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar14;
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [64];
  void *local_c0;
  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *local_b8;
  String_t *local_b0;
  byte local_a1;
  undefined8 local_a0;
  byte local_91;
  void *local_90;
  byte local_81;
  undefined8 local_80;
  void *local_78;
  uint local_6c;
  void *local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  byte local_41;
  uint local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  uint local_38;
  byte local_31;
  undefined8 local_30;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *local_28;
  
  puVar7 = Method_System_Collections_Generic_List<VisualTreeAsset_UsingEntry>_get_Item__;
  puVar6 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_Dispose__;
  puVar4 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_string>_TryGetValue__;
  puVar2 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRCameraRig_EnsureGameObjectIntegrity_m6199C2977C6DF3CA1ED7B24D311A31081E42D01B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_string>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    OVRCameraRig_EnsureGameObjectIntegrity_m6199C2977C6DF3CA1ED7B24D311A31081E42D01B::
    s_Il2CppMethodInitialized = 1;
  }
  local_31 = 0;
  local_38 = 0;
  local_39 = 0;
  local_3a = 0;
  local_3b = 0;
  local_3c = 0;
  local_40 = 0;
  local_41 = 0;
  local_50 = (void *)0x0;
  local_58 = (void *)0x0;
  local_60 = (void *)0x0;
  local_68 = (void *)0x0;
  local_6c = 0;
  local_78 = (void *)0x0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  local_80 = OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                       ((MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_81 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_80,0);
  local_81 = local_81 & 1;
  if (local_81 == 0) {
    local_38 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    local_90 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                                 ((MethodInfo *)0x0);
    NullCheck(local_90);
    local_91 = OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218(local_90,0);
    local_91 = local_91 & 1;
    local_38 = (uint)local_91;
  }
  local_31 = local_38 != 0;
  local_a0 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                       (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_a1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_a0,0);
  local_a1 = local_a1 & 1;
  if (local_a1 != 0) {
    local_b0 = *(String_t **)(local_28 + 0xb0);
    local_b8 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
               VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
               ::Invoke(0xe,(Il2CppObject *)local_28,
                        (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)0x0,local_b0);
    OVRCameraRig_set_trackingSpace_m6183210BA7032CDC4DBD89DEFAA704118205A22D_inline
              (local_28,local_b8,(MethodInfo *)0x0);
    local_c0 = (void *)OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                                 (local_28,(MethodInfo *)0x0);
    NullCheck(local_c0);
    Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(local_c0,0);
    memcpy(auStack_100,auStack_140,0x40);
    memcpy(local_28 + 0x140,auStack_100,0x40);
  }
  uVar10 = OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xc0));
    OVRCameraRig_set_leftEyeAnchor_m31D85D6B9BD1FD5BF879546A05787C373D8ADF66_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 200));
    OVRCameraRig_set_centerEyeAnchor_mC5CC58E8F8C8BCECB25F68D90BF0D86BCA03C069_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xd0));
    OVRCameraRig_set_rightEyeAnchor_m5829AA96DD4CFD4ED1822B6ACB0F2717512131D7_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xd8));
    OVRCameraRig_set_leftHandAnchor_mA43F38318E2193555C22C610529F080BEF67591D_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xe0));
    OVRCameraRig_set_rightHandAnchor_m20447196D4BAF71F7E6D45604BD884D4DBF0270E_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_leftHandAnchorDetached_m2F440CAAC9DE7A4C2EDEA66D7C7C2088CA999D1E_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xf8));
    OVRCameraRig_set_leftHandAnchorDetached_m3AEB99928EBF6BB9C4741079F80D241AA5E7D008_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_rightHandAnchorDetached_m3DF734F2E0D84B29E4BD4A29C7CFC61B6F39BECD_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0x100));
    OVRCameraRig_set_rightHandAnchorDetached_mC02531A37AE272077273E596B6CDC34767045FA6_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_leftControllerInHandAnchor_mBF9EDEAF742262ABDFB8A31978E5A3A7CC1C210A_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0x108));
    OVRCameraRig_set_leftControllerInHandAnchor_mEF989EC3388569069F17CDEE1D66C16B8D8DE585_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_leftHandOnControllerAnchor_m5233B47113CB6C6877691B0683419BD9980F54E3_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_leftControllerInHandAnchor_mBF9EDEAF742262ABDFB8A31978E5A3A7CC1C210A_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0x110));
    OVRCameraRig_set_leftHandOnControllerAnchor_m5F84E9C7E6C8BFB23F1F8E8B186ECF85DE38AC9E_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_rightControllerInHandAnchor_m82C2465971439B4D6A75E39C6E8EF1C40C909814_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0x118));
    OVRCameraRig_set_rightControllerInHandAnchor_m5C64D774A690CCEF6A255E7509888BFDB1D708E4_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_rightHandOnControllerAnchor_m2222FB11DDA9B18E2C06E7DC3A0589692CC6D1F3_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_rightControllerInHandAnchor_m82C2465971439B4D6A75E39C6E8EF1C40C909814_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0x120));
    OVRCameraRig_set_rightHandOnControllerAnchor_mBD09A197FBE3BF09ABDBDE0308A3AD2078EBB49E_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_trackerAnchor_m861560DB752DD287DA540064E72C61997FF33BE2_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xb8));
    OVRCameraRig_set_trackerAnchor_m722C0541F1B2010A3E642D38A3689E9EA86D69B7_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = Oculus_Interaction_HandGrab_HandGrabInteractor__set_WristStrength
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              OVRCameraRig_get_leftHandAnchor_m2EE938DB2ADD234FA1211B562C659884ABC56644_inline
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xe8));
    OVRCameraRig_set_leftControllerAnchor_m52BC7D80A2807A4877304F1AC69B5ACDF303CD57_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = OVRCameraRig_get_rightControllerAnchor_mF14AEB62D422D3570CCAE0F62F0C955C12AD7594_inline
                     (local_28,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) != 0) {
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              Oculus_Interaction_HandGrab_HandGrabInteractor__get_WristStrength
                        (local_28,(MethodInfo *)0x0);
    pTVar11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *)
              VirtualFuncInvoker2<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*,String_t*>
              ::Invoke(0xe,(Il2CppObject *)local_28,pTVar11,*(String_t **)(local_28 + 0xf0));
    OVRCameraRig_set_rightControllerAnchor_mD8034490959F032452D3EEBC91A57653D071FD73_inline
              (local_28,pTVar11,(MethodInfo *)0x0);
  }
  uVar10 = *(undefined8 *)(local_28 + 0x128);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
  if ((bVar8 & 1) == 0) {
    uVar10 = *(undefined8 *)(local_28 + 0x130);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
    if ((bVar8 & 1) != 0) goto LAB_02d3c124;
    uVar10 = *(undefined8 *)(local_28 + 0x138);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
    if ((bVar8 & 1) != 0) goto LAB_02d3c124;
  }
  else {
LAB_02d3c124:
    pCVar12 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
              OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                        (local_28,(MethodInfo *)0x0);
    NullCheck(pCVar12);
    pvVar13 = (void *)Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4
                                (pCVar12,*(MethodInfo **)puVar3);
    *(void **)(local_28 + 0x128) = pvVar13;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x128),pvVar13);
    pCVar12 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
              OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                        (local_28,(MethodInfo *)0x0);
    NullCheck(pCVar12);
    pvVar13 = (void *)Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4
                                (pCVar12,*(MethodInfo **)puVar3);
    *(void **)(local_28 + 0x130) = pvVar13;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x130),pvVar13);
    pCVar12 = (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *)
              OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                        (local_28,(MethodInfo *)0x0);
    NullCheck(pCVar12);
    pvVar13 = (void *)Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4
                                (pCVar12,*(MethodInfo **)puVar3);
    *(void **)(local_28 + 0x138) = pvVar13;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x138),pvVar13);
    uVar10 = *(undefined8 *)(local_28 + 0x128);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
    if ((bVar8 & 1) != 0) {
      pvVar13 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                                  (local_28,(MethodInfo *)0x0);
      NullCheck(pvVar13);
      pGVar14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar13,0);
      NullCheck(pGVar14);
      pvVar13 = (void *)GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142
                                  (pGVar14,*(MethodInfo **)puVar7);
      *(void **)(local_28 + 0x128) = pvVar13;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x128),pvVar13);
      pvVar13 = *(void **)(local_28 + 0x128);
      NullCheck(pvVar13);
      Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(pvVar13,*(undefined8 *)puVar5,0);
    }
    uVar10 = *(undefined8 *)(local_28 + 0x130);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
    if ((bVar8 & 1) != 0) {
      pvVar13 = (void *)OVRCameraRig_get_leftEyeAnchor_m659E320D48FB4FD7A5A6504D252C7C625280EB7C_inline
                                  (local_28,(MethodInfo *)0x0);
      NullCheck(pvVar13);
      pGVar14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar13,0);
      NullCheck(pGVar14);
      pvVar13 = (void *)GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142
                                  (pGVar14,*(MethodInfo **)puVar7);
      *(void **)(local_28 + 0x130) = pvVar13;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x130),pvVar13);
      pvVar13 = *(void **)(local_28 + 0x130);
      NullCheck(pvVar13);
      Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(pvVar13,*(undefined8 *)puVar5,0);
    }
    uVar10 = *(undefined8 *)(local_28 + 0x138);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
    if ((bVar8 & 1) != 0) {
      pvVar13 = (void *)OVRCameraRig_get_rightEyeAnchor_m5AD100BC9FA1732C9AF150CEC1A0F34F2305840E_inline
                                  (local_28,(MethodInfo *)0x0);
      NullCheck(pvVar13);
      pGVar14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar13,0);
      NullCheck(pGVar14);
      pvVar13 = (void *)GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142
                                  (pGVar14,*(MethodInfo **)puVar7);
      *(void **)(local_28 + 0x138) = pvVar13;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x138),pvVar13);
      pvVar13 = *(void **)(local_28 + 0x138);
      NullCheck(pvVar13);
      Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(pvVar13,*(undefined8 *)puVar5,0);
    }
    pvVar13 = *(void **)(local_28 + 0x128);
    NullCheck(pvVar13);
    Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(pvVar13,3);
    pvVar13 = *(void **)(local_28 + 0x130);
    NullCheck(pvVar13);
    Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(pvVar13,1,0);
    pvVar13 = *(void **)(local_28 + 0x138);
    NullCheck(pvVar13);
    Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(pvVar13,2,0);
  }
  if ((local_31 & 1) == 0) {
LAB_02d3c680:
    pvVar13 = *(void **)(local_28 + 0x128);
    NullCheck(pvVar13);
    iVar9 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538(pvVar13,0);
    if (iVar9 != 3) {
      pvVar13 = *(void **)(local_28 + 0x128);
      NullCheck(pvVar13);
      Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(pvVar13,3,0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar6);
    bVar8 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
    if ((bVar8 & 1) != 0) goto LAB_02d3c680;
    pvVar13 = *(void **)(local_28 + 0x128);
    NullCheck(pvVar13);
    iVar9 = Camera_get_stereoTargetEye_m4EAC83490BE3B389A5393D72AA5D0830F0476538(pvVar13,0);
    if (iVar9 != 1) {
      pvVar13 = *(void **)(local_28 + 0x128);
      NullCheck(pvVar13);
      Camera_set_stereoTargetEye_mDB97D9BA5BF538F709EBD006B6B59E78603510DD(pvVar13,1,0);
    }
  }
  if (((byte)local_28[0xaa] & 1) != 0) {
    pvVar13 = *(void **)(local_28 + 0x128);
    NullCheck(pvVar13);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar13,0);
    pvVar13 = *(void **)(local_28 + 0x130);
    NullCheck(pvVar13);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar13,0,0);
    pvVar13 = *(void **)(local_28 + 0x138);
    NullCheck(pvVar13);
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar13,0,0);
    return;
  }
  pvVar13 = *(void **)(local_28 + 0x128);
  NullCheck(pvVar13);
  bVar8 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar13,0);
  if ((bVar8 & 1) != ((byte)local_28[0xa8] & 1)) {
    pvVar13 = *(void **)(local_28 + 0x130);
    NullCheck(pvVar13);
    bVar8 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar13,0);
    if ((bool)(bVar8 & 1) != (((byte)local_28[0xa8] & 1) == 0)) {
      pvVar13 = *(void **)(local_28 + 0x138);
      NullCheck(pvVar13);
      bVar8 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(pvVar13,0);
      bVar8 = bVar8 & 1;
      if (((byte)local_28[0xa8] & 1) == 0) {
        local_40 = 1;
        local_41 = bVar8;
        local_39 = bVar8;
      }
      else {
        local_3a = bVar8;
        if ((local_31 & 1) == 0) {
          local_40 = 0;
          local_41 = bVar8;
          local_3b = bVar8;
        }
        else {
          local_3c = bVar8;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar6);
          bVar8 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
          local_40 = (uint)((bVar8 & 1) == 0);
          local_41 = local_3c & 1;
        }
      }
      if (local_41 != local_40) goto LAB_02d3c9ac;
    }
  }
  local_28[0xab] = (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9)0x1;
LAB_02d3c9ac:
  pvVar13 = *(void **)(local_28 + 0x128);
  OVar1 = local_28[0xa8];
  NullCheck(pvVar13);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar13,((byte)OVar1 & 1) == 0);
  pvVar13 = *(void **)(local_28 + 0x130);
  OVar1 = local_28[0xa8];
  NullCheck(pvVar13);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(pvVar13,(byte)OVar1 & 1,0);
  pvVar13 = *(void **)(local_28 + 0x138);
  if (((byte)local_28[0xa8] & 1) == 0) {
    local_6c = 0;
    local_78 = pvVar13;
    local_50 = pvVar13;
  }
  else {
    local_58 = pvVar13;
    if ((local_31 & 1) == 0) {
      local_6c = 1;
      local_78 = pvVar13;
      local_60 = pvVar13;
    }
    else {
      local_68 = pvVar13;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar6);
      bVar8 = OVRPlugin_get_EyeTextureArrayEnabled_m16DFC619BF9FAD94EAAA87EDE6F06D22BBED02A9(0);
      local_6c = (uint)(bVar8 & 1);
      local_78 = local_68;
    }
  }
  NullCheck(local_78);
  Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(local_78,local_6c != 0,0);
  return;
}


