/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$add_unregistered
ENTRY_POINT: 06037eb8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__add_unregistered
               (long *param_1)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined1 *puVar38;
  undefined1 uVar39;
  char cVar40;
  float *pfVar41;
  undefined4 *puVar42;
  long *plVar43;
  float *pfVar44;
  undefined8 *puVar45;
  code *pcVar46;
  uint uVar47;
  float *pfVar48;
  undefined8 *puVar49;
  long *plVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  int *piVar54;
  long *plVar55;
  ulong uVar56;
  uint uVar57;
  long *plVar58;
  undefined2 uVar59;
  uint uVar60;
  ushort uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  float fVar77;
  undefined1 auVar76 [16];
  float fVar78;
  undefined8 uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  uint uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  int iStack_16e0;
  uint uStack_16b4;
  float fStack_16a8;
  int iStack_16a0;
  float fStack_169c;
  float fStack_1698;
  float fStack_1694;
  undefined4 uStack_167c;
  float fStack_166c;
  float fStack_1668;
  undefined4 uStack_1654;
  float fStack_1644;
  float fStack_1640;
  float fStack_1624;
  float fStack_1620;
  float fStack_1618;
  int iStack_1614;
  ulong uStack_1610;
  float fStack_15fc;
  float fStack_15ec;
  float fStack_15e0;
  float fStack_15dc;
  float fStack_15cc;
  float fStack_15c8;
  float fStack_15c4;
  float fStack_15c0;
  float fStack_1594;
  float fStack_1584;
  float fStack_1580;
  float fStack_157c;
  float fStack_1570;
  float fStack_1550;
  undefined8 uStack_1538;
  float fStack_1530;
  float fStack_152c;
  float fStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined4 uStack_1510;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined4 uStack_14f0;
  undefined4 uStack_14ec;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined4 uStack_1130;
  undefined1 auStack_1128 [952];
  undefined1 auStack_d70 [952];
  undefined1 auStack_9b8 [952];
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined4 uStack_560;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined8 uStack_52c;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_494;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  char acStack_3cc [4];
  float fStack_3c8;
  uint uStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  
  puVar13 = PTR_DAT_06a2ed80;
  if ((bRam0000000006e94e1a & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo);
    FUN_02e3ca1c(
                System_Collections_Generic_List<ValueTuple<Type,_NetworkInputWeavedAttribute>>_TypeInfo
                );
    FUN_02e3ca1c(
                System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                );
    FUN_02e3ca1c(System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ef88);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<byte[]>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<object[]>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<Type[]>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<uint[]>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AchievementDefinition>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AchievementProgress>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<Action>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AdvancedUpscalers>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AggregateException>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<ArenaPlayerData>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<ArenaSpawnPoint>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AssetDetails>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AstNode>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AsyncOperationHandle>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<Attribute>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AudioAffordanceThemeData>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AudioData>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<AudioListener>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a3c3a0);
    FUN_02e3ca1c(System_Collections_Generic_List<AvatarPose>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<BaseInputModule>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<BaseInvokableCall>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<BaseRaycaster>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<BaseVideoBoardScreen>_TypeInfo);
    FUN_02e3ca1c(System_Collections_Generic_List<BigInteger>_TypeInfo);
    bRam0000000006e94e1a = 1;
  }
  fStack_3c8 = 0.0;
  uStack_3c4 = 0;
  acStack_3cc[0] = '\0';
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  fStack_3e8 = 0.0;
  fStack_3e4 = 0.0;
  uStack_3f0 = 0;
  fStack_3ec = 0.0;
  uStack_3f8 = 0;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_470 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_494 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_510 = 0;
  uStack_52c = 0;
  uStack_530 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_534 = 0;
  uStack_540 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_560 = 0;
  uStack_580 = 0;
  uStack_588 = 0;
  uStack_578 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  uStack_590 = 0;
  uStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_5a8 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5f8 = 0;
  uStack_600 = 0;
  memset(auStack_9b8,0,0x3b8);
  memset(auStack_d70,0,0x3b8);
  memset(auStack_1128,0,0x3b8);
  lVar53 = param_1[0x1f];
  uStack_1138 = 0;
  uStack_1140 = 0;
  uStack_1130 = 0;
  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  puVar14 = PTR_DAT_06a2ed98;
  uVar30 = FUN_062696b0(lVar53,0,0);
  if ((uVar30 & 1) != 0) {
LAB_060383e4:
    puVar13 = System_Collections_Generic_List<AvatarPose>_TypeInfo;
    uVar20 = FUN_0626d24c(param_1,0);
    uStack_3f8 = CONCAT44(uVar20,(uint)uStack_3f8);
    uVar37 = FUN_05603500((long)&uStack_3f8 + 4,0);
    uVar37 = FUN_05482ce0(*(undefined8 *)puVar13,uVar37,0);
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*(long *)puVar14);
    }
    FUN_06222224(uVar37,0);
    *(undefined1 *)((long)param_1 + 0x274) = 1;
    return;
  }
  if (param_1[0x1f] == 0) goto thunk_FUN_02e3ccc4;
  lVar53 = FUN_0606364c(param_1[0x1f],0);
  if (lVar53 == 0) goto LAB_060383e4;
  if (param_1[0x75] != 0) {
    FUN_060b0d7c(param_1[0x75],0);
  }
  lVar53 = param_1[0x92];
  if ((lVar53 == 0) || (*(long *)(lVar53 + 0x18) == 0)) {
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters:
    (**(code **)(*param_1 + 0x958))(param_1,1,*(undefined8 *)(*param_1 + 0x960));
    puVar13 = PTR_DAT_06a3c3a0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)((long)param_1 + 0x42c) = 0;
    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_060594e8(param_1,0);
    *(undefined1 *)((long)param_1 + 0x274) = 1;
    return;
  }
  if ((int)*(long *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
  if (*(int *)(lVar53 + 0x24) == 0)
  goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters;
  param_1[0x20] = param_1[0x1f];
  thunk_FUN_02ee2be8(param_1 + 0x20);
  param_1[0x23] = param_1[0x22];
  thunk_FUN_02ee2be8(param_1 + 0x23);
  plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  uVar20 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(*plVar43 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(*plVar43,0);
    uVar20 = (undefined4)param_1[0x24];
  }
  uStack_14d0 = 0;
  uStack_14e8 = 0;
  uStack_14f0 = 0;
  uStack_14ec = 0;
  uStack_14d8 = 0;
  uStack_14e0 = 0;
  uStack_14f8 = 0;
  uStack_1500 = 0;
  FUN_06048c08(&uStack_1500,uVar20,param_1[0x20],0,param_1[0x23],0);
  uStack_3b0 = CONCAT44(uStack_14ec,uStack_14f0);
  uStack_398 = uStack_14d8;
  uStack_3a0 = uStack_14e0;
  uStack_3b8 = uStack_14f8;
  uStack_3c0 = uStack_1500;
  uStack_3a8 = uStack_14e8;
  uStack_390 = uStack_14d0;
  FUN_046b7178(*(long *)(*plVar43 + 0xb8) + 0x10,&uStack_3c0,
               *(undefined8 *)System_Collections_Generic_List<AstNode>_TypeInfo);
  plVar55 = param_1 + 0xd7;
  param_1[0xd7] = param_1[0x39];
  thunk_FUN_02ee2be8();
  lVar53 = param_1[0x7f];
  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar30 = FUN_06267b6c(lVar53,0,0);
  if ((uVar30 & 1) != 0) {
    if (param_1[0x7f] == 0) goto thunk_FUN_02e3ccc4;
    FUN_060aa914(param_1[0x7f],0);
  }
  fVar83 = DAT_01317bd0;
  if (*(char *)((long)param_1 + 0x346) != '\0') {
    fVar83 = 1.0;
  }
  if (param_1[0x1f] == 0) {
thunk_FUN_02e3ccc4:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar53 = param_1[0x95];
  fVar97 = *(float *)((long)param_1 + 0x20c);
  fVar62 = (float)FUN_0630f888(param_1[0x1f] + 0x28,0);
  if (param_1[0x1f] == 0) goto thunk_FUN_02e3ccc4;
  fVar63 = (float)FUN_0630f890(param_1[0x1f] + 0x28,0);
  puVar15 = System_Collections_Generic_List<AudioAffordanceThemeData>_TypeInfo;
  fVar87 = *(float *)((long)param_1 + 0x20c);
  *(undefined4 *)((long)param_1 + 0x444) = 0x3f800000;
  uVar37 = *(undefined8 *)puVar15;
  *(float *)(param_1 + 0x42) = fVar87;
  FUN_046b7f24(param_1 + 0x43,uVar37);
  uStack_3c4 = 0;
  *(uint *)((long)param_1 + 0x284) = *(uint *)(param_1 + 0x50);
  puVar13 = System_Collections_Generic_List<Attribute>_TypeInfo;
  if ((*(uint *)(param_1 + 0x50) & 1) == 0) {
    uVar20 = (undefined4)param_1[0x47];
  }
  else {
    uVar20 = 700;
  }
  *(undefined4 *)((long)param_1 + 0x23c) = uVar20;
  FUN_046b6b48(param_1 + 0x48,uVar20,*(undefined8 *)puVar13);
  FUN_060b24fc(param_1 + 0x51,0);
  uVar37 = *(undefined8 *)System_Collections_Generic_List<ArenaSpawnPoint>_TypeInfo;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((long)param_1 + 0x294);
  FUN_046b6b48(param_1 + 0x55,*(undefined4 *)((long)param_1 + 0x294),uVar37);
  puVar13 = System_Collections_Generic_List<Action>_TypeInfo;
  *(undefined4 *)((long)param_1 + 0x63c) = 0;
  FUN_046b7f18(param_1 + 200,*(undefined8 *)puVar13);
  if (DAT_06e84e3e == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e84e3e = '\x01';
  }
  pfVar41 = *(float **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
  fStack_1694 = *pfVar41;
  fStack_169c = pfVar41[1];
  fStack_1698 = pfVar41[2];
  uVar20 = FUN_031c4f40((int)param_1[0x29],*(undefined4 *)((long)param_1 + 0x14c),(int)param_1[0x2a]
                        ,*(undefined4 *)((long)param_1 + 0x154),0);
  puVar13 = System_Collections_Generic_List<AssetDetails>_TypeInfo;
  *(undefined4 *)((long)param_1 + 0x144) = uVar20;
  *(undefined4 *)(param_1 + 0xa1) = uVar20;
  uVar37 = *(undefined8 *)puVar13;
  *(undefined4 *)(param_1 + 0x2b) = uVar20;
  *(undefined4 *)((long)param_1 + 0x15c) = uVar20;
  FUN_046b58ac(param_1 + 0xa2,uVar20,uVar37);
  FUN_046b58ac(param_1 + 0xa6,(int)param_1[0xa1],*(undefined8 *)puVar13);
  FUN_046b58ac(param_1 + 0xaa,(int)param_1[0xa1],*(undefined8 *)puVar13);
  lVar32 = param_1[0xa1];
  if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  if (cRam0000000006e94e1b == '\0') {
    FUN_02e3ca1c(System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
    cRam0000000006e94e1b = '\x01';
  }
  puVar13 = System_Collections_Generic_List<Matrix4x4[]>_TypeInfo;
  lVar31 = *(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo;
  if (*(int *)(lVar31 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar31 = *(long *)puVar13;
  }
  puVar42 = *(undefined4 **)(lVar31 + 0xb8);
  uStack_1500 = 0;
  uStack_14f8 = 0;
  uStack_14f0 = 0;
  FUN_0605b508(*puVar42,puVar42[1],puVar42[2],puVar42[3],&uStack_1500,(int)lVar32,0);
  uStack_3b8 = uStack_14f8;
  uStack_3c0 = uStack_1500;
  uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uStack_14f0);
  FUN_046b5ea4(param_1 + 0xae,&uStack_3c0,
               *(undefined8 *)System_Collections_Generic_List<ArenaPlayerData>_TypeInfo);
  param_1[0xb4] = 0;
  thunk_FUN_02ee2be8(param_1 + 0xb4,0);
  FUN_046b7930(param_1 + 0xb5,0,
               *(undefined8 *)System_Collections_Generic_List<AsyncOperationHandle>_TypeInfo);
  if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
  bVar18 = *(byte *)(param_1[0x20] + 0x1b0);
  uVar37 = *(undefined8 *)System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo;
  *(uint *)(param_1 + 0xc2) = (uint)bVar18;
  FUN_046b658c(param_1 + 0xbe,bVar18,uVar37);
  FUN_046b6580(param_1 + 0xc3,
               *(undefined8 *)System_Collections_Generic_List<AggregateException>_TypeInfo);
  if (DAT_06e862d4 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e862d4 = '\x01';
  }
  cVar40 = DAT_06e84e41;
  uVar20 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 0x14);
  *(undefined8 *)((long)param_1 + 0x484) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 0xc);
  *(undefined4 *)((long)param_1 + 0x48c) = uVar20;
  if (cVar40 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2f028);
    DAT_06e84e41 = '\x01';
  }
  auVar80 = **(undefined1 (**) [16])(*(long *)PTR_DAT_06a2f028 + 0xb8);
  *(undefined4 *)((long)param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xc6fffe00;
  *(long *)((long)param_1 + 0x47c) = auVar80._8_8_;
  *(long *)((long)param_1 + 0x474) = auVar80._0_8_;
  if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar64 = (float)FUN_0630f8b0(param_1[0x20] + 0x28,0);
  if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar65 = (float)FUN_0630f8b8(param_1[0x20] + 0x28,0);
  if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar66 = (float)FUN_0630f8e8(param_1[0x20] + 0x28,0);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  param_1[0x89] = 0;
  FUN_046b7f24(ZEXT816(0),param_1 + 0x8a,*(undefined8 *)puVar15);
  *(undefined4 *)((long)param_1 + 0x4ac) = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  lVar32 = *plVar43;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)(param_1 + 0x96) = *(undefined4 *)((long)param_1 + 0x364);
  *(undefined4 *)((long)param_1 + 0x4bc) = 0;
  if (*(int *)(lVar32 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar32 = *plVar43;
  }
  uVar37 = *(undefined8 *)(*(long *)(lVar32 + 0xb8) + 0x1730);
  *(undefined8 *)((long)param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  uVar37 = NEON_rev64(uVar37,4);
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined1 *)((long)param_1 + 0x2f4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)((long)param_1 + 0x334) = 0x80000000;
  *(undefined8 *)((long)param_1 + 0x4e4) = uVar37;
  puVar13 = System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo;
  if (param_1[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar21 = FUN_03fe2fc4(param_1[0x67],0x6b65726e,
                        *(undefined8 *)
                         System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo);
  if (param_1[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar22 = FUN_03fe2fc4(param_1[0x67],0x6d61726b,*(undefined8 *)puVar13);
  if (param_1[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar23 = FUN_03fe2fc4(param_1[0x67],0x6d6b6d6b,*(undefined8 *)puVar13);
  lVar32 = param_1[0x75];
  *(undefined4 *)((long)param_1 + 0x4cc) = 0;
  if ((lVar32 == 0) || (*(long *)(lVar32 + 0x58) == 0)) goto thunk_FUN_02e3ccc4;
  uVar6 = (int)param_1[0x6f] - 1;
  uVar7 = *(int *)(*(long *)(lVar32 + 0x58) + 0x18) - 1;
  uVar60 = uVar6;
  if ((int)uVar7 <= (int)uVar6) {
    uVar60 = uVar7;
  }
  uVar7 = 0;
  if (-1 < (int)uVar6) {
    uVar7 = uVar60;
  }
  UnityEngine_XR_OpenXR_OpenXRApiVersion__op_LessThan(lVar32,0);
  lVar32 = *plVar43;
  *(undefined4 *)(param_1 + 0x74) = 0xbf800000;
  fVar78 = *(float *)((long)param_1 + 900);
  fVar92 = *(float *)(param_1 + 0x73);
  fVar98 = *(float *)((long)param_1 + 0x39c);
  param_1[0x72] = 0;
  fVar67 = *(float *)(param_1 + 0x70);
  fVar68 = *(float *)((long)param_1 + 0x38c);
  if (*(int *)(lVar32 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar32 = *plVar43;
  }
  param_1[0x9f] = *(long *)(*(long *)(lVar32 + 0xb8) + 0x1720);
  param_1[0xa0] = *(long *)(*(long *)(lVar32 + 0xb8) + 0x1728);
  if (param_1[0x75] == 0) goto thunk_FUN_02e3ccc4;
  UnityEngine_XR_OpenXR_OpenXRApiVersion___ctor(param_1[0x75],0);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  fStack_3c8 = 0.0;
  acStack_3cc[0] = '\0';
  param_1[0x9a] = 0;
  *(undefined1 *)((long)param_1 + 0x37c) = 0;
  *(undefined1 *)((long)param_1 + 0x30d) = 0;
  FUN_060b0518(&uStack_3d8,0xffffffff,0,0);
  FUN_0608c948(param_1,*(long *)(*plVar43 + 0xb8) + 0xa0,0xffffffff,0xffffffff,0);
  FUN_0608c948(param_1,*(long *)(*plVar43 + 0xb8) + 0x458,0xffffffff,0xffffffff,0);
  FUN_0608c948(param_1,*(long *)(*plVar43 + 0xb8) + 0x810,0xffffffff,0xffffffff,0);
  FUN_0608c948(param_1,*(long *)(*plVar43 + 0xb8) + 0xbc8,0xffffffff,0xffffffff,0);
  FUN_0608c948(param_1,*(long *)(*plVar43 + 0xb8) + 0xf80,0xffffffff,0xffffffff,0);
  FUN_046b854c(*(long *)(*plVar43 + 0xb8) + 0x1338,
               *(undefined8 *)System_Collections_Generic_List<AdvancedUpscalers>_TypeInfo);
  fVar86 = DAT_01317af4;
  fVar85 = DAT_013179f0;
  lVar32 = param_1[0x92];
  uStack_3f8 = uStack_3f8 & 0xffffffff00000000;
  if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
  iStack_16e0 = 0;
  if (fVar92 <= 0.0) {
    fVar92 = 0.0;
  }
  pfVar41 = (float *)(param_1 + 0x42);
  fVar64 = fVar64 - (fVar65 - fVar66);
  if (fVar98 <= 0.0) {
    fVar98 = 0.0;
  }
  plVar2 = param_1 + 0xcd;
  iVar29 = 0;
  uVar60 = 0;
  bVar19 = 0;
  fVar66 = 0.0;
  uVar6 = (int)lVar53 - 1;
  bVar10 = true;
  bVar18 = 1;
  fVar65 = fVar83 * (fVar97 / fVar62) * fVar63;
  auVar80 = ZEXT416((uint)fVar65);
  fVar97 = fVar83 * fVar87 * DAT_01317af4;
  fVar92 = fVar92 + DAT_01317c4c;
  uVar30 = (ulong)(uint)DAT_013179f0;
  fVar63 = fVar98 + DAT_01317c4c;
  fStack_15fc = fVar92;
  fVar62 = fVar65;
  fStack_15c0 = fVar92;
LAB_06038b48:
  if ((int)*(uint *)(lVar32 + 0x18) <= (int)uVar60) {
LAB_0603cfc8:
    if ((char)param_1[0x4c] == '\0') {
LAB_0603d08c:
      iVar29 = *(int *)((long)param_1 + 0x26c);
      iVar26 = (int)param_1[0x4e];
    }
    else {
      fStack_15fc = *(float *)((long)param_1 + 0x264);
      auVar80 = ZEXT416((uint)_UNK_01317b9c);
      if (fStack_15fc - *(float *)(param_1 + 0x4d) <= _UNK_01317b9c) goto LAB_0603d08c;
      fVar83 = *(float *)((long)param_1 + 0x20c);
      fVar62 = *(float *)((long)param_1 + 0x27c);
      auVar80 = ZEXT416((uint)fVar62);
      iVar29 = *(int *)((long)param_1 + 0x26c);
      iVar26 = (int)param_1[0x4e];
      if ((fVar83 < fVar62) && (iVar29 < iVar26)) {
        if (*(float *)((long)param_1 + 0x304) < *(float *)(param_1 + 0x60) / 100.0) {
          *(undefined4 *)((long)param_1 + 0x304) = 0;
        }
        fVar97 = DAT_01317af0;
        *(float *)(param_1 + 0x4d) = fVar83;
        fVar63 = (fStack_15fc - fVar83) * 0.5;
        if (fVar63 <= fVar97) {
          fVar63 = fVar97;
        }
        fVar97 = (fVar83 + fVar63) * 20.0 + 0.5;
        fVar83 = _UNK_01317b80;
        if (fVar97 != INFINITY) {
          fVar83 = (float)(int)fVar97 / 20.0;
        }
        if (fVar62 <= fVar83) {
          fVar83 = fVar62;
        }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize:
        *(float *)((long)param_1 + 0x20c) = fVar83;
        return;
      }
    }
    *(undefined1 *)((long)param_1 + 0x274) = 1;
    if (iVar26 <= iVar29) {
      uVar37 = FUN_05603500((long)param_1 + 0x26c,0);
      uVar33 = FUN_05618860((long)param_1 + 0x20c,0);
      uVar37 = FUN_0548db04(*(undefined8 *)System_Collections_Generic_List<BigInteger>_TypeInfo,
                            uVar37,*(undefined8 *)
                                    System_Collections_Generic_List<BaseInvokableCall>_TypeInfo,
                            uVar33,0);
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)puVar14);
      }
      FUN_062244a4(uVar37,0);
    }
    if ((*(int *)((long)param_1 + 0x4ac) == 0) ||
       ((*(int *)((long)param_1 + 0x4ac) == 1 && (uStack_3c4 == 3)))) {
      (**(code **)(*param_1 + 0x958))(param_1,1,*(undefined8 *)(*param_1 + 0x960));
      goto LAB_0603d144;
    }
    lVar53 = *plVar43;
    if (*(int *)(lVar53 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar53 = *plVar43;
    }
    plVar55 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
    lVar53 = **(long **)(lVar53 + 0xb8);
    if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar53 + 0x18) <= *(uint *)(param_1 + 0xd5)) goto LAB_0603fce4;
    uStack_3e0 = CONCAT44(*(int *)(lVar53 + (long)(int)*(uint *)(param_1 + 0xd5) * 0x38 + 0x54) << 2
                          ,(float)uStack_3e0);
    if ((param_1[0x75] == 0) || (lVar53 = *(long *)(param_1[0x75] + 0x60), lVar53 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(int *)(*(long *)System_Collections_Generic_List<byte[]>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
    FUN_060a5124(lVar53 + 0x20,0,0);
    fStack_1640 = (float)FUN_031c4efc(0);
    iVar29 = (int)param_1[0x53];
    lVar53 = param_1[0xef];
    fStack_1644 = fStack_15fc;
    if (iVar29 < 0x401) {
      if (iVar29 == 0x100) {
        if (*(int *)((long)param_1 + 0x314) == 5) {
          if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
          if ((*(uint *)(lVar53 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
          if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x58), lVar32 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_0603fce4;
          fVar83 = *(float *)(lVar32 + (long)(int)uVar7 * 0x14 + 0x28);
        }
        else {
          if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
          if ((*(uint *)(lVar53 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
          fVar83 = *(float *)((long)param_1 + 0x4d4);
        }
        fStack_1644 = *(float *)(lVar53 + 0x34);
        fVar68 = (0.0 - fVar83) - fVar78;
        fStack_15fc = *(float *)(lVar53 + 0x2c);
        fVar83 = *(float *)(lVar53 + 0x30);
LAB_0603d53c:
        fStack_15fc = fVar67 + 0.0 + fStack_15fc;
        fVar83 = fVar83 + fVar68;
      }
      else {
        if (iVar29 != 0x200) {
          if (iVar29 != 0x400) goto LAB_0603d550;
          if (*(int *)((long)param_1 + 0x314) == 5) {
            if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
            if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
            if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x58), lVar32 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_0603fce4;
            fVar83 = *(float *)(lVar32 + (long)(int)uVar7 * 0x14 + 0x30);
          }
          else {
            if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
            fVar83 = fStack_3c8;
            if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
          }
          fStack_1644 = *(float *)(lVar53 + 0x28);
          fVar68 = fVar68 + (0.0 - fVar83);
          fStack_15fc = *(float *)(lVar53 + 0x20);
          fVar83 = *(float *)(lVar53 + 0x24);
          goto LAB_0603d53c;
        }
        if (*(int *)((long)param_1 + 0x314) != 5) {
          if (lVar53 != 0) {
            if ((*(int *)(lVar53 + 0x18) != 1) && (*(int *)(lVar53 + 0x18) != 0)) {
              fVar62 = *(float *)((long)param_1 + 0x4d4);
              fVar83 = fStack_3c8;
              goto LAB_0603d470;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar53 + 0x18) == 1) || (*(int *)(lVar53 + 0x18) == 0)) goto LAB_0603fce4;
        if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x58), lVar32 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar32 + 0x18) <= uVar7) goto LAB_0603fce4;
        lVar32 = lVar32 + (long)(int)uVar7 * 0x14;
        fStack_1644 = (*(float *)(lVar53 + 0x28) + *(float *)(lVar53 + 0x34)) * 0.5;
        fStack_15fc = fVar67 + 0.0 +
                      ((float)*(undefined8 *)(lVar53 + 0x20) + (float)*(undefined8 *)(lVar53 + 0x2c)
                      ) * 0.5;
        fVar83 = (0.0 - ((fVar78 + *(float *)(lVar32 + 0x28) + *(float *)(lVar32 + 0x30)) - fVar68)
                        * 0.5) +
                 ((float)((ulong)*(undefined8 *)(lVar53 + 0x20) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar53 + 0x2c) >> 0x20)) * 0.5;
      }
      fStack_1644 = fStack_1644 + 0.0;
      auVar80 = ZEXT416((uint)fVar83);
      fStack_1640 = fStack_15fc;
    }
    else if (iVar29 == 0x800) {
      if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
      if ((*(int *)(lVar53 + 0x18) == 1) || (*(int *)(lVar53 + 0x18) == 0)) goto LAB_0603fce4;
      fStack_15fc = (*(float *)(lVar53 + 0x28) + *(float *)(lVar53 + 0x34)) * 0.5;
      fStack_1640 = ((float)*(undefined8 *)(lVar53 + 0x20) + (float)*(undefined8 *)(lVar53 + 0x2c))
                    * 0.5 + fVar67 + 0.0;
      fStack_1644 = fStack_15fc + 0.0;
      auVar80 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar53 + 0x20) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar53 + 0x2c) >> 0x20)) * 0.5 + 0.0))
      ;
    }
    else {
      if (iVar29 == 0x1000) {
        if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar53 + 0x18) == 1) || (*(int *)(lVar53 + 0x18) == 0)) goto LAB_0603fce4;
        fVar62 = *(float *)((long)param_1 + 0x504);
        fVar83 = *(float *)((long)param_1 + 0x4fc);
LAB_0603d470:
        fVar78 = fVar78 + fVar62 + fVar83;
      }
      else {
        if (iVar29 != 0x2000) goto LAB_0603d550;
        if (lVar53 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar53 + 0x18) == 1) || (*(int *)(lVar53 + 0x18) == 0)) goto LAB_0603fce4;
        fVar78 = *(float *)(param_1 + 0x9b) - fVar78;
      }
      fStack_15fc = fVar67 + 0.0;
      auVar80._0_4_ =
           ((float)*(undefined8 *)(lVar53 + 0x24) + (float)*(undefined8 *)(lVar53 + 0x30)) * 0.5 +
           (0.0 - (fVar78 - fVar68) * 0.5);
      auVar80._4_4_ =
           ((float)((ulong)*(undefined8 *)(lVar53 + 0x24) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar53 + 0x30) >> 0x20)) * 0.5 + 0.0;
      auVar80._8_8_ = 0;
      fStack_1640 = fStack_15fc + (*(float *)(lVar53 + 0x20) + *(float *)(lVar53 + 0x2c)) * 0.5;
      fStack_1644 = auVar80._4_4_;
    }
