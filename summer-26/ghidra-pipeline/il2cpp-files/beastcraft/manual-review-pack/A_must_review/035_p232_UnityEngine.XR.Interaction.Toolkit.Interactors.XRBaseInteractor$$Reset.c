/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$Reset
ENTRY_POINT: 060385c8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior;keyword_support;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__Reset
               (undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined1 uVar32;
  char cVar33;
  undefined4 *puVar34;
  long *plVar35;
  float *pfVar36;
  undefined8 *puVar37;
  code *pcVar38;
  uint uVar39;
  float *pfVar40;
  long lVar41;
  uint uVar42;
  long *plVar43;
  long lVar44;
  long lVar45;
  long *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar46;
  undefined8 *unaff_x21;
  int iVar47;
  int iVar48;
  long *unaff_x23;
  int *piVar49;
  long *plVar50;
  ulong uVar51;
  uint uVar52;
  long *plVar53;
  undefined2 uVar54;
  undefined1 *unaff_x28;
  long *unaff_x29;
  ushort uVar55;
  float fVar56;
  float fVar57;
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
  undefined8 uVar68;
  float fVar70;
  undefined1 auVar69 [16];
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  undefined4 uVar79;
  float unaff_s8;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float unaff_s9;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float unaff_s10;
  float fVar88;
  float fVar89;
  float fVar90;
  float unaff_s14;
  float fVar91;
  int iStack0000000000000020;
  uint uStack000000000000004c;
  float fStack0000000000000058;
  int iStack0000000000000060;
  float fStack0000000000000064;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack0000000000000084;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  undefined4 in_stack_000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float in_stack_000000e8;
  int iStack00000000000000ec;
  float fStack0000000000000104;
  undefined8 in_stack_00000110;
  float in_stack_00000118;
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
  uint uVar92;
  undefined8 in_stack_00001310;
  float in_stack_00001318;
  float in_stack_0000131c;
  float in_stack_00001320;
  uint uVar93;
  undefined8 in_stack_00001328;
  char in_stack_00001334;
  float fVar94;
  uint in_stack_0000133c;
  
  FUN_046b58ac(unaff_x19 + 0xaa,param_2,*unaff_x21);
  lVar26 = unaff_x19[0xa1];
  if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  if (cRam0000000006e94e1b == '\0') {
    FUN_02e3ca1c(System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
    cRam0000000006e94e1b = '\x01';
  }
  puVar11 = System_Collections_Generic_List<Matrix4x4[]>_TypeInfo;
  lVar25 = *(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo;
  if (*(int *)(lVar25 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar25 = *(long *)puVar11;
  }
  puVar34 = *(undefined4 **)(lVar25 + 0xb8);
  FUN_0605b508(*puVar34,puVar34[1],puVar34[2],puVar34[3],&stack0x00000200,(int)lVar26,0);
  puVar11 = System_Collections_Generic_List<ArenaPlayerData>_TypeInfo;
  *(undefined8 *)(unaff_x28 + 0x198) = 0;
  *(undefined8 *)(unaff_x28 + 400) = 0;
  FUN_046b5ea4(unaff_x19 + 0xae,&stack0x00001340,*(undefined8 *)puVar11);
  unaff_x19[0xb4] = 0;
  thunk_FUN_02ee2be8(unaff_x19 + 0xb4,0);
  FUN_046b7930(unaff_x19 + 0xb5,0,
               *(undefined8 *)System_Collections_Generic_List<AsyncOperationHandle>_TypeInfo);
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  bVar14 = *(byte *)(unaff_x19[0x20] + 0x1b0);
  uVar31 = *(undefined8 *)System_Collections_Generic_List<AsyncGPUReadbackRequest>_TypeInfo;
  *(uint *)(unaff_x19 + 0xc2) = (uint)bVar14;
  FUN_046b658c(unaff_x19 + 0xbe,bVar14,uVar31);
  FUN_046b6580(unaff_x19 + 0xc3,
               *(undefined8 *)System_Collections_Generic_List<AggregateException>_TypeInfo);
  if (DAT_06e862d4 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2ef80);
    DAT_06e862d4 = '\x01';
  }
  cVar33 = DAT_06e84e41;
  uVar71 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 0x14);
  *(undefined8 *)((long)unaff_x19 + 0x484) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 0xc);
  *(undefined4 *)((long)unaff_x19 + 0x48c) = uVar71;
  if (cVar33 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2f028);
    DAT_06e84e41 = '\x01';
  }
  auVar76 = **(undefined1 (**) [16])(*(long *)PTR_DAT_06a2f028 + 0xb8);
  *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
  *(undefined4 *)(unaff_x19 + 0x5e) = 0xc6fffe00;
  *(long *)((long)unaff_x19 + 0x47c) = auVar76._8_8_;
  *(long *)((long)unaff_x19 + 0x474) = auVar76._0_8_;
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar56 = (float)FUN_0630f8b0(unaff_x19[0x20] + 0x28,0);
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar57 = (float)FUN_0630f8b8(unaff_x19[0x20] + 0x28,0);
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  fVar58 = (float)FUN_0630f8e8(unaff_x19[0x20] + 0x28,0);
  *(undefined4 *)(unaff_x19 + 0xcc) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x2d4) = 0;
  unaff_x19[0x89] = 0;
  FUN_046b7f24(ZEXT816(0),unaff_x19 + 0x8a,*unaff_x20);
  *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
  lVar26 = *unaff_x23;
  *(undefined1 *)(unaff_x19 + 0x8e) = 0;
  *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x364);
  *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar26 = *unaff_x23;
  }
  uVar31 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1730);
  *(undefined8 *)((long)unaff_x19 + 0x4ec) = 0;
  *(undefined4 *)(unaff_x19 + 99) = 0xffffffff;
  uVar31 = NEON_rev64(uVar31,4);
  *(undefined4 *)(unaff_x19 + 0x99) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x2f4) = 0;
  unaff_x19[0x98] = 0;
  *(undefined4 *)((long)unaff_x19 + 0x334) = 0x80000000;
  *(undefined8 *)((long)unaff_x19 + 0x4e4) = uVar31;
  puVar11 = System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo;
  if (unaff_x19[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar16 = FUN_03fe2fc4(unaff_x19[0x67],0x6b65726e,
                        *(undefined8 *)
                         System_Collections_Generic_List<WeakReference<FontAsset>>_TypeInfo);
  if (unaff_x19[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar17 = FUN_03fe2fc4(unaff_x19[0x67],0x6d61726b,*(undefined8 *)puVar11);
  if (unaff_x19[0x67] == 0) goto thunk_FUN_02e3ccc4;
  uVar18 = FUN_03fe2fc4(unaff_x19[0x67],0x6d6b6d6b,*(undefined8 *)puVar11);
  lVar26 = unaff_x19[0x75];
  *(undefined4 *)((long)unaff_x19 + 0x4cc) = 0;
  if ((lVar26 == 0) || (*(long *)(lVar26 + 0x58) == 0)) goto thunk_FUN_02e3ccc4;
  uVar5 = (int)unaff_x19[0x6f] - 1;
  uVar6 = *(int *)(*(long *)(lVar26 + 0x58) + 0x18) - 1;
  uVar92 = uVar5;
  if ((int)uVar6 <= (int)uVar5) {
    uVar92 = uVar6;
  }
  uVar6 = 0;
  if (-1 < (int)uVar5) {
    uVar6 = uVar92;
  }
  UnityEngine_XR_OpenXR_OpenXRApiVersion__op_LessThan(lVar26,0);
  lVar26 = *unaff_x23;
  *(undefined4 *)(unaff_x19 + 0x74) = 0xbf800000;
  fVar72 = *(float *)((long)unaff_x19 + 900);
  fVar84 = *(float *)(unaff_x19 + 0x73);
  fVar91 = *(float *)((long)unaff_x19 + 0x39c);
  unaff_x19[0x72] = 0;
  fVar59 = *(float *)(unaff_x19 + 0x70);
  fVar60 = *(float *)((long)unaff_x19 + 0x38c);
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar26 = *unaff_x23;
  }
  unaff_x19[0x9f] = *(long *)(*(long *)(lVar26 + 0xb8) + 0x1720);
  unaff_x19[0xa0] = *(long *)(*(long *)(lVar26 + 0xb8) + 0x1728);
  if (unaff_x19[0x75] == 0) goto thunk_FUN_02e3ccc4;
  UnityEngine_XR_OpenXR_OpenXRApiVersion___ctor(unaff_x19[0x75],0);
  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
  *(undefined4 *)(unaff_x19 + 0x9c) = 0;
  fVar94 = 0.0;
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
  FUN_046b854c(*(long *)(*unaff_x23 + 0xb8) + 0x1338,
               *(undefined8 *)System_Collections_Generic_List<AdvancedUpscalers>_TypeInfo);
  fVar87 = DAT_01317af4;
  fVar83 = DAT_013179f0;
  lVar26 = unaff_x19[0x92];
  uVar92 = 0;
  if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
  iStack0000000000000020 = 0;
  if (fVar84 <= 0.0) {
    fVar84 = 0.0;
  }
  pfVar2 = (float *)(unaff_x19 + 0x42);
  fVar56 = fVar56 - (fVar57 - fVar58);
  if (fVar91 <= 0.0) {
    fVar91 = 0.0;
  }
  plVar50 = unaff_x19 + 0xcd;
  iVar47 = 0;
  bVar15 = 0;
  fVar62 = 0.0;
  uVar5 = (int)fStack0000000000000064 - 1;
  bVar8 = true;
  bVar14 = 1;
  fVar73 = in_stack_00000118 * (unaff_s14 / unaff_s10) * unaff_s9;
  auVar76 = ZEXT416((uint)fVar73);
  fVar58 = in_stack_00000118 * unaff_s8 * DAT_01317af4;
  fVar84 = fVar84 + DAT_01317c4c;
  fVar61 = fVar91 + DAT_01317c4c;
  fStack0000000000000104 = fVar84;
  fVar57 = fVar73;
  fStack0000000000000140 = fVar84;
LAB_06038b48:
  if ((int)*(uint *)(lVar26 + 0x18) <= (int)uVar92) {
LAB_0603cfc8:
    if ((char)unaff_x19[0x4c] == '\0') {
LAB_0603d08c:
      iVar47 = *(int *)((long)unaff_x19 + 0x26c);
      iVar23 = (int)unaff_x19[0x4e];
    }
    else {
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x264);
      auVar76 = ZEXT416((uint)_UNK_01317b9c);
      if (fStack0000000000000104 - *(float *)(unaff_x19 + 0x4d) <= _UNK_01317b9c) goto LAB_0603d08c;
      fVar56 = *(float *)((long)unaff_x19 + 0x20c);
      fVar57 = *(float *)((long)unaff_x19 + 0x27c);
      auVar76 = ZEXT416((uint)fVar57);
      iVar47 = *(int *)((long)unaff_x19 + 0x26c);
      iVar23 = (int)unaff_x19[0x4e];
      if ((fVar56 < fVar57) && (iVar47 < iVar23)) {
        if (*(float *)((long)unaff_x19 + 0x304) < *(float *)(unaff_x19 + 0x60) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x304) = 0;
        }
        fVar58 = DAT_01317af0;
        *(float *)(unaff_x19 + 0x4d) = fVar56;
        fVar59 = (fStack0000000000000104 - fVar56) * 0.5;
        if (fVar59 <= fVar58) {
          fVar59 = fVar58;
        }
        fVar58 = (fVar56 + fVar59) * 20.0 + 0.5;
        fVar56 = _UNK_01317b80;
        if (fVar58 != INFINITY) {
          fVar56 = (float)(int)fVar58 / 20.0;
        }
        if (fVar57 <= fVar56) {
          fVar56 = fVar57;
        }
UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize:
        *(float *)((long)unaff_x19 + 0x20c) = fVar56;
        return;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
    if (iVar23 <= iVar47) {
      uVar31 = FUN_05603500((long)unaff_x19 + 0x26c,0);
      uVar27 = FUN_05618860((long)unaff_x19 + 0x20c,0);
      uVar31 = FUN_0548db04(*(undefined8 *)System_Collections_Generic_List<BigInteger>_TypeInfo,
                            uVar31,*(undefined8 *)
                                    System_Collections_Generic_List<BaseInvokableCall>_TypeInfo,
                            uVar27,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*unaff_x29);
      }
      FUN_062244a4(uVar31,0);
    }
    if ((*(int *)((long)unaff_x19 + 0x4ac) == 0) ||
       ((*(int *)((long)unaff_x19 + 0x4ac) == 1 && (in_stack_0000133c == 3)))) {
      (**(code **)(*unaff_x19 + 0x958))();
      goto LAB_0603d144;
    }
    lVar26 = *unaff_x23;
    if (*(int *)(lVar26 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar26 = *unaff_x23;
    }
    plVar50 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
    lVar26 = **(long **)(lVar26 + 0xb8);
    if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
    iVar47 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38 + 0x54) << 2;
    if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x60), lVar26 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(int *)(*(long *)System_Collections_Generic_List<byte[]>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
    FUN_060a5124(lVar26 + 0x20,0,0);
    fStack00000000000000c0 = (float)FUN_031c4efc(0);
    iVar23 = (int)unaff_x19[0x53];
    lVar26 = unaff_x19[0xef];
    fStack00000000000000bc = fStack0000000000000104;
    if (iVar23 < 0x401) {
      if (iVar23 == 0x100) {
        if (*(int *)((long)unaff_x19 + 0x314) == 5) {
          if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
          if ((*(uint *)(lVar26 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
          if ((unaff_x19[0x75] == 0) || (lVar25 = *(long *)(unaff_x19[0x75] + 0x58), lVar25 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_0603fce4;
          fVar56 = *(float *)(lVar25 + (long)(int)uVar6 * 0x14 + 0x28);
        }
        else {
          if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
          if ((*(uint *)(lVar26 + 0x18) & 0xfffffffe) == 0) goto LAB_0603fce4;
          fVar56 = *(float *)((long)unaff_x19 + 0x4d4);
        }
        fStack00000000000000bc = *(float *)(lVar26 + 0x34);
        fVar60 = (0.0 - fVar56) - fVar72;
        fStack0000000000000104 = *(float *)(lVar26 + 0x2c);
        fVar56 = *(float *)(lVar26 + 0x30);
LAB_0603d53c:
        fStack0000000000000104 = fVar59 + 0.0 + fStack0000000000000104;
        fVar56 = fVar56 + fVar60;
      }
      else {
        if (iVar23 != 0x200) {
          if (iVar23 != 0x400) goto LAB_0603d550;
          if (*(int *)((long)unaff_x19 + 0x314) == 5) {
            if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
            if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
            if ((unaff_x19[0x75] == 0) || (lVar25 = *(long *)(unaff_x19[0x75] + 0x58), lVar25 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_0603fce4;
            fVar94 = *(float *)(lVar25 + (long)(int)uVar6 * 0x14 + 0x30);
          }
          else {
            if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
            if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
          }
          fStack00000000000000bc = *(float *)(lVar26 + 0x28);
          fVar60 = fVar60 + (0.0 - fVar94);
          fStack0000000000000104 = *(float *)(lVar26 + 0x20);
          fVar56 = *(float *)(lVar26 + 0x24);
          goto LAB_0603d53c;
        }
        if (*(int *)((long)unaff_x19 + 0x314) != 5) {
          if (lVar26 != 0) {
            if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
              fVar56 = *(float *)((long)unaff_x19 + 0x4d4);
              goto LAB_0603d470;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_0603fce4;
        if ((unaff_x19[0x75] == 0) || (lVar25 = *(long *)(unaff_x19[0x75] + 0x58), lVar25 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_0603fce4;
        lVar25 = lVar25 + (long)(int)uVar6 * 0x14;
        fStack00000000000000bc = (*(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x34)) * 0.5;
        fStack0000000000000104 =
             fVar59 + 0.0 +
             ((float)*(undefined8 *)(lVar26 + 0x20) + (float)*(undefined8 *)(lVar26 + 0x2c)) * 0.5;
        fVar56 = (0.0 - ((fVar72 + *(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x30)) - fVar60)
                        * 0.5) +
                 ((float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar26 + 0x2c) >> 0x20)) * 0.5;
      }
      fStack00000000000000bc = fStack00000000000000bc + 0.0;
      auVar76 = ZEXT416((uint)fVar56);
      fStack00000000000000c0 = fStack0000000000000104;
    }
    else if (iVar23 == 0x800) {
      if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
      if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_0603fce4;
      fStack0000000000000104 = (*(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x34)) * 0.5;
      fStack00000000000000c0 =
           ((float)*(undefined8 *)(lVar26 + 0x20) + (float)*(undefined8 *)(lVar26 + 0x2c)) * 0.5 +
           fVar59 + 0.0;
      fStack00000000000000bc = fStack0000000000000104 + 0.0;
      auVar76 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar26 + 0x2c) >> 0x20)) * 0.5 + 0.0))
      ;
    }
    else {
      if (iVar23 == 0x1000) {
        if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_0603fce4;
        fVar56 = *(float *)((long)unaff_x19 + 0x504);
        fVar94 = *(float *)((long)unaff_x19 + 0x4fc);
LAB_0603d470:
        fVar72 = fVar72 + fVar56 + fVar94;
      }
      else {
        if (iVar23 != 0x2000) goto LAB_0603d550;
        if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
        if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_0603fce4;
        fVar72 = *(float *)(unaff_x19 + 0x9b) - fVar72;
      }
      fStack0000000000000104 = fVar59 + 0.0;
      auVar76._0_4_ =
           ((float)*(undefined8 *)(lVar26 + 0x24) + (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 +
           (0.0 - (fVar72 - fVar60) * 0.5);
      auVar76._4_4_ =
           ((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0;
      auVar76._8_8_ = 0;
      fStack00000000000000c0 =
           fStack0000000000000104 + (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
      fStack00000000000000bc = auVar76._4_4_;
    }
LAB_0603d550:
    auVar69 = auVar76;
    fStack0000000000000120 = (float)FUN_031c4efc(0);
    auVar77 = auVar69;
    FUN_031c4efc(0);
    lVar26 = FUN_0604a24c();
    if (lVar26 != 0) {
      FUN_0627938c(lVar26,0);
      *(float *)((long)unaff_x19 + 0x704) = auVar77._0_4_;
      uStack0000000000000084 =
           FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      FUN_031c4f40(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
      }
      FUN_0603fd20(0);
      FUN_0605b508(&stack0x00001310,0x4000ffff,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar26 = unaff_x19[0x75];
      if (lVar26 != 0) {
        iVar23 = *(int *)((long)unaff_x19 + 0x4ac);
        if (iVar23 < 1) {
          iStack00000000000000ec = 0;
          iVar24 = 0;
          goto LAB_0603f770;
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 != 0) {
          bVar10 = false;
          bVar12 = false;
          fVar58 = 0.0;
          bVar9 = false;
          iStack00000000000000ec = 0;
          uVar17 = 0;
          uStack000000000000004c = 0;
          uVar16 = 0;
          lVar25 = lVar26 + 0x20;
          bVar8 = false;
          iStack0000000000000060 = 0;
          fStack0000000000000190 = auVar69._0_4_;
          fStack0000000000000138 =
               *(float *)(*(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo
                                   + 0xb8) + 0x1730);
          fStack0000000000000124 = fStack0000000000000190;
          fStack00000000000001b0 = auVar76._0_4_;
          fStack0000000000000058 = 0.0;
          fStack0000000000000134 = 0.0;
          fStack000000000000016c = 0.0;
          fVar57 = 0.0;
          fStack000000000000006c = in_stack_000000e8;
          fVar56 = 0.0;
          fStack00000000000000dc = in_stack_000000e8;
          fStack00000000000000e0 = in_stack_00000110._4_4_;
          fStack0000000000000064 = in_stack_00000110._4_4_;
          uStack0000000000000068 = in_stack_000000d8;
          fStack0000000000000094 = in_stack_000000e8;
          fStack0000000000000098 = in_stack_00000110._4_4_;
          uVar18 = 0;
          goto LAB_0603d6e0;
        }
      }
    }
    goto thunk_FUN_02e3ccc4;
  }
  if (*(uint *)(lVar26 + 0x18) <= uVar92) goto LAB_0603fce4;
  uVar19 = *(uint *)(lVar26 + (long)(int)uVar92 * 0x10 + 0x24);
  if (uVar19 == 0) goto LAB_0603cfc8;
  if (5 < iVar47) {
    uVar31 = Oculus_Platform_CAPI__ovr_DestinationArray_HasNextPage(&stack0x0000133c,0);
    uVar27 = FUN_05603500(&stack0x00001308,0);
    uVar31 = FUN_0548db04(*(undefined8 *)System_Collections_Generic_List<BaseInputModule>_TypeInfo,
                          uVar31,*(undefined8 *)
                                  System_Collections_Generic_List<BaseRaycaster>_TypeInfo,uVar27,0);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02e9a04c(*unaff_x29);
    }
    FUN_06224c0c(uVar31,0);
    in_stack_00001328 = CONCAT44(3,*(undefined4 *)((long)unaff_x19 + 0x4ac));
  }
  if (uVar19 == 0x1a) goto LAB_06038edc;
  if ((uVar19 == 0x3c) && (*(char *)((long)unaff_x19 + 0x342) != '\0')) {
    *(undefined1 *)((long)unaff_x19 + 0x471) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
    uVar28 = FUN_060872e4();
    if (((uVar28 & 1) != 0) && (uVar92 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x664) == 0))
    goto LAB_06038edc;
  }
  else {
    if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
    *(undefined4 *)((long)unaff_x19 + 0x664) = *(undefined4 *)(lVar26 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + 0x50);
    unaff_x19[0x20] = *(long *)(lVar26 + 0x40);
    thunk_FUN_02ee2be8(unaff_x19 + 0x20);
  }
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar3 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_0603fce4;
  lVar25 = lVar26 + 0x20;
  uVar93 = (uint)in_stack_00001328;
  lVar44 = unaff_x19[0x24];
  cVar33 = *(char *)(lVar25 + (long)(int)uVar3 * 0x178 + 0x34);
  *(undefined1 *)((long)unaff_x19 + 0x471) = 0;
  uVar20 = uVar3;
  if (uVar93 == uVar3) {
    uVar19 = (uint)((ulong)in_stack_00001328 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x664) = 0;
    if (uVar19 == 0x2026) {
      *(long *)(lVar25 + (long)(int)uVar3 * 0x178 + 0x10) = unaff_x19[0xce];
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
      *(long *)(lVar26 + 0x40) = unaff_x19[0xcf];
      *(undefined4 *)(lVar26 + 0x20) = 0;
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      *(long *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x48) =
           unaff_x19[0xd0];
      thunk_FUN_02ee2be8();
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      *(int *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x50) =
           (int)unaff_x19[0xd1];
      puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
      lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar26 = *(long *)puVar11;
      }
      lVar26 = **(long **)(lVar26 + 0xb8);
      if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) goto LAB_0603fce4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x38;
      *(int *)(lVar26 + 0x54) = *(int *)(lVar26 + 0x54) + 1;
      *(undefined1 *)(unaff_x19 + 0x66) = 1;
      in_stack_00001328 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4ac) + 1);
      uVar20 = *(uint *)((long)unaff_x19 + 0x4ac);
    }
    else if (uVar19 == 3) {
      if ((unaff_x19[0x20] == 0) || (lVar29 = FUN_0606364c(unaff_x19[0x20],0), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar31 = FUN_04e87e04(lVar29,3,*(undefined8 *)
                                      System_Collections_Generic_List<ValueTuple<int,_RichTextTagParser_TagType,_string>>_TypeInfo
                           );
      if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_0603fce4;
      *(undefined8 *)(lVar25 + (long)(int)uVar3 * 0x178 + 0x10) = uVar31;
      thunk_FUN_02ee2be8();
      *(undefined1 *)(unaff_x19 + 0x66) = 1;
      uVar20 = *(uint *)((long)unaff_x19 + 0x4ac);
    }
  }
  unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (((int)uVar20 < *(int *)((long)unaff_x19 + 0x364)) && (uVar19 != 3)) {
    if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_0603fce4;
    lVar26 = lVar26 + (long)(int)uVar20 * 0x178;
    *(undefined1 *)(lVar26 + 400) = 0;
    *(undefined2 *)(lVar26 + 0x24) = 0x200b;
    *(undefined4 *)(lVar26 + 0x5c) = 0;
    *(uint *)((long)unaff_x19 + 0x4ac) = uVar20 + 1;
    goto LAB_06038edc;
  }
  fVar74 = 1.0;
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    uVar20 = *(uint *)((long)unaff_x19 + 0x284);
    if ((uVar20 >> 4 & 1) == 0) {
      if ((uVar20 >> 3 & 1) == 0) {
        if ((uVar20 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar28 = FUN_055805c8(uVar19,0);
          if ((uVar28 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar19 = FUN_05580850(uVar19,0);
            fVar74 = fVar83;
            goto LAB_0603901c;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar28 = FUN_05580528(uVar19,0);
        if ((uVar28 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar19 = FUN_055809c8(uVar19,0);
          goto LAB_0603901c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar28 = FUN_055805c8(uVar19,0);
      if ((uVar28 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar19 = FUN_05580850(uVar19,0);
LAB_0603901c:
        uVar19 = uVar19 & 0xffff;
      }
    }
  }
  if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
  memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
  if (*(int *)((long)unaff_x19 + 0x664) == 1) {
    lVar26 = FUN_060800c8();
    if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    plVar53 = *(long **)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x30);
    unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (plVar53 == (long *)0x0) goto LAB_06038edc;
    bVar13 = *(byte *)(*(long *)System_Collections_Generic_List<uint[]>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar53 + 0x130) < bVar13) ||
       (*(long *)(*(long *)(*plVar53 + 200) + (ulong)bVar13 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<uint[]>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3d044(plVar53);
    }
    plVar35 = (long *)plVar53[3];
    if (plVar35 == (long *)0x0) {
      plVar35 = (long *)0x0;
      *_fStack00000000000000e0 = 0;
    }
    else {
      lVar26 = *(long *)System_Collections_Generic_List<Type[]>_TypeInfo;
      bVar13 = *(byte *)(lVar26 + 0x130);
      if (*(byte *)(*plVar35 + 0x130) < bVar13) {
        plVar43 = (long *)0x0;
      }
      else {
        plVar43 = plVar35;
        if (*(long *)(*(long *)(*plVar35 + 200) + (ulong)bVar13 * 8 + -8) != lVar26) {
          plVar43 = (long *)0x0;
        }
      }
      *_fStack00000000000000e0 = (long)plVar43;
      if (*(byte *)(*plVar35 + 0x130) < bVar13) {
        plVar35 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar35 + 200) + (ulong)bVar13 * 8 + -8) != lVar26) {
        plVar35 = (long *)0x0;
      }
    }
    thunk_FUN_02ee2be8(_fStack00000000000000e0,plVar35);
    lVar26 = plVar53[5];
    *(int *)((long)unaff_x19 + 0x6c4) = (int)lVar26;
    puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    if (uVar19 == 0x3c) {
      uVar19 = (int)lVar26 + 0xe000;
    }
    else {
      lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar26 = *(long *)puVar11;
      }
      *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
    }
    fVar85 = *pfVar2;
    fVar57 = (float)FUN_0630f888(&stack0x000012a0,0);
    fVar62 = (float)FUN_0630f890(&stack0x000012a0,0);
    if (*_fStack00000000000000e0 == 0) goto thunk_FUN_02e3ccc4;
    fVar62 = in_stack_00000118 * (fVar85 / fVar57) * fVar62;
    memmove(&stack0x00001200,(void *)(*_fStack00000000000000e0 + 0x28),0x60);
    fVar57 = (float)FUN_0630f888(&stack0x00001200,0);
    fVar85 = *pfVar2;
    if (fVar57 <= 0.0) {
      fVar57 = (float)FUN_0630f888(&stack0x000012a0,0);
      fVar63 = (float)FUN_0630f890(&stack0x000012a0,0);
      fVar64 = (float)FUN_0630f8b8(&stack0x000012a0,0);
      if (plVar53[4] == 0) goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&stack0x00001340,plVar53[4],0);
      *(long *)(unaff_x28 + 0x38) = SUB168(*(undefined1 (*) [16])(unaff_x28 + 400),8);
      *(long *)(unaff_x28 + 0x30) = SUB168(*(undefined1 (*) [16])(unaff_x28 + 400),0);
      fVar86 = (float)FUN_0630fb7c(&stack0x000011e0,0);
      if (plVar53[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar65 = *(float *)((long)plVar53 + 0x2c);
      fVar85 = in_stack_00000118 * (fVar85 / fVar57) * fVar63;
      fVar57 = (float)FUN_0630fd88(plVar53[4],0);
      fVar57 = fVar85 * (fVar64 / fVar86) * fVar65 * fVar57;
      fStack0000000000000138 = 0.0;
      if (fVar57 != 0.0) {
        fStack0000000000000138 = fVar85 / fVar57;
      }
      fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
      fStack000000000000013c = fStack000000000000013c * fStack0000000000000138;
      fVar85 = (float)FUN_0630f8e0(&stack0x000012a0,0);
      fVar63 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
      fStack000000000000017c = fVar62 * fVar85 * fVar63 * fStack000000000000017c;
      fVar62 = (float)FUN_0630f8e8(&stack0x000012a0,0);
      fStack0000000000000138 = fStack0000000000000138 * fVar62;
    }
    else {
      fVar57 = (float)FUN_0630f888(&stack0x00001200,0);
      fVar63 = (float)FUN_0630f890(&stack0x00001200,0);
      if (plVar53[4] == 0) goto thunk_FUN_02e3ccc4;
      fVar86 = *(float *)((long)plVar53 + 0x2c);
      fVar64 = (float)FUN_0630fd88(plVar53[4],0);
      fVar57 = in_stack_00000118 * (fVar85 / fVar57) * fVar63 * fVar86 * fVar64;
      fStack000000000000013c = (float)FUN_0630f8b8(&stack0x00001200,0);
      fVar85 = (float)FUN_0630f8e0(&stack0x00001200,0);
      fVar63 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x00001200,0);
      fStack000000000000017c = fVar62 * fVar85 * fVar63 * fStack000000000000017c;
      fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x00001200,0);
    }
    unaff_x19[0xcd] = (long)plVar53;
    thunk_FUN_02ee2be8(plVar50,plVar53);
    if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
    goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
    *(long *)(lVar26 + 0x40) = unaff_x19[0x20];
    *(undefined4 *)(lVar26 + 0x20) = 1;
    *(float *)(lVar26 + 0x15c) = fVar57;
    thunk_FUN_02ee2be8();
    lVar26 = unaff_x19[0x75];
    if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
    fVar62 = 0.0;
    *(int *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x50) =
         (int)unaff_x19[0x24];
    *(int *)(unaff_x19 + 0x24) = (int)lVar44;
LAB_06039744:
    fVar85 = 0.0;
    if (uVar19 != 3 && uVar19 != 0xad) {
      fVar85 = fVar57;
    }
  }
  else {
    lVar26 = unaff_x19[0x75];
    if (*(int *)((long)unaff_x19 + 0x664) == 0) {
      if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      *plVar50 = *(long *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x30);
      thunk_FUN_02ee2be8(plVar50);
      unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*plVar50 == 0) goto LAB_06038edc;
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      unaff_x19[0x20] =
           *(long *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x40);
      thunk_FUN_02ee2be8(unaff_x19 + 0x20);
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      unaff_x19[0x23] =
           *(long *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x48);
      thunk_FUN_02ee2be8(unaff_x19 + 0x23);
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
      uVar20 = *(uint *)(lVar26 + 0x18);
      if (uVar20 <= uVar21) goto LAB_0603fce4;
      *(undefined4 *)(unaff_x19 + 0x24) =
           *(undefined4 *)(lVar26 + 0x20 + (long)(int)uVar21 * 0x178 + 0x30);
      pfVar36 = pfVar2;
      if (uVar93 == uVar3) {
        lVar25 = unaff_x19[0x92];
        if (lVar25 == 0) goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar25 + 0x18) <= uVar92) goto LAB_0603fce4;
        if ((*(int *)(lVar25 + (long)(int)uVar92 * 0x10 + 0x24) == 10) &&
           (uVar21 != *(uint *)(unaff_x19 + 0x96))) {
          if (uVar20 <= uVar21 - 1) goto LAB_0603fce4;
          pfVar36 = (float *)(lVar26 + 0x20 + (long)(int)(uVar21 - 1) * 0x178 + 0x38);
        }
      }
      fVar63 = *pfVar36;
      fVar62 = (float)FUN_0630f888(&stack0x000012a0,0);
      fVar85 = (float)FUN_0630f890(&stack0x000012a0,0);
      if (uVar93 == uVar3) {
        fStack0000000000000138 = 0.0;
        fStack000000000000013c = 0.0;
        if (uVar19 != 0x2026) goto LAB_060392a8;
      }
      else {
LAB_060392a8:
        fStack000000000000013c = (float)FUN_0630f8b8(&stack0x000012a0,0);
        fStack0000000000000138 = (float)FUN_0630f8e8(&stack0x000012a0,0);
      }
      lVar26 = unaff_x19[0xcd];
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar86 = *(float *)((long)unaff_x19 + 0x444);
      fVar65 = *(float *)(lVar26 + 0x2c);
      fVar57 = (float)FUN_0630fd88(*(long *)(lVar26 + 0x20),0);
      fVar64 = (float)FUN_0630f8e0(&stack0x000012a0,0);
      fVar80 = *(float *)((long)unaff_x19 + 0x444);
      fStack000000000000017c = (float)FUN_0630f890(&stack0x000012a0,0);
      lVar26 = unaff_x19[0x75];
      if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
      lVar25 = lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
      *(undefined4 *)(lVar25 + 0x20) = 0;
      fVar62 = in_stack_00000118 * ((fVar74 * fVar63) / fVar62) * fVar85;
      fVar57 = fVar62 * fVar86 * fVar65 * fVar57;
      fStack000000000000017c = fVar62 * fVar64 * fVar80 * fStack000000000000017c;
      *(float *)(lVar25 + 0x15c) = fVar57;
      uVar20 = *(uint *)(unaff_x19 + 0x24);
      if (uVar20 == 0) {
        fVar62 = *(float *)(unaff_x19 + 199);
        goto LAB_06039744;
      }
      lVar25 = unaff_x19[0xe5];
      if (lVar25 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_0603fce4;
      lVar25 = *(long *)(lVar25 + (long)(int)uVar20 * 8 + 0x20);
      if (lVar25 == 0) goto thunk_FUN_02e3ccc4;
      fVar62 = *(float *)(lVar25 + 0x54);
      goto LAB_06039744;
    }
    fVar85 = 0.0;
    if (uVar19 != 3 && uVar19 != 0xad) {
      fVar85 = fVar57;
    }
    fStack000000000000017c = 0.0;
    fStack000000000000013c = 0.0;
    fStack0000000000000138 = 0.0;
    if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
  }
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(short *)(lVar26 + 0x24) = (short)uVar19;
  *(int *)(lVar26 + 0x58) = (int)unaff_x19[0x42];
  *(int *)(lVar26 + 0x160) = (int)unaff_x19[0xa1];
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  *(int *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x164) =
       (int)unaff_x19[0x2b];
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  *(undefined4 *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 0x16c) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  auVar76 = *(undefined1 (*) [16])(unaff_x19 + 0x2c);
  *(int *)(lVar26 + 0x188) = (int)unaff_x19[0x2e];
  *(long *)(lVar26 + 0x180) = auVar76._8_8_;
  *(long *)(lVar26 + 0x178) = auVar76._0_8_;
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  lVar25 = *(long *)(lVar26 + 0x38);
  *(undefined4 *)(lVar26 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
  if (lVar25 == 0) {
    if ((*plVar50 == 0) || (lVar26 = *(long *)(*plVar50 + 0x20), lVar26 == 0))
    goto thunk_FUN_02e3ccc4;
    FUN_0630fd4c(&stack0x00001340,lVar26,0);
    in_stack_000005c0 = *(undefined8 *)(unaff_x28 + 400);
    in_stack_000005c8 = *(undefined8 *)(unaff_x28 + 0x198);
  }
  else {
    FUN_0630fd4c(&stack0x000005c0,lVar25,0);
  }
  *(undefined8 *)(unaff_x28 + 0xd8) = in_stack_000005c8;
  *(undefined8 *)(unaff_x28 + 0xd0) = in_stack_000005c0;
  if (uVar19 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar20 = FUN_0557df5c(uVar19,0);
    uVar20 = uVar20 & 1;
  }
  else {
    uVar20 = 0;
  }
  fVar63 = *(float *)(unaff_x19 + 0x5a);
  if (((uVar16 & 1) != 0) && (*(int *)((long)unaff_x19 + 0x664) == 0)) {
    if (*plVar50 == 0) goto thunk_FUN_02e3ccc4;
    iVar23 = *(int *)((long)unaff_x19 + 0x4ac);
    uVar21 = *(uint *)(*plVar50 + 0x28);
    if (iVar23 < (int)uVar5) {
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar22 = iVar23 + 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar22) goto LAB_0603fce4;
      if (*(int *)(lVar26 + 0x20 + (long)(int)uVar22 * 0x178) == 0) {
        lVar26 = *(long *)(lVar26 + 0x20 + (long)(int)uVar22 * 0x178 + 0x10);
        if ((((lVar26 == 0) || (unaff_x19[0x20] == 0)) ||
            (lVar25 = *(long *)(unaff_x19[0x20] + 0x178), lVar25 == 0)) ||
           (lVar25 = *(long *)(lVar25 + 0x40), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
        uVar28 = FUN_04e75974(lVar25,uVar21 | *(int *)(lVar26 + 0x28) << 0x10,&stack0x000011b0,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        if ((uVar28 & 1) != 0) {
          FUN_0631443c(&stack0x00001340,&stack0x000011b0,0);
          FUN_06314290(&stack0x00001190,0);
          uVar28 = FUN_06314478(&stack0x000011b0,0);
          if ((uVar28 & 0x100) != 0) {
            fVar63 = 0.0;
          }
        }
      }
      iVar23 = *(int *)((long)unaff_x19 + 0x4ac);
    }
    if (0 < iVar23) {
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= iVar23 - 1U) goto LAB_0603fce4;
      lVar26 = *(long *)(lVar26 + (ulong)(iVar23 - 1U) * 0x178 + 0x30);
      if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
      uVar22 = *(uint *)(lVar26 + 0x28);
      lVar26 = FUN_060800c8();
      if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar39 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_0603fce4;
      if (*(int *)(lVar26 + (long)(int)uVar39 * 0x178 + 0x20) == 0) {
        if (((unaff_x19[0x20] == 0) || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0))
           || (lVar26 = *(long *)(lVar26 + 0x40), lVar26 == 0)) goto thunk_FUN_02e3ccc4;
        uVar28 = FUN_04e75974(lVar26,uVar22 | uVar21 << 0x10,&stack0x000011b0,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<string,_Type>>_TypeInfo);
        if ((uVar28 & 1) != 0) {
          FUN_06314464(&stack0x00001340,&stack0x000011b0,0);
          FUN_06314290(&stack0x00001190,0);
          FUN_063140f0(0);
          uVar28 = FUN_06314478(&stack0x000011b0,0);
          if ((uVar28 & 0x100) != 0) {
            fVar63 = 0.0;
          }
        }
      }
    }
  }
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
  uVar71 = FUN_063140cc(&stack0x00001270,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_0603fce4;
  *(undefined4 *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x154) = uVar71;
  if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) == 0)
  {
    thunk_FUN_02e9a04c();
  }
  uVar28 = FUN_060b1c00(uVar19,0);
  uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
  uVar46 = (ulong)uVar21;
  if ((uVar28 & 1) == 0) {
    if (0 < (int)uVar21) {
      if ((((uVar17 & 1) == 0) ||
          (uVar22 = *(uint *)((long)unaff_x19 + 0x334), uVar22 == 0x80000000)) ||
         (uVar22 != uVar21 - 1)) {
        if ((uVar18 & 1) == 0) {
          bVar12 = false;
        }
        else {
          lVar26 = uVar46 * 0x178 + 0x144;
          uVar51 = uVar46;
          do {
            uVar51 = uVar51 - 1;
            iVar23 = (int)uVar46;
            uVar21 = iVar23 - 1;
            uVar46 = (ulong)uVar21;
            if ((iVar23 < 1) || (uVar51 == *(uint *)((long)unaff_x19 + 0x334))) {
              bVar12 = false;
              goto LAB_06039e54;
            }
            if ((unaff_x19[0x75] == 0) || (lVar25 = *(long *)(unaff_x19[0x75] + 0x38), lVar25 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar25 + 0x18) <= uVar51) goto LAB_0603fce4;
            lVar25 = *(long *)(lVar25 + lVar26 + -0x28c);
            if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x20), lVar25 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar22 = FUN_0630fd3c(lVar25,0);
            if ((*plVar50 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar25 = *(long *)(unaff_x19[0x20] + 0x178), lVar25 == 0)
                 ) || (lVar25 = *(long *)(lVar25 + 0x50), lVar25 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar30 = FUN_04e82f84(lVar25,uVar22 | *(int *)(*plVar50 + 0x28) << 0x10,&stack0x00001160
                                  ,*(undefined8 *)
                                    System_Collections_Generic_List<ValueTuple<Type,_NetworkInputWeavedAttribute>>_TypeInfo
                                 );
            lVar26 = lVar26 + -0x178;
          } while ((uVar30 & 1) == 0);
          if ((unaff_x19[0x75] == 0) || (lVar25 = *(long *)(unaff_x19[0x75] + 0x38), lVar25 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_0603fce4;
          FUN_063140b4(((*(float *)(lVar25 + lVar26 + -0xc) - *(float *)(unaff_x19 + 0xcc)) / fVar85
                       + in_stack_00001164) - in_stack_00001170,in_stack_00001164,in_stack_00001170,
                       &stack0x00001270,0);
          FUN_063140c4(&stack0x00001270,0);
          fVar63 = 0.0;
          bVar12 = true;
        }
LAB_06039e54:
        if ((uVar17 & 1) != 0) {
          uVar21 = *(uint *)((long)unaff_x19 + 0x334);
          if (uVar21 == 0x80000000) {
            bVar12 = true;
          }
          if (!bVar12) {
            if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_0603fce4;
            lVar26 = *(long *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x30);
            if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x20), lVar26 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar21 = FUN_0630fd3c(lVar26,0);
            if ((*plVar50 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0)
                 ) || (lVar26 = *(long *)(lVar26 + 0x48), lVar26 == 0)))) goto thunk_FUN_02e3ccc4;
            uVar46 = FUN_04e7c424(lVar26,uVar21 | *(int *)(*plVar50 + 0x28) << 0x10,&stack0x00001148
                                  ,*(undefined8 *)
                                    System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                                 );
            if ((uVar46 & 1) != 0) {
              if ((unaff_x19[0x75] != 0) &&
                 (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 != 0)) {
                if (*(uint *)((long)unaff_x19 + 0x334) < *(uint *)(lVar26 + 0x18)) {
                  FUN_063140b4((in_stack_0000114c +
                               (*(float *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) *
                                                    0x178 + 0x138) - *(float *)(unaff_x19 + 0xcc)) /
                               fVar85) - in_stack_00001158,in_stack_0000114c,in_stack_00001158,
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
        if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar26 + 0x18) <= uVar22) goto LAB_0603fce4;
        lVar26 = *(long *)(lVar26 + (long)(int)uVar22 * 0x178 + 0x30);
        if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x20), lVar26 == 0))
        goto thunk_FUN_02e3ccc4;
        uVar21 = FUN_0630fd3c(lVar26,0);
        if ((*plVar50 == 0) ||
           (((unaff_x19[0x20] == 0 || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0)) ||
            (lVar26 = *(long *)(lVar26 + 0x48), lVar26 == 0)))) goto thunk_FUN_02e3ccc4;
        uVar46 = FUN_04e7c424(lVar26,uVar21 | *(int *)(*plVar50 + 0x28) << 0x10,&stack0x00001178,
                              *(undefined8 *)
                               System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_TypeInfo
                             );
        if ((uVar46 & 1) != 0) {
          if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
          goto thunk_FUN_02e3ccc4;
          if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x334)) goto LAB_0603fce4;
          FUN_063140b4((in_stack_0000117c +
                       (*(float *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x334) * 0x178 +
                                  0x138) - *(float *)(unaff_x19 + 0xcc)) / fVar85) -
                       in_stack_00001188,in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_06039f50:
          FUN_063140c4(&stack0x00001270,0);
          fVar63 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)((long)unaff_x19 + 0x334) = uVar21;
  }
  fVar64 = (float)FUN_063140bc(&stack0x00001270,0);
  fVar86 = (float)FUN_063140bc(&stack0x00001270,0);
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar80 = *(float *)(unaff_x19 + 0xcc);
    fVar65 = (float)FUN_0630fb94(&stack0x00001280,0);
    fVar80 = fVar80 - fVar85 * *(float *)(unaff_x19 + 0x5c) *
                               fVar65 * (1.0 - *(float *)((long)unaff_x19 + 0x304));
    *(float *)(unaff_x19 + 0xcc) = fVar80;
    if ((uVar20 != 0) || (uVar19 == 0x200b)) {
      *(float *)(unaff_x19 + 0xcc) = fVar80 - fVar58 * *(float *)((long)unaff_x19 + 0x2e4);
    }
  }
  fVar65 = *(float *)(unaff_x19 + 0x5b);
  fVar80 = 0.0;
  fStack000000000000016c = 0.0;
  if (fVar65 != 0.0) {
    if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < uVar19)) ||
       (fVar80 = 0.25, (1L << ((ulong)uVar19 & 0x3f) & 0x400500000000000U) == 0)) {
      fVar80 = 0.5;
    }
    fVar66 = (float)FUN_0630fb74(&stack0x00001280,0);
    fVar67 = (float)FUN_0630fb84(&stack0x00001280,0);
    fVar80 = *(float *)(unaff_x19 + 0x5c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
             (fVar65 * fVar80 - fVar85 * (fVar66 * 0.5 + fVar67));
    *(float *)(unaff_x19 + 0xcc) = fVar80 + *(float *)(unaff_x19 + 0xcc);
  }
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    fVar65 = 0.0;
    if ((cVar33 == '\0') && ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fVar65 = *(float *)(unaff_x19[0x20] + 0x1ac);
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    lVar26 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar46 = FUN_06267b6c(lVar26,0,0);
    fStack000000000000016c = 0.0;
    if ((uVar46 & 1) != 0) {
      lVar26 = unaff_x19[0x23];
      if (*(int *)(*(long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      plVar53 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
      if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
      uVar46 = FUN_06238d70(lVar26,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo
                                              + 0xb8) + 0x6c),0);
      if ((uVar46 & 1) != 0) {
        lVar26 = unaff_x19[0x23];
        if (*(int *)(*plVar53 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          plVar53 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
        }
        if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
        uVar46 = FUN_06238d70(lVar26,*(undefined4 *)(*(long *)(*plVar53 + 0xb8) + 0xe4),0);
        if ((uVar46 & 1) != 0) {
          lVar26 = unaff_x19[0x23];
          if (*(int *)(*plVar53 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            plVar53 = (long *)System_Collections_Generic_List<WeakReference<IPool>>_TypeInfo;
          }
          if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
          fVar66 = (float)thunk_FUN_0623b08c(lVar26,*(undefined4 *)
                                                     (*(long *)(*plVar53 + 0xb8) + 0x6c),0);
          if (unaff_x19[0x23] == 0) goto thunk_FUN_02e3ccc4;
          fStack000000000000016c =
               (float)thunk_FUN_0623b08c(unaff_x19[0x23],
                                         *(undefined4 *)(*(long *)(*plVar53 + 0xb8) + 0xe4),0);
          lVar26 = unaff_x19[0x20];
          if (bVar12) {
            if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
            pfVar36 = (float *)(lVar26 + 0x1a0);
          }
          else {
            if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
            pfVar36 = (float *)(lVar26 + 0x1a8);
          }
          fStack000000000000016c = fStack000000000000016c * fVar66 * *pfVar36 * 0.25;
          if (fVar66 < fVar62 + fStack000000000000016c) {
            fVar62 = fVar66 - fStack000000000000016c;
          }
        }
      }
    }
  }
  else {
    fVar65 = 0.0;
  }
  fVar81 = *(float *)(unaff_x19 + 0xcc);
  fVar66 = (float)FUN_0630fb84(&stack0x00001280,0);
  fVar88 = *(float *)((long)unaff_x19 + 0x484);
  fVar67 = (float)FUN_063140ac(&stack0x00001270,0);
  fVar81 = fVar81 + *(float *)(unaff_x19 + 0x5c) *
                    (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                    fVar85 * (fVar67 + ((fVar66 * fVar88 - fVar62) - fStack000000000000016c));
  fVar66 = (float)FUN_0630fb8c(&stack0x00001280,0);
  fVar67 = (float)FUN_063140bc(&stack0x00001270,0);
  fStack0000000000000180 =
       *(float *)((long)unaff_x19 + 0x63c) +
       ((fStack000000000000017c + fVar85 * (fVar62 + fVar66 + fVar67)) -
       *(float *)((long)unaff_x19 + 0x4f4));
  fVar66 = (float)FUN_0630fb7c(&stack0x00001280,0);
  fVar66 = fStack0000000000000180 - fVar85 * (fVar62 + fVar62 + fVar66);
  fVar67 = (float)FUN_0630fb74(&stack0x00001280,0);
  fVar67 = fVar81 + *(float *)(unaff_x19 + 0x5c) *
                    (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
                    fVar85 * (fStack000000000000016c + fStack000000000000016c +
                             fVar62 + fVar62 + fVar67 * *(float *)((long)unaff_x19 + 0x484));
  fVar88 = fVar81;
  fVar82 = fVar67;
  if (((*(int *)((long)unaff_x19 + 0x664) == 0) && (cVar33 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    lVar26 = unaff_x19[0xc2];
    fVar88 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar70 = (float)FUN_0630f8e0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar89 = *(float *)((long)unaff_x19 + 0x444);
    fVar90 = *(float *)((long)unaff_x19 + 0x63c);
    fVar82 = (float)(int)lVar26 * fVar87;
    fVar78 = (float)FUN_0630f890(unaff_x19[0x20] + 0x28,0);
    fVar78 = fVar78 * fVar89 * (fVar88 - (fVar70 + fVar90)) * 0.5;
    fVar88 = (float)FUN_0630fb8c(&stack0x00001280,0);
    fVar90 = fVar82 * fVar85 * ((fStack000000000000016c + fVar62 + fVar88) - fVar78);
    fVar70 = (float)FUN_0630fb8c(&stack0x00001280,0);
    fVar89 = (float)FUN_0630fb7c(&stack0x00001280,0);
    fStack0000000000000180 = fStack0000000000000180 + 0.0;
    fVar66 = fVar66 + 0.0;
    fVar88 = fVar81 + fVar90;
    fVar82 = fVar82 * fVar85 * ((((fVar70 - fVar89) - fVar62) - fStack000000000000016c) - fVar78);
    fVar81 = fVar81 + fVar82;
    fVar82 = fVar67 + fVar82;
    fVar67 = fVar67 + fVar90;
  }
  uVar27 = *(undefined8 *)((long)unaff_x19 + 0x474);
  uVar31 = *(undefined8 *)((long)unaff_x19 + 0x47c);
  if (DAT_06e84e41 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06a2f028);
    DAT_06e84e41 = '\x01';
  }
  uVar68 = **(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8);
  uVar75 = (*(undefined8 **)(*(long *)PTR_DAT_06a2f028 + 0xb8))[1];
  if (DAT_01317bfc <
      (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar75 >> 0x20) +
      (float)uVar31 * (float)uVar75 +
      (float)uVar27 * (float)uVar68 +
      (float)((ulong)uVar27 >> 0x20) * (float)((ulong)uVar68 >> 0x20)) {
    fVar70 = 0.0;
    auVar77._4_12_ = SUB1612(ZEXT816(0),4);
    auVar77._0_4_ = fVar66;
    uVar27 = auVar77._0_8_;
    uVar46 = (ulong)(uint)fStack0000000000000180;
    uVar31 = uVar27;
  }
  else {
    FUN_062541ec(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],
                 *(undefined4 *)((long)unaff_x19 + 0x47c),(int)unaff_x19[0x90],0);
    fVar82 = (fVar67 + fVar81) * 0.5;
    fVar78 = (fVar66 + fStack0000000000000180) * 0.5;
    fVar67 = 0.0;
    auVar76 = ZEXT416((uint)(fStack0000000000000180 - fVar78));
    fVar88 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar88 = fVar82 + fVar88;
    fVar89 = 0.0;
    uVar46 = CONCAT44(fVar67 + 0.0,fVar78 + auVar76._0_4_);
    auVar76 = ZEXT416((uint)(fVar66 - fVar78));
    fVar81 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar81 = fVar82 + fVar81;
    fVar70 = 0.0;
    uVar27 = CONCAT44(fVar89 + 0.0,fVar78 + auVar76._0_4_);
    auVar76 = ZEXT416((uint)(fStack0000000000000180 - fVar78));
    fVar67 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar67 = fVar82 + fVar67;
    fVar89 = 0.0;
    fStack0000000000000180 = fVar78 + auVar76._0_4_;
    fVar70 = fVar70 + 0.0;
    auVar76 = ZEXT416((uint)(fVar66 - fVar78));
    fVar66 = (float)FUN_062540ec(&stack0x00001100,0);
    fVar82 = fVar82 + fVar66;
    uVar31 = CONCAT44(fVar89 + 0.0,fVar78 + auVar76._0_4_);
  }
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar26 + 0x114) = fVar81;
  *(undefined8 *)(lVar26 + 0x118) = uVar27;
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar26 + 0x108) = fVar88;
  *(ulong *)(lVar26 + 0x10c) = uVar46;
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar26 + 0x120) = fVar67;
  *(ulong *)(lVar26 + 0x124) = CONCAT44(fVar70,fStack0000000000000180);
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar26 = lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  *(float *)(lVar26 + 300) = fVar82;
  *(undefined8 *)(lVar26 + 0x130) = uVar31;
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
  fVar88 = *(float *)(unaff_x19 + 0xcc);
  fVar66 = (float)FUN_063140ac(&stack0x00001270,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_0603fce4;
  *(float *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x138) = fVar88 + fVar85 * fVar66;
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
  fVar88 = *(float *)((long)unaff_x19 + 0x4f4);
  fVar82 = *(float *)((long)unaff_x19 + 0x63c);
  fVar66 = (float)FUN_063140bc(&stack0x00001270,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_0603fce4;
  *(float *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x144) =
       (fStack000000000000017c - fVar88) + fVar82 + fVar85 * fVar66;
  if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar21 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_0603fce4;
  lVar26 = lVar26 + 0x20;
  *(float *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x138) =
       (fVar67 - fVar81) / ((float)uVar46 - (float)uVar27);
  fVar64 = fVar85 * (fStack000000000000013c + fVar64);
  if (*(int *)((long)unaff_x19 + 0x664) == 0) {
    fVar64 = fVar64 / fVar74;
    fVar86 = (fVar85 * (fStack0000000000000138 + fVar86)) / fVar74;
  }
  else {
    fVar86 = fVar85 * (fStack0000000000000138 + fVar86);
  }
  fVar66 = *(float *)((long)unaff_x19 + 0x63c);
  uVar22 = *(uint *)(unaff_x19 + 0x96);
  if ((uVar20 == 0) || (uVar21 == uVar22)) {
    fVar64 = fVar64 + fVar66;
    fVar86 = fVar86 + fVar66;
    fVar67 = fVar64;
    fVar88 = fVar86;
    if (fVar66 != 0.0) {
      fVar67 = (fVar64 - fVar66) / *(float *)((long)unaff_x19 + 0x444);
      fVar88 = (fVar86 - fVar66) / *(float *)((long)unaff_x19 + 0x444);
      if (fVar67 <= fVar64) {
        fVar67 = fVar64;
      }
      if (fVar86 <= fVar88) {
        fVar88 = fVar86;
      }
    }
    lVar26 = lVar26 + (long)(int)uVar21 * 0x178;
    fVar66 = fVar67;
    if (fVar67 <= *(float *)((long)unaff_x19 + 0x4e4)) {
      fVar66 = *(float *)((long)unaff_x19 + 0x4e4);
    }
    fVar82 = fVar88;
    if (*(float *)(unaff_x19 + 0x9d) <= fVar88) {
      fVar82 = *(float *)(unaff_x19 + 0x9d);
    }
    *(float *)((long)unaff_x19 + 0x4e4) = fVar66;
    *(float *)(unaff_x19 + 0x9d) = fVar82;
    *(float *)(lVar26 + 300) = fVar67;
    *(float *)(lVar26 + 0x130) = fVar88;
    fVar67 = *(float *)((long)unaff_x19 + 0x4f4);
    *(float *)(lVar26 + 0x120) = fVar64 - fVar67;
    *(float *)((long)unaff_x19 + 0x4dc) = fVar64 - fVar67;
    *(float *)(lVar26 + 0x128) = fVar86 - fVar67;
    *(float *)(unaff_x19 + 0x9c) = fVar86 - fVar67;
    if (((int)unaff_x19[0x98] == 0) || (*(char *)((long)unaff_x19 + 0x37c) != '\0')) {
      *(float *)((long)unaff_x19 + 0x4d4) = fVar66;
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fVar86 = *(float *)(unaff_x19 + 0x9b);
      fVar66 = (float)FUN_0630f8c0(unaff_x19[0x20] + 0x28,0);
      fVar74 = (fVar85 * fVar66) / fVar74;
      if (fVar86 <= fVar74) {
        fVar86 = fVar74;
      }
      fVar67 = *(float *)((long)unaff_x19 + 0x4f4);
      *(float *)(unaff_x19 + 0x9b) = fVar86;
    }
    if (fVar67 == 0.0) {
      fVar74 = *(float *)(unaff_x19 + 0x9a);
      if (*(float *)(unaff_x19 + 0x9a) <= fVar64) {
        fVar74 = fVar64;
      }
      *(float *)(unaff_x19 + 0x9a) = fVar74;
    }
  }
  else {
    lVar26 = lVar26 + (long)(int)uVar21 * 0x178;
    uVar31 = *(undefined8 *)((long)unaff_x19 + 0x4e4);
    *(undefined8 *)(lVar26 + 300) = uVar31;
    fVar67 = *(float *)((long)unaff_x19 + 0x4f4);
    fVar74 = (float)uVar31 - fVar67;
    fVar64 = (float)((ulong)uVar31 >> 0x20) - fVar67;
    *(float *)(lVar26 + 0x120) = fVar74;
    *(float *)(lVar26 + 0x128) = fVar64;
    *(ulong *)((long)unaff_x19 + 0x4dc) = CONCAT44(fVar64,fVar74);
  }
  lVar26 = unaff_x19[0x75];
  if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
  uVar39 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_0603fce4;
  lVar25 = lVar25 + (long)(int)uVar39 * 0x178;
  *(undefined1 *)(lVar25 + 400) = 0;
  uVar52 = *(uint *)(unaff_x19 + 0x54);
  if ((((uVar19 == 9) ||
       ((uVar19 == 0x200b || uVar20 != 0 && ((*(uint *)(unaff_x19 + 0x61) & 0xfffffffe) == 2)))) ||
      ((uVar20 == 0 && (((uVar19 != 3 && (uVar19 != 0x200b)) && (uVar19 != 0xad)))))) ||
     ((uVar19 == 0xad && bVar15 == 0 || (*(int *)((long)unaff_x19 + 0x664) == 1)))) {
    *(undefined1 *)(lVar25 + 400) = 1;
    pfVar40 = (float *)((long)unaff_x19 + 0x394);
    pfVar36 = (float *)(unaff_x19 + 0x72);
    if (uVar93 == uVar3) {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      pfVar36 = (float *)(lVar26 + 100);
      pfVar40 = (float *)(lVar26 + 0x68);
    }
    fVar86 = *pfVar36;
    fVar66 = *pfVar40;
    fVar74 = *(float *)(unaff_x19 + 0x74);
    fVar64 = 0.0;
    fVar67 = *(float *)(unaff_x19 + 0xcc);
    fStack0000000000000140 = (fVar84 - fVar86) - fVar66;
    bVar12 = true;
    if ((fVar74 <= fStack0000000000000140) && (bVar12 = false, !NAN(fVar74))) {
      bVar12 = fVar74 == -1.0;
    }
    if (!bVar12) {
      fStack0000000000000140 = fVar74;
    }
    fVar74 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar74 = (float)FUN_0630fb94(&stack0x00001280,0);
    }
    fVar88 = *(float *)((long)unaff_x19 + 0x4f4);
    fStack0000000000000104 = fVar57;
    if (uVar19 != 0xad) {
      fStack0000000000000104 = fVar85;
    }
    fVar57 = *(float *)((long)unaff_x19 + 0x304);
    auVar76 = ZEXT416((uint)fVar57);
    if ((0.0 < fVar88) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
      fVar64 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
    }
    iVar23 = *(int *)((long)unaff_x19 + 0x4ac);
    fVar64 = (*(float *)((long)unaff_x19 + 0x4d4) - (*(float *)(unaff_x19 + 0x9d) - fVar88)) +
             fVar64;
    if (fVar61 < fVar64) {
      if ((int)unaff_x19[99] == -1) {
        *(int *)(unaff_x19 + 99) = iVar23;
      }
      unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      fVar82 = DAT_01317af0;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar88) {
          fVar88 = *(float *)(unaff_x19 + 0x5f);
          if ((fVar88 < *(float *)((long)unaff_x19 + 0x2ec)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar56 = *(float *)((long)unaff_x19 + 0x2ec) +
                     ((fVar91 - fVar64) / (float)(int)unaff_x19[0x98]) / fVar73;
            if (fVar56 <= fVar88) {
              fVar56 = fVar88;
            }
            goto LAB_0603fbd0;
          }
        }
        fVar64 = *(float *)((long)unaff_x19 + 0x20c);
        fVar88 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar88 < fVar64) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar64;
          fVar56 = (fVar64 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar56 <= fVar82) {
            fVar56 = fVar82;
          }
          fVar57 = (fVar64 - fVar56) * 20.0 + 0.5;
          fVar56 = _UNK_01317b80;
          if (fVar57 != INFINITY) {
            fVar56 = (float)(int)fVar57 / 20.0;
          }
          if (fVar56 <= fVar88) {
            fVar56 = fVar88;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar56;
          return;
        }
      }
      iVar24 = *(int *)((long)unaff_x19 + 0x314);
      if (iVar24 < 5) {
        if (iVar24 == 1) {
          lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar26 = *unaff_x23;
          }
          lVar25 = *(long *)(lVar26 + 0xb8);
          if (*(int *)(lVar25 + 0x1708) != 0) {
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar25 = *(long *)(*unaff_x23 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&stack0x00001340,lVar25 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_0603b314:
            iVar23 = FUN_0608c590();
            uVar92 = iVar23 - 1;
            iVar47 = iVar47 + 1;
            uVar39 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
            *(uint *)((long)unaff_x19 + 0x4ac) = uVar39;
            uVar71 = 0x2026;
            goto LAB_0603b340;
          }
LAB_0603b348:
          unaff_x28 = &stack0x000011b0;
          *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
          fVar57 = fVar85;
          uVar92 = 0xffffffff;
          in_stack_00001328 = DAT_01318128;
          goto LAB_06038edc;
        }
        if (iVar24 != 3) goto LAB_0603acbc;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
LAB_0603af60:
        uVar92 = FUN_0608c590();
      }
      else {
        if (iVar24 == 5) {
          if ((-1 < (int)uVar92) && (iVar23 != 0)) {
            auVar76 = ZEXT416((uint)fVar61);
            if (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)(unaff_x19 + 0x9d) <= fVar61) {
              if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4)
                  == 0) {
                thunk_FUN_02e9a04c();
              }
              unaff_x28 = &stack0x000011b0;
              uVar92 = FUN_0608c590();
              *(undefined4 *)(unaff_x19 + 0x96) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
              lVar26 = *unaff_x23;
              *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
              uVar31 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1730);
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
              *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
              uVar31 = NEON_rev64(uVar31,4);
              auVar76 = ZEXT816(0);
              *(int *)(unaff_x19 + 0x98) = (int)unaff_x19[0x98] + 1;
              *(undefined8 *)((long)unaff_x19 + 0x4e4) = uVar31;
              unaff_x19[0x9a] = 0;
              *(int *)((long)unaff_x19 + 0x4cc) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
              fVar57 = fVar85;
              goto LAB_06038edc;
            }
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            goto LAB_0603af60;
          }
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          uVar92 = 0xffffffff;
          in_stack_00001328 = DAT_01318128;
LAB_0603b124:
          unaff_x28 = &stack0x000011b0;
          unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          fVar57 = fVar85;
          goto LAB_06038edc;
        }
        if (iVar24 != 6) goto LAB_0603acbc;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
        uVar92 = FUN_0608c590();
        lVar26 = unaff_x19[100];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar28 = FUN_06267b6c(lVar26,0,0);
        if ((uVar28 & 1) != 0) {
          plVar53 = (long *)unaff_x19[100];
          uVar31 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar53 + 0x558))(plVar53,uVar31,*(undefined8 *)(*plVar53 + 0x560));
          lVar26 = unaff_x19[100];
          if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar26 + 0x440) = (int)unaff_x19[0x88];
          FUN_0607fed4(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
          plVar53 = (long *)unaff_x19[100];
          if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar53 + 0x7d8))(plVar53,0,0,*(undefined8 *)(*plVar53 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
        }
      }
      in_stack_00001328 = CONCAT44(3,iVar23);
      goto LAB_0603af80;
    }
