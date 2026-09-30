/*
FUNCTION_NAME: FUN_05983a70
ENTRY_POINT: 05983a70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 195
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_12
*/


void FUN_05983a70(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined4 uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  long *plVar38;
  long *plVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  uint uVar44;
  long lVar45;
  int iVar46;
  char cVar47;
  uint uVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  char cVar53;
  uint uVar54;
  uint local_9ec;
  uint local_9dc;
  uint local_9d4;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  ulong local_980;
  ulong *puStack_978;
  long lStack_970;
  ulong uStack_968;
  undefined8 local_960;
  ulong local_950;
  ulong *puStack_948;
  long lStack_940;
  ulong uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined4 local_920;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  ulong local_8e0;
  ulong *puStack_8d8;
  long lStack_8d0;
  ulong uStack_8c8;
  undefined8 local_8c0;
  ulong local_8b0;
  ulong *puStack_8a8;
  long lStack_8a0;
  ulong uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined4 local_880;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined4 local_840;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined4 local_800;
  ulong local_7f0;
  ulong *puStack_7e8;
  long lStack_7e0;
  ulong uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined4 local_7c0;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  ulong local_750;
  ulong *puStack_748;
  long lStack_740;
  ulong uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined4 local_720;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  ulong local_6b0;
  ulong *puStack_6a8;
  long lStack_6a0;
  ulong uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined4 local_680;
  ulong local_670;
  ulong *puStack_668;
  long local_660;
  ulong uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined4 local_640;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  ulong local_5d0;
  ulong *puStack_5c8;
  long local_5c0;
  ulong uStack_5b8;
  undefined8 local_5b0;
  ulong local_5a0;
  ulong *puStack_598;
  long local_590;
  ulong uStack_588;
  undefined8 local_580;
  ulong local_570;
  ulong *puStack_568;
  long local_560;
  ulong uStack_558;
  undefined8 local_550;
  ulong local_540;
  ulong *puStack_538;
  long local_530;
  ulong uStack_528;
  undefined8 local_520;
  ulong local_510;
  ulong *puStack_508;
  long local_500;
  ulong uStack_4f8;
  undefined8 local_4f0;
  ulong local_4e0;
  ulong *puStack_4d8;
  long local_4d0;
  ulong uStack_4c8;
  undefined8 local_4c0;
  ulong local_4b0;
  ulong *puStack_4a8;
  long local_4a0;
  ulong uStack_498;
  undefined8 local_490;
  ulong local_480;
  ulong *puStack_478;
  long local_470;
  ulong uStack_468;
  undefined8 local_460;
  ulong local_450;
  ulong *puStack_448;
  long local_440;
  ulong uStack_438;
  undefined8 local_430;
  ulong local_420;
  ulong *puStack_418;
  long local_410;
  ulong uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  long local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  ulong local_3a0;
  ulong *puStack_398;
  long local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined4 local_370;
  ulong local_360;
  ulong *puStack_358;
  long local_350;
  ulong uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined4 local_324;
  ulong local_320;
  ulong *puStack_318;
  long local_310;
  ulong uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  ulong local_290;
  undefined8 uStack_288;
  long local_280;
  ulong uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  ulong local_250;
  undefined8 uStack_248;
  long local_240;
  ulong uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  ulong local_210;
  ulong *puStack_208;
  long local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long local_1d8;
  ulong local_1d0;
  ulong *puStack_1c8;
  long local_1c0;
  ulong uStack_1b8;
  undefined8 local_1b0;
  ulong local_1a0;
  ulong *puStack_198;
  long local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  ulong local_100;
  ulong *puStack_f8;
  long local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  ulong *puStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  undefined8 local_68;
  
                    /* try { // try from 05983a70 to 05a83a83 has its CatchHandler @ 05983b10 */
  local_68 = param_2;
  if ((DAT_066d38c2 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d60);
                    /* try { // try from 05983aac to 05a83abf has its CatchHandler @ 05983b0c */
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
                    /* try { // try from 05983ac0 to 05a83aeb has its CatchHandler @ 05983964 */
    FUN_02b3c81c(Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    FUN_02b3c81c(Method_System_ValueTuple<NavigationDeviceType,_EventModifiers>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
    FUN_02b3c81c(
                Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__
                );
    FUN_02b3c81c(Method_Pico_Platform_Task<SendInvitesResult>__ctor__);
    FUN_02b3c81c(Method_System_Array_Resize<object>__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_RemoveListener__);
    FUN_02b3c81c(Method_System_Array_Resize<OVRPlugin_Quatf>__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<FocusExitEventArgs>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<List<OVRSpatialAnchor>>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__)
    ;
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__);
    FUN_02b3c81c(Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<byte>__ctor__);
    FUN_02b3c81c(PTR_DAT_0631ec68);
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    FUN_02b3c81c(PTR_DAT_06320cb0);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollerVisibility>_set_defaultValue__
                );
    FUN_02b3c81c(Method_System_Array_Resize<OVRPlugin_Vector3f>__);
    FUN_02b3c81c(Method_System_Array_Reverse<byte>__);
    FUN_02b3c81c(Method_System_Array_Reverse<int>__);
    FUN_02b3c81c(PTR_DAT_063203a0);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__);
    FUN_02b3c81c(Method_System_Array_Reverse<Vector2>__);
    FUN_02b3c81c(Method_System_Array_Reverse<byte>__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__)
    ;
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                );
    FUN_02b3c81c(Method_System_Array_Reverse<object>__);
    FUN_02b3c81c(Method_System_Array_Sort<float>__);
    FUN_02b3c81c(Method_System_Array_Sort<string>__);
    DAT_066d38c2 = 1;
  }
  local_70 = 0;
  local_80 = 0;
  local_b8 = 0;
  local_c8._8_8_ = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  puStack_a8 = (ulong *)0x0;
  local_b0 = 0;
  local_c8._0_8_ = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  puStack_f8 = (ulong *)0x0;
  local_100 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  puStack_198 = (ulong *)0x0;
  local_1a0 = 0;
  local_190 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  puStack_1c8 = (ulong *)0x0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  puStack_208 = (ulong *)0x0;
  local_210 = 0;
  local_220 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_248 = (ulong *)0x0;
  local_250 = 0;
  local_260 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_288 = (ulong *)0x0;
  local_290 = 0;
  local_2a0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  local_2d4 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_308 = 0;
  local_310 = 0;
  puStack_318 = (ulong *)0x0;
  local_320 = 0;
  local_324 = 0;
  local_330 = 0;
  uStack_338 = 0;
  local_340 = 0;
  uStack_348 = 0;
  local_350 = 0;
  puStack_358 = (ulong *)0x0;
  local_360 = 0;
  local_370 = 0;
  uStack_378 = 0;
  local_380 = 0;
  uStack_388 = 0;
  local_390 = 0;
  puStack_398 = (ulong *)0x0;
  local_3a0 = 0;
  local_3b0 = 0;
  uStack_3b8 = 0;
  local_3c0 = 0;
  uStack_3c8 = 0;
  local_3d0 = 0;
  uStack_3d8 = 0;
  local_3e0 = 0;
  local_3e8 = 0;
  auVar5 = ZEXT816(0);
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05986378;
  lVar31 = FUN_0590661c(*(long *)(param_1 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__
                       );
  auVar5._8_8_ = local_c8._8_8_;
  auVar5._0_8_ = local_c8._0_8_;
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05986378;
  lVar32 = FUN_0590661c(*(long *)(param_1 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
  auVar5._8_8_ = local_c8._8_8_;
  auVar5._0_8_ = local_c8._0_8_;
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05986378;
  uVar33 = FUN_0590661c(*(long *)(param_1 + 0x138),
                        *(undefined8 *)
                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
  auVar5._8_8_ = local_c8._8_8_;
  auVar5._0_8_ = local_c8._0_8_;
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05986378;
  uVar34 = FUN_0590661c(*(long *)(param_1 + 0x138),
                        *(undefined8 *)
                         Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__
                       );
  auVar5._8_8_ = local_c8._8_8_;
  auVar5._0_8_ = local_c8._0_8_;
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05986378;
  local_70 = FUN_0590661c(*(long *)(param_1 + 0x138),
                          *(undefined8 *)
                           Method_System_ValueTuple<NavigationDeviceType,_EventModifiers>__ctor__);
  auVar5._8_8_ = local_c8._8_8_;
  auVar5._0_8_ = local_c8._0_8_;
  if (*(long *)(param_1 + 0x298) == 0) goto LAB_05986378;
  FUN_059af50c(*(long *)(param_1 + 0x298),lVar31,lVar32,uVar33,0);
  auVar6._8_8_ = local_c8._8_8_;
  auVar6._0_8_ = local_c8._0_8_;
  auVar5._8_8_ = local_c8._8_8_;
  auVar5._0_8_ = local_c8._0_8_;
  if (lVar32 == 0) goto LAB_05986378;
  puVar43 = (undefined8 *)(lVar32 + 0xf8);
  local_80 = *(undefined4 *)(lVar32 + 0x128);
  puStack_a8 = *(ulong **)(lVar32 + 0x100);
  local_b0 = *(ulong *)(lVar32 + 0xf8);
  uStack_98 = *(ulong *)(lVar32 + 0x110);
  local_a0 = *(long *)(lVar32 + 0x108);
  uStack_88 = *(undefined8 *)(lVar32 + 0x120);
  local_90 = *(undefined8 *)(lVar32 + 0x118);
  lVar49 = *(long *)(lVar32 + 0xd8);
  auVar5 = auVar6;
  if (lVar31 == 0) goto LAB_05986378;
  lVar35 = FUN_05928c6c(lVar31,0);
  lVar50 = *(long *)(param_1 + 0xe8);
  if (lVar50 != 0) {
    uVar17 = FUN_059282d8(lVar32,0);
    uVar36 = FUN_058fe174(lVar50,uVar17 & 1,0);
    auVar5._8_8_ = local_c8._8_8_;
    auVar5._0_8_ = local_c8._0_8_;
    if ((uVar36 & 1) != 0) {
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
      uVar36 = thunk_FUN_058fdbcc(*(long *)(param_1 + 0xe8),*(undefined1 *)(lVar32 + 0x1e0),0);
      if ((uVar36 & 1) != 0) {
        uStack_138 = *(undefined8 *)(lVar32 + 0x100);
        local_140 = *puVar43;
        uStack_128 = *(undefined8 *)(lVar32 + 0x110);
        local_130 = *(undefined8 *)(lVar32 + 0x108);
        uStack_118 = *(undefined8 *)(lVar32 + 0x120);
        local_120 = *(undefined8 *)(lVar32 + 0x118);
        uVar18 = *(undefined4 *)(lVar32 + 0x160);
        uVar30 = *(undefined4 *)(lVar32 + 0x164);
        local_110 = *(undefined4 *)(lVar32 + 0x128);
        if (*(int *)(*(long *)Method_Pico_Platform_Task<SendInvitesResult>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_058fe1f4(&local_140,uVar18,uVar30,0);
        auVar5._8_8_ = local_c8._8_8_;
        auVar5._0_8_ = local_c8._0_8_;
        if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
        uVar37 = FUN_058fdbb4(*(long *)(param_1 + 0xe8),0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
        }
        FUN_0596c2d0(0,uVar37,&local_140,0,0,1,*(undefined8 *)Method_System_Array_Sort<string>__,0);
        uStack_178 = *(undefined8 *)(lVar32 + 0x100);
        local_180 = *puVar43;
        uStack_168 = *(undefined8 *)(lVar32 + 0x110);
        local_170 = *(undefined8 *)(lVar32 + 0x108);
        uStack_158 = *(undefined8 *)(lVar32 + 0x120);
        local_160 = *(undefined8 *)(lVar32 + 0x118);
        local_150 = *(undefined4 *)(lVar32 + 0x128);
        uVar18 = FUN_059816e8(param_1);
        FUN_058fe238(&local_180,uVar18,*(undefined4 *)(lVar32 + 0x160),
                     *(undefined4 *)(lVar32 + 0x164),0);
        auVar5._8_8_ = local_c8._8_8_;
        auVar5._0_8_ = local_c8._0_8_;
        if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
        uVar37 = FUN_058fdbbc(*(long *)(param_1 + 0xe8),0);
        FUN_0596c2d0(0,uVar37,&local_180,0,0,1,*(undefined8 *)Method_System_Array_Reverse<object>__,
                     0);
      }
      auVar5._8_8_ = local_c8._8_8_;
      auVar5._0_8_ = local_c8._0_8_;
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
      uVar36 = FUN_058fdbcc(*(long *)(param_1 + 0xe8),*(undefined1 *)(lVar32 + 0x1e0),0);
      auVar9._8_8_ = local_c8._8_8_;
      auVar9._0_8_ = local_c8._0_8_;
      auVar8._8_8_ = local_c8._8_8_;
      auVar8._0_8_ = local_c8._0_8_;
      auVar7._8_8_ = local_c8._8_8_;
      auVar7._0_8_ = local_c8._0_8_;
      auVar5._8_8_ = local_c8._8_8_;
      auVar5._0_8_ = local_c8._0_8_;
      if ((uVar36 & 1) != 0) {
        lVar50 = *(long *)(param_1 + 0xe8);
        if ((((lVar50 == 0) || (auVar5 = auVar7, *(long *)(lVar50 + 0x90) == 0)) ||
            (lVar45 = *(long *)(*(long *)(lVar50 + 0x90) + 0x30), auVar5 = auVar8, lVar45 == 0)) ||
           (auVar5 = auVar9, *(long *)(lVar50 + 0x30) == 0)) goto LAB_05986378;
        FUN_0593812c(*(long *)(lVar50 + 0x30),lVar32,*(undefined4 *)(lVar45 + 0x18),0);
        auVar5._8_8_ = local_c8._8_8_;
        auVar5._0_8_ = local_c8._0_8_;
        if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
        FUN_05920d64(param_1,*(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x30),0);
      }
    }
  }
  puVar10 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
  if (*(int *)(lVar32 + 0x188) != 1) {
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  bVar14 = FUN_0598353c(param_1,lVar32);
  lVar50 = *(long *)puVar10;
  *(byte *)(param_1 + 0x140) = bVar14 & 1;
  if (*(int *)(lVar50 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar36 = FUN_059834ac(lVar32);
  puVar10 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollerVisibility>_set_defaultValue__
  ;
  if ((uVar36 & 1) != 0) {
    lVar31 = *(long *)
              Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollerVisibility>_set_defaultValue__
    ;
    if (*(int *)(lVar31 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar31 = *(long *)puVar10;
    }
    uVar33 = *(undefined8 *)(*(long *)(lVar31 + 0xb8) + 0x10);
    FUN_0591c4b0(param_1,uVar33,uVar33,0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x198),0);
    lVar31 = *(long *)(param_1 + 0x1c8);
    goto LAB_059840d8;
  }
  uVar17 = FUN_059282d8(lVar32,0);
  uVar36 = UnityEngine_XR_Hands_XRCommonHandGestures_PinchValueUpdatedEventArgs__TryGetPinchValue
                     (param_1);
  if (((uVar36 & 1) == 0) || (*(int *)(param_1 + 0x2d8) != 1 || (uVar17 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_06312d60 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar36 = FUN_05c3f0a0(0);
    if ((uVar36 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = FUN_0598161c(param_1);
    }
  }
  else {
    uVar19 = 1;
  }
  uVar37 = FUN_05983924(param_1);
  FUN_05986424(uVar37,lVar32);
  bVar14 = FUN_05967808(param_1,*(undefined8 *)(param_1 + 0x110),(ulong)puStack_a8 & 0xffffffff,
                        (long)&local_b8 + 4,&local_b8,0);
  bVar15 = FUN_05983764();
  bVar14 = (bVar15 ^ 1) & bVar14;
  uVar20 = FUN_059815f0(param_1);
  iVar28 = 0;
  uVar29 = 0;
  if (((bVar14 & 1) != 0) && ((uVar20 & 1) == 0)) {
    uVar29 = local_b8._4_4_;
    if (local_b8._4_4_ == 0) {
      iVar28 = 1;
    }
    else {
      if (local_b8._4_4_ != 1) {
        thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
        uVar33 = thunk_FUN_02b79644();
        FUN_04cf6044(uVar33,0);
        uVar34 = thunk_FUN_02ba3594(Method_System_Array_Sort<Camera>__);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar33,uVar34);
      }
      iVar28 = 0;
    }
  }
  uVar21 = FUN_05928964(lVar32,0);
  auVar5._8_8_ = local_c8._8_8_;
  auVar5._0_8_ = local_c8._0_8_;
  if (local_70 == 0) goto LAB_05986378;
  uVar3 = *(undefined1 *)(local_70 + 0x10);
  FUN_059282c8(lVar32,0);
  local_c8 = FUN_059864e0(param_1,uVar21 & 1,uVar3,0,iVar28);
  lVar50 = *(long *)(param_1 + 0x2a0);
  if (lVar50 != 0) {
    *(byte *)(lVar50 + 0x14) = bVar14 & 1;
    *(undefined4 *)(lVar50 + 0x10) = (undefined4)local_b8;
    *(byte *)(lVar50 + 0x17) = local_c8[2] & 1;
    FUN_059a2d6c(lVar50,uVar33,0);
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x2a0) == 0) goto LAB_05986378;
    UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController__set_twistDeltaRotationAction
              (*(long *)(param_1 + 0x2a0),0);
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x2a0) == 0) goto LAB_05986378;
    if (*(char *)(*(long *)(param_1 + 0x2a0) + 0x15) != '\0') {
      if (*(long *)(param_1 + 0x108) == 0) goto LAB_05986378;
      FUN_037a6fdc(&local_670,*(long *)(param_1 + 0x108),
                   *(undefined8 *)Method_UnityEngine_Events_UnityEvent<FocusExitEventArgs>__ctor__);
      puVar10 = Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_Invoke__;
      puStack_198 = puStack_668;
      local_1a0 = local_670;
      local_190 = local_660;
      local_670 = 0;
      puStack_668 = &local_1a0;
      do {
        uVar36 = FUN_0472eaf4(&local_1a0,*(undefined8 *)puVar10);
        if ((uVar36 & 1) == 0) goto LAB_05984314;
        if (local_190 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
      } while (*(int *)(local_190 + 0x10) - 0xe7U < 0xfffffff5);
      if (*(long *)(param_1 + 0x2a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_059a2ed0(*(long *)(param_1 + 0x2a0),0);
LAB_05984314:
      FUN_0472eaf0(&local_1a0,
                   *(undefined8 *)
                    Method_UnityEngine_Events_UnityEvent<FocusEnterEventArgs>_AddListener__);
    }
  }
  if (*(char *)(lVar32 + 0x1ac) == '\0') {
    uVar21 = 0;
  }
  else {
    uVar21 = FUN_0595e6d4(param_1 + 0x310,0);
    uVar21 = uVar21 & 1;
  }
  auVar5 = local_c8;
  if (local_70 == 0) goto LAB_05986378;
  if (*(char *)(local_70 + 0x10) == '\0') {
    uVar22 = 0;
    uVar23 = 0;
    if (uVar21 == 0) goto LAB_0598437c;
LAB_0598436c:
    cVar47 = *(char *)(lVar32 + 0x192);
  }
  else {
    uVar22 = FUN_0595e6d4(param_1 + 0x310,0);
    uVar23 = uVar22;
    if (uVar21 != 0) goto LAB_0598436c;
LAB_0598437c:
    uVar22 = uVar23;
    cVar47 = '\0';
  }
  if (*(char *)(lVar32 + 0x1ac) == '\0') {
    local_9ec = 0;
  }
  else {
    local_9ec = FUN_0595e6d4(param_1 + 0x310,0);
  }
  uVar36 = FUN_059282c8(lVar32,0);
  if ((uVar36 & 1) == 0) {
    local_9dc = FUN_059282d8(lVar32,0);
  }
  else {
    local_9dc = 1;
  }
  if ((*(char *)(lVar32 + 400) == '\0') && ((local_c8._0_8_ & 1) == 0)) {
    cVar53 = *(char *)(param_1 + 0x140);
  }
  else {
    cVar53 = '\x01';
  }
  auVar5 = local_c8;
  if (*(long *)(param_1 + 0x168) == 0) goto LAB_05986378;
  uVar23 = FUN_059c1cb4(*(long *)(param_1 + 0x168),lVar31,lVar32,uVar33,uVar34,0);
  auVar5 = local_c8;
  if (*(long *)(param_1 + 0x170) == 0) goto LAB_05986378;
  local_9d4 = FUN_059a99b0(*(long *)(param_1 + 0x170),lVar31,lVar32,uVar33,uVar34,0);
  auVar5 = local_c8;
  if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_05986378;
  bVar12 = cVar47 != '\0';
  uVar24 = FUN_0595c330(*(long *)(param_1 + 0x1c0),0);
  if (cVar53 == '\0' && !bVar12) {
    cVar53 = '\0';
    uVar25 = 0;
    auVar5 = local_c8;
  }
  else {
    iVar27 = *(int *)(param_1 + 0x2b0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar25 = FUN_05983644(lVar32);
    uVar25 = (uint)(iVar27 == 2) | uVar25 ^ 1;
    auVar5 = local_c8;
  }
  local_c8._0_8_ = auVar5._0_8_;
  uVar33 = local_c8._0_8_;
  local_c8[1] = auVar5[1];
  local_c8[2] = auVar5[2];
  uVar25 = (uint)(local_c8[2] | local_c8[1]) | uVar17 | uVar25 | local_9dc;
  if ((uVar20 & uVar25 & 1) != 0) {
    uVar25 = local_c8[2] & 1;
  }
  cVar4 = *(char *)(param_1 + 0x140);
  if (cVar53 == '\0') {
    if (((uint)(cVar47 == '\0') & (local_9dc ^ 1)) == 0) {
      if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05986378;
      bVar13 = false;
      *(undefined4 *)(*(long *)(param_1 + 0x1b0) + 0x10) = 500;
    }
    else {
      bVar13 = false;
    }
  }
  else {
    lVar31 = *(long *)(param_1 + 0x1b0);
    if (lVar31 == 0) goto LAB_05986378;
    local_c8._12_4_ = auVar5._12_4_;
    iVar27 = local_c8._12_4_ + -1;
    iVar46 = 500;
    if (*(int *)(param_1 + 0x2b0) != 1) {
      iVar46 = 300;
    }
    if (499 < iVar27) {
      iVar27 = 500;
    }
    if ((uVar33 & 1) != 0) {
      iVar46 = iVar27;
    }
    *(int *)(lVar31 + 0x10) = iVar46;
    if (iVar46 < 500) {
      *(undefined1 *)(lVar31 + 0xd8) = 0;
      bVar13 = true;
      *(undefined4 *)(param_1 + 0x2b0) = 0;
    }
    else {
      bVar13 = true;
    }
  }
  uVar44 = (uint)(cVar4 != '\0');
  uVar54 = uVar25 | uVar44;
  local_c8 = auVar5;
  uVar26 = FUN_05986760(param_1,lVar32,local_c8);
  if ((uVar20 & 1) == 0) {
    bVar15 = 0;
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x134) ^ 1;
  }
  uVar2 = uVar29;
  if ((bVar15 != 0 || *(char *)(param_1 + 0x140) != '\0') ||
      (*(char *)(lVar32 + 0x1e0) != '\x01' || ((uint)(bVar13 || bVar12) & (uVar54 ^ 1)) != 0)) {
    uVar2 = 1;
  }
  auVar5 = local_c8;
  if (*(long *)(lVar32 + 0x1a0) == 0) goto LAB_05986378;
  uVar19 = (uVar19 | (uint)uVar37 | uVar26) & (uVar17 ^ 1);
  uVar36 = FUN_057ec748(*(long *)(lVar32 + 0x1a0),0);
  uVar26 = uVar19 | uVar2;
  iVar27 = FUN_05c9729c(0);
  puVar10 = Method_Unity_Collections_NativeArray<byte>__ctor__;
  if (iVar27 == 0x15) {
    uVar48 = uVar26;
    if ((uVar36 & 1) == 0) {
      uVar48 = uVar19;
    }
    if (*(char *)(param_1 + 0x2dc) != '\0') goto LAB_0598462c;
  }
  else {
LAB_0598462c:
    uVar48 = uVar26;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>__ctor__ + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05857e14(&local_670,0);
  if ((float)local_650 == 1.0) {
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05857e14(&local_670,0);
    if (local_650._4_4_ != 1.0) goto LAB_05984690;
  }
  else {
LAB_05984690:
    uVar48 = uVar26;
  }
  if ((*(char *)(param_1 + 0x134) != '\0') || (*(char *)(param_1 + 0x140) != '\0')) {
    uVar48 = uVar2 | uVar48;
  }
  uVar36 = FUN_05c972ec(0);
  uVar19 = uVar2 | uVar48;
  puStack_f8 = puStack_a8;
  local_100 = local_b0;
  uVar26 = uVar19;
  if ((uVar36 & 1) == 0) {
    uVar26 = uVar48;
  }
  uStack_e8 = uStack_98;
  local_f0 = local_a0;
  uStack_d8 = uStack_88;
  local_e0 = local_90;
  local_d0 = local_80;
  FUN_05c72cdc(&local_100,0,0);
  FUN_05c72cf8(&local_100,0,0);
  uStack_e8 = uStack_e8 & 0xffffffff;
  auVar5 = local_c8;
  if (*(long *)(param_1 + 0x228) == 0) goto LAB_05986378;
  puStack_418 = puStack_f8;
  local_420 = local_100;
  plVar39 = (long *)(param_1 + 0x228);
  uStack_408 = uStack_e8;
  local_410 = local_f0;
  uStack_3f8 = uStack_d8;
  local_400 = local_e0;
  local_3f0 = local_d0;
  FUN_059c4ca0(*(long *)(param_1 + 0x228),&local_420,1,0);
  auVar5 = local_c8;
  if (*(int *)(lVar32 + 0xe8) == 0) {
    if (lVar49 == 0) goto LAB_05986378;
    iVar27 = thunk_FUN_05c42700(lVar49,0);
    puVar11 = PTR_DAT_0631ec68;
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cac198(&local_670,2,0);
    local_1b0 = local_650;
    puStack_1c8 = puStack_668;
    local_1d0 = local_670;
    uStack_1b8 = uStack_658;
    local_1c0 = local_660;
    auVar5 = local_c8;
    if (*(long *)(lVar32 + 0x1a0) == 0) goto LAB_05986378;
    uVar36 = FUN_057ec748(*(long *)(lVar32 + 0x1a0),0);
    if ((uVar36 & 1) != 0) {
      lVar31 = *(long *)(lVar32 + 0x1a0);
      auVar5 = local_c8;
      if (lVar31 == 0) goto LAB_05986378;
      puStack_1c8 = *(ulong **)(lVar31 + 0x48);
      local_1d0 = *(ulong *)(lVar31 + 0x40);
      uStack_1b8 = *(ulong *)(lVar31 + 0x58);
      local_1c0 = *(long *)(lVar31 + 0x50);
      local_1b0 = *(undefined8 *)(lVar31 + 0x60);
    }
    lVar31 = *(long *)(param_1 + 600);
    uVar2 = uVar19 & iVar27 != 1;
    puVar42 = (undefined8 *)(param_1 + 600);
    if (lVar31 == 0) {
      if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puStack_448 = puStack_1c8;
      local_450 = local_1d0;
      uStack_438 = uStack_1b8;
      local_440 = local_1c0;
      local_430 = local_1b0;
      uVar34 = FUN_058572fc(&local_450,0);
      *puVar42 = uVar34;
      thunk_FUN_02bb0e9c(puVar42,uVar34);
    }
    else {
      puStack_668 = *(ulong **)(lVar31 + 0x30);
      local_670 = *(ulong *)(lVar31 + 0x28);
      uStack_658 = *(ulong *)(lVar31 + 0x40);
      local_660 = *(long *)(lVar31 + 0x38);
      local_650 = *(undefined8 *)(lVar31 + 0x48);
      if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puStack_478 = puStack_668;
      local_480 = local_670;
      uStack_468 = uStack_658;
      local_470 = local_660;
      local_460 = local_650;
      puStack_4a8 = puStack_1c8;
      local_4b0 = local_1d0;
      uStack_498 = uStack_1b8;
      local_4a0 = local_1c0;
      local_490 = local_1b0;
      uVar36 = FUN_05cac718(&local_480,&local_4b0,0);
      if ((uVar36 & 1) != 0) {
        puStack_4d8 = puStack_1c8;
        local_4e0 = local_1d0;
        uStack_4c8 = uStack_1b8;
        local_4d0 = local_1c0;
        local_4c0 = local_1b0;
        FUN_058573cc(puVar42,&local_4e0,0);
      }
    }
    lVar31 = *(long *)(param_1 + 0x260);
    puVar1 = (undefined8 *)(param_1 + 0x260);
    if (lVar31 == 0) {
      if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puStack_508 = puStack_1c8;
      local_510 = local_1d0;
      uStack_4f8 = uStack_1b8;
      local_500 = local_1c0;
      local_4f0 = local_1b0;
      uVar34 = FUN_058572fc(&local_510,0);
      *puVar1 = uVar34;
      thunk_FUN_02bb0e9c(puVar1,uVar34);
    }
    else {
      puStack_668 = *(ulong **)(lVar31 + 0x30);
      local_670 = *(ulong *)(lVar31 + 0x28);
      uStack_658 = *(ulong *)(lVar31 + 0x40);
      local_660 = *(long *)(lVar31 + 0x38);
      local_650 = *(undefined8 *)(lVar31 + 0x48);
      if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puStack_538 = puStack_668;
      local_540 = local_670;
      uStack_528 = uStack_658;
      local_530 = local_660;
      local_520 = local_650;
      puStack_568 = puStack_1c8;
      local_570 = local_1d0;
      uStack_558 = uStack_1b8;
      local_560 = local_1c0;
      local_550 = local_1b0;
      uVar36 = FUN_05cac718(&local_540,&local_570,0);
      if ((uVar36 & 1) != 0) {
        puStack_598 = puStack_1c8;
        local_5a0 = local_1d0;
        uStack_588 = uStack_1b8;
        local_590 = local_1c0;
        local_580 = local_1b0;
        FUN_058573cc(puVar1,&local_5a0,0);
      }
    }
    auVar5 = local_c8;
    if (uVar2 != 0) {
      FUN_05986958(param_1,local_68,&local_b0,lVar35,lVar32);
      auVar5 = local_c8;
    }
    if (*(long *)(param_1 + 0x198) == 0) goto LAB_05986378;
    bVar15 = (byte)uVar2 ^ 1;
    *(byte *)(*(long *)(param_1 + 0x198) + 0x151) = bVar15;
    if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(param_1 + 0x1c8) + 0x151) = bVar15;
    if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_05986378;
    *(byte *)(*(long *)(param_1 + 0x1e8) + 0xc0) = bVar15;
    if ((uVar26 & 1) == 0) {
      uVar34 = *puVar42;
    }
    else {
      if (*plVar39 == 0) goto LAB_05986378;
      local_c8 = auVar5;
      uVar34 = FUN_059c48ac(*plVar39,0);
      auVar5 = local_c8;
    }
    *(undefined8 *)(param_1 + 0x230) = uVar34;
    local_c8 = auVar5;
    thunk_FUN_02bb0e9c(param_1 + 0x230);
    lVar31 = 0x248;
    if ((uVar19 & 1) == 0) {
      lVar31 = 0x260;
    }
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + lVar31);
    thunk_FUN_02bb0e9c(param_1 + 0x240);
  }
  else {
    if (*(long *)(lVar32 + 0x230) == 0) goto LAB_05986378;
    FUN_0317392c(*(long *)(lVar32 + 0x230),&local_1d8,
                 *(undefined8 *)Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__
                );
    auVar5 = local_c8;
    if (local_1d8 == 0) goto LAB_05986378;
    plVar38 = (long *)FUN_0597fbe8();
    auVar5 = local_c8;
    if (plVar38 == (long *)0x0) goto LAB_05986378;
    if (*plVar38 != *(long *)Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar38);
    }
    lVar31 = *plVar39;
    if (lVar31 != plVar38[0x45]) {
      if (lVar31 == 0) goto LAB_05986378;
      FUN_059c4858(lVar31,0);
      *plVar39 = plVar38[0x45];
      thunk_FUN_02bb0e9c(plVar39);
      lVar31 = *plVar39;
    }
    auVar5 = local_c8;
    if (lVar31 == 0) goto LAB_05986378;
    uVar34 = FUN_059c48ac(lVar31,0);
    *(undefined8 *)(param_1 + 0x230) = uVar34;
    thunk_FUN_02bb0e9c(param_1 + 0x230,uVar34);
    *(long *)(param_1 + 0x240) = plVar38[0x48];
    thunk_FUN_02bb0e9c(param_1 + 0x240);
    *(long *)(param_1 + 600) = plVar38[0x4b];
    thunk_FUN_02bb0e9c(param_1 + 600);
    *(long *)(param_1 + 0x260) = plVar38[0x4c];
    thunk_FUN_02bb0e9c(param_1 + 0x260);
    uVar19 = uVar2;
  }
  auVar5 = local_c8;
  if (*(long *)(param_1 + 0x110) == 0) goto LAB_05986378;
  if (*(int *)(*(long *)(param_1 + 0x110) + 0x18) != 0 && (uVar17 & 1) == 0) {
    if (*plVar39 == 0) goto LAB_05986378;
    uVar34 = FUN_059c48ac(*plVar39,0);
    *(undefined8 *)(param_1 + 0x118) = uVar34;
    thunk_FUN_02bb0e9c(param_1 + 0x118,uVar34);
  }
  cVar47 = *(char *)(lVar32 + 0x191);
  bVar15 = local_c8[3];
  FUN_0591c4b0(param_1,*(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x240),0);
  iVar27 = FUN_05c9729c(0);
  if (iVar27 == 2) {
    FUN_0585539c(&local_670,*(undefined8 *)(param_1 + 0x248),0);
    FUN_0585539c(&local_870,*(undefined8 *)(param_1 + 0x250),0);
    auVar5 = local_c8;
    if (lVar35 == 0) goto LAB_05986378;
    puStack_5c8 = puStack_668;
    local_5d0 = local_670;
    uStack_5b8 = uStack_658;
    local_5c0 = local_660;
    local_5b0 = local_650;
    uStack_5f8 = uStack_868;
    local_600 = local_870;
    uStack_5e8 = uStack_858;
    local_5f0 = uStack_860;
    local_5e0 = local_850;
    FUN_05cbdf2c(lVar35,&local_5d0,&local_600,0);
  }
  puVar10 = Method_System_Array_Reverse<int>__;
  lVar50 = *(long *)(param_1 + 0x108);
  lVar31 = *(long *)Method_System_Array_Reverse<int>__;
  if (*(int *)(lVar31 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar31 = *(long *)puVar10;
  }
  puVar42 = *(undefined8 **)(lVar31 + 0xb8);
  lVar45 = puVar42[1];
  if (lVar45 == 0) {
    if (*(int *)(lVar31 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar42 = *(undefined8 **)(*(long *)puVar10 + 0xb8);
    }
    uVar34 = *puVar42;
    lVar45 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_03bfe598(lVar45,uVar34,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Vector3f>__,0);
    plVar39 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 8);
    *plVar39 = lVar45;
    thunk_FUN_02bb0e9c(plVar39,lVar45);
  }
  auVar5 = local_c8;
  if (lVar50 == 0) goto LAB_05986378;
  lVar31 = FUN_037a6b94(lVar50,lVar45,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
  if ((uVar23 & 1) != 0) {
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x168),0);
  }
  if ((local_9d4 & 1) != 0) {
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x170),0);
  }
  uVar23 = (uint)(cVar47 != '\0' | bVar15) & (uVar17 ^ 1);
  if ((uVar25 & 1) == 0 && uVar44 == 0) {
    if (*(char *)(lVar32 + 400) == '\0' && !bVar12) {
      bVar15 = local_c8[0] & 1;
    }
    else {
      bVar15 = 1;
    }
  }
  else {
    bVar15 = 0;
  }
  lVar50 = *(long *)(param_1 + 0xe8);
  uVar19 = uVar19 & bVar15 != 0;
  if (lVar50 != 0) {
    uVar25 = FUN_059282d8(lVar32,0);
    uVar36 = FUN_058fe174(lVar50,uVar25 & 1,0);
    if ((uVar36 & 1) != 0) {
      auVar5 = local_c8;
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
      FUN_058fe19c(*(long *)(param_1 + 0xe8),(long)&local_1e0 + 4,0);
      auVar5 = local_c8;
      if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
      uVar54 = local_1e0._4_4_ == 1 | uVar54;
      uVar36 = FUN_058fdaf8(*(long *)(param_1 + 0xe8),0);
      if ((uVar36 & 1) == 0) {
        if ((local_9dc & 1) == 0) {
          uVar19 = 0;
          uVar23 = 0;
          uVar54 = 0;
          local_9d4 = 0;
          local_9ec = 0;
          *(undefined1 *)(param_1 + 0x140) = 0;
        }
        else {
          local_9d4 = 0;
        }
      }
      if (*(char *)(param_1 + 0x134) != '\0') {
        auVar5 = local_c8;
        if (*(long *)(param_1 + 0xe8) == 0) goto LAB_05986378;
        bVar15 = FUN_058fdc40(*(long *)(param_1 + 0xe8),0);
        *(byte *)(param_1 + 0x134) = bVar15 & 1;
      }
    }
  }
  auVar5 = local_c8;
  if (*(long *)(lVar32 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(lVar32 + 0x1d8) + 0x140) = *(undefined1 *)(param_1 + 0x140);
  if ((uVar20 & 1) == 0) {
    bVar15 = 0;
  }
  else {
    lVar50 = *(long *)(param_1 + 0x2a0);
    if (lVar50 == 0) goto LAB_05986378;
    if ((*(char *)(lVar50 + 0x15) != '\0') &&
       ((local_c8._8_4_ == 0xdc || (*(char *)(param_1 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar50,0);
    }
    bVar15 = *(byte *)(param_1 + 0x134) ^ 1;
  }
  if (bVar15 != 0 || ((uVar54 & 1) != 0 || uVar19 != 0)) {
    puStack_208 = puStack_a8;
    local_210 = local_b0;
    uStack_1f8 = uStack_98;
    local_200 = local_a0;
    uStack_1e8 = uStack_88;
    local_1f0 = local_90;
    local_1e0 = CONCAT44(local_1e0._4_4_,local_80);
    if (((uVar20 | uVar54 ^ 0xffffffff) & 1) == 0) {
      FUN_05c726ac(&local_210,0,0);
      uVar18 = FUN_059816e8(param_1);
    }
    else {
      FUN_05c726ac(&local_210,0x31,0);
      uVar18 = 0;
    }
    uStack_1f8 = CONCAT44(uVar18,(undefined4)uStack_1f8);
    puStack_208 = (ulong *)CONCAT44(puStack_208._4_4_,1);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    }
    FUN_0596c2d0(0,(long *)(param_1 + 0x268),&local_210,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
                 ,0);
    lVar50 = *(long *)(param_1 + 0x268);
    auVar5 = local_c8;
    if ((lVar50 == 0) || (lVar35 == 0)) goto LAB_05986378;
    uStack_628 = *(undefined8 *)(lVar50 + 0x30);
    local_630 = *(undefined8 *)(lVar50 + 0x28);
    uStack_618 = *(undefined8 *)(lVar50 + 0x40);
    local_620 = *(undefined8 *)(lVar50 + 0x38);
    local_610 = *(undefined8 *)(lVar50 + 0x48);
    FUN_05cbe6a0(lVar35,*(undefined8 *)(lVar50 + 0x58),&local_630,0);
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&local_68,lVar35,0);
    FUN_05cb2938(lVar35,0);
  }
  if ((uVar20 & 1) == 0) {
    if ((bVar14 & 1) != 0) {
LAB_05984fa8:
      bVar12 = false;
      plVar39 = (long *)(param_1 + 0x278);
      puVar42 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar34 = *puVar42;
      local_240 = local_a0;
      uStack_248 = puStack_a8;
      local_250 = local_b0;
      uStack_228 = uStack_88;
      local_230 = local_90;
      local_220 = local_80;
      uStack_238 = uStack_98 & 0xffffffff;
      if ((uVar29 & 1) == 0) {
        uStack_248 = (ulong *)CONCAT44((int)((ulong)puStack_a8 >> 0x20),1);
      }
      if (bVar12) {
        lVar50 = *(long *)(param_1 + 0x2a0);
        auVar5 = local_c8;
        if (lVar50 == 0) goto LAB_05986378;
        uVar18 = FUN_059a158c(lVar50,0);
        uVar18 = FUN_059a1698(lVar50,uVar18,0);
        FUN_05c726ac(&local_250,uVar18,0);
        lVar50 = *(long *)(param_1 + 0x2a0);
        puStack_668 = uStack_248;
        local_670 = local_250;
        uStack_658 = uStack_238;
        local_660 = local_240;
        uStack_648 = uStack_228;
        local_650 = local_230;
        local_640 = local_220;
        auVar5 = local_c8;
        if (lVar50 == 0) goto LAB_05986378;
        uVar18 = FUN_059a158c(lVar50,0);
        puStack_6a8 = puStack_668;
        local_6b0 = local_670;
        uStack_698 = uStack_658;
        lStack_6a0 = local_660;
        uStack_688 = uStack_648;
        local_690 = local_650;
        local_680 = local_640;
        FUN_059a327c(lVar50,&local_6b0,uVar18,0);
      }
      else {
        uVar18 = FUN_05967d34(local_b8 & 0xffffffff,0);
        FUN_05c726ac(&local_250,uVar18,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar39,&local_250,0,1,1,uVar34,0);
      }
      lVar50 = *plVar39;
      auVar5 = local_c8;
      if ((lVar50 == 0) || (lVar35 == 0)) goto LAB_05986378;
      uStack_6d8 = *(undefined8 *)(lVar50 + 0x30);
      local_6e0 = *(undefined8 *)(lVar50 + 0x28);
      uStack_6c8 = *(undefined8 *)(lVar50 + 0x40);
      uStack_6d0 = *(undefined8 *)(lVar50 + 0x38);
      local_6c0 = *(undefined8 *)(lVar50 + 0x48);
      FUN_05cbe6a0(lVar35,*(undefined8 *)(lVar50 + 0x58),&local_6e0,0);
      puVar10 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar50 = *(long *)puVar10;
      if (*(int *)(lVar50 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar50 = *(long *)puVar10;
      }
      auVar5 = local_c8;
      if (**(long **)(lVar50 + 0xb8) == 0) goto LAB_05986378;
      plVar38 = (long *)(**(long **)(lVar50 + 0xb8) + 0x10);
      *plVar38 = lVar35;
      thunk_FUN_02bb0e9c(plVar38,lVar35);
      FUN_05967c50(**(undefined8 **)(*(long *)puVar10 + 0xb8),local_b8 & 0xffffffff,0);
      if ((uVar20 & 1) != 0) {
        lVar50 = *plVar39;
        auVar5 = local_c8;
        if (lVar50 == 0) goto LAB_05986378;
        uStack_708 = *(undefined8 *)(lVar50 + 0x30);
        local_710 = *(undefined8 *)(lVar50 + 0x28);
        uStack_6f8 = *(undefined8 *)(lVar50 + 0x40);
        uStack_700 = *(undefined8 *)(lVar50 + 0x38);
        local_6f0 = *(undefined8 *)(lVar50 + 0x48);
        FUN_05cbe6a0(lVar35,*(undefined8 *)Method_System_Array_Reverse<Vector2>__,&local_710,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&local_68,lVar35,0);
      FUN_05cb2938(lVar35,0);
    }
  }
  else {
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x2a0) == 0) goto LAB_05986378;
    bVar15 = FUN_059a15bc(*(long *)(param_1 + 0x2a0),0);
    if (((bVar14 | bVar15) & 1) != 0) {
      if ((bVar15 & 1) == 0) goto LAB_05984fa8;
      lVar50 = *(long *)(param_1 + 0x2a0);
      auVar5 = local_c8;
      if (lVar50 == 0) goto LAB_05986378;
      lVar45 = *(long *)(lVar50 + 0x30);
      uVar25 = FUN_059a158c(lVar50,0);
      auVar5 = local_c8;
      if (lVar45 == 0) goto LAB_05986378;
      if (*(uint *)(lVar45 + 0x18) <= uVar25) goto LAB_05986388;
      plVar39 = (long *)(lVar45 + (long)(int)uVar25 * 8 + 0x20);
      if (*plVar39 == 0) goto LAB_05986378;
      bVar12 = true;
      puVar42 = (undefined8 *)(*plVar39 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar10 = Method_System_Array_Resize<object>__;
  if ((uVar54 & 1) != 0) {
    if ((uVar33 & 0x10000) == 0) {
      if ((uVar20 & 1) != 0) goto LAB_05985650;
      auVar5 = local_c8;
      if (*(long *)(param_1 + 0x148) == 0) goto LAB_05986378;
      puStack_7e8 = puStack_a8;
      local_7f0 = local_b0;
      uStack_7d8 = uStack_98;
      lStack_7e0 = local_a0;
      puVar42 = (undefined8 *)(param_1 + 0x148);
      uStack_7c8 = uStack_88;
      local_7d0 = local_90;
      local_7c0 = local_80;
      FUN_059b991c(*(long *)(param_1 + 0x148),&local_7f0,*(undefined8 *)(param_1 + 0x268),0);
    }
    else {
      lVar50 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar50 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar50 = *(long *)puVar10;
        if ((uVar20 & 1) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar50 = *(long *)(param_1 + 0x2a0);
        auVar5 = local_c8;
        if (lVar50 == 0) goto LAB_05986378;
        lVar45 = *(long *)(lVar50 + 0x30);
        uVar25 = FUN_059a1568(lVar50,0);
        auVar5 = local_c8;
        if (lVar45 == 0) goto LAB_05986378;
        if (*(uint *)(lVar45 + 0x18) <= uVar25) goto LAB_05986388;
        plVar39 = (long *)(lVar45 + (long)(int)uVar25 * 8 + 0x20);
        if (*plVar39 == 0) goto LAB_05986378;
        puVar42 = (undefined8 *)(*plVar39 + 0x58);
      }
      else {
        if ((uVar20 & 1) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar39 = (long *)(param_1 + 0x270);
        puVar42 = (undefined8 *)(*(long *)(lVar50 + 0xb8) + 0x18);
      }
      uVar33 = *puVar42;
      local_260 = local_80;
      uVar18 = (int)puStack_a8;
      if (*(char *)(param_1 + 0x140) == '\0') {
        uVar18 = 1;
      }
      local_280 = local_a0;
      local_290 = local_b0;
      uStack_268 = uStack_88;
      local_270 = local_90;
      uStack_278 = uStack_98 & 0xffffffff;
      uStack_288 = (ulong *)CONCAT44((int)((ulong)puStack_a8 >> 0x20),uVar18);
      if ((uVar20 & 1) == 0) {
        if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar18 = FUN_059b7ed4(0);
        FUN_05c726ac(&local_290,uVar18,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar39,&local_290,0,1,1,uVar33,0);
      }
      else {
        lVar50 = *(long *)(param_1 + 0x2a0);
        auVar5 = local_c8;
        if (lVar50 == 0) goto LAB_05986378;
        uVar18 = FUN_059a1568(lVar50,0);
        uVar18 = FUN_059a1698(lVar50,uVar18,0);
        FUN_05c726ac(&local_290,uVar18,0);
        lVar50 = *(long *)(param_1 + 0x2a0);
        puStack_668 = uStack_288;
        local_670 = local_290;
        uStack_658 = uStack_278;
        local_660 = local_280;
        uStack_648 = uStack_268;
        local_650 = local_270;
        local_640 = local_260;
        auVar5 = local_c8;
        if (lVar50 == 0) goto LAB_05986378;
        uVar18 = FUN_059a1568(lVar50,0);
        puStack_748 = puStack_668;
        local_750 = local_670;
        uStack_738 = uStack_658;
        lStack_740 = local_660;
        uStack_728 = uStack_648;
        local_730 = local_650;
        local_720 = local_640;
        FUN_059a327c(lVar50,&local_750,uVar18,0);
      }
      lVar50 = *plVar39;
      auVar5 = local_c8;
      if ((lVar50 == 0) || (lVar35 == 0)) goto LAB_05986378;
      uStack_778 = *(undefined8 *)(lVar50 + 0x30);
      local_780 = *(undefined8 *)(lVar50 + 0x28);
      uStack_768 = *(undefined8 *)(lVar50 + 0x40);
      uStack_770 = *(undefined8 *)(lVar50 + 0x38);
      local_760 = *(undefined8 *)(lVar50 + 0x48);
      FUN_05cbe6a0(lVar35,*(undefined8 *)(lVar50 + 0x58),&local_780,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar50 = *plVar39;
        auVar5 = local_c8;
        if (lVar50 == 0) goto LAB_05986378;
        uStack_7a8 = *(undefined8 *)(lVar50 + 0x30);
        local_7b0 = *(undefined8 *)(lVar50 + 0x28);
        uStack_798 = *(undefined8 *)(lVar50 + 0x40);
        uStack_7a0 = *(undefined8 *)(lVar50 + 0x38);
        local_790 = *(undefined8 *)(lVar50 + 0x48);
        FUN_05cbe6a0(lVar35,*(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x18),&local_7b0,0)
        ;
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&local_68,lVar35,0);
      FUN_05cb2938(lVar35,0);
      auVar5 = local_c8;
      if ((uVar20 & 1) == 0) {
        lVar50 = *(long *)(param_1 + 0x150);
        if (iVar28 == 0) {
          if (lVar50 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar50,*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x270),0);
        }
        else {
          if (lVar50 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar50,*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x270),
                       *(undefined8 *)(param_1 + 0x278),0);
        }
      }
      else {
        if (*(long *)(param_1 + 0x2a0) == 0) goto LAB_05986378;
        uVar25 = FUN_059a1568(*(long *)(param_1 + 0x2a0),0);
        auVar5 = local_c8;
        if (*(long *)(param_1 + 0x2a0) == 0) goto LAB_05986378;
        uVar36 = FUN_059a15bc(*(long *)(param_1 + 0x2a0),0);
        lVar45 = *(long *)(param_1 + 0x150);
        uVar33 = *(undefined8 *)(param_1 + 0x240);
        lVar50 = *(long *)(param_1 + 0x2a0);
        auVar5 = local_c8;
        if ((uVar36 & 1) == 0) {
          if (iVar28 != 0) {
            if ((lVar50 == 0) || (lVar50 = *(long *)(lVar50 + 0x30), lVar50 == 0))
            goto LAB_05986378;
            if (*(uint *)(lVar50 + 0x18) <= uVar25) goto LAB_05986388;
            if (lVar45 == 0) goto LAB_05986378;
            uVar37 = *(undefined8 *)(param_1 + 0x278);
            uVar34 = *(undefined8 *)(lVar50 + (long)(int)uVar25 * 8 + 0x20);
            goto LAB_059855b0;
          }
          if ((lVar50 == 0) || (lVar50 = *(long *)(lVar50 + 0x30), lVar50 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar50 + 0x18) <= uVar25) goto LAB_05986388;
          if (lVar45 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar45,uVar33,*(undefined8 *)(lVar50 + (long)(int)uVar25 * 8 + 0x20),0);
        }
        else {
          if ((lVar50 == 0) || (lVar51 = *(long *)(lVar50 + 0x30), lVar51 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar51 + 0x18) <= uVar25) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar34 = *(undefined8 *)(lVar51 + (long)(int)uVar25 * 8 + 0x20);
          uVar25 = FUN_059a158c(lVar50,0);
          if (*(uint *)(lVar51 + 0x18) <= uVar25) goto LAB_05986388;
          auVar5 = local_c8;
          if (lVar45 == 0) goto LAB_05986378;
          uVar37 = *(undefined8 *)(lVar51 + (long)(int)uVar25 * 8 + 0x20);
LAB_059855b0:
          FUN_059b7f54(lVar45,uVar33,uVar34,uVar37,0);
        }
        puVar10 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
        if (0xffffffe0 < local_c8._8_4_ - 0xfb) {
          lVar50 = *(long *)(param_1 + 0x150);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ +
                      0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          auVar5 = local_c8;
          if (lVar50 == 0) goto LAB_05986378;
          puVar42 = (undefined8 *)(lVar50 + 0xb8);
          *puVar42 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
          thunk_FUN_02bb0e9c(puVar42);
        }
      }
      puVar42 = (undefined8 *)(param_1 + 0x150);
    }
    FUN_05920d64(param_1,*puVar42,0);
  }
LAB_05985650:
  if (*(char *)(param_1 + 0x140) != '\0') {
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x158) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x240),
                 *(undefined8 *)(param_1 + 0x268),0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x158),0);
  }
  if ((local_9ec & 1) != 0) {
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x310) == 0) goto LAB_05986378;
    FUN_059b24c4(*(long *)(param_1 + 0x310),&local_70,&local_2d0,&local_2d4,0);
    uVar18 = local_2d4;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,param_1 + 0x330,&local_2d0,uVar18,1,0,
                 *(undefined8 *)Method_System_Array_Sort<float>__,0);
    local_2e0 = *(undefined8 *)(param_1 + 0x330);
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x310) == 0) goto LAB_05986378;
    FUN_059b2460(*(long *)(param_1 + 0x310),&local_2e0,0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x310),0);
  }
  auVar5 = local_c8;
  if (*(long *)(lVar32 + 0x1a0) == 0) goto LAB_05986378;
  uVar36 = FUN_057f0fbc(*(long *)(lVar32 + 0x1a0),0);
  if ((uVar36 & 1) != 0) {
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1e8),0);
  }
  cVar47 = *(char *)(lVar32 + 0x1e0);
  auVar5 = local_c8;
  if ((uVar20 & 1) == 0) {
    uVar18 = 2;
    if ((uVar23 & 1) == 0) {
      uVar18 = 0;
    }
    uVar30 = 0;
    if (1 < (int)puStack_a8) {
      uVar30 = uVar18;
    }
    iVar28 = 0;
    if ((uVar19 == 0 && (uVar23 & 1) == 0) && cVar47 != '\0') {
      iVar28 = 3;
    }
    if (*(long *)(lVar32 + 0x1a0) == 0) goto LAB_05986378;
    uVar36 = FUN_057ec748(*(long *)(lVar32 + 0x1a0),0);
    if ((uVar36 & 1) != 0) {
      auVar5 = local_c8;
      if (*(long *)(lVar32 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(lVar32 + 0x1a0) + 0x28) != '\0') {
        iVar28 = 0;
      }
    }
    uVar25 = 0;
    if (1 < (int)puStack_a8) {
      uVar25 = uVar19;
    }
    if (uVar25 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar36 = FUN_0596ade4(0);
      if ((uVar36 & 1) != 0) {
        auVar5 = local_c8;
        if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(param_1 + 0x1b0) + 0x10) == 500 && (uVar23 & 1) == 0) {
          if (iVar28 == 0) {
            iVar28 = 2;
          }
          else if (iVar28 == 3) {
            iVar28 = 1;
          }
        }
      }
    }
    auVar5 = local_c8;
    if (uVar29 == 0) {
      lVar50 = *(long *)(param_1 + 0x198);
      if (lVar50 == 0) goto LAB_05986378;
    }
    else {
      lVar50 = *(long *)(param_1 + 0x1a0);
      if (lVar50 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar50,*(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x278),
                   *(undefined8 *)(param_1 + 0x240),0);
    }
    FUN_05914c54(lVar50,uVar30,0,0);
    FUN_05914d8c(lVar50,iVar28,0);
    puVar10 = Method_System_Array_Reverse<int>__;
    lVar51 = *(long *)(param_1 + 0x108);
    lVar45 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar45 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar45 = *(long *)puVar10;
    }
    puVar43 = *(undefined8 **)(lVar45 + 0xb8);
    lVar52 = puVar43[2];
    if (lVar52 == 0) {
      if (*(int *)(lVar45 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar43 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar33 = *puVar43;
      lVar52 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar52,uVar33,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar39 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar39 = lVar52;
      thunk_FUN_02bb0e9c(plVar39,lVar52);
    }
    auVar5 = local_c8;
    if (lVar51 == 0) goto LAB_05986378;
    lVar45 = FUN_037a6b94(lVar51,lVar52,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar45 == 0) && (*(int *)(lVar32 + 0xe8) == 0)) {
      auVar5 = local_c8;
      if (lVar49 == 0) goto LAB_05986378;
      iVar28 = FUN_05c407c0(lVar49,0);
      if (iVar28 == 4) goto LAB_059859c0;
      uVar18 = 1;
    }
    else {
LAB_059859c0:
      uVar18 = 0;
    }
    uVar36 = FUN_05c97ba0(0);
    if ((uVar36 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar50,uVar18,0);
    }
    FUN_05920d64(param_1,lVar50,0);
  }
  else {
    lVar50 = *(long *)(param_1 + 0x2a0);
    if (lVar50 == 0) goto LAB_05986378;
    if ((*(char *)(lVar50 + 0x15) != '\0') &&
       ((local_c8._8_4_ == 0xdc || (*(char *)(param_1 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar50,0);
    }
    uStack_828 = *(undefined8 *)(lVar32 + 0x100);
    local_830 = *puVar43;
    uStack_818 = *(undefined8 *)(lVar32 + 0x110);
    uStack_820 = *(undefined8 *)(lVar32 + 0x108);
    uStack_808 = *(undefined8 *)(lVar32 + 0x120);
    local_810 = *(undefined8 *)(lVar32 + 0x118);
    local_800 = *(undefined4 *)(lVar32 + 0x128);
    FUN_05986f8c(param_1,&local_830,uVar54 & 1,local_c8[2] & 1,iVar28,0,local_9d4 & 1);
  }
  auVar5 = local_c8;
  if (lVar49 == 0) goto LAB_05986378;
  iVar28 = FUN_05c407c0(lVar49,0);
  if ((iVar28 == 1) && (*(int *)(lVar32 + 0xe8) != 1)) {
    uVar33 = FUN_05c580a0(0);
    puVar10 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar36 = FUN_05c8c45c(uVar33,0,0);
    if ((uVar36 & 1) == 0) {
      uVar36 = FUN_0317392c(lVar49,&local_2e8,
                            *(undefined8 *)
                             Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                           );
      if ((uVar36 & 1) != 0) {
        auVar5 = local_c8;
        if (local_2e8 == 0) goto LAB_05986378;
        uVar33 = FUN_05c5f86c(local_2e8,0);
        if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar10);
        }
        uVar36 = FUN_05c8c45c(uVar33,0,0);
        if ((uVar36 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1a8),0);
    }
  }
  if (uVar19 == 0) {
    if (*(int *)(lVar32 + 0xe8) == 0 && (uVar54 & 1) == 0) {
      uVar36 = FUN_05c977c4(0);
      uVar33 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar36 & 1) == 0) {
        uVar34 = FUN_05c69330(0);
      }
      else {
        uVar34 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar33,uVar34,0);
    }
  }
  else if ((((uVar20 & 1) == 0) || (*(char *)(param_1 + 0x134) == '\0')) ||
          ((local_c8._0_8_ & 1) != 0)) {
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x240),
                 *(undefined8 *)(param_1 + 0x268),0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1b0),0);
  }
  if ((uVar23 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar49 = FUN_05993404(0);
    auVar5 = local_c8;
    if (lVar49 == 0) goto LAB_05986378;
    uVar18 = *(undefined4 *)(lVar49 + 0x48);
    puStack_318 = puStack_a8;
    local_320 = local_b0;
    uStack_308 = uStack_98;
    local_310 = local_a0;
    uStack_2f8 = uStack_88;
    local_300 = local_90;
    local_2f0 = local_80;
    FUN_059b478c(uVar18,&local_320,&local_324,0);
    uVar30 = local_324;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,param_1 + 0x280,&local_320,uVar30,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
                 ,0);
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_05986378;
    FUN_059b482c(*(long *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x230),
                 *(undefined8 *)(param_1 + 0x280),uVar18,0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1b8),0);
  }
  if ((local_c8._0_8_ & 0x100000000) != 0) {
    puStack_358 = puStack_a8;
    local_360 = local_b0;
    uStack_348 = uStack_98;
    local_350 = local_a0;
    uStack_338 = uStack_88;
    local_340 = local_90;
    local_330 = local_80;
    FUN_05c726ac(&local_360,0x2e,0);
    uStack_348 = uStack_348 & 0xffffffff;
    puStack_358 = (ulong *)CONCAT44(puStack_358._4_4_,1);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,param_1 + 0x288,&local_360,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                 ,0);
    puStack_398 = puStack_a8;
    local_3a0 = local_b0;
    uStack_388 = uStack_98;
    local_390 = local_a0;
    uStack_378 = uStack_88;
    local_380 = local_90;
    local_370 = local_80;
    FUN_05c726ac(&local_3a0,0,0);
    uStack_388 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_388);
    puStack_398 = (ulong *)CONCAT44(puStack_398._4_4_,1);
    FUN_0596c2d0(0,param_1 + 0x290,&local_3a0,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
                 ,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0593b4dc(lVar35,lVar32,0);
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x160) == 0) goto LAB_05986378;
    FUN_05939f18(*(long *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x288),
                 *(undefined8 *)(param_1 + 0x290),0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x160),0);
  }
  if ((uVar24 & 1) != 0) {
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1c0),0);
  }
  uVar29 = 0;
  if (cVar47 != '\0') {
    uVar29 = 3;
  }
  uVar20 = (uint)(cVar47 == '\0');
  if ((int)puStack_a8 < 2) {
    uVar20 = 1;
  }
  if (uVar19 != 0) {
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(param_1 + 0x1b0) + 0x10)) && (uVar29 = 0, 1 < (int)puStack_a8)) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar29 = FUN_0596ade4(0);
      uVar29 = uVar29 & 1;
    }
  }
  auVar5 = local_c8;
  if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(param_1 + 0x1c8),((uVar20 | uVar17) ^ 0xffffffff) & 1,0,0);
  auVar5 = local_c8;
  if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(param_1 + 0x1c8),uVar29,0);
  FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1c8),0);
  FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1d0),0);
  FUN_059870e4(param_1,lVar32,&local_b0);
  uVar36 = FUN_059285dc(lVar32,0);
  uVar40 = FUN_059283a4(lVar32,0);
  if (((uVar36 & 1) != 0) && ((uVar40 & 1) != 0)) {
    lVar49 = *(long *)(param_1 + 0x200);
    uVar18 = FUN_059816e8(param_1);
    auVar5 = local_c8;
    if (lVar49 == 0) goto LAB_05986378;
    FUN_05934854(lVar49,lVar32,uVar18,0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x200),0);
  }
  bVar12 = cVar47 == '\0';
  bVar13 = *(long *)(lVar32 + 0x1b0) != 0;
  if (bVar12 || ((uVar22 ^ 0xffffffff) & 1) != 0) {
LAB_05985f38:
    bVar14 = 0;
joined_r0x05985f3c:
    if (!bVar13 || bVar12) goto LAB_05985f40;
LAB_05985f60:
    bVar15 = 0;
  }
  else {
    if ((*(int *)(lVar32 + 0x1cc) != 1) &&
       ((*(int *)(lVar32 + 0x170) != 1 || (*(int *)(lVar32 + 0x174) == 0)))) {
      uVar41 = FUN_05928964(lVar32,0);
      if (((uVar41 & 1) == 0) || (*(float *)(lVar32 + 0x224) <= 0.0)) goto LAB_05985f38;
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      bVar14 = FUN_058fdadc(*(long *)(param_1 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar14 = 1;
    if (bVar13 && !bVar12) goto LAB_05985f60;
LAB_05985f40:
    bVar15 = lVar31 == 0 & (bVar14 ^ 1);
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    bVar16 = 1;
  }
  else {
    bVar16 = FUN_058fdbcc(*(long *)(param_1 + 0xe8),*(undefined1 *)(lVar32 + 0x1e0),0);
    bVar16 = bVar16 ^ 1;
  }
  uVar41 = local_b0;
  plVar39 = (long *)(param_1 + 0x230);
  plVar38 = (long *)(param_1 + 0x240);
  if (uVar21 == 0) {
    if (cVar47 == '\0') {
      return;
    }
    FUN_05983048(param_1,lVar32);
  }
  else {
    uVar18 = local_b0._4_4_;
    puStack_668 = puStack_a8;
    local_670 = local_b0;
    uStack_658 = uStack_98;
    local_660 = local_a0;
    uStack_648 = uStack_88;
    local_650 = local_90;
    local_640 = local_80;
    uVar30 = FUN_05c7228c(&local_b0,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__
                        );
    }
    local_880 = local_640;
    puStack_8a8 = puStack_668;
    local_8b0 = local_670;
    uStack_898 = uStack_658;
    lStack_8a0 = local_660;
    uStack_888 = uStack_648;
    local_890 = local_650;
    FUN_0593f348(&local_870,&local_8b0,uVar41 & 0xffffffff,uVar18,uVar30,0,0);
    uStack_3d8 = uStack_868;
    local_3e0 = local_870;
    uStack_3c8 = uStack_858;
    local_3d0 = uStack_860;
    uStack_3b8 = uStack_848;
    local_3c0 = local_850;
    local_3b0 = local_840;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,param_1 + 0x328,&local_3e0,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar47 == '\0') {
      local_2e0 = *(undefined8 *)(param_1 + 0x330);
      auVar5 = local_c8;
      if (*(long *)(param_1 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(param_1 + 0x318),&local_b0,plVar39,0,plVar38,&local_2e0,param_1 + 0x288
                   ,0,0,0);
      lVar31 = *(long *)(param_1 + 0x318);
      goto LAB_059840d8;
    }
    FUN_05983048(param_1,lVar32);
    local_2e0 = *(undefined8 *)(param_1 + 0x330);
    auVar5 = local_c8;
    if (*(long *)(param_1 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(param_1 + 0x318),&local_b0,plVar39,bVar15,plVar38,&local_2e0,
                 param_1 + 0x288,bVar14 & 1,bVar15 & bVar16,0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x318),0);
  }
  local_3e8 = *plVar39;
  if ((bVar14 & 1) != 0) {
    auVar5 = local_c8;
    if (*(long *)(param_1 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(param_1 + 800),&local_3e8,1,bVar16 & 1,0);
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 800),0);
  }
  if (*(long *)(lVar32 + 0x1b0) != 0) {
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1e0),0);
  }
  if (((bVar14 & 1) == 0) && (((uVar21 == 0 || (lVar31 != 0)) || (bVar13 && !bVar12)))) {
    lVar31 = *plVar39;
    auVar5 = local_c8;
    if (lVar31 == 0) goto LAB_05986378;
    puStack_668 = *(ulong **)(lVar31 + 0x30);
    local_670 = *(ulong *)(lVar31 + 0x28);
    uStack_658 = *(ulong *)(lVar31 + 0x40);
    local_660 = *(long *)(lVar31 + 0x38);
    local_650 = *(undefined8 *)(lVar31 + 0x48);
    lVar31 = *(long *)(param_1 + 600);
    if (lVar31 == 0) goto LAB_05986378;
    uStack_868 = *(undefined8 *)(lVar31 + 0x30);
    local_870 = *(undefined8 *)(lVar31 + 0x28);
    uStack_858 = *(undefined8 *)(lVar31 + 0x40);
    uStack_860 = *(undefined8 *)(lVar31 + 0x38);
    local_850 = *(undefined8 *)(lVar31 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puStack_8d8 = puStack_668;
    local_8e0 = local_670;
    uStack_8c8 = uStack_658;
    lStack_8d0 = local_660;
    local_8c0 = local_650;
    uStack_908 = uStack_868;
    local_910 = local_870;
    uStack_8f8 = uStack_858;
    uStack_900 = uStack_860;
    local_8f0 = local_850;
    uVar41 = FUN_05cac694(&local_8e0,&local_910,0);
    if ((uVar41 & 1) == 0) {
      auVar5 = local_c8;
      if (*(long *)(param_1 + 0x1d8) == 0) goto LAB_05986378;
      puStack_948 = puStack_a8;
      local_950 = local_b0;
      uStack_938 = uStack_98;
      lStack_940 = local_a0;
      uStack_928 = uStack_88;
      local_930 = local_90;
      local_920 = local_80;
      FUN_059bdd44(*(long *)(param_1 + 0x1d8),&local_950,local_3e8,0);
      FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x1d8),0);
    }
  }
  if (((uVar36 & 1) != 0) && ((uVar40 & 1) == 0 && *(char *)(lVar32 + 0x238) != '\0')) {
    FUN_05920d64(param_1,*(undefined8 *)(param_1 + 0x208),0);
  }
  auVar5 = local_c8;
  if (*(long *)(lVar32 + 0x1a0) != 0) {
    uVar36 = FUN_057ec748(*(long *)(lVar32 + 0x1a0),0);
    if ((uVar36 & 1) == 0) {
      return;
    }
    lVar31 = *plVar38;
    auVar5 = local_c8;
    if (lVar31 != 0) {
      puStack_668 = *(ulong **)(lVar31 + 0x30);
      local_670 = *(ulong *)(lVar31 + 0x28);
      uStack_658 = *(ulong *)(lVar31 + 0x40);
      local_660 = *(long *)(lVar31 + 0x38);
      local_650 = *(undefined8 *)(lVar31 + 0x48);
      lVar31 = *(long *)(lVar32 + 0x1a0);
      if (lVar31 != 0) {
        uStack_868 = *(undefined8 *)(lVar31 + 0x48);
        local_870 = *(undefined8 *)(lVar31 + 0x40);
        uStack_858 = *(undefined8 *)(lVar31 + 0x58);
        uStack_860 = *(undefined8 *)(lVar31 + 0x50);
        local_850 = *(undefined8 *)(lVar31 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        puStack_978 = puStack_668;
        local_980 = local_670;
        uStack_968 = uStack_658;
        lStack_970 = local_660;
        local_960 = local_650;
        uStack_9a8 = uStack_868;
        local_9b0 = local_870;
        uStack_998 = uStack_858;
        uStack_9a0 = uStack_860;
        local_990 = local_850;
        uVar36 = FUN_05cac694(&local_980,&local_9b0,0);
        if ((uVar36 & 1) != 0) {
          return;
        }
        auVar5 = local_c8;
        if (*(long *)(lVar32 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(lVar32 + 0x1a0) + 0x28) == '\0') {
            return;
          }
          if (*(long *)(param_1 + 0x1f0) != 0) {
            FUN_059b5afc(*(long *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x240),
                         *(undefined8 *)(param_1 + 0x260),0);
            lVar31 = *(long *)(param_1 + 0x1f0);
            auVar5 = local_c8;
            if (lVar31 != 0) {
              *(undefined1 *)(lVar31 + 0xcd) = 1;
LAB_059840d8:
              FUN_05920d64(param_1,lVar31,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_05986378:
  local_c8 = auVar5;
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