LAB_0603d550:
    auVar76 = auVar80;
    fStack_15e0 = (float)FUN_031c4efc(0);
    auVar81 = auVar76;
    FUN_031c4efc(0);
    lVar53 = FUN_0604a24c(param_1,0);
    if (lVar53 != 0) {
      FUN_0627938c(lVar53,0);
      *(float *)((long)param_1 + 0x704) = auVar81._0_4_;
      uStack_167c = FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      uStack_1654 = FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
      }
      FUN_0603fd20(0);
      FUN_0605b508(&uStack_3f0,0x4000ffff,0);
      if (*(int *)(*plVar43 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar53 = param_1[0x75];
      if (lVar53 != 0) {
        iVar29 = *(int *)((long)param_1 + 0x4ac);
        if (iVar29 < 1) {
          iStack_1614 = 0;
          iVar26 = 0;
          goto LAB_0603f770;
        }
        lVar53 = *(long *)(lVar53 + 0x38);
        if (lVar53 != 0) {
          bVar12 = false;
          bVar16 = false;
          fVar63 = 0.0;
          bVar11 = false;
          iStack_1614 = 0;
          uVar22 = 0;
          uStack_16b4 = 0;
          uVar21 = 0;
          lVar32 = lVar53 + 0x20;
          bVar10 = false;
          iStack_16a0 = 0;
          fStack_1570 = auVar76._0_4_;
          fStack_15c8 = *(float *)(*(long *)(*(long *)
                                              System_Collections_Generic_List<AudioListener>_TypeInfo
                                            + 0xb8) + 0x1730);
          fStack_15dc = fStack_1570;
          fStack_1550 = auVar80._0_4_;
          fStack_16a8 = 0.0;
          fStack_15cc = 0.0;
          fStack_1594 = 0.0;
          fVar97 = 0.0;
          fVar62 = 0.0;
          fStack_166c = fStack_1694;
          fStack_1624 = fStack_1694;
          fStack_1618 = fStack_1694;
          fStack_15ec = fStack_169c;
          fStack_1668 = fStack_169c;
          fStack_1620 = fStack_169c;
          fVar83 = fStack_1698;
          uVar23 = 0;
          goto LAB_0603d6e0;
        }
      }
    }
    goto thunk_FUN_02e3ccc4;
  }
  if (*(uint *)(lVar32 + 0x18) <= uVar60) goto LAB_0603fce4;
  uVar60 = *(uint *)(lVar32 + (long)(int)uVar60 * 0x10 + 0x24);
  if (uVar60 == 0) goto LAB_0603cfc8;
  uStack_3c4 = uVar60;
  if (5 < iVar29) {
    uVar37 = Oculus_Platform_CAPI__ovr_DestinationArray_HasNextPage(&uStack_3c4,0);
    uVar33 = FUN_05603500(&uStack_3f8,0);
    uVar37 = FUN_0548db04(*(undefined8 *)System_Collections_Generic_List<BaseInputModule>_TypeInfo,
                          uVar37,*(undefined8 *)
                                  System_Collections_Generic_List<BaseRaycaster>_TypeInfo,uVar33,0);
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*(long *)puVar14);
    }
    FUN_06224c0c(uVar37,0);
    uStack_3d8 = CONCAT44(3,*(undefined4 *)((long)param_1 + 0x4ac));
  }
  if (uStack_3c4 == 0x1a) goto LAB_06038edc;
  if ((uStack_3c4 == 0x3c) && (*(char *)((long)param_1 + 0x342) != '\0')) {
    *(undefined1 *)((long)param_1 + 0x471) = 1;
    *(undefined4 *)((long)param_1 + 0x664) = 0;
    uVar34 = FUN_060872e4(param_1,param_1[0x92],(uint)uStack_3f8 + 1,&uStack_494,0);
    if ((uVar34 & 1) != 0) {
      uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uStack_494);
      if (*(int *)((long)param_1 + 0x664) == 0) goto LAB_06038edc;
    }
  }
  else {
    if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
    lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
    *(undefined4 *)((long)param_1 + 0x664) = *(undefined4 *)(lVar32 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar32 + 0x50);
    param_1[0x20] = *(long *)(lVar32 + 0x40);
    thunk_FUN_02ee2be8(param_1 + 0x20);
  }
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar60 = *(uint *)((long)param_1 + 0x4ac);
  if (*(uint *)(lVar32 + 0x18) <= uVar60) goto LAB_0603fce4;
  lVar31 = lVar32 + 0x20;
  uVar5 = (uint)uStack_3d8;
  lVar51 = param_1[0x24];
  cVar40 = *(char *)(lVar31 + (long)(int)uVar60 * 0x178 + 0x34);
  *(undefined1 *)((long)param_1 + 0x471) = 0;
  uVar24 = uVar60;
  if ((uint)uStack_3d8 == uVar60) {
    *(undefined4 *)((long)param_1 + 0x664) = 0;
    uStack_3c4 = uStack_3d8._4_4_;
    if (uStack_3d8._4_4_ == 0x2026) {
      *(long *)(lVar31 + (long)(int)uVar60 * 0x178 + 0x10) = param_1[0xce];
      thunk_FUN_02ee2be8();
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
      lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
      *(long *)(lVar32 + 0x40) = param_1[0xcf];
      *(undefined4 *)(lVar32 + 0x20) = 0;
      thunk_FUN_02ee2be8();
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
      *(long *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x48) = param_1[0xd0]
      ;
      thunk_FUN_02ee2be8();
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
      *(int *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x50) =
           (int)param_1[0xd1];
      puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
      lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar32 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar32 = *(long *)puVar13;
      }
      lVar32 = **(long **)(lVar32 + 0xb8);
      if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(param_1 + 0xd5)) goto LAB_0603fce4;
      lVar32 = lVar32 + (long)(int)*(uint *)(param_1 + 0xd5) * 0x38;
      *(int *)(lVar32 + 0x54) = *(int *)(lVar32 + 0x54) + 1;
      *(undefined1 *)(param_1 + 0x66) = 1;
      uStack_3d8 = CONCAT44(3,*(uint *)((long)param_1 + 0x4ac) + 1);
      uVar24 = *(uint *)((long)param_1 + 0x4ac);
    }
    else if (uStack_3d8._4_4_ == 3) {
      if ((param_1[0x20] == 0) || (lVar35 = FUN_0606364c(param_1[0x20],0), lVar35 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar37 = FUN_04e87e04(lVar35,3,*(undefined8 *)
                                      System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                           );
      if (*(uint *)(lVar32 + 0x18) <= uVar60) goto LAB_0603fce4;
      *(undefined8 *)(lVar31 + (long)(int)uVar60 * 0x178 + 0x10) = uVar37;
      thunk_FUN_02ee2be8();
      *(undefined1 *)(param_1 + 0x66) = 1;
      uVar24 = *(uint *)((long)param_1 + 0x4ac);
    }
  }
  uVar91 = uStack_3c4;
  plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (((int)uVar24 < *(int *)((long)param_1 + 0x364)) && (uStack_3c4 != 3)) {
    if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar32 + 0x18) <= uVar24) goto LAB_0603fce4;
    lVar32 = lVar32 + (long)(int)uVar24 * 0x178;
    *(undefined1 *)(lVar32 + 400) = 0;
    *(undefined2 *)(lVar32 + 0x24) = 0x200b;
    *(undefined4 *)(lVar32 + 0x5c) = 0;
    *(uint *)((long)param_1 + 0x4ac) = uVar24 + 1;
    goto LAB_06038edc;
  }
  fVar87 = 1.0;
  if (*(int *)((long)param_1 + 0x664) == 0) {
    uVar24 = *(uint *)((long)param_1 + 0x284);
    if ((uVar24 >> 4 & 1) == 0) {
      if ((uVar24 >> 3 & 1) == 0) {
        if ((uVar24 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar34 = FUN_055805c8(uVar91,0);
          uVar24 = uStack_3c4;
          if ((uVar34 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uStack_3c4 = FUN_05580850(uVar24,0);
            fVar87 = fVar85;
            goto LAB_0603901c;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_05580528(uVar91,0);
        uVar24 = uStack_3c4;
        if ((uVar34 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uStack_3c4 = FUN_055809c8(uVar24,0);
          goto LAB_0603901c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar34 = FUN_055805c8(uVar91,0);
      uVar24 = uStack_3c4;
      if ((uVar34 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uStack_3c4 = FUN_05580850(uVar24,0);
LAB_0603901c:
        uStack_3c4 = uStack_3c4 & 0xffff;
      }
    }
  }
  if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
  memmove(&uStack_460,(void *)(param_1[0x20] + 0x28),0x60);
  uVar20 = (undefined4)uVar30;
  if (*(int *)((long)param_1 + 0x664) == 1) {
    lVar32 = FUN_060800c8(param_1,0);
    uVar20 = (undefined4)uVar30;
    if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x38), lVar32 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
    plVar58 = *(long **)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x30);
    plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (plVar58 == (long *)0x0) goto LAB_06038edc;
    bVar17 = *(byte *)(*(long *)System_Collections_Generic_List<uint[]>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar58 + 0x130) < bVar17) ||
       (*(long *)(*(long *)(*plVar58 + 200) + (ulong)bVar17 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<uint[]>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3d044(plVar58);
    }
    plVar43 = (long *)plVar58[3];
    if (plVar43 == (long *)0x0) {
      plVar43 = (long *)0x0;
      *plVar55 = 0;
    }
    else {
      lVar32 = *(long *)System_Collections_Generic_List<Type[]>_TypeInfo;
      bVar17 = *(byte *)(lVar32 + 0x130);
      if (*(byte *)(*plVar43 + 0x130) < bVar17) {
        plVar50 = (long *)0x0;
      }
      else {
        plVar50 = plVar43;
        if (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar17 * 8 + -8) != lVar32) {
          plVar50 = (long *)0x0;
        }
      }
      *plVar55 = (long)plVar50;
      if (*(byte *)(*plVar43 + 0x130) < bVar17) {
        plVar43 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar17 * 8 + -8) != lVar32) {
        plVar43 = (long *)0x0;
      }
    }
    thunk_FUN_02ee2be8(plVar55,plVar43);
    lVar32 = plVar58[5];
    *(int *)((long)param_1 + 0x6c4) = (int)lVar32;
    puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (uStack_3c4 == 0x3c) {
      uStack_3c4 = (int)lVar32 + 0xe000;
    }
    else {
      lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar32 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar32 = *(long *)puVar13;
      }
      *(undefined4 *)((long)param_1 + 0x1d4) = *(undefined4 *)(*(long *)(lVar32 + 0xb8) + 0x68);
    }
    fVar93 = *pfVar41;
    fVar62 = (float)FUN_0630f888(&uStack_460,0);
    fVar66 = (float)FUN_0630f890(&uStack_460,0);
    if (*plVar55 == 0) goto thunk_FUN_02e3ccc4;
    fVar66 = fVar83 * (fVar93 / fVar62) * fVar66;
    memmove(&uStack_500,(void *)(*plVar55 + 0x28),0x60);
    fVar62 = (float)FUN_0630f888(&uStack_500,0);
    fVar93 = *pfVar41;
    if (fVar62 <= 0.0) {
      fVar62 = (float)FUN_0630f888(&uStack_460,0);
      fVar69 = (float)FUN_0630f890(&uStack_460,0);
      fVar70 = (float)FUN_0630f8b8(&uStack_460,0);
      if (plVar58[4] == 0) goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&uStack_3c0,plVar58[4],0);
      uStack_518 = uStack_3b8;
      uStack_520 = uStack_3c0;
      uStack_510 = (undefined4)uStack_3b0;
      fVar94 = (float)FUN_0630fb7c(&uStack_520,0);
      if (plVar58[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar72 = *(float *)((long)plVar58 + 0x2c);
      fVar93 = fVar83 * (fVar93 / fVar62) * fVar69;
      fVar62 = (float)FUN_0630fd88(plVar58[4],0);
      fVar62 = fVar93 * (fVar70 / fVar94) * fVar72 * fVar62;
      fStack_15c8 = 0.0;
      if (fVar62 != 0.0) {
        fStack_15c8 = fVar93 / fVar62;
      }
      fStack_15c4 = (float)FUN_0630f8b8(&uStack_460,0);
      fStack_15c4 = fStack_15c4 * fStack_15c8;
      fVar93 = (float)FUN_0630f8e0(&uStack_460,0);
      fStack_1584 = *(float *)((long)param_1 + 0x444);
      fVar69 = (float)FUN_0630f890(&uStack_460,0);
      fStack_1584 = fVar66 * fVar93 * fStack_1584;
      auVar80 = ZEXT416((uint)fStack_1584);
      fStack_1584 = fStack_1584 * fVar69;
      fVar66 = (float)FUN_0630f8e8(&uStack_460,0);
      fStack_15c8 = fStack_15c8 * fVar66;
    }
    else {
      fVar62 = (float)FUN_0630f888(&uStack_500,0);
      fVar69 = (float)FUN_0630f890(&uStack_500,0);
      if (plVar58[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar94 = *(float *)((long)plVar58 + 0x2c);
      fVar70 = (float)FUN_0630fd88(plVar58[4],0);
      fVar62 = fVar83 * (fVar93 / fVar62) * fVar69 * fVar94 * fVar70;
      fStack_15c4 = (float)FUN_0630f8b8(&uStack_500,0);
      fVar93 = (float)FUN_0630f8e0(&uStack_500,0);
      fStack_1584 = *(float *)((long)param_1 + 0x444);
      fVar69 = (float)FUN_0630f890(&uStack_500,0);
      fStack_1584 = fVar66 * fVar93 * fStack_1584;
      auVar80 = ZEXT416((uint)fStack_1584);
      fStack_1584 = fStack_1584 * fVar69;
      fStack_15c8 = (float)FUN_0630f8e8(&uStack_500,0);
    }
    param_1[0xcd] = (long)plVar58;
    thunk_FUN_02ee2be8(plVar2,plVar58);
    if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
    lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
    *(long *)(lVar32 + 0x40) = param_1[0x20];
    *(undefined4 *)(lVar32 + 0x20) = 1;
    *(float *)(lVar32 + 0x15c) = fVar62;
    thunk_FUN_02ee2be8();
    lVar32 = param_1[0x75];
    if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
    fVar66 = 0.0;
    *(int *)(lVar31 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x50) =
         (int)param_1[0x24];
    *(int *)(param_1 + 0x24) = (int)lVar51;
LAB_06039744:
    fVar93 = 0.0;
    if (uStack_3c4 != 3 && uStack_3c4 != 0xad) {
      fVar93 = fVar62;
    }
  }
  else {
    lVar32 = param_1[0x75];
    if (*(int *)((long)param_1 + 0x664) == 0) {
      if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
      *plVar2 = *(long *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x30);
      thunk_FUN_02ee2be8(plVar2);
      uVar20 = (undefined4)uVar30;
      plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*plVar2 == 0) goto LAB_06038edc;
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
      param_1[0x20] = *(long *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x40)
      ;
      thunk_FUN_02ee2be8(param_1 + 0x20);
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
      param_1[0x23] = *(long *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x48)
      ;
      thunk_FUN_02ee2be8(param_1 + 0x23);
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar91 = *(uint *)((long)param_1 + 0x4ac);
      uVar24 = *(uint *)(lVar32 + 0x18);
      if (uVar24 <= uVar91) goto LAB_0603fce4;
      *(undefined4 *)(param_1 + 0x24) =
           *(undefined4 *)(lVar32 + 0x20 + (long)(int)uVar91 * 0x178 + 0x30);
      pfVar44 = pfVar41;
      if (uVar5 == uVar60) {
        lVar31 = param_1[0x92];
        if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar31 + 0x18) <= (uint)uStack_3f8) goto LAB_0603fce4;
        if ((*(int *)(lVar31 + (long)(int)(uint)uStack_3f8 * 0x10 + 0x24) == 10) &&
           (uVar91 != *(uint *)(param_1 + 0x96))) {
          if (uVar24 <= uVar91 - 1) goto LAB_0603fce4;
          pfVar44 = (float *)(lVar32 + 0x20 + (long)(int)(uVar91 - 1) * 0x178 + 0x38);
        }
      }
      fVar69 = *pfVar44;
      fVar66 = (float)FUN_0630f888(&uStack_460,0);
      fVar93 = (float)FUN_0630f890(&uStack_460,0);
      if (uVar5 == uVar60) {
        fStack_15c8 = 0.0;
        fStack_15c4 = 0.0;
        if (uStack_3c4 != 0x2026) goto LAB_060392a8;
      }
      else {
LAB_060392a8:
        fStack_15c4 = (float)FUN_0630f8b8(&uStack_460,0);
        fStack_15c8 = (float)FUN_0630f8e8(&uStack_460,0);
      }
      lVar32 = param_1[0xcd];
      if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar72 = *(float *)((long)param_1 + 0x444);
      fStack_15fc = *(float *)(lVar32 + 0x2c);
      fVar62 = (float)FUN_0630fd88(*(long *)(lVar32 + 0x20),0);
      fVar70 = (float)FUN_0630f8e0(&uStack_460,0);
      fStack_1584 = *(float *)((long)param_1 + 0x444);
      fVar94 = (float)FUN_0630f890(&uStack_460,0);
      lVar32 = param_1[0x75];
      if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
      lVar31 = lVar31 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
      *(undefined4 *)(lVar31 + 0x20) = 0;
      fVar66 = fVar83 * ((fVar87 * fVar69) / fVar66) * fVar93;
      fStack_15fc = fVar66 * fVar72 * fStack_15fc;
      fStack_1584 = fVar66 * fVar70 * fStack_1584;
      auVar80 = ZEXT416((uint)fStack_1584);
      fVar62 = fStack_15fc * fVar62;
      fStack_1584 = fStack_1584 * fVar94;
      *(float *)(lVar31 + 0x15c) = fVar62;
      uVar24 = *(uint *)(param_1 + 0x24);
      if (uVar24 == 0) {
        fVar66 = *(float *)(param_1 + 199);
        goto LAB_06039744;
      }
      lVar31 = param_1[0xe5];
      if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= uVar24) goto LAB_0603fce4;
      lVar31 = *(long *)(lVar31 + (long)(int)uVar24 * 8 + 0x20);
      if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
      fVar66 = *(float *)(lVar31 + 0x54);
      goto LAB_06039744;
    }
    auVar80 = ZEXT816(0);
    fVar93 = 0.0;
    if (uStack_3c4 != 3 && uStack_3c4 != 0xad) {
      fVar93 = fVar62;
    }
    fStack_1584 = 0.0;
    fStack_15c4 = 0.0;
    fStack_15c8 = 0.0;
    if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
  }
  lVar32 = *(long *)(lVar32 + 0x38);
  if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  *(short *)(lVar32 + 0x24) = (short)uStack_3c4;
  *(int *)(lVar32 + 0x58) = (int)param_1[0x42];
  *(int *)(lVar32 + 0x160) = (int)param_1[0xa1];
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  *(int *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x164) =
       (int)param_1[0x2b];
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  *(undefined4 *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x16c) =
       *(undefined4 *)((long)param_1 + 0x15c);
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  auVar76 = *(undefined1 (*) [16])(param_1 + 0x2c);
  *(int *)(lVar32 + 0x188) = (int)param_1[0x2e];
  *(long *)(lVar32 + 0x180) = auVar76._8_8_;
  *(long *)(lVar32 + 0x178) = auVar76._0_8_;
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  lVar31 = *(long *)(lVar32 + 0x38);
  *(undefined4 *)(lVar32 + 0x18c) = *(undefined4 *)((long)param_1 + 0x284);
  if (lVar31 == 0) {
    if ((*plVar2 == 0) || (lVar32 = *(long *)(*plVar2 + 0x20), lVar32 == 0))
    goto thunk_FUN_02e3ccc4;
    FUN_0630fd4c(&uStack_3c0,lVar32,0);
    uStack_1138 = uStack_3b8;
    uStack_1140 = uStack_3c0;
    uStack_1130 = (undefined4)uStack_3b0;
  }
  else {
    FUN_0630fd4c(&uStack_1140,lVar31,0);
  }
  uVar24 = uStack_3c4;
  uStack_478 = uStack_1138;
  uStack_480 = uStack_1140;
  uStack_470 = uStack_1130;
  if (uStack_3c4 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar24 = FUN_0557df5c(uVar24,0);
    uVar24 = uVar24 & 1;
  }
  else {
    uVar24 = 0;
  }
  fVar69 = *(float *)(param_1 + 0x5a);
  uStack_488 = 0;
  uStack_490 = 0;
  if (((uVar21 & 1) != 0) && (*(int *)((long)param_1 + 0x664) == 0)) {
    if (*plVar2 == 0) goto thunk_FUN_02e3ccc4;
    iVar26 = *(int *)((long)param_1 + 0x4ac);
    uVar91 = *(uint *)(*plVar2 + 0x28);
    if (iVar26 < (int)uVar6) {
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar25 = iVar26 + 1;
      if (*(uint *)(lVar32 + 0x18) <= uVar25) goto LAB_0603fce4;
      if (*(int *)(lVar32 + 0x20 + (long)(int)uVar25 * 0x178) == 0) {
        lVar32 = *(long *)(lVar32 + 0x20 + (long)(int)uVar25 * 0x178 + 0x10);
        if ((((lVar32 == 0) || (param_1[0x20] == 0)) ||
            (lVar31 = *(long *)(param_1[0x20] + 0x178), lVar31 == 0)) ||
           (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
        uVar30 = FUN_04e75974(lVar31,uVar91 | *(int *)(lVar32 + 0x28) << 0x10,&uStack_550,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        if ((uVar30 & 1) != 0) {
          FUN_0631443c(&uStack_3c0,&uStack_550,0);
          uStack_568 = uStack_3b8;
          uStack_570 = uStack_3c0;
          uStack_560 = (undefined4)uStack_3b0;
          uVar71 = FUN_06314290(&uStack_570,0);
          uStack_490 = CONCAT44(auVar80._0_4_,uVar71);
          uStack_488 = CONCAT44(uVar20,fStack_15fc);
          uVar30 = FUN_06314478(&uStack_550,0);
          if ((uVar30 & 0x100) != 0) {
            fVar69 = 0.0;
          }
        }
      }
      iVar26 = *(int *)((long)param_1 + 0x4ac);
    }
    if (0 < iVar26) {
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= iVar26 - 1U) goto LAB_0603fce4;
      lVar32 = *(long *)(lVar32 + (ulong)(iVar26 - 1U) * 0x178 + 0x30);
      if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
      uVar25 = *(uint *)(lVar32 + 0x28);
      lVar32 = FUN_060800c8(param_1,0);
      if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar47 = *(int *)((long)param_1 + 0x4ac) - 1;
      if (*(uint *)(lVar32 + 0x18) <= uVar47) goto LAB_0603fce4;
      if (*(int *)(lVar32 + (long)(int)uVar47 * 0x178 + 0x20) == 0) {
        if (((param_1[0x20] == 0) || (lVar32 = *(long *)(param_1[0x20] + 0x178), lVar32 == 0)) ||
           (lVar32 = *(long *)(lVar32 + 0x40), lVar32 == 0)) goto thunk_FUN_02e3ccc4;
        uVar30 = FUN_04e75974(lVar32,uVar25 | uVar91 << 0x10,&uStack_550,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        uVar37 = uStack_488;
        if ((uVar30 & 1) != 0) {
          uVar91 = uStack_490._4_4_;
          uVar20 = (undefined4)uStack_488;
          FUN_06314464(&uStack_3c0,&uStack_550,0);
          uStack_568 = uStack_3b8;
          uStack_570 = uStack_3c0;
          uStack_560 = (undefined4)uStack_3b0;
          FUN_06314290(&uStack_570,0);
          auVar80 = ZEXT416(uVar91);
          uVar84 = (undefined4)((ulong)uVar37 >> 0x20);
          uVar71 = FUN_063140f0(0);
          uStack_490 = CONCAT44(auVar80._0_4_,uVar71);
          uStack_488 = CONCAT44(uVar84,uVar20);
          uVar30 = FUN_06314478(&uStack_550,0);
          if ((uVar30 & 0x100) != 0) {
            fVar69 = 0.0;
          }
        }
      }
    }
  }
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar91 = *(uint *)((long)param_1 + 0x4ac);
  uVar20 = FUN_063140cc(&uStack_490,0);
  uVar25 = uStack_3c4;
  if (*(uint *)(lVar32 + 0x18) <= uVar91) goto LAB_0603fce4;
  *(undefined4 *)(lVar32 + (long)(int)uVar91 * 0x178 + 0x154) = uVar20;
  if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) == 0)
  {
    thunk_FUN_02e9a04c();
  }
  uVar34 = FUN_060b1c00(uVar25,0);
  uVar91 = *(uint *)((long)param_1 + 0x4ac);
  uVar30 = (ulong)uVar91;
  if ((uVar34 & 1) == 0) {
    if (0 < (int)uVar91) {
      if ((((uVar22 & 1) == 0) || (uVar25 = *(uint *)((long)param_1 + 0x334), uVar25 == 0x80000000))
         || (uVar25 != uVar91 - 1)) {
        if ((uVar23 & 1) == 0) {
          bVar16 = false;
        }
        else {
          lVar32 = uVar30 * 0x178 + 0x144;
          uVar56 = uVar30;
          do {
            uVar56 = uVar56 - 1;
            iVar26 = (int)uVar30;
            uVar91 = iVar26 - 1;
            uVar30 = (ulong)uVar91;
            if ((iVar26 < 1) || (uVar56 == *(uint *)((long)param_1 + 0x334))) {
              bVar16 = false;
              goto LAB_06039e54;
            }
            if ((param_1[0x75] == 0) || (lVar31 = *(long *)(param_1[0x75] + 0x38), lVar31 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar31 + 0x18) <= uVar56) goto LAB_0603fce4;
            lVar31 = *(long *)(lVar31 + lVar32 + -0x28c);
            if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x20), lVar31 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar25 = FUN_0630fd3c(lVar31,0);
            if ((*plVar2 == 0) ||
               (((param_1[0x20] == 0 || (lVar31 = *(long *)(param_1[0x20] + 0x178), lVar31 == 0)) ||
                (lVar31 = *(long *)(lVar31 + 0x50), lVar31 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar36 = FUN_04e82f84(lVar31,uVar25 | *(int *)(*plVar2 + 0x28) << 0x10,&uStack_5a0,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<Type,_NetworkInputWeavedAttribute>>_TypeInfo
                                 );
            lVar32 = lVar32 + -0x178;
          } while ((uVar36 & 1) == 0);
          if ((param_1[0x75] == 0) || (lVar31 = *(long *)(param_1[0x75] + 0x38), lVar31 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar31 + 0x18) <= uVar91) goto LAB_0603fce4;
          FUN_063140b4(((*(float *)(lVar31 + lVar32 + -0xc) - *(float *)(param_1 + 0xcc)) / fVar93 +
                       uStack_5a0._4_4_) - (float)uStack_590,uStack_5a0._4_4_,(float)uStack_590,
                       &uStack_490,0);
          FUN_063140c4(&uStack_490,0);
          fVar69 = 0.0;
          bVar16 = true;
        }
LAB_06039e54:
        if ((uVar22 & 1) != 0) {
          uVar91 = *(uint *)((long)param_1 + 0x334);
          if (uVar91 == 0x80000000) {
            bVar16 = true;
          }
          if (!bVar16) {
            if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar32 + 0x18) <= uVar91) goto LAB_0603fce4;
            lVar32 = *(long *)(lVar32 + (long)(int)uVar91 * 0x178 + 0x30);
            if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar91 = FUN_0630fd3c(lVar32,0);
            if ((*plVar2 == 0) ||
               (((param_1[0x20] == 0 || (lVar32 = *(long *)(param_1[0x20] + 0x178), lVar32 == 0)) ||
                (lVar32 = *(long *)(lVar32 + 0x48), lVar32 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar30 = FUN_04e7c424(lVar32,uVar91 | *(int *)(*plVar2 + 0x28) << 0x10,&uStack_5b8,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                 );
            if ((uVar30 & 1) != 0) {
              if ((param_1[0x75] != 0) && (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 != 0)) {
                if (*(uint *)((long)param_1 + 0x334) < *(uint *)(lVar32 + 0x18)) {
                  FUN_063140b4((uStack_5b8._4_4_ +
                               (*(float *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x334) *
                                                    0x178 + 0x138) - *(float *)(param_1 + 0xcc)) /
                               fVar93) - (float)uStack_5a8,uStack_5b8._4_4_,(float)uStack_5a8,
                               &uStack_490,0);
                  goto LAB_06039f50;
                }
                goto LAB_0603fce4;
              }
              goto thunk_FUN_02e3ccc4;
            }
          }
        }
      }
      else {
        if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar32 + 0x18) <= uVar25) goto LAB_0603fce4;
        lVar32 = *(long *)(lVar32 + (long)(int)uVar25 * 0x178 + 0x30);
        if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
        goto thunk_FUN_02e3ccc4;
        uVar91 = FUN_0630fd3c(lVar32,0);
        if ((*plVar2 == 0) ||
           (((param_1[0x20] == 0 || (lVar32 = *(long *)(param_1[0x20] + 0x178), lVar32 == 0)) ||
            (lVar32 = *(long *)(lVar32 + 0x48), lVar32 == 0)))) goto thunk_FUN_02e3ccc4;
        uVar30 = FUN_04e7c424(lVar32,uVar91 | *(int *)(*plVar2 + 0x28) << 0x10,&uStack_588,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                             );
        if ((uVar30 & 1) != 0) {
          if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x334)) goto LAB_0603fce4;
          FUN_063140b4((uStack_588._4_4_ +
                       (*(float *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x334) * 0x178 +
                                  0x138) - *(float *)(param_1 + 0xcc)) / fVar93) - (float)uStack_578
                       ,uStack_588._4_4_,(float)uStack_578,&uStack_490,0);
LAB_06039f50:
          FUN_063140c4(&uStack_490,0);
          fVar69 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)((long)param_1 + 0x334) = uVar91;
  }
  fVar70 = (float)FUN_063140bc(&uStack_490,0);
  fVar94 = (float)FUN_063140bc(&uStack_490,0);
  if ((char)param_1[0x1e] != '\0') {
    fVar88 = *(float *)(param_1 + 0xcc);
    fVar72 = (float)FUN_0630fb94(&uStack_480,0);
    fVar88 = fVar88 - fVar93 * *(float *)(param_1 + 0x5c) *
                               fVar72 * (1.0 - *(float *)((long)param_1 + 0x304));
    *(float *)(param_1 + 0xcc) = fVar88;
    if ((uVar24 != 0) || (uStack_3c4 == 0x200b)) {
      *(float *)(param_1 + 0xcc) = fVar88 - fVar97 * *(float *)((long)param_1 + 0x2e4);
    }
  }
  fVar72 = *(float *)(param_1 + 0x5b);
  fVar88 = 0.0;
  fStack_1594 = 0.0;
  if (fVar72 != 0.0) {
    if (((*(char *)((long)param_1 + 0x2dc) == '\0') || (0x3a < uStack_3c4)) ||
       (fVar88 = 0.25, (1L << ((ulong)uStack_3c4 & 0x3f) & 0x400500000000000U) == 0)) {
      fVar88 = 0.5;
    }
    fVar73 = (float)FUN_0630fb74(&uStack_480,0);
    fVar74 = (float)FUN_0630fb84(&uStack_480,0);
    fVar88 = *(float *)(param_1 + 0x5c) *
             (1.0 - *(float *)((long)param_1 + 0x304)) *
             (fVar72 * fVar88 - fVar93 * (fVar73 * 0.5 + fVar74));
    *(float *)(param_1 + 0xcc) = fVar88 + *(float *)(param_1 + 0xcc);
  }
  if (*(int *)((long)param_1 + 0x664) == 0) {
    uVar91 = 0;
    if ((cVar40 == '\0') && ((*(byte *)((long)param_1 + 0x284) & 1) != 0)) {
      if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
      uVar91 = *(uint *)(param_1[0x20] + 0x1ac);
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    lVar32 = param_1[0x23];
    if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar30 = FUN_06267b6c(lVar32,0,0);
    uStack_1610 = (ulong)uVar91;
    fStack_1594 = 0.0;
    if ((uVar30 & 1) != 0) {
      lVar32 = param_1[0x23];
      if (*(int *)(*(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      plVar43 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
      if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
      uVar30 = FUN_06238d70(lVar32,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo
                                              + 0xb8) + 0x6c),0);
      if ((uVar30 & 1) != 0) {
        lVar32 = param_1[0x23];
        if (*(int *)(*plVar43 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          plVar43 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
        }
        if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
        uVar30 = FUN_06238d70(lVar32,*(undefined4 *)(*(long *)(*plVar43 + 0xb8) + 0xe4),0);
        if ((uVar30 & 1) != 0) {
          lVar32 = param_1[0x23];
          if (*(int *)(*plVar43 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            plVar43 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
          }
          if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
          fVar72 = (float)thunk_FUN_0623b08c(lVar32,*(undefined4 *)
                                                     (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
          if (param_1[0x23] == 0) goto thunk_FUN_02e3ccc4;
          fStack_1594 = (float)thunk_FUN_0623b08c(param_1[0x23],
                                                  *(undefined4 *)(*(long *)(*plVar43 + 0xb8) + 0xe4)
                                                  ,0);
          lVar32 = param_1[0x20];
          if (bVar16) {
            if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
            pfVar44 = (float *)(lVar32 + 0x1a0);
          }
          else {
            if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
            pfVar44 = (float *)(lVar32 + 0x1a8);
          }
          fStack_1594 = fStack_1594 * fVar72 * *pfVar44 * 0.25;
          if (fVar72 < fVar66 + fStack_1594) {
            fVar66 = fVar72 - fStack_1594;
          }
        }
      }
    }
  }
  else {
    uStack_1610 = 0;
  }
  fVar89 = *(float *)(param_1 + 0xcc);
  fVar72 = (float)FUN_0630fb84(&uStack_480,0);
  fVar74 = *(float *)((long)param_1 + 0x484);
  fVar73 = (float)FUN_063140ac(&uStack_490,0);
  fVar89 = fVar89 + *(float *)(param_1 + 0x5c) *
                    (1.0 - *(float *)((long)param_1 + 0x304)) *
                    fVar93 * (fVar73 + ((fVar72 * fVar74 - fVar66) - fStack_1594));
  fVar72 = (float)FUN_0630fb8c(&uStack_480,0);
  fVar73 = (float)FUN_063140bc(&uStack_490,0);
  fStack_1580 = *(float *)((long)param_1 + 0x63c) +
                ((fStack_1584 + fVar93 * (fVar66 + fVar72 + fVar73)) -
                *(float *)((long)param_1 + 0x4f4));
  fVar72 = (float)FUN_0630fb7c(&uStack_480,0);
  fVar72 = fStack_1580 - fVar93 * (fVar66 + fVar66 + fVar72);
  fVar73 = (float)FUN_0630fb74(&uStack_480,0);
  fVar73 = fVar89 + *(float *)(param_1 + 0x5c) *
                    (1.0 - *(float *)((long)param_1 + 0x304)) *
                    fVar93 * (fStack_1594 + fStack_1594 +
                             fVar66 + fVar66 + fVar73 * *(float *)((long)param_1 + 0x484));
  fVar74 = fVar89;
  fVar90 = fVar73;
  if (((*(int *)((long)param_1 + 0x664) == 0) && (cVar40 == '\0')) &&
     ((*(byte *)((long)param_1 + 0x284) >> 1 & 1) != 0)) {
    if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
    lVar32 = param_1[0xc2];
    fVar74 = (float)FUN_0630f8c0(param_1[0x20] + 0x28,0);
    if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar77 = (float)FUN_0630f8e0(param_1[0x20] + 0x28,0);
    if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar95 = *(float *)((long)param_1 + 0x444);
    fVar96 = *(float *)((long)param_1 + 0x63c);
    fVar90 = (float)(int)lVar32 * fVar86;
    fVar82 = (float)FUN_0630f890(param_1[0x20] + 0x28,0);
    fVar82 = fVar82 * fVar95 * (fVar74 - (fVar77 + fVar96)) * 0.5;
    fVar74 = (float)FUN_0630fb8c(&uStack_480,0);
    fVar96 = fVar90 * fVar93 * ((fStack_1594 + fVar66 + fVar74) - fVar82);
    fVar77 = (float)FUN_0630fb8c(&uStack_480,0);
    fVar95 = (float)FUN_0630fb7c(&uStack_480,0);
    fStack_1580 = fStack_1580 + 0.0;
    fVar72 = fVar72 + 0.0;
    fVar74 = fVar89 + fVar96;
    fVar90 = fVar90 * fVar93 * ((((fVar77 - fVar95) - fVar66) - fStack_1594) - fVar82);
    fVar89 = fVar89 + fVar90;
    fVar90 = fVar73 + fVar90;
    fVar73 = fVar73 + fVar96;
  }
  uVar33 = *(undefined8 *)((long)param_1 + 0x474);
  uVar37 = *(undefined8 *)((long)param_1 + 0x47c);
  if (DAT_06e84e41 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2f028);
    DAT_06e84e41 = '\x01';
  }
  uVar75 = **(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8);
  uVar79 = (*(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8))[1];
  if (DAT_01317bfc <
      (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar79 >> 0x20) +
      (float)uVar37 * (float)uVar79 +
      (float)uVar33 * (float)uVar75 +
      (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar75 >> 0x20)) {
    fVar77 = 0.0;
    auVar81._4_12_ = SUB1612(ZEXT816(0),4);
    auVar81._0_4_ = fVar72;
    uVar33 = auVar81._0_8_;
    uVar56 = (ulong)(uint)fStack_1580;
    uVar37 = uVar33;
  }
  else {
    FUN_062541ec(&uStack_3c0,*(undefined4 *)((long)param_1 + 0x474),(int)param_1[0x8f],
                 *(undefined4 *)((long)param_1 + 0x47c),(int)param_1[0x90],0);
    fVar90 = (fVar73 + fVar89) * 0.5;
    fVar82 = (fVar72 + fStack_1580) * 0.5;
    uStack_5e8 = uStack_3a8;
    uStack_5f0 = uStack_3b0;
    uStack_5f8 = uStack_3b8;
    uStack_600 = uStack_3c0;
    uStack_5d8 = uStack_398;
    uStack_5e0 = uStack_3a0;
    fVar73 = 0.0;
    uStack_5c8 = uStack_388;
    uStack_5d0 = uStack_390;
    auVar80 = ZEXT416((uint)(fStack_1580 - fVar82));
    fVar74 = (float)FUN_062540ec(&uStack_600,0);
    fVar74 = fVar90 + fVar74;
    fVar95 = 0.0;
    uVar56 = CONCAT44(fVar73 + 0.0,fVar82 + auVar80._0_4_);
    auVar80 = ZEXT416((uint)(fVar72 - fVar82));
    fVar89 = (float)FUN_062540ec(&uStack_600,0);
    fVar89 = fVar90 + fVar89;
    fVar77 = 0.0;
    uVar33 = CONCAT44(fVar95 + 0.0,fVar82 + auVar80._0_4_);
    auVar80 = ZEXT416((uint)(fStack_1580 - fVar82));
    fVar73 = (float)FUN_062540ec(&uStack_600,0);
    fVar73 = fVar90 + fVar73;
    fVar95 = 0.0;
    fStack_1580 = fVar82 + auVar80._0_4_;
    fVar77 = fVar77 + 0.0;
    auVar80 = ZEXT416((uint)(fVar72 - fVar82));
    fVar72 = (float)FUN_062540ec(&uStack_600,0);
    fVar90 = fVar90 + fVar72;
    uVar37 = CONCAT44(fVar95 + 0.0,fVar82 + auVar80._0_4_);
  }
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  *(float *)(lVar32 + 0x114) = fVar89;
  *(undefined8 *)(lVar32 + 0x118) = uVar33;
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  *(float *)(lVar32 + 0x108) = fVar74;
  *(ulong *)(lVar32 + 0x10c) = uVar56;
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  *(float *)(lVar32 + 0x120) = fVar73;
  *(ulong *)(lVar32 + 0x124) = CONCAT44(fVar77,fStack_1580);
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar32 = lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  *(float *)(lVar32 + 300) = fVar90;
  *(undefined8 *)(lVar32 + 0x130) = uVar37;
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar91 = *(uint *)((long)param_1 + 0x4ac);
  fVar74 = *(float *)(param_1 + 0xcc);
  fVar72 = (float)FUN_063140ac(&uStack_490,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar91) goto LAB_0603fce4;
  *(float *)(lVar32 + (long)(int)uVar91 * 0x178 + 0x138) = fVar74 + fVar93 * fVar72;
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar91 = *(uint *)((long)param_1 + 0x4ac);
  fVar74 = *(float *)((long)param_1 + 0x4f4);
  fVar90 = *(float *)((long)param_1 + 0x63c);
  fVar72 = (float)FUN_063140bc(&uStack_490,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar91) goto LAB_0603fce4;
  *(float *)(lVar32 + (long)(int)uVar91 * 0x178 + 0x144) =
       (fStack_1584 - fVar74) + fVar90 + fVar93 * fVar72;
  if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar91 = *(uint *)((long)param_1 + 0x4ac);
  if (*(uint *)(lVar32 + 0x18) <= uVar91) goto LAB_0603fce4;
  lVar32 = lVar32 + 0x20;
  uVar30 = (ulong)(uint)fVar94;
  *(float *)(lVar32 + (long)(int)uVar91 * 0x178 + 0x138) =
       (fVar73 - fVar89) / ((float)uVar56 - (float)uVar33);
  fVar70 = fVar93 * (fStack_15c4 + fVar70);
  if (*(int *)((long)param_1 + 0x664) == 0) {
    fVar70 = fVar70 / fVar87;
    fVar94 = (fVar93 * (fStack_15c8 + fVar94)) / fVar87;
  }
  else {
    fVar94 = fVar93 * (fStack_15c8 + fVar94);
  }
  fVar72 = *(float *)((long)param_1 + 0x63c);
  uVar25 = *(uint *)(param_1 + 0x96);
  if ((uVar24 == 0) || (uVar91 == uVar25)) {
    fVar70 = fVar70 + fVar72;
    fVar94 = fVar94 + fVar72;
    fVar73 = fVar70;
    fVar74 = fVar94;
    if (fVar72 != 0.0) {
      fVar73 = (fVar70 - fVar72) / *(float *)((long)param_1 + 0x444);
      fVar74 = (fVar94 - fVar72) / *(float *)((long)param_1 + 0x444);
      if (fVar73 <= fVar70) {
        fVar73 = fVar70;
      }
      if (fVar94 <= fVar74) {
        fVar74 = fVar94;
      }
    }
    lVar32 = lVar32 + (long)(int)uVar91 * 0x178;
    fVar72 = fVar73;
    if (fVar73 <= *(float *)((long)param_1 + 0x4e4)) {
      fVar72 = *(float *)((long)param_1 + 0x4e4);
    }
    fVar90 = fVar74;
    if (*(float *)(param_1 + 0x9d) <= fVar74) {
      fVar90 = *(float *)(param_1 + 0x9d);
    }
    *(float *)((long)param_1 + 0x4e4) = fVar72;
    *(float *)(param_1 + 0x9d) = fVar90;
    *(float *)(lVar32 + 300) = fVar73;
    *(float *)(lVar32 + 0x130) = fVar74;
    fVar73 = *(float *)((long)param_1 + 0x4f4);
    fVar74 = fVar70 - fVar73;
    uVar30 = (ulong)(uint)fVar74;
    *(float *)(lVar32 + 0x120) = fVar74;
    *(float *)((long)param_1 + 0x4dc) = fVar74;
    *(float *)(lVar32 + 0x128) = fVar94 - fVar73;
    *(float *)(param_1 + 0x9c) = fVar94 - fVar73;
    if (((int)param_1[0x98] == 0) || (*(char *)((long)param_1 + 0x37c) != '\0')) {
      *(float *)((long)param_1 + 0x4d4) = fVar72;
      if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fVar94 = *(float *)(param_1 + 0x9b);
      fVar72 = (float)FUN_0630f8c0(param_1[0x20] + 0x28,0);
      fVar87 = (fVar93 * fVar72) / fVar87;
      if (fVar94 <= fVar87) {
        fVar94 = fVar87;
      }
      fVar73 = *(float *)((long)param_1 + 0x4f4);
      *(float *)(param_1 + 0x9b) = fVar94;
    }
    if (fVar73 == 0.0) {
      fVar87 = *(float *)(param_1 + 0x9a);
      if (*(float *)(param_1 + 0x9a) <= fVar70) {
        fVar87 = fVar70;
      }
      *(float *)(param_1 + 0x9a) = fVar87;
    }
  }
  else {
    lVar32 = lVar32 + (long)(int)uVar91 * 0x178;
    uVar37 = *(undefined8 *)((long)param_1 + 0x4e4);
    *(undefined8 *)(lVar32 + 300) = uVar37;
    fVar73 = *(float *)((long)param_1 + 0x4f4);
    fVar87 = (float)uVar37 - fVar73;
    fVar70 = (float)((ulong)uVar37 >> 0x20) - fVar73;
    *(float *)(lVar32 + 0x120) = fVar87;
    *(float *)(lVar32 + 0x128) = fVar70;
    *(ulong *)((long)param_1 + 0x4dc) = CONCAT44(fVar70,fVar87);
  }
  uVar47 = uStack_3c4;
  lVar32 = param_1[0x75];
  if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
  uVar57 = *(uint *)((long)param_1 + 0x4ac);
  if (*(uint *)(lVar31 + 0x18) <= uVar57) goto LAB_0603fce4;
  lVar31 = lVar31 + (long)(int)uVar57 * 0x178;
  *(undefined1 *)(lVar31 + 400) = 0;
  uVar3 = *(uint *)(param_1 + 0x54);
  if ((((uStack_3c4 == 9) ||
       ((uStack_3c4 == 0x200b || uVar24 != 0 && ((*(uint *)(param_1 + 0x61) & 0xfffffffe) == 2))))
      || ((uVar24 == 0 && (((uStack_3c4 != 3 && (uStack_3c4 != 0x200b)) && (uStack_3c4 != 0xad))))))
     || ((uStack_3c4 == 0xad && bVar19 == 0 || (*(int *)((long)param_1 + 0x664) == 1)))) {
    *(undefined1 *)(lVar31 + 400) = 1;
    pfVar48 = (float *)((long)param_1 + 0x394);
    pfVar44 = (float *)(param_1 + 0x72);
    if (uVar5 == uVar60) {
      lVar32 = *(long *)(lVar32 + 0x50);
      if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
      lVar32 = lVar32 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60;
      pfVar44 = (float *)(lVar32 + 100);
      pfVar48 = (float *)(lVar32 + 0x68);
    }
    fVar94 = *pfVar44;
    fVar72 = *pfVar48;
    fVar87 = *(float *)(param_1 + 0x74);
    fVar70 = 0.0;
    fVar73 = *(float *)(param_1 + 0xcc);
    fStack_15c0 = (fVar92 - fVar94) - fVar72;
    bVar16 = true;
    if ((fVar87 <= fStack_15c0) && (bVar16 = false, !NAN(fVar87))) {
      bVar16 = fVar87 == -1.0;
    }
    if (!bVar16) {
      fStack_15c0 = fVar87;
    }
    fVar87 = 0.0;
    if ((char)param_1[0x1e] == '\0') {
      fVar87 = (float)FUN_0630fb94(&uStack_480,0);
    }
    fVar74 = *(float *)((long)param_1 + 0x4f4);
    uVar30 = (ulong)(uint)*(float *)(param_1 + 0x5c);
    fStack_15fc = fVar62;
    if (uStack_3c4 != 0xad) {
      fStack_15fc = fVar93;
    }
    fVar62 = *(float *)((long)param_1 + 0x304);
    auVar80 = ZEXT416((uint)fVar62);
    if ((0.0 < fVar74) && (*(char *)((long)param_1 + 0x2f4) == '\0')) {
      fVar70 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4ec);
    }
    iVar26 = *(int *)((long)param_1 + 0x4ac);
    fVar70 = (*(float *)((long)param_1 + 0x4d4) - (*(float *)(param_1 + 0x9d) - fVar74)) + fVar70;
    if (fVar63 < fVar70) {
      if ((int)param_1[99] == -1) {
        *(int *)(param_1 + 99) = iVar26;
      }
      plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      fVar90 = DAT_01317af0;
      if ((char)param_1[0x4c] != '\0') {
        if (0.0 < fVar74) {
          fVar74 = *(float *)(param_1 + 0x5f);
          if ((fVar74 < *(float *)((long)param_1 + 0x2ec)) &&
             (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e])) {
            fVar83 = *(float *)((long)param_1 + 0x2ec) +
                     ((fVar98 - fVar70) / (float)(int)param_1[0x98]) / fVar65;
            if (fVar83 <= fVar74) {
              fVar83 = fVar74;
            }
            goto LAB_0603fbd0;
          }
        }
        fVar70 = *(float *)((long)param_1 + 0x20c);
        fVar74 = *(float *)(param_1 + 0x4f);
        if ((fVar74 < fVar70) && (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e])) {
          *(float *)((long)param_1 + 0x264) = fVar70;
          fVar83 = (fVar70 - *(float *)(param_1 + 0x4d)) * 0.5;
          if (fVar83 <= fVar90) {
            fVar83 = fVar90;
          }
          fVar62 = (fVar70 - fVar83) * 20.0 + 0.5;
          fVar83 = _UNK_01317b80;
          if (fVar62 != INFINITY) {
            fVar83 = (float)(int)fVar62 / 20.0;
          }
          if (fVar83 <= fVar74) {
            fVar83 = fVar74;
          }
          *(float *)((long)param_1 + 0x20c) = fVar83;
          return;
        }
      }
      iVar27 = *(int *)((long)param_1 + 0x314);
      if (iVar27 < 5) {
        if (iVar27 == 1) {
          lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar32 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar32 = *plVar43;
          }
          lVar31 = *(long *)(lVar32 + 0xb8);
          if (*(int *)(lVar31 + 0x1708) != 0) {
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar31 = *(long *)(*plVar43 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&uStack_3c0,lVar31 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(auStack_9b8,&uStack_3c0,0x3b8);
            puVar38 = auStack_9b8;
LAB_0603b314:
            iVar26 = FUN_0608c590(param_1,puVar38,0);
            iVar29 = iVar29 + 1;
            uStack_3f8 = CONCAT44(uStack_3f8._4_4_,iVar26 + -1);
            uVar57 = *(int *)((long)param_1 + 0x4ac) - 1;
            *(uint *)((long)param_1 + 0x4ac) = uVar57;
            uVar20 = 0x2026;
            goto LAB_0603b340;
          }
LAB_0603b348:
          *(undefined8 *)((long)param_1 + 0x4ac) = 0;
          uStack_3d8 = DAT_01318128;
          uStack_3f8 = CONCAT44(uStack_3f8._4_4_,0xffffffff);
          fVar62 = fVar93;
          goto LAB_06038edc;
        }
        if (iVar27 != 3) goto LAB_0603acbc;
        lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar32 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar32 = *plVar43;
        }
        lVar32 = *(long *)(lVar32 + 0xb8) + 0xbc8;
LAB_0603af60:
        uVar20 = FUN_0608c590(param_1,lVar32,0);
        uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar20);
      }
      else {
        if (iVar27 == 5) {
          if (((int)(uint)uStack_3f8 < 0) || (iVar26 == 0)) {
            *(undefined4 *)((long)param_1 + 0x4ac) = 0;
            uStack_3f8 = CONCAT44(uStack_3f8._4_4_,0xffffffff);
            uStack_3d8 = DAT_01318128;
            plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar62 = fVar93;
          }
          else {
            auVar80 = ZEXT416((uint)fVar63);
            lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (fVar63 < *(float *)((long)param_1 + 0x4e4) - *(float *)(param_1 + 0x9d)) {
              if (*(int *)(lVar32 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar32 = *plVar43;
              }
              lVar32 = *(long *)(lVar32 + 0xb8) + 0x458;
              goto LAB_0603af60;
            }
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar32 = *plVar43;
            }
            uVar20 = FUN_0608c590(param_1,*(long *)(lVar32 + 0xb8) + 0x458,0);
            uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar20);
            *(undefined4 *)(param_1 + 0x96) = *(undefined4 *)((long)param_1 + 0x4ac);
            lVar32 = *plVar43;
            *(undefined1 *)((long)param_1 + 0x37c) = 1;
            uVar37 = *(undefined8 *)(*(long *)(lVar32 + 0xb8) + 0x1730);
            *(undefined4 *)((long)param_1 + 0x4ec) = 0;
            *(undefined4 *)((long)param_1 + 0x4f4) = 0;
            *(float *)(param_1 + 0xcc) = *(float *)((long)param_1 + 0x44c) + 0.0;
            uVar37 = NEON_rev64(uVar37,4);
            auVar80 = ZEXT816(0);
            *(int *)(param_1 + 0x98) = (int)param_1[0x98] + 1;
            *(undefined8 *)((long)param_1 + 0x4e4) = uVar37;
            param_1[0x9a] = 0;
            *(int *)((long)param_1 + 0x4cc) = *(int *)((long)param_1 + 0x4cc) + 1;
            fVar62 = fVar93;
          }
          goto LAB_06038edc;
        }
        if (iVar27 != 6) goto LAB_0603acbc;
        lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar32 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar32 = *plVar43;
        }
        uVar20 = FUN_0608c590(param_1,*(long *)(lVar32 + 0xb8) + 0xbc8,0);
        lVar32 = param_1[100];
        uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar20);
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_06267b6c(lVar32,0,0);
        if ((uVar34 & 1) != 0) {
          plVar58 = (long *)param_1[100];
          uVar37 = (**(code **)(*param_1 + 0x548))(param_1,*(undefined8 *)(*param_1 + 0x550));
          if (plVar58 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar58 + 0x558))(plVar58,uVar37,*(undefined8 *)(*plVar58 + 0x560));
          lVar32 = param_1[100];
          if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar32 + 0x440) = (int)param_1[0x88];
          FUN_0607fed4(lVar32,*(undefined4 *)((long)param_1 + 0x4ac),0);
          plVar58 = (long *)param_1[100];
          if (plVar58 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar58 + 0x7d8))(plVar58,0,0,*(undefined8 *)(*plVar58 + 0x7e0));
          *(undefined1 *)(param_1 + 0x66) = 1;
        }
      }
      uStack_3d8 = CONCAT44(3,iVar26);
      fVar62 = fVar93;
      goto LAB_06038edc;
    }