LAB_0603acbc:
    unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((uVar28 & 1) != 0) {
      fVar64 = 1.0;
      if ((uVar52 & 0x18) != 0) {
        fVar64 = _UNK_01317cd8;
      }
      fVar74 = ABS(fVar67) +
               *(float *)(unaff_x19 + 0x5c) * fVar74 * (1.0 - fVar57) * fStack0000000000000104;
      if (fVar64 * fStack0000000000000140 < fVar74) {
        if ((((int)unaff_x19[0x61] == 0) || ((int)unaff_x19[0x61] == 3)) ||
           (iVar23 == (int)unaff_x19[0x96])) {
          if (((char)unaff_x19[0x4c] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fStack0000000000000104 = 100.0;
            fVar67 = *(float *)(unaff_x19 + 0x60) / 100.0;
            if (fVar57 < fVar67) goto LAB_0603fc3c;
            fVar57 = *(float *)((long)unaff_x19 + 0x20c);
            fVar67 = *(float *)(unaff_x19 + 0x4f);
            auVar76 = ZEXT416((uint)fVar67);
            if (fVar67 < fVar57) {
LAB_0603fc84:
              fVar56 = DAT_01317af0;
              *(float *)((long)unaff_x19 + 0x264) = fVar57;
              fVar58 = (fVar57 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar58 <= fVar56) {
                fVar58 = fVar56;
              }
              fVar57 = (fVar57 - fVar58) * 20.0 + 0.5;
              fVar56 = _UNK_01317b80;
              if (fVar57 != INFINITY) {
                fVar56 = (float)(int)fVar57 / 20.0;
              }
              if (fVar56 <= fVar67) {
                fVar56 = fVar67;
              }
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor__CalculateSnapColliderSize
              ;
            }
          }
          iVar24 = *(int *)((long)unaff_x19 + 0x314);
          if (iVar24 == 1) {
            lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar26 = *unaff_x23;
            }
            lVar25 = *(long *)(lVar26 + 0xb8);
            if (*(int *)(lVar25 + 0x1708) == 0) goto LAB_0603b348;
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar25 = *(long *)(*unaff_x23 + 0xb8);
            }
            UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                      (&stack0x00001340,lVar25 + 0x1338,
                       *(undefined8 *)
                        System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
            memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
            goto LAB_0603b314;
          }
          if (iVar24 == 6) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            uVar92 = FUN_0608c590();
            lVar26 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar28 = FUN_06267b6c(lVar26,0,0);
            if ((uVar28 & 1) != 0) {
              plVar53 = (long *)unaff_x19[100];
              uVar31 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar53 + 0x558))(plVar53,uVar31,*(undefined8 *)(*plVar53 + 0x560));
              lVar26 = unaff_x19[100];
              if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar26 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar53 = (long *)unaff_x19[100];
              if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar53 + 0x7d8))(plVar53,0,0,*(undefined8 *)(*plVar53 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
            uVar39 = *(uint *)((long)unaff_x19 + 0x4ac);
            goto LAB_0603b288;
          }
          if (iVar24 == 3) {
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
          uVar92 = FUN_0608c590();
          if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
            lVar26 = unaff_x19[0x75];
            if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0))
            goto thunk_FUN_02e3ccc4;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
            fVar57 = *(float *)((long)unaff_x19 + 0x4f4);
            fVar67 = 0.0;
            if ((0.0 < fVar57) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
              fVar67 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
            }
            fVar67 = fVar58 * *(float *)(unaff_x19 + 0x5d) +
                     *(float *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 +
                               0x14c) + (fVar67 - *(float *)(unaff_x19 + 0x9d)) +
                     fVar73 * (fVar56 + *(float *)((long)unaff_x19 + 0x2ec));
          }
          else {
            lVar26 = unaff_x19[0x75];
            *(undefined1 *)((long)unaff_x19 + 0x2f4) = 1;
            if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
            fVar67 = *(float *)(unaff_x19 + 0x5e) + fVar58 * *(float *)(unaff_x19 + 0x5d);
            fVar57 = *(float *)((long)unaff_x19 + 0x4f4);
          }
          puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
          uVar39 = *(uint *)((long)unaff_x19 + 0x4ac);
          if ((*(uint *)(lVar26 + 0x18) <= uVar39) ||
             (uVar42 = uVar39 - 1, *(uint *)(lVar26 + 0x18) <= uVar42)) goto LAB_0603fce4;
          fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x4d4);
          lVar26 = lVar26 + 0x20;
          fVar88 = *(float *)(lVar26 + (long)(int)uVar39 * 0x178 + 0x130);
          auVar76 = ZEXT416((uint)fVar88);
          fVar88 = (fVar67 + fStack0000000000000104 + fVar57) - fVar88;
          if ((*(short *)(lVar26 + (long)(int)uVar42 * 0x178 + 4) == 0xad && bVar15 == 0) &&
             ((*(int *)((long)unaff_x19 + 0x314) == 0 || (fVar88 < fVar61)))) {
            bVar15 = 0;
            uVar92 = uVar92 - 1;
            in_stack_00001328 = CONCAT44(0x2d,uVar42);
            *(uint *)((long)unaff_x19 + 0x4ac) = uVar42;
            unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
LAB_0603af80:
            unaff_x28 = &stack0x000011b0;
            fVar57 = fVar85;
            goto LAB_06038edc;
          }
          if (*(short *)(lVar26 + (long)(int)uVar39 * 0x178 + 4) == 0xad) {
            bVar15 = 1;
            unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            goto LAB_0603af80;
          }
          if ((char)unaff_x19[0x4c] != '\0' && ((bVar14 ^ 0xff) & 1) == 0) {
            fVar67 = *(float *)(unaff_x19 + 0x60) / 100.0;
            fVar57 = *(float *)((long)unaff_x19 + 0x304);
            if ((fVar57 < fVar67) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc3c;
            fVar57 = *(float *)((long)unaff_x19 + 0x20c);
            fVar67 = *(float *)(unaff_x19 + 0x4f);
            auVar76 = ZEXT416((uint)fVar67);
            if ((fVar67 < fVar57) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc84;
          }
          lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar26 = *(long *)puVar11;
          }
          if (((bVar14 != 0) && (iVar24 = *(int *)(*(long *)(lVar26 + 0xb8) + 0xf80), iVar24 != -1))
             && (iVar24 != iStack0000000000000020)) {
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar92 = FUN_0608c590();
            if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
            goto thunk_FUN_02e3ccc4;
            uVar39 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
            if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_0603fce4;
            iStack0000000000000020 = iVar24;
            if (*(short *)(lVar26 + (long)(int)uVar39 * 0x178 + 0x24) == 0xad) {
              bVar15 = 0;
              uVar92 = uVar92 - 1;
              in_stack_00001328 = CONCAT44(0x2d,uVar39);
              *(uint *)((long)unaff_x19 + 0x4ac) = uVar39;
              unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
              goto LAB_0603af80;
            }
          }
          if (fVar88 <= fVar61) {
            auVar76 = ZEXT416((uint)fVar85);
            fStack0000000000000104 = fVar58;
            FUN_0608d070();
LAB_0603cc70:
            bVar14 = 1;
            bVar15 = 0;
            bVar8 = true;
            goto LAB_0603b124;
          }
          if ((int)unaff_x19[99] == -1) {
            *(undefined4 *)(unaff_x19 + 99) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          }
          if ((char)unaff_x19[0x4c] != '\0') {
            fVar57 = *(float *)(unaff_x19 + 0x5f);
            if ((fVar57 < *(float *)((long)unaff_x19 + 0x2ec)) &&
               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar56 = *(float *)((long)unaff_x19 + 0x2ec) +
                       ((fVar91 - fVar88) / (float)((int)unaff_x19[0x98] + 1)) / fVar73;
              if (fVar56 <= fVar57) {
                fVar56 = fVar57;
              }
LAB_0603fbd0:
              *(float *)((long)unaff_x19 + 0x2ec) = fVar56;
              return;
            }
            fVar67 = *(float *)(unaff_x19 + 0x60) / 100.0;
            fVar57 = *(float *)((long)unaff_x19 + 0x304);
            if ((fVar57 < fVar67) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_0603fc3c:
              fVar56 = fVar74;
              if (0.0 < fVar57) {
                fVar56 = fVar74 / (1.0 - fVar57);
              }
              fVar57 = fVar57 + (fVar74 - fVar64 * (fStack0000000000000140 + _UNK_01317b20)) /
                                fVar56;
              if (fVar67 <= fVar57) {
                fVar57 = fVar67;
              }
              *(float *)((long)unaff_x19 + 0x304) = fVar57;
              return;
            }
            fVar57 = *(float *)((long)unaff_x19 + 0x20c);
            fVar67 = *(float *)(unaff_x19 + 0x4f);
            auVar76 = ZEXT416((uint)fVar67);
            if ((fVar67 < fVar57) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_0603fc84;
          }
          iVar24 = *(int *)((long)unaff_x19 + 0x314);
          bVar15 = 0;
          if (iVar24 < 3) {
            if (iVar24 != 0) {
              if (iVar24 == 1) {
                lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                if (*(int *)(lVar26 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
                }
                in_stack_00001328 = DAT_01318128;
                lVar25 = *(long *)(lVar26 + 0xb8);
                if (*(int *)(lVar25 + 0x1708) == 0) {
                  uVar92 = 0xffffffff;
                  *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                }
                else {
                  if (*(int *)(lVar26 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar25 = *(long *)(*(long *)
                                        System_Collections_Generic_List<AudioListener>_TypeInfo +
                                      0xb8);
                  }
                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                            (&stack0x00001340,lVar25 + 0x1338,
                             *(undefined8 *)
                              System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo);
                  memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
                  iVar23 = FUN_0608c590();
                  uVar92 = iVar23 - 1;
                  iVar23 = *(int *)((long)unaff_x19 + 0x4ac) + -1;
                  iVar47 = iVar47 + 1;
                  *(int *)((long)unaff_x19 + 0x4ac) = iVar23;
                  in_stack_00001328 = CONCAT44(0x2026,iVar23);
                }
                goto LAB_0603cf9c;
              }
              if (iVar24 != 2) goto LAB_0603ada8;
            }
LAB_0603cca8:
            unaff_x28 = &stack0x000011b0;
            auVar76 = ZEXT416((uint)fVar85);
            fStack0000000000000104 = fVar58;
            FUN_0608d070();
            bVar15 = 0;
            bVar14 = 1;
            bVar8 = true;
            unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar57 = fVar85;
            goto LAB_06038edc;
          }
          if (4 < iVar24) {
            if (iVar24 == 5) {
              auVar76 = ZEXT416((uint)fVar85);
              *(undefined1 *)((long)unaff_x19 + 0x37c) = 1;
              fStack0000000000000104 = fVar58;
              FUN_0608d070();
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4f4) = 0;
              *(int *)((long)unaff_x19 + 0x4cc) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
              unaff_x19[0x9a] = 0;
              goto LAB_0603cc70;
            }
            if (iVar24 != 6) goto LAB_0603ada8;
            lVar26 = unaff_x19[100];
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar28 = FUN_06267b6c(lVar26,0,0);
            if ((uVar28 & 1) != 0) {
              plVar53 = (long *)unaff_x19[100];
              uVar31 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar53 + 0x558))(plVar53,uVar31,*(undefined8 *)(*plVar53 + 0x560));
              lVar26 = unaff_x19[100];
              if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
              *(int *)(lVar26 + 0x440) = (int)unaff_x19[0x88];
              FUN_0607fed4(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
              plVar53 = (long *)unaff_x19[100];
              if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
              (**(code **)(*plVar53 + 0x7d8))(plVar53,0,0,*(undefined8 *)(*plVar53 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x66) = 1;
            }
            in_stack_00001328 = CONCAT44(3,*(undefined4 *)((long)unaff_x19 + 0x4ac));
            goto LAB_0603cf9c;
          }
          if (iVar24 == 3) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02e9a04c();
            }
            uVar92 = FUN_0608c590();
            in_stack_00001328 = CONCAT44(3,iVar23);
LAB_0603cf9c:
            bVar15 = 0;
            unaff_x28 = &stack0x000011b0;
            unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
            fVar57 = fVar85;
            goto LAB_06038edc;
          }
          if (iVar24 == 4) goto LAB_0603cca8;
        }
      }
    }
