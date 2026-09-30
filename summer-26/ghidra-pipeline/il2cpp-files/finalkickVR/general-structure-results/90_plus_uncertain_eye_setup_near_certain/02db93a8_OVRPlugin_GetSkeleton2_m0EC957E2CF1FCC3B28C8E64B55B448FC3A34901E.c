/*
FUNCTION_NAME: OVRPlugin_GetSkeleton2_m0EC957E2CF1FCC3B28C8E64B55B448FC3A34901E
ENTRY_POINT: 02db93a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPlugin_GetSkeleton2_m0EC957E2CF1FCC3B28C8E64B55B448FC3A34901E
          (undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784 *pBVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  int local_908;
  int local_904;
  void *local_900;
  int local_8f4;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_8f0;
  undefined4 *local_8e8;
  uint local_8dc;
  undefined4 *local_8d8;
  int local_8d0;
  int local_8cc;
  undefined1 auStack_8c8 [36];
  undefined1 auStack_8a4 [36];
  int local_880;
  int local_87c;
  void *local_878;
  int local_86c;
  BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784 *local_868;
  undefined4 *local_860;
  undefined4 local_854;
  undefined4 *local_850;
  undefined4 local_844;
  undefined4 *local_840;
  undefined4 local_834;
  undefined4 *local_830;
  void *local_828;
  undefined4 *local_820;
  void *local_818;
  undefined4 *local_810;
  long local_808;
  undefined4 *local_800;
  void *local_7f8;
  undefined4 *local_7f0;
  void *local_7e8;
  undefined4 *local_7e0;
  long local_7d8;
  undefined4 *local_7d0;
  byte local_7c5;
  undefined4 local_7c4;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_780;
  undefined4 *local_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_730;
  undefined4 *local_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_6e0;
  undefined4 *local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_690;
  undefined4 *local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_640;
  undefined4 *local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_5f0;
  undefined4 *local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_5a0;
  undefined4 *local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_550;
  undefined4 *local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_500;
  undefined4 *local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_4b0;
  undefined4 *local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_460;
  undefined4 *local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_410;
  undefined4 *local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_3c0;
  undefined4 *local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_370;
  undefined4 *local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_320;
  undefined4 *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_2d0;
  undefined4 *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_280;
  undefined4 *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_230;
  undefined4 *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 *local_1e0;
  undefined4 *local_1d8;
  uint local_1cc;
  undefined4 *local_1c8;
  int local_1bc;
  int local_1b8;
  undefined1 auStack_1b4 [36];
  undefined1 auStack_190 [36];
  undefined1 auStack_16c [36];
  GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *local_148;
  int local_140;
  int local_13c;
  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC *local_138;
  int local_12c;
  BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784 *local_128;
  undefined4 *local_120;
  void *local_118;
  uint local_10c;
  undefined4 *local_108;
  undefined4 *local_100;
  uint local_f4;
  undefined4 *local_f0;
  void *local_e8;
  undefined4 *local_e0;
  long local_d8;
  undefined4 *local_d0;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 local_b4;
  undefined4 *local_b0;
  undefined4 local_a4;
  undefined4 *local_a0;
  void *local_98;
  undefined4 *local_90;
  void *local_88;
  undefined4 *local_80;
  long local_78;
  undefined4 *local_70;
  int local_64;
  undefined4 local_60;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 local_28;
  
  puVar4 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
  ;
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_n_s32__;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_n_s16__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
                    /* try { // try from 02db93e8 to 02eb942f has its CatchHandler @ 02db8fec */
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02db9238 with catch @ 02db9404
                        */
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRPlugin_GetSkeleton2_m0EC957E2CF1FCC3B28C8E64B55B448FC3A34901E::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_high_n_s16__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
                    /* try { // try from 02db9430 to 02eb9437 has its CatchHandler @ 02db94e4 */
                    /* try { // try from 02db9438 to 02eb943b has its CatchHandler @ 02db94fc */
    OVRPlugin_GetSkeleton2_m0EC957E2CF1FCC3B28C8E64B55B448FC3A34901E::s_Il2CppMethodInitialized = 1;
  }
                    /* try { // try from 02db943c to 02eb94f3 has its CatchHandler @ 02db8fec */
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_50 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  local_58 = *puVar7;
  local_59 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_50,local_58,0);
  local_59 = local_59 & 1;
  if (local_59 != 0) {
    local_60 = local_28;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
    uVar6 = local_60;
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
                    /* catch() { ... } // from try @ 02db9430 with catch @ 02db94e4 */
                    /* try { // try from 02db94f4 to 02eb9513 has its CatchHandler @ 02db95c0 */
    local_64 = OVRP_1_55_0_ovrp_GetSkeleton2_mA354C5BFDC3B0A12CC5636A924A44EB3D9F165D4
                         (uVar6,lVar8 + 0x2a0,0);
                    /* catch() { ... } // from try @ 02db9438 with catch @ 02db94fc */
    if (local_64 != 0) {
      return 0;
    }
    local_70 = local_30;
                    /* try { // try from 02db9514 to 02eb95c3 has its CatchHandler @ 02db8fec */
    local_78 = *(long *)(local_30 + 6);
    if (local_78 == 0) {
LAB_02db9564:
      local_90 = local_30;
      local_98 = (void *)SZArrayNew(*(Il2CppClass **)puVar2,0x13);
      *(void **)(local_90 + 6) = local_98;
      Il2CppCodeGenWriteBarrier((void **)(local_90 + 6),local_98);
    }
    else {
      local_80 = local_30;
      local_88 = *(void **)(local_30 + 6);
      NullCheck(local_88);
      if ((int)*(undefined8 *)((long)local_88 + 0x18) != 0x13) goto LAB_02db9564;
    }
    local_a0 = local_30;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_a4 = *(undefined4 *)(lVar8 + 0x2a0);
    *local_a0 = local_a4;
    local_b0 = local_30;
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_b4 = *(undefined4 *)(lVar8 + 0x2a4);
    local_b0[1] = local_b4;
    local_c0 = local_30;
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_c4 = *(undefined4 *)(lVar8 + 0x2a8);
    local_c0[2] = local_c4;
    local_d0 = local_30;
    local_d8 = *(long *)(local_30 + 4);
    if (local_d8 != 0) {
      local_e0 = local_30;
      local_e8 = *(void **)(local_30 + 4);
      NullCheck(local_e8);
      local_f0 = local_30;
      local_f4 = local_30[1];
      if ((long)(int)*(undefined8 *)((long)local_e8 + 0x18) == (ulong)local_f4) goto LAB_02db9700;
    }
    local_100 = local_30;
    local_108 = local_30;
    local_10c = local_30[1];
    local_118 = (void *)SZArrayNew(*(Il2CppClass **)puVar3,local_10c);
    *(void **)(local_100 + 4) = local_118;
    Il2CppCodeGenWriteBarrier((void **)(local_100 + 4),local_118);
LAB_02db9700:
    local_3c = 0;
    while( true ) {
      local_1bc = local_3c;
      local_1c8 = local_30;
      local_1cc = local_30[1];
      if ((long)(ulong)local_1cc <= (long)local_3c) break;
      local_120 = local_30;
      local_128 = *(BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784 **)(local_30 + 4);
      local_12c = local_3c;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      local_138 = *(GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC **)
                   (lVar8 + 0xee8);
      local_13c = local_3c;
      NullCheck(local_138);
      local_140 = local_13c;
      local_148 = (GetBoneSkeleton2Delegate_t19E9AF7106DA54B5CCDB9AE7367610B059CC3C02 *)
                  GetBoneSkeleton2DelegateU5BU5D_tA80E80C152E9BD1F6A64BC3F324093032F0730AC::GetAt
                            (local_138,(long)local_13c);
      NullCheck(local_148);
      GetBoneSkeleton2Delegate_Invoke_m11D8FB63D24E4F5982485D0C57E479600D819B46_inline
                (local_148,(MethodInfo *)0x0);
      memcpy(auStack_16c,auStack_190,0x24);
      NullCheck(local_128);
      pBVar5 = local_128;
      lVar8 = (long)local_12c;
      memcpy(auStack_1b4,auStack_16c,0x24);
      BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784::SetAt(pBVar5,lVar8,auStack_1b4);
      local_1b8 = local_3c;
      local_3c = il2cpp_codegen_add<int,int>(local_3c,1);
    }
    local_1d8 = local_30;
    local_1e0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_1f8 = *(undefined8 *)(lVar8 + 0xc8c);
    local_200 = *(undefined8 *)(lVar8 + 0xc84);
    uStack_1e8 = *(undefined8 *)(lVar8 + 0xc9c);
    local_1f0 = *(undefined8 *)(lVar8 + 0xc94);
    NullCheck(local_1e0);
    uStack_218 = uStack_1f8;
    local_220 = local_200;
    uStack_208 = uStack_1e8;
    local_210 = local_1f0;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_1e0,0,&local_220);
    local_228 = local_30;
    local_230 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_248 = *(undefined8 *)(lVar8 + 0xcac);
    local_250 = *(undefined8 *)(lVar8 + 0xca4);
    uStack_238 = *(undefined8 *)(lVar8 + 0xcbc);
    local_240 = *(undefined8 *)(lVar8 + 0xcb4);
    NullCheck(local_230);
    uStack_268 = uStack_248;
    local_270 = local_250;
    uStack_258 = uStack_238;
    local_260 = local_240;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_230,1,&local_270);
    local_278 = local_30;
    local_280 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_298 = *(undefined8 *)(lVar8 + 0xccc);
    local_2a0 = *(undefined8 *)(lVar8 + 0xcc4);
    uStack_288 = *(undefined8 *)(lVar8 + 0xcdc);
    local_290 = *(undefined8 *)(lVar8 + 0xcd4);
    NullCheck(local_280);
    uStack_2b8 = uStack_298;
    local_2c0 = local_2a0;
    uStack_2a8 = uStack_288;
    local_2b0 = local_290;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_280,2,&local_2c0);
    local_2c8 = local_30;
    local_2d0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_2e8 = *(undefined8 *)(lVar8 + 0xcec);
    local_2f0 = *(undefined8 *)(lVar8 + 0xce4);
    uStack_2d8 = *(undefined8 *)(lVar8 + 0xcfc);
    local_2e0 = *(undefined8 *)(lVar8 + 0xcf4);
    NullCheck(local_2d0);
    uStack_308 = uStack_2e8;
    local_310 = local_2f0;
    uStack_2f8 = uStack_2d8;
    local_300 = local_2e0;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_2d0,3,&local_310);
    local_318 = local_30;
    local_320 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_338 = *(undefined8 *)(lVar8 + 0xd0c);
    local_340 = *(undefined8 *)(lVar8 + 0xd04);
    uStack_328 = *(undefined8 *)(lVar8 + 0xd1c);
    local_330 = *(undefined8 *)(lVar8 + 0xd14);
    NullCheck(local_320);
    uStack_358 = uStack_338;
    local_360 = local_340;
    uStack_348 = uStack_328;
    local_350 = local_330;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_320,4,&local_360);
    local_368 = local_30;
    local_370 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_388 = *(undefined8 *)(lVar8 + 0xd2c);
    local_390 = *(undefined8 *)(lVar8 + 0xd24);
    uStack_378 = *(undefined8 *)(lVar8 + 0xd3c);
    local_380 = *(undefined8 *)(lVar8 + 0xd34);
    NullCheck(local_370);
    uStack_3a8 = uStack_388;
    local_3b0 = local_390;
    uStack_398 = uStack_378;
    local_3a0 = local_380;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_370,5,&local_3b0);
    local_3b8 = local_30;
    local_3c0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_3d8 = *(undefined8 *)(lVar8 + 0xd4c);
    local_3e0 = *(undefined8 *)(lVar8 + 0xd44);
    uStack_3c8 = *(undefined8 *)(lVar8 + 0xd5c);
    local_3d0 = *(undefined8 *)(lVar8 + 0xd54);
    NullCheck(local_3c0);
    uStack_3f8 = uStack_3d8;
    local_400 = local_3e0;
    uStack_3e8 = uStack_3c8;
    local_3f0 = local_3d0;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_3c0,6,&local_400);
    local_408 = local_30;
    local_410 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_428 = *(undefined8 *)(lVar8 + 0xd6c);
    local_430 = *(undefined8 *)(lVar8 + 0xd64);
    uStack_418 = *(undefined8 *)(lVar8 + 0xd7c);
    local_420 = *(undefined8 *)(lVar8 + 0xd74);
    NullCheck(local_410);
    uStack_448 = uStack_428;
    local_450 = local_430;
    uStack_438 = uStack_418;
    local_440 = local_420;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_410,7,&local_450);
    local_458 = local_30;
    local_460 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_478 = *(undefined8 *)(lVar8 + 0xd8c);
    local_480 = *(undefined8 *)(lVar8 + 0xd84);
    uStack_468 = *(undefined8 *)(lVar8 + 0xd9c);
    local_470 = *(undefined8 *)(lVar8 + 0xd94);
    NullCheck(local_460);
    uStack_498 = uStack_478;
    local_4a0 = local_480;
    uStack_488 = uStack_468;
    local_490 = local_470;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_460,8,&local_4a0);
    local_4a8 = local_30;
    local_4b0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_4c8 = *(undefined8 *)(lVar8 + 0xdac);
    local_4d0 = *(undefined8 *)(lVar8 + 0xda4);
    uStack_4b8 = *(undefined8 *)(lVar8 + 0xdbc);
    local_4c0 = *(undefined8 *)(lVar8 + 0xdb4);
    NullCheck(local_4b0);
    uStack_4e8 = uStack_4c8;
    local_4f0 = local_4d0;
    uStack_4d8 = uStack_4b8;
    local_4e0 = local_4c0;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_4b0,9,&local_4f0);
    local_4f8 = local_30;
    local_500 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_518 = *(undefined8 *)(lVar8 + 0xdcc);
    local_520 = *(undefined8 *)(lVar8 + 0xdc4);
    uStack_508 = *(undefined8 *)(lVar8 + 0xddc);
    local_510 = *(undefined8 *)(lVar8 + 0xdd4);
    NullCheck(local_500);
    uStack_538 = uStack_518;
    local_540 = local_520;
    uStack_528 = uStack_508;
    local_530 = local_510;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_500,10,&local_540);
    local_548 = local_30;
    local_550 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_568 = *(undefined8 *)(lVar8 + 0xdec);
    local_570 = *(undefined8 *)(lVar8 + 0xde4);
    uStack_558 = *(undefined8 *)(lVar8 + 0xdfc);
    local_560 = *(undefined8 *)(lVar8 + 0xdf4);
    NullCheck(local_550);
    uStack_588 = uStack_568;
    local_590 = local_570;
    uStack_578 = uStack_558;
    local_580 = local_560;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_550,0xb,&local_590);
    local_598 = local_30;
    local_5a0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_5b8 = *(undefined8 *)(lVar8 + 0xe0c);
    local_5c0 = *(undefined8 *)(lVar8 + 0xe04);
    uStack_5a8 = *(undefined8 *)(lVar8 + 0xe1c);
    local_5b0 = *(undefined8 *)(lVar8 + 0xe14);
    NullCheck(local_5a0);
    uStack_5d8 = uStack_5b8;
    local_5e0 = local_5c0;
    uStack_5c8 = uStack_5a8;
    local_5d0 = local_5b0;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_5a0,0xc,&local_5e0);
    local_5e8 = local_30;
    local_5f0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_608 = *(undefined8 *)(lVar8 + 0xe2c);
    local_610 = *(undefined8 *)(lVar8 + 0xe24);
    uStack_5f8 = *(undefined8 *)(lVar8 + 0xe3c);
    local_600 = *(undefined8 *)(lVar8 + 0xe34);
    NullCheck(local_5f0);
    uStack_628 = uStack_608;
    local_630 = local_610;
    uStack_618 = uStack_5f8;
    local_620 = local_600;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_5f0,0xd,&local_630);
    local_638 = local_30;
    local_640 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_658 = *(undefined8 *)(lVar8 + 0xe4c);
    local_660 = *(undefined8 *)(lVar8 + 0xe44);
    uStack_648 = *(undefined8 *)(lVar8 + 0xe5c);
    local_650 = *(undefined8 *)(lVar8 + 0xe54);
    NullCheck(local_640);
    uStack_678 = uStack_658;
    local_680 = local_660;
    uStack_668 = uStack_648;
    local_670 = local_650;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_640,0xe,&local_680);
    local_688 = local_30;
    local_690 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_6a8 = *(undefined8 *)(lVar8 + 0xe6c);
    local_6b0 = *(undefined8 *)(lVar8 + 0xe64);
    uStack_698 = *(undefined8 *)(lVar8 + 0xe7c);
    local_6a0 = *(undefined8 *)(lVar8 + 0xe74);
    NullCheck(local_690);
    uStack_6c8 = uStack_6a8;
    local_6d0 = local_6b0;
    uStack_6b8 = uStack_698;
    local_6c0 = local_6a0;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_690,0xf,&local_6d0);
    local_6d8 = local_30;
    local_6e0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_6f8 = *(undefined8 *)(lVar8 + 0xe8c);
    local_700 = *(undefined8 *)(lVar8 + 0xe84);
    uStack_6e8 = *(undefined8 *)(lVar8 + 0xe9c);
    local_6f0 = *(undefined8 *)(lVar8 + 0xe94);
    NullCheck(local_6e0);
    uStack_718 = uStack_6f8;
    local_720 = local_700;
    uStack_708 = uStack_6e8;
    local_710 = local_6f0;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_6e0,0x10,&local_720);
    local_728 = local_30;
    local_730 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_748 = *(undefined8 *)(lVar8 + 0xeac);
    local_750 = *(undefined8 *)(lVar8 + 0xea4);
    uStack_738 = *(undefined8 *)(lVar8 + 0xebc);
    local_740 = *(undefined8 *)(lVar8 + 0xeb4);
    NullCheck(local_730);
    uStack_768 = uStack_748;
    local_770 = local_750;
    uStack_758 = uStack_738;
    local_760 = local_740;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_730,0x11,&local_770);
    local_778 = local_30;
    local_780 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uStack_798 = *(undefined8 *)(lVar8 + 0xecc);
    local_7a0 = *(undefined8 *)(lVar8 + 0xec4);
    uStack_788 = *(undefined8 *)(lVar8 + 0xedc);
    local_790 = *(undefined8 *)(lVar8 + 0xed4);
    NullCheck(local_780);
    uStack_7b8 = uStack_798;
    local_7c0 = local_7a0;
    uStack_7a8 = uStack_788;
    local_7b0 = local_790;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt(local_780,0x12,&local_7c0);
    return 1;
  }
  local_7c4 = local_28;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar6 = local_7c4;
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_7c5 = OVRPlugin_GetSkeleton_m21D6A984F3C35DF7EF079BC722984F504A856E34(uVar6,lVar8 + 0x280,0)
  ;
  local_7c5 = local_7c5 & 1;
  if (local_7c5 == 0) {
    return 0;
  }
  local_7d0 = local_30;
  local_7d8 = *(long *)(local_30 + 4);
  if (local_7d8 == 0) {
LAB_02dba174:
    local_7f0 = local_30;
    local_7f8 = (void *)SZArrayNew(*(Il2CppClass **)puVar3,0x46);
    *(void **)(local_7f0 + 4) = local_7f8;
    Il2CppCodeGenWriteBarrier((void **)(local_7f0 + 4),local_7f8);
  }
  else {
    local_7e0 = local_30;
    local_7e8 = *(void **)(local_30 + 4);
    NullCheck(local_7e8);
    if ((int)*(undefined8 *)((long)local_7e8 + 0x18) != 0x46) goto LAB_02dba174;
  }
  local_800 = local_30;
  local_808 = *(long *)(local_30 + 6);
  if (local_808 != 0) {
    local_810 = local_30;
    local_818 = *(void **)(local_30 + 6);
    NullCheck(local_818);
    if ((int)*(undefined8 *)((long)local_818 + 0x18) == 0x13) goto LAB_02dba260;
  }
  local_820 = local_30;
  local_828 = (void *)SZArrayNew(*(Il2CppClass **)puVar2,0x13);
  *(void **)(local_820 + 6) = local_828;
  Il2CppCodeGenWriteBarrier((void **)(local_820 + 6),local_828);