LAB_0603acbc:
    plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((uVar34 & 1) != 0) {
      uVar30 = (ulong)(uint)_UNK_01317cd8;
      fVar70 = 1.0;
      if ((uVar3 & 0x18) != 0) {
        fVar70 = _UNK_01317cd8;
      }
      fVar87 = ABS(fVar73) + *(float *)(param_1 + 0x5c) * fVar87 * (1.0 - fVar62) * fStack_15fc;
      if (fVar70 * fStack_15c0 < fVar87) {
        if ((((int)param_1[0x61] == 0) || ((int)param_1[0x61] == 3)) ||
           (iVar26 == (int)param_1[0x96])) {
          if (((char)param_1[0x4c] != '\0') &&
             (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e])) {
            fStack_15fc = 100.0;
            fVar73 = *(float *)(param_1 + 0x60) / 100.0;
            if (fVar62 < fVar73) goto LAB_0603fc3c;
            fVar62 = *(float *)((long)param_1 + 0x20c);
            fVar73 = *(float *)(param_1 + 0x4f);
            auVar80 = ZEXT416((uint)fVar73);
            if (fVar73 < fVar62) {
LAB_0603fc84:
              fVar83 = DAT_01317af0;
              *(float *)((long)param_1 + 0x264) = fVar62;
              fVar97 = (fVar62 - *(float *)(param_1 + 0x4d)) * 0.5;
              if (fVar97 <= fVar83) {
                fVar97 = fVar83;
              }
              fVar62 = (fVar62 - fVar97) * 20.0 + 0.5;
              fVar83 = _UNK_01317b80;
              if (fVar62 != INFINITY) {
                fVar83 = (float)(int)fVar62 / 20.0;
              }
              if (fVar83 <= fVar73) {
                fVar83 = fVar73;
              }
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
              ;
            }
          }
          iVar27 = *(int *)((long)param_1 + 0x314);
          if (iVar27 == 1) {
            lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar32 = *plVar43;
            }
            lVar31 = *(long *)(lVar32 + 0xb8);
            if (*(int *)(lVar31 + 0x1708) == 0) goto LAB_0603b348;
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar31 = *(long *)(*plVar43 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&uStack_3c0,lVar31 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(auStack_1128,&uStack_3c0,0x3b8);
            puVar38 = auStack_1128;
            goto LAB_0603b314;
          }
          if (iVar27 == 6) {
            lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar32 = *plVar43;
            }
            uVar20 = FUN_0608c590(param_1,*(long *)(lVar32 + 0xb8) + 0xa0,0);
            lVar32 = param_1[100];
            uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar20);
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar34 = FUN_06267b6c(lVar32,0,0);
            if ((uVar34 & 1) != 0) {
              plVar58 = (long *)param_1[100];
              uVar37 = (**(code **)(*param_1 + 0x548))(param_1,*(undefined8 *)(*param_1 + 0x550));
              if (plVar58 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar58 + 0x558))(plVar58,uVar37,*(undefined8 *)(*plVar58 + 0x560));
              lVar32 = param_1[100];
              if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar32 + 0x440) = (int)param_1[0x88];
              FUN_0607fed4(lVar32,*(undefined4 *)((long)param_1 + 0x4ac),0);
              plVar58 = (long *)param_1[100];
              if (plVar58 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar58 + 0x7d8))(plVar58,0,0,*(undefined8 *)(*plVar58 + 0x7e0));
              *(undefined1 *)(param_1 + 0x66) = 1;
            }
            uVar57 = *(uint *)((long)param_1 + 0x4ac);
            goto LAB_0603b288;
          }
          if (iVar27 == 3) {
            lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar32 = *plVar43;
            }
            lVar32 = *(long *)(lVar32 + 0xb8) + 0xa0;
            goto LAB_0603af60;
          }
        }
        else {
          lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar32 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar32 = *plVar43;
          }
          iVar27 = FUN_0608c590(param_1,*(long *)(lVar32 + 0xb8) + 0xa0,0);
          uStack_3f8 = CONCAT44(uStack_3f8._4_4_,iVar27);
          if (*(float *)(param_1 + 0x5e) == DAT_01317908) {
            lVar32 = param_1[0x75];
            if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
            fVar62 = *(float *)((long)param_1 + 0x4f4);
            fVar73 = 0.0;
            if ((0.0 < fVar62) && (*(char *)((long)param_1 + 0x2f4) == '\0')) {
              fVar73 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4ec);
            }
            uVar30 = (ulong)(uint)*(float *)(param_1 + 0x5d);
            fVar73 = fVar97 * *(float *)(param_1 + 0x5d) +
                     *(float *)(lVar31 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 0x14c
                               ) + (fVar73 - *(float *)(param_1 + 0x9d)) +
                     fVar65 * (fVar64 + *(float *)((long)param_1 + 0x2ec));
          }
          else {
            lVar32 = param_1[0x75];
            *(undefined1 *)((long)param_1 + 0x2f4) = 1;
            if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
            fVar73 = *(float *)(param_1 + 0x5e) + fVar97 * *(float *)(param_1 + 0x5d);
            fVar62 = *(float *)((long)param_1 + 0x4f4);
          }
          puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar32 = *(long *)(lVar32 + 0x38);
          if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
          uVar47 = *(uint *)((long)param_1 + 0x4ac);
          if ((*(uint *)(lVar32 + 0x18) <= uVar47) ||
             (uVar57 = uVar47 - 1, *(uint *)(lVar32 + 0x18) <= uVar57)) goto LAB_0603fce4;
          fStack_15fc = *(float *)((long)param_1 + 0x4d4);
          lVar32 = lVar32 + 0x20;
          fVar74 = *(float *)(lVar32 + (long)(int)uVar47 * 0x178 + 0x130);
          auVar80 = ZEXT416((uint)fVar74);
          fVar74 = (fVar73 + fStack_15fc + fVar62) - fVar74;
          if ((*(short *)(lVar32 + (long)(int)uVar57 * 0x178 + 4) == 0xad && bVar19 == 0) &&
             ((*(int *)((long)param_1 + 0x314) == 0 || (fVar74 < fVar63)))) {
            bVar19 = 0;
            uStack_3d8 = CONCAT44(0x2d,uVar57);
            uStack_3f8 = CONCAT44(uStack_3f8._4_4_,iVar27 + -1);
            *(uint *)((long)param_1 + 0x4ac) = uVar57;
            plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar62 = fVar93;
            goto LAB_06038edc;
          }
          if (*(short *)(lVar32 + (long)(int)uVar47 * 0x178 + 4) == 0xad) {
            bVar19 = 1;
            plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar62 = fVar93;
            goto LAB_06038edc;
          }
          if ((char)param_1[0x4c] != '\0' && ((bVar18 ^ 0xff) & 1) == 0) {
            fVar73 = *(float *)(param_1 + 0x60) / 100.0;
            fVar62 = *(float *)((long)param_1 + 0x304);
            if ((fVar62 < fVar73) && (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e]))
            goto LAB_0603fc3c;
            fVar62 = *(float *)((long)param_1 + 0x20c);
            fVar73 = *(float *)(param_1 + 0x4f);
            auVar80 = ZEXT416((uint)fVar73);
            if ((fVar73 < fVar62) && (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e]))
            goto LAB_0603fc84;
          }
          lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar32 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar32 = *(long *)puVar13;
          }
          if (bVar18 != 0) {
            lVar31 = *(long *)(lVar32 + 0xb8);
            iVar27 = *(int *)(lVar31 + 0xf80);
            if ((iVar27 != -1) && (iVar27 != iStack_16e0)) {
              if (*(int *)(lVar32 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
                lVar31 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo
                                  + 0xb8);
              }
              iVar28 = FUN_0608c590(param_1,lVar31 + 0xf80,0);
              uStack_3f8 = CONCAT44(uStack_3f8._4_4_,iVar28);
              if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
              goto thunk_FUN_02e3ccc4;
              uVar47 = *(int *)((long)param_1 + 0x4ac) - 1;
              if (*(uint *)(lVar32 + 0x18) <= uVar47) goto LAB_0603fce4;
              iStack_16e0 = iVar27;
              if (*(short *)(lVar32 + (long)(int)uVar47 * 0x178 + 0x24) == 0xad) {
                bVar19 = 0;
                uStack_3d8 = CONCAT44(0x2d,uVar47);
                uStack_3f8 = CONCAT44(uStack_3f8._4_4_,iVar28 + -1);
                *(uint *)((long)param_1 + 0x4ac) = uVar47;
                plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                fVar62 = fVar93;
                goto LAB_06038edc;
              }
            }
          }
          if (fVar74 <= fVar63) {
            auVar80 = ZEXT416((uint)fVar93);
            fStack_15fc = fVar97;
            FUN_0608d070(param_1,uStack_3f8 & 0xffffffff,acStack_3cc,&fStack_3c8,0);
            uVar30 = uStack_1610;
LAB_0603cc70:
            bVar18 = 1;
            bVar19 = 0;
            bVar10 = true;
            plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar62 = fVar93;
            goto LAB_06038edc;
          }
          if ((int)param_1[99] == -1) {
            *(undefined4 *)(param_1 + 99) = *(undefined4 *)((long)param_1 + 0x4ac);
          }
          if ((char)param_1[0x4c] != '\0') {
            fVar62 = *(float *)(param_1 + 0x5f);
            if ((fVar62 < *(float *)((long)param_1 + 0x2ec)) &&
               (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e])) {
              fVar83 = *(float *)((long)param_1 + 0x2ec) +
                       ((fVar98 - fVar74) / (float)((int)param_1[0x98] + 1)) / fVar65;
              if (fVar83 <= fVar62) {
                fVar83 = fVar62;
              }
LAB_0603fbd0:
              *(float *)((long)param_1 + 0x2ec) = fVar83;
              return;
            }
            fVar73 = *(float *)(param_1 + 0x60) / 100.0;
            fVar62 = *(float *)((long)param_1 + 0x304);
            if ((fVar62 < fVar73) && (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e])) {
LAB_0603fc3c:
              fVar83 = fVar87;
              if (0.0 < fVar62) {
                fVar83 = fVar87 / (1.0 - fVar62);
              }
              fVar62 = fVar62 + (fVar87 - fVar70 * (fStack_15c0 + _UNK_01317b20)) / fVar83;
              if (fVar73 <= fVar62) {
                fVar62 = fVar73;
              }
              *(float *)((long)param_1 + 0x304) = fVar62;
              return;
            }
            fVar62 = *(float *)((long)param_1 + 0x20c);
            fVar73 = *(float *)(param_1 + 0x4f);
            auVar80 = ZEXT416((uint)fVar73);
            if ((fVar73 < fVar62) && (*(int *)((long)param_1 + 0x26c) < (int)param_1[0x4e]))
            goto LAB_0603fc84;
          }
          iVar27 = *(int *)((long)param_1 + 0x314);
          bVar19 = 0;
          uVar30 = uStack_1610;
          if (iVar27 < 3) {
            if (iVar27 != 0) {
              if (iVar27 == 1) {
                lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                if (*(int *)(lVar32 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                }
                lVar31 = *(long *)(lVar32 + 0xb8);
                if (*(int *)(lVar31 + 0x1708) == 0) {
                  uStack_3f8 = CONCAT44(uStack_3f8._4_4_,0xffffffff);
                  uStack_3d8 = DAT_01318128;
                  *(undefined8 *)((long)param_1 + 0x4ac) = 0;
                }
                else {
                  if (*(int *)(lVar32 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar31 = *(long *)(*(long *)
                                        System_Collections_Generic_List<AudioListener>_TypeInfo +
                                      0xb8);
                  }
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                            (&uStack_3c0,lVar31 + 0x1338,
                             *(undefined8 *)
                              System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                  memcpy(auStack_d70,&uStack_3c0,0x3b8);
                  iVar26 = FUN_0608c590(param_1,auStack_d70,0);
                  uStack_3f8 = CONCAT44(uStack_3f8._4_4_,iVar26 + -1);
                  iVar26 = *(int *)((long)param_1 + 0x4ac) + -1;
                  iVar29 = iVar29 + 1;
                  *(int *)((long)param_1 + 0x4ac) = iVar26;
                  uStack_3d8 = CONCAT44(0x2026,iVar26);
                }
                goto LAB_0603cf9c;
              }
              if (iVar27 != 2) goto LAB_0603ada8;
            }
LAB_0603cca8:
            auVar80 = ZEXT416((uint)fVar93);
            fStack_15fc = fVar97;
            FUN_0608d070(param_1,uStack_3f8 & 0xffffffff,acStack_3cc,&fStack_3c8,0);
            bVar19 = 0;
            bVar18 = 1;
            bVar10 = true;
            plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            uVar30 = uStack_1610;
            fVar62 = fVar93;
            goto LAB_06038edc;
          }
          if (4 < iVar27) {
            if (iVar27 == 5) {
              auVar80 = ZEXT416((uint)fVar93);
              *(undefined1 *)((long)param_1 + 0x37c) = 1;
              fStack_15fc = fVar97;
              FUN_0608d070(param_1,uStack_3f8 & 0xffffffff,acStack_3cc,&fStack_3c8,0);
              *(undefined4 *)((long)param_1 + 0x4ec) = 0;
              *(undefined4 *)((long)param_1 + 0x4f4) = 0;
              *(int *)((long)param_1 + 0x4cc) = *(int *)((long)param_1 + 0x4cc) + 1;
              param_1[0x9a] = 0;
              uVar30 = uStack_1610;
              goto LAB_0603cc70;
            }
            if (iVar27 != 6) goto LAB_0603ada8;
            lVar32 = param_1[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar30 = FUN_06267b6c(lVar32,0,0);
            if ((uVar30 & 1) != 0) {
              plVar43 = (long *)param_1[100];
              uVar37 = (**(code **)(*param_1 + 0x548))(param_1,*(undefined8 *)(*param_1 + 0x550));
              if (plVar43 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar43 + 0x558))(plVar43,uVar37,*(undefined8 *)(*plVar43 + 0x560));
              lVar32 = param_1[100];
              if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar32 + 0x440) = (int)param_1[0x88];
              FUN_0607fed4(lVar32,*(undefined4 *)((long)param_1 + 0x4ac),0);
              plVar43 = (long *)param_1[100];
              if (plVar43 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
              *(undefined1 *)(param_1 + 0x66) = 1;
            }
            uStack_3d8 = CONCAT44(3,*(undefined4 *)((long)param_1 + 0x4ac));
            goto LAB_0603cf9c;
          }
          if (iVar27 == 3) {
            lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            }
            uVar20 = FUN_0608c590(param_1,*(long *)(lVar32 + 0xb8) + 0xbc8,0);
            uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar20);
            uStack_3d8 = CONCAT44(3,iVar26);
LAB_0603cf9c:
            bVar19 = 0;
            plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            uVar30 = uStack_1610;
            fVar62 = fVar93;
            goto LAB_06038edc;
          }
          if (iVar27 == 4) goto LAB_0603cca8;
        }
      }
    }
