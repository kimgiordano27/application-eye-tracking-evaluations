/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$get_startingTargetFilter
ENTRY_POINT: 0603820c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingTargetFilter(void)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined1 uVar34;
  char cVar35;
  float *pfVar36;
  undefined4 *puVar37;
  long *plVar38;
  float *pfVar39;
  undefined8 *puVar40;
  code *pcVar41;
  uint uVar42;
  float *pfVar43;
  uint uVar44;
  long *plVar45;
  long lVar46;
  long lVar47;
  long *unaff_x19;
  ulong uVar48;
  long *unaff_x21;
  int iVar49;
  int iVar50;
  int *piVar51;
  long *plVar52;
  ulong uVar53;
  uint uVar54;
  long *plVar55;
  undefined2 uVar56;
  undefined1 *unaff_x28;
  long *unaff_x29;
  ushort uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar72;
  undefined1 auVar71 [16];
  float fVar73;
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined4 uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  int iStack0000000000000020;
  uint uStack000000000000004c;
  float fStack0000000000000058;
  int iStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000084;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e8;
  int iStack00000000000000ec;
  float fStack0000000000000104;
  float fStack0000000000000114;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float fStack0000000000000140;
  float fStack000000000000016c;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000190;
  float fStack00000000000001b0;
  undefined8 in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  float in_stack_000001f0;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  float in_stack_0000114c;
  float in_stack_00001158;
  float in_stack_00001164;
  float in_stack_00001170;
  float in_stack_0000117c;
  float in_stack_00001188;
  uint in_stack_0000126c;
  uint uVar94;
  undefined8 in_stack_00001310;
  float in_stack_00001318;
  float in_stack_0000131c;
  float in_stack_00001320;
  uint uVar95;
  undefined8 in_stack_00001328;
  char in_stack_00001334;
  float fVar96;
  uint uVar97;
  
  uVar26 = FUN_062696b0();
  if ((uVar26 & 1) != 0) {
LAB_060383e4:
    puVar10 = System_Collections_Generic_List<AvatarPose>_TypeInfo;
    FUN_0626d24c();
    uVar33 = FUN_05603500(&stack0x0000130c,0);
    uVar33 = FUN_05482ce0(*(undefined8 *)puVar10,uVar33,0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*unaff_x29);
    }
    FUN_06222224(uVar33,0);
    *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
    return;
  }
  if (unaff_x19[0x1f] == 0) goto thunk_FUN_02e3ccc4;
  lVar27 = FUN_0606364c(unaff_x19[0x1f],0);
  if (lVar27 == 0) goto LAB_060383e4;
  if (unaff_x19[0x75] != 0) {
    FUN_060b0d7c(unaff_x19[0x75],0);
  }
  lVar27 = unaff_x19[0x92];
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x18) == 0)) {
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters:
    (**(code **)(*unaff_x19 + 0x958))();
    puVar10 = PTR_DAT_06a3c3a0;
    *(undefined4 *)(unaff_x19 + 0x84) = 0;
    *(undefined4 *)((long)unaff_x19 + 0x42c) = 0;
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_060594e8();
    *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
    return;
  }
  if ((int)*(long *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
  if (*(int *)(lVar27 + 0x24) == 0)
  goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_startingHoverFilters;
  unaff_x19[0x20] = unaff_x19[0x1f];
  thunk_FUN_02ee2be8(unaff_x19 + 0x20);
  unaff_x19[0x23] = unaff_x19[0x22];
  thunk_FUN_02ee2be8(unaff_x19 + 0x23);
  plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  uVar16 = 0;
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  if (*(int *)(*plVar38 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(*plVar38,0);
    uVar16 = (undefined4)unaff_x19[0x24];
  }
  FUN_06048c08(&stack0x00000200,uVar16,unaff_x19[0x20],0,unaff_x19[0x23],0);
  puVar10 = System_Collections_Generic_List<AstNode>_TypeInfo;
  lVar27 = *(long *)(*plVar38 + 0xb8);
  *(undefined8 *)(unaff_x28 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x28 + 0x1b0) = 0;
  uVar33 = *(undefined8 *)puVar10;
  *(undefined8 *)(unaff_x28 + 0x198) = 0;
  *(undefined8 *)(unaff_x28 + 400) = 0;
  *(undefined8 *)(unaff_x28 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x28 + 0x1a0) = 0;
  FUN_046b7178(lVar27 + 0x10,&stack0x00001340,uVar33);
  plVar52 = unaff_x19 + 0xd7;
  unaff_x19[0xd7] = unaff_x19[0x39];
  thunk_FUN_02ee2be8();
  lVar27 = unaff_x19[0x7f];
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar26 = FUN_06267b6c(lVar27,0,0);
  if ((uVar26 & 1) != 0) {
    if (unaff_x19[0x7f] == 0) goto thunk_FUN_02e3ccc4;
    FUN_060aa914(unaff_x19[0x7f],0);
  }
  fVar78 = DAT_01317bd0;
  if (*(char *)((long)unaff_x19 + 0x346) != '\0') {
    fVar78 = 1.0;
  }
  if (unaff_x19[0x1f] == 0) {
thunk_FUN_02e3ccc4:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar27 = unaff_x19[0x95];
  fVar92 = *(float *)((long)unaff_x19 + 0x20c);
  fVar58 = (float)FUN_0630f888(unaff_x19[0x1f] + 0x28,0);
  if (unaff_x19[0x1f] == 0) goto thunk_FUN_02e3ccc4;
  fVar59 = (float)FUN_0630f890(unaff_x19[0x1f] + 0x28,0);
  puVar11 = System_Collections_Generic_List<AudioAffordanceThemeData>_TypeInfo;
  fVar82 = *(float *)((long)unaff_x19 + 0x20c);
  *(undefined4 *)((long)unaff_x19 + 0x444) = 0x3f800000;
  uVar33 = *(undefined8 *)puVar11;
  *(float *)(unaff_x19 + 0x42) = fVar82;
  FUN_046b7f24(unaff_x19 + 0x43,uVar33);
  *(uint *)((long)unaff_x19 + 0x284) = *(uint *)(unaff_x19 + 0x50);
  puVar10 = System_Collections_Generic_List<Attribute>_TypeInfo;
  if ((*(uint *)(unaff_x19 + 0x50) & 1) == 0) {
    uVar16 = (undefined4)unaff_x19[0x47];
  }
  else {
    uVar16 = 700;
  }
  *(undefined4 *)((long)unaff_x19 + 0x23c) = uVar16;
  FUN_046b6b48(unaff_x19 + 0x48,uVar16,*(undefined8 *)puVar10);
  FUN_060b24fc(unaff_x19 + 0x51,0);
  uVar33 = *(undefined8 *)System_Collections_Generic_List<ArenaSpawnPoint>_TypeInfo;
  *(undefined4 *)(unaff_x19 + 0x54) = *(undefined4 *)((long)unaff_x19 + 0x294);
  FUN_046b6b48(unaff_x19 + 0x55,*(undefined4 *)((long)unaff_x19 + 0x294),uVar33);
  puVar10 = System_Collections_Generic_List<Action>_TypeInfo;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  FUN_046b7f18(unaff_x19 + 200,*(undefined8 *)puVar10);
  if (DAT_06e84e3e == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e84e3e = '\x01';
  }
  pfVar36 = *(float **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
  fStack000000000000006c = *pfVar36;
  fStack0000000000000064 = pfVar36[1];
  fStack0000000000000068 = pfVar36[2];
  uVar16 = FUN_031c4f40((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                        (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0);
  puVar10 = System_Collections_Generic_List<AssetDetails>_TypeInfo;
  *(undefined4 *)((long)unaff_x19 + 0x144) = uVar16;
  *(undefined4 *)(unaff_x19 + 0xa1) = uVar16;
  uVar33 = *(undefined8 *)puVar10;
  *(undefined4 *)(unaff_x19 + 0x2b) = uVar16;
  *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar16;
  FUN_046b58ac(unaff_x19 + 0xa2,uVar16,uVar33);
  FUN_046b58ac(unaff_x19 + 0xa6,(int)unaff_x19[0xa1],*(undefined8 *)puVar10);
  FUN_046b58ac(unaff_x19 + 0xaa,(int)unaff_x19[0xa1],*(undefined8 *)puVar10);
  lVar29 = unaff_x19[0xa1];
  if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  if (cRam0000000006e94e1b == '\0') {
    FUN_02e3ca1c(System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
    cRam0000000006e94e1b = '\x01';
  }
  puVar10 = System_Collections_Generic_List<Matrix4x4[]>_TypeInfo;
  lVar28 = *(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo;
  if (*(int *)(lVar28 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar28 = *(long *)puVar10;
  }
  puVar37 = *(undefined4 **)(lVar28 + 0xb8);
  FUN_0605b508(*puVar37,puVar37[1],puVar37[2],puVar37[3],&stack0x00000200,(int)lVar29,0);
  puVar10 = System_Collections_Generic_List<ArenaPlayerData>_TypeInfo;
  *(undefined8 *)(unaff_x28 + 0x198) = 0;
  *(undefined8 *)(unaff_x28 + 400) = 0;
  FUN_046b5ea4(unaff_x19 + 0xae,&stack0x00001340,*(undefined8 *)puVar10);
  unaff_x19[0xb4] = 0;
  thunk_FUN_02ee2be8(unaff_x19 + 0xb4,0);
  FUN_046b7930(unaff_x19 + 0xb5,0,
               *(undefined8 *)System_Collections_Generic_List<AsyncOperationHandle>_TypeInfo);
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  bVar14 = *(byte *)(unaff_x19[0x20] + 0x1b0);
  uVar33 = *(undefined8 *)System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo;
  *(uint *)(unaff_x19 + 0xc2) = (uint)bVar14;
  FUN_046b658c(unaff_x19 + 0xbe,bVar14,uVar33);
  FUN_046b6580(unaff_x19 + 0xc3,
               *(undefined8 *)System_Collections_Generic_List<AggregateException>_TypeInfo);
  if (DAT_06e862d4 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e862d4 = '\x01';
  }
  cVar35 = DAT_06e84e41;
  uVar16 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 0x14);
  *(undefined8 *)((long)unaff_x19 + 0x484) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 0xc);
  *(undefined4 *)((long)unaff_x19 + 0x48c) = uVar16;
  if (cVar35 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2f028);
    DAT_06e84e41 = '\x01';
  }
  auVar75 = **(undefined1 (**) [16])(*(long *)PTR_DAT_06a2f028 + 0xb8);
  *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
  *(undefined4 *)(unaff_x19 + 0x5e) = 0xc6fffe00;
  *(long *)((long)unaff_x19 + 0x47c) = auVar75._8_8_;
  *(long *)((long)unaff_x19 + 0x474) = auVar75._0_8_;
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar60 = (float)FUN_0630f8b0(unaff_x19[0x20] + 0x28,0);
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar61 = (float)FUN_0630f8b8(unaff_x19[0x20] + 0x28,0);
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar62 = (float)FUN_0630f8e8(unaff_x19[0x20] + 0x28,0);
  *(undefined4 *)(unaff_x19 + 0xcc) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x2d4) = 0;
  unaff_x19[0x89] = 0;
  FUN_046b7f24(ZEXT816(0),unaff_x19 + 0x8a,*(undefined8 *)puVar11);
  *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
  lVar29 = *plVar38;
  *(undefined1 *)(unaff_x19 + 0x8e) = 0;
  *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x364);
  *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
  if (*(int *)(lVar29 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar29 = *plVar38;
  }
  uVar33 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1730);
  *(undefined8 *)((long)unaff_x19 + 0x4ec) = 0;
  *(undefined4 *)(unaff_x19 + 99) = 0xffffffff;
  uVar33 = NEON_rev64(uVar33,4);
  *(undefined4 *)(unaff_x19 + 0x99) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x2f4) = 0;
  unaff_x19[0x98] = 0;
  *(undefined4 *)((long)unaff_x19 + 0x334) = 0x80000000;
  *(undefined8 *)((long)unaff_x19 + 0x4e4) = uVar33;
  puVar10 = System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo;
  if (unaff_x19[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar17 = FUN_03fe2fc4(unaff_x19[0x67],0x6b65726e,
                        *(undefined8 *)
                         System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo);
  if (unaff_x19[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar18 = FUN_03fe2fc4(unaff_x19[0x67],0x6d61726b,*(undefined8 *)puVar10);
  if (unaff_x19[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar19 = FUN_03fe2fc4(unaff_x19[0x67],0x6d6b6d6b,*(undefined8 *)puVar10);
  lVar29 = unaff_x19[0x75];
  *(undefined4 *)((long)unaff_x19 + 0x4cc) = 0;
  if ((lVar29 == 0) || (*(long *)(lVar29 + 0x58) == 0)) goto thunk_FUN_02e3ccc4;
  uVar4 = (int)unaff_x19[0x6f] - 1;
  uVar5 = *(int *)(*(long *)(lVar29 + 0x58) + 0x18) - 1;
  uVar94 = uVar4;
  if ((int)uVar5 <= (int)uVar4) {
    uVar94 = uVar5;
  }
  uVar5 = 0;
  if (-1 < (int)uVar4) {
    uVar5 = uVar94;
  }
  UnityEngine_XR_OpenXR_OpenXRApiVersion__op_LessThan(lVar29,0);
  lVar29 = *plVar38;
  *(undefined4 *)(unaff_x19 + 0x74) = 0xbf800000;
  fVar73 = *(float *)((long)unaff_x19 + 900);
  fVar86 = *(float *)(unaff_x19 + 0x73);
  fVar93 = *(float *)((long)unaff_x19 + 0x39c);
  unaff_x19[0x72] = 0;
  fVar63 = *(float *)(unaff_x19 + 0x70);
  fVar64 = *(float *)((long)unaff_x19 + 0x38c);
  if (*(int *)(lVar29 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar29 = *plVar38;
  }
  unaff_x19[0x9f] = *(long *)(*(long *)(lVar29 + 0xb8) + 0x1720);
  unaff_x19[0xa0] = *(long *)(*(long *)(lVar29 + 0xb8) + 0x1728);
  if (unaff_x19[0x75] == 0) goto thunk_FUN_02e3ccc4;
  UnityEngine_XR_OpenXR_OpenXRApiVersion___ctor(unaff_x19[0x75],0);
  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
  *(undefined4 *)(unaff_x19 + 0x9c) = 0;
  fVar96 = 0.0;
  unaff_x28[0x184] = 0;
  unaff_x19[0x9a] = 0;
  *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x30d) = 0;
  FUN_060b0518(&stack0x00001328,0xffffffff,0,0);
  FUN_0608c948();
  FUN_0608c948();
  FUN_0608c948();
  FUN_0608c948();
  FUN_0608c948();
  FUN_046b854c(*(long *)(*plVar38 + 0xb8) + 0x1338,
               *(undefined8 *)System_Collections_Generic_List<AdvancedUpscalers>_TypeInfo);
  fVar80 = DAT_01317af4;
  fVar79 = DAT_013179f0;
  lVar29 = unaff_x19[0x92];
  uVar94 = 0;
  if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
  iStack0000000000000020 = 0;
  if (fVar86 <= 0.0) {
    fVar86 = 0.0;
  }
  pfVar36 = (float *)(unaff_x19 + 0x42);
  fVar60 = fVar60 - (fVar61 - fVar62);
  if (fVar93 <= 0.0) {
    fVar93 = 0.0;
  }
  plVar2 = unaff_x19 + 0xcd;
  iVar49 = 0;
  bVar15 = 0;
  fVar62 = 0.0;
  uVar4 = (int)lVar27 - 1;
  bVar7 = true;
  bVar14 = 1;
  fVar61 = fVar78 * (fVar92 / fVar58) * fVar59;
  auVar75 = ZEXT416((uint)fVar61);
  fVar92 = fVar78 * fVar82 * DAT_01317af4;
  fVar86 = fVar86 + DAT_01317c4c;
  fVar59 = fVar93 + DAT_01317c4c;
  fStack0000000000000104 = fVar86;
  fVar58 = fVar61;
  fStack0000000000000140 = fVar86;
  uVar97 = 0;
LAB_06038b48:
  if ((int)*(uint *)(lVar29 + 0x18) <= (int)uVar94) {
LAB_0603cfc8:
    if ((char)unaff_x19[0x4c] == '\0') {
LAB_0603d08c:
      iVar49 = *(int *)((long)unaff_x19 + 0x26c);
      iVar24 = (int)unaff_x19[0x4e];
    }
    else {
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x264);
      auVar75 = ZEXT416((uint)_UNK_01317b9c);
      if (fStack0000000000000104 - *(float *)(unaff_x19 + 0x4d) <= _UNK_01317b9c) goto LAB_0603d08c;
      fVar78 = *(float *)((long)unaff_x19 + 0x20c);
      fVar58 = *(float *)((long)unaff_x19 + 0x27c);
      auVar75 = ZEXT416((uint)fVar58);
      iVar49 = *(int *)((long)unaff_x19 + 0x26c);
      iVar24 = (int)unaff_x19[0x4e];
      if ((fVar78 < fVar58) && (iVar49 < iVar24)) {
        if (*(float *)((long)unaff_x19 + 0x304) < *(float *)(unaff_x19 + 0x60) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x304) = 0;
        }
        fVar92 = DAT_01317af0;
        *(float *)(unaff_x19 + 0x4d) = fVar78;
        fVar59 = (fStack0000000000000104 - fVar78) * 0.5;
        if (fVar59 <= fVar92) {
          fVar59 = fVar92;
        }
        fVar92 = (fVar78 + fVar59) * 20.0 + 0.5;
        fVar78 = _UNK_01317b80;
        if (fVar92 != INFINITY) {
          fVar78 = (float)(int)fVar92 / 20.0;
        }
        if (fVar58 <= fVar78) {
          fVar78 = fVar58;
        }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize:
        *(float *)((long)unaff_x19 + 0x20c) = fVar78;
        return;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
    if (iVar24 <= iVar49) {
      uVar33 = FUN_05603500((long)unaff_x19 + 0x26c,0);
      uVar30 = FUN_05618860((long)unaff_x19 + 0x20c,0);
      uVar33 = FUN_0548db04(*(undefined8 *)System_Collections_Generic_List<BigInteger>_TypeInfo,
                            uVar33,*(undefined8 *)
                                    System_Collections_Generic_List<BaseInvokableCall>_TypeInfo,
                            uVar30,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*unaff_x29);
      }
      FUN_062244a4(uVar33,0);
    }
    if ((*(int *)((long)unaff_x19 + 0x4ac) == 0) ||
       ((*(int *)((long)unaff_x19 + 0x4ac) == 1 && (uVar97 == 3)))) {
      (**(code **)(*unaff_x19 + 0x958))();
      goto LAB_0603d144;
    }
    lVar27 = *plVar38;
    if (*(int *)(lVar27 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar27 = *plVar38;
    }
    plVar52 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
    lVar27 = **(long **)(lVar27 + 0xb8);
    if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
    iVar49 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38 + 0x54) << 2;
    if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(int *)(*(long *)System_Collections_Generic_List<byte[]>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
    FUN_060a5124(lVar27 + 0x20,0,0);
    fStack00000000000000c0 = (float)FUN_031c4efc(0);
    iVar24 = (int)unaff_x19[0x53];
    lVar27 = unaff_x19[0xef];
    fStack00000000000000bc = fStack0000000000000104;
    if (iVar24 < 0x401) {
      if (iVar24 == 0x100) {
        if (*(int *)((long)unaff_x19 + 0x314) == 5) {
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          if ((*(uint *)(lVar27 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
          if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x58), lVar29 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_0603fce4;
          fVar78 = *(float *)(lVar29 + (long)(int)uVar5 * 0x14 + 0x28);
        }
        else {
          if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
          if ((*(uint *)(lVar27 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
          fVar78 = *(float *)((long)unaff_x19 + 0x4d4);
        }
        fStack00000000000000bc = *(float *)(lVar27 + 0x34);
        fVar64 = (0.0 - fVar78) - fVar73;
        fStack0000000000000104 = *(float *)(lVar27 + 0x2c);
        fVar78 = *(float *)(lVar27 + 0x30);
LAB_0603d53c:
        fStack0000000000000104 = fVar63 + 0.0 + fStack0000000000000104;
        fVar78 = fVar78 + fVar64;
      }
      else {
        if (iVar24 != 0x200) {
          if (iVar24 != 0x400) goto LAB_0603d550;
          if (*(int *)((long)unaff_x19 + 0x314) == 5) {
            if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
            if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
            if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x58), lVar29 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_0603fce4;
            fVar96 = *(float *)(lVar29 + (long)(int)uVar5 * 0x14 + 0x30);
          }
          else {
            if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
            if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
          }
          fStack00000000000000bc = *(float *)(lVar27 + 0x28);
          fVar64 = fVar64 + (0.0 - fVar96);
          fStack0000000000000104 = *(float *)(lVar27 + 0x20);
          fVar78 = *(float *)(lVar27 + 0x24);
          goto LAB_0603d53c;
        }
        if (*(int *)((long)unaff_x19 + 0x314) != 5) {
          if (lVar27 != 0) {
            if ((*(int *)(lVar27 + 0x18) != 1) && (*(int *)(lVar27 + 0x18) != 0)) {
              fVar78 = *(float *)((long)unaff_x19 + 0x4d4);
              goto LAB_0603d470;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_0603fce4;
        if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x58), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_0603fce4;
        lVar29 = lVar29 + (long)(int)uVar5 * 0x14;
        fStack00000000000000bc = (*(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x34)) * 0.5;
        fStack0000000000000104 =
             fVar63 + 0.0 +
             ((float)*(undefined8 *)(lVar27 + 0x20) + (float)*(undefined8 *)(lVar27 + 0x2c)) * 0.5;
        fVar78 = (0.0 - ((fVar73 + *(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x30)) - fVar64)
                        * 0.5) +
                 ((float)((ulong)*(undefined8 *)(lVar27 + 0x20) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar27 + 0x2c) >> 0x20)) * 0.5;
      }
      fStack00000000000000bc = fStack00000000000000bc + 0.0;
      auVar75 = ZEXT416((uint)fVar78);
      fStack00000000000000c0 = fStack0000000000000104;
    }
    else if (iVar24 == 0x800) {
      if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
      if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_0603fce4;
      fStack0000000000000104 = (*(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x34)) * 0.5;
      fStack00000000000000c0 =
           ((float)*(undefined8 *)(lVar27 + 0x20) + (float)*(undefined8 *)(lVar27 + 0x2c)) * 0.5 +
           fVar63 + 0.0;
      fStack00000000000000bc = fStack0000000000000104 + 0.0;
      auVar75 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar27 + 0x20) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar27 + 0x2c) >> 0x20)) * 0.5 + 0.0))
      ;
    }
    else {
      if (iVar24 == 0x1000) {
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_0603fce4;
        fVar78 = *(float *)((long)unaff_x19 + 0x504);
        fVar96 = *(float *)((long)unaff_x19 + 0x4fc);
LAB_0603d470:
        fVar73 = fVar73 + fVar78 + fVar96;
      }
      else {
        if (iVar24 != 0x2000) goto LAB_0603d550;
        if (lVar27 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)) goto LAB_0603fce4;
        fVar73 = *(float *)(unaff_x19 + 0x9b) - fVar73;
      }
      fStack0000000000000104 = fVar63 + 0.0;
      auVar75._0_4_ =
           ((float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 +
           (0.0 - (fVar73 - fVar64) * 0.5);
      auVar75._4_4_ =
           ((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0;
      auVar75._8_8_ = 0;
      fStack00000000000000c0 =
           fStack0000000000000104 + (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      fStack00000000000000bc = auVar75._4_4_;
    }
LAB_0603d550:
    auVar71 = auVar75;
    fStack0000000000000120 = (float)FUN_031c4efc(0);
    auVar76 = auVar71;
    FUN_031c4efc(0);
    lVar27 = FUN_0604a24c();
    if (lVar27 != 0) {
      FUN_0627938c(lVar27,0);
      *(float *)((long)unaff_x19 + 0x704) = auVar76._0_4_;
      uStack0000000000000084 =
           FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
      }
      FUN_0603fd20(0);
      FUN_0605b508(&stack0x00001310,0x4000ffff,0);
      if (*(int *)(*plVar38 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar27 = unaff_x19[0x75];
      if (lVar27 != 0) {
        iVar24 = *(int *)((long)unaff_x19 + 0x4ac);
        if (iVar24 < 1) {
          iStack00000000000000ec = 0;
          iVar25 = 0;
          goto LAB_0603f770;
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 != 0) {
          bVar9 = false;
          bVar12 = false;
          fVar59 = 0.0;
          bVar8 = false;
          iStack00000000000000ec = 0;
          uVar18 = 0;
          uStack000000000000004c = 0;
          uVar17 = 0;
          lVar29 = lVar27 + 0x20;
          bVar7 = false;
          iStack0000000000000060 = 0;
          fStack0000000000000190 = auVar71._0_4_;
          fStack0000000000000138 =
               *(float *)(*(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo
                                   + 0xb8) + 0x1730);
          fStack0000000000000124 = fStack0000000000000190;
          fStack00000000000001b0 = auVar75._0_4_;
          fStack0000000000000058 = 0.0;
          fStack0000000000000134 = 0.0;
          fStack000000000000016c = 0.0;
          fVar92 = 0.0;
          fVar58 = 0.0;
          fStack0000000000000094 = fStack000000000000006c;
          fStack00000000000000dc = fStack000000000000006c;
          fStack00000000000000e8 = fStack000000000000006c;
          fStack0000000000000114 = fStack0000000000000064;
          fStack0000000000000098 = fStack0000000000000064;
          fStack00000000000000e0 = fStack0000000000000064;
          fVar78 = fStack0000000000000068;
          uVar19 = 0;
          goto LAB_0603d6e0;
        }
      }
    }
    goto thunk_FUN_02e3ccc4;
  }
  if (*(uint *)(lVar29 + 0x18) <= uVar94) goto LAB_0603fce4;
  uVar20 = *(uint *)(lVar29 + (long)(int)uVar94 * 0x10 + 0x24);
  if (uVar20 == 0) goto LAB_0603cfc8;
  if (5 < iVar49) {
    uVar33 = Oculus_Platform_CAPI__ovr_DestinationArray_HasNextPage(&stack0x0000133c,0);
    uVar30 = FUN_05603500(&stack0x00001308,0);
    uVar33 = FUN_0548db04(*(undefined8 *)System_Collections_Generic_List<BaseInputModule>_TypeInfo,
                          uVar33,*(undefined8 *)
                                  System_Collections_Generic_List<BaseRaycaster>_TypeInfo,uVar30,0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*unaff_x29);
    }
    FUN_06224c0c(uVar33,0);
    in_stack_00001328 = CONCAT44(3,*(undefined4 *)((long)unaff_x19 + 0x4ac));
  }
  if (uVar20 == 0x1a) goto LAB_06038edc;
  if ((uVar20 == 0x3c) && (*(char *)((long)unaff_x19 + 0x342) != '\0')) {
    *(undefined1 *)((long)unaff_x19 + 0x471) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
    uVar26 = FUN_060872e4();
    if (((uVar26 & 1) != 0) && (uVar94 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x664) == 0))
    goto LAB_06038edc;
  }
  else {
    if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
    *(undefined4 *)((long)unaff_x19 + 0x664) = *(undefined4 *)(lVar29 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar29 + 0x50);
    unaff_x19[0x20] = *(long *)(lVar29 + 0x40);
    thunk_FUN_02ee2be8(unaff_x19 + 0x20);
  }
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar97 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar29 + 0x18) <= uVar97) goto LAB_0603fce4;
  lVar28 = lVar29 + 0x20;
  uVar95 = (uint)in_stack_00001328;
  lVar46 = unaff_x19[0x24];
  cVar35 = *(char *)(lVar28 + (long)(int)uVar97 * 0x178 + 0x34);
  *(undefined1 *)((long)unaff_x19 + 0x471) = 0;
  uVar21 = uVar97;
  if (uVar95 == uVar97) {
    uVar20 = (uint)((ulong)in_stack_00001328 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
    if (uVar20 == 0x2026) {
      *(long *)(lVar28 + (long)(int)uVar97 * 0x178 + 0x10) = unaff_x19[0xce];
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
      *(long *)(lVar29 + 0x40) = unaff_x19[0xcf];
      *(undefined4 *)(lVar29 + 0x20) = 0;
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      *(long *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x48) =
           unaff_x19[0xd0];
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      *(int *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x50) =
           (int)unaff_x19[0xd1];
      puVar10 = System_Collections_Generic_List<AudioListener>_TypeInfo;
      lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar29 = *(long *)puVar10;
      }
      lVar29 = **(long **)(lVar29 + 0xb8);
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38;
      *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
      *(undefined1 *)(unaff_x19 + 0x66) = 1;
      in_stack_00001328 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4ac) + 1);
      uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
    }
    else if (uVar20 == 3) {
      if ((unaff_x19[0x20] == 0) || (lVar31 = FUN_0606364c(unaff_x19[0x20],0), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar33 = FUN_04e87e04(lVar31,3,*(undefined8 *)
                                      System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                           );
      if (*(uint *)(lVar29 + 0x18) <= uVar97) goto LAB_0603fce4;
      *(undefined8 *)(lVar28 + (long)(int)uVar97 * 0x178 + 0x10) = uVar33;
      thunk_FUN_02ee2be8();
      *(undefined1 *)(unaff_x19 + 0x66) = 1;
      uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
    }
  }
  plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (((int)uVar21 < *(int *)((long)unaff_x19 + 0x364)) && (uVar20 != 3)) {
    if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= uVar21) goto LAB_0603fce4;
    lVar29 = lVar29 + (long)(int)uVar21 * 0x178;
    *(undefined1 *)(lVar29 + 400) = 0;
    *(undefined2 *)(lVar29 + 0x24) = 0x200b;
    *(undefined4 *)(lVar29 + 0x5c) = 0;
    *(uint *)((long)unaff_x19 + 0x4ac) = uVar21 + 1;
    goto LAB_06038edc;
  }
  fVar82 = 1.0;
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    uVar21 = *(uint *)((long)unaff_x19 + 0x284);
    if ((uVar21 >> 4 & 1) == 0) {
      if ((uVar21 >> 3 & 1) == 0) {
        if ((uVar21 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar26 = FUN_055805c8(uVar20,0);
          if ((uVar26 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar20 = FUN_05580850(uVar20,0);
            fVar82 = fVar79;
            goto LAB_0603901c;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar26 = FUN_05580528(uVar20,0);
        if ((uVar26 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar20 = FUN_055809c8(uVar20,0);
          goto LAB_0603901c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar26 = FUN_055805c8(uVar20,0);
      if ((uVar26 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar20 = FUN_05580850(uVar20,0);
LAB_0603901c:
        uVar20 = uVar20 & 0xffff;
      }
    }
  }
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
  if (*(int *)((long)unaff_x19 + 0x664) == 1) {
    lVar29 = FUN_060800c8();
    if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    plVar55 = *(long **)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x30);
    plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (plVar55 == (long *)0x0) goto LAB_06038edc;
    bVar13 = *(byte *)(*(long *)System_Collections_Generic_List<uint[]>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar55 + 0x130) < bVar13) ||
       (*(long *)(*(long *)(*plVar55 + 200) + (ulong)bVar13 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<uint[]>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3d044(plVar55);
    }
    plVar38 = (long *)plVar55[3];
    if (plVar38 == (long *)0x0) {
      plVar38 = (long *)0x0;
      *plVar52 = 0;
    }
    else {
      lVar29 = *(long *)System_Collections_Generic_List<Type[]>_TypeInfo;
      bVar13 = *(byte *)(lVar29 + 0x130);
      if (*(byte *)(*plVar38 + 0x130) < bVar13) {
        plVar45 = (long *)0x0;
      }
      else {
        plVar45 = plVar38;
        if (*(long *)(*(long *)(*plVar38 + 200) + (ulong)bVar13 * 8 + -8) != lVar29) {
          plVar45 = (long *)0x0;
        }
      }
      *plVar52 = (long)plVar45;
      if (*(byte *)(*plVar38 + 0x130) < bVar13) {
        plVar38 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar38 + 200) + (ulong)bVar13 * 8 + -8) != lVar29) {
        plVar38 = (long *)0x0;
      }
    }
    thunk_FUN_02ee2be8(plVar52,plVar38);
    lVar29 = plVar55[5];
    *(int *)((long)unaff_x19 + 0x6c4) = (int)lVar29;
    puVar10 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (uVar20 == 0x3c) {
      uVar20 = (int)lVar29 + 0xe000;
    }
    else {
      lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar29 = *(long *)puVar10;
      }
      *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
    }
    fVar87 = *pfVar36;
    fVar58 = (float)FUN_0630f888(&stack0x000012a0,0);
    fVar62 = (float)FUN_0630f890(&stack0x000012a0,0);
    if (*plVar52 == 0) goto thunk_FUN_02e3ccc4;
    fVar62 = fVar78 * (fVar87 / fVar58) * fVar62;
    memmove(&stack0x00001200,(void *)(*plVar52 + 0x28),0x60);
    fVar58 = (float)FUN_0630f888(&stack0x00001200,0);
    fVar87 = *pfVar36;
    if (fVar58 <= 0.0) {
      fVar58 = (float)FUN_0630f888(&stack0x000012a0,0);
      fVar65 = (float)FUN_0630f890(&stack0x000012a0,0);
      fVar66 = (float)FUN_0630f8b8(&stack0x000012a0,0);
      if (plVar55[4] == 0) goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&stack0x00001340,plVar55[4],0);
      *(long *)(unaff_x28 + 0x38) = SUB168(*(undefined1 (*) [16])(unaff_x28 + 400),8);
      *(long *)(unaff_x28 + 0x30) = SUB168(*(undefined1 (*) [16])(unaff_x28 + 400),0);
      fVar88 = (float)FUN_0630fb7c(&stack0x000011e0,0);
      if (plVar55[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar67 = *(float *)((long)plVar55 + 0x2c);
      fVar87 = fVar78 * (fVar87 / fVar58) * fVar65;
      fVar58 = (float)FUN_0630fd88(plVar55[4],0);
      fVar58 = fVar87 * (fVar66 / fVar88) * fVar67 * fVar58;
      fStack0000000000000138 = 0.0;
      if (fVar58 != 0.0) {
        fStack0000000000000138 = fVar87 / fVar58;
      }
      fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
      fStack000000000000013c = fStack000000000000013c * fStack0000000000000138;
      fVar87 = (float)FUN_0630f8e0(&stack0x000012a0,0);
      fVar65 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
      fStack000000000000017c = fVar62 * fVar87 * fVar65 * fStack000000000000017c;
      fVar62 = (float)FUN_0630f8e8(&stack0x000012a0,0);
      fStack0000000000000138 = fStack0000000000000138 * fVar62;
    }
    else {
      fVar58 = (float)FUN_0630f888(&stack0x00001200,0);
      fVar65 = (float)FUN_0630f890(&stack0x00001200,0);
      if (plVar55[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar88 = *(float *)((long)plVar55 + 0x2c);
      fVar66 = (float)FUN_0630fd88(plVar55[4],0);
      fVar58 = fVar78 * (fVar87 / fVar58) * fVar65 * fVar88 * fVar66;
      fStack000000000000013c = (float)FUN_0630f8b8(&stack0x00001200,0);
      fVar87 = (float)FUN_0630f8e0(&stack0x00001200,0);
      fVar65 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x00001200,0);
      fStack000000000000017c = fVar62 * fVar87 * fVar65 * fStack000000000000017c;
      fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x00001200,0);
    }
    unaff_x19[0xcd] = (long)plVar55;
    thunk_FUN_02ee2be8(plVar2,plVar55);
    if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
    *(long *)(lVar29 + 0x40) = unaff_x19[0x20];
    *(undefined4 *)(lVar29 + 0x20) = 1;
    *(float *)(lVar29 + 0x15c) = fVar58;
    thunk_FUN_02ee2be8();
    lVar29 = unaff_x19[0x75];
    if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    fVar62 = 0.0;
    *(int *)(lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x50) =
         (int)unaff_x19[0x24];
    *(int *)(unaff_x19 + 0x24) = (int)lVar46;
LAB_06039744:
    fVar87 = 0.0;
    if (uVar20 != 3 && uVar20 != 0xad) {
      fVar87 = fVar58;
    }
  }
  else {
    lVar29 = unaff_x19[0x75];
    if (*(int *)((long)unaff_x19 + 0x664) == 0) {
      if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      *plVar2 = *(long *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x30);
      thunk_FUN_02ee2be8(plVar2);
      plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*plVar2 == 0) goto LAB_06038edc;
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      unaff_x19[0x20] =
           *(long *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x40);
      thunk_FUN_02ee2be8(unaff_x19 + 0x20);
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      unaff_x19[0x23] =
           *(long *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x48);
      thunk_FUN_02ee2be8(unaff_x19 + 0x23);
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar22 = *(uint *)((long)unaff_x19 + 0x4ac);
      uVar21 = *(uint *)(lVar29 + 0x18);
      if (uVar21 <= uVar22) goto LAB_0603fce4;
      *(undefined4 *)(unaff_x19 + 0x24) =
           *(undefined4 *)(lVar29 + 0x20 + (long)(int)uVar22 * 0x178 + 0x30);
      pfVar39 = pfVar36;
      if (uVar95 == uVar97) {
        lVar28 = unaff_x19[0x92];
        if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar28 + 0x18) <= uVar94) goto LAB_0603fce4;
        if ((*(int *)(lVar28 + (long)(int)uVar94 * 0x10 + 0x24) == 10) &&
           (uVar22 != *(uint *)(unaff_x19 + 0x96))) {
          if (uVar21 <= uVar22 - 1) goto LAB_0603fce4;
          pfVar39 = (float *)(lVar29 + 0x20 + (long)(int)(uVar22 - 1) * 0x178 + 0x38);
        }
      }
      fVar65 = *pfVar39;
      fVar62 = (float)FUN_0630f888(&stack0x000012a0,0);
      fVar87 = (float)FUN_0630f890(&stack0x000012a0,0);
      if (uVar95 == uVar97) {
        fStack0000000000000138 = 0.0;
        fStack000000000000013c = 0.0;
        if (uVar20 != 0x2026) goto LAB_060392a8;
      }
      else {
LAB_060392a8:
        fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
        fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x000012a0,0);
      }
      lVar29 = unaff_x19[0xcd];
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar88 = *(float *)((long)unaff_x19 + 0x444);
      fVar67 = *(float *)(lVar29 + 0x2c);
      fVar58 = (float)FUN_0630fd88(*(long *)(lVar29 + 0x20),0);
      fVar66 = (float)FUN_0630f8e0(&stack0x000012a0,0);
      fVar83 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
      lVar29 = unaff_x19[0x75];
      if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      lVar28 = lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
      *(undefined4 *)(lVar28 + 0x20) = 0;
      fVar62 = fVar78 * ((fVar82 * fVar65) / fVar62) * fVar87;
      fVar58 = fVar62 * fVar88 * fVar67 * fVar58;
      fStack000000000000017c = fVar62 * fVar66 * fVar83 * fStack000000000000017c;
      *(float *)(lVar28 + 0x15c) = fVar58;
      uVar21 = *(uint *)(unaff_x19 + 0x24);
      if (uVar21 == 0) {
        fVar62 = *(float *)(unaff_x19 + 199);
        goto LAB_06039744;
      }
      lVar28 = unaff_x19[0xe5];
      if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_0603fce4;
      lVar28 = *(long *)(lVar28 + (long)(int)uVar21 * 8 + 0x20);
      if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
      fVar62 = *(float *)(lVar28 + 0x54);
      goto LAB_06039744;
    }
    fVar87 = 0.0;
    if (uVar20 != 3 && uVar20 != 0xad) {
      fVar87 = fVar58;
    }
    fStack000000000000017c = 0.0;
    fStack000000000000013c = 0.0;
    fStack0000000000000138 = 0.0;
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
  }
  lVar29 = *(long *)(lVar29 + 0x38);
  if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(short *)(lVar29 + 0x24) = (short)uVar20;
  *(int *)(lVar29 + 0x58) = (int)unaff_x19[0x42];
  *(int *)(lVar29 + 0x160) = (int)unaff_x19[0xa1];
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  *(int *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x164) =
       (int)unaff_x19[0x2b];
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  *(undefined4 *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x16c) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  auVar75 = *(undefined1 (*) [16])(unaff_x19 + 0x2c);
  *(int *)(lVar29 + 0x188) = (int)unaff_x19[0x2e];
  *(long *)(lVar29 + 0x180) = auVar75._8_8_;
  *(long *)(lVar29 + 0x178) = auVar75._0_8_;
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  lVar28 = *(long *)(lVar29 + 0x38);
  *(undefined4 *)(lVar29 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
  if (lVar28 == 0) {
    if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x20), lVar29 == 0))
    goto thunk_FUN_02e3ccc4;
    FUN_0630fd4c(&stack0x00001340,lVar29,0);
    in_stack_000005c0 = *(undefined8 *)(unaff_x28 + 400);
    in_stack_000005c8 = *(undefined8 *)(unaff_x28 + 0x198);
  }
  else {
    FUN_0630fd4c(&stack0x000005c0,lVar28,0);
  }
  *(undefined8 *)(unaff_x28 + 0xd8) = in_stack_000005c8;
  *(undefined8 *)(unaff_x28 + 0xd0) = in_stack_000005c0;
  if (uVar20 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar21 = FUN_0557df5c(uVar20,0);
    uVar21 = uVar21 & 1;
  }
  else {
    uVar21 = 0;
  }
  fVar65 = *(float *)(unaff_x19 + 0x5a);
  if (((uVar17 & 1) != 0) && (*(int *)((long)unaff_x19 + 0x664) == 0)) {
    if (*plVar2 == 0) goto thunk_FUN_02e3ccc4;
    iVar24 = *(int *)((long)unaff_x19 + 0x4ac);
    uVar22 = *(uint *)(*plVar2 + 0x28);
    if (iVar24 < (int)uVar4) {
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar23 = iVar24 + 1;
      if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_0603fce4;
      if (*(int *)(lVar29 + 0x20 + (long)(int)uVar23 * 0x178) == 0) {
        lVar29 = *(long *)(lVar29 + 0x20 + (long)(int)uVar23 * 0x178 + 0x10);
        if ((((lVar29 == 0) || (unaff_x19[0x20] == 0)) ||
            (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
           (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
        uVar26 = FUN_04e75974(lVar28,uVar22 | *(int *)(lVar29 + 0x28) << 0x10,&stack0x000011b0,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        if ((uVar26 & 1) != 0) {
          FUN_0631443c(&stack0x00001340,&stack0x000011b0,0);
          FUN_06314290(&stack0x00001190,0);
          uVar26 = FUN_06314478(&stack0x000011b0,0);
          if ((uVar26 & 0x100) != 0) {
            fVar65 = 0.0;
          }
        }
      }
      iVar24 = *(int *)((long)unaff_x19 + 0x4ac);
    }
    if (0 < iVar24) {
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= iVar24 - 1U) goto LAB_0603fce4;
      lVar29 = *(long *)(lVar29 + (ulong)(iVar24 - 1U) * 0x178 + 0x30);
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      uVar23 = *(uint *)(lVar29 + 0x28);
      lVar29 = FUN_060800c8();
      if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar42 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
      if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_0603fce4;
      if (*(int *)(lVar29 + (long)(int)uVar42 * 0x178 + 0x20) == 0) {
        if (((unaff_x19[0x20] == 0) || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0))
           || (lVar29 = *(long *)(lVar29 + 0x40), lVar29 == 0)) goto thunk_FUN_02e3ccc4;
        uVar26 = FUN_04e75974(lVar29,uVar23 | uVar22 << 0x10,&stack0x000011b0,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        if ((uVar26 & 1) != 0) {
          FUN_06314464(&stack0x00001340,&stack0x000011b0,0);
          FUN_06314290(&stack0x00001190,0);
          FUN_063140f0(0);
          uVar26 = FUN_06314478(&stack0x000011b0,0);
          if ((uVar26 & 0x100) != 0) {
            fVar65 = 0.0;
          }
        }
      }
    }
  }
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar22 = *(uint *)((long)unaff_x19 + 0x4ac);
  uVar16 = FUN_063140cc(&stack0x00001270,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_0603fce4;
  *(undefined4 *)(lVar29 + (long)(int)uVar22 * 0x178 + 0x154) = uVar16;
  if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) == 0)
  {
    thunk_FUN_02e9a04c();
  }
  uVar26 = FUN_060b1c00(uVar20,0);
  uVar22 = *(uint *)((long)unaff_x19 + 0x4ac);
  uVar48 = (ulong)uVar22;
  if ((uVar26 & 1) == 0) {
    if (0 < (int)uVar22) {
      if ((((uVar18 & 1) == 0) ||
          (uVar23 = *(uint *)((long)unaff_x19 + 0x334), uVar23 == 0x80000000)) ||
         (uVar23 != uVar22 - 1)) {
        if ((uVar19 & 1) == 0) {
          bVar12 = false;
        }
        else {
          lVar29 = uVar48 * 0x178 + 0x144;
          uVar53 = uVar48;
          do {
            uVar53 = uVar53 - 1;
            iVar24 = (int)uVar48;
            uVar22 = iVar24 - 1;
            uVar48 = (ulong)uVar22;
            if ((iVar24 < 1) || (uVar53 == *(uint *)((long)unaff_x19 + 0x334))) {
              bVar12 = false;
              goto LAB_06039e54;
            }
            if ((unaff_x19[0x75] == 0) || (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar28 + 0x18) <= uVar53) goto LAB_0603fce4;
            lVar28 = *(long *)(lVar28 + lVar29 + -0x28c);
            if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar23 = FUN_0630fd3c(lVar28,0);
            if ((*plVar2 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)
                 ) || (lVar28 = *(long *)(lVar28 + 0x50), lVar28 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar32 = FUN_04e82f84(lVar28,uVar23 | *(int *)(*plVar2 + 0x28) << 0x10,&stack0x00001160,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<Type,_NetworkInputWeavedAttribute>>_TypeInfo
                                 );
            lVar29 = lVar29 + -0x178;
          } while ((uVar32 & 1) == 0);
          if ((unaff_x19[0x75] == 0) || (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_0603fce4;
          FUN_063140b4(((*(float *)(lVar28 + lVar29 + -0xc) - *(float *)(unaff_x19 + 0xcc)) / fVar87
                       + in_stack_00001164) - in_stack_00001170,in_stack_00001164,in_stack_00001170,
                       &stack0x00001270,0);
          FUN_063140c4(&stack0x00001270,0);
          fVar65 = 0.0;
          bVar12 = true;
        }
LAB_06039e54:
        if ((uVar18 & 1) != 0) {
          uVar22 = *(uint *)((long)unaff_x19 + 0x334);
          if (uVar22 == 0x80000000) {
            bVar12 = true;
          }
          if (!bVar12) {
            if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_0603fce4;
            lVar29 = *(long *)(lVar29 + (long)(int)uVar22 * 0x178 + 0x30);
            if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar22 = FUN_0630fd3c(lVar29,0);
            if ((*plVar2 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0)
                 ) || (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar48 = FUN_04e7c424(lVar29,uVar22 | *(int *)(*plVar2 + 0x28) << 0x10,&stack0x00001148,
                                  *(undefined8 *)
                                   System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                 );
            if ((uVar48 & 1) != 0) {
              if ((unaff_x19[0x75] != 0) &&
                 (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
                if (*(uint *)((long)unaff_x19 + 0x334) < *(uint *)(lVar29 + 0x18)) {
                  FUN_063140b4((in_stack_0000114c +
                               (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) *
                                                    0x178 + 0x138) - *(float *)(unaff_x19 + 0xcc)) /
                               fVar87) - in_stack_00001158,in_stack_0000114c,in_stack_00001158,
                               &stack0x00001270,0);
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
        if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_0603fce4;
        lVar29 = *(long *)(lVar29 + (long)(int)uVar23 * 0x178 + 0x30);
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        uVar22 = FUN_0630fd3c(lVar29,0);
        if ((*plVar2 == 0) ||
           (((unaff_x19[0x20] == 0 || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0)) ||
            (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)))) goto thunk_FUN_02e3ccc4;
        uVar48 = FUN_04e7c424(lVar29,uVar22 | *(int *)(*plVar2 + 0x28) << 0x10,&stack0x00001178,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                             );
        if ((uVar48 & 1) != 0) {
          if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x334)) goto LAB_0603fce4;
          FUN_063140b4((in_stack_0000117c +
                       (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) * 0x178 +
                                  0x138) - *(float *)(unaff_x19 + 0xcc)) / fVar87) -
                       in_stack_00001188,in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_06039f50:
          FUN_063140c4(&stack0x00001270,0);
          fVar65 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)((long)unaff_x19 + 0x334) = uVar22;
  }
  fVar66 = (float)FUN_063140bc(&stack0x00001270,0);
  fVar88 = (float)FUN_063140bc(&stack0x00001270,0);
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar83 = *(float *)(unaff_x19 + 0xcc);
    fVar67 = (float)FUN_0630fb94(&stack0x00001280,0);
    fVar83 = fVar83 - fVar87 * *(float *)(unaff_x19 + 0x5c) *
                               fVar67 * (1.0 - *(float *)((long)unaff_x19 + 0x304));
    *(float *)(unaff_x19 + 0xcc) = fVar83;
    if ((uVar21 != 0) || (uVar20 == 0x200b)) {
      *(float *)(unaff_x19 + 0xcc) = fVar83 - fVar92 * *(float *)((long)unaff_x19 + 0x2e4);
    }
  }
  fVar67 = *(float *)(unaff_x19 + 0x5b);
  fVar83 = 0.0;
  fStack000000000000016c = 0.0;
  if (fVar67 != 0.0) {
    if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < uVar20)) ||
       (fVar83 = 0.25, (1L << ((ulong)uVar20 & 0x3f) & 0x400500000000000U) == 0)) {
      fVar83 = 0.5;
    }
    fVar68 = (float)FUN_0630fb74(&stack0x00001280,0);
    fVar69 = (float)FUN_0630fb84(&stack0x00001280,0);
    fVar83 = *(float *)(unaff_x19 + 0x5c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
             (fVar67 * fVar83 - fVar87 * (fVar68 * 0.5 + fVar69));
    *(float *)(unaff_x19 + 0xcc) = fVar83 + *(float *)(unaff_x19 + 0xcc);
  }
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    fVar67 = 0.0;
    if ((cVar35 == '\0') && ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fVar67 = *(float *)(unaff_x19[0x20] + 0x1ac);
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    lVar29 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar48 = FUN_06267b6c(lVar29,0,0);
    fStack000000000000016c = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar29 = unaff_x19[0x23];
      if (*(int *)(*(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      plVar38 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      uVar48 = FUN_06238d70(lVar29,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo
                                              + 0xb8) + 0x6c),0);
      if ((uVar48 & 1) != 0) {
        lVar29 = unaff_x19[0x23];
        if (*(int *)(*plVar38 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          plVar38 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
        }
        if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
        uVar48 = FUN_06238d70(lVar29,*(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0xe4),0);
        if ((uVar48 & 1) != 0) {
          lVar29 = unaff_x19[0x23];
          if (*(int *)(*plVar38 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            plVar38 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
          }
          if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
          fVar68 = (float)thunk_FUN_0623b08c(lVar29,*(undefined4 *)
                                                     (*(long *)(*plVar38 + 0xb8) + 0x6c),0);
          if (unaff_x19[0x23] == 0) goto thunk_FUN_02e3ccc4;
          fStack000000000000016c =
               (float)thunk_FUN_0623b08c(unaff_x19[0x23],
                                         *(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0xe4),0);
          lVar29 = unaff_x19[0x20];
          if (bVar12) {
            if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
            pfVar39 = (float *)(lVar29 + 0x1a0);
          }
          else {
            if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
            pfVar39 = (float *)(lVar29 + 0x1a8);
          }
          fStack000000000000016c = fStack000000000000016c * fVar68 * *pfVar39 * 0.25;
          if (fVar68 < fVar62 + fStack000000000000016c) {
            fVar62 = fVar68 - fStack000000000000016c;
          }
        }
      }
    }
  }
  else {
    fVar67 = 0.0;
  }
  fVar84 = *(float *)(unaff_x19 + 0xcc);
  fVar68 = (float)FUN_0630fb84(&stack0x00001280,0);
  fVar89 = *(float *)((long)unaff_x19 + 0x484);
  fVar69 = (float)FUN_063140ac(&stack0x00001270,0);
  fVar84 = fVar84 + *(float *)(unaff_x19 + 0x5c) *
                    (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                    fVar87 * (fVar69 + ((fVar68 * fVar89 - fVar62) - fStack000000000000016c));
  fVar68 = (float)FUN_0630fb8c(&stack0x00001280,0);
  fVar69 = (float)FUN_063140bc(&stack0x00001270,0);
  fStack0000000000000180 =
       *(float *)((long)unaff_x19 + 0x63c) +
       ((fStack000000000000017c + fVar87 * (fVar62 + fVar68 + fVar69)) -
       *(float *)((long)unaff_x19 + 0x4f4));
  fVar68 = (float)FUN_0630fb7c(&stack0x00001280,0);
  fVar68 = fStack0000000000000180 - fVar87 * (fVar62 + fVar62 + fVar68);
  fVar69 = (float)FUN_0630fb74(&stack0x00001280,0);
  fVar69 = fVar84 + *(float *)(unaff_x19 + 0x5c) *
                    (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                    fVar87 * (fStack000000000000016c + fStack000000000000016c +
                             fVar62 + fVar62 + fVar69 * *(float *)((long)unaff_x19 + 0x484));
  fVar89 = fVar84;
  fVar85 = fVar69;
  if (((*(int *)((long)unaff_x19 + 0x664) == 0) && (cVar35 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    lVar29 = unaff_x19[0xc2];
    fVar89 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar72 = (float)FUN_0630f8e0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar90 = *(float *)((long)unaff_x19 + 0x444);
    fVar91 = *(float *)((long)unaff_x19 + 0x63c);
    fVar85 = (float)(int)lVar29 * fVar80;
    fVar77 = (float)FUN_0630f890(unaff_x19[0x20] + 0x28,0);
    fVar77 = fVar77 * fVar90 * (fVar89 - (fVar72 + fVar91)) * 0.5;
    fVar89 = (float)FUN_0630fb8c(&stack0x00001280,0);
    fVar91 = fVar85 * fVar87 * ((fStack000000000000016c + fVar62 + fVar89) - fVar77);
    fVar72 = (float)FUN_0630fb8c(&stack0x00001280,0);
    fVar90 = (float)FUN_0630fb7c(&stack0x00001280,0);
    fStack0000000000000180 = fStack0000000000000180 + 0.0;
    fVar68 = fVar68 + 0.0;
    fVar89 = fVar84 + fVar91;
    fVar85 = fVar85 * fVar87 * ((((fVar72 - fVar90) - fVar62) - fStack000000000000016c) - fVar77);
    fVar84 = fVar84 + fVar85;
    fVar85 = fVar69 + fVar85;
    fVar69 = fVar69 + fVar91;
  }
  uVar30 = *(undefined8 *)((long)unaff_x19 + 0x474);
  uVar33 = *(undefined8 *)((long)unaff_x19 + 0x47c);
  if (DAT_06e84e41 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2f028);
    DAT_06e84e41 = '\x01';
  }
  uVar70 = **(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8);
  uVar74 = (*(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8))[1];
  if (DAT_01317bfc <
      (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar74 >> 0x20) +
      (float)uVar33 * (float)uVar74 +
      (float)uVar30 * (float)uVar70 +
      (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar70 >> 0x20)) {
    fVar72 = 0.0;
    auVar76._4_12_ = SUB1612(ZEXT816(0),4);
    auVar76._0_4_ = fVar68;
    uVar30 = auVar76._0_8_;
    uVar48 = (ulong)(uint)fStack0000000000000180;
    uVar33 = uVar30;
  }
  else {
    FUN_062541ec(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],
                 *(undefined4 *)((long)unaff_x19 + 0x47c),(int)unaff_x19[0x90],0);
    fVar85 = (fVar69 + fVar84) * 0.5;
    fVar77 = (fVar68 + fStack0000000000000180) * 0.5;
    fVar69 = 0.0;
    auVar75 = ZEXT416((uint)(fStack0000000000000180 - fVar77));
    fVar89 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar89 = fVar85 + fVar89;
    fVar90 = 0.0;
    uVar48 = CONCAT44(fVar69 + 0.0,fVar77 + auVar75._0_4_);
    auVar75 = ZEXT416((uint)(fVar68 - fVar77));
    fVar84 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar84 = fVar85 + fVar84;
    fVar72 = 0.0;
    uVar30 = CONCAT44(fVar90 + 0.0,fVar77 + auVar75._0_4_);
    auVar75 = ZEXT416((uint)(fStack0000000000000180 - fVar77));
    fVar69 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar69 = fVar85 + fVar69;
    fVar90 = 0.0;
    fStack0000000000000180 = fVar77 + auVar75._0_4_;
    fVar72 = fVar72 + 0.0;
    auVar75 = ZEXT416((uint)(fVar68 - fVar77));
    fVar68 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar85 = fVar85 + fVar68;
    uVar33 = CONCAT44(fVar90 + 0.0,fVar77 + auVar75._0_4_);
  }
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar29 + 0x114) = fVar84;
  *(undefined8 *)(lVar29 + 0x118) = uVar30;
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar29 + 0x108) = fVar89;
  *(ulong *)(lVar29 + 0x10c) = uVar48;
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar29 + 0x120) = fVar69;
  *(ulong *)(lVar29 + 0x124) = CONCAT44(fVar72,fStack0000000000000180);
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar29 + 300) = fVar85;
  *(undefined8 *)(lVar29 + 0x130) = uVar33;
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar22 = *(uint *)((long)unaff_x19 + 0x4ac);
  fVar89 = *(float *)(unaff_x19 + 0xcc);
  fVar68 = (float)FUN_063140ac(&stack0x00001270,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_0603fce4;
  *(float *)(lVar29 + (long)(int)uVar22 * 0x178 + 0x138) = fVar89 + fVar87 * fVar68;
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar22 = *(uint *)((long)unaff_x19 + 0x4ac);
  fVar89 = *(float *)((long)unaff_x19 + 0x4f4);
  fVar85 = *(float *)((long)unaff_x19 + 0x63c);
  fVar68 = (float)FUN_063140bc(&stack0x00001270,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_0603fce4;
  *(float *)(lVar29 + (long)(int)uVar22 * 0x178 + 0x144) =
       (fStack000000000000017c - fVar89) + fVar85 + fVar87 * fVar68;
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar22 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_0603fce4;
  lVar29 = lVar29 + 0x20;
  *(float *)(lVar29 + (long)(int)uVar22 * 0x178 + 0x138) =
       (fVar69 - fVar84) / ((float)uVar48 - (float)uVar30);
  fVar66 = fVar87 * (fStack000000000000013c + fVar66);
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    fVar66 = fVar66 / fVar82;
    fVar88 = (fVar87 * (fStack0000000000000138 + fVar88)) / fVar82;
  }
  else {
    fVar88 = fVar87 * (fStack0000000000000138 + fVar88);
  }
  fVar68 = *(float *)((long)unaff_x19 + 0x63c);
  uVar23 = *(uint *)(unaff_x19 + 0x96);
  if ((uVar21 == 0) || (uVar22 == uVar23)) {
    fVar66 = fVar66 + fVar68;
    fVar88 = fVar88 + fVar68;
    fVar69 = fVar66;
    fVar89 = fVar88;
    if (fVar68 != 0.0) {
      fVar69 = (fVar66 - fVar68) / *(float *)((long)unaff_x19 + 0x444);
      fVar89 = (fVar88 - fVar68) / *(float *)((long)unaff_x19 + 0x444);
      if (fVar69 <= fVar66) {
        fVar69 = fVar66;
      }
      if (fVar88 <= fVar89) {
        fVar89 = fVar88;
      }
    }
    lVar29 = lVar29 + (long)(int)uVar22 * 0x178;
    fVar68 = fVar69;
    if (fVar69 <= *(float *)((long)unaff_x19 + 0x4e4)) {
      fVar68 = *(float *)((long)unaff_x19 + 0x4e4);
    }
    fVar85 = fVar89;
    if (*(float *)(unaff_x19 + 0x9d) <= fVar89) {
      fVar85 = *(float *)(unaff_x19 + 0x9d);
    }
    *(float *)((long)unaff_x19 + 0x4e4) = fVar68;
    *(float *)(unaff_x19 + 0x9d) = fVar85;
    *(float *)(lVar29 + 300) = fVar69;
    *(float *)(lVar29 + 0x130) = fVar89;
    fVar69 = *(float *)((long)unaff_x19 + 0x4f4);
    *(float *)(lVar29 + 0x120) = fVar66 - fVar69;
    *(float *)((long)unaff_x19 + 0x4dc) = fVar66 - fVar69;
    *(float *)(lVar29 + 0x128) = fVar88 - fVar69;
    *(float *)(unaff_x19 + 0x9c) = fVar88 - fVar69;
    if (((int)unaff_x19[0x98] == 0) || (*(char *)((long)unaff_x19 + 0x37c) != '\0')) {
      *(float *)((long)unaff_x19 + 0x4d4) = fVar68;
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fVar88 = *(float *)(unaff_x19 + 0x9b);
      fVar68 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
      fVar82 = (fVar87 * fVar68) / fVar82;
      if (fVar88 <= fVar82) {
        fVar88 = fVar82;
      }
      fVar69 = *(float *)((long)unaff_x19 + 0x4f4);
      *(float *)(unaff_x19 + 0x9b) = fVar88;
    }
    if (fVar69 == 0.0) {
      fVar82 = *(float *)(unaff_x19 + 0x9a);
      if (*(float *)(unaff_x19 + 0x9a) <= fVar66) {
        fVar82 = fVar66;
      }
      *(float *)(unaff_x19 + 0x9a) = fVar82;
    }
  }
  else {
    lVar29 = lVar29 + (long)(int)uVar22 * 0x178;
    uVar33 = *(undefined8 *)((long)unaff_x19 + 0x4e4);
    *(undefined8 *)(lVar29 + 300) = uVar33;
    fVar69 = *(float *)((long)unaff_x19 + 0x4f4);
    fVar82 = (float)uVar33 - fVar69;
    fVar66 = (float)((ulong)uVar33 >> 0x20) - fVar69;
    *(float *)(lVar29 + 0x120) = fVar82;
    *(float *)(lVar29 + 0x128) = fVar66;
    *(ulong *)((long)unaff_x19 + 0x4dc) = CONCAT44(fVar66,fVar82);
  }
  lVar29 = unaff_x19[0x75];
  if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
  uVar42 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar28 + 0x18) <= uVar42) goto LAB_0603fce4;
  lVar28 = lVar28 + (long)(int)uVar42 * 0x178;
  *(undefined1 *)(lVar28 + 400) = 0;
  uVar54 = *(uint *)(unaff_x19 + 0x54);
  if ((((uVar20 == 9) ||
       ((uVar20 == 0x200b || uVar21 != 0 && ((*(uint *)(unaff_x19 + 0x61) & 0xfffffffe) == 2)))) ||
      ((uVar21 == 0 && (((uVar20 != 3 && (uVar20 != 0x200b)) && (uVar20 != 0xad)))))) ||
     ((uVar20 == 0xad && bVar15 == 0 || (*(int *)((long)unaff_x19 + 0x664) == 1)))) {
    *(undefined1 *)(lVar28 + 400) = 1;
    pfVar43 = (float *)((long)unaff_x19 + 0x394);
    pfVar39 = (float *)(unaff_x19 + 0x72);
    if (uVar95 == uVar97) {
      lVar29 = *(long *)(lVar29 + 0x50);
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      pfVar39 = (float *)(lVar29 + 100);
      pfVar43 = (float *)(lVar29 + 0x68);
    }
    fVar88 = *pfVar39;
    fVar68 = *pfVar43;
    fVar82 = *(float *)(unaff_x19 + 0x74);
    fVar66 = 0.0;
    fVar69 = *(float *)(unaff_x19 + 0xcc);
    fStack0000000000000140 = (fVar86 - fVar88) - fVar68;
    bVar12 = true;
    if ((fVar82 <= fStack0000000000000140) && (bVar12 = false, !NAN(fVar82))) {
      bVar12 = fVar82 == -1.0;
    }
    if (!bVar12) {
      fStack0000000000000140 = fVar82;
    }
    fVar82 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar82 = (float)FUN_0630fb94(&stack0x00001280,0);
    }
    fVar89 = *(float *)((long)unaff_x19 + 0x4f4);
    fStack0000000000000104 = fVar58;
    if (uVar20 != 0xad) {
      fStack0000000000000104 = fVar87;
    }
    fVar58 = *(float *)((long)unaff_x19 + 0x304);
    auVar75 = ZEXT416((uint)fVar58);
    if ((0.0 < fVar89) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
      fVar66 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
    }
    iVar24 = *(int *)((long)unaff_x19 + 0x4ac);
    fVar66 = (*(float *)((long)unaff_x19 + 0x4d4) - (*(float *)(unaff_x19 + 0x9d) - fVar89)) +
             fVar66;
    if (fVar59 < fVar66) {
      if ((int)unaff_x19[99] == -1) {
        *(int *)(unaff_x19 + 99) = iVar24;
      }
      plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      fVar85 = DAT_01317af0;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar89) {
          fVar89 = *(float *)(unaff_x19 + 0x5f);
          if ((fVar89 < *(float *)((long)unaff_x19 + 0x2ec)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar78 = *(float *)((long)unaff_x19 + 0x2ec) +
                     ((fVar93 - fVar66) / (float)(int)unaff_x19[0x98]) / fVar61;
            if (fVar78 <= fVar89) {
              fVar78 = fVar89;
            }
            goto LAB_0603fbd0;
          }
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x20c);
        fVar89 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar89 < fVar66) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar66;
          fVar78 = (fVar66 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar78 <= fVar85) {
            fVar78 = fVar85;
          }
          fVar58 = (fVar66 - fVar78) * 20.0 + 0.5;
          fVar78 = _UNK_01317b80;
          if (fVar58 != INFINITY) {
            fVar78 = (float)(int)fVar58 / 20.0;
          }
          if (fVar78 <= fVar89) {
            fVar78 = fVar89;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar78;
          return;
        }
      }
      iVar25 = *(int *)((long)unaff_x19 + 0x314);
      if (iVar25 < 5) {
        if (iVar25 == 1) {
          lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar29 = *plVar38;
          }
          lVar28 = *(long *)(lVar29 + 0xb8);
          if (*(int *)(lVar28 + 0x1708) != 0) {
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar28 = *(long *)(*plVar38 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&stack0x00001340,lVar28 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_0603b314:
            iVar24 = FUN_0608c590();
            uVar94 = iVar24 - 1;
            iVar49 = iVar49 + 1;
            uVar42 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
            *(uint *)((long)unaff_x19 + 0x4ac) = uVar42;
            uVar16 = 0x2026;
            goto LAB_0603b340;
          }
LAB_0603b348:
          unaff_x28 = &stack0x000011b0;
          *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
          fVar58 = fVar87;
          uVar94 = 0xffffffff;
          in_stack_00001328 = DAT_01318128;
          goto LAB_06038edc;
        }
        if (iVar25 != 3) goto LAB_0603acbc;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
LAB_0603af60:
        uVar94 = FUN_0608c590();
      }
      else {
        if (iVar25 == 5) {
          if ((-1 < (int)uVar94) && (iVar24 != 0)) {
            auVar75 = ZEXT416((uint)fVar59);
            if (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)(unaff_x19 + 0x9d) <= fVar59) {
              if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4)
                  == 0) {
                thunk_FUN_02e9a04c();
              }
              unaff_x28 = &stack0x000011b0;
              uVar94 = FUN_0608c590();
              *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
              lVar29 = *plVar38;
              *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
              uVar33 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1730);
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
              *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
              uVar33 = NEON_rev64(uVar33,4);
              auVar75 = ZEXT816(0);
              *(int *)(unaff_x19 + 0x98) = (int)unaff_x19[0x98] + 1;
              *(undefined8 *)((long)unaff_x19 + 0x4e4) = uVar33;
              unaff_x19[0x9a] = 0;
              *(int *)((long)unaff_x19 + 0x4cc) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
              fVar58 = fVar87;
              goto LAB_06038edc;
            }
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            goto LAB_0603af60;
          }
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          uVar94 = 0xffffffff;
          in_stack_00001328 = DAT_01318128;
LAB_0603b124:
          unaff_x28 = &stack0x000011b0;
          plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          fVar58 = fVar87;
          goto LAB_06038edc;
        }
        if (iVar25 != 6) goto LAB_0603acbc;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
        uVar94 = FUN_0608c590();
        lVar29 = unaff_x19[100];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar26 = FUN_06267b6c(lVar29,0,0);
        if ((uVar26 & 1) != 0) {
          plVar55 = (long *)unaff_x19[100];
          uVar33 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar55 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar55 + 0x558))(plVar55,uVar33,*(undefined8 *)(*plVar55 + 0x560));
          lVar29 = unaff_x19[100];
          if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar29 + 0x440) = (int)unaff_x19[0x88];
          FUN_0607fed4(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
          plVar55 = (long *)unaff_x19[100];
          if (plVar55 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar55 + 0x7d8))(plVar55,0,0,*(undefined8 *)(*plVar55 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
        }
      }
      in_stack_00001328 = CONCAT44(3,iVar24);
      goto LAB_0603af80;
    }
LAB_0603acbc:
    plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((uVar26 & 1) != 0) {
      fVar66 = 1.0;
      if ((uVar54 & 0x18) != 0) {
        fVar66 = _UNK_01317cd8;
      }
      fVar82 = ABS(fVar69) +
               *(float *)(unaff_x19 + 0x5c) * fVar82 * (1.0 - fVar58) * fStack0000000000000104;
      if (fVar66 * fStack0000000000000140 < fVar82) {
        if ((((int)unaff_x19[0x61] == 0) || ((int)unaff_x19[0x61] == 3)) ||
           (iVar24 == (int)unaff_x19[0x96])) {
          if (((char)unaff_x19[0x4c] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fStack0000000000000104 = 100.0;
            fVar69 = *(float *)(unaff_x19 + 0x60) / 100.0;
            if (fVar58 < fVar69) goto LAB_0603fc3c;
            fVar58 = *(float *)((long)unaff_x19 + 0x20c);
            fVar69 = *(float *)(unaff_x19 + 0x4f);
            auVar75 = ZEXT416((uint)fVar69);
            if (fVar69 < fVar58) {
LAB_0603fc84:
              fVar78 = DAT_01317af0;
              *(float *)((long)unaff_x19 + 0x264) = fVar58;
              fVar92 = (fVar58 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar92 <= fVar78) {
                fVar92 = fVar78;
              }
              fVar58 = (fVar58 - fVar92) * 20.0 + 0.5;
              fVar78 = _UNK_01317b80;
              if (fVar58 != INFINITY) {
                fVar78 = (float)(int)fVar58 / 20.0;
              }
              if (fVar78 <= fVar69) {
                fVar78 = fVar69;
              }
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
              ;
            }
          }
          iVar25 = *(int *)((long)unaff_x19 + 0x314);
          if (iVar25 == 1) {
            lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar29 = *plVar38;
            }
            lVar28 = *(long *)(lVar29 + 0xb8);
            if (*(int *)(lVar28 + 0x1708) == 0) goto LAB_0603b348;
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar28 = *(long *)(*plVar38 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&stack0x00001340,lVar28 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
            goto LAB_0603b314;
          }
          if (iVar25 == 6) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            uVar94 = FUN_0608c590();
            lVar29 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar26 = FUN_06267b6c(lVar29,0,0);
            if ((uVar26 & 1) != 0) {
              plVar55 = (long *)unaff_x19[100];
              uVar33 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar55 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar55 + 0x558))(plVar55,uVar33,*(undefined8 *)(*plVar55 + 0x560));
              lVar29 = unaff_x19[100];
              if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar29 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar55 = (long *)unaff_x19[100];
              if (plVar55 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar55 + 0x7d8))(plVar55,0,0,*(undefined8 *)(*plVar55 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
            uVar42 = *(uint *)((long)unaff_x19 + 0x4ac);
            goto LAB_0603b288;
          }
          if (iVar25 == 3) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            goto LAB_0603af60;
          }
        }
        else {
          if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02e9a04c();
          }
          uVar94 = FUN_0608c590();
          if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
            lVar29 = unaff_x19[0x75];
            if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
            fVar58 = *(float *)((long)unaff_x19 + 0x4f4);
            fVar69 = 0.0;
            if ((0.0 < fVar58) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
              fVar69 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
            }
            fVar69 = fVar92 * *(float *)(unaff_x19 + 0x5d) +
                     *(float *)(lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 +
                               0x14c) + (fVar69 - *(float *)(unaff_x19 + 0x9d)) +
                     fVar61 * (fVar60 + *(float *)((long)unaff_x19 + 0x2ec));
          }
          else {
            lVar29 = unaff_x19[0x75];
            *(undefined1 *)((long)unaff_x19 + 0x2f4) = 1;
            if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
            fVar69 = *(float *)(unaff_x19 + 0x5e) + fVar92 * *(float *)(unaff_x19 + 0x5d);
            fVar58 = *(float *)((long)unaff_x19 + 0x4f4);
          }
          puVar10 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
          uVar42 = *(uint *)((long)unaff_x19 + 0x4ac);
          if ((*(uint *)(lVar29 + 0x18) <= uVar42) ||
             (uVar44 = uVar42 - 1, *(uint *)(lVar29 + 0x18) <= uVar44)) goto LAB_0603fce4;
          fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x4d4);
          lVar29 = lVar29 + 0x20;
          fVar89 = *(float *)(lVar29 + (long)(int)uVar42 * 0x178 + 0x130);
          auVar75 = ZEXT416((uint)fVar89);
          fVar89 = (fVar69 + fStack0000000000000104 + fVar58) - fVar89;
          if ((*(short *)(lVar29 + (long)(int)uVar44 * 0x178 + 4) == 0xad && bVar15 == 0) &&
             ((*(int *)((long)unaff_x19 + 0x314) == 0 || (fVar89 < fVar59)))) {
            bVar15 = 0;
            uVar94 = uVar94 - 1;
            in_stack_00001328 = CONCAT44(0x2d,uVar44);
            *(uint *)((long)unaff_x19 + 0x4ac) = uVar44;
            plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
LAB_0603af80:
            unaff_x28 = &stack0x000011b0;
            fVar58 = fVar87;
            goto LAB_06038edc;
          }
          if (*(short *)(lVar29 + (long)(int)uVar42 * 0x178 + 4) == 0xad) {
            bVar15 = 1;
            plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            goto LAB_0603af80;
          }
          if ((char)unaff_x19[0x4c] != '\0' && ((bVar14 ^ 0xff) & 1) == 0) {
            fVar69 = *(float *)(unaff_x19 + 0x60) / 100.0;
            fVar58 = *(float *)((long)unaff_x19 + 0x304);
            if ((fVar58 < fVar69) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc3c;
            fVar58 = *(float *)((long)unaff_x19 + 0x20c);
            fVar69 = *(float *)(unaff_x19 + 0x4f);
            auVar75 = ZEXT416((uint)fVar69);
            if ((fVar69 < fVar58) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc84;
          }
          lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar29 = *(long *)puVar10;
          }
          if (((bVar14 != 0) && (iVar25 = *(int *)(*(long *)(lVar29 + 0xb8) + 0xf80), iVar25 != -1))
             && (iVar25 != iStack0000000000000020)) {
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar94 = FUN_0608c590();
            if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar42 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
            if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_0603fce4;
            iStack0000000000000020 = iVar25;
            if (*(short *)(lVar29 + (long)(int)uVar42 * 0x178 + 0x24) == 0xad) {
              bVar15 = 0;
              uVar94 = uVar94 - 1;
              in_stack_00001328 = CONCAT44(0x2d,uVar42);
              *(uint *)((long)unaff_x19 + 0x4ac) = uVar42;
              plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              goto LAB_0603af80;
            }
          }
          if (fVar89 <= fVar59) {
            auVar75 = ZEXT416((uint)fVar87);
            fStack0000000000000104 = fVar92;
            FUN_0608d070();
LAB_0603cc70:
            bVar14 = 1;
            bVar15 = 0;
            bVar7 = true;
            goto LAB_0603b124;
          }
          if ((int)unaff_x19[99] == -1) {
            *(undefined4 *)(unaff_x19 + 99) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          }
          if ((char)unaff_x19[0x4c] != '\0') {
            fVar58 = *(float *)(unaff_x19 + 0x5f);
            if ((fVar58 < *(float *)((long)unaff_x19 + 0x2ec)) &&
               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar78 = *(float *)((long)unaff_x19 + 0x2ec) +
                       ((fVar93 - fVar89) / (float)((int)unaff_x19[0x98] + 1)) / fVar61;
              if (fVar78 <= fVar58) {
                fVar78 = fVar58;
              }
LAB_0603fbd0:
              *(float *)((long)unaff_x19 + 0x2ec) = fVar78;
              return;
            }
            fVar69 = *(float *)(unaff_x19 + 0x60) / 100.0;
            fVar58 = *(float *)((long)unaff_x19 + 0x304);
            if ((fVar58 < fVar69) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_0603fc3c:
              fVar78 = fVar82;
              if (0.0 < fVar58) {
                fVar78 = fVar82 / (1.0 - fVar58);
              }
              fVar58 = fVar58 + (fVar82 - fVar66 * (fStack0000000000000140 + _UNK_01317b20)) /
                                fVar78;
              if (fVar69 <= fVar58) {
                fVar58 = fVar69;
              }
              *(float *)((long)unaff_x19 + 0x304) = fVar58;
              return;
            }
            fVar58 = *(float *)((long)unaff_x19 + 0x20c);
            fVar69 = *(float *)(unaff_x19 + 0x4f);
            auVar75 = ZEXT416((uint)fVar69);
            if ((fVar69 < fVar58) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc84;
          }
          iVar25 = *(int *)((long)unaff_x19 + 0x314);
          bVar15 = 0;
          if (iVar25 < 3) {
            if (iVar25 != 0) {
              if (iVar25 == 1) {
                lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                if (*(int *)(lVar29 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                }
                in_stack_00001328 = DAT_01318128;
                lVar28 = *(long *)(lVar29 + 0xb8);
                if (*(int *)(lVar28 + 0x1708) == 0) {
                  uVar94 = 0xffffffff;
                  *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                }
                else {
                  if (*(int *)(lVar29 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar28 = *(long *)(*(long *)
                                        System_Collections_Generic_List<AudioListener>_TypeInfo +
                                      0xb8);
                  }
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                            (&stack0x00001340,lVar28 + 0x1338,
                             *(undefined8 *)
                              System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                  memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
                  iVar24 = FUN_0608c590();
                  uVar94 = iVar24 - 1;
                  iVar24 = *(int *)((long)unaff_x19 + 0x4ac) + -1;
                  iVar49 = iVar49 + 1;
                  *(int *)((long)unaff_x19 + 0x4ac) = iVar24;
                  in_stack_00001328 = CONCAT44(0x2026,iVar24);
                }
                goto LAB_0603cf9c;
              }
              if (iVar25 != 2) goto LAB_0603ada8;
            }
LAB_0603cca8:
            unaff_x28 = &stack0x000011b0;
            auVar75 = ZEXT416((uint)fVar87);
            fStack0000000000000104 = fVar92;
            FUN_0608d070();
            bVar15 = 0;
            bVar14 = 1;
            bVar7 = true;
            plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar58 = fVar87;
            goto LAB_06038edc;
          }
          if (4 < iVar25) {
            if (iVar25 == 5) {
              auVar75 = ZEXT416((uint)fVar87);
              *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
              fStack0000000000000104 = fVar92;
              FUN_0608d070();
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
              *(int *)((long)unaff_x19 + 0x4cc) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
              unaff_x19[0x9a] = 0;
              goto LAB_0603cc70;
            }
            if (iVar25 != 6) goto LAB_0603ada8;
            lVar29 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar26 = FUN_06267b6c(lVar29,0,0);
            if ((uVar26 & 1) != 0) {
              plVar38 = (long *)unaff_x19[100];
              uVar33 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar38 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar38 + 0x558))(plVar38,uVar33,*(undefined8 *)(*plVar38 + 0x560));
              lVar29 = unaff_x19[100];
              if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar29 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar38 = (long *)unaff_x19[100];
              if (plVar38 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
            in_stack_00001328 = CONCAT44(3,*(undefined4 *)((long)unaff_x19 + 0x4ac));
            goto LAB_0603cf9c;
          }
          if (iVar25 == 3) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            uVar94 = FUN_0608c590();
            in_stack_00001328 = CONCAT44(3,iVar24);
LAB_0603cf9c:
            bVar15 = 0;
            unaff_x28 = &stack0x000011b0;
            plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar58 = fVar87;
            goto LAB_06038edc;
          }
          if (iVar25 == 4) goto LAB_0603cca8;
        }
      }
    }
LAB_0603ada8:
    if (uVar21 == 0) {
      if (uVar20 == 0xad) {
        if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
        *(undefined1 *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 400) = 0;
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x664) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x664) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))();
        }
        if (bVar7) {
          *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        }
        *(undefined4 *)((long)unaff_x19 + 0x4bc) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
        if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x50), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        bVar7 = false;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(float *)(lVar29 + 100) = fVar88;
        *(float *)(lVar29 + 0x68) = fVar68;
      }
    }
    else {
      lVar29 = unaff_x19[0x75];
      if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar42 = *(uint *)((long)unaff_x19 + 0x4ac);
      if (*(uint *)(lVar28 + 0x18) <= uVar42) goto LAB_0603fce4;
      *(undefined1 *)(lVar28 + (long)(int)uVar42 * 0x178 + 400) = 0;
      *(uint *)((long)unaff_x19 + 0x4bc) = uVar42;
      lVar28 = *(long *)(lVar29 + 0x50);
      if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
      uVar42 = *(uint *)(lVar28 + 0x18);
      if (uVar42 <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar28 = lVar28 + 0x20;
      lVar46 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      iVar24 = *(int *)(lVar46 + 0xc) + 1;
      *(int *)(lVar46 + 0xc) = iVar24;
      uVar44 = *(uint *)(unaff_x19 + 0x98);
      *(int *)(unaff_x19 + 0x99) = iVar24;
      if (uVar42 <= uVar44) goto LAB_0603fce4;
      lVar46 = lVar28 + (long)(int)uVar44 * 0x60;
      *(float *)(lVar46 + 0x44) = fVar88;
      *(float *)(lVar46 + 0x48) = fVar68;
      *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
      if (uVar20 == 0xa0) {
        *(int *)(lVar28 + (long)(int)uVar44 * 0x60) =
             *(int *)(lVar28 + (long)(int)uVar44 * 0x60) + 1;
      }
    }
  }
  else {
    if (((uVar20 & 0xfffffffe) == 10) && (*(int *)((long)unaff_x19 + 0x314) == 6)) {
      fVar58 = 0.0;
      if ((0.0 < fVar69) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
        fVar58 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
      }
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x4d4);
      auVar75 = ZEXT416((uint)fVar59);
      if (fVar59 < (fStack0000000000000104 - (*(float *)(unaff_x19 + 0x9d) - fVar69)) + fVar58) {
        if ((int)unaff_x19[99] == -1) {
          *(uint *)(unaff_x19 + 99) = uVar42;
        }
        plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
        uVar94 = FUN_0608c590();
        lVar29 = unaff_x19[100];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar26 = FUN_06267b6c(lVar29,0,0);
        if ((uVar26 & 1) != 0) {
          plVar55 = (long *)unaff_x19[100];
          uVar33 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar55 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar55 + 0x558))(plVar55,uVar33,*(undefined8 *)(*plVar55 + 0x560));
          lVar29 = unaff_x19[100];
          if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar29 + 0x440) = (int)unaff_x19[0x88];
          FUN_0607fed4(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
          plVar55 = (long *)unaff_x19[100];
          if (plVar55 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar55 + 0x7d8))(plVar55,0,0,*(undefined8 *)(*plVar55 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
        }
LAB_0603b288:
        uVar16 = 3;
LAB_0603b340:
        unaff_x28 = &stack0x000011b0;
        fVar58 = fVar87;
        in_stack_00001328 = CONCAT44(uVar16,uVar42);
        goto LAB_06038edc;
      }
    }
    if ((((uVar20 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (uVar20 - 10 < 2)) ||
       (uVar20 == 0xa0)) {
      if (uVar20 != 0xad) goto LAB_0603b58c;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar26 = FUN_055814cc(uVar20,0);
      if (((uVar26 & 1) != 0) && (uVar20 != 0xad)) {
LAB_0603b58c:
        if ((uVar20 == 0x200b) || (uVar20 == 0x2060)) goto LAB_0603b638;
        lVar29 = unaff_x19[0x75];
        if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x50), lVar28 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
      }
      if (uVar20 == 0xa0) {
        if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x50), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
      }
    }
  }
