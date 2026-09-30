/*
FUNCTION_NAME: OVRSceneAnchor_TryUpdateTransform_mB0E7AD7E5E3671E714BB63AEB39E7DAA88C1960C
ENTRY_POINT: 02de76a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRSceneAnchor_TryUpdateTransform_mB0E7AD7E5E3671E714BB63AEB39E7DAA88C1960C
          (OVRSceneAnchor_tAF36EEA6E22DCD47BA537E85CAC57424A1B51F69 *param_1,byte param_2,
          undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_3ec;
  undefined8 local_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined8 uStack_35c;
  ulong local_34c;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 uStack_28c;
  undefined4 local_280;
  undefined4 uStack_27c;
  ulong local_270;
  undefined4 uStack_268;
  ulong local_24c;
  undefined4 uStack_244;
  Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_19c;
  undefined4 local_198;
  Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  byte local_119;
  undefined8 local_118;
  byte local_109;
  undefined8 local_108;
  byte local_fd;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  byte local_d1;
  Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *local_d0;
  byte local_c4;
  byte local_c3;
  byte local_c2;
  byte local_c1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  byte local_31;
  OVRSceneAnchor_tAF36EEA6E22DCD47BA537E85CAC57424A1B51F69 *local_30;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_3B3045573362001FA1CDA1F381A331DB2A88DD59FDD9C497404D59995AA377EA
  ;
  puVar2 = 
  Field_<PrivateImplementationDetails>_E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_31 = param_2 & 1;
  local_40 = param_3;
  local_30 = param_1;
  if ((OVRSceneAnchor_TryUpdateTransform_mB0E7AD7E5E3671E714BB63AEB39E7DAA88C1960C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_3EB9B3AB77D567D5CEBF38C4C91CDF79845F0691D47A516CE6981BF091025179
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRSceneAnchor_TryUpdateTransform_mB0E7AD7E5E3671E714BB63AEB39E7DAA88C1960C::
    s_Il2CppMethodInitialized = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  local_90 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_a0._4_4_ = 0;
  uStack_98 = 0;
  local_c0 = OVRSceneAnchor_get_Space_m000A21D5D3A05728D5EB20D1D771CF261D0CC294_inline
                       (local_30,(MethodInfo *)0x0);
  uVar6 = uStack_a0;
  local_b8 = local_c0;
  uVar9 = uStack_a0._4_4_;
  uStack_a0 = uVar6;
  local_68 = local_c0;
  uVar6 = uStack_a0;
  uStack_a0._4_4_ = uVar9;
  local_c1 = OVRSpace_get_Valid_mA47E7036A5B157D36F5133E4F96E6EB849779D92(&local_68,0);
  uVar6 = uStack_a0;
  local_c1 = local_c1 & 1;
  if (local_c1 == 0) {
    return 0;
  }
  uVar9 = uStack_a0._4_4_;
  uStack_a0 = uVar6;
  uVar6 = uStack_a0;
  uStack_a0._4_4_ = uVar9;
  local_c2 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(local_30,0);
  uVar6 = uStack_a0;
  local_c2 = local_c2 & 1;
  if (local_c2 == 0) {
    return 0;
  }
  local_c3 = (byte)local_30[0x74] & 1;
  if (local_c3 == 0) {
    return 0;
  }
  local_c4 = local_31 & 1;
  if (local_c4 != 0) {
    local_d0 = (Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *)(local_30 + 0x54);
    uVar9 = uStack_a0._4_4_;
    uStack_a0 = uVar6;
    uVar6 = uStack_a0;
    uStack_a0._4_4_ = uVar9;
    local_d1 = Nullable_1_get_HasValue_m3FDD39924AAD1702186F23403EEE98BD2E37D3FD_inline
                         (local_d0,*(MethodInfo **)
                                    Field_<PrivateImplementationDetails>_499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6
                         );
    uVar6 = uStack_a0;
    local_d1 = local_d1 & 1;
    if (local_d1 != 0) goto LAB_02de79b0;
  }
  uStack_a0 = uVar6;
  uVar9 = uStack_a0._4_4_;
  uVar6 = uStack_a0;
  uStack_a0._4_4_ = uVar9;
  local_f8 = OVRSceneAnchor_get_Space_m000A21D5D3A05728D5EB20D1D771CF261D0CC294_inline
                       (local_30,(MethodInfo *)0x0);
  uVar6 = uStack_a0;
  local_e8 = local_f8;
  local_e0 = local_f8;
  uVar9 = uStack_a0._4_4_;
  uStack_a0 = uVar6;
  uVar6 = uStack_a0;
  uStack_a0._4_4_ = uVar9;
  local_f0 = OVRSpace_op_Implicit_m1F9D1045BC491FB6F551F3F2317DC526B2574AE0(local_f8,0);
  uVar6 = uStack_a0;
  uVar9 = uStack_a0._4_4_;
  uStack_a0 = uVar6;
  uVar6 = uStack_a0;
  uStack_a0._4_4_ = uVar9;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar6 = uStack_a0;
  uVar9 = uStack_a0._4_4_;
  uStack_a0 = uVar6;
  uVar6 = uStack_a0;
  uStack_a0._4_4_ = uVar9;
  local_fc = OVRPlugin_GetTrackingOriginType_m2EDAA913509E615DD626803932B8CE16955F961A(0);
  uVar6 = uStack_a0;
  uVar9 = uStack_a0._4_4_;
  uStack_a0 = uVar6;
  uVar6 = uStack_a0;
  uStack_a0._4_4_ = uVar9;
  local_fd = OVRPlugin_TryLocateSpace_mF4A284C9A4A5030B892C531DE522A2C43C2CE7F0
                       (local_f0,local_fc,&local_88,&local_90,0);
  uVar6 = uStack_a0;
  local_fd = local_fd & 1;
  if (local_fd != 0) {
    local_108 = local_90;
    uVar9 = uStack_a0._4_4_;
    uStack_a0 = uVar6;
    uVar6 = uStack_a0;
    uStack_a0._4_4_ = uVar9;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar6 = uStack_a0;
    uVar9 = uStack_a0._4_4_;
    uStack_a0 = uVar6;
    uVar6 = uStack_a0;
    uStack_a0._4_4_ = uVar9;
    local_109 = OVRPlugin_IsOrientationValid_m479567D685BE13AED00F3E1D3C91AB1FF5472B2F(local_108,0);
    uVar6 = uStack_a0;
    local_109 = local_109 & 1;
    if (local_109 != 0) {
      local_118 = local_90;
      uVar9 = uStack_a0._4_4_;
      uStack_a0 = uVar6;
      uVar6 = uStack_a0;
      uStack_a0._4_4_ = uVar9;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uVar6 = uStack_a0;
      uVar9 = uStack_a0._4_4_;
      uStack_a0 = uVar6;
      uVar6 = uStack_a0;
      uStack_a0._4_4_ = uVar9;
      local_119 = OVRPlugin_IsPositionValid_m7062193DF7904591CA965CCE564590FCB02261D2(local_118,0);
      uVar6 = uStack_a0;
      local_119 = local_119 & 1;
      if (local_119 != 0) {
        uStack_138 = uStack_80;
        local_140 = local_88;
        uStack_16c = CONCAT44(local_70,uStack_74);
        uStack_134 = uStack_7c;
        uStack_130 = local_78;
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        local_150 = 0;
        uStack_178 = uStack_80;
        local_180 = local_88;
        uStack_174 = uStack_7c;
        uStack_170 = local_78;
        uStack_12c = uStack_16c;
        uVar9 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar9;
        Nullable_1__ctor_m875B99C4E1E1356E865F69EEAD351A7096B51B66
                  (&local_160,&local_180,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_3EB9B3AB77D567D5CEBF38C4C91CDF79845F0691D47A516CE6981BF091025179
                  );
        uVar6 = uStack_a0;
        *(undefined8 *)(local_30 + 0x5c) = uStack_158;
        *(undefined8 *)(local_30 + 0x54) = local_160;
        *(undefined8 *)(local_30 + 0x6c) = uStack_148;
        *(undefined8 *)(local_30 + 100) = local_150;
LAB_02de79b0:
        uStack_a0 = uVar6;
        uVar9 = uStack_a0._4_4_;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar9;
        il2cpp_codegen_initobj(&local_b0,0x1c);
        uVar6 = uStack_a0;
        local_188 = (Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *)(local_30 + 0x54);
        uVar9 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar9;
        Nullable_1_get_Value_mFDAF1EB4EEFD3E1F4FCACFA87633BA27A91EBE2D
                  (local_188,*(MethodInfo **)puVar3);
        uVar6 = uStack_a0;
        uStack_19c = (undefined4)uStack_1b8;
        local_198 = (undefined4)((ulong)uStack_1b8 >> 0x20);
        local_200 = CONCAT44(uStack_19c,uStack_1bc);
        local_1d0 = local_198;
        local_1f8 = local_198;
        uVar9 = uStack_19c;
        uVar10 = local_198;
        local_1d8 = local_200;
        uVar5 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar5;
        local_1f4 = OVRExtensions_FromFlippedZVector3f_m32D17BCDA62BC3F8C9A6442F06A42BBE79140F62
                              (uStack_1bc);
        uVar6 = uStack_a0;
        local_1e8 = CONCAT44(uVar9,local_1f4);
        local_208 = (Nullable_1_tF777B8F9BFC1B0AD50988B574B3C1F68D58CDEE5 *)(local_30 + 0x54);
        uStack_1f0 = uVar9;
        local_1ec = uVar10;
        local_1e0 = uVar10;
        local_b0 = local_1e8;
        uVar9 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uStack_a8 = uVar10;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar9;
        Nullable_1_get_Value_mFDAF1EB4EEFD3E1F4FCACFA87633BA27A91EBE2D
                  (local_208,*(MethodInfo **)puVar3);
        uVar6 = uStack_a0;
        uStack_28c = (undefined4)(local_24c >> 0x20);
        uVar9 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar9;
        local_280 = OVRExtensions_FromFlippedZQuatf_mF626F183B84EA8C08153550313227736286F2657
                              (local_24c & 0xffffffff,0);
        uVar6 = uStack_a0;
        local_270 = CONCAT44(uStack_28c,local_280);
        uStack_27c = uStack_28c;
        uVar9 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar9;
        uStack_268 = uStack_244;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        uVar6 = uStack_a0;
        uVar9 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar9;
        puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
        uVar6 = uStack_a0;
        uStack_2d8 = puVar7[1];
        local_2e0 = *puVar7;
        local_2d0 = local_270;
        uVar4 = local_2d0;
        local_2d0._4_4_ = (undefined4)(local_270 >> 0x20);
        uVar9 = local_2d0._4_4_;
        local_2d0 = uVar4;
        local_2a0 = local_2e0;
        uStack_298 = uStack_2d8;
        uVar10 = uStack_a0._4_4_;
        uStack_a0 = uVar6;
        uVar6 = uStack_a0;
        uStack_a0._4_4_ = uVar10;
        uStack_2f4 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                               (local_270 & 0xffffffff,0);
        local_2b0 = CONCAT44(uVar9,uStack_2f4);
        uStack_2f8 = uStack_a8;
        local_300 = local_b0;
        uStack_2ec = CONCAT44(uStack_98,uStack_268);
        uStack_2f0 = uVar9;
        local_2c0 = uStack_2f4;
        uStack_2bc = uVar9;
        local_308 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(0);
        uStack_368 = uStack_2f8;
        local_370 = local_300;
        uStack_35c = uStack_2ec;
        uStack_364 = uStack_2f4;
        uStack_360 = uStack_2f0;
        OVRExtensions_ToWorldSpacePose_mB00CD2AC97FB573C5FA5E4093A1F7441244CA097
                  (&local_370,local_308,0);
        local_60 = local_34c;
        uStack_324 = uStack_340;
        uStack_320 = uStack_33c;
        uStack_58 = uStack_344;
        uStack_4c = (undefined4)uStack_338;
        local_48 = (undefined4)((ulong)uStack_338 >> 0x20);
        uStack_54 = uStack_324;
        local_50 = uStack_320;
        pvVar8 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                                   (local_30,0);
        uVar10 = local_48;
        uVar9 = uStack_4c;
        NullCheck(pvVar8);
        uStack_3ec = (undefined4)(local_60 >> 0x20);
        Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A
                  (local_60 & 0xffffffff,uStack_3ec,uStack_58,uStack_54,local_50,uVar9,uVar10,pvVar8
                   ,0);
        return 1;
      }
    }
  }
  return 0;
}