LAB_0603ada8:
    if (uVar24 == 0) {
      if (uStack_3c4 == 0xad) {
        if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
        *(undefined1 *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178 + 400) = 0;
      }
      else {
        lVar32 = 0x508;
        if (*(char *)((long)param_1 + 0x1ec) != '\0') {
          lVar32 = 0x144;
        }
        if (*(int *)((long)param_1 + 0x664) == 1) {
          (**(code **)(*param_1 + 0x8c8))
                    (param_1,*(undefined4 *)((long)param_1 + lVar32),
                     *(undefined8 *)(*param_1 + 0x8d0));
        }
        else if (*(int *)((long)param_1 + 0x664) == 0) {
          (**(code **)(*param_1 + 0x8b8))
                    (param_1,*(undefined4 *)((long)param_1 + lVar32),
                     *(undefined8 *)(*param_1 + 0x8c0));
        }
        if (bVar10) {
          *(undefined4 *)((long)param_1 + 0x4b4) = *(undefined4 *)((long)param_1 + 0x4ac);
        }
        *(undefined4 *)((long)param_1 + 0x4bc) = *(undefined4 *)((long)param_1 + 0x4ac);
        *(int *)((long)param_1 + 0x4c4) = *(int *)((long)param_1 + 0x4c4) + 1;
        if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x50), lVar32 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
        bVar10 = false;
        lVar32 = lVar32 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60;
        *(float *)(lVar32 + 100) = fVar94;
        *(float *)(lVar32 + 0x68) = fVar72;
      }
    }
    else {
      lVar32 = param_1[0x75];
      if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar47 = *(uint *)((long)param_1 + 0x4ac);
      if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_0603fce4;
      *(undefined1 *)(lVar31 + (long)(int)uVar47 * 0x178 + 400) = 0;
      *(uint *)((long)param_1 + 0x4bc) = uVar47;
      lVar31 = *(long *)(lVar32 + 0x50);
      if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
      uVar47 = *(uint *)(lVar31 + 0x18);
      if (uVar47 <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
      lVar31 = lVar31 + 0x20;
      lVar51 = lVar31 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60;
      iVar26 = *(int *)(lVar51 + 0xc) + 1;
      uStack_3f8 = CONCAT44(iVar26,(uint)uStack_3f8);
      *(int *)(lVar51 + 0xc) = iVar26;
      uVar57 = *(uint *)(param_1 + 0x98);
      *(int *)(param_1 + 0x99) = iVar26;
      if (uVar47 <= uVar57) goto LAB_0603fce4;
      lVar51 = lVar31 + (long)(int)uVar57 * 0x60;
      *(float *)(lVar51 + 0x44) = fVar94;
      *(float *)(lVar51 + 0x48) = fVar72;
      *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
      if (uStack_3c4 == 0xa0) {
        *(int *)(lVar31 + (long)(int)uVar57 * 0x60) =
             *(int *)(lVar31 + (long)(int)uVar57 * 0x60) + 1;
      }
    }
  }
  else {
    if (((uStack_3c4 & 0xfffffffe) == 10) && (*(int *)((long)param_1 + 0x314) == 6)) {
      fVar62 = 0.0;
      if ((0.0 < fVar73) && (*(char *)((long)param_1 + 0x2f4) == '\0')) {
        fVar62 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4ec);
      }
      fStack_15fc = *(float *)((long)param_1 + 0x4d4);
      auVar80 = ZEXT416((uint)fVar63);
      if (fVar63 < (fStack_15fc - (*(float *)(param_1 + 0x9d) - fVar73)) + fVar62) {
        if ((int)param_1[99] == -1) {
          *(uint *)(param_1 + 99) = uVar57;
        }
        plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar32 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar32 = *plVar43;
        }
        uVar20 = FUN_0608c590(param_1,*(long *)(lVar32 + 0xb8) + 0xbc8,0);
        lVar32 = param_1[100];
        uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar20);
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_06267b6c(lVar32,0,0);
        if ((uVar34 & 1) != 0) {
          plVar58 = (long *)param_1[100];
          uVar37 = (**(code **)(*param_1 + 0x548))(param_1,*(undefined8 *)(*param_1 + 0x550));
          if (plVar58 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar58 + 0x558))(plVar58,uVar37,*(undefined8 *)(*plVar58 + 0x560));
          lVar32 = param_1[100];
          if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar32 + 0x440) = (int)param_1[0x88];
          FUN_0607fed4(lVar32,*(undefined4 *)((long)param_1 + 0x4ac),0);
          plVar58 = (long *)param_1[100];
          if (plVar58 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar58 + 0x7d8))(plVar58,0,0,*(undefined8 *)(*plVar58 + 0x7e0));
          *(undefined1 *)(param_1 + 0x66) = 1;
        }