LAB_0603b638:
  if ((*(int *)((long)unaff_x19 + 0x314) == 1) && ((uVar95 != uVar97 || (uVar20 == 0x2d)))) {
    if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar82 = *(float *)(unaff_x19 + 0x42);
    fVar58 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
    if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar66 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
    lVar29 = unaff_x19[0xce];
    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
    fVar68 = *(float *)((long)unaff_x19 + 0x444);
    fVar69 = *(float *)(lVar29 + 0x2c);
    fVar88 = (float)FUN_0630fd88(*(long *)(lVar29 + 0x20),0);
    lVar29 = unaff_x19[0x72];
    fVar88 = fVar68 * fVar78 * (fVar82 / fVar58) * fVar66 * fVar69 * fVar88;
    if ((uVar20 == 10) && (*(int *)((long)unaff_x19 + 0x4ac) != (int)unaff_x19[0x96])) {
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar42 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
      if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_0603fce4;
      if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar82 = *(float *)(lVar29 + (long)(int)uVar42 * 0x178 + 0x58);
      fVar58 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
      if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar66 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
      lVar29 = unaff_x19[0xce];
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar68 = *(float *)((long)unaff_x19 + 0x444);
      fVar69 = *(float *)(lVar29 + 0x2c);
      fVar88 = (float)FUN_0630fd88(*(long *)(lVar29 + 0x20),0);
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x50), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar29 = *(long *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60 + 100);
      fVar88 = fVar68 * fVar78 * (fVar82 / fVar58) * fVar66 * fVar69 * fVar88;
    }
    fVar82 = *(float *)((long)unaff_x19 + 0x4f4);
    fVar58 = 0.0;
    fVar66 = 0.0;
    if ((0.0 < fVar82) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
      fVar66 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
    }
    fVar68 = *(float *)((long)unaff_x19 + 0x4d4);
    fVar69 = *(float *)(unaff_x19 + 0x9d);
    fVar89 = *(float *)(unaff_x19 + 0xcc);
    fStack0000000000000180 = (float)lVar29;
    fStack0000000000000184 = (float)((ulong)lVar29 >> 0x20);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xce] == 0) || (lVar29 = *(long *)(unaff_x19[0xce] + 0x20), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&stack0x00001340,lVar29,0);
      fVar58 = (float)FUN_0630fb94(&stack0x000011e0,0);
    }
    puVar10 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    fStack0000000000000184 = (fVar86 - fStack0000000000000180) - fStack0000000000000184;
    fVar85 = *(float *)(unaff_x19 + 0x74);
    bVar12 = true;
    if ((fVar85 <= fStack0000000000000184) && (bVar12 = false, !NAN(fVar85))) {
      bVar12 = fVar85 == -1.0;
    }
    if (!bVar12) {
      fStack0000000000000184 = fVar85;
    }
    fVar85 = 1.0;
    if ((uVar54 & 0x18) != 0) {
      fVar85 = _UNK_01317cd8;
    }
    if ((ABS(fVar89) +
         fVar88 * *(float *)(unaff_x19 + 0x5c) *
                  fVar58 * (1.0 - *(float *)((long)unaff_x19 + 0x304)) <
         fVar85 * fStack0000000000000184) && ((fVar68 - (fVar69 - fVar82)) + fVar66 < fVar59)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      lVar29 = *(long *)(*(long *)puVar10 + 0xb8);
      memcpy(&stack0x00001340,(void *)(lVar29 + 0x810),0x3b8);
      FUN_046b8738(lVar29 + 0x1338,&stack0x00001340,
                   *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
    }
  }
  lVar29 = unaff_x19[0x75];
  if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar28 = lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  uVar42 = *(uint *)(unaff_x19 + 0x98);
  *(uint *)(lVar28 + 0x5c) = uVar42;
  *(undefined4 *)(lVar28 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4cc);
  if ((uVar95 == uVar97) || ((uVar20 < 0xe && ((1 << (ulong)(uVar20 & 0x1f) & 0x2c00U) != 0)))) {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_0603fce4;
    if (*(int *)(lVar29 + (long)(int)uVar42 * 0x60 + 0x24) == 1) goto LAB_0603b9e0;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
LAB_0603b9e0:
    if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_0603fce4;
    *(int *)(lVar29 + (long)(int)uVar42 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
  }
  if (uVar20 == 9) {
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar58 = (float)FUN_0630f930(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar82 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
    fVar66 = *(float *)(unaff_x19 + 0xcc);
    auVar75 = ZEXT416((uint)fVar66);
    fVar82 = fVar87 * fVar58 * fVar82;
    if ((char)unaff_x19[0x1e] == '\0') {
      fStack0000000000000104 = fVar82 * (float)(int)(fVar66 / fVar82);
      fVar58 = fStack0000000000000104;
      if (fStack0000000000000104 <= fVar66) {
        fVar58 = fVar82 + fVar66;
      }
    }
    else {
      fStack0000000000000104 = fVar82 * (float)(int)(fVar66 / fVar82);
      fVar58 = fStack0000000000000104;
      if (fVar66 <= fStack0000000000000104) {
        fVar58 = fVar66 - fVar82;
      }
    }
LAB_0603bc44:
    *(float *)(unaff_x19 + 0xcc) = fVar58;
  }
  else {
    fVar58 = *(float *)(unaff_x19 + 0x5b);
    if (fVar58 == 0.0) {
      fVar58 = *(float *)(unaff_x19 + 0xcc);
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar66 = (float)FUN_0630fb94(&stack0x00001280,0);
        fVar83 = *(float *)((long)unaff_x19 + 0x484);
        fVar88 = (float)FUN_063140cc(&stack0x00001270,0);
        if (unaff_x19[0x20] != 0) {
          fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x304);
          fVar82 = *(float *)(unaff_x19 + 0x5c);
          fVar58 = fVar58 + fVar82 * (1.0 - fStack0000000000000104) *
                                     (*(float *)((long)unaff_x19 + 0x2d4) +
                                     fVar87 * (fVar66 * fVar83 + fVar88) +
                                     fVar92 * (fVar67 + fVar65 + *(float *)(unaff_x19[0x20] + 0x1a4)
                                              ));
          *(float *)(unaff_x19 + 0xcc) = fVar58;
          goto joined_r0x0603bb78;
        }
        goto thunk_FUN_02e3ccc4;
      }
      fVar82 = (float)FUN_063140cc(&stack0x00001270,0);
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x304);
      auVar75 = ZEXT416((uint)*(float *)(unaff_x19 + 0x5c));
      fVar58 = fVar58 - *(float *)(unaff_x19 + 0x5c) *
                        (1.0 - fStack0000000000000104) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        fVar87 * fVar82 +
                        fVar92 * (fVar67 + fVar65 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcc) = fVar58;
      if ((uVar21 != 0) || (uVar20 == 0x200b)) {
        fVar82 = fVar92 * *(float *)((long)unaff_x19 + 0x2e4);
        auVar75 = ZEXT416((uint)fVar82);
        fStack0000000000000104 = fVar92;
        fVar58 = fVar58 - fVar82;
        goto LAB_0603bc44;
      }
    }
    else {
      if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (uVar20 < 0x3b)) &&
         ((1L << ((ulong)uVar20 & 0x3f) & 0x400500000000000U) != 0)) {
        fVar58 = fVar58 * 0.5;
      }
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x304);
      fVar82 = *(float *)(unaff_x19 + 0xcc);
      fVar58 = fVar82 + *(float *)(unaff_x19 + 0x5c) *
                        (1.0 - fStack0000000000000104) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        (fVar58 - fVar83) + fVar92 * (fVar65 + *(float *)(unaff_x19[0x20] + 0x1a4)))
      ;
      *(float *)(unaff_x19 + 0xcc) = fVar58;