LAB_0603ada8:
    if (uVar20 == 0) {
      if (uVar19 == 0xad) {
        if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
        *(undefined1 *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 + 400) = 0;
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x664) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x664) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))();
        }
        if (bVar8) {
          *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        }
        *(undefined4 *)((long)unaff_x19 + 0x4bc) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
        if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x50), lVar26 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        bVar8 = false;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(float *)(lVar26 + 100) = fVar86;
        *(float *)(lVar26 + 0x68) = fVar66;
      }
    }
    else {
      lVar26 = unaff_x19[0x75];
      if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar39 = *(uint *)((long)unaff_x19 + 0x4ac);
      if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_0603fce4;
      *(undefined1 *)(lVar25 + (long)(int)uVar39 * 0x178 + 400) = 0;
      *(uint *)((long)unaff_x19 + 0x4bc) = uVar39;
      lVar25 = *(long *)(lVar26 + 0x50);
      if (lVar25 == 0) goto thunk_FUN_02e3ccc4;
      uVar39 = *(uint *)(lVar25 + 0x18);
      if (uVar39 <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar25 = lVar25 + 0x20;
      lVar44 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
      iVar23 = *(int *)(lVar44 + 0xc) + 1;
      *(int *)(lVar44 + 0xc) = iVar23;
      uVar42 = *(uint *)(unaff_x19 + 0x98);
      *(int *)(unaff_x19 + 0x99) = iVar23;
      if (uVar39 <= uVar42) goto LAB_0603fce4;
      lVar44 = lVar25 + (long)(int)uVar42 * 0x60;
      *(float *)(lVar44 + 0x44) = fVar86;
      *(float *)(lVar44 + 0x48) = fVar66;
      *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      if (uVar19 == 0xa0) {
        *(int *)(lVar25 + (long)(int)uVar42 * 0x60) =
             *(int *)(lVar25 + (long)(int)uVar42 * 0x60) + 1;
      }
    }
  }
  else {
    if (((uVar19 & 0xfffffffe) == 10) && (*(int *)((long)unaff_x19 + 0x314) == 6)) {
      fVar57 = 0.0;
      if ((0.0 < fVar67) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
        fVar57 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
      }
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x4d4);
      auVar76 = ZEXT416((uint)fVar61);
      if (fVar61 < (fStack0000000000000104 - (*(float *)(unaff_x19 + 0x9d) - fVar67)) + fVar57) {
        if ((int)unaff_x19[99] == -1) {
          *(uint *)(unaff_x19 + 99) = uVar39;
        }
        unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
        }
        uVar92 = FUN_0608c590();
        lVar26 = unaff_x19[100];
        if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar28 = FUN_06267b6c(lVar26,0,0);
        if ((uVar28 & 1) != 0) {
          plVar53 = (long *)unaff_x19[100];
          uVar31 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar53 + 0x558))(plVar53,uVar31,*(undefined8 *)(*plVar53 + 0x560));
          lVar26 = unaff_x19[100];
          if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
          *(int *)(lVar26 + 0x440) = (int)unaff_x19[0x88];
          FUN_0607fed4(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4ac),0);
          plVar53 = (long *)unaff_x19[100];
          if (plVar53 == (long *)0x0) goto thunk_FUN_02e3ccc4;
          (**(code **)(*plVar53 + 0x7d8))(plVar53,0,0,*(undefined8 *)(*plVar53 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x66) = 1;
        }