LAB_0603b288:
        uVar20 = 3;
LAB_0603b340:
        uStack_3d8 = CONCAT44(uVar20,uVar57);
        fVar62 = fVar93;
        goto LAB_06038edc;
      }
    }
    if ((((uStack_3c4 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(uStack_3c4 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (uStack_3c4 - 10 < 2)) || (uStack_3c4 == 0xa0)) {
      if (uStack_3c4 == 0xad) goto LAB_0603b638;
LAB_0603b58c:
      if ((uStack_3c4 == 0x200b) || (uStack_3c4 == 0x2060)) goto LAB_0603b638;
      lVar32 = param_1[0x75];
      if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
      lVar31 = lVar31 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60;
      *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
      *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar34 = FUN_055814cc(uVar47,0);
      if (((uVar34 & 1) != 0) && (uStack_3c4 != 0xad)) goto LAB_0603b58c;
    }
    if (uStack_3c4 == 0xa0) {
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x50), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
      lVar32 = lVar32 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60;
      *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
    }
  }
LAB_0603b638:
  if ((*(int *)((long)param_1 + 0x314) == 1) && ((uVar5 != uVar60 || (uStack_3c4 == 0x2d)))) {
    if (param_1[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar87 = *(float *)(param_1 + 0x42);
    fVar62 = (float)FUN_0630f888(param_1[0xcf] + 0x28,0);
    if (param_1[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar70 = (float)FUN_0630f890(param_1[0xcf] + 0x28,0);
    lVar32 = param_1[0xce];
    if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
    fVar72 = *(float *)((long)param_1 + 0x444);
    fVar73 = *(float *)(lVar32 + 0x2c);
    fVar94 = (float)FUN_0630fd88(*(long *)(lVar32 + 0x20),0);
    lVar32 = param_1[0x72];
    fVar94 = fVar72 * fVar83 * (fVar87 / fVar62) * fVar70 * fVar73 * fVar94;
    if ((uStack_3c4 == 10) && (*(int *)((long)param_1 + 0x4ac) != (int)param_1[0x96])) {
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar47 = *(int *)((long)param_1 + 0x4ac) - 1;
      if (*(uint *)(lVar32 + 0x18) <= uVar47) goto LAB_0603fce4;
      if (param_1[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar87 = *(float *)(lVar32 + (long)(int)uVar47 * 0x178 + 0x58);
      fVar62 = (float)FUN_0630f888(param_1[0xcf] + 0x28,0);
      if (param_1[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar70 = (float)FUN_0630f890(param_1[0xcf] + 0x28,0);
      lVar32 = param_1[0xce];
      if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar72 = *(float *)((long)param_1 + 0x444);
      fVar73 = *(float *)(lVar32 + 0x2c);
      fVar94 = (float)FUN_0630fd88(*(long *)(lVar32 + 0x20),0);
      if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x50), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
      lVar32 = *(long *)(lVar32 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60 + 100);
      fVar94 = fVar72 * fVar83 * (fVar87 / fVar62) * fVar70 * fVar73 * fVar94;
    }
    fVar87 = *(float *)((long)param_1 + 0x4f4);
    fVar62 = 0.0;
    fVar70 = 0.0;
    if ((0.0 < fVar87) && (*(char *)((long)param_1 + 0x2f4) == '\0')) {
      fVar70 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4ec);
    }
    fVar72 = *(float *)((long)param_1 + 0x4d4);
    fVar73 = *(float *)(param_1 + 0x9d);
    fVar74 = *(float *)(param_1 + 0xcc);
    fStack_1580 = (float)lVar32;
    fStack_157c = (float)((ulong)lVar32 >> 0x20);
    if ((char)param_1[0x1e] == '\0') {
      if ((param_1[0xce] == 0) || (lVar32 = *(long *)(param_1[0xce] + 0x20), lVar32 == 0))
      goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&uStack_3c0,lVar32,0);
      uStack_518 = uStack_3b8;
      uStack_520 = uStack_3c0;
      uStack_510 = (undefined4)uStack_3b0;
      fVar62 = (float)FUN_0630fb94(&uStack_520,0);
    }
    puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    fStack_157c = (fVar92 - fStack_1580) - fStack_157c;
    fVar90 = *(float *)(param_1 + 0x74);
    bVar16 = true;
    if ((fVar90 <= fStack_157c) && (bVar16 = false, !NAN(fVar90))) {
      bVar16 = fVar90 == -1.0;
    }
    if (!bVar16) {
      fStack_157c = fVar90;
    }
    fVar90 = 1.0;
    if ((uVar3 & 0x18) != 0) {
      fVar90 = _UNK_01317cd8;
    }
    uVar30 = (ulong)(uint)fVar90;
    if ((ABS(fVar74) +
         fVar94 * *(float *)(param_1 + 0x5c) * fVar62 * (1.0 - *(float *)((long)param_1 + 0x304)) <
         fVar90 * fStack_157c) && ((fVar72 - (fVar73 - fVar87)) + fVar70 < fVar63)) {
      lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar32 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar32 = *(long *)puVar13;
      }
      FUN_0608c948(param_1,*(long *)(lVar32 + 0xb8) + 0x810,uStack_3f8 & 0xffffffff,
                   *(undefined4 *)((long)param_1 + 0x4ac),0);
      lVar32 = *(long *)(*(long *)puVar13 + 0xb8);
      memcpy(&uStack_3c0,(void *)(lVar32 + 0x810),0x3b8);
      FUN_046b8738(lVar32 + 0x1338,&uStack_3c0,
                   *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
    }
  }
  lVar32 = param_1[0x75];
  if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)param_1 + 0x4ac)) goto LAB_0603fce4;
  lVar31 = lVar31 + (long)(int)*(uint *)((long)param_1 + 0x4ac) * 0x178;
  uVar47 = *(uint *)(param_1 + 0x98);
  *(uint *)(lVar31 + 0x5c) = uVar47;
  *(undefined4 *)(lVar31 + 0x60) = *(undefined4 *)((long)param_1 + 0x4cc);
  if ((uVar5 == uVar60) ||
     ((uStack_3c4 < 0xe && ((1 << (ulong)(uStack_3c4 & 0x1f) & 0x2c00U) != 0)))) {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar32 + 0x18) <= uVar47) goto LAB_0603fce4;
    if (*(int *)(lVar32 + (long)(int)uVar47 * 0x60 + 0x24) == 1) goto LAB_0603b9e0;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
LAB_0603b9e0:
    if (*(uint *)(lVar32 + 0x18) <= uVar47) goto LAB_0603fce4;
    *(int *)(lVar32 + (long)(int)uVar47 * 0x60 + 0x6c) = (int)param_1[0x54];
  }
  if (uStack_3c4 == 9) {
    if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar62 = (float)FUN_0630f930(param_1[0x20] + 0x28,0);
    if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar87 = (float)NEON_ucvtf((uint)*(byte *)(param_1[0x20] + 0x1b1));
    fVar70 = *(float *)(param_1 + 0xcc);
    auVar80 = ZEXT416((uint)fVar70);
    fVar87 = fVar93 * fVar62 * fVar87;
    if ((char)param_1[0x1e] == '\0') {
      fStack_15fc = fVar87 * (float)(int)(fVar70 / fVar87);
      fVar62 = fStack_15fc;
      if (fStack_15fc <= fVar70) {
        fVar62 = fVar87 + fVar70;
      }
    }
    else {
      fStack_15fc = fVar87 * (float)(int)(fVar70 / fVar87);
      fVar62 = fStack_15fc;
      if (fVar70 <= fStack_15fc) {
        fVar62 = fVar70 - fVar87;
      }
    }
LAB_0603bc44:
    *(float *)(param_1 + 0xcc) = fVar62;
  }
  else {
    fVar62 = *(float *)(param_1 + 0x5b);
    if (fVar62 == 0.0) {
      fVar62 = *(float *)(param_1 + 0xcc);
      if ((char)param_1[0x1e] == '\0') {
        fVar70 = (float)FUN_0630fb94(&uStack_480,0);
        fVar72 = *(float *)((long)param_1 + 0x484);
        fVar94 = (float)FUN_063140cc(&uStack_490,0);
        if (param_1[0x20] != 0) {
          fStack_15fc = *(float *)((long)param_1 + 0x304);
          fVar87 = *(float *)(param_1 + 0x5c);
          fVar62 = fVar62 + fVar87 * (1.0 - fStack_15fc) *
                                     (*(float *)((long)param_1 + 0x2d4) +
                                     fVar93 * (fVar70 * fVar72 + fVar94) +
                                     fVar97 * ((float)uStack_1610 +
                                              fVar69 + *(float *)(param_1[0x20] + 0x1a4)));
          *(float *)(param_1 + 0xcc) = fVar62;
          goto joined_r0x0603bb78;
        }
        goto thunk_FUN_02e3ccc4;
      }
      fVar87 = (float)FUN_063140cc(&uStack_490,0);
      if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fStack_15fc = *(float *)((long)param_1 + 0x304);
      auVar80 = ZEXT416((uint)*(float *)(param_1 + 0x5c));
      fVar62 = fVar62 - *(float *)(param_1 + 0x5c) *
                        (1.0 - fStack_15fc) *
                        (*(float *)((long)param_1 + 0x2d4) +
                        fVar93 * fVar87 +
                        fVar97 * ((float)uStack_1610 + fVar69 + *(float *)(param_1[0x20] + 0x1a4)));
      *(float *)(param_1 + 0xcc) = fVar62;
      if ((uVar24 != 0) || (uStack_3c4 == 0x200b)) {
        fVar87 = fVar97 * *(float *)((long)param_1 + 0x2e4);
        auVar80 = ZEXT416((uint)fVar87);
        fStack_15fc = fVar97;
        fVar62 = fVar62 - fVar87;
        goto LAB_0603bc44;
      }
    }
    else {
      if (((*(char *)((long)param_1 + 0x2dc) != '\0') && (uStack_3c4 < 0x3b)) &&
         ((1L << ((ulong)uStack_3c4 & 0x3f) & 0x400500000000000U) != 0)) {
        fVar62 = fVar62 * 0.5;
      }
      if (param_1[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fStack_15fc = *(float *)((long)param_1 + 0x304);
      fVar87 = *(float *)(param_1 + 0xcc);
      fVar62 = fVar87 + *(float *)(param_1 + 0x5c) *
                        (1.0 - fStack_15fc) *
                        (*(float *)((long)param_1 + 0x2d4) +
                        (fVar62 - fVar88) + fVar97 * (fVar69 + *(float *)(param_1[0x20] + 0x1a4)));
      *(float *)(param_1 + 0xcc) = fVar62;
joined_r0x0603bb78:
      if ((uVar24 != 0) || (auVar80 = ZEXT416((uint)fVar87), uStack_3c4 == 0x200b)) {
        fVar87 = fVar97 * *(float *)((long)param_1 + 0x2e4);
        auVar80 = ZEXT416((uint)fVar87);
        fStack_15fc = fVar97;
        fVar62 = fVar62 + fVar87;
        goto LAB_0603bc44;
      }
    }
  }
  lVar32 = param_1[0x75];
  if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
  uVar47 = *(uint *)((long)param_1 + 0x4ac);
  if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_0603fce4;
  *(float *)(lVar31 + (long)(int)uVar47 * 0x178 + 0x13c) = fVar62;
  if (uStack_3c4 == 0xd) {
    auVar80 = ZEXT816(0);
    *(float *)(param_1 + 0xcc) = *(float *)((long)param_1 + 0x44c) + 0.0;
  }
  if ((*(int *)((long)param_1 + 0x314) == 5) &&
     (((0xd < uStack_3c4 || ((1 << (ulong)(uStack_3c4 & 0x1f) & 0x2c00U) == 0)) &&
      (1 < uStack_3c4 - 0x2028)))) {
    lVar31 = *(long *)(lVar32 + 0x58);
    if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
    iVar26 = *(int *)((long)param_1 + 0x4cc) + 1;
    if (*(int *)(lVar31 + 0x18) < iVar26) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_03ab3b84((long *)(lVar32 + 0x58),iVar26,1,
                   *(undefined8 *)System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo
                  );
      lVar32 = param_1[0x75];
      if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar31 = *(long *)(lVar32 + 0x58);
    if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
    uVar57 = *(uint *)((long)param_1 + 0x4cc);
    if (*(uint *)(lVar31 + 0x18) <= uVar57) goto LAB_0603fce4;
    lVar31 = lVar31 + 0x20;
    lVar51 = lVar31 + (long)(int)uVar57 * 0x14;
    *(int *)(lVar51 + 8) = (int)param_1[0x9a];
    fVar87 = *(float *)(lVar51 + 0x10);
    auVar80 = ZEXT416((uint)fVar87);
    fVar62 = *(float *)(param_1 + 0x9c);
    if (fVar87 <= *(float *)(param_1 + 0x9c)) {
      fVar62 = fVar87;
    }
    *(float *)(lVar51 + 0x10) = fVar62;
    if (*(char *)((long)param_1 + 0x37c) != '\0') {
      *(undefined1 *)((long)param_1 + 0x37c) = 0;
      *(undefined4 *)(lVar31 + (long)(int)uVar57 * 0x14) = *(undefined4 *)((long)param_1 + 0x4ac);
    }
    uVar47 = *(uint *)((long)param_1 + 0x4ac);
    *(uint *)(lVar31 + (long)(int)uVar57 * 0x14 + 4) = uVar47;
  }
  if (((uStack_3c4 < 0xc) && ((1 << (ulong)(uStack_3c4 & 0x1f) & 0xc08U) != 0)) ||
     ((uStack_3c4 - 0x2028 < 2 ||
      ((uStack_3c4 == 0x2d && uVar5 == uVar60 || (uVar57 = uStack_3c4, uVar47 == uVar6)))))) {
    if (0.0 < *(float *)((long)param_1 + 0x4f4)) {
      fVar62 = *(float *)((long)param_1 + 0x4e4);
      fVar87 = *(float *)((long)param_1 + 0x4ec);
      if (*(int *)(*(long *)PTR_DAT_06a2ef88 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      fVar62 = fVar62 - fVar87;
      if (((fVar86 < ABS(fVar62)) && (*(char *)((long)param_1 + 0x2f4) == '\0')) &&
         (*(char *)((long)param_1 + 0x37c) == '\0')) {
        FUN_0608cd04(param_1,(int)param_1[0x96],*(undefined4 *)((long)param_1 + 0x4ac),0);
        puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) - fVar62;
        *(float *)((long)param_1 + 0x4f4) = fVar62 + *(float *)((long)param_1 + 0x4f4);
        if (*(int *)(lVar32 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar32 = *(long *)puVar13;
        }
        lVar31 = *(long *)(lVar32 + 0xb8);
        if (*(int *)(lVar31 + 0x838) == (int)param_1[0x98]) {
          if (*(int *)(lVar32 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar31 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                              0xb8);
          }
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                    (&uStack_1500,lVar31 + 0x1338,
                     *(undefined8 *)System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo)
          ;
          puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          memcpy((void *)(*(long *)(lVar32 + 0xb8) + 0x810),&uStack_1500,0x3b8);
          thunk_FUN_02ee2be8(*(long *)(lVar32 + 0xb8) + 0x8a8,0);
          lVar32 = *(long *)(*(long *)puVar13 + 0xb8);
          *(float *)(lVar32 + 0x848) = fVar62 + *(float *)(lVar32 + 0x848);
          *(float *)(lVar32 + 0x894) = fVar62 + *(float *)(lVar32 + 0x894);
          memcpy(&uStack_3c0,(void *)(lVar32 + 0x810),0x3b8);
          FUN_046b8738(lVar32 + 0x1338,&uStack_3c0,
                       *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
        }
      }
    }
    fVar70 = *(float *)((long)param_1 + 0x4f4);
    *(undefined1 *)((long)param_1 + 0x37c) = 0;
    fVar87 = *(float *)(param_1 + 0x9d) - fVar70;
    fVar62 = *(float *)(param_1 + 0x9c);
    if (fVar87 <= *(float *)(param_1 + 0x9c)) {
      fVar62 = fVar87;
    }
    fVar94 = *(float *)((long)param_1 + 0x4e4);
    *(float *)(param_1 + 0x9c) = fVar62;
    if (acStack_3cc[0] == '\0') {
      fStack_3c8 = fVar62;
    }
    if ((*(char *)((long)param_1 + 0x374) != '\0') &&
       (((int)param_1[0x6d] <= *(int *)((long)param_1 + 0x4ac) ||
        ((int)param_1[0x6e] <= (int)param_1[0x98])))) {
      acStack_3cc[0] = '\x01';
    }
    lVar32 = param_1[0x75];
    if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
    lVar31 = lVar31 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60;
    iVar27 = (int)param_1[0x96];
    *(int *)(lVar31 + 0x38) = iVar27;
    iVar26 = iVar27;
    if (iVar27 <= *(int *)((long)param_1 + 0x4b4)) {
      iVar26 = *(int *)((long)param_1 + 0x4b4);
    }
    *(int *)((long)param_1 + 0x4b4) = iVar26;
    *(int *)(lVar31 + 0x3c) = iVar26;
    iVar4 = *(int *)((long)param_1 + 0x4ac);
    *(int *)(param_1 + 0x97) = iVar4;
    *(int *)(lVar31 + 0x40) = iVar4;
    iVar28 = *(int *)((long)param_1 + 0x4b4);
    if (iVar26 <= *(int *)((long)param_1 + 0x4bc)) {
      iVar28 = *(int *)((long)param_1 + 0x4bc);
    }
    uStack_3f8 = CONCAT44(iVar28,(int)uStack_3f8);
    *(int *)((long)param_1 + 0x4bc) = iVar28;
    *(int *)(lVar31 + 0x44) = iVar28;
    *(int *)(lVar31 + 0x24) = (iVar4 - iVar27) + 1;
    iVar26 = *(int *)((long)param_1 + 0x4c4);
    *(int *)(lVar31 + 0x28) = iVar26;
    *(int *)(lVar31 + 0x30) = (iVar28 - (iVar27 + iVar26)) + 1;
    lVar32 = *(long *)(lVar32 + 0x38);
    if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4b4)) goto LAB_0603fce4;
    *(undefined4 *)(lVar31 + 0x70) =
         *(undefined4 *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4b4) * 0x178 + 0x114);
    *(float *)(lVar31 + 0x74) = fVar87;
    lVar32 = param_1[0x75];
    if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(param_1 + 0x98)) goto LAB_0603fce4;
    lVar32 = *(long *)(lVar32 + 0x38);
    if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)((long)param_1 + 0x4bc)) goto LAB_0603fce4;
    fVar94 = fVar94 - fVar70;
    auVar80 = ZEXT416((uint)fVar94);
    lVar31 = lVar31 + 0x20 + (long)(int)*(uint *)(param_1 + 0x98) * 0x60;
    *(undefined4 *)(lVar31 + 0x58) =
         *(undefined4 *)(lVar32 + (long)(int)*(uint *)((long)param_1 + 0x4bc) * 0x178 + 0x120);
    *(float *)(lVar31 + 0x5c) = fVar94;
    lVar32 = param_1[0x75];
    if ((lVar32 == 0) || (lVar31 = *(long *)(lVar32 + 0x50), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    uVar47 = *(uint *)(param_1 + 0x98);
    if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_0603fce4;
    lVar31 = lVar31 + 0x20;
    lVar51 = lVar31 + (long)(int)uVar47 * 0x60;
    *(float *)(lVar51 + 0x28) = *(float *)(lVar51 + 0x58) - fVar93 * fVar66;
    *(float *)(lVar51 + 0x40) = fStack_15c0;
    if (*(int *)(lVar51 + 4) == 1) {
      *(int *)(lVar31 + (long)(int)uVar47 * 0x60 + 0x4c) = (int)param_1[0x54];
    }
    if ((param_1[0x20] == 0) || (lVar51 = *(long *)(lVar32 + 0x38), lVar51 == 0))
    goto thunk_FUN_02e3ccc4;
    uVar57 = *(uint *)((long)param_1 + 0x4bc);
    if (*(uint *)(lVar51 + 0x18) <= uVar57) goto LAB_0603fce4;
    if ((*(char *)(lVar51 + 0x20 + (long)(int)uVar57 * 0x178 + 0x170) == '\0') &&
       (uVar57 = *(uint *)(param_1 + 0x97), *(uint *)(lVar51 + 0x18) <= uVar57)) goto LAB_0603fce4;
    fVar69 = *(float *)(param_1 + 0x5c) *
             (1.0 - *(float *)((long)param_1 + 0x304)) *
             (*(float *)((long)param_1 + 0x2d4) +
             fVar97 * ((float)uStack_1610 + fVar69 + *(float *)(param_1[0x20] + 0x1a4)));
    fVar62 = -fVar69;
    if ((char)param_1[0x1e] != '\0') {
      fVar62 = fVar69;
    }
    lVar31 = lVar31 + (long)(int)uVar47 * 0x60;
    *(float *)(lVar31 + 0x3c) =
         *(float *)(lVar51 + 0x20 + (long)(int)uVar57 * 0x178 + 0x11c) + fVar62;
    fStack_15fc = 0.0 - *(float *)((long)param_1 + 0x4f4);
    fVar62 = fVar65 * fVar64 + (fVar94 - fVar87);
    uVar30 = (ulong)(uint)fVar62;
    *(float *)(lVar31 + 0x34) = fStack_15fc;
    *(float *)(lVar31 + 0x38) = fVar87;
    *(float *)(lVar31 + 0x2c) = fVar62;
    *(float *)(lVar31 + 0x30) = fVar94;
    plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((((uStack_3c4 & 0xfffffffe) == 10) || (uVar5 == uVar60 && uStack_3c4 == 0x2d)) ||
       (uStack_3c4 - 0x2028 < 2)) {
      lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar32 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar32 = *plVar43;
      }
      FUN_0608c948(param_1,*(long *)(lVar32 + 0xb8) + 0x458,uStack_3f8 & 0xffffffff,
                   *(undefined4 *)((long)param_1 + 0x4ac),0);
      *(undefined8 *)((long)param_1 + 0x4c4) = 0;
      iVar26 = (int)param_1[0x98] + 1;
      lVar32 = param_1[0x75];
      *(int *)(param_1 + 0x98) = iVar26;
      *(int *)(param_1 + 0x96) = *(int *)((long)param_1 + 0x4ac) + 1;
      if ((lVar32 != 0) && (*(long *)(lVar32 + 0x50) != 0)) {
        if (*(int *)(*(long *)(lVar32 + 0x50) + 0x18) <= iVar26) {
          FUN_0608cec0(param_1,iVar26,0);
          lVar32 = param_1[0x75];
          if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
        }
        lVar32 = *(long *)(lVar32 + 0x38);
        if (lVar32 != 0) {
          uVar60 = *(uint *)((long)param_1 + 0x4ac);
          if (uVar60 < *(uint *)(lVar32 + 0x18)) {
            fVar62 = *(float *)(lVar32 + (long)(int)uVar60 * 0x178 + 0x14c);
            if (*(float *)(param_1 + 0x5e) == DAT_01317908) {
              if ((uStack_3c4 == 0x2029) || (fVar87 = 0.0, uStack_3c4 == 10)) {
                fVar87 = *(float *)((long)param_1 + 0x2fc);
              }
              uVar39 = 0;
              uVar30 = (ulong)(uint)*(float *)(param_1 + 0x5d);
              fVar87 = fVar62 + (0.0 - *(float *)(param_1 + 0x9d)) +
                       fVar65 * (fVar64 + *(float *)((long)param_1 + 0x2ec)) +
                       fVar97 * (*(float *)(param_1 + 0x5d) + fVar87) +
                       *(float *)((long)param_1 + 0x4f4);
            }
            else {
              if ((uStack_3c4 == 0x2029) || (fVar87 = 0.0, uStack_3c4 == 10)) {
                fVar87 = *(float *)((long)param_1 + 0x2fc);
              }
              uVar39 = 1;
              fVar87 = *(float *)((long)param_1 + 0x4f4) +
                       *(float *)(param_1 + 0x5e) + fVar97 * (*(float *)(param_1 + 0x5d) + fVar87);
            }
            lVar32 = *plVar43;
            *(float *)((long)param_1 + 0x4f4) = fVar87;
            *(undefined1 *)((long)param_1 + 0x2f4) = uVar39;
            if (*(int *)(lVar32 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar32 = *plVar43;
              uVar60 = *(uint *)((long)param_1 + 0x4ac);
            }
            lVar32 = *(long *)(lVar32 + 0xb8);
            uVar37 = *(undefined8 *)(lVar32 + 0x1730);
            *(float *)((long)param_1 + 0x4ec) = fVar62;
            fStack_15fc = *(float *)((long)param_1 + 0x44c);
            auVar80._0_8_ = NEON_rev64(uVar37,4);
            auVar80._8_8_ = 0;
            *(ulong *)((long)param_1 + 0x4e4) = auVar80._0_8_;
            *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0x89) + 0.0 + fStack_15fc;
            FUN_0608c948(param_1,lVar32 + 0xa0,uStack_3f8 & 0xffffffff,uVar60,0);
            FUN_0608c948(param_1,*(long *)(*plVar43 + 0xb8) + 0xbc8,uStack_3f8 & 0xffffffff,
                         *(undefined4 *)((long)param_1 + 0x4ac),0);
            *(int *)((long)param_1 + 0x4ac) = *(int *)((long)param_1 + 0x4ac) + 1;
            bVar18 = 1;
            bVar10 = true;
            fVar62 = fVar93;
            goto LAB_06038edc;
          }
          goto LAB_0603fce4;
        }
      }
      goto thunk_FUN_02e3ccc4;
    }
    uVar57 = uStack_3c4;
    if (uStack_3c4 == 3) {
      if (param_1[0x92] == 0) goto thunk_FUN_02e3ccc4;
      uStack_3f8 = CONCAT44(iVar28,(int)*(undefined8 *)(param_1[0x92] + 0x18));
      uVar57 = 3;
    }
  }
  lVar32 = *(long *)(lVar32 + 0x38);
  if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
  uVar5 = *(uint *)((long)param_1 + 0x4ac);
  uVar60 = *(uint *)(lVar32 + 0x18);
  if (uVar60 <= uVar5) goto LAB_0603fce4;
  lVar32 = lVar32 + 0x20;
  if (*(char *)(lVar32 + (long)(int)uVar5 * 0x178 + 0x170) != '\0') {
    lVar31 = lVar32 + (long)(int)uVar5 * 0x178;
    auVar76 = *(undefined1 (*) [16])(param_1 + 0x9f);
    auVar81 = NEON_ext(auVar76,auVar76,8,1);
    uVar37 = *(undefined8 *)(lVar31 + 0xf4);
    fStack_15fc = (float)uVar37;
    uVar30 = *(ulong *)(lVar31 + 0x100);
    fVar62 = (float)(uVar30 >> 0x20);
    auVar80._0_4_ = (float)-(uint)(auVar76._0_4_ < fStack_15fc);
    auVar80._4_4_ = (float)-(uint)(auVar76._4_4_ < (float)((ulong)uVar37 >> 0x20));
    auVar80._8_4_ = -(uint)((float)uVar30 < auVar81._0_4_);
    auVar80._12_4_ = -(uint)(fVar62 < auVar81._4_4_);
    auVar8._8_4_ = (float)uVar30;
    auVar8._0_8_ = uVar37;
    auVar8._12_4_ = fVar62;
    auVar76 = auVar76 ^ (auVar76 ^ auVar8) & ~auVar80;
    param_1[0xa0] = auVar76._8_8_;
    param_1[0x9f] = auVar76._0_8_;
  }
  if ((((int)param_1[0x61] != 3) && ((int)param_1[0x61] != 0)) ||
     ((*(uint *)((long)param_1 + 0x314) < 7 &&
      ((1 << (ulong)(*(uint *)((long)param_1 + 0x314) & 0x1f) & 0x4aU) != 0)))) {
    uVar47 = uVar5 + 1;
    if ((int)uVar47 < (int)lVar53) {
      if (uVar60 <= uVar47) goto LAB_0603fce4;
      uVar59 = *(undefined2 *)(lVar32 + (long)(int)uVar47 * 0x178 + 4);
    }
    else {
      uVar59 = 0;
    }
    if ((((uVar24 == 0) && (uVar57 != 0x2d)) && (uVar57 != 0x200b)) && (uVar57 != 0xad)) {
      if (*(char *)((long)param_1 + 0x30d) == '\0') goto LAB_0603c69c;
LAB_0603c510:
      if (bVar18 == 0) {
        bVar18 = 0;
      }
      else {
        bVar16 = (bool)((uVar24 == 0 || uStack_3c4 == 0xa0) & (uStack_3c4 != 0xad | bVar19) ^ 1);
LAB_0603c548:
        bVar18 = 1;
        plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor:
        lVar32 = *plVar43;
        if (*(int *)(lVar32 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar32 = *plVar43;
        }
        FUN_0608c948(param_1,*(long *)(lVar32 + 0xb8) + 0xa0,uStack_3f8 & 0xffffffff,
                     *(undefined4 *)((long)param_1 + 0x4ac),0);
        if (bVar16 != false) goto LAB_0603c590;
      }
    }
    else {
      if (*(char *)((long)param_1 + 0x30d) != '\0') goto LAB_0603c510;
      if ((int)uVar57 < 0x2007) {
        if (uVar57 == 0x2d) {
          if (0 < (int)uVar5) {
            if (uVar60 <= uVar5 - 1) goto LAB_0603fce4;
            uVar59 = *(undefined2 *)(lVar32 + (ulong)(uVar5 - 1) * 0x178 + 4);
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar34 = FUN_0557df5c(uVar59,0);
            if ((uVar34 & 1) != 0) {
              if ((param_1[0x75] == 0) || (lVar32 = *(long *)(param_1[0x75] + 0x38), lVar32 == 0))
              goto thunk_FUN_02e3ccc4;
              uVar60 = *(int *)((long)param_1 + 0x4ac) - 1;
              if (*(uint *)(lVar32 + 0x18) <= uVar60) goto LAB_0603fce4;
              if (*(int *)(lVar32 + (long)(int)uVar60 * 0x178 + 0x5c) == (int)param_1[0x98])
              goto LAB_0603c5f8;
            }
          }
        }
        else if (uVar57 == 0xa0) goto LAB_0603c69c;
LAB_0603cad8:
        plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar32 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar32 = *plVar43;
        }
        bVar18 = 0;
        bVar16 = false;
        *(undefined4 *)(*(long *)(lVar32 + 0xb8) + 0xf80) = 0xffffffff;
        goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      }
      if (((0x28 < uVar57 - 0x2007) ||
          ((1L << ((ulong)(uVar57 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar57 != 0x2060))
      goto LAB_0603cad8;
LAB_0603c69c:
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_02e9a04c();
      }
      uVar34 = FUN_060b1e64(uVar57,0);
      if ((uVar34 & 1) == 0) {
LAB_0603c6e8:
        uVar60 = uStack_3c4;
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_060b1ec0(uVar60,0);
        if ((uVar34 & 1) != 0) goto LAB_0603c714;
        if (*(char *)((long)param_1 + 0x30d) != '\0') goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_060b1ec0(uVar59,0);
        if ((uVar34 & 1) == 0) goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar32 = FUN_060a80a0(0);
        if ((lVar32 != 0) && (*(long *)(lVar32 + 0x18) != 0)) {
          uVar34 = FUN_052f86ac(*(long *)(lVar32 + 0x18),uVar59,
                                *(undefined8 *)
                                 System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                               );
          if ((uVar34 & 1) != 0) goto LAB_0603c510;
LAB_0603cb44:
          bVar16 = false;
          plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar34 = FUN_060a82b4(0);
      if ((uVar34 & 1) != 0) goto LAB_0603c6e8;
LAB_0603c714:
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar32 = FUN_060a80a0(0);
      if ((lVar32 == 0) || (*(long *)(lVar32 + 0x10) == 0)) goto thunk_FUN_02e3ccc4;
      uVar34 = FUN_052f86ac(*(long *)(lVar32 + 0x10),uStack_3c4,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((int)uVar6 <= *(int *)((long)param_1 + 0x4ac)) {
        if ((uVar34 & 1) == 0) {
          bVar18 = 0;
          goto LAB_0603cb44;
        }
LAB_0603c85c:
        bVar16 = uVar24 != 0;
        if (uVar91 != uVar25 || ((bVar18 ^ 0xff) & 1) != 0) goto LAB_0603c5f8;
        goto LAB_0603c548;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar32 = FUN_060a80a0(0);
      if ((lVar32 == 0) || (*(long *)(lVar32 + 0x18) == 0)) goto thunk_FUN_02e3ccc4;
      bVar17 = FUN_052f86ac(*(long *)(lVar32 + 0x18),uVar59,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((uVar34 & 1) != 0) goto LAB_0603c85c;
      bVar18 = bVar17 & bVar18;
      bVar16 = (bool)(bVar18 & uVar24 != 0);
      plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if ((bVar18 != 0) || (((bVar17 ^ 1) & 1) != 0))
      goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      bVar18 = 0;
      if (bVar16 == false) goto LAB_0603c5f8;
LAB_0603c590:
      puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
      lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar32 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar32 = *(long *)puVar13;
      }
      FUN_0608c948(param_1,*(long *)(lVar32 + 0xb8) + 0xf80,uStack_3f8 & 0xffffffff,
                   *(undefined4 *)((long)param_1 + 0x4ac),0);
    }
  }
LAB_0603c5f8:
  plVar43 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  lVar32 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (*(int *)(lVar32 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar32 = *plVar43;
  }
  FUN_0608c948(param_1,*(long *)(lVar32 + 0xb8) + 0xbc8,uStack_3f8 & 0xffffffff,
               *(undefined4 *)((long)param_1 + 0x4ac),0);
  *(int *)((long)param_1 + 0x4ac) = *(int *)((long)param_1 + 0x4ac) + 1;
  fVar62 = fVar93;
LAB_06038edc:
  lVar32 = param_1[0x92];
  uVar60 = (uint)uStack_3f8 + 1;
  uStack_3f8 = CONCAT44(uStack_3f8._4_4_,uVar60);
  if (lVar32 == 0) goto thunk_FUN_02e3ccc4;
  goto LAB_06038b48;
LAB_0603d6e0:
  if (*(uint *)(lVar53 + 0x18) <= uVar21) goto LAB_0603fce4;
  uVar30 = (ulong)uVar21;
  piVar54 = (int *)(lVar32 + uVar30 * 0x178);
  lVar31 = *(long *)(piVar54 + 8);
  uVar61 = *(ushort *)(piVar54 + 1);
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar60 = (uint)uVar61;
  bVar18 = FUN_0557df5c(uVar61,0);
  if (*(uint *)(lVar53 + 0x18) <= uVar21) goto LAB_0603fce4;
  if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x50), lVar51 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar6 = *(uint *)(lVar32 + uVar30 * 0x178 + 0x3c);
  if (*(uint *)(lVar51 + 0x18) <= uVar6) goto LAB_0603fce4;
  lVar51 = lVar51 + (long)(int)uVar6 * 0x60;
  uVar5 = *(uint *)(lVar51 + 0x40);
  uVar24 = *(uint *)(lVar51 + 0x44);
  fVar67 = *(float *)(lVar51 + 0x58);
  fVar87 = *(float *)(lVar51 + 0x5c);
  uVar91 = *(uint *)(lVar51 + 0x6c);
  fVar68 = *(float *)(lVar51 + 0x60);
  fVar98 = *(float *)(lVar51 + 100);
  iVar29 = *(int *)(lVar51 + 0x20);
  fVar92 = *(float *)(lVar51 + 0x70);
  fVar78 = *(float *)(lVar51 + 0x74);
  iVar26 = *(int *)(lVar51 + 0x28);
  fVar65 = *(float *)(lVar51 + 0x78);
  fVar64 = *(float *)(lVar51 + 0x7c);
  iVar27 = *(int *)(lVar51 + 0x30);
  fVar66 = *(float *)(lVar51 + 0x50);
  if ((int)uVar91 < 9) {
    if ((int)uVar91 < 3) {
      if (uVar91 == 1) {
        if ((char)param_1[0x1e] == '\0') {
          fStack_15e0 = fVar98 + 0.0;
        }
        else {
          fStack_15e0 = 0.0 - fVar87;
        }
        fStack_15fc = 0.0;
        fStack_15dc = 0.0;
      }
      else if (uVar91 == 2) {
        fStack_15e0 = (fVar98 + fVar68 * 0.5) - fVar87 * 0.5;
LAB_0603d9dc:
        fStack_15dc = 0.0;
        fStack_15fc = 0.0;
      }
      else {
LAB_0603d8ac:
        uVar61 = NEON_umaxv(CONCAT26(-(ushort)(uVar61 == (ushort)((ulong)_UNK_01318f18 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar61 ==
                                                       (ushort)((ulong)_UNK_01318f18 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar61 ==
                                                                (ushort)((ulong)_UNK_01318f18 >>
                                                                        0x10)),
                                                       -(ushort)(uVar61 == (ushort)_UNK_01318f18))))
                            ,2);
        if (((((uVar61 & 1) == 0) && (uVar60 != 3)) && (uVar91 == 8)) &&
           ((int)uVar21 <= (int)uVar24)) goto LAB_0603d8ec;
      }
    }
    else if (uVar91 != 3) {
      if (uVar91 != 4) goto LAB_0603d8ac;
      fStack_15fc = 0.0;
      if ((char)param_1[0x1e] != '\0') {
        fVar87 = 0.0;
      }
      fStack_15e0 = (fVar68 + fVar98) - fVar87;
      fStack_15dc = 0.0;
    }
  }
  else if (uVar91 == 0x10) {
    if ((int)uVar21 <= (int)uVar24) {
      if (uVar60 < 0xad) {
        if ((uVar60 != 3) && (uVar60 != 10)) {
LAB_0603d8ec:
          if (*(uint *)(lVar53 + 0x18) <= uVar5) goto LAB_0603fce4;
          uVar59 = *(undefined2 *)(lVar32 + (long)(int)uVar5 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar34 = FUN_05581208(uVar59,0);
          if ((uVar34 & 1) == 0) {
            bVar1 = (int)uVar6 < (int)param_1[0x98];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar91 >> 4 & 1) == 0) && (fVar87 <= fVar68)) {
            fStack_15e0 = -0.0;
            if ((char)param_1[0x1e] != '\0') {
              fStack_15e0 = fVar68;
            }
            fStack_15e0 = fVar98 + fStack_15e0;
            goto LAB_0603d9dc;
          }
          if (((uVar21 == 0) || (uVar6 != uVar23)) || (uVar21 == *(uint *)((long)param_1 + 0x364)))
          {
            fStack_15e0 = -0.0;
            if ((char)param_1[0x1e] != '\0') {
              fStack_15e0 = fVar68;
            }
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            fStack_15e0 = fVar98 + fStack_15e0;
            uStack_16b4 = FUN_055814cc(uVar60,0);
            fStack_15dc = 0.0;
            fStack_15fc = 0.0;
          }
          else {
            cVar40 = (char)param_1[0x1e];
            iVar27 = (iVar27 - iVar29) - (uStack_16b4 & 1);
            fVar98 = -fVar87;
            if (cVar40 != '\0') {
              fVar98 = fVar87;
            }
            if (iVar27 < 1) {
              fVar87 = 1.0;
              iVar27 = 1;
            }
            else {
              fVar87 = *(float *)(param_1 + 0x62);
            }
            if (uVar60 == 9) {
LAB_0603f69c:
              fVar87 = ((fVar68 + fVar98) * (1.0 - fVar87)) / (float)iVar27;
              if (cVar40 == '\0') {
                fStack_15e0 = fStack_15e0 + fVar87;
                fStack_15dc = fStack_15dc + 0.0;
                fStack_15fc = fStack_15fc + 0.0;
              }
              else {
                fStack_15e0 = fStack_15e0 - fVar87;
              }
            }
            else {
              if (uVar60 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar34 = FUN_055814cc(uVar60,0);
                cVar40 = (char)param_1[0x1e];
                if ((uVar34 & 1) != 0) goto LAB_0603f69c;
              }
              fVar87 = ((fVar68 + fVar98) * fVar87) /
                       (float)(int)((iVar29 - ((uStack_16b4 ^ 0xffffffff) & 1)) + iVar26);
              if (cVar40 == '\0') {
                fStack_15e0 = fStack_15e0 + fVar87;
                fStack_15dc = fStack_15dc + 0.0;
                fStack_15fc = fStack_15fc + 0.0;
              }
              else {
                fStack_15e0 = fStack_15e0 - fVar87;
              }
            }
          }
        }
      }
      else if (((uVar60 != 0xad) && (uVar60 != 0x200b)) && (uVar60 != 0x2060)) goto LAB_0603d8ec;
    }
  }
  else if (uVar91 == 0x20) {
    fStack_15e0 = (fVar98 + fVar68 * 0.5) - (fVar92 + fVar65) * 0.5;
    fStack_15fc = 0.0;
    fStack_15dc = 0.0;
  }
  uVar91 = (uint)*(undefined8 *)(lVar53 + 0x18);
  if (uVar91 <= uVar21) goto LAB_0603fce4;
  lVar51 = lVar32 + uVar30 * 0x178;
  fVar87 = fStack_1640 + fStack_15e0;
  fVar68 = fStack_1550 + fStack_15dc;
  fVar98 = fStack_1644 + fStack_15fc;
  if (*(char *)(lVar51 + 0x170) == '\0') goto LAB_0603e204;
  iVar29 = *piVar54;
  if (iVar29 == 0) {
    fVar63 = fmodf(*(float *)((long)param_1 + 0x354) * (float)(int)uVar6,1.0);
    iVar26 = *(int *)((long)param_1 + 0x34c);
    if (iVar26 < 2) {
      if (iVar26 == 0) {
        lVar35 = lVar32 + uVar30 * 0x178;
        *(undefined4 *)(lVar35 + 100) = 0;
        *(undefined4 *)(lVar35 + 0x8c) = 0;
        *(undefined4 *)(lVar35 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xdc) = 0x3f800000;
      }
      else if (iVar26 == 1) {
        lVar35 = lVar32 + uVar30 * 0x178;
        fVar64 = *(float *)(lVar35 + 0x48);
        pfVar41 = (float *)(lVar35 + 100);
        if (*(int *)((long)param_1 + 0x29c) == 0x208) {
          lVar35 = lVar32 + uVar30 * 0x178;
          fVar65 = *(float *)(lVar35 + 0x70);
          *pfVar41 = fVar63 + ((fStack_15e0 + fVar64) - *(float *)(param_1 + 0x9f)) /
                              (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
          *(float *)(lVar35 + 0x8c) =
               fVar63 + ((fStack_15e0 + fVar65) - *(float *)(param_1 + 0x9f)) /
                        (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
          *(float *)(lVar35 + 0xb4) =
               fVar63 + ((fStack_15e0 + *(float *)(lVar35 + 0x98)) - *(float *)(param_1 + 0x9f)) /
                        (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
          *(float *)(lVar35 + 0xdc) =
               fVar63 + ((fStack_15e0 + *(float *)(lVar35 + 0xc0)) - *(float *)(param_1 + 0x9f)) /
                        (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
        }
        else {
          lVar35 = lVar32 + uVar30 * 0x178;
          fVar65 = fVar65 - fVar92;
          fVar78 = *(float *)(lVar35 + 0x70);
          fVar85 = *(float *)(lVar35 + 0x98);
          fVar86 = *(float *)(lVar35 + 0xc0);
          *pfVar41 = fVar63 + (fVar64 - fVar92) / fVar65;
          *(float *)(lVar35 + 0x8c) = fVar63 + (fVar78 - fVar92) / fVar65;
          *(float *)(lVar35 + 0xb4) = fVar63 + (fVar85 - fVar92) / fVar65;
          *(float *)(lVar35 + 0xdc) = fVar63 + (fVar86 - fVar92) / fVar65;
        }
      }
    }
    else if (iVar26 == 2) {
      lVar35 = lVar32 + uVar30 * 0x178;
      *(float *)(lVar35 + 100) =
           fVar63 + ((fStack_15e0 + *(float *)(lVar35 + 0x48)) - *(float *)(param_1 + 0x9f)) /
                    (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
      *(float *)(lVar35 + 0x8c) =
           fVar63 + ((fStack_15e0 + *(float *)(lVar35 + 0x70)) - *(float *)(param_1 + 0x9f)) /
                    (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
      *(float *)(lVar35 + 0xb4) =
           fVar63 + ((fStack_15e0 + *(float *)(lVar35 + 0x98)) - *(float *)(param_1 + 0x9f)) /
                    (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
      *(float *)(lVar35 + 0xdc) =
           fVar63 + ((fStack_15e0 + *(float *)(lVar35 + 0xc0)) - *(float *)(param_1 + 0x9f)) /
                    (*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x9f));
    }
    else if (iVar26 == 3) {
      iVar26 = (int)param_1[0x6a];
      if (iVar26 < 2) {
        if (iVar26 == 0) {
          lVar35 = lVar32 + uVar30 * 0x178;
          *(undefined4 *)(lVar35 + 0x68) = 0;
          *(undefined4 *)(lVar35 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar35 + 0xb8) = 0;
          *(undefined4 *)(lVar35 + 0xe0) = 0x3f800000;
        }
        else if (iVar26 == 1) {
          lVar35 = lVar32 + uVar30 * 0x178;
          fVar64 = fVar64 - fVar78;
          fVar65 = (*(float *)(lVar35 + 0x74) - fVar78) / fVar64;
          fVar64 = fVar63 + (*(float *)(lVar35 + 0x4c) - fVar78) / fVar64;
          *(float *)(lVar35 + 0x68) = fVar64;
          *(float *)(lVar35 + 0xb8) = fVar64;
          goto LAB_0603ddfc;
        }
      }
      else if (iVar26 == 2) {
        lVar35 = lVar32 + uVar30 * 0x178;
        fVar64 = fVar63 + (*(float *)(lVar35 + 0x4c) - *(float *)((long)param_1 + 0x4fc)) /
                          (*(float *)((long)param_1 + 0x504) - *(float *)((long)param_1 + 0x4fc));
        *(float *)(lVar35 + 0x68) = fVar64;
        fVar65 = *(float *)((long)param_1 + 0x4fc);
        fVar78 = *(float *)((long)param_1 + 0x504);
        *(float *)(lVar35 + 0xb8) = fVar64;
        fVar65 = (*(float *)(lVar35 + 0x74) - fVar65) / (fVar78 - fVar65);
LAB_0603ddfc:
        *(float *)(lVar35 + 0x90) = fVar63 + fVar65;
        *(float *)(lVar35 + 0xe0) = fVar63 + fVar65;
      }
      else if (iVar26 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_062244a4(*(undefined8 *)System_Collections_Generic_List<BaseVideoBoardScreen>_TypeInfo,0
                    );
        uVar91 = (uint)*(undefined8 *)(lVar53 + 0x18);
      }
      if (uVar91 <= uVar21) goto LAB_0603fce4;
      lVar35 = lVar32 + uVar30 * 0x178;
      fVar78 = *(float *)(lVar35 + 0x138);
      fVar65 = (1.0 - (*(float *)(lVar35 + 0x68) + *(float *)(lVar35 + 0x90)) * fVar78) * 0.5;
      fVar64 = fVar63 + *(float *)(lVar35 + 0x68) * fVar78 + fVar65;
      fVar63 = fVar63 + fVar65 + *(float *)(lVar35 + 0x90) * fVar78;
      *(float *)(lVar35 + 100) = fVar64;
      *(float *)(lVar35 + 0x8c) = fVar64;
      *(float *)(lVar35 + 0xb4) = fVar63;
      *(float *)(lVar35 + 0xdc) = fVar63;
    }
    iVar26 = (int)param_1[0x6a];
    if (iVar26 < 2) {
      if (iVar26 == 0) {
        if (uVar91 <= uVar21) goto LAB_0603fce4;
        lVar35 = lVar32 + uVar30 * 0x178;
        *(undefined4 *)(lVar35 + 0x68) = 0;
        *(undefined4 *)(lVar35 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xe0) = 0;
      }
      else if (iVar26 == 1) {
        if (uVar21 < uVar91) {
          lVar35 = lVar32 + uVar30 * 0x178;
          fVar66 = fVar66 - fVar67;
          fVar63 = (*(float *)(lVar35 + 0x4c) - fVar67) / fVar66;
          fVar66 = (*(float *)(lVar35 + 0x74) - fVar67) / fVar66;
          *(float *)(lVar35 + 0x68) = fVar63;
          goto LAB_0603df74;
        }
        goto LAB_0603fce4;
      }
    }
    else if (iVar26 == 2) {
      if (uVar91 <= uVar21) goto LAB_0603fce4;
      lVar35 = lVar32 + uVar30 * 0x178;
      fVar63 = (*(float *)(lVar35 + 0x4c) - *(float *)((long)param_1 + 0x4fc)) /
               (*(float *)((long)param_1 + 0x504) - *(float *)((long)param_1 + 0x4fc));
      *(float *)(lVar35 + 0x68) = fVar63;
      fVar66 = (*(float *)(lVar35 + 0x74) - *(float *)((long)param_1 + 0x4fc)) /
               (*(float *)((long)param_1 + 0x504) - *(float *)((long)param_1 + 0x4fc));
LAB_0603df74:
      *(float *)(lVar35 + 0x90) = fVar66;
      *(float *)(lVar35 + 0xb8) = fVar66;
      *(float *)(lVar35 + 0xe0) = fVar63;
    }
    else if (iVar26 == 3) {
      if (uVar91 <= uVar21) goto LAB_0603fce4;
      lVar35 = lVar32 + uVar30 * 0x178;
      fVar65 = *(float *)(lVar35 + 0x138);
      fVar64 = (1.0 - (*(float *)(lVar35 + 100) + *(float *)(lVar35 + 0xb4)) / fVar65) * 0.5;
      fVar63 = *(float *)(lVar35 + 100) / fVar65 + fVar64;
      fVar64 = fVar64 + *(float *)(lVar35 + 0xb4) / fVar65;
      *(float *)(lVar35 + 0x68) = fVar63;
      *(float *)(lVar35 + 0xe0) = fVar63;
      *(float *)(lVar35 + 0x90) = fVar64;
      *(float *)(lVar35 + 0xb8) = fVar64;
    }
    if (uVar91 <= uVar21) goto LAB_0603fce4;
    lVar35 = lVar32 + uVar30 * 0x178;
    fVar63 = *(float *)(param_1 + 0x5c) *
             ABS(auVar81._0_4_) * *(float *)(lVar35 + 0x13c) *
             (1.0 - *(float *)((long)param_1 + 0x304));
    if ((*(char *)(lVar35 + 0x34) == '\0') &&
       ((*(byte *)(lVar32 + uVar30 * 0x178 + 0x16c) & 1) != 0)) {
      fVar63 = -fVar63;
    }
    lVar35 = lVar32 + uVar30 * 0x178;
    *(float *)(lVar35 + 0x60) = fVar63;
    *(float *)(lVar35 + 0x88) = fVar63;
    *(float *)(lVar35 + 0xb0) = fVar63;
    *(float *)(lVar35 + 0xd8) = fVar63;
  }
  if (((int)uVar21 < (int)param_1[0x6d]) && (iStack_1614 < *(int *)((long)param_1 + 0x36c))) {
    if (((int)param_1[0x6e] <= (int)uVar6) || (*(int *)((long)param_1 + 0x314) == 5)) {
      if (((int)uVar6 < (int)param_1[0x6e]) && (*(int *)((long)param_1 + 0x314) == 5)) {
        if (uVar21 < uVar91) {
          if (*(uint *)(lVar32 + uVar30 * 0x178 + 0x40) == uVar7) {
            lVar51 = lVar32 + uVar30 * 0x178;
            *(ulong *)(lVar51 + 0x48) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x48) >> 0x20),
                          fVar87 + (float)*(undefined8 *)(lVar51 + 0x48));
            *(float *)(lVar51 + 0x50) = fVar98 + *(float *)(lVar51 + 0x50);
            *(ulong *)(lVar51 + 0x70) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x70) >> 0x20),
                          fVar87 + (float)*(undefined8 *)(lVar51 + 0x70));
            *(float *)(lVar51 + 0x78) = fVar98 + *(float *)(lVar51 + 0x78);
            *(ulong *)(lVar51 + 0x98) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x98) >> 0x20),
                          fVar87 + (float)*(undefined8 *)(lVar51 + 0x98));
            *(float *)(lVar51 + 0xa0) = fVar98 + *(float *)(lVar51 + 0xa0);
            *(ulong *)(lVar51 + 0xc0) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0xc0) >> 0x20),
                          fVar87 + (float)*(undefined8 *)(lVar51 + 0xc0));
            *(float *)(lVar51 + 200) = fVar98 + *(float *)(lVar51 + 200);
            goto LAB_0603e188;
          }
          goto LAB_0603e0c4;
        }
        goto LAB_0603fce4;
      }
      goto LAB_0603e0c4;
    }
    if (uVar91 <= uVar21) goto LAB_0603fce4;
    lVar51 = lVar32 + uVar30 * 0x178;
    *(ulong *)(lVar51 + 0x48) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x48) >> 0x20),
                  fVar87 + (float)*(undefined8 *)(lVar51 + 0x48));
    *(float *)(lVar51 + 0x50) = fVar98 + *(float *)(lVar51 + 0x50);
    *(ulong *)(lVar51 + 0x70) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x70) >> 0x20),
                  fVar87 + (float)*(undefined8 *)(lVar51 + 0x70));
    *(float *)(lVar51 + 0x78) = fVar98 + *(float *)(lVar51 + 0x78);
    *(ulong *)(lVar51 + 0x98) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x98) >> 0x20),
                  fVar87 + (float)*(undefined8 *)(lVar51 + 0x98));
    *(float *)(lVar51 + 0xa0) = fVar98 + *(float *)(lVar51 + 0xa0);
    *(ulong *)(lVar51 + 0xc0) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0xc0) >> 0x20),
                  fVar87 + (float)*(undefined8 *)(lVar51 + 0xc0));
    *(float *)(lVar51 + 200) = fVar98 + *(float *)(lVar51 + 200);
  }
  else {
LAB_0603e0c4:
    if (uVar91 <= uVar21) goto LAB_0603fce4;
    if (DAT_06e84e3e == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a2ef80);
      uVar91 = *(uint *)(lVar53 + 0x18);
      DAT_06e84e3e = '\x01';
    }
    puVar13 = PTR_DAT_06a2ef80;
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + uVar30 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
    *(undefined4 *)(lVar32 + uVar30 * 0x178 + 0x50) = uVar20;
    if (uVar91 <= uVar21) goto LAB_0603fce4;
    lVar35 = lVar32 + uVar30 * 0x178;
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
    *(undefined8 *)(lVar35 + 0x70) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
    *(undefined4 *)(lVar35 + 0x78) = uVar20;
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
    *(undefined8 *)(lVar35 + 0x98) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
    *(undefined4 *)(lVar35 + 0xa0) = uVar20;
    uVar37 = **(undefined8 **)(*(long *)puVar13 + 0xb8);
    uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
    *(undefined1 *)(lVar51 + 0x170) = 0;
    *(undefined8 *)(lVar35 + 0xc0) = uVar37;
    *(undefined4 *)(lVar35 + 200) = uVar20;
  }
