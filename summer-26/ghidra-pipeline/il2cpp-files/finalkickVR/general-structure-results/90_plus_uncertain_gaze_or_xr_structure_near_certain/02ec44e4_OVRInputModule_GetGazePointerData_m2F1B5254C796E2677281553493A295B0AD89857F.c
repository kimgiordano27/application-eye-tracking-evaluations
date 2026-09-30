/*
FUNCTION_NAME: OVRInputModule_GetGazePointerData_m2F1B5254C796E2677281553493A295B0AD89857F
ENTRY_POINT: 02ec44e4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_6;ray_or_cast_sink_hits_9;ui_or_gameplay_sink_hits_16;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
OVRInputModule_GetGazePointerData_m2F1B5254C796E2677281553493A295B0AD89857F
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
          BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1 *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *pPVar6;
  byte bVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 local_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_98c;
  undefined1 auStack_970 [80];
  undefined8 local_920;
  undefined4 local_918;
  undefined4 local_914;
  undefined4 uStack_910;
  undefined4 local_90c;
  ulong local_908;
  undefined4 local_900;
  void *local_8f8;
  void *local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined4 local_8d8;
  undefined4 local_8d0;
  undefined4 uStack_8cc;
  ulong local_8c8;
  ulong local_8c0;
  undefined4 local_8b8;
  undefined1 auStack_8b0 [44];
  ulong local_884;
  undefined4 local_87c;
  void *local_860;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_858;
  undefined4 local_848;
  undefined1 auStack_840 [80];
  undefined1 auStack_7f0 [44];
  undefined8 local_7c4;
  undefined4 local_7bc;
  List_1_t8292C421BBB00D7661DC07462822936152BAB446 *local_7a0;
  float local_794;
  undefined1 auStack_790 [16];
  float local_780;
  float local_73c;
  undefined1 auStack_738 [80];
  undefined1 auStack_6e8 [16];
  float local_6d8;
  List_1_t8292C421BBB00D7661DC07462822936152BAB446 *local_698;
  int local_68c;
  List_1_t8292C421BBB00D7661DC07462822936152BAB446 *local_688;
  undefined4 local_67c;
  List_1_t8292C421BBB00D7661DC07462822936152BAB446 *local_678;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_670;
  void *local_668;
  List_1_t8292C421BBB00D7661DC07462822936152BAB446 *local_660;
  byte local_651;
  undefined4 local_648;
  undefined1 auStack_640 [44];
  undefined8 local_614;
  undefined4 local_60c;
  byte local_5e9;
  void *local_5e8;
  Il2CppObject *local_5e0;
  undefined1 auStack_5d8 [8];
  Il2CppObject *local_5d0;
  undefined8 local_588;
  undefined4 local_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 uStack_538;
  undefined4 local_534;
  ulong local_530;
  undefined4 local_528;
  void *local_520;
  void *local_518;
  undefined4 local_50c;
  undefined4 uStack_508;
  undefined4 local_504;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e0;
  undefined1 auStack_4d8 [44];
  undefined8 local_4ac;
  undefined4 local_4a4;
  byte local_481;
  undefined8 local_480;
  undefined8 local_478;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *local_470;
  undefined8 local_468;
  undefined1 auStack_460 [80];
  undefined4 local_410;
  undefined4 uStack_40c;
  ulong local_408;
  undefined1 auStack_400 [80];
  void *local_3b0;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_3a8;
  byte local_399;
  void *local_398;
  Il2CppObject *local_390;
  undefined1 auStack_388 [8];
  Il2CppObject *local_380;
  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 *local_338;
  Il2CppObject *local_330;
  List_1_t8292C421BBB00D7661DC07462822936152BAB446 *local_328;
  undefined1 auStack_320 [80];
  undefined1 auStack_2d0 [80];
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_280;
  undefined1 auStack_278 [80];
  undefined1 auStack_228 [80];
  undefined8 local_1d8;
  undefined8 local_1d0;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_1c8;
  void *local_1c0;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_1b8;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  ulong local_198;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  void *local_130;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  ulong local_118;
  undefined4 local_110;
  void *local_108;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_100;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_f8;
  byte local_e9;
  List_1_t8292C421BBB00D7661DC07462822936152BAB446 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_a8;
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_a0;
  void *local_98;
  void *local_90;
  undefined1 auStack_88 [80];
  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *local_38;
  undefined8 local_30;
  BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1 *local_28;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_s8__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_30 = param_5;
  local_28 = param_4;
  if ((OVRInputModule_GetGazePointerData_m2F1B5254C796E2677281553493A295B0AD89857F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_598);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_u32__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_high_n_u16__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<GlyphRect>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_high_n_u64__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_1514);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_774);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRInputModule_GetGazePointerData_m2F1B5254C796E2677281553493A295B0AD89857F::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *)0x0;
  memset(auStack_88,0,0x50);
  local_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_a0 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *)0x0;
  local_a8 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB *)0x0;
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_e8 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446 *)0x0;
  local_e9 = OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0
                       (local_28,0xffffffff,&local_38,1,0);
  local_e9 = local_e9 & 1;
  local_f8 = local_38;
  NullCheck(local_38);
  VirtualActionInvoker0::Invoke(4,(Il2CppObject *)local_f8);
  local_100 = local_38;
  local_108 = *(void **)(local_28 + 0x68);
  NullCheck(local_108);
  local_124 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_108,0);
  local_118 = CONCAT44(param_2,local_124);
  local_130 = *(void **)(local_28 + 0x68);
  uStack_120 = param_2;
  local_11c = param_3;
  local_110 = param_3;
  NullCheck(local_130);
  local_14c = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(local_130,0);
  local_188 = CONCAT44(param_2,local_14c);
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_178 = local_118;
  uVar3 = local_178;
  local_170 = local_110;
  local_178._4_4_ = (undefined4)(local_118 >> 0x20);
  uVar8 = local_178._4_4_;
  uVar10 = local_110;
  local_180 = param_3;
  local_178 = uVar3;
  uStack_148 = param_2;
  local_144 = param_3;
  local_140 = local_188;
  local_138 = param_3;
  Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C_inline
            (local_118 & 0xffffffff,uVar8,local_110,local_14c,param_2,param_3,&local_168,0);
  NullCheck(local_100);
  *(undefined8 *)(local_100 + 0x188) = uStack_160;
  *(undefined8 *)(local_100 + 0x180) = local_168;
  *(undefined8 *)(local_100 + 400) = local_158;
  local_190 = local_38;
  local_1a0 = OVRInputModule_GetExtraScrollDelta_mE441287D8A96D1E47BF5B28F8E61CF9CEA888AC5
                        (local_28,0);
  local_198 = CONCAT44(uVar8,local_1a0);
  uStack_19c = uVar8;
  NullCheck(local_190);
  local_1a8 = local_198;
  uVar3 = local_1a8;
  local_1a8._4_4_ = (undefined4)(local_198 >> 0x20);
  uVar8 = local_1a8._4_4_;
  local_1a8 = uVar3;
  PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline
            (local_198 & 0xffffffff,local_190,0);
  local_1b0 = local_38;
  NullCheck(local_38);
  PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline
            (local_1b0,0,(MethodInfo *)0x0);
  local_1b8 = local_38;
  NullCheck(local_38);
  PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline
            (local_1b8,true,(MethodInfo *)0x0);
  local_1c0 = (void *)BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline
                                (local_28,(MethodInfo *)0x0);
  local_1c8 = local_38;
  local_1d0 = *(undefined8 *)(local_28 + 0x20);
  NullCheck(local_1c0);
  EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(local_1c0,local_1c8,local_1d0,0);
  local_1d8 = *(undefined8 *)(local_28 + 0x20);
  BaseInputModule_FindFirstRaycast_mE07BDA14A7C9A8E3DFBFDAF449E5896597C9F6F5(local_1d8,0);
  memcpy(auStack_228,auStack_278,0x50);
  memcpy(auStack_88,auStack_228,0x50);
  local_280 = local_38;
  memcpy(auStack_2d0,auStack_88,0x50);
  NullCheck(local_280);
  pPVar6 = local_280;
  memcpy(auStack_320,auStack_2d0,0x50);
  PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline
            (pPVar6,auStack_320,0);
  local_328 = *(List_1_t8292C421BBB00D7661DC07462822936152BAB446 **)(local_28 + 0x20);
  NullCheck(local_328);
  List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline
            (local_328,*(MethodInfo **)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlq_u32__);
  local_330 = *(Il2CppObject **)(local_28 + 0x70);
  local_338 = *(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1 **)(local_28 + 0x68);
  NullCheck(local_330);
  VirtualActionInvoker1<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*>::Invoke
            (4,local_330,local_338);
  memcpy(auStack_388,auStack_88,0x50);
  local_390 = local_380;
  local_398 = (void *)IsInstClass(local_380,*(Il2CppClass **)StringLiteral_774);
  local_90 = local_398;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_398,0);
  local_399 = bVar7 & 1;
  if ((bVar7 & 1) != 0) {
    local_3a8 = local_38;
    local_3b0 = local_90;
    memcpy(auStack_400,auStack_88,0x50);
    NullCheck(local_3b0);
    pvVar9 = local_3b0;
    memcpy(auStack_460,auStack_400,0x50);
    local_410 = OVRRaycaster_GetScreenPosition_mE54FD696C615E1CFF7E7AE19F0F9B95AB084617A
                          (pvVar9,auStack_460);
    local_408 = CONCAT44(uVar8,local_410);
    uStack_40c = uVar8;
    NullCheck(local_3a8);
    local_468 = local_408;
    uVar3 = local_468;
    local_468._4_4_ = (undefined4)(local_408 >> 0x20);
    uVar8 = local_468._4_4_;
    local_468 = uVar3;
    PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline
              (local_408 & 0xffffffff,local_3a8,0);
    local_470 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline
                          (auStack_88,(MethodInfo *)0x0);
    NullCheck(local_470);
    local_480 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4
                          (local_470,*(MethodInfo **)StringLiteral_598);
    local_478 = local_480;
    local_b0 = local_480;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_481 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_480,0);
    local_481 = local_481 & 1;
    if (local_481 != 0) {
      memcpy(auStack_4d8,auStack_88,0x50);
      local_c0 = local_4ac;
      local_4e0 = local_4a4;
      local_b8 = local_4a4;
      local_4f0 = local_b0;
      local_50c = OVRInputModule_GetRectTransformNormal_mF03B37932F37A309381C3EBF51CAA0FE7C1BF348
                            (local_b0);
      local_500 = CONCAT44(uVar8,local_50c);
      local_518 = *(void **)(local_28 + 0x70);
      local_520 = *(void **)(local_28 + 0x68);
      uStack_508 = uVar8;
      local_504 = uVar10;
      local_4f8 = uVar10;
      local_d0 = local_500;
      local_c8 = uVar10;
      NullCheck(local_520);
      local_53c = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_520,0);
      local_530 = CONCAT44(uVar8,local_53c);
      local_548 = local_c0;
      local_540 = local_b8;
      local_558 = local_d0;
      local_550 = local_c8;
      uStack_538 = uVar8;
      local_534 = uVar10;
      local_528 = uVar10;
      NullCheck(local_518);
      local_568 = local_530;
      uVar3 = local_568;
      local_560 = local_528;
      local_578 = local_548;
      uVar4 = local_578;
      local_570 = local_540;
      local_588 = local_558;
      local_580 = local_550;
      local_568._4_4_ = (undefined4)(local_530 >> 0x20);
      uVar5 = local_568._4_4_;
      local_578._0_4_ = (undefined4)local_548;
      uVar8 = (undefined4)local_578;
      local_578._4_4_ = (undefined4)((ulong)local_548 >> 0x20);
      uVar10 = local_578._4_4_;
      local_578 = uVar4;
      local_568 = uVar3;
      VirtualActionInvoker3<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>
      ::Invoke(local_530 & 0xffffffff,uVar5,local_528,uVar8,uVar10,local_540,5,local_518);
    }
  }
  memcpy(auStack_5d8,auStack_88,0x50);
  local_5e0 = local_5d0;
  local_5e8 = (void *)IsInstClass(local_5d0,*(Il2CppClass **)StringLiteral_1514);
  local_98 = local_5e8;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_5e9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(local_5e8,0);
  local_5e9 = local_5e9 & 1;
  if (local_5e9 != 0) {
    memcpy(auStack_640,auStack_88,0x50);
    local_e0 = local_614;
    local_648 = local_60c;
    local_d8 = local_60c;
    local_651 = (byte)local_28[0x80] & 1;
    if (local_651 != 0) {
      local_660 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446 *)
                  il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_high_n_u64__);
      List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B
                (local_660,
                 *(MethodInfo **)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_high_n_u16__);
      local_e8 = local_660;
      local_668 = local_98;
      local_670 = local_38;
      local_678 = local_660;
      local_67c = *(undefined4 *)(local_28 + 0xa4);
      NullCheck(local_98);
      OVRPhysicsRaycaster_Spherecast_m5C0B2A941C9D1F9C92A2AD1026510DC5D64E9945
                (local_67c,local_668,local_670,local_678,0);
      local_688 = local_e8;
      NullCheck(local_e8);
      local_68c = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline
                            (local_688,
                             *(MethodInfo **)
                              Method_System_Collections_Generic_List<GlyphRect>_get_Item__);
      if (0 < local_68c) {
        local_698 = local_e8;
        NullCheck(local_e8);
        List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA
                  (local_698,0,*(MethodInfo **)puVar2);
        memcpy(auStack_6e8,auStack_738,0x50);
        local_73c = local_6d8;
        memcpy(auStack_790,auStack_88,0x50);
        local_794 = local_780;
        if (local_73c < local_780) {
          local_7a0 = local_e8;
          NullCheck(local_e8);
          List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA
                    (local_7a0,0,*(MethodInfo **)puVar2);
          memcpy(auStack_7f0,auStack_840,0x50);
          local_e0 = local_7c4;
          local_848 = local_7bc;
          local_d8 = local_7bc;
        }
      }
    }
    local_858 = local_38;
    local_860 = local_98;
    memcpy(auStack_8b0,auStack_88,0x50);
    local_8c0 = local_884;
    local_8b8 = local_87c;
    NullCheck(local_860);
    local_8e0 = local_8c0;
    uVar3 = local_8e0;
    local_8d8 = local_8b8;
    local_8e0._4_4_ = (undefined4)(local_8c0 >> 0x20);
    uVar8 = local_8e0._4_4_;
    uVar10 = local_8b8;
    local_8e0 = uVar3;
    local_8d0 = OVRPhysicsRaycaster_GetScreenPos_mAD6CC9D4FC2F01C2CBFA281660E8BC7B3C3C0A84
                          (local_8c0 & 0xffffffff,local_860);
    local_8c8 = CONCAT44(uVar8,local_8d0);
    uStack_8cc = uVar8;
    NullCheck(local_858);
    local_8e8 = local_8c8;
    uVar3 = local_8e8;
    local_8e8._4_4_ = (undefined4)(local_8c8 >> 0x20);
    uVar8 = local_8e8._4_4_;
    local_8e8 = uVar3;
    PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline
              (local_8c8 & 0xffffffff,local_858,0);
    local_8f0 = *(void **)(local_28 + 0x70);
    local_8f8 = *(void **)(local_28 + 0x68);
    NullCheck(local_8f8);
    local_914 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_8f8,0);
    local_908 = CONCAT44(uVar8,local_914);
    local_920 = local_e0;
    local_918 = local_d8;
    uStack_910 = uVar8;
    local_90c = uVar10;
    local_900 = uVar10;
    memcpy(auStack_970,auStack_88,0x50);
    NullCheck(local_8f0);
    uStack_98c = (undefined4)(local_908 >> 0x20);
    local_9a0 = (undefined4)local_920;
    uStack_99c = (undefined4)((ulong)local_920 >> 0x20);
    VirtualActionInvoker3<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2>
    ::Invoke(local_908 & 0xffffffff,uStack_98c,local_900,local_9a0,uStack_99c,local_918,5,local_8f0)
    ;
  }
  OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0
            (local_28,0xfffffffe,&local_a0,1);
  OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691(local_28,local_38,local_a0,0);
  pPVar6 = local_a0;
  NullCheck(local_a0);
  PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline
            (pPVar6,1,(MethodInfo *)0x0);
  OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0
            (local_28,0xfffffffd,&local_a8,1,0);
  OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691(local_28,local_38,local_a8,0);
  pPVar6 = local_a8;
  NullCheck(local_a8);
  PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline
            (pPVar6,2,(MethodInfo *)0x0);
  pvVar9 = *(void **)(local_28 + 0xf0);
  uVar8 = VirtualFuncInvoker0<int>::Invoke(0x20,(Il2CppObject *)local_28);
  pPVar6 = local_38;
  NullCheck(pvVar9);
  MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(pvVar9,0,uVar8,pPVar6,0);
  pPVar6 = local_a0;
  pvVar9 = *(void **)(local_28 + 0xf0);
  NullCheck(pvVar9);
  MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(pvVar9,1,3,pPVar6,0);
  pPVar6 = local_a8;
  pvVar9 = *(void **)(local_28 + 0xf0);
  NullCheck(pvVar9);
  MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(pvVar9,2,3,pPVar6,0);
  return *(undefined8 *)(local_28 + 0xf0);
}


