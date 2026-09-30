/*
FUNCTION_NAME: System.Linq.Expressions.Expression$$Not
ENTRY_POINT: 02e4e32c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 118
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_9;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Linq_Expressions_Expression__Not
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined8 param_4,long param_5)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *pOVar7;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar8;
  ulong uVar9;
  long unaff_x29;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fStack0000000000000014;
  float fStack0000000000000034;
  undefined8 *in_stack_000000d0;
  ulong *in_stack_000000e0;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000154;
  float fStack000000000000016c;
  undefined4 uStack0000000000000174;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000194;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001ec;
  
  *(long *)(param_5 + 0x14) = param_1._8_8_;
  *(long *)(param_5 + 0xc) = param_1._0_8_;
  Nullable_1__ctor_mE9D795BCC562C5032A12AD08CCF99BD6454D3480
            (param_4,param_5,*(undefined8 *)StringLiteral_764);
  lVar4 = *(long *)(unaff_x29 + -8);
  uVar17 = *(undefined8 *)((long)in_stack_000000d0 + 0xec);
  *(undefined8 *)(lVar4 + 0xa4) = *(undefined8 *)((long)in_stack_000000d0 + 0xf4);
  *(undefined8 *)(lVar4 + 0x9c) = uVar17;
  uVar17 = *(undefined8 *)((long)in_stack_000000d0 + 0xfc);
  *(undefined8 *)(lVar4 + 0xb4) = *(undefined8 *)((long)in_stack_000000d0 + 0x104);
  *(undefined8 *)(lVar4 + 0xac) = uVar17;
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
  NullCheck(pvVar5);
  pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar5);
  NullCheck(pvVar5);
  Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar5,0);
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_000000d0[0x14];
  *(undefined4 *)(unaff_x29 + -0x48) = param_3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f8);
  pvVar5 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar5);
  iVar3 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0(pvVar5,0);
  if (iVar3 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f8);
    pvVar5 = (void *)OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D();
    NullCheck(pvVar5);
    fVar11 = (float)OVRProfile_get_eyeHeight_m28216080CA3C1DC1B6B2DAAD61833B758EE05CA1(pvVar5,0);
    pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
    NullCheck(pvVar5);
    fVar15 = (float)CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF
                              (pvVar5,0);
    pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
    NullCheck(pvVar5);
    CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(pvVar5,0);
    uVar17 = in_stack_000000d0[9];
    fVar15 = (float)il2cpp_codegen_multiply<float,float>(0.5,fVar15);
    fVar11 = (float)il2cpp_codegen_subtract<float,float>(fVar11,fVar15);
    uVar12 = il2cpp_codegen_add<float,float>(fVar11,(float)((ulong)uVar17 >> 0x20));
    *(undefined4 *)(unaff_x29 + -0x4c) = uVar12;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f8);
    pvVar5 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar5);
    iVar3 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0(pvVar5,0);
    if (iVar3 == 1) {
      pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
      NullCheck(pvVar5);
      fVar11 = (float)CharacterController_get_height_m18EC4D93673A225648DCB302BAB4F8A5FE4A20AF
                                (pvVar5);
      pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
      NullCheck(pvVar5);
      CharacterController_get_center_mDF0F4D399A63BF5A2F5366CB71CCF4148DB08591(pvVar5,0);
      uVar17 = *in_stack_000000d0;
      fVar11 = (float)il2cpp_codegen_multiply<float,float>(0.5,fVar11);
      uVar12 = il2cpp_codegen_add<float,float>(-fVar11,(float)((ulong)uVar17 >> 0x20));
      *(undefined4 *)(unaff_x29 + -0x4c) = uVar12;
    }
  }
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
  NullCheck(pvVar5);
  pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar5);
  uVar6 = *(ulong *)(unaff_x29 + -0x50);
  uVar12 = *(undefined4 *)(unaff_x29 + -0x48);
  NullCheck(pvVar5);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(uVar6 & 0xffffffff,pvVar5,0)
  ;
  pOVar7 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)
            (*(long *)(unaff_x29 + -8) + 0x80);
  NullCheck(pOVar7);
  pvVar5 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                             (pOVar7,(MethodInfo *)0x0);
  NullCheck(pvVar5);
  Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar5,0);
  *(int *)(*(long *)(unaff_x29 + -8) + 0x4c) = (int)(in_stack_000000e0[0x9c] >> 0x20);
  if (*(long *)(*(long *)(unaff_x29 + -8) + 0x60) != 0) {
    pAVar8 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)
              (*(long *)(unaff_x29 + -8) + 0x60);
    NullCheck(pAVar8);
    Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar8,(MethodInfo *)0x0);
  }
  VirtualActionInvoker0::Invoke(5,*(Il2CppObject **)(unaff_x29 + -8));
  Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  *(ulong *)(unaff_x29 + -0x20) = in_stack_000000e0[0x96];
  *(undefined4 *)(unaff_x29 + -0x18) = uVar12;
  fVar11 = *(float *)(*(long *)(unaff_x29 + -8) + 0x24);
  fVar15 = *(float *)(*(long *)(unaff_x29 + -8) + 0xcc);
  fVar10 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
  fVar11 = (float)il2cpp_codegen_multiply<float,float>(fVar11,fVar15);
  fVar11 = (float)il2cpp_codegen_multiply<float,float>(fVar11,fVar10);
  uVar12 = il2cpp_codegen_add<float,float>(1.0,fVar11);
  *(undefined4 *)(unaff_x29 + -0x24) = uVar12;
  pfVar1 = (float *)(*(long *)(unaff_x29 + -8) + 0x8c);
  *pfVar1 = *pfVar1 / *(float *)(unaff_x29 + -0x24);
  lVar4 = *(long *)(unaff_x29 + -8) + 0x8c;
  if (*(float *)(*(long *)(unaff_x29 + -8) + 0x90) <= 0.0) {
    *(long *)(unaff_x29 + -0x90) = lVar4;
    *(undefined4 *)(unaff_x29 + -0x94) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x90);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x90);
  }
  else {
    *(long *)(unaff_x29 + -0x88) = lVar4;
    *(float *)(unaff_x29 + -0x94) =
         *(float *)(*(long *)(unaff_x29 + -8) + 0x90) / *(float *)(unaff_x29 + -0x24);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x88);
  }
  *(undefined4 *)(*(long *)(unaff_x29 + -0xa0) + 4) = *(undefined4 *)(unaff_x29 + -0x94);
  pfVar1 = (float *)(*(long *)(unaff_x29 + -8) + 0x94);
  *pfVar1 = *pfVar1 / *(float *)(unaff_x29 + -0x24);
  uVar6 = *(ulong *)(unaff_x29 + -0x20);
  uVar16 = *(undefined4 *)(unaff_x29 + -0x18);
  uVar9 = *(ulong *)(*(long *)(unaff_x29 + -8) + 0x8c);
  uVar12 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94);
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (uVar9 & 0xffffffff,(int)(uVar9 >> 0x20),uVar12,
             *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0xcc));
  uVar9 = in_stack_000000e0[0x7e];
  uVar13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
  Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
            (uVar9 & 0xffffffff,(int)(uVar9 >> 0x20),uVar12,uVar13,0);
  Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
            (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),uVar16,in_stack_000000e0[0x79] & 0xffffffff,
             (int)(in_stack_000000e0[0x79] >> 0x20),uVar12,0);
  *(ulong *)(unaff_x29 + -0x20) = in_stack_000000e0[0x74];
  *(undefined4 *)(unaff_x29 + -0x18) = uVar16;
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
  NullCheck(pvVar5);
  bVar2 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(pvVar5,0);
  if (((bVar2 & 1) == 0) || (0.0 < *(float *)(*(long *)(unaff_x29 + -8) + 0x98))) {
    fVar11 = *(float *)(*(long *)(unaff_x29 + -8) + 0x98);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000100);
    Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D();
    uVar6 = in_stack_000000e0[0x66];
    fVar15 = *(float *)(*(long *)(unaff_x29 + -8) + 0x44);
    fVar10 = *(float *)(*(long *)(unaff_x29 + -8) + 0xcc);
    fVar14 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
    fVar15 = (float)il2cpp_codegen_multiply<float,float>(fVar15,0.002);
    fVar15 = (float)il2cpp_codegen_multiply<float,float>((float)(uVar6 >> 0x20),fVar15);
    fVar15 = (float)il2cpp_codegen_multiply<float,float>(fVar15,fVar10);
    fVar15 = (float)il2cpp_codegen_multiply<float,float>(fVar15,fVar14);
    uVar12 = il2cpp_codegen_add<float,float>(fVar11,fVar15);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x98) = uVar12;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000100);
    Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(0);
    uVar6 = in_stack_000000e0[0x6b];
    fVar11 = (float)il2cpp_codegen_multiply<float,float>
                              (*(float *)(*(long *)(unaff_x29 + -8) + 0x44),0.002);
    uVar12 = il2cpp_codegen_multiply<float,float>((float)(uVar6 >> 0x20),fVar11);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x98) = uVar12;
  }
  fVar11 = *(float *)(unaff_x29 + -0x1c);
  fVar15 = *(float *)(*(long *)(unaff_x29 + -8) + 0x98);
  fVar10 = *(float *)(*(long *)(unaff_x29 + -8) + 0xcc);
  fVar14 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865();
  fStack0000000000000034 = fVar11;
  fVar11 = (float)il2cpp_codegen_multiply<float,float>(fVar15,fVar10);
  fVar11 = (float)il2cpp_codegen_multiply<float,float>(fVar11,fVar14);
  fVar11 = (float)il2cpp_codegen_add<float,float>(fStack0000000000000034,fVar11);
  *(float *)(unaff_x29 + -0x1c) = fVar11;
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
  NullCheck(pvVar5);
  bVar2 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(pvVar5,0);
  if ((bVar2 & 1) != 0) {
    fVar11 = *(float *)(*(long *)(unaff_x29 + -8) + 0x90);
    pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                               (*(undefined8 *)(unaff_x29 + -8));
    NullCheck(pvVar5);
    Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(pvVar5,0);
    fVar15 = (float)il2cpp_codegen_multiply<float,float>
                              ((float)(in_stack_000000e0[0x57] >> 0x20),0.001);
    if (fVar11 <= fVar15) {
      pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
      NullCheck(pvVar5);
      fVar15 = (float)CharacterController_get_stepOffset_mFE2236D76CBF06B5F5A8E6C0AB2E75E0D97F8621
                                (pvVar5);
      fVar11 = *(float *)(unaff_x29 + -0x18);
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                (&stack0x00000408,(float)*(undefined8 *)(unaff_x29 + -0x20),0.0,fVar11,
                 (MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x80) = 0;
      *(undefined4 *)(unaff_x29 + -0x78) = 0;
      fVar10 = (float)Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline
                                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)
                                 (unaff_x29 + -0x80),(MethodInfo *)0x0);
      uVar12 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                         (fVar15,fVar10,(MethodInfo *)0x0);
      *(undefined4 *)(unaff_x29 + -0x74) = uVar12;
      uVar6 = *(ulong *)(unaff_x29 + -0x20);
      uVar16 = *(undefined4 *)(unaff_x29 + -0x18);
      uVar12 = *(undefined4 *)(unaff_x29 + -0x74);
      Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline((MethodInfo *)0x0);
      uVar13 = (undefined4)(in_stack_000000e0[0x49] >> 0x20);
      Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline
                (uVar12,in_stack_000000e0[0x49] & 0xffffffff,uVar13,fVar11,0);
      Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),uVar16,in_stack_000000e0[0x46] & 0xffffffff
                 ,(int)(in_stack_000000e0[0x46] >> 0x20),uVar13,0);
      *(ulong *)(unaff_x29 + -0x20) = in_stack_000000e0[0x41];
      *(undefined4 *)(unaff_x29 + -0x18) = uVar16;
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -8) + 0x68) != 0) {
    pAVar8 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)
              (*(long *)(unaff_x29 + -8) + 0x68);
    NullCheck(pAVar8);
    Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar8,(MethodInfo *)0x0);
    *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x58) = 0;
  }
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
  NullCheck(pvVar5);
  pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar5);
  NullCheck(pvVar5);
  Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar5,0);
  Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
            (in_stack_000000e0[0x36] & 0xffffffff,(int)(in_stack_000000e0[0x36] >> 0x20),uVar16,
             *(ulong *)(unaff_x29 + -0x20) & 0xffffffff,(int)(*(ulong *)(unaff_x29 + -0x20) >> 0x20)
             ,*(undefined4 *)(unaff_x29 + -0x18),0);
  uVar6 = in_stack_000000e0[0x31];
  fStack0000000000000014 = 1.0;
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            (&stack0x000002e8,1.0,0.0,1.0,(MethodInfo *)0x0);
  Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline
            (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),uVar16,0,0,0,0);
  *(ulong *)(unaff_x29 + -0x30) = in_stack_000000e0[0x28];
  *(undefined4 *)(unaff_x29 + -0x28) = uVar16;
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
  uVar6 = *(ulong *)(unaff_x29 + -0x20);
  uVar12 = *(undefined4 *)(unaff_x29 + -0x18);
  NullCheck(pvVar5);
  CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(uVar6 & 0xffffffff,pvVar5,0);
  pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x78);
  NullCheck(pvVar5);
  pvVar5 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar5,0);
  NullCheck(pvVar5);
  Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar5,0);
  uVar6 = in_stack_000000e0[0x1a];
  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
            (&stack0x00000250,fStack0000000000000014,0.0,fStack0000000000000014,(MethodInfo *)0x0);
  Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline
            (uVar6 & 0xffffffff,(int)(uVar6 >> 0x20),uVar12,0,0,0,0);
  *(ulong *)(unaff_x29 + -0x40) = in_stack_000000e0[0x15];
  *(undefined4 *)(unaff_x29 + -0x38) = uVar12;
  uStack00000000000001ec = (undefined4)(*(ulong *)(unaff_x29 + -0x30) >> 0x20);
  uStack00000000000001dc = (undefined4)(*(ulong *)(unaff_x29 + -0x40) >> 0x20);
  bVar2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline
                    (*(ulong *)(unaff_x29 + -0x30) & 0xffffffff,uStack00000000000001ec,
                     *(undefined4 *)(unaff_x29 + -0x28),*(ulong *)(unaff_x29 + -0x40) & 0xffffffff,
                     uStack00000000000001dc,*(undefined4 *)(unaff_x29 + -0x38),0);
  if ((bVar2 & 1) != 0) {
    uVar9 = *(ulong *)(*(long *)(unaff_x29 + -8) + 0x8c);
    uVar12 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x94);
    uVar16 = *(undefined4 *)(unaff_x29 + -0x38);
    uStack0000000000000174 = (undefined4)(*(ulong *)(unaff_x29 + -0x30) >> 0x20);
    uStack000000000000018c =
         Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                   (*(ulong *)(unaff_x29 + -0x40) & 0xffffffff,*(ulong *)(unaff_x29 + -0x40) >> 0x20
                    ,uVar16,*(ulong *)(unaff_x29 + -0x30) & 0xffffffff,uStack0000000000000174,
                    *(undefined4 *)(unaff_x29 + -0x28));
    uVar6 = *in_stack_000000e0;
    fStack000000000000016c = *(float *)(*(long *)(unaff_x29 + -8) + 0xcc);
    uStack0000000000000194 = uVar16;
    fVar11 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
    uVar17 = il2cpp_codegen_multiply<float,float>(fStack000000000000016c,fVar11);
    uVar13 = (undefined4)(uVar6 >> 0x20);
    uStack000000000000014c =
         Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline
                   (uVar6 & 0xffffffff,uVar6 >> 0x20,uVar16,uVar17,0);
    uVar18 = (undefined4)(uVar9 >> 0x20);
    uStack0000000000000154 = uVar16;
    uVar16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                       (uVar9 & 0xffffffff,uVar9 >> 0x20,uVar12,uStack000000000000014c,uVar13,uVar16
                        ,0);
    lVar4 = *(long *)(unaff_x29 + -8);
    *(ulong *)(lVar4 + 0x8c) = CONCAT44(uVar18,uVar16);
    *(undefined4 *)(lVar4 + 0x94) = uVar12;
  }
  return;
}