LAB_0603e188:
  iVar26 = FUN_06232690(0);
  *(bool *)((long)param_1 + 0x174) = iVar26 == 1;
  if (iVar29 == 0) {
    puVar45 = (undefined8 *)(*param_1 + 0x8d8);
    puVar49 = (undefined8 *)(*param_1 + 0x8e0);
  }
  else {
    if (iVar29 != 1) goto LAB_0603e204;
    puVar45 = (undefined8 *)(*param_1 + 0x8f8);
    puVar49 = (undefined8 *)(*param_1 + 0x900);
  }
  (*(code *)*puVar45)(param_1,uVar21,*puVar49);
LAB_0603e204:
  if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
  lVar51 = lVar51 + uVar30 * 0x178;
  uVar37 = *(undefined8 *)(lVar51 + 0x114);
  *(float *)(lVar51 + 0x11c) = fVar98 + *(float *)(lVar51 + 0x11c);
  *(undefined8 *)(lVar51 + 0x114) =
       CONCAT44(fVar68 + (float)((ulong)uVar37 >> 0x20),fVar87 + (float)uVar37);
  if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
  lVar51 = lVar51 + uVar30 * 0x178;
  *(ulong *)(lVar51 + 0x108) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x108) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar51 + 0x108));
  *(float *)(lVar51 + 0x110) = fVar98 + *(float *)(lVar51 + 0x110);
  if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
  lVar51 = lVar51 + uVar30 * 0x178;
  *(ulong *)(lVar51 + 0x120) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar51 + 0x120) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar51 + 0x120));
  *(float *)(lVar51 + 0x128) = fVar98 + *(float *)(lVar51 + 0x128);
  if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
  lVar51 = lVar51 + uVar30 * 0x178;
  uVar37 = *(undefined8 *)(lVar51 + 300);
  *(float *)(lVar51 + 0x134) = fVar98 + *(float *)(lVar51 + 0x134);
  *(undefined8 *)(lVar51 + 300) =
       CONCAT44(fVar68 + (float)((ulong)uVar37 >> 0x20),fVar87 + (float)uVar37);
  lVar51 = param_1[0x75];
  if ((lVar51 == 0) || (lVar35 = *(long *)(lVar51 + 0x38), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
  uVar91 = *(uint *)(lVar35 + 0x18);
  if (uVar91 <= uVar21) goto LAB_0603fce4;
  lVar52 = lVar35 + 0x20 + uVar30 * 0x178;
  uVar37 = *(undefined8 *)(lVar52 + 0x118);
  auVar76._0_8_ = CONCAT44(fVar87 + (float)((ulong)uVar37 >> 0x20),fVar87 + (float)uVar37);
  auVar76._8_4_ = fVar68 + (float)*(undefined8 *)(lVar52 + 0x120);
  auVar76._12_4_ = fVar68 + (float)((ulong)*(undefined8 *)(lVar52 + 0x120) >> 0x20);
  *(float *)(lVar52 + 0x128) = fVar68 + *(float *)(lVar52 + 0x128);
  *(long *)(lVar52 + 0x120) = auVar76._8_8_;
  *(undefined8 *)(lVar52 + 0x118) = auVar76._0_8_;
  if (uVar6 == uVar23) {
    uVar23 = *(int *)((long)param_1 + 0x4ac) - 1;
    if (uVar21 == uVar23) goto LAB_0603e414;
  }
  else {
    lVar51 = *(long *)(lVar51 + 0x50);
    if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar51 + 0x18) <= uVar23) goto LAB_0603fce4;
    lVar52 = lVar51 + 0x20 + (long)(int)uVar23 * 0x60;
    fVar64 = fVar68 + *(float *)(lVar52 + 0x38);
    *(ulong *)(lVar52 + 0x30) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar52 + 0x30) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar52 + 0x30));
    *(float *)(lVar52 + 0x38) = fVar64;
    *(float *)(lVar52 + 0x3c) = fVar87 + *(float *)(lVar52 + 0x3c);
    if (uVar91 <= *(uint *)(lVar52 + 0x18)) goto LAB_0603fce4;
    lVar51 = lVar51 + 0x20 + (long)(int)uVar23 * 0x60;
    uVar20 = *(undefined4 *)(lVar35 + 0x20 + (long)(int)*(uint *)(lVar52 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar51 + 0x54) = fVar64;
    *(undefined4 *)(lVar51 + 0x50) = uVar20;
    lVar51 = param_1[0x75];
    if ((lVar51 == 0) || (lVar35 = *(long *)(lVar51 + 0x50), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar35 + 0x18) <= uVar23) goto LAB_0603fce4;
    lVar51 = *(long *)(lVar51 + 0x38);
    if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
    uVar91 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar23 * 0x60 + 0x24);
    if (*(uint *)(lVar51 + 0x18) <= uVar91) goto LAB_0603fce4;
    lVar35 = lVar35 + 0x20 + (long)(int)uVar23 * 0x60;
    *(undefined4 *)(lVar35 + 0x58) = *(undefined4 *)(lVar51 + (long)(int)uVar91 * 0x178 + 0x120);
    *(undefined4 *)(lVar35 + 0x5c) = *(undefined4 *)(lVar35 + 0x30);
    uVar23 = *(int *)((long)param_1 + 0x4ac) - 1;