LAB_0603b288:
        uVar71 = 3;
LAB_0603b340:
        unaff_x28 = &stack0x000011b0;
        fVar57 = fVar85;
        in_stack_00001328 = CONCAT44(uVar71,uVar39);
        goto LAB_06038edc;
      }
    }
    if ((((uVar19 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(uVar19 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (uVar19 - 10 < 2)) ||
       (uVar19 == 0xa0)) {
      if (uVar19 != 0xad) goto LAB_0603b58c;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar28 = FUN_055814cc(uVar19,0);
      if (((uVar28 & 1) != 0) && (uVar19 != 0xad)) {
LAB_0603b58c:
        if ((uVar19 == 0x200b) || (uVar19 == 0x2060)) goto LAB_0603b638;
        lVar26 = unaff_x19[0x75];
        if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(int *)(lVar25 + 0x2c) = *(int *)(lVar25 + 0x2c) + 1;
        *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      }
      if (uVar19 == 0xa0) {
        if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x50), lVar26 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
        *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      }
    }
  }
LAB_0603b638:
  if ((*(int *)((long)unaff_x19 + 0x314) == 1) && ((uVar93 != uVar3 || (uVar19 == 0x2d)))) {
    if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar74 = *(float *)(unaff_x19 + 0x42);
    fVar57 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
    if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
    fVar64 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
    lVar26 = unaff_x19[0xce];
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
    fVar66 = *(float *)((long)unaff_x19 + 0x444);
    fVar67 = *(float *)(lVar26 + 0x2c);
    fVar86 = (float)FUN_0630fd88(*(long *)(lVar26 + 0x20),0);
    lVar26 = unaff_x19[0x72];
    fVar86 = fVar66 * in_stack_00000118 * (fVar74 / fVar57) * fVar64 * fVar67 * fVar86;
    if ((uVar19 == 10) && (*(int *)((long)unaff_x19 + 0x4ac) != (int)unaff_x19[0x96])) {
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      uVar39 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_0603fce4;
      if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar74 = *(float *)(lVar26 + (long)(int)uVar39 * 0x178 + 0x58);
      fVar57 = (float)FUN_0630f888(unaff_x19[0xcf] + 0x28,0);
      if (unaff_x19[0xcf] == 0) goto thunk_FUN_02e3ccc4;
      fVar64 = (float)FUN_0630f890(unaff_x19[0xcf] + 0x28,0);
      lVar26 = unaff_x19[0xce];
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto thunk_FUN_02e3ccc4;
      fVar66 = *(float *)((long)unaff_x19 + 0x444);
      fVar67 = *(float *)(lVar26 + 0x2c);
      fVar86 = (float)FUN_0630fd88(*(long *)(lVar26 + 0x20),0);
      if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x50), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
      lVar26 = *(long *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60 + 100);
      fVar86 = fVar66 * in_stack_00000118 * (fVar74 / fVar57) * fVar64 * fVar67 * fVar86;
    }
    fVar74 = *(float *)((long)unaff_x19 + 0x4f4);
    fVar57 = 0.0;
    fVar64 = 0.0;
    if ((0.0 < fVar74) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) {
      fVar64 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4ec);
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4d4);
    fVar67 = *(float *)(unaff_x19 + 0x9d);
    fVar88 = *(float *)(unaff_x19 + 0xcc);
    fStack0000000000000180 = (float)lVar26;
    fStack0000000000000184 = (float)((ulong)lVar26 >> 0x20);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xce] == 0) || (lVar26 = *(long *)(unaff_x19[0xce] + 0x20), lVar26 == 0))
      goto thunk_FUN_02e3ccc4;
      FUN_0630fd4c(&stack0x00001340,lVar26,0);
      fVar57 = (float)FUN_0630fb94(&stack0x000011e0,0);
    }
    puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
    fStack0000000000000184 = (fVar84 - fStack0000000000000180) - fStack0000000000000184;
    fVar82 = *(float *)(unaff_x19 + 0x74);
    bVar12 = true;
    if ((fVar82 <= fStack0000000000000184) && (bVar12 = false, !NAN(fVar82))) {
      bVar12 = fVar82 == -1.0;
    }
    if (!bVar12) {
      fStack0000000000000184 = fVar82;
    }
    fVar82 = 1.0;
    if ((uVar52 & 0x18) != 0) {
      fVar82 = _UNK_01317cd8;
    }
    if ((ABS(fVar88) +
         fVar86 * *(float *)(unaff_x19 + 0x5c) *
                  fVar57 * (1.0 - *(float *)((long)unaff_x19 + 0x304)) <
         fVar82 * fStack0000000000000184) && ((fVar66 - (fVar67 - fVar74)) + fVar64 < fVar61)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      lVar26 = *(long *)(*(long *)puVar11 + 0xb8);
      memcpy(&stack0x00001340,(void *)(lVar26 + 0x810),0x3b8);
      FUN_046b8738(lVar26 + 0x1338,&stack0x00001340,
                   *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
    }
  }
  lVar26 = unaff_x19[0x75];
  if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_0603fce4;
  lVar25 = lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178;
  uVar39 = *(uint *)(unaff_x19 + 0x98);
  *(uint *)(lVar25 + 0x5c) = uVar39;
  *(undefined4 *)(lVar25 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4cc);
  if ((uVar93 == uVar3) || ((uVar19 < 0xe && ((1 << (ulong)(uVar19 & 0x1f) & 0x2c00U) != 0)))) {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_0603fce4;
    if (*(int *)(lVar26 + (long)(int)uVar39 * 0x60 + 0x24) == 1) goto LAB_0603b9e0;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
LAB_0603b9e0:
    if (*(uint *)(lVar26 + 0x18) <= uVar39) goto LAB_0603fce4;
    *(int *)(lVar26 + (long)(int)uVar39 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
  }
  if (uVar19 == 9) {
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar57 = (float)FUN_0630f930(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
    fVar74 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
    fVar64 = *(float *)(unaff_x19 + 0xcc);
    auVar76 = ZEXT416((uint)fVar64);
    fVar74 = fVar85 * fVar57 * fVar74;
    if ((char)unaff_x19[0x1e] == '\0') {
      fStack0000000000000104 = fVar74 * (float)(int)(fVar64 / fVar74);
      fVar57 = fStack0000000000000104;
      if (fStack0000000000000104 <= fVar64) {
        fVar57 = fVar74 + fVar64;
      }
    }
    else {
      fStack0000000000000104 = fVar74 * (float)(int)(fVar64 / fVar74);
      fVar57 = fStack0000000000000104;
      if (fVar64 <= fStack0000000000000104) {
        fVar57 = fVar64 - fVar74;
      }
    }
LAB_0603bc44:
    *(float *)(unaff_x19 + 0xcc) = fVar57;
  }
  else {
    fVar57 = *(float *)(unaff_x19 + 0x5b);
    if (fVar57 == 0.0) {
      fVar57 = *(float *)(unaff_x19 + 0xcc);
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar64 = (float)FUN_0630fb94(&stack0x00001280,0);
        fVar80 = *(float *)((long)unaff_x19 + 0x484);
        fVar86 = (float)FUN_063140cc(&stack0x00001270,0);
        if (unaff_x19[0x20] != 0) {
          fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x304);
          fVar74 = *(float *)(unaff_x19 + 0x5c);
          fVar57 = fVar57 + fVar74 * (1.0 - fStack0000000000000104) *
                                     (*(float *)((long)unaff_x19 + 0x2d4) +
                                     fVar85 * (fVar64 * fVar80 + fVar86) +
                                     fVar58 * (fVar65 + fVar63 + *(float *)(unaff_x19[0x20] + 0x1a4)
                                              ));
          *(float *)(unaff_x19 + 0xcc) = fVar57;
          goto joined_r0x0603bb78;
        }
        goto thunk_FUN_02e3ccc4;
      }
      fVar74 = (float)FUN_063140cc(&stack0x00001270,0);
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x304);
      auVar76 = ZEXT416((uint)*(float *)(unaff_x19 + 0x5c));
      fVar57 = fVar57 - *(float *)(unaff_x19 + 0x5c) *
                        (1.0 - fStack0000000000000104) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        fVar85 * fVar74 +
                        fVar58 * (fVar65 + fVar63 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcc) = fVar57;
      if ((uVar20 != 0) || (uVar19 == 0x200b)) {
        fVar74 = fVar58 * *(float *)((long)unaff_x19 + 0x2e4);
        auVar76 = ZEXT416((uint)fVar74);
        fStack0000000000000104 = fVar58;
        fVar57 = fVar57 - fVar74;
        goto LAB_0603bc44;
      }
    }
    else {
      if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (uVar19 < 0x3b)) &&
         ((1L << ((ulong)uVar19 & 0x3f) & 0x400500000000000U) != 0)) {
        fVar57 = fVar57 * 0.5;
      }
      if (unaff_x19[0x20] == 0) goto thunk_FUN_02e3ccc4;
      fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x304);
      fVar74 = *(float *)(unaff_x19 + 0xcc);
      fVar57 = fVar74 + *(float *)(unaff_x19 + 0x5c) *
                        (1.0 - fStack0000000000000104) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        (fVar57 - fVar80) + fVar58 * (fVar63 + *(float *)(unaff_x19[0x20] + 0x1a4)))
      ;
      *(float *)(unaff_x19 + 0xcc) = fVar57;