joined_r0x0603bb78:
      if ((uVar21 != 0) || (auVar75 = ZEXT416((uint)fVar82), uVar20 == 0x200b)) {
        fVar82 = fVar92 * *(float *)((long)unaff_x19 + 0x2e4);
        auVar75 = ZEXT416((uint)fVar82);
        fStack0000000000000104 = fVar92;
        fVar58 = fVar58 + fVar82;
        goto LAB_0603bc44;
      }
    }
  }
  lVar29 = unaff_x19[0x75];
  if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x38), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
  uVar42 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar28 + 0x18) <= uVar42) goto LAB_0603fce4;
  *(float *)(lVar28 + (long)(int)uVar42 * 0x178 + 0x13c) = fVar58;
  if (uVar20 == 0xd) {
    auVar75 = ZEXT816(0);
    *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
  }
  if ((*(int *)((long)unaff_x19 + 0x314) == 5) &&
     (((0xd < uVar20 || ((1 << (ulong)(uVar20 & 0x1f) & 0x2c00U) == 0)) && (1 < uVar20 - 0x2028))))
  {
    lVar28 = *(long *)(lVar29 + 0x58);
    if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
    iVar24 = *(int *)((long)unaff_x19 + 0x4cc) + 1;
    if (*(int *)(lVar28 + 0x18) < iVar24) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_03ab3b84((long *)(lVar29 + 0x58),iVar24,1,
                   *(undefined8 *)System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo
                  );
      lVar29 = unaff_x19[0x75];
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar28 = *(long *)(lVar29 + 0x58);
    if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
    uVar54 = *(uint *)((long)unaff_x19 + 0x4cc);
    if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_0603fce4;
    lVar28 = lVar28 + 0x20;
    lVar46 = lVar28 + (long)(int)uVar54 * 0x14;
    *(int *)(lVar46 + 8) = (int)unaff_x19[0x9a];
    fVar82 = *(float *)(lVar46 + 0x10);
    auVar75 = ZEXT416((uint)fVar82);
    fVar58 = *(float *)(unaff_x19 + 0x9c);
    if (fVar82 <= *(float *)(unaff_x19 + 0x9c)) {
      fVar58 = fVar82;
    }
    *(float *)(lVar46 + 0x10) = fVar58;
    if (*(char *)((long)unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar28 + (long)(int)uVar54 * 0x14) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    }
    uVar42 = *(uint *)((long)unaff_x19 + 0x4ac);
    *(uint *)(lVar28 + (long)(int)uVar54 * 0x14 + 4) = uVar42;
  }
  unaff_x28 = &stack0x000011b0;
  uVar54 = uVar20;
  if (((uVar20 < 0xc) && ((1 << (ulong)(uVar20 & 0x1f) & 0xc08U) != 0)) ||
     ((uVar20 - 0x2028 < 2 || ((uVar20 == 0x2d && uVar95 == uVar97 || (uVar42 == uVar4)))))) {
    if (0.0 < *(float *)((long)unaff_x19 + 0x4f4)) {
      fVar58 = *(float *)((long)unaff_x19 + 0x4e4);
      fVar82 = *(float *)((long)unaff_x19 + 0x4ec);
      if (*(int *)(*(long *)PTR_DAT_06a2ef88 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      fVar58 = fVar58 - fVar82;
      if (((fVar80 < ABS(fVar58)) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x37c) == '\0')) {
        FUN_0608cd04();
        puVar10 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        *(float *)(unaff_x19 + 0x9c) = *(float *)(unaff_x19 + 0x9c) - fVar58;
        *(float *)((long)unaff_x19 + 0x4f4) = fVar58 + *(float *)((long)unaff_x19 + 0x4f4);
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar29 = *(long *)puVar10;
        }
        lVar28 = *(long *)(lVar29 + 0xb8);
        if (*(int *)(lVar28 + 0x838) == (int)unaff_x19[0x98]) {
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar28 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                              0xb8);
          }
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                    (&stack0x00000200,lVar28 + 0x1338,
                     *(undefined8 *)System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo)
          ;
          puVar10 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          memcpy((void *)(*(long *)(lVar29 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
          thunk_FUN_02ee2be8(*(long *)(lVar29 + 0xb8) + 0x8a8,0);
          lVar29 = *(long *)(*(long *)puVar10 + 0xb8);
          *(float *)(lVar29 + 0x848) = fVar58 + *(float *)(lVar29 + 0x848);
          *(float *)(lVar29 + 0x894) = fVar58 + *(float *)(lVar29 + 0x894);
          memcpy(&stack0x00001340,(void *)(lVar29 + 0x810),0x3b8);
          FUN_046b8738(lVar29 + 0x1338,&stack0x00001340,
                       *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
        }
      }
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4f4);
    *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
    fVar82 = *(float *)(unaff_x19 + 0x9d) - fVar66;
    fVar58 = *(float *)(unaff_x19 + 0x9c);
    if (fVar82 <= *(float *)(unaff_x19 + 0x9c)) {
      fVar58 = fVar82;
    }
    fVar88 = *(float *)((long)unaff_x19 + 0x4e4);
    *(float *)(unaff_x19 + 0x9c) = fVar58;
    if (in_stack_00001334 == '\0') {
      fVar96 = fVar58;
    }
    if ((*(char *)((long)unaff_x19 + 0x374) != '\0') &&
       (((int)unaff_x19[0x6d] <= *(int *)((long)unaff_x19 + 0x4ac) ||
        ((int)unaff_x19[0x6e] <= (int)unaff_x19[0x98])))) {
      in_stack_00001334 = '\x01';
    }
    lVar29 = unaff_x19[0x75];
    if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x50), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
    iVar25 = (int)unaff_x19[0x96];
    *(int *)(lVar28 + 0x38) = iVar25;
    iVar24 = iVar25;
    if (iVar25 <= *(int *)((long)unaff_x19 + 0x4b4)) {
      iVar24 = *(int *)((long)unaff_x19 + 0x4b4);
    }
    *(int *)((long)unaff_x19 + 0x4b4) = iVar24;
    *(int *)(lVar28 + 0x3c) = iVar24;
    iVar3 = *(int *)((long)unaff_x19 + 0x4ac);
    *(int *)(unaff_x19 + 0x97) = iVar3;
    *(int *)(lVar28 + 0x40) = iVar3;
    iVar50 = *(int *)((long)unaff_x19 + 0x4b4);
    if (iVar24 <= *(int *)((long)unaff_x19 + 0x4bc)) {
      iVar50 = *(int *)((long)unaff_x19 + 0x4bc);
    }
    *(int *)((long)unaff_x19 + 0x4bc) = iVar50;
    *(int *)(lVar28 + 0x44) = iVar50;
    *(int *)(lVar28 + 0x24) = (iVar3 - iVar25) + 1;
    iVar24 = *(int *)((long)unaff_x19 + 0x4c4);
    *(int *)(lVar28 + 0x28) = iVar24;
    *(int *)(lVar28 + 0x30) = (iVar50 - (iVar25 + iVar24)) + 1;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_0603fce4;
    *(undefined4 *)(lVar28 + 0x70) =
         *(undefined4 *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * 0x178 + 0x114);
    *(float *)(lVar28 + 0x74) = fVar82;
    lVar29 = unaff_x19[0x75];
    if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x50), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4bc)) goto LAB_0603fce4;
    fVar88 = fVar88 - fVar66;
    auVar75 = ZEXT416((uint)fVar88);
    lVar28 = lVar28 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
    *(undefined4 *)(lVar28 + 0x58) =
         *(undefined4 *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4bc) * 0x178 + 0x120);
    *(float *)(lVar28 + 0x5c) = fVar88;
    lVar29 = unaff_x19[0x75];
    if ((lVar29 == 0) || (lVar28 = *(long *)(lVar29 + 0x50), lVar28 == 0)) goto thunk_FUN_02e3ccc4;
    uVar42 = *(uint *)(unaff_x19 + 0x98);
    if (*(uint *)(lVar28 + 0x18) <= uVar42) goto LAB_0603fce4;
    lVar28 = lVar28 + 0x20;
    lVar46 = lVar28 + (long)(int)uVar42 * 0x60;
    *(float *)(lVar46 + 0x28) = *(float *)(lVar46 + 0x58) - fVar87 * fVar62;
    *(float *)(lVar46 + 0x40) = fStack0000000000000140;
    if (*(int *)(lVar46 + 4) == 1) {
      *(int *)(lVar28 + (long)(int)uVar42 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
    }
    if ((unaff_x19[0x20] == 0) || (lVar46 = *(long *)(lVar29 + 0x38), lVar46 == 0))
    goto thunk_FUN_02e3ccc4;
    uVar44 = *(uint *)((long)unaff_x19 + 0x4bc);
    if (*(uint *)(lVar46 + 0x18) <= uVar44) goto LAB_0603fce4;
    if ((*(char *)(lVar46 + 0x20 + (long)(int)uVar44 * 0x178 + 0x170) == '\0') &&
       (uVar44 = *(uint *)(unaff_x19 + 0x97), *(uint *)(lVar46 + 0x18) <= uVar44))
    goto LAB_0603fce4;
    fVar65 = *(float *)(unaff_x19 + 0x5c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
             (*(float *)((long)unaff_x19 + 0x2d4) +
             fVar92 * (fVar67 + fVar65 + *(float *)(unaff_x19[0x20] + 0x1a4)));
    fVar58 = -fVar65;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar58 = fVar65;
    }
    lVar28 = lVar28 + (long)(int)uVar42 * 0x60;
    *(float *)(lVar28 + 0x3c) =
         *(float *)(lVar46 + 0x20 + (long)(int)uVar44 * 0x178 + 0x11c) + fVar58;
    fStack0000000000000104 = 0.0 - *(float *)((long)unaff_x19 + 0x4f4);
    *(float *)(lVar28 + 0x34) = fStack0000000000000104;
    *(float *)(lVar28 + 0x38) = fVar82;
    *(float *)(lVar28 + 0x2c) = fVar61 * fVar60 + (fVar88 - fVar82);
    *(float *)(lVar28 + 0x30) = fVar88;
    plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((((uVar20 & 0xfffffffe) == 10) || (uVar95 == uVar97 && uVar20 == 0x2d)) ||
       (uVar20 - 0x2028 < 2)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      *(undefined8 *)((long)unaff_x19 + 0x4c4) = 0;
      iVar24 = (int)unaff_x19[0x98] + 1;
      lVar29 = unaff_x19[0x75];
      *(int *)(unaff_x19 + 0x98) = iVar24;
      *(int *)(unaff_x19 + 0x96) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((lVar29 != 0) && (*(long *)(lVar29 + 0x50) != 0)) {
        if (*(int *)(*(long *)(lVar29 + 0x50) + 0x18) <= iVar24) {
          FUN_0608cec0();
          lVar29 = unaff_x19[0x75];
          if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
        }
        lVar29 = *(long *)(lVar29 + 0x38);
        if (lVar29 != 0) {
          if (*(uint *)((long)unaff_x19 + 0x4ac) < *(uint *)(lVar29 + 0x18)) {
            fVar58 = *(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 +
                               0x14c);
            if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
              if ((uVar20 == 0x2029) || (fVar82 = 0.0, uVar20 == 10)) {
                fVar82 = *(float *)((long)unaff_x19 + 0x2fc);
              }
              uVar34 = 0;
              fVar82 = fVar58 + (0.0 - *(float *)(unaff_x19 + 0x9d)) +
                       fVar61 * (fVar60 + *(float *)((long)unaff_x19 + 0x2ec)) +
                       fVar92 * (*(float *)(unaff_x19 + 0x5d) + fVar82) +
                       *(float *)((long)unaff_x19 + 0x4f4);
            }
            else {
              if ((uVar20 == 0x2029) || (fVar82 = 0.0, uVar20 == 10)) {
                fVar82 = *(float *)((long)unaff_x19 + 0x2fc);
              }
              uVar34 = 1;
              fVar82 = *(float *)((long)unaff_x19 + 0x4f4) +
                       *(float *)(unaff_x19 + 0x5e) +
                       fVar92 * (*(float *)(unaff_x19 + 0x5d) + fVar82);
            }
            lVar29 = *plVar38;
            *(float *)((long)unaff_x19 + 0x4f4) = fVar82;
            *(undefined1 *)((long)unaff_x19 + 0x2f4) = uVar34;
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar29 = *plVar38;
            }
            uVar33 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1730);
            *(float *)((long)unaff_x19 + 0x4ec) = fVar58;
            fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x44c);
            auVar75._0_8_ = NEON_rev64(uVar33,4);
            auVar75._8_8_ = 0;
            *(ulong *)((long)unaff_x19 + 0x4e4) = auVar75._0_8_;
            *(float *)(unaff_x19 + 0xcc) =
                 *(float *)(unaff_x19 + 0x89) + 0.0 + fStack0000000000000104;
            FUN_0608c948();
            FUN_0608c948();
            *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
            bVar14 = 1;
            bVar7 = true;
            fVar58 = fVar87;
            goto LAB_06038edc;
          }
          goto LAB_0603fce4;
        }
      }
      goto thunk_FUN_02e3ccc4;
    }
    if (uVar20 == 3) {
      if (unaff_x19[0x92] == 0) goto thunk_FUN_02e3ccc4;
      uVar94 = (uint)*(undefined8 *)(unaff_x19[0x92] + 0x18);
      uVar54 = 3;
    }
  }
  lVar29 = *(long *)(lVar29 + 0x38);
  if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
  uVar95 = *(uint *)((long)unaff_x19 + 0x4ac);
  uVar97 = *(uint *)(lVar29 + 0x18);
  if (uVar97 <= uVar95) goto LAB_0603fce4;
  lVar29 = lVar29 + 0x20;
  if (*(char *)(lVar29 + (long)(int)uVar95 * 0x178 + 0x170) != '\0') {
    lVar28 = lVar29 + (long)(int)uVar95 * 0x178;
    auVar71 = *(undefined1 (*) [16])(unaff_x19 + 0x9f);
    auVar76 = NEON_ext(auVar71,auVar71,8,1);
    uVar33 = *(undefined8 *)(lVar28 + 0xf4);
    fStack0000000000000104 = (float)uVar33;
    uVar30 = *(undefined8 *)(lVar28 + 0x100);
    fVar58 = (float)uVar30;
    fVar82 = (float)((ulong)uVar30 >> 0x20);
    auVar75._0_4_ = (float)-(uint)(auVar71._0_4_ < fStack0000000000000104);
    auVar75._4_4_ = (float)-(uint)(auVar71._4_4_ < (float)((ulong)uVar33 >> 0x20));
    auVar75._8_4_ = -(uint)(fVar58 < auVar76._0_4_);
    auVar75._12_4_ = -(uint)(fVar82 < auVar76._4_4_);
    auVar6._8_4_ = fVar58;
    auVar6._0_8_ = uVar33;
    auVar6._12_4_ = fVar82;
    auVar71 = auVar71 ^ (auVar71 ^ auVar6) & ~auVar75;
    unaff_x19[0xa0] = auVar71._8_8_;
    unaff_x19[0x9f] = auVar71._0_8_;
  }
  if ((((int)unaff_x19[0x61] != 3) && ((int)unaff_x19[0x61] != 0)) ||
     ((*(uint *)((long)unaff_x19 + 0x314) < 7 &&
      ((1 << (ulong)(*(uint *)((long)unaff_x19 + 0x314) & 0x1f) & 0x4aU) != 0)))) {
    uVar42 = uVar95 + 1;
    if ((int)uVar42 < (int)lVar27) {
      if (uVar97 <= uVar42) goto LAB_0603fce4;
      uVar56 = *(undefined2 *)(lVar29 + (long)(int)uVar42 * 0x178 + 4);
    }
    else {
      uVar56 = 0;
    }
    if ((((uVar21 == 0) && (uVar54 != 0x2d)) && (uVar54 != 0x200b)) && (uVar54 != 0xad)) {
      if (*(char *)((long)unaff_x19 + 0x30d) == '\0') goto LAB_0603c69c;
LAB_0603c510:
      if (bVar14 == 0) {
        bVar14 = 0;
      }
      else {
        bVar12 = (bool)((uVar21 == 0 || uVar20 == 0xa0) & (uVar20 != 0xad | bVar15) ^ 1);
LAB_0603c548:
        bVar14 = 1;
        plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor:
        if (*(int *)(*plVar38 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_0608c948();
        if (bVar12 != false) goto LAB_0603c590;
      }
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
      if ((int)uVar54 < 0x2007) {
        if (uVar54 == 0x2d) {
          if (0 < (int)uVar95) {
            if (uVar97 <= uVar95 - 1) goto LAB_0603fce4;
            uVar56 = *(undefined2 *)(lVar29 + (ulong)(uVar95 - 1) * 0x178 + 4);
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar26 = FUN_0557df5c(uVar56,0);
            if ((uVar26 & 1) != 0) {
              if ((unaff_x19[0x75] == 0) ||
                 (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0)) goto thunk_FUN_02e3ccc4;
              uVar97 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
              if (*(uint *)(lVar29 + 0x18) <= uVar97) goto LAB_0603fce4;
              if (*(int *)(lVar29 + (long)(int)uVar97 * 0x178 + 0x5c) == (int)unaff_x19[0x98])
              goto LAB_0603c5f8;
            }
          }
        }
        else if (uVar54 == 0xa0) goto LAB_0603c69c;
LAB_0603cad8:
        plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar29 = *plVar38;
        }
        bVar14 = 0;
        bVar12 = false;
        *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0xf80) = 0xffffffff;
        goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      }
      if (((0x28 < uVar54 - 0x2007) ||
          ((1L << ((ulong)(uVar54 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar54 != 0x2060))
      goto LAB_0603cad8;
LAB_0603c69c:
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_02e9a04c();
      }
      uVar26 = FUN_060b1e64(uVar54,0);
      if ((uVar26 & 1) == 0) {
LAB_0603c6e8:
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar26 = FUN_060b1ec0(uVar20,0);
        if ((uVar26 & 1) != 0) goto LAB_0603c714;
        if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar26 = FUN_060b1ec0(uVar56,0);
        if ((uVar26 & 1) == 0) goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar29 = FUN_060a80a0(0);
        if ((lVar29 != 0) && (*(long *)(lVar29 + 0x18) != 0)) {
          uVar26 = FUN_052f86ac(*(long *)(lVar29 + 0x18),uVar56,
                                *(undefined8 *)
                                 System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                               );
          if ((uVar26 & 1) != 0) goto LAB_0603c510;
LAB_0603cb44:
          bVar12 = false;
          plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar26 = FUN_060a82b4(0);
      if ((uVar26 & 1) != 0) goto LAB_0603c6e8;
LAB_0603c714:
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar29 = FUN_060a80a0(0);
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) goto thunk_FUN_02e3ccc4;
      uVar26 = FUN_052f86ac(*(long *)(lVar29 + 0x10),uVar20,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((int)uVar4 <= *(int *)((long)unaff_x19 + 0x4ac)) {
        if ((uVar26 & 1) == 0) {
          bVar14 = 0;
          goto LAB_0603cb44;
        }
LAB_0603c85c:
        bVar12 = uVar21 != 0;
        if (uVar22 != uVar23 || ((bVar14 ^ 0xff) & 1) != 0) goto LAB_0603c5f8;
        goto LAB_0603c548;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar29 = FUN_060a80a0(0);
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x18) == 0)) goto thunk_FUN_02e3ccc4;
      bVar13 = FUN_052f86ac(*(long *)(lVar29 + 0x18),uVar56,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((uVar26 & 1) != 0) goto LAB_0603c85c;
      bVar14 = bVar13 & bVar14;
      bVar12 = (bool)(bVar14 & uVar21 != 0);
      plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if ((bVar14 != 0) || (((bVar13 ^ 1) & 1) != 0))
      goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      bVar14 = 0;
      if (bVar12 == false) goto LAB_0603c5f8;
LAB_0603c590:
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
    }
  }
LAB_0603c5f8:
  plVar38 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  unaff_x28 = &stack0x000011b0;
  FUN_0608c948();
  *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
  fVar58 = fVar87;
LAB_06038edc:
  lVar29 = unaff_x19[0x92];
  uVar94 = uVar94 + 1;
  uVar97 = uVar20;
  if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
  goto LAB_06038b48;
LAB_0603d6e0:
  if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_0603fce4;
  uVar26 = (ulong)uVar17;
  piVar51 = (int *)(lVar29 + uVar26 * 0x178);
  lVar28 = *(long *)(piVar51 + 8);
  uVar57 = *(ushort *)(piVar51 + 1);
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar94 = (uint)uVar57;
  bVar14 = FUN_0557df5c(uVar57,0);
  if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_0603fce4;
  if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x50), lVar46 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar4 = *(uint *)(lVar29 + uVar26 * 0x178 + 0x3c);
  if (*(uint *)(lVar46 + 0x18) <= uVar4) goto LAB_0603fce4;
  lVar46 = lVar46 + (long)(int)uVar4 * 0x60;
  uVar97 = *(uint *)(lVar46 + 0x40);
  uVar20 = *(uint *)(lVar46 + 0x44);
  fVar63 = *(float *)(lVar46 + 0x58);
  fVar82 = *(float *)(lVar46 + 0x5c);
  uVar21 = *(uint *)(lVar46 + 0x6c);
  fVar64 = *(float *)(lVar46 + 0x60);
  fVar93 = *(float *)(lVar46 + 100);
  iVar24 = *(int *)(lVar46 + 0x20);
  fVar86 = *(float *)(lVar46 + 0x70);
  fVar73 = *(float *)(lVar46 + 0x74);
  iVar25 = *(int *)(lVar46 + 0x28);
  fVar61 = *(float *)(lVar46 + 0x78);
  fVar60 = *(float *)(lVar46 + 0x7c);
  iVar50 = *(int *)(lVar46 + 0x30);
  fVar62 = *(float *)(lVar46 + 0x50);
  if ((int)uVar21 < 9) {
    if ((int)uVar21 < 3) {
      if (uVar21 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000120 = fVar93 + 0.0;
        }
        else {
          fStack0000000000000120 = 0.0 - fVar82;
        }
        fStack0000000000000104 = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar21 == 2) {
        fStack0000000000000120 = (fVar93 + fVar64 * 0.5) - fVar82 * 0.5;
LAB_0603d9dc:
        fStack0000000000000124 = 0.0;
        fStack0000000000000104 = 0.0;
      }
      else {
LAB_0603d8ac:
        uVar57 = NEON_umaxv(CONCAT26(-(ushort)(uVar57 == (ushort)((ulong)_UNK_01318f18 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar57 ==
                                                       (ushort)((ulong)_UNK_01318f18 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar57 ==
                                                                (ushort)((ulong)_UNK_01318f18 >>
                                                                        0x10)),
                                                       -(ushort)(uVar57 == (ushort)_UNK_01318f18))))
                            ,2);
        if (((((uVar57 & 1) == 0) && (uVar94 != 3)) && (uVar21 == 8)) &&
           ((int)uVar17 <= (int)uVar20)) goto LAB_0603d8ec;
      }
    }
    else if (uVar21 != 3) {
      if (uVar21 != 4) goto LAB_0603d8ac;
      fStack0000000000000104 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar82 = 0.0;
      }
      fStack0000000000000120 = (fVar64 + fVar93) - fVar82;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar21 == 0x10) {
    if ((int)uVar17 <= (int)uVar20) {
      if (uVar94 < 0xad) {
        if ((uVar94 != 3) && (uVar94 != 10)) {
LAB_0603d8ec:
          if (*(uint *)(lVar27 + 0x18) <= uVar97) goto LAB_0603fce4;
          uVar56 = *(undefined2 *)(lVar29 + (long)(int)uVar97 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar48 = FUN_05581208(uVar56,0);
          if ((uVar48 & 1) == 0) {
            bVar1 = (int)uVar4 < (int)unaff_x19[0x98];
          }
          else {
            bVar1 = false;
          }
          unaff_x28 = &stack0x000011b0;
          if ((!bVar1 && (uVar21 >> 4 & 1) == 0) && (fVar82 <= fVar64)) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar64;
            }
            fStack0000000000000120 = fVar93 + fStack0000000000000120;
            goto LAB_0603d9dc;
          }
          if (((uVar17 == 0) || (uVar4 != uVar19)) || (uVar17 == *(uint *)((long)unaff_x19 + 0x364))
             ) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar64;
            }
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            fStack0000000000000120 = fVar93 + fStack0000000000000120;
            uStack000000000000004c = FUN_055814cc(uVar94,0);
            fStack0000000000000124 = 0.0;
            fStack0000000000000104 = 0.0;
          }
          else {
            cVar35 = (char)unaff_x19[0x1e];
            iVar50 = (iVar50 - iVar24) - (uStack000000000000004c & 1);
            fVar93 = -fVar82;
            if (cVar35 != '\0') {
              fVar93 = fVar82;
            }
            if (iVar50 < 1) {
              fVar82 = 1.0;
              iVar50 = 1;
            }
            else {
              fVar82 = *(float *)(unaff_x19 + 0x62);
            }
            if (uVar94 == 9) {
LAB_0603f69c:
              fVar82 = ((fVar64 + fVar93) * (1.0 - fVar82)) / (float)iVar50;
              if (cVar35 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar82;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000104 = fStack0000000000000104 + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar82;
              }
            }
            else {
              if (uVar94 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar48 = FUN_055814cc(uVar94,0);
                cVar35 = (char)unaff_x19[0x1e];
                if ((uVar48 & 1) != 0) goto LAB_0603f69c;
              }
              fVar82 = ((fVar64 + fVar93) * fVar82) /
                       (float)(int)((iVar24 - ((uStack000000000000004c ^ 0xffffffff) & 1)) + iVar25)
              ;
              if (cVar35 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar82;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000104 = fStack0000000000000104 + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar82;
              }
            }
          }
        }
      }
      else if (((uVar94 != 0xad) && (uVar94 != 0x200b)) && (uVar94 != 0x2060)) goto LAB_0603d8ec;
    }
  }
  else if (uVar21 == 0x20) {
    fStack0000000000000120 = (fVar93 + fVar64 * 0.5) - (fVar86 + fVar61) * 0.5;
    fStack0000000000000104 = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar21 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar21 <= uVar17) goto LAB_0603fce4;
  lVar46 = lVar29 + uVar26 * 0x178;
  fVar82 = fStack00000000000000c0 + fStack0000000000000120;
  fVar64 = fStack00000000000001b0 + fStack0000000000000124;
  fVar93 = fStack00000000000000bc + fStack0000000000000104;
  if (*(char *)(lVar46 + 0x170) == '\0') goto LAB_0603e204;
  iVar24 = *piVar51;
  if (iVar24 == 0) {
    fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x354) * (float)(int)uVar4,1.0);
    iVar25 = *(int *)((long)unaff_x19 + 0x34c);
    if (iVar25 < 2) {
      if (iVar25 == 0) {
        lVar31 = lVar29 + uVar26 * 0x178;
        *(undefined4 *)(lVar31 + 100) = 0;
        *(undefined4 *)(lVar31 + 0x8c) = 0;
        *(undefined4 *)(lVar31 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xdc) = 0x3f800000;
      }
      else if (iVar25 == 1) {
        lVar31 = lVar29 + uVar26 * 0x178;
        fVar60 = *(float *)(lVar31 + 0x48);
        pfVar36 = (float *)(lVar31 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar31 = lVar29 + uVar26 * 0x178;
          fVar61 = *(float *)(lVar31 + 0x70);
          *pfVar36 = fVar59 + ((fStack0000000000000120 + fVar60) - *(float *)(unaff_x19 + 0x9f)) /
                              (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar31 + 0x8c) =
               fVar59 + ((fStack0000000000000120 + fVar61) - *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar31 + 0xb4) =
               fVar59 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar31 + 0xdc) =
               fVar59 + ((fStack0000000000000120 + *(float *)(lVar31 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
        }
        else {
          lVar31 = lVar29 + uVar26 * 0x178;
          fVar61 = fVar61 - fVar86;
          fVar73 = *(float *)(lVar31 + 0x70);
          fVar79 = *(float *)(lVar31 + 0x98);
          fVar80 = *(float *)(lVar31 + 0xc0);
          *pfVar36 = fVar59 + (fVar60 - fVar86) / fVar61;
          *(float *)(lVar31 + 0x8c) = fVar59 + (fVar73 - fVar86) / fVar61;
          *(float *)(lVar31 + 0xb4) = fVar59 + (fVar79 - fVar86) / fVar61;
          *(float *)(lVar31 + 0xdc) = fVar59 + (fVar80 - fVar86) / fVar61;
        }
      }
    }
    else if (iVar25 == 2) {
      lVar31 = lVar29 + uVar26 * 0x178;
      *(float *)(lVar31 + 100) =
           fVar59 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar31 + 0x8c) =
           fVar59 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar31 + 0xb4) =
           fVar59 + ((fStack0000000000000120 + *(float *)(lVar31 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar31 + 0xdc) =
           fVar59 + ((fStack0000000000000120 + *(float *)(lVar31 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
    }
    else if (iVar25 == 3) {
      iVar25 = (int)unaff_x19[0x6a];
      if (iVar25 < 2) {
        if (iVar25 == 0) {
          lVar31 = lVar29 + uVar26 * 0x178;
          *(undefined4 *)(lVar31 + 0x68) = 0;
          *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar31 + 0xb8) = 0;
          *(undefined4 *)(lVar31 + 0xe0) = 0x3f800000;
        }
        else if (iVar25 == 1) {
          lVar31 = lVar29 + uVar26 * 0x178;
          fVar60 = fVar60 - fVar73;
          fVar61 = (*(float *)(lVar31 + 0x74) - fVar73) / fVar60;
          fVar60 = fVar59 + (*(float *)(lVar31 + 0x4c) - fVar73) / fVar60;
          *(float *)(lVar31 + 0x68) = fVar60;
          *(float *)(lVar31 + 0xb8) = fVar60;
          goto LAB_0603ddfc;
        }
      }
      else if (iVar25 == 2) {
        lVar31 = lVar29 + uVar26 * 0x178;
        fVar60 = fVar59 + (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
                          (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc)
                          );
        *(float *)(lVar31 + 0x68) = fVar60;
        fVar61 = *(float *)((long)unaff_x19 + 0x4fc);
        fVar73 = *(float *)((long)unaff_x19 + 0x504);
        *(float *)(lVar31 + 0xb8) = fVar60;
        fVar61 = (*(float *)(lVar31 + 0x74) - fVar61) / (fVar73 - fVar61);
LAB_0603ddfc:
        *(float *)(lVar31 + 0x90) = fVar59 + fVar61;
        *(float *)(lVar31 + 0xe0) = fVar59 + fVar61;
      }
      else if (iVar25 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_062244a4(*(undefined8 *)System_Collections_Generic_List<BaseVideoBoardScreen>_TypeInfo,0
                    );
        uVar21 = (uint)*(undefined8 *)(lVar27 + 0x18);
      }
      if (uVar21 <= uVar17) goto LAB_0603fce4;
      lVar31 = lVar29 + uVar26 * 0x178;
      fVar73 = *(float *)(lVar31 + 0x138);
      fVar61 = (1.0 - (*(float *)(lVar31 + 0x68) + *(float *)(lVar31 + 0x90)) * fVar73) * 0.5;
      fVar60 = fVar59 + *(float *)(lVar31 + 0x68) * fVar73 + fVar61;
      fVar59 = fVar59 + fVar61 + *(float *)(lVar31 + 0x90) * fVar73;
      *(float *)(lVar31 + 100) = fVar60;
      *(float *)(lVar31 + 0x8c) = fVar60;
      *(float *)(lVar31 + 0xb4) = fVar59;
      *(float *)(lVar31 + 0xdc) = fVar59;
    }
    iVar25 = (int)unaff_x19[0x6a];
    if (iVar25 < 2) {
      if (iVar25 == 0) {
        if (uVar21 <= uVar17) goto LAB_0603fce4;
        lVar31 = lVar29 + uVar26 * 0x178;
        *(undefined4 *)(lVar31 + 0x68) = 0;
        *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xe0) = 0;
      }
      else if (iVar25 == 1) {
        if (uVar17 < uVar21) {
          lVar31 = lVar29 + uVar26 * 0x178;
          fVar62 = fVar62 - fVar63;
          fVar59 = (*(float *)(lVar31 + 0x4c) - fVar63) / fVar62;
          fVar62 = (*(float *)(lVar31 + 0x74) - fVar63) / fVar62;
          *(float *)(lVar31 + 0x68) = fVar59;
          goto LAB_0603df74;
        }
        goto LAB_0603fce4;
      }
    }
    else if (iVar25 == 2) {
      if (uVar21 <= uVar17) goto LAB_0603fce4;
      lVar31 = lVar29 + uVar26 * 0x178;
      fVar59 = (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
      *(float *)(lVar31 + 0x68) = fVar59;
      fVar62 = (*(float *)(lVar31 + 0x74) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
LAB_0603df74:
      *(float *)(lVar31 + 0x90) = fVar62;
      *(float *)(lVar31 + 0xb8) = fVar62;
      *(float *)(lVar31 + 0xe0) = fVar59;
    }
    else if (iVar25 == 3) {
      if (uVar21 <= uVar17) goto LAB_0603fce4;
      lVar31 = lVar29 + uVar26 * 0x178;
      fVar61 = *(float *)(lVar31 + 0x138);
      fVar60 = (1.0 - (*(float *)(lVar31 + 100) + *(float *)(lVar31 + 0xb4)) / fVar61) * 0.5;
      fVar59 = *(float *)(lVar31 + 100) / fVar61 + fVar60;
      fVar60 = fVar60 + *(float *)(lVar31 + 0xb4) / fVar61;
      *(float *)(lVar31 + 0x68) = fVar59;
      *(float *)(lVar31 + 0xe0) = fVar59;
      *(float *)(lVar31 + 0x90) = fVar60;
      *(float *)(lVar31 + 0xb8) = fVar60;
    }
    if (uVar21 <= uVar17) goto LAB_0603fce4;
    lVar31 = lVar29 + uVar26 * 0x178;
    fVar59 = *(float *)(unaff_x19 + 0x5c) *
             ABS(auVar76._0_4_) * *(float *)(lVar31 + 0x13c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304));
    if ((*(char *)(lVar31 + 0x34) == '\0') &&
       ((*(byte *)(lVar29 + uVar26 * 0x178 + 0x16c) & 1) != 0)) {
      fVar59 = -fVar59;
    }
    lVar31 = lVar29 + uVar26 * 0x178;
    *(float *)(lVar31 + 0x60) = fVar59;
    *(float *)(lVar31 + 0x88) = fVar59;
    *(float *)(lVar31 + 0xb0) = fVar59;
    *(float *)(lVar31 + 0xd8) = fVar59;
  }
  if (((int)uVar17 < (int)unaff_x19[0x6d]) &&
     (iStack00000000000000ec < *(int *)((long)unaff_x19 + 0x36c))) {
    if (((int)unaff_x19[0x6e] <= (int)uVar4) || (*(int *)((long)unaff_x19 + 0x314) == 5)) {
      if (((int)uVar4 < (int)unaff_x19[0x6e]) && (*(int *)((long)unaff_x19 + 0x314) == 5)) {
        if (uVar17 < uVar21) {
          if (*(uint *)(lVar29 + uVar26 * 0x178 + 0x40) == uVar5) {
            lVar46 = lVar29 + uVar26 * 0x178;
            *(ulong *)(lVar46 + 0x48) =
                 CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x48) >> 0x20),
                          fVar82 + (float)*(undefined8 *)(lVar46 + 0x48));
            *(float *)(lVar46 + 0x50) = fVar93 + *(float *)(lVar46 + 0x50);
            *(ulong *)(lVar46 + 0x70) =
                 CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x70) >> 0x20),
                          fVar82 + (float)*(undefined8 *)(lVar46 + 0x70));
            *(float *)(lVar46 + 0x78) = fVar93 + *(float *)(lVar46 + 0x78);
            *(ulong *)(lVar46 + 0x98) =
                 CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x98) >> 0x20),
                          fVar82 + (float)*(undefined8 *)(lVar46 + 0x98));
            *(float *)(lVar46 + 0xa0) = fVar93 + *(float *)(lVar46 + 0xa0);
            *(ulong *)(lVar46 + 0xc0) =
                 CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0xc0) >> 0x20),
                          fVar82 + (float)*(undefined8 *)(lVar46 + 0xc0));
            *(float *)(lVar46 + 200) = fVar93 + *(float *)(lVar46 + 200);
            goto LAB_0603e188;
          }
          goto LAB_0603e0c4;
        }
        goto LAB_0603fce4;
      }
      goto LAB_0603e0c4;
    }
    if (uVar21 <= uVar17) goto LAB_0603fce4;
    lVar46 = lVar29 + uVar26 * 0x178;
    *(ulong *)(lVar46 + 0x48) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x48) >> 0x20),
                  fVar82 + (float)*(undefined8 *)(lVar46 + 0x48));
    *(float *)(lVar46 + 0x50) = fVar93 + *(float *)(lVar46 + 0x50);
    *(ulong *)(lVar46 + 0x70) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x70) >> 0x20),
                  fVar82 + (float)*(undefined8 *)(lVar46 + 0x70));
    *(float *)(lVar46 + 0x78) = fVar93 + *(float *)(lVar46 + 0x78);
    *(ulong *)(lVar46 + 0x98) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x98) >> 0x20),
                  fVar82 + (float)*(undefined8 *)(lVar46 + 0x98));
    *(float *)(lVar46 + 0xa0) = fVar93 + *(float *)(lVar46 + 0xa0);
    *(ulong *)(lVar46 + 0xc0) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0xc0) >> 0x20),
                  fVar82 + (float)*(undefined8 *)(lVar46 + 0xc0));
    *(float *)(lVar46 + 200) = fVar93 + *(float *)(lVar46 + 200);
  }
  else {
LAB_0603e0c4:
    if (uVar21 <= uVar17) goto LAB_0603fce4;
    if (DAT_06e84e3e == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a2ef80);
      uVar21 = *(uint *)(lVar27 + 0x18);
      DAT_06e84e3e = '\x01';
    }
    puVar10 = PTR_DAT_06a2ef80;
    uVar16 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 1);
    *(undefined8 *)(lVar29 + uVar26 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
    *(undefined4 *)(lVar29 + uVar26 * 0x178 + 0x50) = uVar16;
    if (uVar21 <= uVar17) goto LAB_0603fce4;
    lVar31 = lVar29 + uVar26 * 0x178;
    uVar16 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x70) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    *(undefined4 *)(lVar31 + 0x78) = uVar16;
    uVar16 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    *(undefined4 *)(lVar31 + 0xa0) = uVar16;
    uVar33 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    uVar16 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined1 *)(lVar46 + 0x170) = 0;
    *(undefined8 *)(lVar31 + 0xc0) = uVar33;
    *(undefined4 *)(lVar31 + 200) = uVar16;
  }