LAB_0603e414:
    if (uVar21 == uVar23) {
      lVar51 = param_1[0x75];
      if ((lVar51 == 0) || (lVar35 = *(long *)(lVar51 + 0x50), lVar35 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar35 + 0x18) <= uVar6) goto LAB_0603fce4;
      lVar52 = lVar35 + 0x20 + (long)(int)uVar6 * 0x60;
      fVar64 = fVar68 + *(float *)(lVar52 + 0x38);
      *(ulong *)(lVar52 + 0x30) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar52 + 0x30) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar52 + 0x30));
      *(float *)(lVar52 + 0x38) = fVar64;
      *(float *)(lVar52 + 0x3c) = fVar87 + *(float *)(lVar52 + 0x3c);
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
      uVar23 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar6 * 0x60 + 0x18);
      if (*(uint *)(lVar51 + 0x18) <= uVar23) goto LAB_0603fce4;
      *(undefined4 *)(lVar52 + 0x50) = *(undefined4 *)(lVar51 + (long)(int)uVar23 * 0x178 + 0x114);
      *(float *)(lVar52 + 0x54) = fVar64;
      lVar51 = param_1[0x75];
      if ((lVar51 == 0) || (lVar35 = *(long *)(lVar51 + 0x50), lVar35 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar35 + 0x18) <= uVar6) goto LAB_0603fce4;
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
      uVar23 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar6 * 0x60 + 0x24);
      if (*(uint *)(lVar51 + 0x18) <= uVar23) goto LAB_0603fce4;
      lVar35 = lVar35 + 0x20 + (long)(int)uVar6 * 0x60;
      *(undefined4 *)(lVar35 + 0x58) = *(undefined4 *)(lVar51 + (long)(int)uVar23 * 0x178 + 0x120);
      *(undefined4 *)(lVar35 + 0x5c) = *(undefined4 *)(lVar35 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar34 = FUN_05580720(uVar60,0);
  if (((((uVar34 & 1) == 0) && (1 < uVar60 - 0x2010)) && (uVar60 != 0xad)) && (uVar60 != 0x2d)) {
    if (bVar10) {
      if (((uVar21 != 0) && ((int)uVar21 < (int)(*(uint *)(lVar53 + 0x18) - 1))) &&
         (((int)uVar21 < *(int *)((long)param_1 + 0x4ac) && ((uVar60 == 0x2019 || (uVar60 == 0x27)))
          ))) {
        if (*(uint *)(lVar53 + 0x18) <= uVar21 - 1) goto LAB_0603fce4;
        uVar59 = *(undefined2 *)(lVar32 + (ulong)(uVar21 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_05580720(uVar59,0);
        if ((uVar34 & 1) != 0) {
          if (*(uint *)(lVar53 + 0x18) <= uVar21 + 1) goto LAB_0603fce4;
          uVar59 = *(undefined2 *)(lVar32 + (ulong)(uVar21 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar34 = FUN_05580720(uVar59,0);
          if ((uVar34 & 1) != 0) goto LAB_0603e714;
        }
      }
LAB_0603f468:
      if (uVar21 == *(int *)((long)param_1 + 0x4ac) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_05580720(uVar60,0);
        uVar23 = uVar21;
        if ((uVar34 & 1) == 0) goto LAB_0603f4a4;
      }
      else {
LAB_0603f4a4:
        uVar23 = uVar21 - 1;
      }
      lVar51 = param_1[0x75];
      if (lVar51 != 0) {
        lVar35 = *(long *)(lVar51 + 0x40);
        if (lVar35 != 0) {
          uVar91 = *(uint *)(lVar51 + 0x24);
          iVar29 = *(int *)(lVar35 + 0x18);
          if (iVar29 < (int)(uVar91 + 1)) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                      ((long *)(lVar51 + 0x40),iVar29 + 1,
                       *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
            lVar51 = param_1[0x75];
            if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
          }
          lVar51 = *(long *)(lVar51 + 0x40);
          if (lVar51 != 0) {
            if (uVar91 < *(uint *)(lVar51 + 0x18)) {
              lVar51 = lVar51 + (long)(int)uVar91 * 0x18;
              *(long *)(lVar51 + 0x20) = (long)param_1;
              *(uint *)(lVar51 + 0x28) = uVar22;
              *(uint *)(lVar51 + 0x2c) = uVar23;
              *(uint *)(lVar51 + 0x30) = (uVar23 - uVar22) + 1;
              thunk_FUN_02ee2be8((long *)(lVar51 + 0x20),param_1);
              lVar51 = param_1[0x75];
              if (lVar51 != 0) {
                lVar35 = *(long *)(lVar51 + 0x50);
                *(int *)(lVar51 + 0x24) = *(int *)(lVar51 + 0x24) + 1;
                if (lVar35 != 0) {
                  if (uVar6 < *(uint *)(lVar35 + 0x18)) {
                    bVar10 = false;
                    goto LAB_0603e630;
                  }
                  goto LAB_0603fce4;
                }
              }
              goto thunk_FUN_02e3ccc4;
            }
            goto LAB_0603fce4;
          }
        }
      }
      goto thunk_FUN_02e3ccc4;
    }
    if (uVar21 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      bVar19 = FUN_05580678(uVar60,0);
      if ((((uVar60 == 0x200b | bVar19 ^ 0xff | bVar18) & 1) != 0) ||
         (*(int *)((long)param_1 + 0x4ac) == 1)) goto LAB_0603f468;
    }
    bVar10 = false;
  }
  else {
    if (!bVar10) {
      uVar22 = uVar21;
    }
    if (uVar21 != *(int *)((long)param_1 + 0x4ac) - 1U) {
LAB_0603e714:
      bVar10 = true;
      goto LAB_0603e71c;
    }
    lVar51 = param_1[0x75];
    if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
    lVar35 = *(long *)(lVar51 + 0x40);
    if (lVar35 == 0) goto thunk_FUN_02e3ccc4;
    uVar23 = *(uint *)(lVar51 + 0x24);
    iVar29 = *(int *)(lVar35 + 0x18);
    if (iVar29 < (int)(uVar23 + 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                ((long *)(lVar51 + 0x40),iVar29 + 1,
                 *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
      lVar51 = param_1[0x75];
      if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar51 = *(long *)(lVar51 + 0x40);
    if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar51 + 0x18) <= uVar23) goto LAB_0603fce4;
    lVar51 = lVar51 + (long)(int)uVar23 * 0x18;
    *(long *)(lVar51 + 0x20) = (long)param_1;
    *(uint *)(lVar51 + 0x28) = uVar22;
    *(uint *)(lVar51 + 0x2c) = uVar21;
    *(uint *)(lVar51 + 0x30) = (uVar21 - uVar22) + 1;
    thunk_FUN_02ee2be8((long *)(lVar51 + 0x20),param_1);
    lVar51 = param_1[0x75];
    if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
    lVar35 = *(long *)(lVar51 + 0x50);
    *(int *)(lVar51 + 0x24) = *(int *)(lVar51 + 0x24) + 1;
    if (lVar35 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar35 + 0x18) <= uVar6) goto LAB_0603fce4;
    bVar10 = true;
LAB_0603e630:
    lVar35 = lVar35 + (long)(int)uVar6 * 0x60;
    iStack_1614 = iStack_1614 + 1;
    *(int *)(lVar35 + 0x34) = *(int *)(lVar35 + 0x34) + 1;
  }
LAB_0603e71c:
  lVar51 = param_1[0x75];
  if ((lVar51 == 0) || (lVar35 = *(long *)(lVar51 + 0x38), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar35 + 0x18) <= uVar21) goto LAB_0603fce4;
  lVar52 = lVar35 + 0x20;
  if ((*(byte *)(lVar52 + uVar30 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar12) {
      if (*(uint *)(lVar35 + 0x18) <= (uint)((long)(int)uVar21 + -1)) goto LAB_0603fce4;
      lVar52 = lVar52 + ((long)(int)uVar21 + -1) * 0x178;
      lVar35 = *param_1;
      uVar20 = *(undefined4 *)(lVar52 + 0x100);
      uVar71 = *(undefined4 *)(lVar52 + 0x13c);
LAB_0603e9d8:
      pcVar46 = *(code **)(lVar35 + 0x908);
      uVar37 = *(undefined8 *)(lVar35 + 0x910);
LAB_0603e9e0:
      (*pcVar46)(fStack_1694,fStack_169c,fStack_1698,uVar20,fStack_15c8,0,fVar62,uVar71,param_1,
                 (long)&uStack_3e0 + 4,uStack_167c,uVar37);
LAB_0603ea24:
      lVar51 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar51 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar51 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      }
      fStack_1594 = 0.0;
      fStack_15cc = 0.0;
      fStack_15c8 = *(float *)(*(long *)(lVar51 + 0xb8) + 0x1730);
    }
    bVar12 = false;
  }
  else {
    lVar35 = lVar52 + uVar30 * 0x178;
    *(undefined4 *)(lVar35 + 0x148) = uStack_3e0._4_4_;
    iVar29 = *(int *)(lVar35 + 0x40);
    if ((((int)param_1[0x6d] < (int)uVar21) || ((int)param_1[0x6e] < (int)uVar6)) ||
       ((*(int *)((long)param_1 + 0x314) == 5 && (iVar29 + 1 != (int)param_1[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar18 & 1) == 0 && uVar60 != 0x200b) {
      fVar87 = *(float *)(lVar52 + uVar30 * 0x178 + 0x13c);
      if (fStack_1594 <= fVar87) {
        fStack_1594 = fVar87;
      }
      if (fStack_15cc <= ABS(fVar63)) {
        fStack_15cc = ABS(fVar63);
      }
      if (iVar29 != iStack_16a0) {
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
          lVar51 = param_1[0x75];
          if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
          lVar35 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        else {
          lVar35 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        fStack_15c8 = *(float *)(lVar35 + 0x1730);
      }
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
      if (param_1[0x1f] == 0) goto thunk_FUN_02e3ccc4;
      fVar64 = *(float *)(lVar51 + uVar30 * 0x178 + 0x144);
      fVar87 = (float)FUN_0630f910(param_1[0x1f] + 0x28,0);
      fVar64 = fVar64 + fStack_1594 * fVar87;
      iStack_16a0 = iVar29;
      if (fVar64 <= fStack_15c8) {
        fStack_15c8 = fVar64;
      }
    }
    if (!bVar12) {
      bVar12 = false;
      if ((bVar1) && ((int)uVar21 <= (int)uVar24)) {
        if ((uVar60 & 0xfffe) == 10) goto LAB_0603ea5c;
        if (uVar60 != 0xd) {
          if (uVar21 == uVar24) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar34 = FUN_055814cc(uVar60,0);
            if ((uVar34 & 1) != 0) goto LAB_0603e930;
          }
          if ((param_1[0x75] != 0) && (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 != 0)) {
            if (uVar21 < *(uint *)(lVar51 + 0x18)) {
              lVar51 = lVar51 + uVar30 * 0x178;
              fVar62 = *(float *)(lVar51 + 0x15c);
              fVar87 = fVar63;
              fVar64 = fVar62;
              if (fStack_1594 != 0.0) {
                fVar87 = fStack_15cc;
                fVar64 = fStack_1594;
              }
              fStack_1594 = fVar64;
              fStack_1698 = 0.0;
              fStack_1694 = *(float *)(lVar51 + 0x114);
              uStack_167c = *(undefined4 *)(lVar51 + 0x164);
              fStack_169c = fStack_15c8;
              fStack_15cc = fVar87;
              goto LAB_0603e99c;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
      }
LAB_0603e930:
      bVar12 = false;
      goto LAB_0603ea5c;
    }
LAB_0603e99c:
    if (*(int *)((long)param_1 + 0x4ac) == 1) {
      if ((param_1[0x75] != 0) && (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 != 0)) {
        if (uVar21 < *(uint *)(lVar51 + 0x18)) {
          lVar51 = lVar51 + uVar30 * 0x178;
LAB_0603e9cc:
          lVar35 = *param_1;
          uVar20 = *(undefined4 *)(lVar51 + 0x120);
          uVar71 = *(undefined4 *)(lVar51 + 0x15c);
          goto LAB_0603e9d8;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((uVar21 == uVar5) || ((int)uVar24 <= (int)uVar21)) {
      lVar51 = param_1[0x75];
      if ((bVar18 & 1) == 0 && uVar60 != 0x200b) {
        if ((lVar51 == 0) || (lVar51 = *(long *)(lVar51 + 0x38), lVar51 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
        lVar51 = lVar51 + uVar30 * 0x178;
      }
      else {
        if ((lVar51 == 0) || (lVar51 = *(long *)(lVar51 + 0x38), lVar51 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar51 + 0x18) <= uVar24) goto LAB_0603fce4;
        lVar51 = lVar51 + (long)(int)uVar24 * 0x178;
      }
      uVar20 = *(undefined4 *)(lVar51 + 0x120);
      uVar71 = *(undefined4 *)(lVar51 + 0x15c);
      pcVar46 = *(code **)(*param_1 + 0x908);
      uVar37 = *(undefined8 *)(*param_1 + 0x910);
      goto LAB_0603e9e0;
    }
    if (!bVar1) {
      if ((param_1[0x75] != 0) && (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 != 0)) {
        if ((uint)((long)(int)uVar21 + -1) < *(uint *)(lVar51 + 0x18)) {
          lVar51 = lVar51 + ((long)(int)uVar21 + -1) * 0x178;
          goto LAB_0603e9cc;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((int)uVar21 < *(int *)((long)param_1 + 0x4ac) + -1) {
      if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar51 + 0x18) <= uVar21 + 1) goto LAB_0603fce4;
      uVar34 = FUN_06059f90(uStack_167c,
                            *(undefined4 *)(lVar51 + (ulong)(uVar21 + 1) * 0x178 + 0x164),0);
      if ((uVar34 & 1) == 0) {
        if ((param_1[0x75] != 0) && (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 != 0)) {
          if (uVar21 < *(uint *)(lVar51 + 0x18)) {
            lVar51 = lVar51 + uVar30 * 0x178;
            (**(code **)(*param_1 + 0x908))
                      (fStack_1694,fStack_169c,fStack_1698,*(undefined4 *)(lVar51 + 0x120),
                       fStack_15c8,0,fVar62,*(undefined4 *)(lVar51 + 0x15c),param_1,
                       (long)&uStack_3e0 + 4,uStack_167c,*(undefined8 *)(*param_1 + 0x910));
            goto LAB_0603ea24;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      bVar12 = true;
    }
    else {
      bVar12 = true;
    }
  }
LAB_0603ea5c:
  if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
  if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
  uVar23 = *(uint *)(lVar51 + uVar30 * 0x178 + 0x18c);
  fVar87 = (float)FUN_0630f920(lVar31 + 0x28,0);
  if ((uVar23 >> 6 & 1) == 0) {
    if (bVar16) {
      if ((param_1[0x75] != 0) && (lVar31 = *(long *)(param_1[0x75] + 0x38), lVar31 != 0)) {
        if ((uint)((long)(int)uVar21 + -1) < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + ((long)(int)uVar21 + -1) * 0x178;
          goto LAB_0603ed10;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
LAB_0603eba4:
    bVar16 = false;
  }
  else {
    lVar51 = param_1[0x75];
    if ((lVar51 == 0) || (lVar35 = *(long *)(lVar51 + 0x38), lVar35 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar35 + 0x18) <= uVar21) goto LAB_0603fce4;
    *(undefined4 *)(lVar35 + 0x20 + uVar30 * 0x178 + 0x150) = uStack_3e0._4_4_;
    if ((((int)param_1[0x6d] < (int)uVar21) || ((int)param_1[0x6e] < (int)uVar6)) ||
       ((*(int *)((long)param_1 + 0x314) == 5 &&
        (*(int *)(lVar35 + 0x20 + uVar30 * 0x178 + 0x40) + 1 != (int)param_1[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar16 | bVar1 ^ 1U)) || ((int)uVar24 < (int)uVar21)) || ((uVar60 & 0xfffe) == 10)
        ) || (uVar60 == 0xd)) {
LAB_0603eb9c:
      if (!bVar16) goto LAB_0603eba4;
    }
    else {
      if (uVar21 == uVar24) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar34 = FUN_055814cc(uVar60,0);
        if ((uVar34 & 1) != 0) goto LAB_0603eb9c;
        lVar51 = param_1[0x75];
        if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
      }
      lVar51 = *(long *)(lVar51 + 0x38);
      if (lVar51 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar51 + 0x18) <= uVar21) goto LAB_0603fce4;
      lVar51 = lVar51 + uVar30 * 0x178;
      fVar97 = *(float *)(lVar51 + 0x15c);
      fStack_1668 = fVar87 * fVar97 + *(float *)(lVar51 + 0x144);
      fVar83 = 0.0;
      fStack_16a8 = *(float *)(lVar51 + 0x58);
      fStack_166c = *(float *)(lVar51 + 0x114);
      uStack_1654 = *(undefined4 *)(lVar51 + 0x16c);
    }
    iVar29 = *(int *)((long)param_1 + 0x4ac);
    if (iVar29 == 1) {
LAB_0603ece4:
      if ((param_1[0x75] == 0) || (lVar31 = *(long *)(param_1[0x75] + 0x38), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_0603fce4;
      lVar31 = lVar31 + uVar30 * 0x178;
LAB_0603ed10:
      fVar64 = *(float *)(lVar31 + 0x144);
      lVar51 = *param_1;
      uVar20 = *(undefined4 *)(lVar31 + 0x120);
    }
    else {
      if (uVar21 != uVar5) {
        if (iVar29 <= (int)uVar21) {
LAB_0603ede8:
          if ((int)uVar21 < iVar29) {
            iVar29 = FUN_0626d24c(lVar31,0);
            if (*(uint *)(lVar53 + 0x18) <= uVar21 + 1) goto LAB_0603fce4;
            lVar31 = *(long *)(lVar32 + (ulong)(uVar21 + 1) * 0x178 + 0x20);
            if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
            iVar26 = FUN_0626d24c(lVar31,0);
            if (iVar29 != iVar26) goto LAB_0603ece4;
          }
          if (bVar1) {
            bVar16 = true;
            goto LAB_0603efc0;
          }
          if ((param_1[0x75] != 0) && (lVar31 = *(long *)(param_1[0x75] + 0x38), lVar31 != 0)) {
            if ((uint)((long)(int)uVar21 + -1) < *(uint *)(lVar31 + 0x18)) {
              lVar31 = lVar31 + ((long)(int)uVar21 + -1) * 0x178;
              goto LAB_0603ed10;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if ((param_1[0x75] == 0) || (lVar51 = *(long *)(param_1[0x75] + 0x38), lVar51 == 0))
        goto thunk_FUN_02e3ccc4;
        if (uVar21 + 1 < *(uint *)(lVar51 + 0x18)) {
          if (*(float *)(lVar51 + (ulong)(uVar21 + 1) * 0x178 + 0x58) == fStack_16a8) {
            if (*(int *)(*(long *)
                          System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar34 = FUN_0605a494(0);
            if ((uVar34 & 1) != 0) {
              iVar29 = *(int *)((long)param_1 + 0x4ac);
              goto LAB_0603ede8;
            }
          }
          lVar31 = param_1[0x75];
          if ((int)uVar24 < (int)uVar21) goto LAB_0603ed4c;
          goto LAB_0603ef48;
        }
        goto LAB_0603fce4;
      }
      lVar31 = param_1[0x75];
      if ((uVar60 != 0x200b & (bVar18 ^ 0xff)) == 0) {
LAB_0603ed4c:
        if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x38), lVar31 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar31 + 0x18) <= uVar24) goto LAB_0603fce4;
        lVar31 = lVar31 + (long)(int)uVar24 * 0x178;
      }
      else {
LAB_0603ef48:
        if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x38), lVar31 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_0603fce4;
        lVar31 = lVar31 + uVar30 * 0x178;
      }
      fVar64 = *(float *)(lVar31 + 0x144);
      lVar51 = *param_1;
      uVar20 = *(undefined4 *)(lVar31 + 0x120);
    }
    (**(code **)(lVar51 + 0x908))
              (fStack_166c,fStack_1668,fVar83,uVar20,fVar97 * fVar87 + fVar64,0,fVar97,fVar97,
               param_1,(long)&uStack_3e0 + 4,uStack_1654,*(undefined8 *)(lVar51 + 0x910));
    bVar16 = false;
  }
LAB_0603efc0:
  if ((param_1[0x75] == 0) || (lVar31 = *(long *)(param_1[0x75] + 0x38), lVar31 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar23 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar23 <= uVar21) goto LAB_0603fce4;
  if ((*(byte *)(lVar31 + 0x20 + uVar30 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar11) {
      (**(code **)(*param_1 + 0x918))
                (param_1,(long)&uStack_3e0 + 4,uStack_3f0,*(undefined8 *)(*param_1 + 0x920));
    }
    bVar11 = false;
  }
  else {
    if ((((int)param_1[0x6d] < (int)uVar21) || ((int)param_1[0x6e] < (int)uVar6)) ||
       ((*(int *)((long)param_1 + 0x314) == 5 &&
        (*(int *)(lVar31 + 0x20 + uVar30 * 0x178 + 0x40) + 1 != (int)param_1[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar11) {
LAB_0603f144:
      if (uVar23 <= uVar21) goto LAB_0603fce4;
      lVar31 = lVar31 + uVar30 * 0x178;
      uStack_1520 = CONCAT44(fStack_3ec,uStack_3f0);
      auVar9._8_4_ = fStack_3e8;
      auVar9._0_8_ = uStack_1520;
      auVar9._12_4_ = fStack_3e4;
      lVar51 = 0x118;
      if ((bVar18 & 1) == 0) {
        lVar51 = 0xf4;
      }
      fVar67 = *(float *)(lVar31 + 0x180);
      fVar68 = *(float *)(lVar31 + 0x184);
      fVar78 = *(float *)(lVar31 + 0x188);
      uVar37 = *(undefined8 *)(lVar31 + 0x178);
      fVar92 = *(float *)(lVar31 + 0x120);
      fVar87 = *(float *)(lVar31 + 0x13c);
      fVar66 = *(float *)(lVar31 + 0x140);
      fVar65 = *(float *)(lVar31 + 0x148);
      fVar64 = *(float *)(lVar31 + lVar51 + 0x20);
      uStack_1518 = auVar9._8_8_;
      uStack_1510 = (float)uStack_3e0;
      uStack_1538 = uVar37;
      fStack_1530 = fVar67;
      fStack_152c = fVar68;
      fStack_1528 = fVar78;
      uVar30 = FUN_0605b5b8(&uStack_1520,&uStack_1538,0);
      if ((uVar30 & 1) == 0) {
        if ((bVar18 & 1) == 0) {
          fVar87 = fVar92;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar64 = fVar64 - fStack_3ec;
        if (fVar64 <= fStack_1618) {
          fStack_1618 = fVar64;
        }
        if (fStack_1624 <= fVar87 + fStack_3e8) {
          fStack_1624 = fVar87 + fStack_3e8;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar65 = fVar65 - (float)uStack_3e0;
        fVar66 = fVar66 + fStack_3e4;
        if (fVar65 <= fStack_15ec) {
          fStack_15ec = fVar65;
        }
        if (fStack_1620 <= fVar66) {
          fStack_1620 = fVar66;
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fStack_1618 = (fVar64 + (fStack_1624 - fStack_3e8)) * 0.5;
        (**(code **)(*param_1 + 0x918))
                  (param_1,(long)&uStack_3e0 + 4,uStack_3f0,*(undefined8 *)(*param_1 + 0x920));
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((bVar18 & 1) == 0) {
          fVar87 = fVar92;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fStack_15ec = fVar65 - fVar78;
        uStack_3f0 = (undefined4)uVar37;
        fStack_3ec = (float)((ulong)uVar37 >> 0x20);
        uStack_3e0 = CONCAT44(uStack_3e0._4_4_,fVar78);
        fStack_1624 = fVar67 + fVar87;
        fStack_3e8 = fVar67;
        fStack_3e4 = fVar68;
        fStack_1620 = fVar66 + fVar68;
      }
      if (((*(int *)((long)param_1 + 0x4ac) != 1) && (uVar21 != uVar5)) &&
         (((int)uVar21 < (int)uVar24 && (bVar1)))) {
        bVar11 = true;
        goto LAB_0603f378;
      }
      (**(code **)(*param_1 + 0x918))
                (param_1,(long)&uStack_3e0 + 4,uStack_3f0,*(undefined8 *)(*param_1 + 0x920));
    }
    else {
      bVar11 = false;
      if ((((!bVar1) || ((int)uVar24 < (int)uVar21)) || ((uVar60 & 0xfffe) == 10)) ||
         (uVar60 == 0xd)) goto LAB_0603f378;
      if (uVar21 != uVar24) {
LAB_0603f0c8:
        puVar13 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar51 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar51 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar51 = *(long *)puVar13;
        }
        if ((param_1[0x75] != 0) && (lVar31 = *(long *)(param_1[0x75] + 0x38), lVar31 != 0)) {
          uVar23 = (uint)*(undefined8 *)(lVar31 + 0x18);
          if (uVar21 < uVar23) {
            lVar35 = *(long *)(lVar51 + 0xb8);
            lVar51 = lVar31 + uVar30 * 0x178;
            fStack_1624 = *(float *)(lVar35 + 0x1728);
            fStack_1620 = *(float *)(lVar35 + 0x172c);
            fStack_1618 = *(float *)(lVar35 + 0x1720);
            fStack_15ec = *(float *)(lVar35 + 0x1724);
            uStack_3e0 = CONCAT44(uStack_3e0._4_4_,*(undefined4 *)(lVar51 + 0x188));
            fStack_3e8 = (float)*(undefined8 *)(lVar51 + 0x180);
            fStack_3e4 = (float)((ulong)*(undefined8 *)(lVar51 + 0x180) >> 0x20);
            uStack_3f0 = (undefined4)*(undefined8 *)(lVar51 + 0x178);
            fStack_3ec = (float)((ulong)*(undefined8 *)(lVar51 + 0x178) >> 0x20);
            goto LAB_0603f144;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar34 = FUN_055814cc(uVar60,0);
      if ((uVar34 & 1) == 0) goto LAB_0603f0c8;
    }
    bVar11 = false;
  }
LAB_0603f378:
  iVar29 = *(int *)((long)param_1 + 0x4ac);
  uVar21 = uVar21 + 1;
  uVar23 = uVar6;
  if (iVar29 <= (int)uVar21) goto LAB_0603f74c;
  goto LAB_0603d6e0;
LAB_0603f74c:
  lVar53 = param_1[0x75];
  if (lVar53 != 0) {
    iVar26 = uVar6 + 1;
    plVar55 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
LAB_0603f770:
    lVar32 = *(long *)(lVar53 + 0x60);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(param_1 + 0xd5)) {
LAB_0603fce4:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      *(undefined4 *)(lVar32 + (long)(int)*(uint *)(param_1 + 0xd5) * 0x50 + 0x28) =
           uStack_3e0._4_4_;
      *(int *)(lVar53 + 0x18) = iVar29;
      lVar32 = param_1[0xd8];
      *(int *)(lVar53 + 0x2c) = iVar26;
      if (iVar29 < 1 || iStack_1614 == 0) {
        iStack_1614 = 1;
      }
      *(int *)(lVar53 + 0x1c) = (int)lVar32;
      *(int *)(lVar53 + 0x24) = iStack_1614;
      *(int *)(lVar53 + 0x30) = *(int *)((long)param_1 + 0x4cc) + 1;
      if (((int)param_1[0x6b] != 0xff) ||
         (uVar30 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
         (uVar30 & 1) == 0)) {
LAB_0603d144:
        if (*(int *)(*(long *)PTR_DAT_06a3c3a0 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_060594e8(param_1,0);
        return;
      }
      lVar53 = param_1[0xdf];
      if (lVar53 != 0) {
        (**(code **)(lVar53 + 0x18))
                  (*(undefined8 *)(lVar53 + 0x40),param_1[0x75],*(undefined8 *)(lVar53 + 0x28));
      }
      if (*(int *)((long)param_1 + 0x35c) != 0) {
        if ((param_1[0x75] == 0) || (lVar53 = *(long *)(param_1[0x75] + 0x60), lVar53 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(int *)(*plVar55 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
        FUN_060a5370(lVar53 + 0x20,1,0);
      }
      if (param_1[0x7c] != 0) {
        FUN_06242810(param_1[0x7c],0);
        if ((param_1[0x75] != 0) && (lVar53 = *(long *)(param_1[0x75] + 0x60), lVar53 != 0)) {
          if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
          if (param_1[0x7c] != 0) {
            FUN_06240928(param_1[0x7c],*(undefined8 *)(lVar53 + 0x30),0);
            if ((param_1[0x75] != 0) && (lVar53 = *(long *)(param_1[0x75] + 0x60), lVar53 != 0)) {
              if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
              if (param_1[0x7c] != 0) {
                FUN_06241714(param_1[0x7c],0,*(undefined8 *)(lVar53 + 0x48),0);
                if ((param_1[0x75] != 0) && (lVar53 = *(long *)(param_1[0x75] + 0x60), lVar53 != 0))
                {
                  if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
                  if (param_1[0x7c] != 0) {
                    FUN_06240b40(param_1[0x7c],*(undefined8 *)(lVar53 + 0x50),0);
                    if ((param_1[0x75] != 0) &&
                       (lVar53 = *(long *)(param_1[0x75] + 0x60), lVar53 != 0)) {
                      if (*(int *)(lVar53 + 0x18) == 0) goto LAB_0603fce4;
                      if (param_1[0x7c] != 0) {
                        UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                  (param_1[0x7c],*(undefined8 *)(lVar53 + 0x58),0);
                        if (param_1[0x7c] != 0) {
                          FUN_062425d0(param_1[0x7c],0);
                          lVar53 = param_1[0x75];
                          if (lVar53 != 0) {
                            lVar31 = 0;
                            lVar32 = 0;
                            do {
                              uVar30 = lVar32 + 1;
                              if ((long)*(int *)(lVar53 + 0x34) <= (long)uVar30) goto LAB_0603d144;
                              lVar53 = *(long *)(lVar53 + 0x60);
                              if (lVar53 == 0) break;
                              if (*(int *)(*plVar55 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                              FUN_060a524c(lVar53 + lVar31 + 0x70,0);
                              lVar53 = param_1[0xe5];
                              if (lVar53 == 0) break;
                              if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                              uVar37 = *(undefined8 *)(lVar53 + lVar32 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              uVar34 = FUN_062696b0(uVar37,0,0);
                              if ((uVar34 & 1) == 0) {
                                if (*(int *)((long)param_1 + 0x35c) != 0) {
                                  if ((param_1[0x75] == 0) ||
                                     (lVar53 = *(long *)(param_1[0x75] + 0x60), lVar53 == 0)) break;
                                  if (*(int *)(*plVar55 + 0xe4) == 0) {
                                    thunk_FUN_02e9a04c();
                                  }
                                  if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                                  FUN_060a5370(lVar53 + lVar31 + 0x70,1,0);
                                }
                                lVar53 = param_1[0xe5];
                                if (lVar53 == 0) break;
                                if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                                lVar53 = *(long *)(lVar53 + lVar32 * 8 + 0x28);
                                if (lVar53 == 0) break;
                                lVar53 = FUN_060ae428(lVar53,0);
                                if ((param_1[0x75] == 0) ||
                                   (lVar51 = *(long *)(param_1[0x75] + 0x60), lVar51 == 0)) break;
                                if (*(uint *)(lVar51 + 0x18) <= uVar30) goto LAB_0603fce4;
                                if (lVar53 == 0) break;
                                FUN_06240928(lVar53,*(undefined8 *)(lVar51 + lVar31 + 0x80),0);
                                lVar53 = param_1[0xe5];
                                if (lVar53 == 0) break;
                                if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                                lVar53 = *(long *)(lVar53 + lVar32 * 8 + 0x28);
                                if (lVar53 == 0) break;
                                lVar53 = FUN_060ae428(lVar53,0);
                                if ((param_1[0x75] == 0) ||
                                   (lVar51 = *(long *)(param_1[0x75] + 0x60), lVar51 == 0)) break;
                                if (*(uint *)(lVar51 + 0x18) <= uVar30) goto LAB_0603fce4;
                                if (lVar53 == 0) break;
                                FUN_06241714(lVar53,0,*(undefined8 *)(lVar51 + lVar31 + 0x98),0);
                                lVar53 = param_1[0xe5];
                                if (lVar53 == 0) break;
                                if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                                lVar53 = *(long *)(lVar53 + lVar32 * 8 + 0x28);
                                if (lVar53 == 0) break;
                                lVar53 = FUN_060ae428(lVar53,0);
                                if ((param_1[0x75] == 0) ||
                                   (lVar51 = *(long *)(param_1[0x75] + 0x60), lVar51 == 0)) break;
                                if (*(uint *)(lVar51 + 0x18) <= uVar30) goto LAB_0603fce4;
                                if (lVar53 == 0) break;
                                FUN_06240b40(lVar53,*(undefined8 *)(lVar51 + lVar31 + 0xa0),0);
                                lVar53 = param_1[0xe5];
                                if (lVar53 == 0) break;
                                if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                                lVar53 = *(long *)(lVar53 + lVar32 * 8 + 0x28);
                                if (lVar53 == 0) break;
                                lVar53 = FUN_060ae428(lVar53,0);
                                if ((param_1[0x75] == 0) ||
                                   (lVar51 = *(long *)(param_1[0x75] + 0x60), lVar51 == 0)) break;
                                if (*(uint *)(lVar51 + 0x18) <= uVar30) goto LAB_0603fce4;
                                if (lVar53 == 0) break;
                                UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                          (lVar53,*(undefined8 *)(lVar51 + lVar31 + 0xa8),0);
                                lVar53 = param_1[0xe5];
                                if (lVar53 == 0) break;
                                if (*(uint *)(lVar53 + 0x18) <= uVar30) goto LAB_0603fce4;
                                lVar53 = *(long *)(lVar53 + lVar32 * 8 + 0x28);
                                if ((lVar53 == 0) || (lVar53 = FUN_060ae428(lVar53,0), lVar53 == 0))
                                break;
                                FUN_062425d0(lVar53,0);
                              }
                              lVar53 = param_1[0x75];
                              lVar32 = lVar32 + 1;
                              lVar31 = lVar31 + 0x50;
                            } while (lVar53 != 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto thunk_FUN_02e3ccc4;
}