joined_r0x0603bb78:
      if ((uVar20 != 0) || (auVar76 = ZEXT416((uint)fVar74), uVar19 == 0x200b)) {
        fVar74 = fVar58 * *(float *)((long)unaff_x19 + 0x2e4);
        auVar76 = ZEXT416((uint)fVar74);
        fStack0000000000000104 = fVar58;
        fVar57 = fVar57 + fVar74;
        goto LAB_0603bc44;
      }
    }
  }
  lVar26 = unaff_x19[0x75];
  if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
  uVar39 = *(uint *)((long)unaff_x19 + 0x4ac);
  if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_0603fce4;
  *(float *)(lVar25 + (long)(int)uVar39 * 0x178 + 0x13c) = fVar57;
  if (uVar19 == 0xd) {
    auVar76 = ZEXT816(0);
    *(float *)(unaff_x19 + 0xcc) = *(float *)((long)unaff_x19 + 0x44c) + 0.0;
  }
  if ((*(int *)((long)unaff_x19 + 0x314) == 5) &&
     (((0xd < uVar19 || ((1 << (ulong)(uVar19 & 0x1f) & 0x2c00U) == 0)) && (1 < uVar19 - 0x2028))))
  {
    lVar25 = *(long *)(lVar26 + 0x58);
    if (lVar25 == 0) goto thunk_FUN_02e3ccc4;
    iVar23 = *(int *)((long)unaff_x19 + 0x4cc) + 1;
    if (*(int *)(lVar25 + 0x18) < iVar23) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_03ab3b84((long *)(lVar26 + 0x58),iVar23,1,
                   *(undefined8 *)System_Collections_Generic_List<XmlEventCache_XmlEvent[]>_TypeInfo
                  );
      lVar26 = unaff_x19[0x75];
      if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar25 = *(long *)(lVar26 + 0x58);
    if (lVar25 == 0) goto thunk_FUN_02e3ccc4;
    uVar52 = *(uint *)((long)unaff_x19 + 0x4cc);
    if (*(uint *)(lVar25 + 0x18) <= uVar52) goto LAB_0603fce4;
    lVar25 = lVar25 + 0x20;
    lVar44 = lVar25 + (long)(int)uVar52 * 0x14;
    *(int *)(lVar44 + 8) = (int)unaff_x19[0x9a];
    fVar74 = *(float *)(lVar44 + 0x10);
    auVar76 = ZEXT416((uint)fVar74);
    fVar57 = *(float *)(unaff_x19 + 0x9c);
    if (fVar74 <= *(float *)(unaff_x19 + 0x9c)) {
      fVar57 = fVar74;
    }
    *(float *)(lVar44 + 0x10) = fVar57;
    if (*(char *)((long)unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar25 + (long)(int)uVar52 * 0x14) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    }
    uVar39 = *(uint *)((long)unaff_x19 + 0x4ac);
    *(uint *)(lVar25 + (long)(int)uVar52 * 0x14 + 4) = uVar39;
  }
  unaff_x28 = &stack0x000011b0;
  uVar52 = uVar19;
  if (((uVar19 < 0xc) && ((1 << (ulong)(uVar19 & 0x1f) & 0xc08U) != 0)) ||
     ((uVar19 - 0x2028 < 2 || ((uVar19 == 0x2d && uVar93 == uVar3 || (uVar39 == uVar5)))))) {
    if (0.0 < *(float *)((long)unaff_x19 + 0x4f4)) {
      fVar57 = *(float *)((long)unaff_x19 + 0x4e4);
      fVar74 = *(float *)((long)unaff_x19 + 0x4ec);
      if (*(int *)(*(long *)PTR_DAT_06a2ef88 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      fVar57 = fVar57 - fVar74;
      if (((fVar87 < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 0x2f4) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x37c) == '\0')) {
        FUN_0608cd04();
        puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        *(float *)(unaff_x19 + 0x9c) = *(float *)(unaff_x19 + 0x9c) - fVar57;
        *(float *)((long)unaff_x19 + 0x4f4) = fVar57 + *(float *)((long)unaff_x19 + 0x4f4);
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar26 = *(long *)puVar11;
        }
        lVar25 = *(long *)(lVar26 + 0xb8);
        if (*(int *)(lVar25 + 0x838) == (int)unaff_x19[0x98]) {
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
            lVar25 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo +
                              0xb8);
          }
          UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_TweenableVariableBase_<PlaySequence>d__16<float>__System_Collections_IEnumerator_Reset
                    (&stack0x00000200,lVar25 + 0x1338,
                     *(undefined8 *)System_Collections_Generic_List<AndroidAssetPackState>_TypeInfo)
          ;
          puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
          lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
          thunk_FUN_02ee2be8(*(long *)(lVar26 + 0xb8) + 0x8a8,0);
          lVar26 = *(long *)(*(long *)puVar11 + 0xb8);
          *(float *)(lVar26 + 0x848) = fVar57 + *(float *)(lVar26 + 0x848);
          *(float *)(lVar26 + 0x894) = fVar57 + *(float *)(lVar26 + 0x894);
          memcpy(&stack0x00001340,(void *)(lVar26 + 0x810),0x3b8);
          FUN_046b8738(lVar26 + 0x1338,&stack0x00001340,
                       *(undefined8 *)System_Collections_Generic_List<ApplicationInvite>_TypeInfo);
        }
      }
    }
    fVar64 = *(float *)((long)unaff_x19 + 0x4f4);
    *(undefined1 *)((long)unaff_x19 + 0x37c) = 0;
    fVar74 = *(float *)(unaff_x19 + 0x9d) - fVar64;
    fVar57 = *(float *)(unaff_x19 + 0x9c);
    if (fVar74 <= *(float *)(unaff_x19 + 0x9c)) {
      fVar57 = fVar74;
    }
    fVar86 = *(float *)((long)unaff_x19 + 0x4e4);
    *(float *)(unaff_x19 + 0x9c) = fVar57;
    if (in_stack_00001334 == '\0') {
      fVar94 = fVar57;
    }
    if ((*(char *)((long)unaff_x19 + 0x374) != '\0') &&
       (((int)unaff_x19[0x6d] <= *(int *)((long)unaff_x19 + 0x4ac) ||
        ((int)unaff_x19[0x6e] <= (int)unaff_x19[0x98])))) {
      in_stack_00001334 = '\x01';
    }
    lVar26 = unaff_x19[0x75];
    if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
    lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
    iVar24 = (int)unaff_x19[0x96];
    *(int *)(lVar25 + 0x38) = iVar24;
    iVar23 = iVar24;
    if (iVar24 <= *(int *)((long)unaff_x19 + 0x4b4)) {
      iVar23 = *(int *)((long)unaff_x19 + 0x4b4);
    }
    *(int *)((long)unaff_x19 + 0x4b4) = iVar23;
    *(int *)(lVar25 + 0x3c) = iVar23;
    iVar4 = *(int *)((long)unaff_x19 + 0x4ac);
    *(int *)(unaff_x19 + 0x97) = iVar4;
    *(int *)(lVar25 + 0x40) = iVar4;
    iVar48 = *(int *)((long)unaff_x19 + 0x4b4);
    if (iVar23 <= *(int *)((long)unaff_x19 + 0x4bc)) {
      iVar48 = *(int *)((long)unaff_x19 + 0x4bc);
    }
    *(int *)((long)unaff_x19 + 0x4bc) = iVar48;
    *(int *)(lVar25 + 0x44) = iVar48;
    *(int *)(lVar25 + 0x24) = (iVar4 - iVar24) + 1;
    iVar23 = *(int *)((long)unaff_x19 + 0x4c4);
    *(int *)(lVar25 + 0x28) = iVar23;
    *(int *)(lVar25 + 0x30) = (iVar48 - (iVar24 + iVar23)) + 1;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_0603fce4;
    *(undefined4 *)(lVar25 + 0x70) =
         *(undefined4 *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * 0x178 + 0x114);
    *(float *)(lVar25 + 0x74) = fVar74;
    lVar26 = unaff_x19[0x75];
    if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x98)) goto LAB_0603fce4;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4bc)) goto LAB_0603fce4;
    fVar86 = fVar86 - fVar64;
    auVar76 = ZEXT416((uint)fVar86);
    lVar25 = lVar25 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x98) * 0x60;
    *(undefined4 *)(lVar25 + 0x58) =
         *(undefined4 *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4bc) * 0x178 + 0x120);
    *(float *)(lVar25 + 0x5c) = fVar86;
    lVar26 = unaff_x19[0x75];
    if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto thunk_FUN_02e3ccc4;
    uVar39 = *(uint *)(unaff_x19 + 0x98);
    if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_0603fce4;
    lVar25 = lVar25 + 0x20;
    lVar44 = lVar25 + (long)(int)uVar39 * 0x60;
    *(float *)(lVar44 + 0x28) = *(float *)(lVar44 + 0x58) - fVar85 * fVar62;
    *(float *)(lVar44 + 0x40) = fStack0000000000000140;
    if (*(int *)(lVar44 + 4) == 1) {
      *(int *)(lVar25 + (long)(int)uVar39 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
    }
    if ((unaff_x19[0x20] == 0) || (lVar44 = *(long *)(lVar26 + 0x38), lVar44 == 0))
    goto thunk_FUN_02e3ccc4;
    uVar42 = *(uint *)((long)unaff_x19 + 0x4bc);
    if (*(uint *)(lVar44 + 0x18) <= uVar42) goto LAB_0603fce4;
    if ((*(char *)(lVar44 + 0x20 + (long)(int)uVar42 * 0x178 + 0x170) == '\0') &&
       (uVar42 = *(uint *)(unaff_x19 + 0x97), *(uint *)(lVar44 + 0x18) <= uVar42))
    goto LAB_0603fce4;
    fVar63 = *(float *)(unaff_x19 + 0x5c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304)) *
             (*(float *)((long)unaff_x19 + 0x2d4) +
             fVar58 * (fVar65 + fVar63 + *(float *)(unaff_x19[0x20] + 0x1a4)));
    fVar57 = -fVar63;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar57 = fVar63;
    }
    lVar25 = lVar25 + (long)(int)uVar39 * 0x60;
    *(float *)(lVar25 + 0x3c) =
         *(float *)(lVar44 + 0x20 + (long)(int)uVar42 * 0x178 + 0x11c) + fVar57;
    fStack0000000000000104 = 0.0 - *(float *)((long)unaff_x19 + 0x4f4);
    *(float *)(lVar25 + 0x34) = fStack0000000000000104;
    *(float *)(lVar25 + 0x38) = fVar74;
    *(float *)(lVar25 + 0x2c) = fVar73 * fVar56 + (fVar86 - fVar74);
    *(float *)(lVar25 + 0x30) = fVar86;
    unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
    if ((((uVar19 & 0xfffffffe) == 10) || (uVar93 == uVar3 && uVar19 == 0x2d)) ||
       (uVar19 - 0x2028 < 2)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_0608c948();
      *(undefined8 *)((long)unaff_x19 + 0x4c4) = 0;
      iVar23 = (int)unaff_x19[0x98] + 1;
      lVar26 = unaff_x19[0x75];
      *(int *)(unaff_x19 + 0x98) = iVar23;
      *(int *)(unaff_x19 + 0x96) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((lVar26 != 0) && (*(long *)(lVar26 + 0x50) != 0)) {
        if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar23) {
          FUN_0608cec0();
          lVar26 = unaff_x19[0x75];
          if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 != 0) {
          if (*(uint *)((long)unaff_x19 + 0x4ac) < *(uint *)(lVar26 + 0x18)) {
            fVar57 = *(float *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4ac) * 0x178 +
                               0x14c);
            if (*(float *)(unaff_x19 + 0x5e) == DAT_01317908) {
              if ((uVar19 == 0x2029) || (fVar74 = 0.0, uVar19 == 10)) {
                fVar74 = *(float *)((long)unaff_x19 + 0x2fc);
              }
              uVar32 = 0;
              fVar74 = fVar57 + (0.0 - *(float *)(unaff_x19 + 0x9d)) +
                       fVar73 * (fVar56 + *(float *)((long)unaff_x19 + 0x2ec)) +
                       fVar58 * (*(float *)(unaff_x19 + 0x5d) + fVar74) +
                       *(float *)((long)unaff_x19 + 0x4f4);
            }
            else {
              if ((uVar19 == 0x2029) || (fVar74 = 0.0, uVar19 == 10)) {
                fVar74 = *(float *)((long)unaff_x19 + 0x2fc);
              }
              uVar32 = 1;
              fVar74 = *(float *)((long)unaff_x19 + 0x4f4) +
                       *(float *)(unaff_x19 + 0x5e) +
                       fVar58 * (*(float *)(unaff_x19 + 0x5d) + fVar74);
            }
            lVar26 = *unaff_x23;
            *(float *)((long)unaff_x19 + 0x4f4) = fVar74;
            *(undefined1 *)((long)unaff_x19 + 0x2f4) = uVar32;
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
              lVar26 = *unaff_x23;
            }
            uVar31 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1730);
            *(float *)((long)unaff_x19 + 0x4ec) = fVar57;
            fStack0000000000000104 = *(float *)((long)unaff_x19 + 0x44c);
            auVar76._0_8_ = NEON_rev64(uVar31,4);
            auVar76._8_8_ = 0;
            *(ulong *)((long)unaff_x19 + 0x4e4) = auVar76._0_8_;
            *(float *)(unaff_x19 + 0xcc) =
                 *(float *)(unaff_x19 + 0x89) + 0.0 + fStack0000000000000104;
            FUN_0608c948();
            FUN_0608c948();
            *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
            bVar14 = 1;
            bVar8 = true;
            fVar57 = fVar85;
            goto LAB_06038edc;
          }
          goto LAB_0603fce4;
        }
      }
      goto thunk_FUN_02e3ccc4;
    }
    if (uVar19 == 3) {
      if (unaff_x19[0x92] == 0) goto thunk_FUN_02e3ccc4;
      uVar92 = (uint)*(undefined8 *)(unaff_x19[0x92] + 0x18);
      uVar52 = 3;
    }
  }
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
  uVar93 = *(uint *)((long)unaff_x19 + 0x4ac);
  uVar3 = *(uint *)(lVar26 + 0x18);
  if (uVar3 <= uVar93) goto LAB_0603fce4;
  lVar26 = lVar26 + 0x20;
  if (*(char *)(lVar26 + (long)(int)uVar93 * 0x178 + 0x170) != '\0') {
    lVar25 = lVar26 + (long)(int)uVar93 * 0x178;
    auVar69 = *(undefined1 (*) [16])(unaff_x19 + 0x9f);
    auVar77 = NEON_ext(auVar69,auVar69,8,1);
    uVar31 = *(undefined8 *)(lVar25 + 0xf4);
    fStack0000000000000104 = (float)uVar31;
    uVar27 = *(undefined8 *)(lVar25 + 0x100);
    fVar57 = (float)uVar27;
    fVar74 = (float)((ulong)uVar27 >> 0x20);
    auVar76._0_4_ = (float)-(uint)(auVar69._0_4_ < fStack0000000000000104);
    auVar76._4_4_ = (float)-(uint)(auVar69._4_4_ < (float)((ulong)uVar31 >> 0x20));
    auVar76._8_4_ = -(uint)(fVar57 < auVar77._0_4_);
    auVar76._12_4_ = -(uint)(fVar74 < auVar77._4_4_);
    auVar7._8_4_ = fVar57;
    auVar7._0_8_ = uVar31;
    auVar7._12_4_ = fVar74;
    auVar69 = auVar69 ^ (auVar69 ^ auVar7) & ~auVar76;
    unaff_x19[0xa0] = auVar69._8_8_;
    unaff_x19[0x9f] = auVar69._0_8_;
  }
  if ((((int)unaff_x19[0x61] != 3) && ((int)unaff_x19[0x61] != 0)) ||
     ((*(uint *)((long)unaff_x19 + 0x314) < 7 &&
      ((1 << (ulong)(*(uint *)((long)unaff_x19 + 0x314) & 0x1f) & 0x4aU) != 0)))) {
    uVar39 = uVar93 + 1;
    if ((int)uVar39 < (int)fStack0000000000000064) {
      if (uVar3 <= uVar39) goto LAB_0603fce4;
      uVar54 = *(undefined2 *)(lVar26 + (long)(int)uVar39 * 0x178 + 4);
    }
    else {
      uVar54 = 0;
    }
    if ((((uVar20 == 0) && (uVar52 != 0x2d)) && (uVar52 != 0x200b)) && (uVar52 != 0xad)) {
      if (*(char *)((long)unaff_x19 + 0x30d) == '\0') goto LAB_0603c69c;
LAB_0603c510:
      if (bVar14 == 0) {
        bVar14 = 0;
      }
      else {
        bVar12 = (bool)((uVar20 == 0 || uVar19 == 0xa0) & (uVar19 != 0xad | bVar15) ^ 1);
LAB_0603c548:
        bVar14 = 1;
        plVar53 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor:
        if (*(int *)(*plVar53 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_0608c948();
        if (bVar12 != false) goto LAB_0603c590;
      }
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
      if ((int)uVar52 < 0x2007) {
        if (uVar52 == 0x2d) {
          if (0 < (int)uVar93) {
            if (uVar3 <= uVar93 - 1) goto LAB_0603fce4;
            uVar54 = *(undefined2 *)(lVar26 + (ulong)(uVar93 - 1) * 0x178 + 4);
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar28 = FUN_0557df5c(uVar54,0);
            if ((uVar28 & 1) != 0) {
              if ((unaff_x19[0x75] == 0) ||
                 (lVar26 = *(long *)(unaff_x19[0x75] + 0x38), lVar26 == 0)) goto thunk_FUN_02e3ccc4;
              uVar3 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
              if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_0603fce4;
              if (*(int *)(lVar26 + (long)(int)uVar3 * 0x178 + 0x5c) == (int)unaff_x19[0x98])
              goto LAB_0603c5f8;
            }
          }
        }
        else if (uVar52 == 0xa0) goto LAB_0603c69c;
LAB_0603cad8:
        plVar53 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar26 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar26 = *plVar53;
        }
        bVar14 = 0;
        bVar12 = false;
        *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0xf80) = 0xffffffff;
        goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
      }
      if (((0x28 < uVar52 - 0x2007) ||
          ((1L << ((ulong)(uVar52 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar52 != 0x2060))
      goto LAB_0603cad8;
LAB_0603c69c:
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4) ==
          0) {
        thunk_FUN_02e9a04c();
      }
      uVar28 = FUN_060b1e64(uVar52,0);
      if ((uVar28 & 1) == 0) {
LAB_0603c6e8:
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar28 = FUN_060b1ec0(uVar19,0);
        if ((uVar28 & 1) != 0) goto LAB_0603c714;
        if (*(char *)((long)unaff_x19 + 0x30d) != '\0') goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<AchievementProgress>_TypeInfo + 0xe4)
            == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar28 = FUN_060b1ec0(uVar54,0);
        if ((uVar28 & 1) == 0) goto LAB_0603c510;
        if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        lVar26 = FUN_060a80a0(0);
        if ((lVar26 != 0) && (*(long *)(lVar26 + 0x18) != 0)) {
          uVar28 = FUN_052f86ac(*(long *)(lVar26 + 0x18),uVar54,
                                *(undefined8 *)
                                 System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                               );
          if ((uVar28 & 1) != 0) goto LAB_0603c510;
LAB_0603cb44:
          bVar12 = false;
          plVar53 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
          goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__PreprocessInteractor;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar28 = FUN_060a82b4(0);
      if ((uVar28 & 1) != 0) goto LAB_0603c6e8;
LAB_0603c714:
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar26 = FUN_060a80a0(0);
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) goto thunk_FUN_02e3ccc4;
      uVar28 = FUN_052f86ac(*(long *)(lVar26 + 0x10),uVar19,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((int)uVar5 <= *(int *)((long)unaff_x19 + 0x4ac)) {
        if ((uVar28 & 1) == 0) {
          bVar14 = 0;
          goto LAB_0603cb44;
        }
LAB_0603c85c:
        bVar12 = uVar20 != 0;
        if (uVar21 != uVar22 || ((bVar14 ^ 0xff) & 1) != 0) goto LAB_0603c5f8;
        goto LAB_0603c548;
      }
      if (*(int *)(*(long *)System_Collections_Generic_List<object[]>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      lVar26 = FUN_060a80a0(0);
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x18) == 0)) goto thunk_FUN_02e3ccc4;
      bVar13 = FUN_052f86ac(*(long *)(lVar26 + 0x18),uVar54,
                            *(undefined8 *)
                             System_Collections_Generic_List<ValueTuple<Rect,_Rect,_VisualElement>>_TypeInfo
                           );
      if ((uVar28 & 1) != 0) goto LAB_0603c85c;
      bVar14 = bVar13 & bVar14;
      bVar12 = (bool)(bVar14 & uVar20 != 0);
      plVar53 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
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
  unaff_x23 = (long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
  if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  unaff_x28 = &stack0x000011b0;
  FUN_0608c948();
  *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
  fVar57 = fVar85;
LAB_06038edc:
  lVar26 = unaff_x19[0x92];
  uVar92 = uVar92 + 1;
  in_stack_0000133c = uVar19;
  if (lVar26 == 0) goto thunk_FUN_02e3ccc4;
  goto LAB_06038b48;
LAB_0603d6e0:
  if (*(uint *)(lVar26 + 0x18) <= uVar16) goto LAB_0603fce4;
  uVar28 = (ulong)uVar16;
  piVar49 = (int *)(lVar25 + uVar28 * 0x178);
  lVar44 = *(long *)(piVar49 + 8);
  uVar55 = *(ushort *)(piVar49 + 1);
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar92 = (uint)uVar55;
  bVar14 = FUN_0557df5c(uVar55,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar16) goto LAB_0603fce4;
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x50), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar5 = *(uint *)(lVar25 + uVar28 * 0x178 + 0x3c);
  if (*(uint *)(lVar29 + 0x18) <= uVar5) goto LAB_0603fce4;
  lVar29 = lVar29 + (long)(int)uVar5 * 0x60;
  uVar19 = *(uint *)(lVar29 + 0x40);
  uVar3 = *(uint *)(lVar29 + 0x44);
  fVar91 = *(float *)(lVar29 + 0x58);
  fVar59 = *(float *)(lVar29 + 0x5c);
  uVar20 = *(uint *)(lVar29 + 0x6c);
  fVar83 = *(float *)(lVar29 + 0x60);
  fVar61 = *(float *)(lVar29 + 100);
  iVar23 = *(int *)(lVar29 + 0x20);
  fVar94 = *(float *)(lVar29 + 0x70);
  fVar87 = *(float *)(lVar29 + 0x74);
  iVar24 = *(int *)(lVar29 + 0x28);
  fVar72 = *(float *)(lVar29 + 0x78);
  fVar60 = *(float *)(lVar29 + 0x7c);
  iVar48 = *(int *)(lVar29 + 0x30);
  fVar84 = *(float *)(lVar29 + 0x50);
  if ((int)uVar20 < 9) {
    if ((int)uVar20 < 3) {
      if (uVar20 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000120 = fVar61 + 0.0;
        }
        else {
          fStack0000000000000120 = 0.0 - fVar59;
        }
        fStack0000000000000104 = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar20 == 2) {
        fStack0000000000000120 = (fVar61 + fVar83 * 0.5) - fVar59 * 0.5;
LAB_0603d9dc:
        fStack0000000000000124 = 0.0;
        fStack0000000000000104 = 0.0;
      }
      else {
LAB_0603d8ac:
        uVar55 = NEON_umaxv(CONCAT26(-(ushort)(uVar55 == (ushort)((ulong)_UNK_01318f18 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar55 ==
                                                       (ushort)((ulong)_UNK_01318f18 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar55 ==
                                                                (ushort)((ulong)_UNK_01318f18 >>
                                                                        0x10)),
                                                       -(ushort)(uVar55 == (ushort)_UNK_01318f18))))
                            ,2);
        if (((((uVar55 & 1) == 0) && (uVar92 != 3)) && (uVar20 == 8)) && ((int)uVar16 <= (int)uVar3)
           ) goto LAB_0603d8ec;
      }
    }
    else if (uVar20 != 3) {
      if (uVar20 != 4) goto LAB_0603d8ac;
      fStack0000000000000104 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar59 = 0.0;
      }
      fStack0000000000000120 = (fVar83 + fVar61) - fVar59;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar20 == 0x10) {
    if ((int)uVar16 <= (int)uVar3) {
      if (uVar92 < 0xad) {
        if ((uVar92 != 3) && (uVar92 != 10)) {
LAB_0603d8ec:
          if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_0603fce4;
          uVar54 = *(undefined2 *)(lVar25 + (long)(int)uVar19 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar46 = FUN_05581208(uVar54,0);
          if ((uVar46 & 1) == 0) {
            bVar1 = (int)uVar5 < (int)unaff_x19[0x98];
          }
          else {
            bVar1 = false;
          }
          unaff_x28 = &stack0x000011b0;
          if ((!bVar1 && (uVar20 >> 4 & 1) == 0) && (fVar59 <= fVar83)) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar83;
            }
            fStack0000000000000120 = fVar61 + fStack0000000000000120;
            goto LAB_0603d9dc;
          }
          if (((uVar16 == 0) || (uVar5 != uVar18)) || (uVar16 == *(uint *)((long)unaff_x19 + 0x364))
             ) {
            fStack0000000000000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000120 = fVar83;
            }
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            fStack0000000000000120 = fVar61 + fStack0000000000000120;
            uStack000000000000004c = FUN_055814cc(uVar92,0);
            fStack0000000000000124 = 0.0;
            fStack0000000000000104 = 0.0;
          }
          else {
            cVar33 = (char)unaff_x19[0x1e];
            iVar48 = (iVar48 - iVar23) - (uStack000000000000004c & 1);
            fVar61 = -fVar59;
            if (cVar33 != '\0') {
              fVar61 = fVar59;
            }
            if (iVar48 < 1) {
              fVar59 = 1.0;
              iVar48 = 1;
            }
            else {
              fVar59 = *(float *)(unaff_x19 + 0x62);
            }
            if (uVar92 == 9) {
LAB_0603f69c:
              fVar59 = ((fVar83 + fVar61) * (1.0 - fVar59)) / (float)iVar48;
              if (cVar33 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar59;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000104 = fStack0000000000000104 + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar59;
              }
            }
            else {
              if (uVar92 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uVar46 = FUN_055814cc(uVar92,0);
                cVar33 = (char)unaff_x19[0x1e];
                if ((uVar46 & 1) != 0) goto LAB_0603f69c;
              }
              fVar59 = ((fVar83 + fVar61) * fVar59) /
                       (float)(int)((iVar23 - ((uStack000000000000004c ^ 0xffffffff) & 1)) + iVar24)
              ;
              if (cVar33 == '\0') {
                fStack0000000000000120 = fStack0000000000000120 + fVar59;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000104 = fStack0000000000000104 + 0.0;
              }
              else {
                fStack0000000000000120 = fStack0000000000000120 - fVar59;
              }
            }
          }
        }
      }
      else if (((uVar92 != 0xad) && (uVar92 != 0x200b)) && (uVar92 != 0x2060)) goto LAB_0603d8ec;
    }
  }
  else if (uVar20 == 0x20) {
    fStack0000000000000120 = (fVar61 + fVar83 * 0.5) - (fVar94 + fVar72) * 0.5;
    fStack0000000000000104 = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar20 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar20 <= uVar16) goto LAB_0603fce4;
  lVar29 = lVar25 + uVar28 * 0x178;
  fVar59 = fStack00000000000000c0 + fStack0000000000000120;
  fVar83 = fStack00000000000001b0 + fStack0000000000000124;
  fVar61 = fStack00000000000000bc + fStack0000000000000104;
  if (*(char *)(lVar29 + 0x170) == '\0') goto LAB_0603e204;
  iVar23 = *piVar49;
  if (iVar23 == 0) {
    fVar58 = fmodf(*(float *)((long)unaff_x19 + 0x354) * (float)(int)uVar5,1.0);
    iVar24 = *(int *)((long)unaff_x19 + 0x34c);
    if (iVar24 < 2) {
      if (iVar24 == 0) {
        lVar41 = lVar25 + uVar28 * 0x178;
        *(undefined4 *)(lVar41 + 100) = 0;
        *(undefined4 *)(lVar41 + 0x8c) = 0;
        *(undefined4 *)(lVar41 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar41 + 0xdc) = 0x3f800000;
      }
      else if (iVar24 == 1) {
        lVar41 = lVar25 + uVar28 * 0x178;
        fVar60 = *(float *)(lVar41 + 0x48);
        pfVar2 = (float *)(lVar41 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar41 = lVar25 + uVar28 * 0x178;
          fVar72 = *(float *)(lVar41 + 0x70);
          *pfVar2 = fVar58 + ((fStack0000000000000120 + fVar60) - *(float *)(unaff_x19 + 0x9f)) /
                             (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar41 + 0x8c) =
               fVar58 + ((fStack0000000000000120 + fVar72) - *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar41 + 0xb4) =
               fVar58 + ((fStack0000000000000120 + *(float *)(lVar41 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
          *(float *)(lVar41 + 0xdc) =
               fVar58 + ((fStack0000000000000120 + *(float *)(lVar41 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9f)) /
                        (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
        }
        else {
          lVar41 = lVar25 + uVar28 * 0x178;
          fVar72 = fVar72 - fVar94;
          fVar87 = *(float *)(lVar41 + 0x70);
          fVar73 = *(float *)(lVar41 + 0x98);
          fVar62 = *(float *)(lVar41 + 0xc0);
          *pfVar2 = fVar58 + (fVar60 - fVar94) / fVar72;
          *(float *)(lVar41 + 0x8c) = fVar58 + (fVar87 - fVar94) / fVar72;
          *(float *)(lVar41 + 0xb4) = fVar58 + (fVar73 - fVar94) / fVar72;
          *(float *)(lVar41 + 0xdc) = fVar58 + (fVar62 - fVar94) / fVar72;
        }
      }
    }
    else if (iVar24 == 2) {
      lVar41 = lVar25 + uVar28 * 0x178;
      *(float *)(lVar41 + 100) =
           fVar58 + ((fStack0000000000000120 + *(float *)(lVar41 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar41 + 0x8c) =
           fVar58 + ((fStack0000000000000120 + *(float *)(lVar41 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar41 + 0xb4) =
           fVar58 + ((fStack0000000000000120 + *(float *)(lVar41 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
      *(float *)(lVar41 + 0xdc) =
           fVar58 + ((fStack0000000000000120 + *(float *)(lVar41 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9f)) /
                    (*(float *)(unaff_x19 + 0xa0) - *(float *)(unaff_x19 + 0x9f));
    }
    else if (iVar24 == 3) {
      iVar24 = (int)unaff_x19[0x6a];
      if (iVar24 < 2) {
        if (iVar24 == 0) {
          lVar41 = lVar25 + uVar28 * 0x178;
          *(undefined4 *)(lVar41 + 0x68) = 0;
          *(undefined4 *)(lVar41 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar41 + 0xb8) = 0;
          *(undefined4 *)(lVar41 + 0xe0) = 0x3f800000;
        }
        else if (iVar24 == 1) {
          lVar41 = lVar25 + uVar28 * 0x178;
          fVar60 = fVar60 - fVar87;
          fVar72 = (*(float *)(lVar41 + 0x74) - fVar87) / fVar60;
          fVar60 = fVar58 + (*(float *)(lVar41 + 0x4c) - fVar87) / fVar60;
          *(float *)(lVar41 + 0x68) = fVar60;
          *(float *)(lVar41 + 0xb8) = fVar60;
          goto LAB_0603ddfc;
        }
      }
      else if (iVar24 == 2) {
        lVar41 = lVar25 + uVar28 * 0x178;
        fVar60 = fVar58 + (*(float *)(lVar41 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
                          (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc)
                          );
        *(float *)(lVar41 + 0x68) = fVar60;
        fVar72 = *(float *)((long)unaff_x19 + 0x4fc);
        fVar87 = *(float *)((long)unaff_x19 + 0x504);
        *(float *)(lVar41 + 0xb8) = fVar60;
        fVar72 = (*(float *)(lVar41 + 0x74) - fVar72) / (fVar87 - fVar72);
LAB_0603ddfc:
        *(float *)(lVar41 + 0x90) = fVar58 + fVar72;
        *(float *)(lVar41 + 0xe0) = fVar58 + fVar72;
      }
      else if (iVar24 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_062244a4(*(undefined8 *)System_Collections_Generic_List<BaseVideoBoardScreen>_TypeInfo,0
                    );
        uVar20 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar20 <= uVar16) goto LAB_0603fce4;
      lVar41 = lVar25 + uVar28 * 0x178;
      fVar87 = *(float *)(lVar41 + 0x138);
      fVar72 = (1.0 - (*(float *)(lVar41 + 0x68) + *(float *)(lVar41 + 0x90)) * fVar87) * 0.5;
      fVar60 = fVar58 + *(float *)(lVar41 + 0x68) * fVar87 + fVar72;
      fVar58 = fVar58 + fVar72 + *(float *)(lVar41 + 0x90) * fVar87;
      *(float *)(lVar41 + 100) = fVar60;
      *(float *)(lVar41 + 0x8c) = fVar60;
      *(float *)(lVar41 + 0xb4) = fVar58;
      *(float *)(lVar41 + 0xdc) = fVar58;
    }
    iVar24 = (int)unaff_x19[0x6a];
    if (iVar24 < 2) {
      if (iVar24 == 0) {
        if (uVar20 <= uVar16) goto LAB_0603fce4;
        lVar41 = lVar25 + uVar28 * 0x178;
        *(undefined4 *)(lVar41 + 0x68) = 0;
        *(undefined4 *)(lVar41 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar41 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar41 + 0xe0) = 0;
      }
      else if (iVar24 == 1) {
        if (uVar16 < uVar20) {
          lVar41 = lVar25 + uVar28 * 0x178;
          fVar84 = fVar84 - fVar91;
          fVar58 = (*(float *)(lVar41 + 0x4c) - fVar91) / fVar84;
          fVar84 = (*(float *)(lVar41 + 0x74) - fVar91) / fVar84;
          *(float *)(lVar41 + 0x68) = fVar58;
          goto LAB_0603df74;
        }
        goto LAB_0603fce4;
      }
    }
    else if (iVar24 == 2) {
      if (uVar20 <= uVar16) goto LAB_0603fce4;
      lVar41 = lVar25 + uVar28 * 0x178;
      fVar58 = (*(float *)(lVar41 + 0x4c) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
      *(float *)(lVar41 + 0x68) = fVar58;
      fVar84 = (*(float *)(lVar41 + 0x74) - *(float *)((long)unaff_x19 + 0x4fc)) /
               (*(float *)((long)unaff_x19 + 0x504) - *(float *)((long)unaff_x19 + 0x4fc));
LAB_0603df74:
      *(float *)(lVar41 + 0x90) = fVar84;
      *(float *)(lVar41 + 0xb8) = fVar84;
      *(float *)(lVar41 + 0xe0) = fVar58;
    }
    else if (iVar24 == 3) {
      if (uVar20 <= uVar16) goto LAB_0603fce4;
      lVar41 = lVar25 + uVar28 * 0x178;
      fVar72 = *(float *)(lVar41 + 0x138);
      fVar60 = (1.0 - (*(float *)(lVar41 + 100) + *(float *)(lVar41 + 0xb4)) / fVar72) * 0.5;
      fVar58 = *(float *)(lVar41 + 100) / fVar72 + fVar60;
      fVar60 = fVar60 + *(float *)(lVar41 + 0xb4) / fVar72;
      *(float *)(lVar41 + 0x68) = fVar58;
      *(float *)(lVar41 + 0xe0) = fVar58;
      *(float *)(lVar41 + 0x90) = fVar60;
      *(float *)(lVar41 + 0xb8) = fVar60;
    }
    if (uVar20 <= uVar16) goto LAB_0603fce4;
    lVar41 = lVar25 + uVar28 * 0x178;
    fVar58 = *(float *)(unaff_x19 + 0x5c) *
             ABS(auVar77._0_4_) * *(float *)(lVar41 + 0x13c) *
             (1.0 - *(float *)((long)unaff_x19 + 0x304));
    if ((*(char *)(lVar41 + 0x34) == '\0') &&
       ((*(byte *)(lVar25 + uVar28 * 0x178 + 0x16c) & 1) != 0)) {
      fVar58 = -fVar58;
    }
    lVar41 = lVar25 + uVar28 * 0x178;
    *(float *)(lVar41 + 0x60) = fVar58;
    *(float *)(lVar41 + 0x88) = fVar58;
    *(float *)(lVar41 + 0xb0) = fVar58;
    *(float *)(lVar41 + 0xd8) = fVar58;
  }
  if (((int)uVar16 < (int)unaff_x19[0x6d]) &&
     (iStack00000000000000ec < *(int *)((long)unaff_x19 + 0x36c))) {
    if (((int)unaff_x19[0x6e] <= (int)uVar5) || (*(int *)((long)unaff_x19 + 0x314) == 5)) {
      if (((int)uVar5 < (int)unaff_x19[0x6e]) && (*(int *)((long)unaff_x19 + 0x314) == 5)) {
        if (uVar16 < uVar20) {
          if (*(uint *)(lVar25 + uVar28 * 0x178 + 0x40) == uVar6) {
            lVar29 = lVar25 + uVar28 * 0x178;
            *(ulong *)(lVar29 + 0x48) =
                 CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x48) >> 0x20),
                          fVar59 + (float)*(undefined8 *)(lVar29 + 0x48));
            *(float *)(lVar29 + 0x50) = fVar61 + *(float *)(lVar29 + 0x50);
            *(ulong *)(lVar29 + 0x70) =
                 CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                          fVar59 + (float)*(undefined8 *)(lVar29 + 0x70));
            *(float *)(lVar29 + 0x78) = fVar61 + *(float *)(lVar29 + 0x78);
            *(ulong *)(lVar29 + 0x98) =
                 CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                          fVar59 + (float)*(undefined8 *)(lVar29 + 0x98));
            *(float *)(lVar29 + 0xa0) = fVar61 + *(float *)(lVar29 + 0xa0);
            *(ulong *)(lVar29 + 0xc0) =
                 CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                          fVar59 + (float)*(undefined8 *)(lVar29 + 0xc0));
            *(float *)(lVar29 + 200) = fVar61 + *(float *)(lVar29 + 200);
            goto LAB_0603e188;
          }
          goto LAB_0603e0c4;
        }
        goto LAB_0603fce4;
      }
      goto LAB_0603e0c4;
    }
    if (uVar20 <= uVar16) goto LAB_0603fce4;
    lVar29 = lVar25 + uVar28 * 0x178;
    *(ulong *)(lVar29 + 0x48) =
         CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x48) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar29 + 0x48));
    *(float *)(lVar29 + 0x50) = fVar61 + *(float *)(lVar29 + 0x50);
    *(ulong *)(lVar29 + 0x70) =
         CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar29 + 0x70));
    *(float *)(lVar29 + 0x78) = fVar61 + *(float *)(lVar29 + 0x78);
    *(ulong *)(lVar29 + 0x98) =
         CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar29 + 0x98));
    *(float *)(lVar29 + 0xa0) = fVar61 + *(float *)(lVar29 + 0xa0);
    *(ulong *)(lVar29 + 0xc0) =
         CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar29 + 0xc0));
    *(float *)(lVar29 + 200) = fVar61 + *(float *)(lVar29 + 200);
  }
  else {
LAB_0603e0c4:
    if (uVar20 <= uVar16) goto LAB_0603fce4;
    if (DAT_06e84e3e == '\0') {
      FUN_02e3ca1c(PTR_DAT_06a2ef80);
      uVar20 = *(uint *)(lVar26 + 0x18);
      DAT_06e84e3e = '\x01';
    }
    puVar11 = PTR_DAT_06a2ef80;
    uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8) + 1);
    *(undefined8 *)(lVar25 + uVar28 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_06a2ef80 + 0xb8);
    *(undefined4 *)(lVar25 + uVar28 * 0x178 + 0x50) = uVar71;
    if (uVar20 <= uVar16) goto LAB_0603fce4;
    lVar41 = lVar25 + uVar28 * 0x178;
    uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar41 + 0x70) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar41 + 0x78) = uVar71;
    uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined8 *)(lVar41 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    *(undefined4 *)(lVar41 + 0xa0) = uVar71;
    uVar31 = **(undefined8 **)(*(long *)puVar11 + 0xb8);
    uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
    *(undefined1 *)(lVar29 + 0x170) = 0;
    *(undefined8 *)(lVar41 + 0xc0) = uVar31;
    *(undefined4 *)(lVar41 + 200) = uVar71;
  }