LAB_02dba260:
  local_830 = local_30;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_834 = *(undefined4 *)(lVar8 + 0x280);
  *local_830 = local_834;
  local_840 = local_30;
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_844 = *(undefined4 *)(lVar8 + 0x284);
  local_840[1] = local_844;
  local_850 = local_30;
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_854 = *(undefined4 *)(lVar8 + 0x288);
  local_850[2] = local_854;
  local_40 = 0;
  while( true ) {
    local_8d0 = local_40;
    local_8d8 = local_30;
    local_8dc = local_30[1];
    if ((long)(ulong)local_8dc <= (long)local_40) break;
    local_860 = local_30;
    local_868 = *(BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784 **)(local_30 + 4);
    local_86c = local_40;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_878 = *(void **)(lVar8 + 0x290);
    local_87c = local_40;
    NullCheck(local_878);
    local_880 = local_87c;
    BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784::GetAt((ulong)local_878);
    NullCheck(local_868);
    pBVar5 = local_868;
    lVar8 = (long)local_86c;
    memcpy(auStack_8c8,auStack_8a4,0x24);
    BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784::SetAt(pBVar5,lVar8,auStack_8c8);
    local_8cc = local_40;
    local_40 = il2cpp_codegen_add<int,int>(local_40,1);
  }
  for (local_44 = 0; (long)local_44 < (long)(ulong)(uint)local_30[2];
      local_44 = il2cpp_codegen_add<int,int>(local_44,1)) {
    local_8e8 = local_30;
    local_8f0 = *(BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44 **)(local_30 + 6);
    local_8f4 = local_44;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    local_900 = *(void **)(lVar8 + 0x298);
    local_904 = local_44;
    NullCheck(local_900);
    local_908 = local_904;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::GetAt((ulong)local_900);
    NullCheck(local_8f0);
    uStack_948 = uStack_920;
    local_950 = local_928;
    uStack_938 = uStack_910;
    local_940 = local_918;
    BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44::SetAt
              (local_8f0,(long)local_8f4,&local_950);
  }
  return 1;
}