LAB_0603e188:
  iVar25 = FUN_06232690(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar25 == 1;
  if (iVar24 == 0) {
    puVar40 = (undefined8 *)(*unaff_x19 + 0x8d8);
LAB_0603e1dc:
    (*(code *)*puVar40)();
  }
  else if (iVar24 == 1) {
    puVar40 = (undefined8 *)(*unaff_x19 + 0x8f8);
    goto LAB_0603e1dc;
  }
  unaff_x28 = &stack0x000011b0;
LAB_0603e204:
  if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
  lVar46 = lVar46 + uVar26 * 0x178;
  uVar33 = *(undefined8 *)(lVar46 + 0x114);
  *(float *)(lVar46 + 0x11c) = fVar93 + *(float *)(lVar46 + 0x11c);
  *(undefined8 *)(lVar46 + 0x114) =
       CONCAT44(fVar64 + (float)((ulong)uVar33 >> 0x20),fVar82 + (float)uVar33);
  if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
  lVar46 = lVar46 + uVar26 * 0x178;
  *(ulong *)(lVar46 + 0x108) =
       CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x108) >> 0x20),
                fVar82 + (float)*(undefined8 *)(lVar46 + 0x108));
  *(float *)(lVar46 + 0x110) = fVar93 + *(float *)(lVar46 + 0x110);
  if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
  lVar46 = lVar46 + uVar26 * 0x178;
  *(ulong *)(lVar46 + 0x120) =
       CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar46 + 0x120) >> 0x20),
                fVar82 + (float)*(undefined8 *)(lVar46 + 0x120));
  *(float *)(lVar46 + 0x128) = fVar93 + *(float *)(lVar46 + 0x128);
  if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
  lVar46 = lVar46 + uVar26 * 0x178;
  uVar33 = *(undefined8 *)(lVar46 + 300);
  *(float *)(lVar46 + 0x134) = fVar93 + *(float *)(lVar46 + 0x134);
  *(undefined8 *)(lVar46 + 300) =
       CONCAT44(fVar64 + (float)((ulong)uVar33 >> 0x20),fVar82 + (float)uVar33);
  lVar46 = unaff_x19[0x75];
  if ((lVar46 == 0) || (lVar31 = *(long *)(lVar46 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
  uVar21 = *(uint *)(lVar31 + 0x18);
  if (uVar21 <= uVar17) goto LAB_0603fce4;
  lVar47 = lVar31 + 0x20 + uVar26 * 0x178;
  uVar33 = *(undefined8 *)(lVar47 + 0x118);
  auVar71._0_8_ = CONCAT44(fVar82 + (float)((ulong)uVar33 >> 0x20),fVar82 + (float)uVar33);
  auVar71._8_4_ = fVar64 + (float)*(undefined8 *)(lVar47 + 0x120);
  auVar71._12_4_ = fVar64 + (float)((ulong)*(undefined8 *)(lVar47 + 0x120) >> 0x20);
  *(float *)(lVar47 + 0x128) = fVar64 + *(float *)(lVar47 + 0x128);
  *(long *)(lVar47 + 0x120) = auVar71._8_8_;
  *(undefined8 *)(lVar47 + 0x118) = auVar71._0_8_;
  if (uVar4 == uVar19) {
    uVar19 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
    if (uVar17 == uVar19) goto LAB_0603e414;
  }
  else {
    lVar46 = *(long *)(lVar46 + 0x50);
    if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar46 + 0x18) <= uVar19) goto LAB_0603fce4;
    lVar47 = lVar46 + 0x20 + (long)(int)uVar19 * 0x60;
    fVar60 = fVar64 + *(float *)(lVar47 + 0x38);
    *(ulong *)(lVar47 + 0x30) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar47 + 0x30) >> 0x20),
                  fVar64 + (float)*(undefined8 *)(lVar47 + 0x30));
    *(float *)(lVar47 + 0x38) = fVar60;
    *(float *)(lVar47 + 0x3c) = fVar82 + *(float *)(lVar47 + 0x3c);
    if (uVar21 <= *(uint *)(lVar47 + 0x18)) goto LAB_0603fce4;
    lVar46 = lVar46 + 0x20 + (long)(int)uVar19 * 0x60;
    uVar16 = *(undefined4 *)(lVar31 + 0x20 + (long)(int)*(uint *)(lVar47 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar46 + 0x54) = fVar60;
    *(undefined4 *)(lVar46 + 0x50) = uVar16;
    lVar46 = unaff_x19[0x75];
    if ((lVar46 == 0) || (lVar31 = *(long *)(lVar46 + 0x50), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_0603fce4;
    lVar46 = *(long *)(lVar46 + 0x38);
    if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
    uVar21 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar19 * 0x60 + 0x24);
    if (*(uint *)(lVar46 + 0x18) <= uVar21) goto LAB_0603fce4;
    lVar31 = lVar31 + 0x20 + (long)(int)uVar19 * 0x60;
    *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar46 + (long)(int)uVar21 * 0x178 + 0x120);
    *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    uVar19 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
LAB_0603e414:
    if (uVar17 == uVar19) {
      lVar46 = unaff_x19[0x75];
      if ((lVar46 == 0) || (lVar31 = *(long *)(lVar46 + 0x50), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= uVar4) goto LAB_0603fce4;
      lVar47 = lVar31 + 0x20 + (long)(int)uVar4 * 0x60;
      fVar60 = fVar64 + *(float *)(lVar47 + 0x38);
      *(ulong *)(lVar47 + 0x30) =
           CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar47 + 0x30) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar47 + 0x30));
      *(float *)(lVar47 + 0x38) = fVar60;
      *(float *)(lVar47 + 0x3c) = fVar82 + *(float *)(lVar47 + 0x3c);
      lVar46 = *(long *)(lVar46 + 0x38);
      if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
      uVar19 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar4 * 0x60 + 0x18);
      if (*(uint *)(lVar46 + 0x18) <= uVar19) goto LAB_0603fce4;
      *(undefined4 *)(lVar47 + 0x50) = *(undefined4 *)(lVar46 + (long)(int)uVar19 * 0x178 + 0x114);
      *(float *)(lVar47 + 0x54) = fVar60;
      lVar46 = unaff_x19[0x75];
      if ((lVar46 == 0) || (lVar31 = *(long *)(lVar46 + 0x50), lVar31 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar31 + 0x18) <= uVar4) goto LAB_0603fce4;
      lVar46 = *(long *)(lVar46 + 0x38);
      if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
      uVar19 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar4 * 0x60 + 0x24);
      if (*(uint *)(lVar46 + 0x18) <= uVar19) goto LAB_0603fce4;
      lVar31 = lVar31 + 0x20 + (long)(int)uVar4 * 0x60;
      *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar46 + (long)(int)uVar19 * 0x178 + 0x120);
      *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar48 = FUN_05580720(uVar94,0);
  if (((((uVar48 & 1) == 0) && (1 < uVar94 - 0x2010)) && (uVar94 != 0xad)) && (uVar94 != 0x2d)) {
    if (bVar7) {
      if (((uVar17 != 0) && ((int)uVar17 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar17 < *(int *)((long)unaff_x19 + 0x4ac) &&
          ((uVar94 == 0x2019 || (uVar94 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar17 - 1) goto LAB_0603fce4;
        uVar56 = *(undefined2 *)(lVar29 + (ulong)(uVar17 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar48 = FUN_05580720(uVar56,0);
        if ((uVar48 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar17 + 1) goto LAB_0603fce4;
          uVar56 = *(undefined2 *)(lVar29 + (ulong)(uVar17 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar48 = FUN_05580720(uVar56,0);
          unaff_x28 = &stack0x000011b0;
          if ((uVar48 & 1) != 0) goto LAB_0603e714;
        }
      }
LAB_0603f468:
      if (uVar17 == *(int *)((long)unaff_x19 + 0x4ac) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar48 = FUN_05580720(uVar94,0);
        uVar19 = uVar17;
        if ((uVar48 & 1) == 0) goto LAB_0603f4a4;
      }
      else {
LAB_0603f4a4:
        uVar19 = uVar17 - 1;
      }
      lVar46 = unaff_x19[0x75];
      if (lVar46 != 0) {
        lVar31 = *(long *)(lVar46 + 0x40);
        if (lVar31 != 0) {
          uVar21 = *(uint *)(lVar46 + 0x24);
          iVar24 = *(int *)(lVar31 + 0x18);
          if (iVar24 < (int)(uVar21 + 1)) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                      ((long *)(lVar46 + 0x40),iVar24 + 1,
                       *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
            lVar46 = unaff_x19[0x75];
            if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
          }
          lVar46 = *(long *)(lVar46 + 0x40);
          if (lVar46 != 0) {
            if (uVar21 < *(uint *)(lVar46 + 0x18)) {
              lVar46 = lVar46 + (long)(int)uVar21 * 0x18;
              *(long **)(lVar46 + 0x20) = unaff_x19;
              *(uint *)(lVar46 + 0x28) = uVar18;
              *(uint *)(lVar46 + 0x2c) = uVar19;
              *(uint *)(lVar46 + 0x30) = (uVar19 - uVar18) + 1;
              thunk_FUN_02ee2be8();
              lVar46 = unaff_x19[0x75];
              if (lVar46 != 0) {
                lVar31 = *(long *)(lVar46 + 0x50);
                *(int *)(lVar46 + 0x24) = *(int *)(lVar46 + 0x24) + 1;
                if (lVar31 != 0) {
                  if (uVar4 < *(uint *)(lVar31 + 0x18)) {
                    bVar7 = false;
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
    if (uVar17 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      bVar15 = FUN_05580678(uVar94,0);
      if ((((uVar94 == 0x200b | bVar15 ^ 0xff | bVar14) & 1) != 0) ||
         (*(int *)((long)unaff_x19 + 0x4ac) == 1)) goto LAB_0603f468;
    }
    bVar7 = false;
  }
  else {
    if (!bVar7) {
      uVar18 = uVar17;
    }
    if (uVar17 != *(int *)((long)unaff_x19 + 0x4ac) - 1U) {
LAB_0603e714:
      bVar7 = true;
      goto LAB_0603e71c;
    }
    lVar46 = unaff_x19[0x75];
    if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
    lVar31 = *(long *)(lVar46 + 0x40);
    if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
    uVar19 = *(uint *)(lVar46 + 0x24);
    iVar24 = *(int *)(lVar31 + 0x18);
    if (iVar24 < (int)(uVar19 + 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                ((long *)(lVar46 + 0x40),iVar24 + 1,
                 *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
      lVar46 = unaff_x19[0x75];
      if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar46 = *(long *)(lVar46 + 0x40);
    if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar46 + 0x18) <= uVar19) goto LAB_0603fce4;
    lVar46 = lVar46 + (long)(int)uVar19 * 0x18;
    *(long **)(lVar46 + 0x20) = unaff_x19;
    *(uint *)(lVar46 + 0x28) = uVar18;
    *(uint *)(lVar46 + 0x2c) = uVar17;
    *(uint *)(lVar46 + 0x30) = (uVar17 - uVar18) + 1;
    thunk_FUN_02ee2be8();
    lVar46 = unaff_x19[0x75];
    if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
    lVar31 = *(long *)(lVar46 + 0x50);
    *(int *)(lVar46 + 0x24) = *(int *)(lVar46 + 0x24) + 1;
    if (lVar31 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= uVar4) goto LAB_0603fce4;
    bVar7 = true;
LAB_0603e630:
    unaff_x28 = &stack0x000011b0;
    lVar31 = lVar31 + (long)(int)uVar4 * 0x60;
    iStack00000000000000ec = iStack00000000000000ec + 1;
    *(int *)(lVar31 + 0x34) = *(int *)(lVar31 + 0x34) + 1;
  }
LAB_0603e71c:
  lVar46 = unaff_x19[0x75];
  if ((lVar46 == 0) || (lVar31 = *(long *)(lVar46 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_0603fce4;
  lVar47 = lVar31 + 0x20;
  if ((*(byte *)(lVar47 + uVar26 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar9) {
      if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar17 + -1)) goto LAB_0603fce4;
      lVar47 = lVar47 + ((long)(int)uVar17 + -1) * 0x178;
      lVar31 = *unaff_x19;
      uVar16 = *(undefined4 *)(lVar47 + 0x100);
      uVar81 = *(undefined4 *)(lVar47 + 0x13c);
LAB_0603e9d8:
      pcVar41 = *(code **)(lVar31 + 0x908);
LAB_0603e9e0:
      (*pcVar41)(fStack000000000000006c,fStack0000000000000064,fStack0000000000000068,uVar16,
                 fStack0000000000000138,0,fVar58,uVar81);
LAB_0603ea24:
      lVar46 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar46 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar46 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      }
      fStack000000000000016c = 0.0;
      fStack0000000000000134 = 0.0;
      fStack0000000000000138 = *(float *)(*(long *)(lVar46 + 0xb8) + 0x1730);
    }
    bVar9 = false;
  }
  else {
    lVar31 = lVar47 + uVar26 * 0x178;
    *(int *)(lVar31 + 0x148) = iVar49;
    iVar24 = *(int *)(lVar31 + 0x40);
    if ((((int)unaff_x19[0x6d] < (int)uVar17) || ((int)unaff_x19[0x6e] < (int)uVar4)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 && (iVar24 + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar14 & 1) == 0 && uVar94 != 0x200b) {
      fVar82 = *(float *)(lVar47 + uVar26 * 0x178 + 0x13c);
      if (fStack000000000000016c <= fVar82) {
        fStack000000000000016c = fVar82;
      }
      if (fStack0000000000000134 <= ABS(fVar59)) {
        fStack0000000000000134 = ABS(fVar59);
      }
      if (iVar24 != iStack0000000000000060) {
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
          lVar46 = unaff_x19[0x75];
          if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
          lVar31 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        else {
          lVar31 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        fStack0000000000000138 = *(float *)(lVar31 + 0x1730);
      }
      lVar46 = *(long *)(lVar46 + 0x38);
      if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
      if (unaff_x19[0x1f] == 0) goto thunk_FUN_02e3ccc4;
      fVar60 = *(float *)(lVar46 + uVar26 * 0x178 + 0x144);
      fVar82 = (float)FUN_0630f910(unaff_x19[0x1f] + 0x28,0);
      fVar60 = fVar60 + fStack000000000000016c * fVar82;
      iStack0000000000000060 = iVar24;
      if (fVar60 <= fStack0000000000000138) {
        fStack0000000000000138 = fVar60;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((bVar1) && ((int)uVar17 <= (int)uVar20)) {
        if ((uVar94 & 0xfffe) == 10) goto LAB_0603ea5c;
        if (uVar94 != 0xd) {
          if (uVar17 == uVar20) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar48 = FUN_055814cc(uVar94,0);
            if ((uVar48 & 1) != 0) goto LAB_0603e930;
          }
          if ((unaff_x19[0x75] != 0) && (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 != 0)) {
            if (uVar17 < *(uint *)(lVar46 + 0x18)) {
              lVar46 = lVar46 + uVar26 * 0x178;
              fVar58 = *(float *)(lVar46 + 0x15c);
              fVar82 = fVar59;
              fVar60 = fVar58;
              if (fStack000000000000016c != 0.0) {
                fVar82 = fStack0000000000000134;
                fVar60 = fStack000000000000016c;
              }
              fStack000000000000016c = fVar60;
              fStack0000000000000068 = 0.0;
              fStack000000000000006c = *(float *)(lVar46 + 0x114);
              uStack0000000000000084 = *(undefined4 *)(lVar46 + 0x164);
              fStack0000000000000064 = fStack0000000000000138;
              fStack0000000000000134 = fVar82;
              goto LAB_0603e99c;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
      }
LAB_0603e930:
      bVar9 = false;
      goto LAB_0603ea5c;
    }
LAB_0603e99c:
    if (*(int *)((long)unaff_x19 + 0x4ac) == 1) {
      if ((unaff_x19[0x75] != 0) && (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 != 0)) {
        if (uVar17 < *(uint *)(lVar46 + 0x18)) {
          lVar46 = lVar46 + uVar26 * 0x178;
LAB_0603e9cc:
          lVar31 = *unaff_x19;
          uVar16 = *(undefined4 *)(lVar46 + 0x120);
          uVar81 = *(undefined4 *)(lVar46 + 0x15c);
          goto LAB_0603e9d8;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((uVar17 == uVar97) || ((int)uVar20 <= (int)uVar17)) {
      lVar46 = unaff_x19[0x75];
      if ((bVar14 & 1) == 0 && uVar94 != 0x200b) {
        if ((lVar46 == 0) || (lVar46 = *(long *)(lVar46 + 0x38), lVar46 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
        lVar46 = lVar46 + uVar26 * 0x178;
      }
      else {
        if ((lVar46 == 0) || (lVar46 = *(long *)(lVar46 + 0x38), lVar46 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar46 + 0x18) <= uVar20) goto LAB_0603fce4;
        lVar46 = lVar46 + (long)(int)uVar20 * 0x178;
      }
      uVar16 = *(undefined4 *)(lVar46 + 0x120);
      uVar81 = *(undefined4 *)(lVar46 + 0x15c);
      pcVar41 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_0603e9e0;
    }
    if (!bVar1) {
      if ((unaff_x19[0x75] != 0) && (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 != 0)) {
        if ((uint)((long)(int)uVar17 + -1) < *(uint *)(lVar46 + 0x18)) {
          lVar46 = lVar46 + ((long)(int)uVar17 + -1) * 0x178;
          goto LAB_0603e9cc;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((int)uVar17 < *(int *)((long)unaff_x19 + 0x4ac) + -1) {
      if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar46 + 0x18) <= uVar17 + 1) goto LAB_0603fce4;
      uVar48 = FUN_06059f90(uStack0000000000000084,
                            *(undefined4 *)(lVar46 + (ulong)(uVar17 + 1) * 0x178 + 0x164),0);
      if ((uVar48 & 1) == 0) {
        if ((unaff_x19[0x75] != 0) && (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 != 0)) {
          if (uVar17 < *(uint *)(lVar46 + 0x18)) {
            lVar46 = lVar46 + uVar26 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack000000000000006c,fStack0000000000000064,fStack0000000000000068,
                       *(undefined4 *)(lVar46 + 0x120),fStack0000000000000138,0,fVar58,
                       *(undefined4 *)(lVar46 + 0x15c));
            unaff_x28 = &stack0x000011b0;
            goto LAB_0603ea24;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      bVar9 = true;
      unaff_x28 = &stack0x000011b0;
    }
    else {
      bVar9 = true;
    }
  }
LAB_0603ea5c:
  if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
  if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
  uVar19 = *(uint *)(lVar46 + uVar26 * 0x178 + 0x18c);
  fVar82 = (float)FUN_0630f920(lVar28 + 0x28,0);
  if ((uVar19 >> 6 & 1) == 0) {
    if (bVar12) {
      if ((unaff_x19[0x75] != 0) && (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 != 0)) {
        if ((uint)((long)(int)uVar17 + -1) < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + ((long)(int)uVar17 + -1) * 0x178;
          goto LAB_0603ed10;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
LAB_0603eba4:
    bVar12 = false;
  }
  else {
    lVar46 = unaff_x19[0x75];
    if ((lVar46 == 0) || (lVar31 = *(long *)(lVar46 + 0x38), lVar31 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_0603fce4;
    *(int *)(lVar31 + 0x20 + uVar26 * 0x178 + 0x150) = iVar49;
    if ((((int)unaff_x19[0x6d] < (int)uVar17) || ((int)unaff_x19[0x6e] < (int)uVar4)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar31 + 0x20 + uVar26 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar12 | bVar1 ^ 1U)) || ((int)uVar20 < (int)uVar17)) || ((uVar94 & 0xfffe) == 10)
        ) || (uVar94 == 0xd)) {
LAB_0603eb9c:
      if (!bVar12) goto LAB_0603eba4;
    }
    else {
      if (uVar17 == uVar20) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar48 = FUN_055814cc(uVar94,0);
        if ((uVar48 & 1) != 0) goto LAB_0603eb9c;
        lVar46 = unaff_x19[0x75];
        if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
      }
      lVar46 = *(long *)(lVar46 + 0x38);
      if (lVar46 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar46 + 0x18) <= uVar17) goto LAB_0603fce4;
      lVar46 = lVar46 + uVar26 * 0x178;
      fVar92 = *(float *)(lVar46 + 0x15c);
      fStack0000000000000098 = fVar82 * fVar92 + *(float *)(lVar46 + 0x144);
      fVar78 = 0.0;
      fStack0000000000000058 = *(float *)(lVar46 + 0x58);
      fStack0000000000000094 = *(float *)(lVar46 + 0x114);
    }
    iVar24 = *(int *)((long)unaff_x19 + 0x4ac);
    if (iVar24 == 1) {
LAB_0603ece4:
      if ((unaff_x19[0x75] == 0) || (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar28 + 0x18) <= uVar17) goto LAB_0603fce4;
      lVar28 = lVar28 + uVar26 * 0x178;
LAB_0603ed10:
      fVar60 = *(float *)(lVar28 + 0x144);
      lVar46 = *unaff_x19;
      uVar16 = *(undefined4 *)(lVar28 + 0x120);
    }
    else {
      if (uVar17 != uVar97) {
        if (iVar24 <= (int)uVar17) {
LAB_0603ede8:
          if ((int)uVar17 < iVar24) {
            iVar24 = FUN_0626d24c(lVar28,0);
            if (*(uint *)(lVar27 + 0x18) <= uVar17 + 1) goto LAB_0603fce4;
            lVar28 = *(long *)(lVar29 + (ulong)(uVar17 + 1) * 0x178 + 0x20);
            if (lVar28 == 0) goto thunk_FUN_02e3ccc4;
            iVar25 = FUN_0626d24c(lVar28,0);
            if (iVar24 != iVar25) goto LAB_0603ece4;
          }
          if (bVar1) {
            bVar12 = true;
            goto LAB_0603efc0;
          }
          if ((unaff_x19[0x75] != 0) && (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 != 0)) {
            if ((uint)((long)(int)uVar17 + -1) < *(uint *)(lVar28 + 0x18)) {
              lVar28 = lVar28 + ((long)(int)uVar17 + -1) * 0x178;
              goto LAB_0603ed10;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if ((unaff_x19[0x75] == 0) || (lVar46 = *(long *)(unaff_x19[0x75] + 0x38), lVar46 == 0))
        goto thunk_FUN_02e3ccc4;
        if (uVar17 + 1 < *(uint *)(lVar46 + 0x18)) {
          if (*(float *)(lVar46 + (ulong)(uVar17 + 1) * 0x178 + 0x58) == fStack0000000000000058) {
            if (*(int *)(*(long *)
                          System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar48 = FUN_0605a494(0);
            if ((uVar48 & 1) != 0) {
              iVar24 = *(int *)((long)unaff_x19 + 0x4ac);
              goto LAB_0603ede8;
            }
          }
          lVar28 = unaff_x19[0x75];
          if ((int)uVar20 < (int)uVar17) goto LAB_0603ed4c;
          goto LAB_0603ef48;
        }
        goto LAB_0603fce4;
      }
      lVar28 = unaff_x19[0x75];
      if ((uVar94 != 0x200b & (bVar14 ^ 0xff)) == 0) {
LAB_0603ed4c:
        if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x38), lVar28 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_0603fce4;
        lVar28 = lVar28 + (long)(int)uVar20 * 0x178;
      }
      else {
LAB_0603ef48:
        if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x38), lVar28 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar28 + 0x18) <= uVar17) goto LAB_0603fce4;
        lVar28 = lVar28 + uVar26 * 0x178;
      }
      fVar60 = *(float *)(lVar28 + 0x144);
      lVar46 = *unaff_x19;
      uVar16 = *(undefined4 *)(lVar28 + 0x120);
    }
    (**(code **)(lVar46 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,fVar78,uVar16,fVar92 * fVar82 + fVar60,
               0,fVar92,fVar92);
    bVar12 = false;
  }
LAB_0603efc0:
  if ((unaff_x19[0x75] == 0) || (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar19 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar19 <= uVar17) goto LAB_0603fce4;
  if ((*(byte *)(lVar28 + 0x20 + uVar26 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x6d] < (int)uVar17) || ((int)unaff_x19[0x6e] < (int)uVar4)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar28 + 0x20 + uVar26 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar8) {
LAB_0603f144:
      if (uVar19 <= uVar17) goto LAB_0603fce4;
      lVar28 = lVar28 + uVar26 * 0x178;
      lVar46 = 0x118;
      if ((bVar14 & 1) == 0) {
        lVar46 = 0xf4;
      }
      fVar63 = *(float *)(lVar28 + 0x180);
      fVar64 = *(float *)(lVar28 + 0x184);
      fVar73 = *(float *)(lVar28 + 0x188);
      uVar33 = *(undefined8 *)(lVar28 + 0x178);
      fVar86 = *(float *)(lVar28 + 0x120);
      fVar82 = *(float *)(lVar28 + 0x13c);
      fVar62 = *(float *)(lVar28 + 0x140);
      fVar61 = *(float *)(lVar28 + 0x148);
      fVar60 = *(float *)(lVar28 + lVar46 + 0x20);
      in_stack_000001e8 = SUB168(*(undefined1 (*) [16])(unaff_x28 + 0x160),8);
      in_stack_000001e0 = SUB168(*(undefined1 (*) [16])(unaff_x28 + 0x160),0);
      in_stack_000001c8 = uVar33;
      fStack00000000000001d0 = fVar63;
      fStack00000000000001d4 = fVar64;
      in_stack_000001d8 = fVar73;
      in_stack_000001f0 = in_stack_00001320;
      uVar26 = FUN_0605b5b8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar26 & 1) == 0) {
        if ((bVar14 & 1) == 0) {
          fVar82 = fVar86;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar60 = fVar60 - (float)((ulong)in_stack_00001310 >> 0x20);
        if (fVar60 <= fStack00000000000000e8) {
          fStack00000000000000e8 = fVar60;
        }
        if (fStack00000000000000dc <= fVar82 + in_stack_00001318) {
          fStack00000000000000dc = fVar82 + in_stack_00001318;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar61 = fVar61 - in_stack_00001320;
        fVar62 = fVar62 + in_stack_0000131c;
        if (fVar61 <= fStack0000000000000114) {
          fStack0000000000000114 = fVar61;
        }
        if (fStack00000000000000e0 <= fVar62) {
          fStack00000000000000e0 = fVar62;
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fStack00000000000000e8 = (fVar60 + (fStack00000000000000dc - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((bVar14 & 1) == 0) {
          fVar82 = fVar86;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fStack0000000000000114 = fVar61 - fVar73;
        fStack00000000000000dc = fVar63 + fVar82;
        in_stack_00001310 = uVar33;
        in_stack_00001318 = fVar63;
        in_stack_0000131c = fVar64;
        in_stack_00001320 = fVar73;
        fStack00000000000000e0 = fVar62 + fVar64;
      }
      if (((*(int *)((long)unaff_x19 + 0x4ac) != 1) && (uVar17 != uVar97)) &&
         (((int)uVar17 < (int)uVar20 && (bVar1)))) {
        bVar8 = true;
        goto LAB_0603f378;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar8 = false;
      if ((((!bVar1) || ((int)uVar20 < (int)uVar17)) || ((uVar94 & 0xfffe) == 10)) ||
         (uVar94 == 0xd)) goto LAB_0603f378;
      if (uVar17 != uVar20) {
LAB_0603f0c8:
        puVar10 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar46 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar46 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar46 = *(long *)puVar10;
        }
        if ((unaff_x19[0x75] != 0) && (lVar28 = *(long *)(unaff_x19[0x75] + 0x38), lVar28 != 0)) {
          uVar19 = (uint)*(undefined8 *)(lVar28 + 0x18);
          if (uVar17 < uVar19) {
            lVar31 = *(long *)(lVar46 + 0xb8);
            lVar46 = lVar28 + uVar26 * 0x178;
            fStack00000000000000dc = *(float *)(lVar31 + 0x1728);
            fStack00000000000000e0 = *(float *)(lVar31 + 0x172c);
            in_stack_00001320 = *(float *)(lVar46 + 0x188);
            fStack00000000000000e8 = *(float *)(lVar31 + 0x1720);
            fStack0000000000000114 = *(float *)(lVar31 + 0x1724);
            uVar33 = *(undefined8 *)(lVar46 + 0x178);
            *(undefined8 *)(unaff_x28 + 0x168) = *(undefined8 *)(lVar46 + 0x180);
            *(undefined8 *)(unaff_x28 + 0x160) = uVar33;
            goto LAB_0603f144;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar48 = FUN_055814cc(uVar94,0);
      if ((uVar48 & 1) == 0) goto LAB_0603f0c8;
    }
    bVar8 = false;
  }
LAB_0603f378:
  iVar24 = *(int *)((long)unaff_x19 + 0x4ac);
  uVar17 = uVar17 + 1;
  uVar19 = uVar4;
  if (iVar24 <= (int)uVar17) goto LAB_0603f74c;
  goto LAB_0603d6e0;
LAB_0603f74c:
  lVar27 = unaff_x19[0x75];
  if (lVar27 != 0) {
    iVar25 = uVar4 + 1;
    plVar52 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
LAB_0603f770:
    lVar29 = *(long *)(lVar27 + 0x60);
    if (lVar29 != 0) {
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) {
LAB_0603fce4:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      *(int *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x50 + 0x28) = iVar49;
      *(int *)(lVar27 + 0x18) = iVar24;
      lVar29 = unaff_x19[0xd8];
      *(int *)(lVar27 + 0x2c) = iVar25;
      if (iVar24 < 1 || iStack00000000000000ec == 0) {
        iStack00000000000000ec = 1;
      }
      *(int *)(lVar27 + 0x1c) = (int)lVar29;
      *(int *)(lVar27 + 0x24) = iStack00000000000000ec;
      *(int *)(lVar27 + 0x30) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
      if (((int)unaff_x19[0x6b] != 0xff) ||
         (uVar26 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar26 & 1) == 0)) {
LAB_0603d144:
        if (*(int *)(*(long *)PTR_DAT_06a3c3a0 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_060594e8();
        return;
      }
      lVar27 = unaff_x19[0xdf];
      if (lVar27 != 0) {
        (**(code **)(lVar27 + 0x18))
                  (*(undefined8 *)(lVar27 + 0x40),unaff_x19[0x75],*(undefined8 *)(lVar27 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
        if ((unaff_x19[0x75] == 0) || (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(int *)(*plVar52 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
        FUN_060a5370(lVar27 + 0x20,1,0);
      }
      if (unaff_x19[0x7c] != 0) {
        FUN_06242810(unaff_x19[0x7c],0);
        if ((unaff_x19[0x75] != 0) && (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0)) {
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
          if (unaff_x19[0x7c] != 0) {
            FUN_06240928(unaff_x19[0x7c],*(undefined8 *)(lVar27 + 0x30),0);
            if ((unaff_x19[0x75] != 0) && (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0))
            {
              if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
              if (unaff_x19[0x7c] != 0) {
                FUN_06241714(unaff_x19[0x7c],0,*(undefined8 *)(lVar27 + 0x48),0);
                if ((unaff_x19[0x75] != 0) &&
                   (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0)) {
                  if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
                  if (unaff_x19[0x7c] != 0) {
                    FUN_06240b40(unaff_x19[0x7c],*(undefined8 *)(lVar27 + 0x50),0);
                    if ((unaff_x19[0x75] != 0) &&
                       (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 != 0)) {
                      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0603fce4;
                      if (unaff_x19[0x7c] != 0) {
                        UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                  (unaff_x19[0x7c],*(undefined8 *)(lVar27 + 0x58),0);
                        if (unaff_x19[0x7c] != 0) {
                          FUN_062425d0(unaff_x19[0x7c],0);
                          lVar27 = unaff_x19[0x75];
                          if (lVar27 != 0) {
                            lVar28 = 0;
                            lVar29 = 0;
                            do {
                              uVar26 = lVar29 + 1;
                              if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar26) goto LAB_0603d144;
                              lVar27 = *(long *)(lVar27 + 0x60);
                              if (lVar27 == 0) break;
                              if (*(int *)(*plVar52 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                              FUN_060a524c(lVar27 + lVar28 + 0x70,0);
                              lVar27 = unaff_x19[0xe5];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                              uVar33 = *(undefined8 *)(lVar27 + lVar29 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              uVar48 = FUN_062696b0(uVar33,0,0);
                              if ((uVar48 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
                                  if ((unaff_x19[0x75] == 0) ||
                                     (lVar27 = *(long *)(unaff_x19[0x75] + 0x60), lVar27 == 0))
                                  break;
                                  if (*(int *)(*plVar52 + 0xe4) == 0) {
                                    thunk_FUN_02e9a04c();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                                  FUN_060a5370(lVar27 + lVar28 + 0x70,1,0);
                                }
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar29 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar46 = *(long *)(unaff_x19[0x75] + 0x60), lVar46 == 0)) break;
                                if (*(uint *)(lVar46 + 0x18) <= uVar26) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                FUN_06240928(lVar27,*(undefined8 *)(lVar46 + lVar28 + 0x80),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar29 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar46 = *(long *)(unaff_x19[0x75] + 0x60), lVar46 == 0)) break;
                                if (*(uint *)(lVar46 + 0x18) <= uVar26) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                FUN_06241714(lVar27,0,*(undefined8 *)(lVar46 + lVar28 + 0x98),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar29 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar46 = *(long *)(unaff_x19[0x75] + 0x60), lVar46 == 0)) break;
                                if (*(uint *)(lVar46 + 0x18) <= uVar26) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                FUN_06240b40(lVar27,*(undefined8 *)(lVar46 + lVar28 + 0xa0),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar29 * 8 + 0x28);
                                if (lVar27 == 0) break;
                                lVar27 = FUN_060ae428(lVar27,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar46 = *(long *)(unaff_x19[0x75] + 0x60), lVar46 == 0)) break;
                                if (*(uint *)(lVar46 + 0x18) <= uVar26) goto LAB_0603fce4;
                                if (lVar27 == 0) break;
                                UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                          (lVar27,*(undefined8 *)(lVar46 + lVar28 + 0xa8),0);
                                lVar27 = unaff_x19[0xe5];
                                if (lVar27 == 0) break;
                                if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_0603fce4;
                                lVar27 = *(long *)(lVar27 + lVar29 * 8 + 0x28);
                                if ((lVar27 == 0) || (lVar27 = FUN_060ae428(lVar27,0), lVar27 == 0))
                                break;
                                FUN_062425d0(lVar27,0);
                              }
                              lVar27 = unaff_x19[0x75];
                              lVar29 = lVar29 + 1;
                              lVar28 = lVar28 + 0x50;
                            } while (lVar27 != 0);
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


