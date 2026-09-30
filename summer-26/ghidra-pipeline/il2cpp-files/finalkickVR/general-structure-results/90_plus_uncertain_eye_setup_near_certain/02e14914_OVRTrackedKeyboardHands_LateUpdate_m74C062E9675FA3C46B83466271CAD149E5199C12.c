/*
FUNCTION_NAME: OVRTrackedKeyboardHands_LateUpdate_m74C062E9675FA3C46B83466271CAD149E5199C12
ENTRY_POINT: 02e14914
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_9;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRTrackedKeyboardHands_LateUpdate_m74C062E9675FA3C46B83466271CAD149E5199C12
               (undefined1 param_1 [16],undefined4 param_2,ulong param_3,undefined4 param_4,
               OVRTrackedKeyboardHands_t3F0BBAE684AB5CEE2641222D52694D721A0B5F5F *param_5,
               undefined8 param_6)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte bVar7;
  undefined4 *puVar8;
  long lVar9;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOVar10;
  void *pvVar11;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *pOVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_d24;
  undefined6 uStack_cbe;
  undefined2 local_cb2;
  OVRTrackedKeyboardHands_t3F0BBAE684AB5CEE2641222D52694D721A0B5F5F local_cb0;
  ushort local_cae;
  byte local_cab;
  byte local_caa;
  byte local_ca9;
  undefined8 local_ca8;
  undefined2 local_c9c;
  undefined2 local_c9a;
  Nullable_1_tB829588FFD841315A6E2973AB0DFF66280FEB564 *local_c98;
  byte local_c8a;
  byte local_c89;
  undefined8 local_c88;
  undefined2 local_c7c;
  undefined2 local_c7a;
  Nullable_1_tB829588FFD841315A6E2973AB0DFF66280FEB564 *local_c78;
  byte local_c6a;
  byte local_c69;
  Nullable_1_tB829588FFD841315A6E2973AB0DFF66280FEB564 *local_c68;
  undefined4 local_c60;
  undefined4 uStack_c5c;
  undefined4 uStack_c58;
  undefined4 uStack_c54;
  undefined8 local_c50;
  undefined8 uStack_c48;
  float local_c3c;
  undefined8 local_c38;
  float local_c30;
  undefined1 auStack_c28 [40];
  undefined1 auStack_c00 [16];
  undefined8 local_bf0;
  float local_be8;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_bd8;
  float local_bcc;
  undefined8 local_bc8;
  undefined4 local_bc0;
  undefined1 auStack_bb8 [40];
  undefined1 auStack_b90 [16];
  undefined8 local_b80;
  undefined4 local_b78;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_b68;
  undefined4 local_b5c;
  void *local_b58;
  undefined8 local_b40;
  undefined4 local_b38;
  undefined4 local_b30;
  undefined4 uStack_b2c;
  undefined4 local_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined4 local_b0c;
  ulong local_b00;
  undefined4 local_af0;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined4 local_acc;
  ulong local_ac0;
  byte local_aad;
  undefined4 local_aac;
  void *local_aa8;
  undefined8 local_a90;
  undefined4 local_a88;
  undefined4 local_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a74;
  undefined4 local_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined8 local_a60;
  undefined4 local_a58;
  undefined8 local_a50;
  undefined4 local_a44;
  undefined4 uStack_a40;
  ulong local_a38;
  undefined8 local_a28;
  undefined4 local_a20;
  undefined4 local_a1c;
  undefined4 uStack_a18;
  undefined8 local_a10;
  undefined4 local_a04;
  undefined4 uStack_a00;
  ulong local_9f8;
  byte local_9e5;
  undefined4 local_9e4;
  void *local_9e0;
  undefined4 local_9d4;
  undefined4 uStack_9d0;
  undefined8 local_9c8;
  undefined8 local_9b8;
  undefined4 local_9ac;
  undefined4 uStack_9a8;
  undefined8 local_9a0;
  undefined4 local_994;
  undefined4 uStack_990;
  undefined8 local_988;
  void *local_978;
  void *local_970;
  byte local_961;
  undefined8 local_960;
  void *local_958;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined4 local_928;
  undefined4 local_920;
  undefined4 uStack_91c;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined4 local_8f0;
  void *local_8e8;
  void *local_8e0;
  void *local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined4 local_8ac;
  undefined8 local_8a0;
  undefined8 local_890;
  undefined8 uStack_888;
  void *local_878;
  void *local_870;
  void *local_868;
  byte local_859;
  void *local_858;
  void *local_850;
  byte local_841;
  void *local_840;
  void *local_838;
  void *local_830;
  void *local_828;
  void *local_820;
  void *local_818;
  int local_80c;
  OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF *local_808;
  byte local_7fb;
  byte local_7fa;
  byte local_7f9;
  undefined4 local_7f8;
  byte local_7f1;
  undefined4 local_7f0;
  byte local_7ea;
  byte local_7e9;
  void *local_7e8;
  byte local_7d9;
  undefined4 local_7d8;
  undefined1 local_7d1;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined8 local_7c8;
  undefined4 local_7bc;
  undefined8 local_7b8;
  undefined4 local_7a0;
  undefined4 uStack_79c;
  undefined4 local_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  void *local_778;
  void *local_770;
  void *local_768;
  undefined8 local_760;
  undefined4 local_758;
  undefined4 local_754;
  ulong local_748;
  undefined4 local_740;
  void *local_738;
  void *local_730;
  void *local_728;
  undefined4 local_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  void *local_6e8;
  void *local_6e0;
  void *local_6d8;
  undefined8 local_6d0;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 uStack_6c0;
  undefined4 local_6bc;
  ulong local_6b8;
  undefined4 local_6b0;
  void *local_6a8;
  void *local_6a0;
  void *local_698;
  void *local_690;
  int local_688;
  int local_684;
  undefined8 local_680;
  uint local_678;
  ulong local_670;
  uint local_668;
  float local_664;
  float local_660;
  float local_65c;
  void *local_658;
  undefined1 auStack_650 [8];
  void *local_648;
  undefined8 local_618;
  undefined4 local_610;
  ulong local_608;
  undefined4 local_600;
  float local_5fc;
  float local_5f8;
  float local_5f4;
  void *local_5f0;
  undefined1 auStack_5e8 [24];
  void *local_5d0;
  float local_5ac;
  OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509 *local_5a8;
  float local_59c;
  OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509 *local_598;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 local_580;
  undefined8 local_570;
  undefined8 uStack_568;
  void *local_560;
  undefined1 auStack_558 [16];
  void *local_548;
  void *local_520;
  undefined1 auStack_518 [24];
  void *local_500;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  void *local_4b0;
  void *local_4a8 [7];
  void *local_470;
  undefined1 auStack_468 [8];
  void *local_460;
  int local_42c;
  undefined1 auStack_428 [32];
  int local_408;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined8 local_3d0;
  ulong uStack_3c8;
  void *local_3c0;
  undefined1 auStack_3b8 [16];
  void *local_3a8;
  void *local_380;
  undefined1 auStack_378 [24];
  void *local_360;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  undefined8 uStack_318;
  void *local_308;
  void *local_300 [7];
  void *local_2c8;
  undefined1 auStack_2c0 [8];
  void *local_2b8;
  undefined1 auStack_288 [56];
  int local_250;
  int local_24c;
  void *local_248;
  void *local_240;
  byte local_231;
  void *local_230;
  undefined4 local_224;
  ulong local_220;
  undefined4 local_218;
  void *local_210;
  undefined4 local_204;
  void *local_200;
  undefined4 local_1f4;
  void *local_1f0;
  undefined4 local_1e4;
  ulong local_1e0;
  undefined4 local_1d8;
  void *local_1d0;
  undefined4 local_1c4;
  void *local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  void *local_180;
  void *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  void *local_158;
  void *local_150;
  void *local_148;
  uint local_13c;
  void *local_138;
  void *local_130;
  undefined8 local_128;
  ulong local_120;
  undefined2 local_112;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float local_cc;
  undefined1 auStack_c8 [60];
  int local_8c;
  void *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_3a;
  byte local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  OVRTrackedKeyboardHands_t3F0BBAE684AB5CEE2641222D52694D721A0B5F5F *local_28;
  
  puVar3 = StringLiteral_270;
  puVar2 = StringLiteral_269;
  local_30 = param_6;
  local_28 = param_5;
  if ((OVRTrackedKeyboardHands_LateUpdate_m74C062E9675FA3C46B83466271CAD149E5199C12::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_271);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpsq_f32__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrhaddq_s16__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpsq_f64__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_272);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrhaddq_s32__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpss_f32__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRTrackedKeyboardHands_LateUpdate_m74C062E9675FA3C46B83466271CAD149E5199C12::
    s_Il2CppMethodInitialized = 1;
  }
  local_34 = 0;
  local_38 = 0;
  local_39 = 0;
  local_3a = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = (void *)0x0;
  local_8c = 0;
  memset(auStack_c8,0,0x38);
  local_cc = 0.0;
  local_d0 = 0.0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_112 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = (void *)0x0;
  local_138 = (void *)0x0;
  local_13c = 0;
  local_148 = (void *)0x0;
  local_150 = (void *)0x0;
  local_158 = (void *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = (void *)0x0;
  local_180 = (void *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1b4 = 0;
  local_1c0 = (void *)0x0;
  local_1c4 = 0;
  local_1d0 = (void *)0x0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1e4 = 0;
  local_1f0 = (void *)0x0;
  local_1f4 = 0;
  local_200 = (void *)0x0;
  local_204 = 0;
  local_210 = (void *)0x0;
  local_220 = 0;
  local_218 = 0;
  local_224 = 0;
  local_230 = (void *)0x0;
  local_231 = OVRTrackedKeyboardHands_get_AreControllersActive_m081204F654939D389784D5D6E9BAD0B646162017
                        (local_28,0);
  local_231 = local_231 & 1;
  if (local_231 != 0) {
    OVRTrackedKeyboardHands_DisableHandObjects_m07ABBE2217C1E12C6153084D6FCCBD39D360617A(local_28,0)
    ;
    return;
  }
  local_240 = *(void **)(local_28 + 0xc0);
  local_8c = 0;
  local_231 = 0;
  local_88 = local_240;
  while( true ) {
    uVar15 = (undefined4)param_3;
    local_688 = local_8c;
    local_690 = local_88;
    NullCheck(local_88);
    if ((int)*(undefined8 *)((long)local_690 + 0x18) <= local_688) break;
    local_248 = local_88;
    local_24c = local_8c;
    NullCheck(local_88);
    local_250 = local_24c;
    HandBoneMappingU5BU5D_t36290D21462BAB5395B83BFE6902A4F7B9FA20F8::GetAt((ulong)local_248);
    memcpy(auStack_c8,auStack_288,0x38);
    memcpy(auStack_2c0,auStack_c8,0x38);
    local_2c8 = local_2b8;
    memcpy(local_300,auStack_c8,0x38);
    local_308 = local_300[0];
    NullCheck(local_300[0]);
    local_330 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(local_308);
    uStack_318 = CONCAT44(param_4,uVar15);
    local_320 = CONCAT44(param_2,local_330);
    uStack_32c = param_2;
    uStack_328 = uVar15;
    uStack_324 = param_4;
    NullCheck(local_2c8);
    uStack_334 = (undefined4)((ulong)uStack_318 >> 0x20);
    uStack_338 = (undefined4)uStack_318;
    uStack_33c = (undefined4)((ulong)local_320 >> 0x20);
    local_340 = (undefined4)local_320;
    uVar15 = uStack_338;
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(local_340,local_2c8,0);
    memcpy(auStack_378,auStack_c8,0x38);
    local_380 = local_360;
    memcpy(auStack_3b8,auStack_c8,0x38);
    local_3c0 = local_3a8;
    NullCheck(local_3a8);
    local_3e0 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(local_3c0,0);
    uStack_3c8 = CONCAT44(uStack_334,uVar15);
    local_3d0 = CONCAT44(uStack_33c,local_3e0);
    NullCheck(local_380);
    uStack_3e4 = (undefined4)(uStack_3c8 >> 0x20);
    uStack_3ec = (undefined4)((ulong)local_3d0 >> 0x20);
    local_3f0 = (undefined4)local_3d0;
    param_3 = uStack_3c8 & 0xffffffff;
    Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(local_3f0,local_380,0);
    memcpy(auStack_428,auStack_c8,0x38);
    uVar15 = (undefined4)param_3;
    local_42c = local_408;
    param_2 = uStack_3ec;
    param_4 = uStack_3e4;
    if (local_408 == 0) {
      memcpy(auStack_468,auStack_c8,0x38);
      local_470 = local_460;
      memcpy(local_4a8,auStack_c8,0x38);
      local_4b0 = local_4a8[0];
      NullCheck(local_4a8[0]);
      local_4d0 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(local_4b0);
      uStack_4b8 = CONCAT44(uStack_3e4,uVar15);
      local_4c0 = CONCAT44(uStack_3ec,local_4d0);
      uStack_4c8 = uVar15;
      NullCheck(local_470);
      uStack_4d4 = (undefined4)((ulong)uStack_4b8 >> 0x20);
      uStack_4d8 = (undefined4)uStack_4b8;
      uStack_4dc = (undefined4)((ulong)local_4c0 >> 0x20);
      local_4e0 = (undefined4)local_4c0;
      uVar15 = uStack_4d8;
      Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(local_4e0,local_470,0);
      memcpy(auStack_518,auStack_c8,0x38);
      local_520 = local_500;
      memcpy(auStack_558,auStack_c8,0x38);
      local_560 = local_548;
      NullCheck(local_548);
      local_580 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(local_560,0);
      uStack_568 = CONCAT44(uStack_4d4,uVar15);
      local_570 = CONCAT44(uStack_4dc,local_580);
      NullCheck(local_520);
      uStack_584 = (undefined4)((ulong)uStack_568 >> 0x20);
      uStack_588 = (undefined4)uStack_568;
      uStack_58c = (undefined4)((ulong)local_570 >> 0x20);
      local_590 = (undefined4)local_570;
      Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D
                (local_590,uStack_58c,uStack_588,local_520,0);
      local_598 = *(OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509 **)(local_28 + 0x58);
      NullCheck(local_598);
      local_59c = (float)OVRHand_get_HandScale_mF8A57EFEAA517331FBA93803439620C8EE94CE52_inline
                                   (local_598,(MethodInfo *)0x0);
      local_5a8 = *(OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509 **)(local_28 + 0x88);
      local_cc = local_59c;
      NullCheck(local_5a8);
      local_5ac = (float)OVRHand_get_HandScale_mF8A57EFEAA517331FBA93803439620C8EE94CE52_inline
                                   (local_5a8,(MethodInfo *)0x0);
      local_d0 = local_5ac;
      memcpy(auStack_5e8,auStack_c8,0x38);
      local_5f0 = local_5d0;
      local_5f4 = local_d0;
      local_5f8 = local_d0;
      local_5fc = local_d0;
      local_608 = 0;
      local_600 = 0;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_608,local_d0,local_d0,
                 local_d0,(MethodInfo *)0x0);
      NullCheck(local_5f0);
      local_618 = local_608;
      uVar6 = local_618;
      local_610 = local_600;
      local_618._4_4_ = (undefined4)(local_608 >> 0x20);
      uVar15 = local_618._4_4_;
      local_618 = uVar6;
      Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633
                (local_608 & 0xffffffff,uVar15,local_600,local_5f0,0);
      memcpy(auStack_650,auStack_c8,0x38);
      local_658 = local_648;
      local_65c = local_cc;
      local_660 = local_cc;
      local_664 = local_cc;
      local_670 = 0;
      local_668 = 0;
      Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 *)&local_670,local_cc,local_cc,
                 local_cc,(MethodInfo *)0x0);
      NullCheck(local_658);
      local_680 = local_670;
      uVar6 = local_680;
      local_678 = local_668;
      local_680._4_4_ = (undefined4)(local_670 >> 0x20);
      param_3 = (ulong)local_668;
      param_2 = local_680._4_4_;
      local_680 = uVar6;
      Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633
                (local_670 & 0xffffffff,local_658,0);
      param_4 = uStack_584;
    }
    local_684 = local_8c;
    local_8c = il2cpp_codegen_add<int,int>(local_8c,1);
  }
  local_698 = *(void **)(local_28 + 0x40);
  local_6a0 = *(void **)(local_28 + 0x88);
  NullCheck(local_6a0);
  local_6a8 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_6a0);
  NullCheck(local_6a8);
  local_6c4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_6a8,0);
  local_6b8 = CONCAT44(param_2,local_6c4);
  uStack_6c0 = param_2;
  local_6bc = uVar15;
  local_6b0 = uVar15;
  NullCheck(local_698);
  local_6d0 = local_6b8;
  uVar6 = local_6d0;
  local_6c8 = local_6b0;
  local_6d0._4_4_ = (undefined4)(local_6b8 >> 0x20);
  uVar15 = local_6d0._4_4_;
  local_6d0 = uVar6;
  uVar16 = local_6b0;
  Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156
            (local_6b8 & 0xffffffff,local_698,0);
  local_6d8 = *(void **)(local_28 + 0x40);
  local_6e0 = *(void **)(local_28 + 0x88);
  NullCheck(local_6e0);
  local_6e8 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_6e0,0)
  ;
  NullCheck(local_6e8);
  local_710 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(local_6e8,0);
  uStack_70c = uVar15;
  uStack_708 = uVar16;
  uStack_704 = param_4;
  local_700 = local_710;
  uStack_6fc = uVar15;
  uStack_6f8 = uVar16;
  uStack_6f4 = param_4;
  NullCheck(local_6d8);
  uVar15 = uStack_6fc;
  uVar16 = uStack_6f4;
  uVar17 = uStack_6f8;
  Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(local_700,local_6d8,0);
  local_728 = *(void **)(local_28 + 0x38);
  local_730 = *(void **)(local_28 + 0x58);
  NullCheck(local_730);
  local_738 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_730,0)
  ;
  NullCheck(local_738);
  local_754 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_738,0);
  local_748 = CONCAT44(uVar15,local_754);
  local_740 = uVar17;
  NullCheck(local_728);
  local_760 = local_748;
  uVar6 = local_760;
  local_758 = local_740;
  local_760._4_4_ = (undefined4)(local_748 >> 0x20);
  uVar15 = local_760._4_4_;
  local_760 = uVar6;
  uVar17 = local_740;
  Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156
            (local_748 & 0xffffffff,local_728,0);
  local_768 = *(void **)(local_28 + 0x38);
  local_770 = *(void **)(local_28 + 0x58);
  NullCheck(local_770);
  local_778 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(local_770,0)
  ;
  NullCheck(local_778);
  local_7a0 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(local_778,0);
  uStack_79c = uVar15;
  local_790 = local_7a0;
  uStack_78c = uVar15;
  uStack_788 = uVar17;
  uStack_784 = uVar16;
  NullCheck(local_768);
  uVar16 = uStack_78c;
  uVar15 = uStack_784;
  uVar17 = uStack_788;
  Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(local_790,local_768,0);
  local_7b8 = *(undefined8 *)(local_28 + 0x60);
  local_7bc = OVRTrackedKeyboardHands_GetHandDistanceToKeyboard_m252E7F5BDAAF3955C63FDB0044D472361E6CF7D0
                        (local_28,local_7b8,0);
  local_7c8 = *(undefined8 *)(local_28 + 0x90);
  local_34 = local_7bc;
  local_7cc = OVRTrackedKeyboardHands_GetHandDistanceToKeyboard_m252E7F5BDAAF3955C63FDB0044D472361E6CF7D0
                        (local_28,local_7c8,0);
  local_7d0 = local_34;
  local_38 = local_7cc;
  bVar7 = OVRTrackedKeyboardHands_ShouldEnablePassthrough_m071C21F063CDFE3003F3EAA3A716A3E35BF896D1
                    (local_34,local_28,0);
  local_7d1 = bVar7 & 1;
  OVRTrackedKeyboardHands_set_LeftHandOverKeyboard_m699A58A3BECC038E384B8F63F952321F978CBFDF_inline
            (local_28,(bool)local_7d1,(MethodInfo *)0x0);
  local_7d8 = local_38;
  bVar7 = OVRTrackedKeyboardHands_ShouldEnablePassthrough_m071C21F063CDFE3003F3EAA3A716A3E35BF896D1
                    (local_38,local_28,0);
  local_7d9 = bVar7 & 1;
  OVRTrackedKeyboardHands_set_RightHandOverKeyboard_m5E172975EF338520678A7534A876DBD4C6352214_inline
            (local_28,(bool)(bVar7 & 1),(MethodInfo *)0x0);
  local_7e8 = *(void **)(local_28 + 0x48);
  bVar7 = OVRTrackedKeyboardHands_get_RightHandOverKeyboard_mBAC596144FFC96D68CBF58A3FA23A10696B8590E_inline
                    (local_28,(MethodInfo *)0x0);
  local_7e9 = bVar7 & 1;
  if ((bVar7 & 1) == 0) {
    local_138 = local_7e8;
    local_7ea = OVRTrackedKeyboardHands_get_LeftHandOverKeyboard_m5D1178FC88360476313D14840F83291F4F6B20CB_inline
                          (local_28,(MethodInfo *)0x0);
    local_7ea = local_7ea & 1;
    local_13c = (uint)local_7ea;
    local_148 = local_138;
  }
  else {
    local_130 = local_7e8;
    local_13c = 1;
    local_148 = local_7e8;
  }
  NullCheck(local_148);
  *(bool *)((long)local_148 + 0x120) = local_13c != 0;
  local_7f0 = local_34;
  local_39 = OVRTrackedKeyboardHands_ShouldEnableModel_mDB78A526B55658420B9EC50EB1E01D1FF7FD217A
                       (local_34,local_28);
  local_7f1 = local_39 & 1;
  local_39 = local_39 & 1;
  local_7f8 = local_38;
  bVar7 = OVRTrackedKeyboardHands_ShouldEnableModel_mDB78A526B55658420B9EC50EB1E01D1FF7FD217A
                    (local_38,local_28,0);
  local_7f9 = bVar7 & 1;
  local_3a = bVar7 & 1;
  local_7fa = local_39 & 1;
  local_7fb = bVar7 & 1;
  OVRTrackedKeyboardHands_SetHandModelsEnabled_mF4C8E3383B48D6F1F89963A24B93C87A61A39FE0
            (local_28,local_39 & 1,bVar7 & 1,0);
  local_808 = *(OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF **)(local_28 + 0x48);
  NullCheck(local_808);
  local_80c = OVRTrackedKeyboard_get_Presentation_m01C5D4CA23C2BDE9681FE060686E534D808B3AC6_inline
                        (local_808,(MethodInfo *)0x0);
  if (local_80c == 0) {
    local_818 = *(void **)(local_28 + 0x38);
    NullCheck(local_818);
    local_820 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                                  (local_818);
    NullCheck(local_820);
    GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(local_820,0,0);
    local_828 = *(void **)(local_28 + 0x40);
    NullCheck(local_828);
    local_830 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                                  (local_828,0);
    NullCheck(local_830);
    GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(local_830,0,0);
  }
  else {
    local_838 = *(void **)(local_28 + 0x38);
    NullCheck(local_838);
    local_840 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                                  (local_838);
    local_841 = OVRTrackedKeyboardHands_get_LeftHandOverKeyboard_m5D1178FC88360476313D14840F83291F4F6B20CB_inline
                          (local_28,(MethodInfo *)0x0);
    local_841 = local_841 & 1;
    NullCheck(local_840);
    GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(local_840,local_841 & 1,0);
    local_850 = *(void **)(local_28 + 0x40);
    NullCheck(local_850);
    local_858 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                                  (local_850,0);
    local_859 = OVRTrackedKeyboardHands_get_RightHandOverKeyboard_mBAC596144FFC96D68CBF58A3FA23A10696B8590E_inline
                          (local_28,(MethodInfo *)0x0);
    local_859 = local_859 & 1;
    NullCheck(local_858);
    GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(local_858,local_859 & 1,0);
  }
  local_868 = *(void **)(local_28 + 0x48);
  NullCheck(local_868);
  local_878 = *(void **)((long)local_868 + 0x118);
  local_870 = local_878;
  if (local_878 == (void *)0x0) {
    local_158 = local_878;
    il2cpp_codegen_initobj(&local_e0,0x10);
    uStack_888 = uStack_d8;
    local_890 = local_e0;
    uStack_168 = uStack_d8;
    local_170 = local_e0;
  }
  else {
    local_150 = local_878;
    NullCheck(local_878);
    local_8ac = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(local_150,0);
    local_8d0 = CONCAT44(uVar16,local_8ac);
    local_8c0 = 0;
    uStack_8b8 = 0;
    local_8a0 = local_8d0;
    Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2
              (local_8ac,&local_8c0,
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpsq_f32__);
    uStack_168 = uStack_8b8;
    local_170 = local_8c0;
  }
  uStack_48 = uStack_168;
  local_50 = local_170;
  local_8d8 = *(void **)(local_28 + 0x48);
  NullCheck(local_8d8);
  local_8e8 = *(void **)((long)local_8d8 + 0x118);
  local_8e0 = local_8e8;
  if (local_8e8 == (void *)0x0) {
    local_180 = local_8e8;
    il2cpp_codegen_initobj(&local_f8,0x14);
    uStack_8f8 = uStack_f0;
    local_900 = local_f8;
    local_8f0 = local_e8;
    uStack_198 = uStack_f0;
    local_1a0 = local_f8;
    local_190 = local_e8;
  }
  else {
    local_178 = local_8e8;
    NullCheck(local_8e8);
    local_920 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(local_178,0);
    uStack_908 = CONCAT44(uVar15,uVar17);
    local_910 = CONCAT44(uVar16,local_920);
    local_938 = 0;
    uStack_930 = 0;
    local_928 = 0;
    uStack_91c = uVar16;
    Nullable_1__ctor_mD66F35DE9BE52A35809D09B3F4B8CD1722D3ED3A
              (local_920,&local_938,
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrhaddq_s16__);
    uStack_198 = uStack_930;
    local_1a0 = local_938;
    local_190 = local_928;
  }
  uStack_68 = uStack_198;
  local_70 = local_1a0;
  local_60 = local_190;
  local_958 = *(void **)(local_28 + 0x48);
  NullCheck(local_958);
  local_960 = *(undefined8 *)((long)local_958 + 0x118);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  local_961 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(local_960,0);
  local_961 = local_961 & 1;
  if (local_961 == 0) {
    local_970 = *(void **)(local_28 + 0x48);
    NullCheck(local_970);
    local_978 = *(void **)((long)local_970 + 0x118);
    NullCheck(local_978);
    local_994 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(local_978);
    local_9b8 = CONCAT44(uVar16,local_994);
    uVar15 = 0xbca3d70a;
    uStack_990 = uVar16;
    local_988 = local_9b8;
    local_9ac = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(local_994,0);
    local_1a8 = uVar17;
    local_9a0 = CONCAT44(uVar16,local_9ac);
    uStack_9a8 = uVar16;
    local_1b0 = local_9a0;
  }
  else {
    local_9d4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0)
    ;
    local_9c8 = CONCAT44(uVar16,local_9d4);
    uStack_9d0 = uVar16;
    local_1b0 = local_9c8;
    local_1a8 = uVar17;
  }
  local_80 = local_1b0;
  local_78 = local_1a8;
  local_9e0 = *(void **)(local_28 + 200);
  local_9e4 = *(undefined4 *)(local_28 + 0xd0);
  uVar17 = local_1a8;
  local_9e5 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline
                        ((Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE *)&local_50,
                         *(MethodInfo **)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpsq_f64__);
  local_9e5 = local_9e5 & 1;
  if (local_9e5 == 0) {
    local_1c4 = local_9e4;
    local_1d0 = local_9e0;
    local_a04 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0)
    ;
    local_9f8 = CONCAT44(uVar16,local_a04);
    local_1e4 = local_1c4;
    local_1f0 = local_1d0;
    uStack_a00 = uVar16;
    local_1e0 = local_9f8;
    local_1d8 = uVar17;
  }
  else {
    local_1b4 = local_9e4;
    local_1c0 = local_9e0;
    local_a1c = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792
                          ((Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE *)&local_50,
                           *(MethodInfo **)Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpss_f32__);
    local_a50 = CONCAT44(uVar16,local_a1c);
    local_a28 = local_80;
    local_a20 = local_78;
    local_a60 = local_80;
    uVar5 = local_a60;
    local_a58 = local_78;
    local_a60._0_4_ = (undefined4)local_80;
    uVar15 = (undefined4)local_a60;
    local_a60 = uVar5;
    uStack_a18 = uVar16;
    local_a10 = local_a50;
    local_a44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(local_a1c,0);
    local_a38 = CONCAT44(uVar16,local_a44);
    local_1e4 = local_1b4;
    local_1f0 = local_1c0;
    uStack_a40 = uVar16;
    local_1e0 = local_a38;
    local_1d8 = uVar17;
  }
  local_a90 = local_1e0;
  uVar6 = local_a90;
  local_a88 = local_1d8;
  local_a90._4_4_ = (undefined4)(local_1e0 >> 0x20);
  uVar16 = local_a90._4_4_;
  local_a90 = uVar6;
  local_a80 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline
                        (local_1e0 & 0xffffffff);
  uStack_a7c = uVar16;
  uStack_a74 = uVar15;
  local_a70 = local_a80;
  uStack_a6c = uVar16;
  uStack_a68 = local_1d8;
  uStack_a64 = uVar15;
  NullCheck(local_1f0);
  uVar15 = uStack_a6c;
  uVar16 = uStack_a64;
  uVar17 = uStack_a68;
  Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(local_a70,local_1f0,local_1e4,0);
  local_aa8 = *(void **)(local_28 + 200);
  local_aac = *(undefined4 *)(local_28 + 0xd4);
  local_aad = Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_inline
                        ((Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 *)&local_70,
                         *(MethodInfo **)
                          Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__0__);
  local_aad = local_aad & 1;
  if (local_aad == 0) {
    local_204 = local_aac;
    local_210 = local_aa8;
    local_acc = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0)
    ;
    local_ac0 = CONCAT44(uVar15,local_acc);
    local_224 = local_204;
    local_230 = local_210;
    local_220 = local_ac0;
    local_218 = uVar17;
  }
  else {
    local_1f4 = local_aac;
    local_200 = local_aa8;
    local_af0 = Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC
                          ((Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 *)&local_70,
                           *(MethodInfo **)Method_Unity_Burst_Intrinsics_Arm_Neon_vrhaddq_s32__);
    uStack_108 = CONCAT44(uVar16,uVar17);
    local_110 = CONCAT44(uVar15,local_af0);
    local_ae0 = local_110;
    uStack_ad8 = uStack_108;
    local_b0c = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline
                          ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 *)&local_110,
                           (MethodInfo *)0x0);
    local_b00 = CONCAT44(uVar15,local_b0c);
    local_224 = local_1f4;
    local_230 = local_200;
    local_220 = local_b00;
    local_218 = uVar17;
  }
  local_b40 = local_220;
  uVar6 = local_b40;
  local_b38 = local_218;
  local_b40._4_4_ = (undefined4)(local_220 >> 0x20);
  uVar15 = local_b40._4_4_;
  local_b40 = uVar6;
  local_b30 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline
                        (local_220 & 0xffffffff);
  uStack_b2c = uVar15;
  local_b20 = local_b30;
  uStack_b1c = uVar15;
  uStack_b18 = local_218;
  uStack_b14 = uVar16;
  NullCheck(local_230);
  Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7
            (local_b20,uStack_b1c,uStack_b18,uStack_b14,local_230,local_224,0);
  local_b58 = *(void **)(local_28 + 200);
  local_b5c = *(undefined4 *)(local_28 + 0xd8);
  local_b68 = *(OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF **)(local_28 + 0x48);
  NullCheck(local_b68);
  OVRTrackedKeyboard_get_ActiveKeyboardInfo_m1F0337158684151871805642881EE89BF3CB03E0_inline
            (local_b68,(MethodInfo *)0x0);
  memcpy(auStack_b90,auStack_bb8,0x28);
  local_bc8 = local_b80;
  uVar5 = local_bc8;
  local_bc0 = local_b78;
  local_bc8._0_4_ = (float)local_b80;
  local_bcc = (float)local_bc8;
  local_bd8 = *(OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF **)(local_28 + 0x48);
  local_bc8 = uVar5;
  NullCheck(local_bd8);
  OVRTrackedKeyboard_get_ActiveKeyboardInfo_m1F0337158684151871805642881EE89BF3CB03E0_inline
            (local_bd8,(MethodInfo *)0x0);
  memcpy(auStack_c00,auStack_c28,0x28);
  local_c38 = local_bf0;
  local_c30 = local_be8;
  local_c3c = local_be8;
  local_c50 = 0;
  uStack_c48 = 0;
  fVar13 = (float)il2cpp_codegen_multiply<float,float>(local_bcc,0.73);
  fVar14 = (float)il2cpp_codegen_multiply<float,float>(local_c3c,0.8);
  Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline
            ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 *)&local_c50,fVar13,0.1,fVar14,1.0,
             (MethodInfo *)0x0);
  NullCheck(local_b58);
  uStack_c54 = (undefined4)((ulong)uStack_c48 >> 0x20);
  uStack_c58 = (undefined4)uStack_c48;
  uStack_c5c = (undefined4)((ulong)local_c50 >> 0x20);
  local_c60 = (undefined4)local_c50;
  Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7
            (local_c60,uStack_c5c,uStack_c58,uStack_c54,local_b58,local_b5c,0);
  local_c68 = (Nullable_1_tB829588FFD841315A6E2973AB0DFF66280FEB564 *)(local_28 + 0xba);
  local_c69 = Nullable_1_get_HasValue_mBFC0BF6CC1AA3E64420CD4DEE19C91AC6676C1CE_inline
                        (local_c68,*(MethodInfo **)StringLiteral_272);
  local_c69 = local_c69 & 1;
  if (local_c69 != 0) {
    local_c6a = OVRTrackedKeyboardHands_get_LeftHandOverKeyboard_m5D1178FC88360476313D14840F83291F4F6B20CB_inline
                          (local_28,(MethodInfo *)0x0);
    local_c6a = local_c6a & 1;
    local_c78 = (Nullable_1_tB829588FFD841315A6E2973AB0DFF66280FEB564 *)(local_28 + 0xba);
    local_c88 = Nullable_1_get_Value_m97DFB972F200A970CE70B31AFFCC166153D4B279
                          (local_c78,*(MethodInfo **)puVar2);
    local_c7c = (undefined2)local_c88;
    local_c7a = (undefined2)local_c88;
    uVar4 = local_c7a;
    local_c7a._0_1_ = (byte)local_c88;
    local_c89 = (byte)local_c7a & 1;
    bVar7 = (byte)local_c7a & 1;
    local_c7a = uVar4;
    if ((local_c6a & 1) == bVar7) {
      local_c8a = OVRTrackedKeyboardHands_get_RightHandOverKeyboard_mBAC596144FFC96D68CBF58A3FA23A10696B8590E_inline
                            (local_28,(MethodInfo *)0x0);
      local_c8a = local_c8a & 1;
      local_c98 = (Nullable_1_tB829588FFD841315A6E2973AB0DFF66280FEB564 *)(local_28 + 0xba);
      local_ca8 = Nullable_1_get_Value_m97DFB972F200A970CE70B31AFFCC166153D4B279
                            (local_c98,*(MethodInfo **)puVar2);
      local_c9c = (undefined2)local_ca8;
      local_c9a = (undefined2)local_ca8;
      uVar4 = local_c9a;
      local_c9a._1_1_ = (byte)((ulong)local_ca8 >> 8);
      local_ca9 = local_c9a._1_1_ & 1;
      bVar7 = local_c9a._1_1_ & 1;
      local_c9a = uVar4;
      if ((local_c8a & 1) == bVar7) goto LAB_02e15fac;
    }
  }
  il2cpp_codegen_initobj(&local_112,2);
  bVar7 = OVRTrackedKeyboardHands_get_LeftHandOverKeyboard_m5D1178FC88360476313D14840F83291F4F6B20CB_inline
                    (local_28,(MethodInfo *)0x0);
  local_caa = bVar7 & 1;
  local_112 = CONCAT11(local_112._1_1_,bVar7) & 0xff01;
  bVar7 = OVRTrackedKeyboardHands_get_RightHandOverKeyboard_mBAC596144FFC96D68CBF58A3FA23A10696B8590E_inline
                    (local_28,(MethodInfo *)0x0);
  local_cab = bVar7 & 1;
  uVar1 = CONCAT11(bVar7,(undefined1)local_112);
  local_112 = uVar1 & 0x1ff;
  local_cae = local_112;
  local_cb2 = 0;
  local_cb0 = (OVRTrackedKeyboardHands_t3F0BBAE684AB5CEE2641222D52694D721A0B5F5F)0x0;
  Nullable_1__ctor_m11DE7E80C4792D7E1E2EAD862CA1FD26B03A3591
            (&local_cb2,CONCAT62(uStack_cbe,uVar1) & 0xffffffffffff01ff,
             *(undefined8 *)StringLiteral_271);
  *(undefined2 *)(local_28 + 0xba) = local_cb2;
  local_28[0xbc] = local_cb0;
  pvVar11 = *(void **)(local_28 + 0x48);
  NullCheck(pvVar11);
  OVRTrackedKeyboard_UpdateKeyboardVisibility_m7A4F13146041D8429154F91EB3282F6C0901EFA6(pvVar11,0);
LAB_02e15fac:
  bVar7 = OVRTrackedKeyboardHands_get_LeftHandOverKeyboard_m5D1178FC88360476313D14840F83291F4F6B20CB_inline
                    (local_28,(MethodInfo *)0x0);
  if (((bVar7 & 1) != 0) ||
     (bVar7 = OVRTrackedKeyboardHands_get_RightHandOverKeyboard_mBAC596144FFC96D68CBF58A3FA23A10696B8590E_inline
                        (local_28,(MethodInfo *)0x0), (bVar7 & 1) != 0)) {
    il2cpp_codegen_initobj(&local_128,8);
    uVar16 = local_34;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar8 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar15 = *puVar8;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar15 = OVRTrackedKeyboardHands_ComputeOpacity_mC1EBD5A25CAFADEC26F5087816C679F03EEA7798
                       (uVar16,uVar15,*(undefined4 *)(lVar9 + 4),local_28);
    uVar16 = local_38;
    local_128 = CONCAT44(local_128._4_4_,uVar15);
    puVar8 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar15 = *puVar8;
    lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar15 = OVRTrackedKeyboardHands_ComputeOpacity_mC1EBD5A25CAFADEC26F5087816C679F03EEA7798
                       (uVar16,uVar15,*(undefined4 *)(lVar9 + 4),local_28,0);
    local_128 = CONCAT44(uVar15,(undefined4)local_128);
    local_120 = local_128;
    pOVar12 = *(OVRTrackedKeyboard_tFE09AB0D5C497649117E83956CF7E3738A8736FF **)(local_28 + 0x48);
    NullCheck(pOVar12);
    pOVar10 = (OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)
              OVRTrackedKeyboard_get_PassthroughOverlay_m69CE7B09F974E5B817BF6D0E2F0B5221480B1767_inline
                        (pOVar12,(MethodInfo *)0x0);
    NullCheck(pOVar10);
    uVar15 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                       (pOVar10,(MethodInfo *)0x0);
    uVar6 = local_120;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uStack_d24 = (undefined4)(uVar6 >> 0x20);
    OVRPlugin_SetInsightPassthroughKeyboardHandsIntensity_mBCD38A3B8B0B71126F1EEE96EAF5A90EA3FA3938
              (uVar6 & 0xffffffff,uStack_d24,uVar15,0);
  }
  return;
}