LAB_0603e188:
  iVar24 = FUN_06232690(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar24 == 1;
  if (iVar23 == 0) {
    puVar37 = (undefined8 *)(*unaff_x19 + 0x8d8);
LAB_0603e1dc:
    (*(code *)*puVar37)();
  }
  else if (iVar23 == 1) {
    puVar37 = (undefined8 *)(*unaff_x19 + 0x8f8);
    goto LAB_0603e1dc;
  }
  unaff_x28 = &stack0x000011b0;
LAB_0603e204:
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
  lVar29 = lVar29 + uVar28 * 0x178;
  uVar31 = *(undefined8 *)(lVar29 + 0x114);
  *(float *)(lVar29 + 0x11c) = fVar61 + *(float *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x114) =
       CONCAT44(fVar83 + (float)((ulong)uVar31 >> 0x20),fVar59 + (float)uVar31);
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
  lVar29 = lVar29 + uVar28 * 0x178;
  *(ulong *)(lVar29 + 0x108) =
       CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x108) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar29 + 0x108));
  *(float *)(lVar29 + 0x110) = fVar61 + *(float *)(lVar29 + 0x110);
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
  lVar29 = lVar29 + uVar28 * 0x178;
  *(ulong *)(lVar29 + 0x120) =
       CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar29 + 0x120) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar29 + 0x120));
  *(float *)(lVar29 + 0x128) = fVar61 + *(float *)(lVar29 + 0x128);
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
  lVar29 = lVar29 + uVar28 * 0x178;
  uVar31 = *(undefined8 *)(lVar29 + 300);
  *(float *)(lVar29 + 0x134) = fVar61 + *(float *)(lVar29 + 0x134);
  *(undefined8 *)(lVar29 + 300) =
       CONCAT44(fVar83 + (float)((ulong)uVar31 >> 0x20),fVar59 + (float)uVar31);
  lVar29 = unaff_x19[0x75];
  if ((lVar29 == 0) || (lVar41 = *(long *)(lVar29 + 0x38), lVar41 == 0)) goto thunk_FUN_02e3ccc4;
  uVar20 = *(uint *)(lVar41 + 0x18);
  if (uVar20 <= uVar16) goto LAB_0603fce4;
  lVar45 = lVar41 + 0x20 + uVar28 * 0x178;
  uVar31 = *(undefined8 *)(lVar45 + 0x118);
  auVar69._0_8_ = CONCAT44(fVar59 + (float)((ulong)uVar31 >> 0x20),fVar59 + (float)uVar31);
  auVar69._8_4_ = fVar83 + (float)*(undefined8 *)(lVar45 + 0x120);
  auVar69._12_4_ = fVar83 + (float)((ulong)*(undefined8 *)(lVar45 + 0x120) >> 0x20);
  *(float *)(lVar45 + 0x128) = fVar83 + *(float *)(lVar45 + 0x128);
  *(long *)(lVar45 + 0x120) = auVar69._8_8_;
  *(undefined8 *)(lVar45 + 0x118) = auVar69._0_8_;
  if (uVar5 == uVar18) {
    uVar18 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
    if (uVar16 == uVar18) goto LAB_0603e414;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_0603fce4;
    lVar45 = lVar29 + 0x20 + (long)(int)uVar18 * 0x60;
    fVar60 = fVar83 + *(float *)(lVar45 + 0x38);
    *(ulong *)(lVar45 + 0x30) =
         CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar45 + 0x30) >> 0x20),
                  fVar83 + (float)*(undefined8 *)(lVar45 + 0x30));
    *(float *)(lVar45 + 0x38) = fVar60;
    *(float *)(lVar45 + 0x3c) = fVar59 + *(float *)(lVar45 + 0x3c);
    if (uVar20 <= *(uint *)(lVar45 + 0x18)) goto LAB_0603fce4;
    lVar29 = lVar29 + 0x20 + (long)(int)uVar18 * 0x60;
    uVar71 = *(undefined4 *)(lVar41 + 0x20 + (long)(int)*(uint *)(lVar45 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar29 + 0x54) = fVar60;
    *(undefined4 *)(lVar29 + 0x50) = uVar71;
    lVar29 = unaff_x19[0x75];
    if ((lVar29 == 0) || (lVar41 = *(long *)(lVar29 + 0x50), lVar41 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar41 + 0x18) <= uVar18) goto LAB_0603fce4;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    uVar20 = *(uint *)(lVar41 + 0x20 + (long)(int)uVar18 * 0x60 + 0x24);
    if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_0603fce4;
    lVar41 = lVar41 + 0x20 + (long)(int)uVar18 * 0x60;
    *(undefined4 *)(lVar41 + 0x58) = *(undefined4 *)(lVar29 + (long)(int)uVar20 * 0x178 + 0x120);
    *(undefined4 *)(lVar41 + 0x5c) = *(undefined4 *)(lVar41 + 0x30);
    uVar18 = *(int *)((long)unaff_x19 + 0x4ac) - 1;
LAB_0603e414:
    if (uVar16 == uVar18) {
      lVar29 = unaff_x19[0x75];
      if ((lVar29 == 0) || (lVar41 = *(long *)(lVar29 + 0x50), lVar41 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar41 + 0x18) <= uVar5) goto LAB_0603fce4;
      lVar45 = lVar41 + 0x20 + (long)(int)uVar5 * 0x60;
      fVar60 = fVar83 + *(float *)(lVar45 + 0x38);
      *(ulong *)(lVar45 + 0x30) =
           CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar45 + 0x30) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar45 + 0x30));
      *(float *)(lVar45 + 0x38) = fVar60;
      *(float *)(lVar45 + 0x3c) = fVar59 + *(float *)(lVar45 + 0x3c);
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      uVar18 = *(uint *)(lVar41 + 0x20 + (long)(int)uVar5 * 0x60 + 0x18);
      if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_0603fce4;
      *(undefined4 *)(lVar45 + 0x50) = *(undefined4 *)(lVar29 + (long)(int)uVar18 * 0x178 + 0x114);
      *(float *)(lVar45 + 0x54) = fVar60;
      lVar29 = unaff_x19[0x75];
      if ((lVar29 == 0) || (lVar41 = *(long *)(lVar29 + 0x50), lVar41 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar41 + 0x18) <= uVar5) goto LAB_0603fce4;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      uVar18 = *(uint *)(lVar41 + 0x20 + (long)(int)uVar5 * 0x60 + 0x24);
      if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_0603fce4;
      lVar41 = lVar41 + 0x20 + (long)(int)uVar5 * 0x60;
      *(undefined4 *)(lVar41 + 0x58) = *(undefined4 *)(lVar29 + (long)(int)uVar18 * 0x178 + 0x120);
      *(undefined4 *)(lVar41 + 0x5c) = *(undefined4 *)(lVar41 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar46 = FUN_05580720(uVar92,0);
  if (((((uVar46 & 1) == 0) && (1 < uVar92 - 0x2010)) && (uVar92 != 0xad)) && (uVar92 != 0x2d)) {
    if (bVar8) {
      if (((uVar16 != 0) && ((int)uVar16 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
         (((int)uVar16 < *(int *)((long)unaff_x19 + 0x4ac) &&
          ((uVar92 == 0x2019 || (uVar92 == 0x27)))))) {
        if (*(uint *)(lVar26 + 0x18) <= uVar16 - 1) goto LAB_0603fce4;
        uVar54 = *(undefined2 *)(lVar25 + (ulong)(uVar16 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar46 = FUN_05580720(uVar54,0);
        if ((uVar46 & 1) != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar16 + 1) goto LAB_0603fce4;
          uVar54 = *(undefined2 *)(lVar25 + (ulong)(uVar16 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar46 = FUN_05580720(uVar54,0);
          unaff_x28 = &stack0x000011b0;
          if ((uVar46 & 1) != 0) goto LAB_0603e714;
        }
      }
LAB_0603f468:
      if (uVar16 == *(int *)((long)unaff_x19 + 0x4ac) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar46 = FUN_05580720(uVar92,0);
        uVar18 = uVar16;
        if ((uVar46 & 1) == 0) goto LAB_0603f4a4;
      }
      else {
LAB_0603f4a4:
        uVar18 = uVar16 - 1;
      }
      lVar29 = unaff_x19[0x75];
      if (lVar29 != 0) {
        lVar41 = *(long *)(lVar29 + 0x40);
        if (lVar41 != 0) {
          uVar20 = *(uint *)(lVar29 + 0x24);
          iVar23 = *(int *)(lVar41 + 0x18);
          if (iVar23 < (int)(uVar20 + 1)) {
            if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                      ((long *)(lVar29 + 0x40),iVar23 + 1,
                       *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
            lVar29 = unaff_x19[0x75];
            if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
          }
          lVar29 = *(long *)(lVar29 + 0x40);
          if (lVar29 != 0) {
            if (uVar20 < *(uint *)(lVar29 + 0x18)) {
              lVar29 = lVar29 + (long)(int)uVar20 * 0x18;
              *(long **)(lVar29 + 0x20) = unaff_x19;
              *(uint *)(lVar29 + 0x28) = uVar17;
              *(uint *)(lVar29 + 0x2c) = uVar18;
              *(uint *)(lVar29 + 0x30) = (uVar18 - uVar17) + 1;
              thunk_FUN_02ee2be8();
              lVar29 = unaff_x19[0x75];
              if (lVar29 != 0) {
                lVar41 = *(long *)(lVar29 + 0x50);
                *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
                if (lVar41 != 0) {
                  if (uVar5 < *(uint *)(lVar41 + 0x18)) {
                    bVar8 = false;
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
    if (uVar16 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      bVar15 = FUN_05580678(uVar92,0);
      if ((((uVar92 == 0x200b | bVar15 ^ 0xff | bVar14) & 1) != 0) ||
         (*(int *)((long)unaff_x19 + 0x4ac) == 1)) goto LAB_0603f468;
    }
    bVar8 = false;
  }
  else {
    if (!bVar8) {
      uVar17 = uVar16;
    }
    if (uVar16 != *(int *)((long)unaff_x19 + 0x4ac) - 1U) {
LAB_0603e714:
      bVar8 = true;
      goto LAB_0603e71c;
    }
    lVar29 = unaff_x19[0x75];
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    lVar41 = *(long *)(lVar29 + 0x40);
    if (lVar41 == 0) goto thunk_FUN_02e3ccc4;
    uVar18 = *(uint *)(lVar29 + 0x24);
    iVar23 = *(int *)(lVar41 + 0x18);
    if (iVar23 < (int)(uVar18 + 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<AchievementDefinition>_TypeInfo + 0xe4)
          == 0) {
        thunk_FUN_02e9a04c();
      }
      System_Array__InternalArray__ICollection_Add<ValueTuple<int,_Vector2Int>>
                ((long *)(lVar29 + 0x40),iVar23 + 1,
                 *(undefined8 *)System_Collections_Generic_List<ABSSequentiable>_TypeInfo);
      lVar29 = unaff_x19[0x75];
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    }
    lVar29 = *(long *)(lVar29 + 0x40);
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_0603fce4;
    lVar29 = lVar29 + (long)(int)uVar18 * 0x18;
    *(long **)(lVar29 + 0x20) = unaff_x19;
    *(uint *)(lVar29 + 0x28) = uVar17;
    *(uint *)(lVar29 + 0x2c) = uVar16;
    *(uint *)(lVar29 + 0x30) = (uVar16 - uVar17) + 1;
    thunk_FUN_02ee2be8();
    lVar29 = unaff_x19[0x75];
    if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
    lVar41 = *(long *)(lVar29 + 0x50);
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
    if (lVar41 == 0) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar41 + 0x18) <= uVar5) goto LAB_0603fce4;
    bVar8 = true;
LAB_0603e630:
    unaff_x28 = &stack0x000011b0;
    lVar41 = lVar41 + (long)(int)uVar5 * 0x60;
    iStack00000000000000ec = iStack00000000000000ec + 1;
    *(int *)(lVar41 + 0x34) = *(int *)(lVar41 + 0x34) + 1;
  }
LAB_0603e71c:
  lVar29 = unaff_x19[0x75];
  if ((lVar29 == 0) || (lVar41 = *(long *)(lVar29 + 0x38), lVar41 == 0)) goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar41 + 0x18) <= uVar16) goto LAB_0603fce4;
  lVar45 = lVar41 + 0x20;
  if ((*(byte *)(lVar45 + uVar28 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar10) {
      if (*(uint *)(lVar41 + 0x18) <= (uint)((long)(int)uVar16 + -1)) goto LAB_0603fce4;
      lVar45 = lVar45 + ((long)(int)uVar16 + -1) * 0x178;
      lVar41 = *unaff_x19;
      uVar71 = *(undefined4 *)(lVar45 + 0x100);
      uVar79 = *(undefined4 *)(lVar45 + 0x13c);
LAB_0603e9d8:
      pcVar38 = *(code **)(lVar41 + 0x908);
LAB_0603e9e0:
      (*pcVar38)(fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,uVar71,
                 fStack0000000000000138,0,fVar56,uVar79);
LAB_0603ea24:
      lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
      }
      fStack000000000000016c = 0.0;
      fStack0000000000000134 = 0.0;
      fStack0000000000000138 = *(float *)(*(long *)(lVar29 + 0xb8) + 0x1730);
    }
    bVar10 = false;
  }
  else {
    lVar41 = lVar45 + uVar28 * 0x178;
    *(int *)(lVar41 + 0x148) = iVar47;
    iVar23 = *(int *)(lVar41 + 0x40);
    if ((((int)unaff_x19[0x6d] < (int)uVar16) || ((int)unaff_x19[0x6e] < (int)uVar5)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 && (iVar23 + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar14 & 1) == 0 && uVar92 != 0x200b) {
      fVar59 = *(float *)(lVar45 + uVar28 * 0x178 + 0x13c);
      if (fStack000000000000016c <= fVar59) {
        fStack000000000000016c = fVar59;
      }
      if (fStack0000000000000134 <= ABS(fVar58)) {
        fStack0000000000000134 = ABS(fVar58);
      }
      if (iVar23 != iStack0000000000000060) {
        if (*(int *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02e9a04c();
          lVar29 = unaff_x19[0x75];
          if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
          lVar41 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        else {
          lVar41 = *(long *)(*(long *)System_Collections_Generic_List<AudioListener>_TypeInfo + 0xb8
                            );
        }
        fStack0000000000000138 = *(float *)(lVar41 + 0x1730);
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
      if (unaff_x19[0x1f] == 0) goto thunk_FUN_02e3ccc4;
      fVar60 = *(float *)(lVar29 + uVar28 * 0x178 + 0x144);
      fVar59 = (float)FUN_0630f910(unaff_x19[0x1f] + 0x28,0);
      fVar60 = fVar60 + fStack000000000000016c * fVar59;
      iStack0000000000000060 = iVar23;
      if (fVar60 <= fStack0000000000000138) {
        fStack0000000000000138 = fVar60;
      }
    }
    if (!bVar10) {
      bVar10 = false;
      if ((bVar1) && ((int)uVar16 <= (int)uVar3)) {
        if ((uVar92 & 0xfffe) == 10) goto LAB_0603ea5c;
        if (uVar92 != 0xd) {
          if (uVar16 == uVar3) {
            if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar46 = FUN_055814cc(uVar92,0);
            if ((uVar46 & 1) != 0) goto LAB_0603e930;
          }
          if ((unaff_x19[0x75] != 0) && (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
            if (uVar16 < *(uint *)(lVar29 + 0x18)) {
              lVar29 = lVar29 + uVar28 * 0x178;
              fVar56 = *(float *)(lVar29 + 0x15c);
              fVar59 = fVar58;
              fVar60 = fVar56;
              if (fStack000000000000016c != 0.0) {
                fVar59 = fStack0000000000000134;
                fVar60 = fStack000000000000016c;
              }
              fStack000000000000016c = fVar60;
              uStack0000000000000068 = 0;
              fStack000000000000006c = *(float *)(lVar29 + 0x114);
              uStack0000000000000084 = *(undefined4 *)(lVar29 + 0x164);
              fStack0000000000000064 = fStack0000000000000138;
              fStack0000000000000134 = fVar59;
              goto LAB_0603e99c;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
      }
LAB_0603e930:
      bVar10 = false;
      goto LAB_0603ea5c;
    }
LAB_0603e99c:
    if (*(int *)((long)unaff_x19 + 0x4ac) == 1) {
      if ((unaff_x19[0x75] != 0) && (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
        if (uVar16 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + uVar28 * 0x178;
LAB_0603e9cc:
          lVar41 = *unaff_x19;
          uVar71 = *(undefined4 *)(lVar29 + 0x120);
          uVar79 = *(undefined4 *)(lVar29 + 0x15c);
          goto LAB_0603e9d8;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((uVar16 == uVar19) || ((int)uVar3 <= (int)uVar16)) {
      lVar29 = unaff_x19[0x75];
      if ((bVar14 & 1) == 0 && uVar92 != 0x200b) {
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
        lVar29 = lVar29 + uVar28 * 0x178;
      }
      else {
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar29 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar29 = lVar29 + (long)(int)uVar3 * 0x178;
      }
      uVar71 = *(undefined4 *)(lVar29 + 0x120);
      uVar79 = *(undefined4 *)(lVar29 + 0x15c);
      pcVar38 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_0603e9e0;
    }
    if (!bVar1) {
      if ((unaff_x19[0x75] != 0) && (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
        if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + ((long)(int)uVar16 + -1) * 0x178;
          goto LAB_0603e9cc;
        }
        goto LAB_0603fce4;
      }
      goto thunk_FUN_02e3ccc4;
    }
    if ((int)uVar16 < *(int *)((long)unaff_x19 + 0x4ac) + -1) {
      if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= uVar16 + 1) goto LAB_0603fce4;
      uVar46 = FUN_06059f90(uStack0000000000000084,
                            *(undefined4 *)(lVar29 + (ulong)(uVar16 + 1) * 0x178 + 0x164),0);
      if ((uVar46 & 1) == 0) {
        if ((unaff_x19[0x75] != 0) && (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 != 0)) {
          if (uVar16 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + uVar28 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack000000000000006c,fStack0000000000000064,uStack0000000000000068,
                       *(undefined4 *)(lVar29 + 0x120),fStack0000000000000138,0,fVar56,
                       *(undefined4 *)(lVar29 + 0x15c));
            unaff_x28 = &stack0x000011b0;
            goto LAB_0603ea24;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      bVar10 = true;
      unaff_x28 = &stack0x000011b0;
    }
    else {
      bVar10 = true;
    }
  }
LAB_0603ea5c:
  if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
  goto thunk_FUN_02e3ccc4;
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
  if (lVar44 == 0) goto thunk_FUN_02e3ccc4;
  uVar18 = *(uint *)(lVar29 + uVar28 * 0x178 + 0x18c);
  fVar59 = (float)FUN_0630f920(lVar44 + 0x28,0);
  if ((uVar18 >> 6 & 1) == 0) {
    if (bVar12) {
      if ((unaff_x19[0x75] != 0) && (lVar44 = *(long *)(unaff_x19[0x75] + 0x38), lVar44 != 0)) {
        if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar44 + 0x18)) {
          lVar44 = lVar44 + ((long)(int)uVar16 + -1) * 0x178;
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
    lVar29 = unaff_x19[0x75];
    if ((lVar29 == 0) || (lVar41 = *(long *)(lVar29 + 0x38), lVar41 == 0)) goto thunk_FUN_02e3ccc4;
    if (*(uint *)(lVar41 + 0x18) <= uVar16) goto LAB_0603fce4;
    *(int *)(lVar41 + 0x20 + uVar28 * 0x178 + 0x150) = iVar47;
    if ((((int)unaff_x19[0x6d] < (int)uVar16) || ((int)unaff_x19[0x6e] < (int)uVar5)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar41 + 0x20 + uVar28 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar12 | bVar1 ^ 1U)) || ((int)uVar3 < (int)uVar16)) || ((uVar92 & 0xfffe) == 10))
       || (uVar92 == 0xd)) {
LAB_0603eb9c:
      if (!bVar12) goto LAB_0603eba4;
    }
    else {
      if (uVar16 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar46 = FUN_055814cc(uVar92,0);
        if ((uVar46 & 1) != 0) goto LAB_0603eb9c;
        lVar29 = unaff_x19[0x75];
        if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0603fce4;
      lVar29 = lVar29 + uVar28 * 0x178;
      fVar57 = *(float *)(lVar29 + 0x15c);
      fStack0000000000000098 = fVar59 * fVar57 + *(float *)(lVar29 + 0x144);
      in_stack_000000d8 = 0;
      fStack0000000000000058 = *(float *)(lVar29 + 0x58);
      fStack0000000000000094 = *(float *)(lVar29 + 0x114);
    }
    iVar23 = *(int *)((long)unaff_x19 + 0x4ac);
    if (iVar23 == 1) {
LAB_0603ece4:
      if ((unaff_x19[0x75] == 0) || (lVar44 = *(long *)(unaff_x19[0x75] + 0x38), lVar44 == 0))
      goto thunk_FUN_02e3ccc4;
      if (*(uint *)(lVar44 + 0x18) <= uVar16) goto LAB_0603fce4;
      lVar44 = lVar44 + uVar28 * 0x178;
LAB_0603ed10:
      fVar60 = *(float *)(lVar44 + 0x144);
      lVar29 = *unaff_x19;
      uVar71 = *(undefined4 *)(lVar44 + 0x120);
    }
    else {
      if (uVar16 != uVar19) {
        if (iVar23 <= (int)uVar16) {
LAB_0603ede8:
          if ((int)uVar16 < iVar23) {
            iVar23 = FUN_0626d24c(lVar44,0);
            if (*(uint *)(lVar26 + 0x18) <= uVar16 + 1) goto LAB_0603fce4;
            lVar44 = *(long *)(lVar25 + (ulong)(uVar16 + 1) * 0x178 + 0x20);
            if (lVar44 == 0) goto thunk_FUN_02e3ccc4;
            iVar24 = FUN_0626d24c(lVar44,0);
            if (iVar23 != iVar24) goto LAB_0603ece4;
          }
          if (bVar1) {
            bVar12 = true;
            goto LAB_0603efc0;
          }
          if ((unaff_x19[0x75] != 0) && (lVar44 = *(long *)(unaff_x19[0x75] + 0x38), lVar44 != 0)) {
            if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar44 + 0x18)) {
              lVar44 = lVar44 + ((long)(int)uVar16 + -1) * 0x178;
              goto LAB_0603ed10;
            }
            goto LAB_0603fce4;
          }
          goto thunk_FUN_02e3ccc4;
        }
        if ((unaff_x19[0x75] == 0) || (lVar29 = *(long *)(unaff_x19[0x75] + 0x38), lVar29 == 0))
        goto thunk_FUN_02e3ccc4;
        if (uVar16 + 1 < *(uint *)(lVar29 + 0x18)) {
          if (*(float *)(lVar29 + (ulong)(uVar16 + 1) * 0x178 + 0x58) == fStack0000000000000058) {
            if (*(int *)(*(long *)
                          System_Collections_Generic_List<WeakReference<TMP_FontAsset>>_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar46 = FUN_0605a494(0);
            if ((uVar46 & 1) != 0) {
              iVar23 = *(int *)((long)unaff_x19 + 0x4ac);
              goto LAB_0603ede8;
            }
          }
          lVar44 = unaff_x19[0x75];
          if ((int)uVar3 < (int)uVar16) goto LAB_0603ed4c;
          goto LAB_0603ef48;
        }
        goto LAB_0603fce4;
      }
      lVar44 = unaff_x19[0x75];
      if ((uVar92 != 0x200b & (bVar14 ^ 0xff)) == 0) {
LAB_0603ed4c:
        if ((lVar44 == 0) || (lVar44 = *(long *)(lVar44 + 0x38), lVar44 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar44 + 0x18) <= uVar3) goto LAB_0603fce4;
        lVar44 = lVar44 + (long)(int)uVar3 * 0x178;
      }
      else {
LAB_0603ef48:
        if ((lVar44 == 0) || (lVar44 = *(long *)(lVar44 + 0x38), lVar44 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(uint *)(lVar44 + 0x18) <= uVar16) goto LAB_0603fce4;
        lVar44 = lVar44 + uVar28 * 0x178;
      }
      fVar60 = *(float *)(lVar44 + 0x144);
      lVar29 = *unaff_x19;
      uVar71 = *(undefined4 *)(lVar44 + 0x120);
    }
    (**(code **)(lVar29 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,in_stack_000000d8,uVar71,
               fVar57 * fVar59 + fVar60,0,fVar57,fVar57);
    bVar12 = false;
  }
LAB_0603efc0:
  if ((unaff_x19[0x75] == 0) || (lVar44 = *(long *)(unaff_x19[0x75] + 0x38), lVar44 == 0))
  goto thunk_FUN_02e3ccc4;
  uVar18 = (uint)*(undefined8 *)(lVar44 + 0x18);
  if (uVar18 <= uVar16) goto LAB_0603fce4;
  if ((*(byte *)(lVar44 + 0x20 + uVar28 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar9) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x6d] < (int)uVar16) || ((int)unaff_x19[0x6e] < (int)uVar5)) ||
       ((*(int *)((long)unaff_x19 + 0x314) == 5 &&
        (*(int *)(lVar44 + 0x20 + uVar28 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6f])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar9) {
LAB_0603f144:
      if (uVar18 <= uVar16) goto LAB_0603fce4;
      lVar44 = lVar44 + uVar28 * 0x178;
      lVar29 = 0x118;
      if ((bVar14 & 1) == 0) {
        lVar29 = 0xf4;
      }
      fVar91 = *(float *)(lVar44 + 0x180);
      fVar83 = *(float *)(lVar44 + 0x184);
      fVar87 = *(float *)(lVar44 + 0x188);
      uVar31 = *(undefined8 *)(lVar44 + 0x178);
      fVar94 = *(float *)(lVar44 + 0x120);
      fVar59 = *(float *)(lVar44 + 0x13c);
      fVar84 = *(float *)(lVar44 + 0x140);
      fVar72 = *(float *)(lVar44 + 0x148);
      fVar60 = *(float *)(lVar44 + lVar29 + 0x20);
      in_stack_000001e8 = SUB168(*(undefined1 (*) [16])(unaff_x28 + 0x160),8);
      in_stack_000001e0 = SUB168(*(undefined1 (*) [16])(unaff_x28 + 0x160),0);
      in_stack_000001c8 = uVar31;
      fStack00000000000001d0 = fVar91;
      fStack00000000000001d4 = fVar83;
      in_stack_000001d8 = fVar87;
      in_stack_000001f0 = in_stack_00001320;
      uVar28 = FUN_0605b5b8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar28 & 1) == 0) {
        if ((bVar14 & 1) == 0) {
          fVar59 = fVar94;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar60 = fVar60 - (float)((ulong)in_stack_00001310 >> 0x20);
        if (fVar60 <= in_stack_000000e8) {
          in_stack_000000e8 = fVar60;
        }
        if (fStack00000000000000dc <= fVar59 + in_stack_00001318) {
          fStack00000000000000dc = fVar59 + in_stack_00001318;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        fVar72 = fVar72 - in_stack_00001320;
        fVar84 = fVar84 + in_stack_0000131c;
        if (fVar72 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar72;
        }
        if (fStack00000000000000e0 <= fVar84) {
          fStack00000000000000e0 = fVar84;
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        in_stack_000000e8 = (fVar60 + (fStack00000000000000dc - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if ((bVar14 & 1) == 0) {
          fVar59 = fVar94;
        }
        if (*(int *)(*(long *)System_Collections_Generic_List<Matrix4x4[]>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        in_stack_00000110._4_4_ = fVar72 - fVar87;
        fStack00000000000000dc = fVar91 + fVar59;
        fStack00000000000000e0 = fVar84 + fVar83;
        in_stack_00001310 = uVar31;
        in_stack_00001318 = fVar91;
        in_stack_0000131c = fVar83;
        in_stack_00001320 = fVar87;
      }
      if (((*(int *)((long)unaff_x19 + 0x4ac) != 1) && (uVar16 != uVar19)) &&
         (((int)uVar16 < (int)uVar3 && (bVar1)))) {
        bVar9 = true;
        goto LAB_0603f378;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar9 = false;
      if ((((!bVar1) || ((int)uVar3 < (int)uVar16)) || ((uVar92 & 0xfffe) == 10)) || (uVar92 == 0xd)
         ) goto LAB_0603f378;
      if (uVar16 != uVar3) {
LAB_0603f0c8:
        puVar11 = System_Collections_Generic_List<AudioListener>_TypeInfo;
        lVar29 = *(long *)System_Collections_Generic_List<AudioListener>_TypeInfo;
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          lVar29 = *(long *)puVar11;
        }
        if ((unaff_x19[0x75] != 0) && (lVar44 = *(long *)(unaff_x19[0x75] + 0x38), lVar44 != 0)) {
          uVar18 = (uint)*(undefined8 *)(lVar44 + 0x18);
          if (uVar16 < uVar18) {
            lVar41 = *(long *)(lVar29 + 0xb8);
            lVar29 = lVar44 + uVar28 * 0x178;
            fStack00000000000000dc = *(float *)(lVar41 + 0x1728);
            fStack00000000000000e0 = *(float *)(lVar41 + 0x172c);
            in_stack_00001320 = *(float *)(lVar29 + 0x188);
            in_stack_000000e8 = *(float *)(lVar41 + 0x1720);
            in_stack_00000110._4_4_ = *(float *)(lVar41 + 0x1724);
            uVar31 = *(undefined8 *)(lVar29 + 0x178);
            *(undefined8 *)(unaff_x28 + 0x168) = *(undefined8 *)(lVar29 + 0x180);
            *(undefined8 *)(unaff_x28 + 0x160) = uVar31;
            goto LAB_0603f144;
          }
          goto LAB_0603fce4;
        }
        goto thunk_FUN_02e3ccc4;
      }
      if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar46 = FUN_055814cc(uVar92,0);
      if ((uVar46 & 1) == 0) goto LAB_0603f0c8;
    }
    bVar9 = false;
  }
LAB_0603f378:
  iVar23 = *(int *)((long)unaff_x19 + 0x4ac);
  uVar16 = uVar16 + 1;
  uVar18 = uVar5;
  if (iVar23 <= (int)uVar16) goto LAB_0603f74c;
  goto LAB_0603d6e0;
LAB_0603f74c:
  lVar26 = unaff_x19[0x75];
  if (lVar26 != 0) {
    iVar24 = uVar5 + 1;
    plVar50 = (long *)System_Collections_Generic_List<byte[]>_TypeInfo;
LAB_0603f770:
    lVar25 = *(long *)(lVar26 + 0x60);
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd5)) {
LAB_0603fce4:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd5) * 0x50 + 0x28) = iVar47;
      *(int *)(lVar26 + 0x18) = iVar23;
      lVar25 = unaff_x19[0xd8];
      *(int *)(lVar26 + 0x2c) = iVar24;
      if (iVar23 < 1 || iStack00000000000000ec == 0) {
        iStack00000000000000ec = 1;
      }
      *(int *)(lVar26 + 0x1c) = (int)lVar25;
      *(int *)(lVar26 + 0x24) = iStack00000000000000ec;
      *(int *)(lVar26 + 0x30) = *(int *)((long)unaff_x19 + 0x4cc) + 1;
      if (((int)unaff_x19[0x6b] != 0xff) ||
         (uVar28 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar28 & 1) == 0)) {
LAB_0603d144:
        if (*(int *)(*(long *)PTR_DAT_06a3c3a0 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        FUN_060594e8();
        return;
      }
      lVar26 = unaff_x19[0xdf];
      if (lVar26 != 0) {
        (**(code **)(lVar26 + 0x18))
                  (*(undefined8 *)(lVar26 + 0x40),unaff_x19[0x75],*(undefined8 *)(lVar26 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
        if ((unaff_x19[0x75] == 0) || (lVar26 = *(long *)(unaff_x19[0x75] + 0x60), lVar26 == 0))
        goto thunk_FUN_02e3ccc4;
        if (*(int *)(*plVar50 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
        FUN_060a5370(lVar26 + 0x20,1,0);
      }
      if (unaff_x19[0x7c] != 0) {
        FUN_06242810(unaff_x19[0x7c],0);
        if ((unaff_x19[0x75] != 0) && (lVar26 = *(long *)(unaff_x19[0x75] + 0x60), lVar26 != 0)) {
          if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
          if (unaff_x19[0x7c] != 0) {
            FUN_06240928(unaff_x19[0x7c],*(undefined8 *)(lVar26 + 0x30),0);
            if ((unaff_x19[0x75] != 0) && (lVar26 = *(long *)(unaff_x19[0x75] + 0x60), lVar26 != 0))
            {
              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
              if (unaff_x19[0x7c] != 0) {
                FUN_06241714(unaff_x19[0x7c],0,*(undefined8 *)(lVar26 + 0x48),0);
                if ((unaff_x19[0x75] != 0) &&
                   (lVar26 = *(long *)(unaff_x19[0x75] + 0x60), lVar26 != 0)) {
                  if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
                  if (unaff_x19[0x7c] != 0) {
                    FUN_06240b40(unaff_x19[0x7c],*(undefined8 *)(lVar26 + 0x50),0);
                    if ((unaff_x19[0x75] != 0) &&
                       (lVar26 = *(long *)(unaff_x19[0x75] + 0x60), lVar26 != 0)) {
                      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0603fce4;
                      if (unaff_x19[0x7c] != 0) {
                        UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                  (unaff_x19[0x7c],*(undefined8 *)(lVar26 + 0x58),0);
                        if (unaff_x19[0x7c] != 0) {
                          FUN_062425d0(unaff_x19[0x7c],0);
                          lVar26 = unaff_x19[0x75];
                          if (lVar26 != 0) {
                            lVar44 = 0;
                            lVar25 = 0;
                            do {
                              uVar28 = lVar25 + 1;
                              if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar28) goto LAB_0603d144;
                              lVar26 = *(long *)(lVar26 + 0x60);
                              if (lVar26 == 0) break;
                              if (*(int *)(*plVar50 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                              FUN_060a524c(lVar26 + lVar44 + 0x70,0);
                              lVar26 = unaff_x19[0xe5];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                              uVar31 = *(undefined8 *)(lVar26 + lVar25 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                                thunk_FUN_02e9a04c();
                              }
                              uVar46 = FUN_062696b0(uVar31,0,0);
                              if ((uVar46 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x35c) != 0) {
                                  if ((unaff_x19[0x75] == 0) ||
                                     (lVar26 = *(long *)(unaff_x19[0x75] + 0x60), lVar26 == 0))
                                  break;
                                  if (*(int *)(*plVar50 + 0xe4) == 0) {
                                    thunk_FUN_02e9a04c();
                                  }
                                  if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                                  FUN_060a5370(lVar26 + lVar44 + 0x70,1,0);
                                }
                                lVar26 = unaff_x19[0xe5];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                                lVar26 = *(long *)(lVar26 + lVar25 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_060ae428(lVar26,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar29 = *(long *)(unaff_x19[0x75] + 0x60), lVar29 == 0)) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar28) goto LAB_0603fce4;
                                if (lVar26 == 0) break;
                                FUN_06240928(lVar26,*(undefined8 *)(lVar29 + lVar44 + 0x80),0);
                                lVar26 = unaff_x19[0xe5];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                                lVar26 = *(long *)(lVar26 + lVar25 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_060ae428(lVar26,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar29 = *(long *)(unaff_x19[0x75] + 0x60), lVar29 == 0)) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar28) goto LAB_0603fce4;
                                if (lVar26 == 0) break;
                                FUN_06241714(lVar26,0,*(undefined8 *)(lVar29 + lVar44 + 0x98),0);
                                lVar26 = unaff_x19[0xe5];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                                lVar26 = *(long *)(lVar26 + lVar25 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_060ae428(lVar26,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar29 = *(long *)(unaff_x19[0x75] + 0x60), lVar29 == 0)) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar28) goto LAB_0603fce4;
                                if (lVar26 == 0) break;
                                FUN_06240b40(lVar26,*(undefined8 *)(lVar29 + lVar44 + 0xa0),0);
                                lVar26 = unaff_x19[0xe5];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                                lVar26 = *(long *)(lVar26 + lVar25 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_060ae428(lVar26,0);
                                if ((unaff_x19[0x75] == 0) ||
                                   (lVar29 = *(long *)(unaff_x19[0x75] + 0x60), lVar29 == 0)) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar28) goto LAB_0603fce4;
                                if (lVar26 == 0) break;
                                UnityEngine_TextCore_Text_SpriteAsset__UpdateLookupTables
                                          (lVar26,*(undefined8 *)(lVar29 + lVar44 + 0xa8),0);
                                lVar26 = unaff_x19[0xe5];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_0603fce4;
                                lVar26 = *(long *)(lVar26 + lVar25 * 8 + 0x28);
                                if ((lVar26 == 0) || (lVar26 = FUN_060ae428(lVar26,0), lVar26 == 0))
                                break;
                                FUN_062425d0(lVar26,0);
                              }
                              lVar26 = unaff_x19[0x75];
                              lVar25 = lVar25 + 1;
                              lVar44 = lVar44 + 0x50;
                            } while (lVar26 != 0);
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
thunk_FUN_02e3ccc4:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


