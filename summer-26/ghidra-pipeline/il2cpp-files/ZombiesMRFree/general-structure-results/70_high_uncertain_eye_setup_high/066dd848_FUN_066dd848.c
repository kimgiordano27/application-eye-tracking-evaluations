/*
FUNCTION_NAME: FUN_066dd848
ENTRY_POINT: 066dd848
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_066dd848(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined4 extraout_var;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  char cVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 auVar30 [16];
  long local_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long local_380;
  long lStack_378;
  undefined4 local_370;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  long local_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long local_310;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  long local_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long local_280;
  long lStack_278;
  undefined4 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  long local_220;
  long lStack_218;
  long local_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  undefined4 local_1f0;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined4 local_e0;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined4 local_a0;
  long local_90;
  undefined8 local_88;
  long local_80;
  ushort local_74 [2];
  long local_70;
  undefined8 local_68;
  
  local_68 = param_2;
  if ((DAT_073a1133 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_List<TypeManager_TypeTreeNode>_TypeInfo);
    FUN_02fe925c(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TriangleMeshNode>_TypeInfo);
    FUN_02fe925c(OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(OVRTask<bool[]>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f988b8);
    FUN_02fe925c(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
    FUN_02fe925c(OVRTask<bool>_TypeInfo);
    FUN_02fe925c(OVRTask<Int32Enum>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRAnchor>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRSceneManager_Metrics>_TypeInfo);
    DAT_073a1133 = 1;
    param_2 = extraout_x1;
  }
  local_70 = 0;
  local_74[0] = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_e0 = 0;
  local_118[0] = 0;
  local_120 = 0;
  local_154 = 0;
  local_160 = 0;
  local_170 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  if (*(char *)((long)param_3 + 0x2b4) == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_06743114(param_1 + 0x220,0);
    uVar17 = uVar17 & 1;
    param_2 = extraout_x1_00;
  }
  plVar1 = param_3 + 3;
  if ((char)param_3[0x34] == '\0') {
    uVar18 = 0;
  }
  else {
    uVar18 = FUN_06743114(param_1 + 0x220,0);
    uVar18 = uVar18 & 1;
    param_2 = extraout_x1_01;
  }
  bVar15 = *(byte *)(param_3 + 0x3b);
  local_70 = 0;
  plVar2 = param_3 + 0x1e;
  bVar9 = uVar18 != 0;
  bVar10 = uVar17 != 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar23 = FUN_0670f594(*(long *)(param_1 + 0xe0),0);
    if ((uVar23 & 1) != 0) {
      if (uVar17 != 0) {
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
        uVar17 = FUN_0670f5b4(*(long *)(param_1 + 0xe0),0);
        uVar17 = uVar17 & 1;
      }
      if (uVar18 != 0) {
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
        uVar18 = FUN_0670f5b4(*(long *)(param_1 + 0xe0),0);
        uVar18 = uVar18 & 1;
      }
    }
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
    auVar30 = FUN_0670f9b0(*(long *)(param_1 + 0xe0),plVar1,0);
    param_2 = auVar30._8_8_;
    bVar9 = uVar18 != 0;
    bVar10 = uVar17 != 0;
    if ((auVar30._0_8_ & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
      uVar23 = thunk_FUN_0670f6ac(*(long *)(param_1 + 0xe0),plVar1,0);
      if ((uVar23 & 1) != 0) {
        lStack_c8 = param_3[0x1f];
        local_d0 = *plVar2;
        lStack_b8 = param_3[0x21];
        local_c0 = param_3[0x20];
        local_a0 = (undefined4)param_3[0x24];
        lStack_a8 = param_3[0x23];
        lStack_b0 = param_3[0x22];
        lVar27 = param_3[0x2b];
        uVar22 = *(undefined4 *)((long)param_3 + 0x15c);
        if (*(int *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_0670fa48(&local_d0,(int)lVar27,uVar22,0);
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
        uVar24 = FUN_0670f694(*(long *)(param_1 + 0xe0),0);
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo);
        }
        FUN_06748f48(0,uVar24,&local_d0,0,0,0,1,
                     *(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo,0);
        local_e0 = (undefined4)param_3[0x24];
        lStack_f8 = param_3[0x21];
        local_100 = param_3[0x20];
        lStack_e8 = param_3[0x23];
        lStack_f0 = param_3[0x22];
        lStack_108 = param_3[0x1f];
        local_110 = *plVar2;
        FUN_0670fa94(&local_110,0x20,(int)param_3[0x2b],*(undefined4 *)((long)param_3 + 0x15c),0);
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
        uVar24 = FUN_0670f69c(*(long *)(param_1 + 0xe0),0);
        FUN_06748f48(0,uVar24,&local_110,0,0,0,1,*(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo,0
                    );
      }
      if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
      auVar30 = FUN_0670f6ac(*(long *)(param_1 + 0xe0),plVar1,0);
      param_2 = auVar30._8_8_;
      if ((auVar30._0_8_ & 1) != 0) {
        lVar27 = *(long *)(param_1 + 0xe0);
        if ((((lVar27 == 0) || (*(long *)(lVar27 + 0x78) == 0)) ||
            (lVar28 = *(long *)(*(long *)(lVar27 + 0x78) + 0x30), lVar28 == 0)) ||
           (*(long *)(lVar27 + 0x20) == 0)) goto LAB_066de698;
        FUN_06738814(*(long *)(lVar27 + 0x20),plVar1,*(undefined4 *)(lVar28 + 0x18),0);
        if (*(long *)(param_1 + 0xe0) == 0) goto LAB_066de698;
        FUN_067295d4(param_1,*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x20),0);
        param_2 = extraout_x1_02;
      }
    }
  }
  if (((int)param_3[0x1c] == 0 & bVar15) == 0) {
LAB_066ddd04:
    bVar11 = false;
    uVar22 = 0;
    uVar24 = 1;
  }
  else {
    if (param_3[0x1b] == 0) goto LAB_066de698;
    FUN_03bbf6cc(param_3[0x1b],&local_70,
                 *(undefined8 *)System_Collections_Generic_List<TypeManager_TypeTreeNode>_TypeInfo);
    lVar27 = local_70;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    auVar30 = FUN_068f8810(lVar27,0,0);
    param_2 = auVar30._8_8_;
    if ((auVar30._0_8_ & 1) == 0) goto LAB_066ddd04;
    if (local_70 == 0) goto LAB_066de698;
    auVar30 = FUN_068f524c(local_70,0);
    param_2 = auVar30._8_8_;
    if ((auVar30._0_8_ & 1) == 0) goto LAB_066ddd04;
    if (local_70 == 0) goto LAB_066de698;
    auVar30 = FUN_066bb8a0(local_70,0);
    param_2 = auVar30._8_8_;
    if (DAT_073980e0 == '\0') {
      FUN_02fe925c(PTR_DAT_06f94408);
      DAT_073980e0 = '\x01';
      param_2 = extraout_x1_03;
    }
    if ((auVar30._0_4_ == **(int **)(*(long *)PTR_DAT_06f94408 + 0xb8)) &&
       (auVar30._4_4_ == (*(int **)(*(long *)PTR_DAT_06f94408 + 0xb8))[1])) {
      uVar22 = 0;
    }
    else {
      if (local_70 == 0) goto LAB_066de698;
      uVar22 = FUN_066bb8a0(local_70,0);
      *(undefined4 *)plVar2 = uVar22;
      if (local_70 == 0) goto LAB_066de698;
      FUN_066bb8a0(local_70,0);
      *(undefined4 *)((long)param_3 + 0xf4) = extraout_var;
      puVar8 = OVRTask<OVRAnchor>_TypeInfo;
      lVar28 = *(long *)(param_1 + 0x100);
      lVar27 = *(long *)OVRTask<OVRAnchor>_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar27 = *(long *)puVar8;
      }
      lVar29 = *(long *)(*(long *)(lVar27 + 0xb8) + 8);
      if (lVar29 == 0) {
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar27 = *(long *)OVRTask<OVRAnchor>_TypeInfo;
        }
        puVar8 = OVRTask<OVRAnchor>_TypeInfo;
        uVar24 = **(undefined8 **)(lVar27 + 0xb8);
        lVar29 = thunk_FUN_0301080c(*(undefined8 *)
                                     OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
        FUN_0494bc5c(lVar29,uVar24,*(undefined8 *)OVRTask<Int32Enum>_TypeInfo,0);
        plVar25 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
        *plVar25 = lVar29;
        thunk_FUN_03048534(plVar25,lVar29);
      }
      if (lVar28 == 0) goto LAB_066de698;
      auVar30 = FUN_04430950(lVar28,lVar29,
                             *(undefined8 *)
                              OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo
                            );
      param_2 = auVar30._8_8_;
      plVar25 = auVar30._0_8_;
      if (plVar25 != (long *)0x0) {
        bVar12 = *(byte *)(*(long *)System_Collections_Generic_List<TriangleMeshNode>_TypeInfo +
                          0x130);
        if ((bVar12 <= *(byte *)(*plVar25 + 0x130)) &&
           (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar12 * 8 + -8) ==
            *(long *)System_Collections_Generic_List<TriangleMeshNode>_TypeInfo)) {
          local_1b0 = (undefined4)param_3[0x24];
          lStack_1c8 = param_3[0x21];
          local_1d0 = param_3[0x20];
          lStack_1b8 = param_3[0x23];
          lStack_1c0 = param_3[0x22];
          lStack_1d8 = param_3[0x1f];
          local_1e0 = *plVar2;
          FUN_066bad30(plVar25,&local_1e0,0);
          param_2 = extraout_x1_04;
        }
      }
      uVar22 = 1;
    }
    if (local_70 == 0) goto LAB_066de698;
    if (*(int *)(local_70 + 0x30) == 2) {
      uVar17 = 1;
    }
    else {
      uVar17 = FUN_066bb69c(local_70,0);
      uVar17 = uVar17 & 1;
      param_2 = extraout_x1_05;
    }
    bVar11 = uVar17 != 0;
    uVar24 = 0;
  }
  puVar8 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
  uVar16 = FUN_066dd074(param_1,param_2,plVar1);
  lVar27 = *(long *)puVar8;
  lVar28 = *param_3;
  local_74[0] = uVar16;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar27);
    lVar27 = *(long *)puVar8;
  }
  FUN_06668eb0(local_118,lVar28,**(undefined8 **)(lVar27 + 0xb8),0);
  FUN_066dd320(param_1,local_74,lVar28,plVar1,uVar22,uVar24,&local_80,&local_88);
  FUN_06668eb4(local_118,0);
  if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0691ff78(&local_68,lVar28,0);
  if (lVar28 == 0) goto LAB_066de698;
  FUN_0691250c(lVar28,0);
  FUN_06725e18(param_1,local_80,local_88,0);
  if (bVar9 != false) {
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_066de698;
    FUN_06786d08(*(long *)(param_1 + 0x220),param_3 + 0x54,&local_150,&local_154,0);
    uVar22 = local_154;
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,param_1 + 0x240,&local_150,uVar22,1,0,1,
                 *(undefined8 *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo,0);
    local_160 = *(undefined8 *)(param_1 + 0x240);
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_066de698;
    FUN_06786cf4(*(long *)(param_1 + 0x220),&local_160,0);
    FUN_067295d4(param_1,*(undefined8 *)(param_1 + 0x220),0);
  }
  lVar27 = *(long *)(param_1 + 0x1a8);
  if ((uVar16 & 1) == 0) {
    cVar26 = *(char *)(param_1 + 0x1e8);
  }
  else {
    cVar26 = '\x01';
  }
  if (lVar27 == 0) goto LAB_066de698;
  *(bool *)(lVar27 + 0xf8) = cVar26 != '\0';
  FUN_0671e7f0(lVar27,local_80,local_88,0);
  FUN_067295d4(param_1,*(undefined8 *)(param_1 + 0x1a8),0);
  bVar12 = FUN_06770690(plVar1,0);
  bVar13 = FUN_0676cdd8(plVar1,0);
  if (((bVar12 & 1) != 0) && ((bVar13 & 1) != 0)) {
    if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_066de698;
    FUN_06736864(*(long *)(param_1 + 0x1c8),plVar1,0x20,0);
    FUN_067295d4(param_1,*(undefined8 *)(param_1 + 0x1c8),0);
  }
  lVar28 = *(long *)(param_1 + 0x100);
  lVar27 = *(long *)OVRTask<OVRAnchor>_TypeInfo;
  iVar5 = *(int *)((long)param_3 + 0x1c4);
  if (*(int *)(lVar27 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar27 = *(long *)OVRTask<OVRAnchor>_TypeInfo;
  }
  lVar29 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x10);
  if (lVar29 == 0) {
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar27 = *(long *)OVRTask<OVRAnchor>_TypeInfo;
    }
    puVar8 = OVRTask<OVRAnchor>_TypeInfo;
    uVar24 = **(undefined8 **)(lVar27 + 0xb8);
    lVar29 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_0494bc5c(lVar29,uVar24,*(undefined8 *)OVRTask<bool>_TypeInfo,0);
    plVar25 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
    *plVar25 = lVar29;
    thunk_FUN_03048534(plVar25,lVar29);
  }
  if (lVar28 == 0) goto LAB_066de698;
  lVar27 = FUN_04430950(lVar28,lVar29,
                        *(undefined8 *)
                         OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  if (*(long *)(param_1 + 0xe0) == 0) {
    bVar14 = 1;
  }
  else {
    bVar14 = FUN_0670f6ac(*(long *)(param_1 + 0xe0),plVar1,0);
    bVar14 = ~bVar14 & 1;
  }
  lVar28 = local_70;
  if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar23 = FUN_068f8810(lVar28,0,0);
  if ((uVar23 & 1) == 0) {
    uVar17 = 0;
  }
  else {
    if (local_70 == 0) goto LAB_066de698;
    uVar17 = FUN_068f524c(local_70,0);
    uVar17 = uVar17 & 1;
  }
  bVar3 = bVar10 & bVar15 != 0 & (bVar11 ^ 0xffU) & iVar5 == 1 & (bVar13 ^ 1);
  bVar7 = param_3[0x35] != 0 & bVar15;
  uVar18 = 0;
  if (bVar15 != 0) {
    bVar15 = bVar12 & bVar15 != 0;
    bVar4 = bVar15 & bVar7 == 0;
    bVar12 = bVar4;
    if (bVar7 != 0) {
      bVar12 = bVar15;
    }
    if ((lVar27 == 0) && (bVar7 == 0)) {
      uVar18 = 0;
      bVar12 = bVar4;
      if (bVar3 == 0) {
        uVar18 = uVar17 ^ 1;
      }
    }
  }
  if (bVar9 != false) {
    local_1f0 = (undefined4)param_3[0x24];
    lStack_208 = param_3[0x21];
    local_210 = param_3[0x20];
    lStack_1f8 = param_3[0x23];
    local_200 = param_3[0x22];
    lStack_218 = param_3[0x1f];
    local_220 = *plVar2;
    lVar28 = param_3[0x1e];
    uVar22 = *(undefined4 *)((long)param_3 + 0xf4);
    uVar19 = FUN_068e3d08(plVar2,0);
    if (*(int *)(*(long *)OVRTask<bool[]>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)OVRTask<bool[]>_TypeInfo);
    }
    local_270 = local_1f0;
    lStack_298 = lStack_218;
    local_2a0 = local_220;
    lStack_288 = lStack_208;
    lStack_290 = local_210;
    lStack_278 = lStack_1f8;
    local_280 = local_200;
    FUN_0673d3c8(&local_260,&local_2a0,(int)lVar28,uVar22,uVar19,0,0);
    uStack_198 = uStack_258;
    local_1a0 = local_260;
    uStack_188 = uStack_248;
    local_190 = uStack_250;
    uStack_178 = uStack_238;
    local_180 = local_240;
    local_170 = local_230;
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,param_1 + 0x238,&local_1a0,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    puVar8 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
    local_160 = *(undefined8 *)(param_1 + 0x240);
    lVar29 = *(long *)(param_1 + 0x228);
    local_1a8 = 0;
    lVar28 = *(long *)(param_1 + 0x238);
    if (lVar28 == 0) goto LAB_066de698;
    uStack_258 = *(undefined8 *)(lVar28 + 0x30);
    local_260 = *(undefined8 *)(lVar28 + 0x28);
    local_240 = *(undefined8 *)(lVar28 + 0x48);
    uStack_248 = *(undefined8 *)(lVar28 + 0x40);
    uStack_250 = *(undefined8 *)(lVar28 + 0x38);
    lVar28 = *(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar28 = *(long *)puVar8;
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 0x10);
    if (lVar28 == 0) goto LAB_066de698;
    uStack_2f8 = *(undefined8 *)(lVar28 + 0x30);
    local_300 = *(undefined8 *)(lVar28 + 0x28);
    uStack_2e8 = *(undefined8 *)(lVar28 + 0x40);
    uStack_2f0 = *(undefined8 *)(lVar28 + 0x38);
    local_2e0 = *(undefined8 *)(lVar28 + 0x48);
    uStack_2c8 = uStack_258;
    local_2d0 = local_260;
    uStack_2b8 = uStack_248;
    uStack_2c0 = uStack_250;
    local_2b0 = local_240;
    bVar15 = FUN_0691198c(&local_2d0,&local_300,0);
    if (lVar29 == 0) goto LAB_066de698;
    FUN_0673ac68(lVar29,plVar2,&local_80,uVar18,&local_88,&local_160,&local_1a8,bVar3,
                 bVar15 & bVar14,0);
    FUN_067295d4(param_1,*(undefined8 *)(param_1 + 0x228),0);
  }
  local_90 = local_80;
  if (uVar17 != 0) {
    if (local_70 == 0) goto LAB_066de698;
    iVar5 = *(int *)(local_70 + 0x2c);
    bVar12 = bVar12 & uVar17 != 0;
    if (iVar5 != 0) {
      FUN_067295d4(param_1,*(undefined8 *)(param_1 + 0x1b0),0);
      if (local_70 == 0) goto LAB_066de698;
      bVar12 = bVar12 & iVar5 != 0;
      uVar23 = FUN_066bb69c(local_70,0);
      if ((uVar23 & 1) != 0) {
        if (local_70 == 0) goto LAB_066de698;
        iVar5 = *(int *)(local_70 + 0x24);
        iVar20 = FUN_066bb650(local_70,0);
        if (local_70 == 0) goto LAB_066de698;
        iVar6 = *(int *)(local_70 + 0x28);
        iVar21 = FUN_066bb650(local_70,0);
        lVar28 = local_80;
        if (local_70 == 0) goto LAB_066de698;
        lVar29 = *(long *)(param_1 + 0x1b8);
        uVar22 = FUN_066bb890(local_70,0);
        if (lVar29 == 0) goto LAB_066de698;
        FUN_066d81bc(lVar29,lVar28,iVar20 * iVar5,iVar21 * iVar6,uVar22,param_3,&local_90);
        FUN_067295d4(param_1,*(undefined8 *)(param_1 + 0x1b8),0);
      }
    }
  }
  puVar8 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (bVar3 == 0) {
    bVar15 = bVar12;
    if ((bVar9 != false) && (bVar15 = bVar9 & bVar12, lVar27 == 0)) {
      bVar12 = bVar7 == 0 & bVar15;
      bVar14 = bVar12;
      if (bVar7 != 0) {
        bVar14 = bVar15;
      }
      bVar15 = bVar14;
      if (uVar17 == 0 && bVar7 == 0) goto LAB_066de4dc;
    }
    bVar12 = bVar15;
    if (local_80 == 0) {
LAB_066de698:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lStack_218 = *(long *)(local_80 + 0x30);
    local_220 = *(long *)(local_80 + 0x28);
    local_200 = *(long *)(local_80 + 0x48);
    lStack_208 = *(long *)(local_80 + 0x40);
    local_210 = *(long *)(local_80 + 0x38);
    lVar27 = *(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar27 = *(long *)puVar8;
    }
    lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x10);
    if (lVar27 == 0) goto LAB_066de698;
    uStack_358 = *(undefined8 *)(lVar27 + 0x30);
    local_360 = *(undefined8 *)(lVar27 + 0x28);
    uStack_348 = *(undefined8 *)(lVar27 + 0x40);
    uStack_350 = *(undefined8 *)(lVar27 + 0x38);
    local_340 = *(undefined8 *)(lVar27 + 0x48);
    lStack_328 = lStack_218;
    local_330 = local_220;
    lStack_318 = lStack_208;
    lStack_320 = local_210;
    local_310 = local_200;
    uVar23 = FUN_0691198c(&local_330,&local_360,0);
    if ((uVar23 & 1) != 0) goto LAB_066de4dc;
    lStack_388 = param_3[0x21];
    lStack_390 = param_3[0x20];
    lStack_378 = param_3[0x23];
    local_380 = param_3[0x22];
    local_370 = (undefined4)param_3[0x24];
    lStack_398 = param_3[0x1f];
    local_3a0 = *plVar2;
    local_220 = local_3a0;
    lStack_218 = lStack_398;
    local_210 = lStack_390;
    lStack_208 = lStack_388;
    local_200 = local_380;
    lStack_1f8 = lStack_378;
    local_1f0 = local_370;
    if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_066de698;
    FUN_0678f410(*(long *)(param_1 + 0x1c0),&local_3a0,local_90,0);
    uVar24 = *(undefined8 *)(param_1 + 0x1c0);
  }
  else {
    if (*(long *)(param_1 + 0x230) == 0) goto LAB_066de698;
    FUN_0673adb0(*(long *)(param_1 + 0x230),&local_90,lVar27 != 0,bVar14,0);
    uVar24 = *(undefined8 *)(param_1 + 0x230);
  }
  FUN_067295d4(param_1,uVar24,0);
LAB_066de4dc:
  if ((bVar12 & (bVar13 ^ 1) & 1) != 0) {
    FUN_067295d4(param_1,*(undefined8 *)(param_1 + 0x1d0),0);
  }
  return;
}


