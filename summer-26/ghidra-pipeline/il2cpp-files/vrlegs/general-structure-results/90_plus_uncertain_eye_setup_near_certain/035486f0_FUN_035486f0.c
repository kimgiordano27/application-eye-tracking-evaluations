/*
FUNCTION_NAME: FUN_035486f0
ENTRY_POINT: 035486f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_035486f0(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  int *piVar30;
  undefined1 *puVar31;
  undefined1 uVar32;
  char cVar33;
  uint uVar34;
  uint uVar35;
  float *pfVar36;
  undefined4 *puVar37;
  float *pfVar38;
  code *pcVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long *plVar49;
  long *plVar50;
  long lVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
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
  undefined4 uVar67;
  float fVar68;
  undefined8 uVar69;
  ulong uVar70;
  float fVar71;
  undefined4 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  int local_1864;
  uint local_1860;
  float local_1844;
  int local_1834;
  float local_1828;
  float local_1824;
  float local_180c;
  float local_17f8;
  float local_17f4;
  undefined8 local_17d8;
  float local_17d0;
  float local_17cc;
  float local_17c0;
  float local_17bc;
  float local_17b0;
  float local_17ac;
  undefined8 local_17a0;
  float local_1794;
  float local_1790;
  float local_178c;
  undefined8 local_1770;
  float local_175c;
  float local_1724;
  ulong local_1708;
  float local_1700;
  float local_16fc;
  float local_16f8;
  ulong local_16f0;
  undefined8 uStack_16e8;
  undefined4 local_16e0;
  undefined1 auStack_16d0 [888];
  undefined1 auStack_1358 [888];
  long local_fe0;
  undefined8 uStack_fd8;
  ulong local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  uint local_c68;
  undefined4 uStack_c64;
  undefined8 uStack_c60;
  undefined4 local_c58;
  long local_c50;
  undefined8 uStack_c48;
  undefined4 local_c40;
  long local_c30;
  undefined8 uStack_c28;
  ulong uStack_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined1 auStack_bf0 [888];
  undefined1 auStack_878 [888];
  undefined1 auStack_500 [888];
  long local_188;
  long local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_ac [4];
  float local_a8;
  uint uStack_a4;
  
  puVar13 = PTR_DAT_03cbdf88;
  if ((DAT_0412df1b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    FUN_01ab69ac(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Hand_TypeInfo);
    FUN_01ab69ac(OVRPlugin_HandStatus_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_LayerLayout_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    FUN_01ab69ac(OVRPlugin_MeshType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_2_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_5_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_11_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_12_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_15_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_18_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_21_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_29_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_30_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_3_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_42_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_44_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_45_0_TypeInfo);
    DAT_0412df1b = 1;
  }
  local_a8 = 0.0;
  uStack_a4 = 0;
  local_ac[0] = '\0';
  local_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_f4 = 0;
  uStack_178 = 0;
  local_180 = 0;
  local_170 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_188 = 0;
  memset(auStack_500,0,0x378);
  memset(auStack_878,0,0x378);
  memset(auStack_bf0,0,0x378);
  lVar48 = param_1[0x1f];
  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar14 = PTR_DAT_03cbe438;
  uVar24 = FUN_036d35a8(lVar48,0,0);
  if ((uVar24 & 1) == 0) {
    if (param_1[0x1f] == 0) goto LAB_0354fbf4;
    lVar48 = FUN_03568ac0(param_1[0x1f],0);
    if (lVar48 != 0) {
      if (param_1[0x6d] != 0) {
        FUN_0359ff94(param_1[0x6d],0);
      }
      lVar48 = param_1[0x8f];
      if ((lVar48 != 0) && (*(long *)(lVar48 + 0x18) != 0)) {
        if ((int)*(long *)(lVar48 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(int *)(lVar48 + 0x20) != 0) {
          plVar50 = param_1 + 0x20;
          param_1[0x20] = param_1[0x1f];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar50);
          plVar2 = param_1 + 0x23;
          param_1[0x23] = param_1[0x22];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined4 *)(param_1 + 0x24) = 0;
          puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar18 = 0;
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo,0);
            uVar18 = (undefined4)param_1[0x24];
          }
          local_fb0 = 0;
          uStack_fc8 = 0;
          local_fd0 = 0;
          uStack_fb8 = 0;
          local_fc0 = 0;
          uStack_fd8 = 0;
          local_fe0 = 0;
          FUN_03557f30((int)param_1[0xc3],&local_fe0,uVar18,param_1[0x20],0,param_1[0x23],0);
          uStack_c28 = uStack_fd8;
          local_c30 = local_fe0;
          uStack_c18 = uStack_fc8;
          uStack_c20 = local_fd0;
          uStack_c08 = uStack_fb8;
          local_c10 = local_fc0;
          local_c00 = local_fb0;
          FUN_0209aa94(*(long *)(*(long *)puVar14 + 0xb8) + 0x10,&local_c30,
                       *(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
          plVar3 = param_1 + 0xd3;
          param_1[0xd3] = param_1[0x36];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3);
          lVar48 = param_1[0x77];
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_036cee6c(lVar48,0,0);
          if ((uVar24 & 1) != 0) {
            if (param_1[0x77] == 0) goto LAB_0354fbf4;
            FUN_03599b08(param_1[0x77],0);
          }
          if (param_1[0x1f] != 0) {
            lVar48 = param_1[0x92];
            fVar84 = *(float *)((long)param_1 + 0x1e4);
            iVar17 = FUN_03776950(param_1[0x1f] + 0x50,0);
            if (param_1[0x1f] != 0) {
              fVar52 = (float)FUN_03776960(param_1[0x1f] + 0x50,0);
              fVar79 = *(float *)((long)param_1 + 0x1e4);
              *(undefined4 *)((long)param_1 + 0x404) = 0x3f800000;
              *(float *)(param_1 + 0x3d) = fVar79;
              puVar13 = OVRPlugin_OVRP_1_29_0_TypeInfo;
              fVar71 = DAT_00d389a8;
              fVar58 = DAT_00d389a8;
              if (*(char *)((long)param_1 + 0x305) != '\0') {
                fVar58 = 1.0;
              }
              local_fe0._0_4_ = fVar79;
              FUN_0209aa94(param_1 + 0x3e,&local_fe0,*(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
              uStack_a4 = 0;
              *(uint *)((long)param_1 + 0x25c) = *(uint *)(param_1 + 0x4b);
              if ((*(uint *)(param_1 + 0x4b) & 1) == 0) {
                local_fe0._0_4_ = (float)param_1[0x42];
              }
              else {
                local_fe0._0_4_ = 9.80909e-43;
              }
              *(float *)((long)param_1 + 0x214) = (float)local_fe0;
              FUN_0209aa94(param_1 + 0x43,&local_fe0,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
              FUN_035a0500(param_1 + 0x4c,0);
              *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)((long)param_1 + 0x26c);
              local_fe0 = CONCAT44(local_fe0._4_4_,*(undefined4 *)((long)param_1 + 0x26c));
              FUN_0209aa94(param_1 + 0x50,&local_fe0,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
              *(undefined4 *)((long)param_1 + 0x61c) = 0;
              FUN_0209aa1c(param_1 + 0xc4,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar36 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              local_17b0 = *pfVar36;
              local_1828 = pfVar36[1];
              local_1824 = pfVar36[2];
              uVar18 = FUN_01b6d7fc((int)param_1[0x29],*(undefined4 *)((long)param_1 + 0x14c),
                                    (int)param_1[0x2a],*(undefined4 *)((long)param_1 + 0x154),0);
              *(undefined4 *)((long)param_1 + 0x144) = uVar18;
              *(undefined4 *)((long)param_1 + 0x4ec) = uVar18;
              *(undefined4 *)(param_1 + 0x2b) = uVar18;
              *(undefined4 *)((long)param_1 + 0x15c) = uVar18;
              puVar14 = OVRPlugin_OVRP_1_16_0_TypeInfo;
              local_fe0._0_4_ = (float)uVar18;
              FUN_0209aa94(param_1 + 0x9e,&local_fe0,*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
              local_fe0._0_4_ = *(float *)((long)param_1 + 0x4ec);
              FUN_0209aa94(param_1 + 0xa2,&local_fe0,*(undefined8 *)puVar14);
              local_fe0 = CONCAT44(local_fe0._4_4_,*(undefined4 *)((long)param_1 + 0x4ec));
              FUN_0209aa94(param_1 + 0xa6,&local_fe0,*(undefined8 *)puVar14);
              puVar14 = OVRPlugin_Mesh_TypeInfo;
              uVar18 = *(undefined4 *)((long)param_1 + 0x4ec);
              if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (DAT_0412df1c == '\0') {
                FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                DAT_0412df1c = '\x01';
              }
              lVar25 = *(long *)puVar14;
              if (*(int *)(lVar25 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar25 = *(long *)puVar14;
              }
              puVar37 = *(undefined4 **)(lVar25 + 0xb8);
              uStack_fd8 = 0;
              local_fe0 = 0;
              local_fd0 = local_fd0 & 0xffffffff00000000;
              FUN_035683a4(*puVar37,puVar37[1],puVar37[2],puVar37[3],&local_fe0,uVar18,0);
              uStack_c48 = uStack_fd8;
              local_c50 = local_fe0;
              local_c40 = (undefined4)local_fd0;
              FUN_0209aa94(param_1 + 0xaa,&local_c50,*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo);
              param_1[0xb0] = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xb0,0);
              FUN_0209aa94(param_1 + 0xb1,0,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
              if (param_1[0x20] != 0) {
                local_c68 = (uint)*(byte *)(param_1[0x20] + 0x1b8);
                *(uint *)(param_1 + 0xbe) = local_c68;
                FUN_0209aa94(param_1 + 0xba,&local_c68,*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo)
                ;
                FUN_0209aa1c(param_1 + 0xbf,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
                *(undefined1 *)((long)param_1 + 0x474) = 0;
                *(undefined4 *)(param_1 + 0x9b) = 0;
                *(undefined4 *)(param_1 + 0x58) = 0xc6fffe00;
                if (param_1[0x20] != 0) {
                  fVar53 = (float)FUN_03776970(param_1[0x20] + 0x50,0);
                  if (*plVar50 != 0) {
                    fVar54 = (float)FUN_03776980(*plVar50 + 0x50,0);
                    if (*plVar50 != 0) {
                      fVar55 = (float)FUN_037769c0(*plVar50 + 0x50,0);
                      *(undefined8 *)((long)param_1 + 0x2ac) = 0;
                      *(undefined4 *)(param_1 + 200) = 0;
                      param_1[0x81] = 0;
                      local_c68 = 0;
                      FUN_0209aa94(param_1 + 0x82,&local_c68,*(undefined8 *)puVar13);
                      *(undefined1 *)(param_1 + 0x86) = 0;
                      *(undefined4 *)((long)param_1 + 0x494) = 0;
                      *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)((long)param_1 + 0x324);
                      *(undefined8 *)((long)param_1 + 0x49c) = 0;
                      *(undefined4 *)((long)param_1 + 0x4a4) = 0;
                      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar25 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar25 = *(long *)puVar13;
                      }
                      lVar26 = param_1[0x6d];
                      uVar69 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
                      param_1[0x95] = 0;
                      param_1[0x9a] = 0;
                      *(undefined1 *)((long)param_1 + 0x2c4) = 0;
                      lVar25 = NEON_rev64(uVar69,4);
                      *(undefined4 *)((long)param_1 + 0x2e4) = 0xffffffff;
                      param_1[0x99] = lVar25;
                      *(undefined4 *)(param_1 + 0x96) = 0;
                      if ((lVar26 != 0) && (*(long *)(lVar26 + 0x58) != 0)) {
                        uVar20 = (int)param_1[0x67] - 1;
                        uVar35 = *(int *)(*(long *)(lVar26 + 0x58) + 0x18) - 1;
                        if ((int)uVar20 <= (int)uVar35) {
                          uVar35 = uVar20;
                        }
                        uVar7 = 0;
                        if (-1 < (int)uVar20) {
                          uVar7 = uVar35;
                        }
                        FUN_035a02f4(lVar26,0);
                        fVar56 = *(float *)(param_1 + 0x68);
                        *(undefined4 *)(param_1 + 0x6c) = 0xbf800000;
                        fVar68 = *(float *)((long)param_1 + 0x344);
                        param_1[0x6a] = 0;
                        lVar25 = *(long *)puVar13;
                        fVar57 = *(float *)((long)param_1 + 0x34c);
                        fVar85 = *(float *)(param_1 + 0x6b);
                        fVar73 = *(float *)((long)param_1 + 0x35c);
                        if (*(int *)(lVar25 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar25 = *(long *)puVar13;
                        }
                        *(undefined8 *)((long)param_1 + 0x4dc) =
                             *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x1598);
                        *(undefined8 *)((long)param_1 + 0x4e4) =
                             *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a0);
                        if (param_1[0x6d] != 0) {
                          FUN_035a0164(param_1[0x6d],0);
                          *(undefined4 *)((long)param_1 + 0x4bc) = 0;
                          *(undefined4 *)((long)param_1 + 0x4c4) = 0;
                          *(undefined8 *)((long)param_1 + 0x4b4) = 0;
                          local_a8 = 0.0;
                          local_ac[0] = '\0';
                          *(undefined1 *)((long)param_1 + 0x33c) = 0;
                          *(undefined1 *)((long)param_1 + 0x2da) = 0;
                          FUN_0359f73c(&local_b8,0xffffffff,0,0);
                          FUN_0358c4f0(param_1,*(long *)(*(long *)puVar13 + 0xb8) + 0x98,0xffffffff,
                                       0xffffffff,0);
                          FUN_0358c4f0(param_1,*(long *)(*(long *)puVar13 + 0xb8) + 0x410,0xffffffff
                                       ,0xffffffff,0);
                          FUN_0358c4f0(param_1,*(long *)(*(long *)puVar13 + 0xb8) + 0x788,0xffffffff
                                       ,0xffffffff,0);
                          FUN_0358c4f0(param_1,*(long *)(*(long *)puVar13 + 0xb8) + 0xb00,0xffffffff
                                       ,0xffffffff,0);
                          FUN_0358c4f0(param_1,*(long *)(*(long *)puVar13 + 0xb8) + 0xe78,0xffffffff
                                       ,0xffffffff,0);
                          FUN_0209aa1c(*(long *)(*(long *)puVar13 + 0xb8) + 0x11f0,
                                       *(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
                          fVar81 = DAT_00d38d28;
                          fVar78 = DAT_00d38938;
                          local_d8 = local_d8 & 0xffffffff00000000;
                          lVar25 = param_1[0x8f];
                          if (lVar25 != 0) {
                            puVar4 = (uint *)((long)param_1 + 0x494);
                            plVar5 = param_1 + 0xc9;
                            uVar35 = (int)lVar48 - 1;
                            lVar48 = (long)param_1 + 0x434;
                            fVar53 = fVar53 - (fVar54 - fVar55);
                            local_1724 = 0.0;
                            if (fVar85 <= 0.0) {
                              fVar85 = 0.0;
                            }
                            if (fVar73 <= 0.0) {
                              fVar73 = 0.0;
                            }
                            fVar84 = (fVar84 / (float)iVar17) * fVar52 * fVar58;
                            uVar24 = (ulong)(uint)fVar84;
                            fVar85 = fVar85 + DAT_00d3879c;
                            uVar70 = (ulong)(uint)fVar85;
                            fVar52 = fVar73 + DAT_00d3879c;
                            fVar58 = fVar79 * DAT_00d38d28 * fVar58;
                            bVar12 = true;
                            local_1864 = 0;
                            bVar16 = false;
                            iVar17 = 0;
                            uVar20 = 0;
                            plVar6 = param_1 + 0x6d;
                            bVar11 = 1;
                            local_1794 = fVar85;
LAB_03549220:
                            fVar79 = (float)uVar24;
                            if ((int)*(uint *)(lVar25 + 0x18) <= (int)uVar20) {
LAB_0354cf48:
                              fVar84 = (float)uVar70;
                              if (((char)param_1[0x47] != '\0') &&
                                 (fVar84 = DAT_00d389f8,
                                 DAT_00d389f8 <
                                 *(float *)((long)param_1 + 0x23c) - *(float *)(param_1 + 0x48))) {
                                fVar84 = *(float *)((long)param_1 + 0x1e4);
                                fVar58 = *(float *)((long)param_1 + 0x254);
                                if ((fVar84 < fVar58) &&
                                   (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                  if (*(float *)((long)param_1 + 0x2d4) <
                                      *(float *)(param_1 + 0x5a) / 100.0) {
                                    *(undefined4 *)((long)param_1 + 0x2d4) = 0;
                                  }
                                  fVar71 = (*(float *)((long)param_1 + 0x23c) - fVar84) * 0.5;
                                  if (fVar71 <= DAT_00d38b84) {
                                    fVar71 = DAT_00d38b84;
                                  }
                                  *(float *)(param_1 + 0x48) = fVar84;
                                  fVar71 = (fVar84 + fVar71) * 20.0 + 0.5;
                                  fVar84 = DAT_00d38e60;
                                  if (fVar71 != INFINITY) {
                                    fVar84 = (float)(int)fVar71 / 20.0;
                                  }
                                  if (fVar58 <= fVar84) {
                                    fVar84 = fVar58;
                                  }
LAB_0354d004:
                                  *(float *)((long)param_1 + 0x1e4) = fVar84;
                                  return;
                                }
                              }
                              *(undefined1 *)((long)param_1 + 0x24c) = 1;
                              if ((int)param_1[0x49] <= *(int *)((long)param_1 + 0x244)) {
                                uVar69 = FUN_0276793c((long)param_1 + 0x244,0);
                                uVar27 = FUN_0277fa90((long)param_1 + 0x1e4,0);
                                uVar69 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,
                                                      uVar69,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_3_0_TypeInfo,uVar27,0
                                                     );
                                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                                }
                                FUN_0367a6ec(uVar69,0);
                              }
                              puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if ((*puVar4 == 0) || ((*puVar4 == 1 && (uStack_a4 == 3)))) {
                                (**(code **)(*param_1 + 0x928))
                                          (param_1,1,*(undefined8 *)(*param_1 + 0x930));
                                goto LAB_0354d0cc;
                              }
                              lVar48 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar48 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar48 = *(long *)puVar13;
                              }
                              plVar50 = (long *)OVRPlugin_Media_TypeInfo;
                              lVar48 = **(long **)(lVar48 + 0xb8);
                              if (lVar48 == 0) goto LAB_0354fbf4;
                              if (*(uint *)(lVar48 + 0x18) <= *(uint *)(param_1 + 0xd1))
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              local_c0 = CONCAT44(*(int *)(lVar48 + (long)(int)*(uint *)(param_1 +
                                                                                        0xd1) * 0x38
                                                          + 0x54) << 2,(float)local_c0);
                              if ((*plVar6 == 0) ||
                                 (lVar48 = *(long *)(*plVar6 + 0x60), lVar48 == 0))
                              goto LAB_0354fbf4;
                              if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(int *)(lVar48 + 0x18) == 0)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_035968e8(lVar48 + 0x20,0,0);
                              if (DAT_0411f172 == '\0') {
                                FUN_01ab69ac(PTR_DAT_03cbded8);
                                DAT_0411f172 = '\x01';
                              }
                              iVar17 = (int)param_1[0x4e];
                              local_1794 = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                              local_17a0 = *(undefined8 *)
                                            (*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                              lVar48 = param_1[0xeb];
                              local_17d8 = local_17a0;
                              local_17cc = local_1794;
                              if (iVar17 < 0x401) {
                                if (iVar17 == 0x100) {
                                  if (lVar48 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar48 + 0x18) < 2)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  uVar69 = *(undefined8 *)(lVar48 + 0x30);
                                  if ((int)param_1[0x5c] == 5) {
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x58), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar7)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    fVar84 = *(float *)(lVar25 + (long)(int)uVar7 * 0x14 + 0x28);
                                  }
                                  else {
                                    fVar84 = *(float *)(param_1 + 0x97);
                                  }
                                  local_17cc = fVar56 + 0.0 + *(float *)(lVar48 + 0x2c);
                                  fVar84 = (0.0 - fVar84) - fVar68;
                                }
                                else if (iVar17 == 0x200) {
                                  if (lVar48 == 0) goto LAB_0354fbf4;
                                  if ((*(int *)(lVar48 + 0x18) == 1) ||
                                     (*(int *)(lVar48 + 0x18) == 0))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  local_17cc = (*(float *)(lVar48 + 0x20) +
                                               *(float *)(lVar48 + 0x2c)) * 0.5;
                                  uVar69 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar48 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar48 + 0x30) >>
                                                           0x20)) * 0.5,
                                                    ((float)*(undefined8 *)(lVar48 + 0x24) +
                                                    (float)*(undefined8 *)(lVar48 + 0x30)) * 0.5);
                                  if ((int)param_1[0x5c] == 5) {
                                    if ((*plVar6 == 0) ||
                                       (lVar48 = *(long *)(*plVar6 + 0x58), lVar48 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar48 + 0x18) <= uVar7)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar48 = lVar48 + (long)(int)uVar7 * 0x14;
                                    local_17cc = fVar56 + 0.0 + local_17cc;
                                    fVar84 = ((fVar68 + *(float *)(lVar48 + 0x28) +
                                              *(float *)(lVar48 + 0x30)) - fVar57) * -0.5 + 0.0;
                                  }
                                  else {
                                    local_17cc = fVar56 + 0.0 + local_17cc;
                                    fVar84 = ((fVar68 + *(float *)(param_1 + 0x97) + local_a8) -
                                             fVar57) * -0.5 + 0.0;
                                  }
                                }
                                else {
                                  if (iVar17 != 0x400) goto LAB_0354d620;
                                  if (lVar48 == 0) goto LAB_0354fbf4;
                                  if (*(int *)(lVar48 + 0x18) == 0)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  uVar69 = *(undefined8 *)(lVar48 + 0x24);
                                  fVar84 = local_a8;
                                  if ((int)param_1[0x5c] == 5) {
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x58), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar7)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    fVar84 = *(float *)(lVar25 + (long)(int)uVar7 * 0x14 + 0x30);
                                  }
                                  local_17cc = fVar56 + 0.0 + *(float *)(lVar48 + 0x20);
                                  fVar84 = fVar57 + (0.0 - fVar84);
                                }
LAB_0354d610:
                                local_17d8 = CONCAT44((float)((ulong)uVar69 >> 0x20) + 0.0,
                                                      (float)uVar69 + fVar84);
                              }
                              else if (iVar17 == 0x800) {
                                if (lVar48 == 0) goto LAB_0354fbf4;
                                if ((*(int *)(lVar48 + 0x18) == 1) || (*(int *)(lVar48 + 0x18) == 0)
                                   ) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                fVar84 = fVar56 + 0.0 +
                                         (*(float *)(lVar48 + 0x20) + *(float *)(lVar48 + 0x2c)) *
                                         0.5;
                                local_17d8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar48 + 0x24)
                                                              >> 0x20) +
                                                      (float)((ulong)*(undefined8 *)(lVar48 + 0x30)
                                                             >> 0x20)) * 0.5 + 0.0,
                                                      ((float)*(undefined8 *)(lVar48 + 0x24) +
                                                      (float)*(undefined8 *)(lVar48 + 0x30)) * 0.5 +
                                                      0.0);
                                local_17cc = fVar84;
                              }
                              else {
                                if (iVar17 == 0x1000) {
                                  if (lVar48 != 0) {
                                    if ((*(int *)(lVar48 + 0x18) != 1) &&
                                       (*(int *)(lVar48 + 0x18) != 0)) {
                                      uVar69 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar48 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar48 + 0x30) >> 0x20)) *
                                                        0.5,((float)*(undefined8 *)(lVar48 + 0x24) +
                                                            (float)*(undefined8 *)(lVar48 + 0x30)) *
                                                            0.5);
                                      local_17cc = fVar56 + 0.0 +
                                                   (*(float *)(lVar48 + 0x20) +
                                                   *(float *)(lVar48 + 0x2c)) * 0.5;
                                      fVar84 = 0.0 - ((fVar68 + *(float *)(param_1 + 0x9d) +
                                                      *(float *)(param_1 + 0x9c)) - fVar57) * 0.5;
                                      goto LAB_0354d610;
                                    }
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  }
                                  goto LAB_0354fbf4;
                                }
                                if (iVar17 == 0x2000) {
                                  if (lVar48 == 0) goto LAB_0354fbf4;
                                  if ((*(int *)(lVar48 + 0x18) == 1) ||
                                     (*(int *)(lVar48 + 0x18) == 0))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  fVar84 = 0.0 - ((*(float *)((long)param_1 + 0x4bc) - fVar68) -
                                                 fVar57) * 0.5;
                                  local_17d8 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar48 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar48 + 0x30) >> 0x20)) *
                                                        0.5 + 0.0,
                                                        ((float)*(undefined8 *)(lVar48 + 0x24) +
                                                        (float)*(undefined8 *)(lVar48 + 0x30)) * 0.5
                                                        + fVar84);
                                  local_17cc = fVar56 + 0.0 +
                                               (*(float *)(lVar48 + 0x20) +
                                               *(float *)(lVar48 + 0x2c)) * 0.5;
                                }
                              }
LAB_0354d620:
                              lVar48 = FUN_03559490(param_1,0);
                              if (lVar48 != 0) {
                                FUN_036df824(lVar48,0);
                                *(float *)((long)param_1 + 0x6e4) = fVar84;
                                uVar18 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0)
                                ;
                                uVar23 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0)
                                ;
                                if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                                }
                                if (DAT_0412df1c == '\0') {
                                  FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                                  DAT_0412df1c = '\x01';
                                }
                                puVar13 = OVRPlugin_Mesh_TypeInfo;
                                lVar48 = *(long *)OVRPlugin_Mesh_TypeInfo;
                                if (*(int *)(lVar48 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar48 = *(long *)puVar13;
                                }
                                puVar37 = *(undefined4 **)(lVar48 + 0xb8);
                                FUN_035683a4(*puVar37,puVar37[1],puVar37[2],puVar37[3],&local_d0,
                                             0x4000ffff,0);
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                lVar48 = *plVar6;
                                if (lVar48 != 0) {
                                  uVar35 = *puVar4;
                                  if ((int)uVar35 < 1) {
                                    iVar17 = 0;
                                    iVar19 = 0;
                                    goto LAB_0354f7f4;
                                  }
                                  lVar48 = *(long *)(lVar48 + 0x38);
                                  if (lVar48 != 0) {
                                    bVar16 = false;
                                    bVar15 = false;
                                    bVar12 = false;
                                    local_1770._4_4_ = 0.0;
                                    bVar10 = false;
                                    iVar17 = 0;
                                    local_1860 = 0;
                                    local_1724 = 0.0;
                                    local_1834 = 0;
                                    lVar25 = 0x2e0;
                                    fVar54 = 0.0;
                                    fVar58 = 0.0;
                                    local_178c = *(float *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                    local_1790 = 0.0;
                                    local_180c = 0.0;
                                    local_1844 = 0.0;
                                    fVar79 = 0.0;
                                    fVar53 = 0.0;
                                    uVar20 = 0;
                                    uVar41 = 1;
                                    local_17f8 = local_1824;
                                    local_17f4 = local_1828;
                                    local_17d0 = local_1824;
                                    local_17c0 = local_17b0;
                                    local_17bc = local_1828;
                                    local_17ac = local_1828;
                                    fVar71 = local_17b0;
                                    fVar52 = local_17b0;
                                    goto LAB_0354d7c0;
                                  }
                                }
                              }
                              goto LAB_0354fbf4;
                            }
                            if (*(uint *)(lVar25 + 0x18) <= uVar20)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar20 = *(uint *)(lVar25 + (long)(int)uVar20 * 0xc + 0x20);
                            if (uVar20 == 0) goto LAB_0354cf48;
                            uStack_a4 = uVar20;
                            if (5 < iVar17) {
                              uVar69 = FUN_0276793c(&uStack_a4,0);
                              uVar27 = FUN_0276793c(&local_d8,0);
                              uVar69 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,
                                                    uVar69,*(undefined8 *)
                                                            OVRPlugin_OVRP_1_42_0_TypeInfo,uVar27,0)
                              ;
                              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                              }
                              FUN_0367ae18(uVar69,0);
                              local_b8 = CONCAT44(3,*puVar4);
                            }
                            if ((*(char *)((long)param_1 + 0x302) == '\0') || (uStack_a4 != 0x3c)) {
                              if ((*plVar6 == 0) ||
                                 (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                              goto LAB_0354fbf4;
                              if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                              *(undefined4 *)((long)param_1 + 0x644) =
                                   *(undefined4 *)(lVar25 + 0x2c);
                              *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar25 + 0x58);
                              param_1[0x20] = *(long *)(lVar25 + 0x38);
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar50);
LAB_03549378:
                              if ((param_1[0x6d] == 0) ||
                                 (lVar25 = *(long *)(param_1[0x6d] + 0x38), lVar25 == 0))
                              goto LAB_0354fbf4;
                              uVar20 = *puVar4;
                              if (*(uint *)(lVar25 + 0x18) <= uVar20)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar51 = (long)(int)uVar20;
                              cVar33 = *(char *)(lVar25 + lVar51 * 0x178 + 0x5c);
                              *(undefined1 *)((long)param_1 + 0x431) = 0;
                              lVar26 = param_1[0x24];
                              if ((uint)local_b8 == uVar20) {
                                uStack_a4 = local_b8._4_4_;
                                *(undefined4 *)((long)param_1 + 0x644) = 0;
                                if (local_b8._4_4_ == 0x2026) {
                                  *(long *)(lVar25 + lVar51 * 0x178 + 0x30) = param_1[0xca];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((param_1[0x6d] == 0) ||
                                     (lVar25 = *(long *)(param_1[0x6d] + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                                  *(undefined4 *)(lVar25 + 0x2c) = 0;
                                  *(long *)(lVar25 + 0x38) = param_1[0xcb];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((param_1[0x6d] == 0) ||
                                     (lVar25 = *(long *)(param_1[0x6d] + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(long *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x50) =
                                       param_1[0xcc];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar6 == 0) ||
                                     (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  uVar20 = *puVar4;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar20)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  bVar10 = true;
                                  *(int *)(lVar25 + (long)(int)uVar20 * 0x178 + 0x58) =
                                       (int)param_1[0xcd];
                                  *(undefined1 *)(param_1 + 0x5f) = 1;
                                  local_b8 = CONCAT44(3,uVar20 + 1);
                                }
                                else if (local_b8._4_4_ == 3) {
                                  if ((*plVar50 == 0) ||
                                     (lVar29 = FUN_03568ac0(*plVar50,0), lVar29 == 0))
                                  goto LAB_0354fbf4;
                                  local_c68 = 3;
                                  FUN_0219b634(lVar29,&local_c68,&local_fe0,
                                               *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                                  if (*(uint *)(lVar25 + 0x18) <= uVar20)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(long *)(lVar25 + lVar51 * 0x178 + 0x30) = local_fe0;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  uVar20 = *(uint *)((long)param_1 + 0x494);
                                  bVar10 = true;
                                  *(undefined1 *)(param_1 + 0x5f) = 1;
                                }
                                else {
                                  bVar10 = true;
                                }
                              }
                              else {
                                bVar10 = false;
                              }
                              uVar41 = uStack_a4;
                              if (((int)uVar20 < *(int *)((long)param_1 + 0x324)) &&
                                 (uStack_a4 != 3)) {
                                if ((*plVar6 == 0) ||
                                   (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= uVar20)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar25 = lVar25 + (long)(int)uVar20 * 0x178;
                                *(undefined1 *)(lVar25 + 0x194) = 0;
                                *(undefined2 *)(lVar25 + 0x20) = 0x200b;
                                *(undefined4 *)(lVar25 + 100) = 0;
                                *puVar4 = uVar20 + 1;
                              }
                              else {
                                iVar19 = *(int *)((long)param_1 + 0x644);
                                if (iVar19 == 0) {
                                  uVar20 = *(uint *)((long)param_1 + 0x25c);
                                  if ((uVar20 >> 4 & 1) == 0) {
                                    if ((uVar20 >> 3 & 1) == 0) {
                                      fVar54 = 1.0;
                                      if ((uVar20 >> 5 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar28 = FUN_026b812c(uVar41,0);
                                        uVar20 = uStack_a4;
                                        if ((uVar28 & 1) != 0) {
                                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                          }
                                          uStack_a4 = FUN_026b8410(uVar20,0);
                                          uStack_a4 = uStack_a4 & 0xffff;
                                          fVar54 = fVar78;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar28 = FUN_026b8070(uVar41,0);
                                      uVar20 = uStack_a4;
                                      fVar54 = 1.0;
                                      if ((uVar28 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uStack_a4 = FUN_026b8594(uVar20,0);
                                        goto LAB_03549968;
                                      }
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar28 = FUN_026b812c(uVar41,0);
                                    uVar20 = uStack_a4;
                                    fVar54 = 1.0;
                                    if ((uVar28 & 1) != 0) {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uStack_a4 = FUN_026b8410(uVar20,0);
LAB_03549968:
                                      fVar54 = 1.0;
                                      uStack_a4 = uStack_a4 & 0xffff;
                                    }
                                  }
                                  iVar19 = *(int *)((long)param_1 + 0x644);
                                  if (iVar19 != 0) goto LAB_03549594;
LAB_03549978:
                                  if ((*plVar6 == 0) ||
                                     (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *plVar5 = *(long *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x30);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar5);
                                  if (*plVar5 == 0) goto LAB_03549564;
                                  if ((*plVar6 == 0) ||
                                     (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *plVar50 = *(long *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x38);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar50);
                                  if ((*plVar6 == 0) ||
                                     (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *plVar2 = *(long *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x50);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar6 == 0) ||
                                     (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  uVar41 = *puVar4;
                                  uVar20 = *(uint *)(lVar25 + 0x18);
                                  if (uVar20 <= uVar41)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(undefined4 *)(param_1 + 0x24) =
                                       *(undefined4 *)(lVar25 + (long)(int)uVar41 * 0x178 + 0x58);
                                  if (bVar10) {
                                    lVar26 = param_1[0x8f];
                                    if (lVar26 == 0) goto LAB_0354fbf4;
                                    if (*(uint *)(lVar26 + 0x18) <= (uint)local_d8)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if ((*(int *)(lVar26 + (long)(int)(uint)local_d8 * 0xc + 0x20)
                                         != 10) || (uVar41 == *(uint *)(param_1 + 0x93)))
                                    goto LAB_03549a88;
                                    if (uVar20 <= uVar41 - 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if (*plVar50 == 0) goto LAB_0354fbf4;
                                    fVar55 = *(float *)(lVar25 + (long)(int)(uVar41 - 1) * 0x178 +
                                                       0x60);
                                    iVar19 = FUN_03776950(*plVar50 + 0x50,0);
                                    lVar25 = *plVar50;
                                  }
                                  else {
LAB_03549a88:
                                    if (*plVar50 == 0) goto LAB_0354fbf4;
                                    fVar55 = *(float *)(param_1 + 0x3d);
                                    iVar19 = FUN_03776950(*plVar50 + 0x50,0);
                                    lVar25 = param_1[0x20];
                                  }
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                  fVar64 = (float)FUN_03776960(lVar25 + 0x50,0);
                                  fVar59 = fVar71;
                                  if (*(char *)((long)param_1 + 0x305) != '\0') {
                                    fVar59 = 1.0;
                                  }
                                  uVar18 = 0;
                                  local_1770._4_4_ = 0.0;
                                  if (!(bool)(bVar10 & uStack_a4 == 0x2026)) {
                                    if (*plVar50 == 0) goto LAB_0354fbf4;
                                    local_1770._4_4_ = (float)FUN_03776980(*plVar50 + 0x50,0);
                                    if (*plVar50 == 0) goto LAB_0354fbf4;
                                    uVar18 = FUN_037769c0(*plVar50 + 0x50,0);
                                  }
                                  lVar25 = param_1[0xc9];
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                  local_1770 = CONCAT44(local_1770._4_4_,uVar18);
                                  if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
                                  fVar80 = *(float *)((long)param_1 + 0x404);
                                  fVar60 = *(float *)(lVar25 + 0x2c);
                                  fVar79 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                                  if (*plVar50 == 0) goto LAB_0354fbf4;
                                  fVar62 = (float)FUN_037769b0(*plVar50 + 0x50,0);
                                  if (*plVar50 == 0) goto LAB_0354fbf4;
                                  fVar82 = *(float *)((long)param_1 + 0x404);
                                  fVar63 = (float)FUN_03776960(*plVar50 + 0x50,0);
                                  lVar25 = param_1[0x6d];
                                  if ((lVar25 == 0) ||
                                     (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar26 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar26 = lVar26 + (long)(int)*puVar4 * 0x178;
                                  *(undefined4 *)(lVar26 + 0x2c) = 0;
                                  fVar59 = ((fVar54 * fVar55) / (float)iVar19) * fVar64 * fVar59;
                                  fVar79 = fVar59 * fVar80 * fVar60 * fVar79;
                                  *(float *)(lVar26 + 0x160) = fVar79;
                                  uVar20 = *(uint *)(param_1 + 0x24);
                                  fVar63 = fVar59 * fVar62 * fVar82 * fVar63;
                                  if (uVar20 == 0) {
                                    local_1724 = *(float *)(param_1 + 0xc3);
                                  }
                                  else {
                                    lVar26 = param_1[0xe1];
                                    if (lVar26 == 0) goto LAB_0354fbf4;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar26 = *(long *)(lVar26 + (long)(int)uVar20 * 8 + 0x20);
                                    if (lVar26 == 0) goto LAB_0354fbf4;
                                    local_1724 = *(float *)(lVar26 + 0x54);
                                  }
LAB_03549e30:
                                  fVar55 = 0.0;
                                  if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                                    fVar55 = fVar79;
                                  }
                                }
                                else {
                                  fVar54 = 1.0;
                                  if (iVar19 == 0) goto LAB_03549978;
LAB_03549594:
                                  if (iVar19 == 1) {
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    *plVar3 = *(long *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x40);
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ();
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    *(undefined4 *)((long)param_1 + 0x6a4) =
                                         *(undefined4 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x48)
                                    ;
                                    if ((param_1[0xd3] == 0) ||
                                       (lVar25 = UnityEngine_Material__DisableKeyword
                                                           (param_1[0xd3],0), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    FUN_02215a88(lVar25,*(undefined4 *)((long)param_1 + 0x6a4),
                                                 &local_fe0,
                                                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                                    lVar25 = local_fe0;
                                    puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (local_fe0 == 0) goto LAB_03549564;
                                    if (uStack_a4 == 0x3c) {
                                      uStack_a4 = *(int *)((long)param_1 + 0x6a4) + 0xe000;
                                    }
                                    else {
                                      lVar51 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar51 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar51 = *(long *)puVar13;
                                      }
                                      *(undefined4 *)((long)param_1 + 0x1bc) =
                                           *(undefined4 *)(*(long *)(lVar51 + 0xb8) + 0x68);
                                    }
                                    if (param_1[0x20] == 0) goto LAB_0354fbf4;
                                    fVar79 = *(float *)(param_1 + 0x3d);
                                    memmove(&local_160,(void *)(param_1[0x20] + 0x50),0x60);
                                    iVar19 = FUN_03776950(&local_160,0);
                                    if (*plVar50 == 0) goto LAB_0354fbf4;
                                    memmove(&local_160,(void *)(*plVar50 + 0x50),0x60);
                                    fVar59 = (float)FUN_03776960(&local_160,0);
                                    fVar55 = fVar71;
                                    if (*(char *)((long)param_1 + 0x305) != '\0') {
                                      fVar55 = 1.0;
                                    }
                                    if (param_1[0xd3] == 0) goto LAB_0354fbf4;
                                    fVar55 = (fVar79 / (float)iVar19) * fVar59 * fVar55;
                                    iVar19 = FUN_03776950(param_1[0xd3] + 0x48,0);
                                    fVar79 = *(float *)(param_1 + 0x3d);
                                    if (iVar19 < 1) {
                                      if (*plVar50 == 0) goto LAB_0354fbf4;
                                      iVar19 = FUN_03776950(*plVar50 + 0x50,0);
                                      if (*plVar50 == 0) goto LAB_0354fbf4;
                                      fVar64 = (float)FUN_03776960(*plVar50 + 0x50,0);
                                      fVar59 = fVar71;
                                      if (*(char *)((long)param_1 + 0x305) != '\0') {
                                        fVar59 = 1.0;
                                      }
                                      if (param_1[0x20] == 0) goto LAB_0354fbf4;
                                      fVar80 = (float)FUN_03776980(param_1[0x20] + 0x50,0);
                                      if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
                                      FUN_03776e6c(&local_fe0,*(long *)(lVar25 + 0x20),0);
                                      uStack_178 = uStack_fd8;
                                      local_180 = local_fe0;
                                      local_170 = (undefined4)local_fd0;
                                      fVar60 = (float)FUN_03776c9c(&local_180,0);
                                      if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
                                      fVar82 = *(float *)(lVar25 + 0x2c);
                                      fVar62 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                                      if (*plVar50 == 0) goto LAB_0354fbf4;
                                      fVar61 = (float)FUN_03776980(*plVar50 + 0x50,0);
                                      if (*plVar50 == 0) goto LAB_0354fbf4;
                                      fVar76 = (float)FUN_037769b0(*plVar50 + 0x50,0);
                                      if (*plVar50 == 0) goto LAB_0354fbf4;
                                      fVar86 = *(float *)((long)param_1 + 0x404);
                                      fVar63 = (float)FUN_03776960(*plVar50 + 0x50,0);
                                      if (param_1[0x20] == 0) goto LAB_0354fbf4;
                                      fVar63 = fVar55 * fVar76 * fVar86 * fVar63;
                                      fVar59 = (fVar79 / (float)iVar19) * fVar64 * fVar59;
                                      fVar79 = fVar59 * (fVar80 / fVar60) * fVar82 * fVar62;
                                      fVar59 = fVar59 / fVar79;
                                      fVar61 = fVar59 * fVar61;
                                      fVar55 = (float)FUN_037769c0(param_1[0x20] + 0x50,0);
                                      fVar59 = fVar59 * fVar55;
                                    }
                                    else {
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      iVar19 = FUN_03776950(*plVar3 + 0x48,0);
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      fVar59 = (float)FUN_03776960(*plVar3 + 0x48,0);
                                      if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
                                      fVar80 = *(float *)(lVar25 + 0x2c);
                                      fVar64 = fVar71;
                                      if (*(char *)((long)param_1 + 0x305) != '\0') {
                                        fVar64 = 1.0;
                                      }
                                      fVar60 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                                      if (param_1[0xd3] == 0) goto LAB_0354fbf4;
                                      fVar61 = (float)FUN_03776980(param_1[0xd3] + 0x48,0);
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      fVar62 = (float)FUN_037769b0(*plVar3 + 0x48,0);
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      fVar82 = *(float *)((long)param_1 + 0x404);
                                      fVar63 = (float)FUN_03776960(*plVar3 + 0x48,0);
                                      if (param_1[0xd3] == 0) goto LAB_0354fbf4;
                                      fVar63 = fVar55 * fVar62 * fVar82 * fVar63;
                                      fVar79 = (fVar79 / (float)iVar19) * fVar59 * fVar64 *
                                               fVar80 * fVar60;
                                      fVar59 = (float)FUN_037769c0(param_1[0xd3] + 0x48,0);
                                    }
                                    *plVar5 = lVar25;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (plVar5,lVar25);
                                    if ((*plVar6 != 0) &&
                                       (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 != 0)) {
                                      if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                                      *(undefined4 *)(lVar25 + 0x2c) = 1;
                                      *(float *)(lVar25 + 0x160) = fVar79;
                                      *(long *)(lVar25 + 0x40) = *plVar3;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ();
                                      if ((*plVar6 != 0) &&
                                         (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 != 0)) {
                                        if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        *(long *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x38) =
                                             *plVar50;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ();
                                        lVar25 = *plVar6;
                                        if ((lVar25 != 0) &&
                                           (lVar51 = *(long *)(lVar25 + 0x38), lVar51 != 0)) {
                                          if (*puVar4 < *(uint *)(lVar51 + 0x18)) {
                                            local_1770 = CONCAT44(fVar61,fVar59);
                                            local_1724 = 0.0;
                                            *(int *)(lVar51 + (long)(int)*puVar4 * 0x178 + 0x58) =
                                                 (int)param_1[0x24];
                                            *(int *)(param_1 + 0x24) = (int)lVar26;
                                            goto LAB_03549e30;
                                          }
                                          goto 
                                          UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        }
                                      }
                                    }
                                    goto LAB_0354fbf4;
                                  }
                                  lVar25 = *plVar6;
                                  fVar63 = 0.0;
                                  fVar55 = 0.0;
                                  if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                                    fVar55 = fVar79;
                                  }
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                  local_1770 = 0;
                                }
                                lVar25 = *(long *)(lVar25 + 0x38);
                                if (lVar25 == 0) goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                                *(short *)(lVar25 + 0x20) = (short)uStack_a4;
                                *(int *)(lVar25 + 0x60) = (int)param_1[0x3d];
                                *(undefined4 *)(lVar25 + 0x164) =
                                     *(undefined4 *)((long)param_1 + 0x4ec);
                                if ((param_1[0x6d] == 0) ||
                                   (lVar25 = *(long *)(param_1[0x6d] + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(int *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x168) =
                                     (int)param_1[0x2b];
                                if ((param_1[0x6d] == 0) ||
                                   (lVar25 = *(long *)(param_1[0x6d] + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(undefined4 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x170) =
                                     *(undefined4 *)((long)param_1 + 0x15c);
                                if ((param_1[0x6d] == 0) ||
                                   (lVar25 = *(long *)(param_1[0x6d] + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                uVar20 = *puVar4;
                                FUN_0209a6e0(param_1 + 0xaa,&local_fe0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                                if (*(uint *)(lVar25 + 0x18) <= uVar20)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar25 = lVar25 + (long)(int)uVar20 * 0x178;
                                *(undefined4 *)(lVar25 + 0x18c) = (undefined4)local_fd0;
                                *(undefined8 *)(lVar25 + 0x184) = uStack_fd8;
                                *(long *)(lVar25 + 0x17c) = local_fe0;
                                if ((*plVar6 == 0) ||
                                   (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(undefined4 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 400) =
                                     *(undefined4 *)((long)param_1 + 0x25c);
                                if ((param_1[0xc9] == 0) ||
                                   (lVar25 = *(long *)(param_1[0xc9] + 0x20), lVar25 == 0))
                                goto LAB_0354fbf4;
                                FUN_03776e6c(&local_c68,lVar25,0);
                                uVar20 = uStack_a4;
                                local_f0 = CONCAT44(uStack_c64,local_c68);
                                uStack_e8 = uStack_c60;
                                local_e0 = local_c58;
                                if ((int)uStack_a4 < 0x10000) {
                                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar20 = FUN_026b63d8(uVar20,0);
                                  uVar20 = uVar20 & 1;
                                }
                                else {
                                  uVar20 = 0;
                                }
                                fVar59 = *(float *)(param_1 + 0x55);
                                *(undefined4 *)((long)param_1 + 0x2fc) = 0;
                                if (*(char *)((long)param_1 + 0x2f9) == '\0') {
                                  fVar64 = 0.0;
                                  fVar60 = 0.0;
                                  fVar80 = 0.0;
                                }
                                else {
                                  if (*plVar5 == 0) goto LAB_0354fbf4;
                                  uVar34 = *puVar4;
                                  uVar41 = *(uint *)(*plVar5 + 0x28);
                                  if ((int)uVar34 < (int)uVar35) {
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar34 + 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar25 = *(long *)(lVar25 + (long)(int)(uVar34 + 1) * 0x178 +
                                                      0x30);
                                    if ((((lVar25 == 0) || (*plVar50 == 0)) ||
                                        (lVar26 = *(long *)(*plVar50 + 0x128), lVar26 == 0)) ||
                                       (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0))
                                    goto LAB_0354fbf4;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,
                                                         uVar41 | *(int *)(lVar25 + 0x28) << 0x10);
                                    uVar24 = FUN_0219f8b8(lVar26,&local_fe0,&local_188,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                    uVar18 = 0;
                                    if ((uVar24 & 1) == 0) {
                                      fVar64 = 0.0;
                                      fVar60 = 0.0;
                                      fVar80 = 0.0;
                                    }
                                    else {
                                      if (local_188 == 0) goto LAB_0354fbf4;
                                      fVar64 = *(float *)(local_188 + 0x1c);
                                      uVar18 = *(undefined4 *)(local_188 + 0x20);
                                      fVar80 = *(float *)(local_188 + 0x14);
                                      fVar60 = *(float *)(local_188 + 0x18);
                                      if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                                        fVar59 = 0.0;
                                      }
                                    }
                                    uVar34 = *puVar4;
                                  }
                                  else {
                                    uVar18 = 0;
                                    fVar64 = 0.0;
                                    fVar60 = 0.0;
                                    fVar80 = 0.0;
                                  }
                                  if (0 < (int)uVar34) {
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar34 - 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar25 = *(long *)(lVar25 + (ulong)(uVar34 - 1) * 0x178 + 0x30);
                                    if (((lVar25 == 0) || (*plVar50 == 0)) ||
                                       ((lVar26 = *(long *)(*plVar50 + 0x128), lVar26 == 0 ||
                                        (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0))))
                                    goto LAB_0354fbf4;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,
                                                         *(uint *)(lVar25 + 0x28) | uVar41 << 0x10);
                                    uVar24 = FUN_0219f8b8(lVar26,&local_fe0,&local_188,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                    if ((uVar24 & 1) != 0) {
                                      if ((local_188 == 0) ||
                                         (fVar80 = (float)FUN_03571cb4(fVar80,fVar60,fVar64,uVar18,
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x28),
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x2c),
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x30),
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x34),0),
                                         local_188 == 0)) goto LAB_0354fbf4;
                                      if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                                        fVar59 = 0.0;
                                      }
                                    }
                                  }
                                  *(float *)((long)param_1 + 0x2fc) = fVar64;
                                }
                                if ((char)param_1[0x1e] != '\0') {
                                  fVar82 = *(float *)(param_1 + 200);
                                  fVar62 = (float)FUN_03776cb4(&local_f0,0);
                                  fVar82 = fVar82 - fVar55 * fVar62 * (1.0 - *(float *)((long)
                                                  param_1 + 0x2d4));
                                  *(float *)(param_1 + 200) = fVar82;
                                  if ((uStack_a4 == 0x200b) || (uVar20 != 0)) {
                                    *(float *)(param_1 + 200) =
                                         fVar82 - fVar58 * *(float *)((long)param_1 + 0x2b4);
                                  }
                                }
                                fVar82 = *(float *)(param_1 + 0x56);
                                fVar62 = 0.0;
                                if (fVar82 != 0.0) {
                                  fVar62 = (float)FUN_03776c94(&local_f0,0);
                                  fVar61 = (float)FUN_03776ca4(&local_f0,0);
                                  fVar62 = (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                           (fVar82 * 0.5 - fVar55 * (fVar62 * 0.5 + fVar61));
                                  *(float *)(param_1 + 200) = *(float *)(param_1 + 200) + fVar62;
                                }
                                if (((*(int *)((long)param_1 + 0x644) == 0) && (cVar33 == '\0')) &&
                                   ((*(byte *)((long)param_1 + 0x25c) & 1) != 0)) {
                                  lVar25 = *plVar2;
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036cee6c(lVar25,0,0);
                                  fVar61 = 0.0;
                                  if ((uVar24 & 1) != 0) {
                                    lVar25 = *plVar2;
                                    if (*(int *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    plVar49 = (long *)
                                              OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                    if (lVar25 == 0) goto LAB_0354fbf4;
                                    uVar24 = FUN_03699d3c(lVar25,*(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                                    fVar61 = 0.0;
                                    if ((uVar24 & 1) != 0) {
                                      lVar25 = *plVar2;
                                      if (*(int *)(*plVar49 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        plVar49 = (long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                      }
                                      if (lVar25 == 0) goto LAB_0354fbf4;
                                      fVar82 = (float)FUN_0369e060(lVar25,*(undefined4 *)
                                                                           (*(long *)(*plVar49 +
                                                                                     0xb8) + 0x54),0
                                                                  );
                                      if ((*plVar50 == 0) || (*plVar2 == 0)) goto LAB_0354fbf4;
                                      fVar76 = *(float *)(*plVar50 + 0x1b0);
                                      fVar61 = (float)FUN_0369e060(*plVar2,*(undefined4 *)
                                                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                      fVar61 = fVar61 * fVar82 * fVar76 * 0.25;
                                      if (fVar82 < local_1724 + fVar61) {
                                        local_1724 = fVar82 - fVar61;
                                      }
                                    }
                                  }
                                  if (*plVar50 == 0) goto LAB_0354fbf4;
                                  local_17c0 = *(float *)(*plVar50 + 0x1b4);
                                }
                                else {
                                  lVar25 = *plVar2;
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar24 = FUN_036cee6c(lVar25,0,0);
                                  local_17c0 = 0.0;
                                  if ((uVar24 & 1) != 0) {
                                    lVar25 = *plVar2;
                                    if (*(int *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    plVar49 = (long *)
                                              OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                    if (lVar25 == 0) goto LAB_0354fbf4;
                                    uVar24 = FUN_03699d3c(lVar25,*(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                                    if ((uVar24 & 1) != 0) {
                                      lVar25 = *plVar2;
                                      if (*(int *)(*plVar49 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        plVar49 = (long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                      }
                                      if (lVar25 == 0) goto LAB_0354fbf4;
                                      uVar24 = FUN_03699d3c(lVar25,*(undefined4 *)
                                                                    (*(long *)(*plVar49 + 0xb8) +
                                                                    0xcc),0);
                                      if ((uVar24 & 1) != 0) {
                                        lVar25 = *plVar2;
                                        if (*(int *)(*plVar49 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          plVar49 = (long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                        }
                                        if (lVar25 != 0) {
                                          fVar82 = (float)FUN_0369e060(lVar25,*(undefined4 *)
                                                                               (*(long *)(*plVar49 +
                                                                                         0xb8) +
                                                                               0x54),0);
                                          if ((*plVar50 != 0) && (*plVar2 != 0)) {
                                            fVar76 = *(float *)(*plVar50 + 0x1a8);
                                            fVar61 = (float)FUN_0369e060(*plVar2,*(undefined4 *)
                                                                                  (*(long *)(*(long 
                                                  *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                            fVar61 = fVar61 * fVar82 * fVar76 * 0.25;
                                            if (fVar82 < local_1724 + fVar61) {
                                              local_1724 = fVar82 - fVar61;
                                            }
                                            goto LAB_0354a568;
                                          }
                                        }
                                        goto LAB_0354fbf4;
                                      }
                                    }
                                  }
                                  fVar61 = 0.0;
                                }
LAB_0354a568:
                                fVar82 = *(float *)(param_1 + 200);
                                fVar76 = (float)FUN_03776ca4(&local_f0,0);
                                fVar82 = fVar82 + (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                                  fVar55 * (fVar80 + ((fVar76 - local_1724) - fVar61
                                                                     ));
                                fVar80 = (float)FUN_03776cac(&local_f0,0);
                                fVar76 = *(float *)((long)param_1 + 0x61c) +
                                         ((fVar63 + fVar55 * (fVar60 + local_1724 + fVar80)) -
                                         *(float *)(param_1 + 0x9b));
                                fVar80 = (float)FUN_03776c9c(&local_f0,0);
                                local_175c = fVar76 - fVar55 * (local_1724 + local_1724 + fVar80);
                                fVar80 = (float)FUN_03776c94(&local_f0,0);
                                fVar60 = fVar82 + (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                                  fVar55 * (fVar61 + fVar61 +
                                                           local_1724 + local_1724 + fVar80);
                                local_178c = fVar82;
                                fVar80 = fVar60;
                                if (((*(int *)((long)param_1 + 0x644) == 0) && (cVar33 == '\0')) &&
                                   ((*(byte *)((long)param_1 + 0x25c) >> 1 & 1) != 0)) {
                                  fVar65 = (float)(int)param_1[0xbe] * fVar81;
                                  fVar80 = (float)FUN_03776cac(&local_f0,0);
                                  fVar66 = fVar65 * fVar55 * (fVar61 + local_1724 + fVar80);
                                  fVar80 = (float)FUN_03776cac(&local_f0,0);
                                  fVar86 = (float)FUN_03776c9c(&local_f0,0);
                                  fVar76 = fVar76 + 0.0;
                                  local_175c = local_175c + 0.0;
                                  fVar65 = fVar65 * fVar55 * (((fVar80 - fVar86) - local_1724) -
                                                             fVar61);
                                  fVar86 = fVar82 + fVar66;
                                  fVar80 = fVar60 + fVar65;
                                  fVar75 = (fVar66 - fVar65) * 0.5;
                                  fVar82 = (fVar82 + fVar65) - fVar75;
                                  fVar60 = (fVar60 + fVar66) - fVar75;
                                  local_178c = fVar86 - fVar75;
                                  fVar80 = fVar80 - fVar75;
                                }
                                if (*(char *)((long)param_1 + 0x474) == '\0') {
                                  fVar65 = 0.0;
                                  fVar66 = 0.0;
                                  fVar74 = 0.0;
                                  local_1790 = 0.0;
                                  fVar75 = local_175c;
                                  fVar86 = fVar76;
                                }
                                else {
                                  thunk_FUN_036bc400(lVar48,0);
                                  fVar77 = (fVar60 + fVar82) * 0.5;
                                  fVar83 = (local_175c + fVar76) * 0.5;
                                  fVar76 = fVar76 - fVar83;
                                  local_1790 = 0.0;
                                  fVar86 = fVar76;
                                  local_178c = (float)FUN_036bdd2c(local_178c - fVar77,lVar48,0);
                                  local_178c = fVar77 + local_178c;
                                  local_1790 = local_1790 + 0.0;
                                  fVar75 = local_175c - fVar83;
                                  fVar65 = 0.0;
                                  local_175c = fVar75;
                                  fVar82 = (float)FUN_036bdd2c(fVar82 - fVar77,lVar48,0);
                                  fVar82 = fVar77 + fVar82;
                                  fVar65 = fVar65 + 0.0;
                                  local_175c = fVar83 + local_175c;
                                  fVar74 = 0.0;
                                  fVar60 = (float)FUN_036bdd2c(fVar60 - fVar77,lVar48,0);
                                  fVar60 = fVar77 + fVar60;
                                  fVar76 = fVar83 + fVar76;
                                  fVar74 = fVar74 + 0.0;
                                  fVar66 = 0.0;
                                  fVar80 = (float)FUN_036bdd2c(fVar80 - fVar77,lVar48,0);
                                  fVar80 = fVar77 + fVar80;
                                  fVar66 = fVar66 + 0.0;
                                  fVar75 = fVar83 + fVar75;
                                  fVar86 = fVar83 + fVar86;
                                }
                                if (*plVar6 == 0) goto LAB_0354fbf4;
                                lVar25 = *(long *)(*plVar6 + 0x38);
                                uVar24 = (ulong)(uint)fVar55;
                                if (lVar25 == 0) goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar25 + 0x11c) = fVar82;
                                *(float *)(lVar25 + 0x120) = local_175c;
                                *(float *)(lVar25 + 0x124) = fVar65;
                                if ((*plVar6 == 0) ||
                                   (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar25 + 0x114) = fVar86;
                                *(float *)(lVar25 + 0x110) = local_178c;
                                *(float *)(lVar25 + 0x118) = local_1790;
                                if ((*plVar6 == 0) ||
                                   (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar25 + 0x128) = fVar60;
                                *(float *)(lVar25 + 300) = fVar76;
                                *(float *)(lVar25 + 0x130) = fVar74;
                                if ((*plVar6 == 0) ||
                                   (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar25 = lVar25 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar25 + 0x134) = fVar80;
                                *(float *)(lVar25 + 0x138) = fVar75;
                                *(float *)(lVar25 + 0x13c) = fVar66;
                                if ((*plVar6 == 0) ||
                                   (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                goto LAB_0354fbf4;
                                uVar41 = *puVar4;
                                lVar26 = (long)(int)uVar41;
                                if (*(uint *)(lVar25 + 0x18) <= uVar41)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar51 = lVar25 + lVar26 * 0x178;
                                *(int *)(lVar51 + 0x140) = (int)param_1[200];
                                fVar76 = *(float *)(param_1 + 0x9b);
                                uVar70 = (ulong)(uint)fVar76;
                                fVar80 = *(float *)((long)param_1 + 0x61c);
                                *(float *)(lVar51 + 0x15c) =
                                     (fVar60 - fVar82) / (fVar86 - local_175c);
                                *(float *)(lVar51 + 0x14c) = (fVar63 - fVar76) + fVar80;
                                fVar60 = local_1770._4_4_ * fVar55;
                                if (*(int *)((long)param_1 + 0x644) == 0) {
                                  fVar60 = fVar60 / fVar54;
                                  local_1770._0_4_ = ((float)local_1770 * fVar55) / fVar54;
                                }
                                else {
                                  local_1770._0_4_ = (float)local_1770 * fVar55;
                                }
                                uVar34 = *(uint *)(param_1 + 0x93);
                                if ((uVar20 == 0) || (uVar41 == uVar34)) {
                                  local_1770._0_4_ = fVar80 + (float)local_1770;
                                  fVar60 = fVar80 + fVar60;
                                  fVar63 = (float)local_1770;
                                  fVar82 = fVar60;
                                  if (fVar80 != 0.0) {
                                    fVar82 = (fVar60 - fVar80) / *(float *)((long)param_1 + 0x404);
                                    fVar63 = ((float)local_1770 - fVar80) /
                                             *(float *)((long)param_1 + 0x404);
                                    if (fVar82 <= fVar60) {
                                      fVar82 = fVar60;
                                    }
                                    if ((float)local_1770 <= fVar63) {
                                      fVar63 = (float)local_1770;
                                    }
                                  }
                                  lVar25 = lVar25 + lVar26 * 0x178;
                                  fVar80 = fVar82;
                                  if (fVar82 <= *(float *)(param_1 + 0x99)) {
                                    fVar80 = *(float *)(param_1 + 0x99);
                                  }
                                  fVar86 = fVar63;
                                  if (*(float *)((long)param_1 + 0x4cc) <= fVar63) {
                                    fVar86 = *(float *)((long)param_1 + 0x4cc);
                                  }
                                  *(float *)((long)param_1 + 0x4cc) = fVar86;
                                  *(float *)(param_1 + 0x99) = fVar80;
                                  *(float *)(lVar25 + 0x154) = fVar82;
                                  *(float *)(lVar25 + 0x158) = fVar63;
                                  *(float *)(lVar25 + 0x148) = fVar60 - fVar76;
                                  *(float *)(param_1 + 0x98) = fVar60 - fVar76;
                                  *(float *)(lVar25 + 0x150) = (float)local_1770 - fVar76;
                                  *(float *)((long)param_1 + 0x4c4) = (float)local_1770 - fVar76;
                                  if (((int)param_1[0x95] == 0) ||
                                     (*(char *)((long)param_1 + 0x33c) != '\0')) {
                                    *(float *)(param_1 + 0x97) = fVar80;
                                    if (param_1[0x20] == 0) goto LAB_0354fbf4;
                                    fVar80 = *(float *)((long)param_1 + 0x4bc);
                                    fVar82 = (float)FUN_03776990(param_1[0x20] + 0x50,0);
                                    fVar54 = (fVar55 * fVar82) / fVar54;
                                    uVar70 = (ulong)*(uint *)(param_1 + 0x9b);
                                    if (fVar80 <= fVar54) {
                                      fVar80 = fVar54;
                                    }
                                    *(float *)((long)param_1 + 0x4bc) = fVar80;
                                  }
                                  if ((float)uVar70 == 0.0) {
                                    fVar54 = *(float *)((long)param_1 + 0x4b4);
                                    if (*(float *)((long)param_1 + 0x4b4) <= fVar60) {
                                      fVar54 = fVar60;
                                    }
                                    *(float *)((long)param_1 + 0x4b4) = fVar54;
                                  }
                                }
                                else {
                                  fVar54 = *(float *)(param_1 + 0x99);
                                  lVar25 = lVar25 + lVar26 * 0x178;
                                  *(float *)(lVar25 + 0x154) = fVar54;
                                  fVar80 = *(float *)((long)param_1 + 0x4cc);
                                  fVar54 = fVar54 - fVar76;
                                  *(float *)(lVar25 + 0x148) = fVar54;
                                  *(float *)(lVar25 + 0x158) = fVar80;
                                  *(float *)(param_1 + 0x98) = fVar54;
                                  fVar80 = fVar80 - fVar76;
                                  *(float *)(lVar25 + 0x150) = fVar80;
                                  *(float *)((long)param_1 + 0x4c4) = fVar80;
                                }
                                uVar22 = uStack_a4;
                                lVar25 = *plVar6;
                                if ((lVar25 == 0) ||
                                   (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                                goto LAB_0354fbf4;
                                uVar40 = *puVar4;
                                if (*(uint *)(lVar26 + 0x18) <= uVar40)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar26 = lVar26 + (long)(int)uVar40 * 0x178;
                                *(undefined1 *)(lVar26 + 0x194) = 0;
                                uVar43 = *(uint *)(param_1 + 0x4f);
                                if ((uStack_a4 == 9) ||
                                   (((((uVar20 == 0 && (uStack_a4 != 3)) && (uStack_a4 != 0x200b))
                                     && (uStack_a4 != 0xad)) ||
                                    (((bool)(uStack_a4 == 0xad & (bVar16 ^ 1U)) ||
                                     (*(int *)((long)param_1 + 0x644) == 1)))))) {
                                  *(undefined1 *)(lVar26 + 0x194) = 1;
                                  pfVar38 = (float *)((long)param_1 + 0x354);
                                  pfVar36 = (float *)(param_1 + 0x6a);
                                  if (bVar10) {
                                    lVar25 = *(long *)(lVar25 + 0x50);
                                    if (lVar25 == 0) goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(param_1 + 0x95))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar25 = lVar25 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                    pfVar36 = (float *)(lVar25 + 0x60);
                                    pfVar38 = (float *)(lVar25 + 100);
                                  }
                                  fVar80 = *pfVar36;
                                  fVar60 = *pfVar38;
                                  fVar54 = *(float *)(param_1 + 0x6c);
                                  fVar82 = *(float *)(param_1 + 200);
                                  local_1794 = (fVar85 - fVar80) - fVar60;
                                  bVar15 = true;
                                  if ((fVar54 <= local_1794) && (bVar15 = false, !NAN(fVar54))) {
                                    bVar15 = fVar54 == -1.0;
                                  }
                                  if (!bVar15) {
                                    local_1794 = fVar54;
                                  }
                                  fVar54 = 0.0;
                                  if ((char)param_1[0x1e] == '\0') {
                                    fVar54 = (float)FUN_03776cb4(&local_f0,0);
                                    uVar70 = (ulong)*(uint *)(param_1 + 0x9b);
                                  }
                                  fVar76 = *(float *)((long)param_1 + 0x2d4);
                                  fVar63 = *(float *)((long)param_1 + 0x4cc);
                                  if (uStack_a4 != 0xad) {
                                    fVar79 = fVar55;
                                  }
                                  fVar65 = (float)uVar70;
                                  fVar86 = 0.0;
                                  if ((0.0 < fVar65) &&
                                     (fVar86 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0')) {
                                    fVar86 = *(float *)(param_1 + 0x99) - *(float *)(param_1 + 0x9a)
                                    ;
                                  }
                                  uVar40 = *puVar4;
                                  fVar86 = (*(float *)(param_1 + 0x97) - (fVar63 - fVar65)) + fVar86
                                  ;
                                  if (fVar52 < fVar86) {
                                    if (*(int *)((long)param_1 + 0x2e4) == -1) {
                                      *(uint *)((long)param_1 + 0x2e4) = uVar40;
                                    }
                                    puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    uVar69 = DAT_00d37868;
                                    if ((char)param_1[0x47] != '\0') {
                                      fVar75 = *(float *)(param_1 + 0x59);
                                      if (((fVar75 < *(float *)((long)param_1 + 700)) &&
                                          (0.0 < fVar65)) &&
                                         (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                        fVar84 = *(float *)((long)param_1 + 700) +
                                                 ((fVar73 - fVar86) / (float)(int)param_1[0x95]) /
                                                 fVar84;
                                        if (fVar84 <= fVar75) {
                                          fVar84 = fVar75;
                                        }
                                        goto UnityEngine_AndroidJavaObject___ctor;
                                      }
                                      fVar65 = *(float *)((long)param_1 + 0x1e4);
                                      fVar86 = *(float *)(param_1 + 0x4a);
                                      uVar70 = (ulong)(uint)fVar86;
                                      if ((fVar86 < fVar65) &&
                                         (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                        fVar84 = (fVar65 - *(float *)(param_1 + 0x48)) * 0.5;
                                        if (fVar84 <= DAT_00d38b84) {
                                          fVar84 = DAT_00d38b84;
                                        }
                                        fVar58 = (fVar65 - fVar84) * 20.0 + 0.5;
                                        *(float *)((long)param_1 + 0x23c) = fVar65;
                                        fVar84 = DAT_00d38e60;
                                        if (fVar58 != INFINITY) {
                                          fVar84 = (float)(int)fVar58 / 20.0;
                                        }
                                        if (fVar84 <= fVar86) {
                                          fVar84 = fVar86;
                                        }
                                        goto LAB_0354d004;
                                      }
                                    }
                                    switch((int)param_1[0x5c]) {
                                    case 1:
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)puVar13;
                                      }
                                      lVar26 = *(long *)(lVar25 + 0xb8);
                                      lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                        0x20);
                                      if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                        lVar25 = FUN_01a46ff8(lVar25);
                                      }
                                      piVar30 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                                                          *(long *)(*(long *)(*(long
                                                                                                *)(
                                                  lVar25 + 0xc0) + 8) + 0x80) + 0xa0);
                                      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*piVar30 == 0) {
LAB_0354cf2c:
                                        local_b8 = DAT_00d37868;
                                        local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                                        puVar4[0] = 0;
                                        puVar4[1] = 0;
                                      }
                                      else {
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)puVar13;
                                        }
                                        FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&local_fe0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(auStack_500,&local_fe0,0x378);
                                        puVar31 = auStack_500;
LAB_0354b394:
                                        iVar19 = FUN_0358c15c(param_1,puVar31,0);
LAB_0354b3a0:
                                        local_d8 = CONCAT44(local_d8._4_4_,iVar19 + -1);
                                        iVar19 = *(int *)((long)param_1 + 0x494) + -1;
                                        *(int *)((long)param_1 + 0x494) = iVar19;
                                        local_b8 = CONCAT44(0x2026,iVar19);
                                        iVar17 = iVar17 + 1;
                                      }
                                      goto LAB_03549564;
                                    default:
                                      goto switchD_0354ad3c_caseD_2;
                                    case 3:
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)puVar13;
                                      }
                                      lVar25 = *(long *)(lVar25 + 0xb8) + 0xb00;
LAB_0354af20:
                                      uVar18 = FUN_0358c15c(param_1,lVar25,0);
LAB_0354af2c:
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      break;
                                    case 5:
                                      if ((uVar40 == 0) || ((int)(uint)local_d8 < 0)) {
                                        local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                                        *puVar4 = 0;
                                        local_b8 = uVar69;
                                      }
                                      else {
                                        fVar79 = *(float *)(param_1 + 0x99);
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)puVar13;
                                        }
                                        uVar18 = FUN_0358c15c(param_1,*(long *)(lVar25 + 0xb8) +
                                                                      0x410,0);
                                        local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                        if (fVar52 < fVar79 - fVar63) break;
                                        *(undefined1 *)((long)param_1 + 0x33c) = 1;
                                        *(undefined4 *)(param_1 + 0x93) =
                                             *(undefined4 *)((long)param_1 + 0x494);
                                        uVar70 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                        *(float *)(param_1 + 200) =
                                             *(float *)((long)param_1 + 0x40c) + 0.0;
                                        *(undefined4 *)(param_1 + 0x9a) = 0;
                                        lVar25 = NEON_rev64(uVar70,4);
                                        param_1[0x99] = lVar25;
                                        *(undefined4 *)(param_1 + 0x9b) = 0;
                                        *(undefined8 *)((long)param_1 + 0x4b4) = 0;
                                        *(int *)(param_1 + 0x95) = (int)param_1[0x95] + 1;
                                        *(int *)(param_1 + 0x96) = (int)param_1[0x96] + 1;
                                      }
                                      goto LAB_03549564;
                                    case 6:
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)puVar13;
                                      }
                                      uVar18 = FUN_0358c15c(param_1,*(long *)(lVar25 + 0xb8) + 0xb00
                                                            ,0);
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      lVar25 = param_1[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar28 = FUN_036cee6c(lVar25,0,0);
                                      if ((uVar28 & 1) != 0) {
                                        plVar49 = (long *)param_1[0x5d];
                                        uVar69 = (**(code **)(*param_1 + 0x518))
                                                           (param_1,*(undefined8 *)
                                                                     (*param_1 + 0x520));
                                        if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar49 + 0x528))
                                                  (plVar49,uVar69,*(undefined8 *)(*plVar49 + 0x530))
                                        ;
                                        lVar25 = param_1[0x5d];
                                        if (lVar25 == 0) goto LAB_0354fbf4;
                                        *(int *)(lVar25 + 0x400) = (int)param_1[0x80];
                                        FUN_0357ee30(lVar25,*(undefined4 *)((long)param_1 + 0x494),0
                                                    );
                                        plVar49 = (long *)param_1[0x5d];
                                        if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar49 + 0x7a8))
                                                  (plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7b0));
                                        *(undefined1 *)(param_1 + 0x5f) = 1;
                                      }
                                    }
LAB_0354b0e0:
                                    local_b8 = CONCAT44(3,uVar40);
                                    goto LAB_03549564;
                                  }
switchD_0354ad3c_caseD_2:
                                  puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  fVar54 = ABS(fVar82) + fVar54 * (1.0 - fVar76) * fVar79;
                                  fVar79 = 1.0;
                                  if ((uVar43 & 0x18) != 0) {
                                    fVar79 = DAT_00d38acc;
                                  }
                                  fVar82 = fVar79 * local_1794;
                                  if (fVar82 < fVar54) {
                                    uVar70 = (ulong)(uint)fVar61;
                                    if (((char)param_1[0x5b] == '\0') ||
                                       (uVar40 == *(uint *)(param_1 + 0x93))) {
                                      if (((char)param_1[0x47] != '\0') &&
                                         (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                        fVar82 = *(float *)(param_1 + 0x5a) / 100.0;
                                        if (fVar76 < fVar82) {
                                          fVar84 = fVar54 / (1.0 - fVar76);
                                          if (fVar76 <= 0.0) {
                                            fVar84 = fVar54;
                                          }
                                          fVar76 = fVar76 + (fVar54 - fVar79 * (local_1794 +
                                                                               DAT_00d38cc4)) /
                                                            fVar84;
                                          goto LAB_0354fc24;
                                        }
                                        fVar76 = *(float *)((long)param_1 + 0x1e4);
                                        fVar82 = *(float *)(param_1 + 0x4a);
                                        if (fVar82 < fVar76) {
                                          fVar84 = (fVar76 - *(float *)(param_1 + 0x48)) * 0.5;
                                          if (fVar84 <= DAT_00d38b84) {
                                            fVar84 = DAT_00d38b84;
                                          }
                                          *(float *)((long)param_1 + 0x23c) = fVar76;
                                          fVar76 = fVar76 - fVar84;
LAB_0354fc60:
                                          fVar58 = fVar76 * 20.0 + 0.5;
                                          fVar84 = DAT_00d38e60;
                                          if (fVar58 != INFINITY) {
                                            fVar84 = (float)(int)fVar58 / 20.0;
                                          }
                                          if (fVar84 <= fVar82) {
                                            fVar84 = fVar82;
                                          }
                                          goto LAB_0354d004;
                                        }
                                      }
                                      iVar19 = (int)param_1[0x5c];
                                      if (iVar19 == 1) {
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)puVar13;
                                        }
                                        lVar26 = *(long *)(lVar25 + 0xb8);
                                        lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                          0x20);
                                        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                          lVar25 = FUN_01a46ff8(lVar25);
                                        }
                                        piVar30 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                                                            *(long *)(*(long *)(*(
                                                  long *)(lVar25 + 0xc0) + 8) + 0x80) + 0xa0);
                                        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*piVar30 == 0) goto LAB_0354cf2c;
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)puVar13;
                                        }
                                        FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&local_fe0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(auStack_bf0,&local_fe0,0x378);
                                        puVar31 = auStack_bf0;
                                        goto LAB_0354b394;
                                      }
                                      if (iVar19 != 6) {
                                        if (iVar19 == 3) {
                                          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          if (*(int *)(lVar25 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                            lVar25 = *(long *)puVar13;
                                          }
                                          lVar25 = *(long *)(lVar25 + 0xb8) + 0x98;
                                          goto LAB_0354af20;
                                        }
                                        goto LAB_0354b8e4;
                                      }
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)puVar13;
                                      }
                                      uVar18 = FUN_0358c15c(param_1,*(long *)(lVar25 + 0xb8) + 0x98,
                                                            0);
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      lVar25 = param_1[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar28 = FUN_036cee6c(lVar25,0,0);
                                      if ((uVar28 & 1) != 0) {
                                        plVar49 = (long *)param_1[0x5d];
                                        uVar69 = (**(code **)(*param_1 + 0x518))
                                                           (param_1,*(undefined8 *)
                                                                     (*param_1 + 0x520));
                                        if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar49 + 0x528))
                                                  (plVar49,uVar69,*(undefined8 *)(*plVar49 + 0x530))
                                        ;
                                        lVar25 = param_1[0x5d];
                                        if (lVar25 == 0) goto LAB_0354fbf4;
                                        *(int *)(lVar25 + 0x400) = (int)param_1[0x80];
                                        FUN_0357ee30(lVar25,*(undefined4 *)((long)param_1 + 0x494),0
                                                    );
                                        plVar49 = (long *)param_1[0x5d];
                                        if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar49 + 0x7a8))
                                                  (plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7b0));
                                        *(undefined1 *)(param_1 + 0x5f) = 1;
                                      }
LAB_0354b4b4:
                                      local_b8 = CONCAT44(3,*puVar4);
                                      goto LAB_03549564;
                                    }
                                    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar25 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar25 = *(long *)puVar13;
                                    }
                                    iVar19 = FUN_0358c15c(param_1,*(long *)(lVar25 + 0xb8) + 0x98,0)
                                    ;
                                    local_d8 = CONCAT44(local_d8._4_4_,iVar19);
                                    if (*(float *)(param_1 + 0x58) == DAT_00d38ba4) {
                                      lVar25 = *plVar6;
                                      if ((lVar25 == 0) ||
                                         (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                                      goto LAB_0354fbf4;
                                      if (*(uint *)(lVar26 + 0x18) <= *puVar4)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      fVar82 = *(float *)(param_1 + 0x9b);
                                      fVar76 = 0.0;
                                      if ((0.0 < fVar82) &&
                                         (fVar76 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0')) {
                                        fVar76 = *(float *)(param_1 + 0x99) -
                                                 *(float *)(param_1 + 0x9a);
                                      }
                                      fVar76 = fVar58 * *(float *)(param_1 + 0x57) +
                                               *(float *)(lVar26 + (long)(int)*puVar4 * 0x178 +
                                                         0x154) +
                                               (fVar76 - *(float *)((long)param_1 + 0x4cc)) +
                                               fVar84 * (fVar53 + *(float *)((long)param_1 + 700));
                                    }
                                    else {
                                      lVar25 = param_1[0x6d];
                                      *(undefined1 *)((long)param_1 + 0x2c4) = 1;
                                      if (lVar25 == 0) goto LAB_0354fbf4;
                                      fVar82 = *(float *)(param_1 + 0x9b);
                                      fVar76 = *(float *)(param_1 + 0x58) +
                                               fVar58 * *(float *)(param_1 + 0x57);
                                    }
                                    puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar25 = *(long *)(lVar25 + 0x38);
                                    if (lVar25 == 0) goto LAB_0354fbf4;
                                    uVar22 = *(uint *)((long)param_1 + 0x494);
                                    if ((*(uint *)(lVar25 + 0x18) <= uVar22) ||
                                       (uVar42 = uVar22 - 1, *(uint *)(lVar25 + 0x18) <= uVar42))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    uVar70 = (ulong)(uint)(fVar76 + *(float *)(param_1 + 0x97));
                                    fVar63 = (fVar76 + *(float *)(param_1 + 0x97) + fVar82) -
                                             *(float *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x158);
                                    if ((!bVar16 &&
                                         *(short *)(lVar25 + (long)(int)uVar42 * 0x178 + 0x20) ==
                                         0xad) && ((fVar63 < fVar52 || ((int)param_1[0x5c] == 0))))
                                    {
                                      bVar16 = false;
                                      local_b8 = CONCAT44(0x2d,uVar42);
                                      local_d8 = CONCAT44(local_d8._4_4_,iVar19 + -1);
                                      *puVar4 = uVar42;
                                      goto LAB_03549564;
                                    }
                                    if (*(short *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x20) ==
                                        0xad) {
                                      bVar16 = true;
                                      goto LAB_03549564;
                                    }
                                    if ((bVar11 & *(byte *)(param_1 + 0x47)) != 0) {
                                      fVar76 = *(float *)((long)param_1 + 0x2d4);
                                      fVar82 = *(float *)(param_1 + 0x5a) / 100.0;
                                      if ((fVar82 <= fVar76) ||
                                         ((int)param_1[0x49] <= *(int *)((long)param_1 + 0x244))) {
                                        fVar76 = *(float *)((long)param_1 + 0x1e4);
                                        uVar70 = (ulong)(uint)fVar76;
                                        fVar82 = *(float *)(param_1 + 0x4a);
                                        if ((fVar76 <= fVar82) ||
                                           ((int)param_1[0x49] <= *(int *)((long)param_1 + 0x244)))
                                        goto LAB_0354b6dc;
LAB_0354fcd0:
                                        fVar84 = (fVar76 - *(float *)(param_1 + 0x48)) * 0.5;
                                        if (fVar84 <= DAT_00d38b84) {
                                          fVar84 = DAT_00d38b84;
                                        }
                                        *(float *)((long)param_1 + 0x23c) = fVar76;
                                        fVar76 = fVar76 - fVar84;
                                        goto LAB_0354fc60;
                                      }
LAB_0354fc94:
                                      fVar84 = fVar54;
                                      if (0.0 < fVar76) {
                                        fVar84 = fVar54 / (1.0 - fVar76);
                                      }
                                      fVar76 = fVar76 + (fVar54 - fVar79 * (local_1794 +
                                                                           DAT_00d38cc4)) / fVar84;
LAB_0354fc24:
                                      if (fVar82 <= fVar76) {
                                        fVar76 = fVar82;
                                      }
                                      *(float *)((long)param_1 + 0x2d4) = fVar76;
                                      return;
                                    }
LAB_0354b6dc:
                                    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar25 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar25 = *(long *)puVar13;
                                    }
                                    lVar26 = *(long *)(lVar25 + 0xb8);
                                    iVar19 = *(int *)(lVar26 + 0xe78);
                                    if (((iVar19 != local_1864) && (iVar19 != -1)) && (bVar11 == 1))
                                    {
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                          0xb8);
                                      }
                                      iVar21 = FUN_0358c15c(param_1,lVar26 + 0xe78,0);
                                      local_d8 = CONCAT44(local_d8._4_4_,iVar21);
                                      if ((param_1[0x6d] == 0) ||
                                         (lVar25 = *(long *)(param_1[0x6d] + 0x38), lVar25 == 0))
                                      goto LAB_0354fbf4;
                                      uVar22 = *puVar4 - 1;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar22)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      local_1864 = iVar19;
                                      if (*(short *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x20) ==
                                          0xad) {
                                        bVar16 = false;
                                        local_b8 = CONCAT44(0x2d,uVar22);
                                        local_d8 = CONCAT44(local_d8._4_4_,iVar21 + -1);
                                        *puVar4 = uVar22;
                                        goto LAB_03549564;
                                      }
                                    }
                                    if (fVar63 <= fVar52) {
switchD_0354b88c_caseD_0:
                                      FUN_0358cbd4(fVar84,uVar24,fVar58,
                                                   *(undefined4 *)((long)param_1 + 0x2fc),local_17c0
                                                   ,fVar59,local_1794,fVar53,param_1,
                                                   local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                    }
                                    else {
                                      if (*(int *)((long)param_1 + 0x2e4) == -1) {
                                        *(undefined4 *)((long)param_1 + 0x2e4) =
                                             *(undefined4 *)((long)param_1 + 0x494);
                                      }
                                      fVar82 = fVar52;
                                      if ((char)param_1[0x47] != '\0') {
                                        fVar82 = *(float *)(param_1 + 0x59);
                                        if ((fVar82 < *(float *)((long)param_1 + 700)) &&
                                           (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                          fVar84 = *(float *)((long)param_1 + 700) +
                                                   ((fVar73 - fVar63) /
                                                   (float)((int)param_1[0x95] + 1)) / fVar84;
                                          if (fVar84 <= fVar82) {
                                            fVar84 = fVar82;
                                          }
UnityEngine_AndroidJavaObject___ctor:
                                          *(float *)((long)param_1 + 700) = fVar84;
                                          return;
                                        }
                                        fVar76 = *(float *)((long)param_1 + 0x2d4);
                                        fVar82 = *(float *)(param_1 + 0x5a) / 100.0;
                                        if ((fVar76 < fVar82) &&
                                           (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49]))
                                        goto LAB_0354fc94;
                                        fVar76 = *(float *)((long)param_1 + 0x1e4);
                                        uVar70 = (ulong)(uint)fVar76;
                                        fVar82 = *(float *)(param_1 + 0x4a);
                                        if ((fVar82 < fVar76) &&
                                           (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49]))
                                        goto LAB_0354fcd0;
                                      }
                                      switch((int)param_1[0x5c]) {
                                      case 0:
                                      case 2:
                                      case 4:
                                        goto switchD_0354b88c_caseD_0;
                                      case 1:
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        }
                                        lVar26 = *(long *)(lVar25 + 0xb8);
                                        lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                          0x20);
                                        if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                          lVar25 = FUN_01a46ff8(lVar25);
                                        }
                                        piVar30 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                                                            *(long *)(*(long *)(*(
                                                  long *)(lVar25 + 0xc0) + 8) + 0x80) + 0xa0);
                                        if (*piVar30 == 0) {
                                          bVar16 = false;
                                          goto LAB_0354cf2c;
                                        }
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        }
                                        FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&local_fe0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(auStack_878,&local_fe0,0x378);
                                        iVar19 = FUN_0358c15c(param_1,auStack_878,0);
                                        bVar16 = false;
                                        goto LAB_0354b3a0;
                                      case 3:
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        }
                                        uVar18 = FUN_0358c15c(param_1,*(long *)(lVar25 + 0xb8) +
                                                                      0xb00,0);
                                        bVar16 = false;
                                        goto LAB_0354af2c;
                                      case 5:
                                        *(undefined1 *)((long)param_1 + 0x33c) = 1;
                                        FUN_0358cbd4(fVar84,uVar24,fVar58,
                                                     *(undefined4 *)((long)param_1 + 0x2fc),
                                                     local_17c0,fVar59,local_1794,fVar53,param_1,
                                                     local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                        *(undefined4 *)(param_1 + 0x9a) = 0;
                                        *(undefined4 *)(param_1 + 0x9b) = 0;
                                        *(undefined8 *)((long)param_1 + 0x4b4) = 0;
                                        *(int *)(param_1 + 0x96) = (int)param_1[0x96] + 1;
                                        break;
                                      case 6:
                                        lVar25 = param_1[0x5d];
                                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar28 = FUN_036cee6c(lVar25,0,0);
                                        if ((uVar28 & 1) != 0) {
                                          plVar49 = (long *)param_1[0x5d];
                                          uVar69 = (**(code **)(*param_1 + 0x518))
                                                             (param_1,*(undefined8 *)
                                                                       (*param_1 + 0x520));
                                          if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                          (**(code **)(*plVar49 + 0x528))
                                                    (plVar49,uVar69,
                                                     *(undefined8 *)(*plVar49 + 0x530));
                                          lVar25 = param_1[0x5d];
                                          if (lVar25 == 0) goto LAB_0354fbf4;
                                          *(int *)(lVar25 + 0x400) = (int)param_1[0x80];
                                          FUN_0357ee30(lVar25,*(undefined4 *)((long)param_1 + 0x494)
                                                       ,0);
                                          plVar49 = (long *)param_1[0x5d];
                                          if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                          (**(code **)(*plVar49 + 0x7a8))
                                                    (plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7b0));
                                          *(undefined1 *)(param_1 + 0x5f) = 1;
                                        }
                                        bVar16 = false;
                                        goto LAB_0354b4b4;
                                      default:
                                        bVar16 = false;
                                        goto LAB_0354b8e4;
                                      }
                                    }
                                    bVar16 = false;
LAB_0354c6b4:
                                    bVar11 = 1;
                                    bVar12 = true;
                                    uVar70 = uVar24;
                                    uVar24 = (ulong)(uint)fVar55;
                                    goto LAB_03549564;
                                  }
LAB_0354b8e4:
                                  if (uStack_a4 != 0xad) {
                                    if (uStack_a4 == 9) {
                                      lVar25 = *plVar6;
                                      if ((lVar25 != 0) &&
                                         (lVar26 = *(long *)(lVar25 + 0x38), lVar26 != 0)) {
                                        uVar22 = *puVar4;
                                        if (*(uint *)(lVar26 + 0x18) <= uVar22)
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        *(undefined1 *)(lVar26 + (long)(int)uVar22 * 0x178 + 0x194)
                                             = 0;
                                        *(uint *)((long)param_1 + 0x4a4) = uVar22;
                                        lVar26 = *(long *)(lVar25 + 0x50);
                                        if (lVar26 != 0) {
                                          if (*(uint *)(param_1 + 0x95) < *(uint *)(lVar26 + 0x18))
                                          {
                                            lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x95) *
                                                              0x5c;
                                            *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                                            goto LAB_0354b950;
                                          }
                                          goto 
                                          UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        }
                                      }
                                    }
                                    else {
                                      lVar25 = 0x4ec;
                                      if (*(char *)((long)param_1 + 0x1d4) != '\0') {
                                        lVar25 = 0x144;
                                      }
                                      if (*(int *)((long)param_1 + 0x644) == 1) {
                                        (**(code **)(*param_1 + 0x898))
                                                  (fVar82,fVar61,param_1,
                                                   *(undefined4 *)((long)param_1 + lVar25),
                                                   *(undefined8 *)(*param_1 + 0x8a0));
                                      }
                                      else if (*(int *)((long)param_1 + 0x644) == 0) {
                                        (**(code **)(*param_1 + 0x888))
                                                  (local_1724,param_1,
                                                   *(undefined4 *)((long)param_1 + lVar25),
                                                   *(undefined8 *)(*param_1 + 0x890));
                                      }
                                      if (bVar12) {
                                        *(uint *)((long)param_1 + 0x49c) = *puVar4;
                                      }
                                      *(uint *)((long)param_1 + 0x4a4) = *puVar4;
                                      *(int *)((long)param_1 + 0x4ac) =
                                           *(int *)((long)param_1 + 0x4ac) + 1;
                                      if ((param_1[0x6d] != 0) &&
                                         (lVar25 = *(long *)(param_1[0x6d] + 0x50), lVar25 != 0)) {
                                        if (*(uint *)(param_1 + 0x95) < *(uint *)(lVar25 + 0x18)) {
                                          lVar25 = lVar25 + (long)(int)*(uint *)(param_1 + 0x95) *
                                                            0x5c;
                                          bVar12 = false;
                                          *(float *)(lVar25 + 0x60) = fVar80;
                                          *(float *)(lVar25 + 100) = fVar60;
                                          goto LAB_0354ba38;
                                        }
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                      }
                                    }
                                    goto LAB_0354fbf4;
                                  }
                                  if ((*plVar6 == 0) ||
                                     (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(undefined1 *)(lVar25 + (long)(int)*puVar4 * 0x178 + 0x194) = 0;
                                }
                                else {
                                  if (((uStack_a4 & 0xfffffffe) == 10) && ((int)param_1[0x5c] == 6))
                                  {
                                    fVar54 = (float)uVar70;
                                    fVar79 = 0.0;
                                    if ((0.0 < fVar54) &&
                                       (fVar79 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0')) {
                                      fVar79 = *(float *)(param_1 + 0x99) -
                                               *(float *)(param_1 + 0x9a);
                                    }
                                    uVar70 = (ulong)(uint)fVar52;
                                    if (fVar52 < (*(float *)(param_1 + 0x97) -
                                                 (*(float *)((long)param_1 + 0x4cc) - fVar54)) +
                                                 fVar79) {
                                      if (*(int *)((long)param_1 + 0x2e4) == -1) {
                                        *(uint *)((long)param_1 + 0x2e4) = uVar40;
                                      }
                                      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)puVar13;
                                      }
                                      uVar18 = FUN_0358c15c(param_1,*(long *)(lVar25 + 0xb8) + 0xb00
                                                            ,0);
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      lVar25 = param_1[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar28 = FUN_036cee6c(lVar25,0,0);
                                      if ((uVar28 & 1) != 0) {
                                        plVar49 = (long *)param_1[0x5d];
                                        uVar69 = (**(code **)(*param_1 + 0x518))
                                                           (param_1,*(undefined8 *)
                                                                     (*param_1 + 0x520));
                                        if (plVar49 != (long *)0x0) {
                                          (**(code **)(*plVar49 + 0x528))
                                                    (plVar49,uVar69,
                                                     *(undefined8 *)(*plVar49 + 0x530));
                                          lVar25 = param_1[0x5d];
                                          if (lVar25 != 0) {
                                            *(int *)(lVar25 + 0x400) = (int)param_1[0x80];
                                            FUN_0357ee30(lVar25,*(undefined4 *)
                                                                 ((long)param_1 + 0x494),0);
                                            plVar49 = (long *)param_1[0x5d];
                                            if (plVar49 != (long *)0x0) {
                                              (**(code **)(*plVar49 + 0x7a8))
                                                        (plVar49,0,0,
                                                         *(undefined8 *)(*plVar49 + 0x7b0));
                                              *(undefined1 *)(param_1 + 0x5f) = 1;
                                              goto LAB_0354b0e0;
                                            }
                                          }
                                        }
                                        goto LAB_0354fbf4;
                                      }
                                      goto LAB_0354b0e0;
                                    }
                                  }
                                  if ((((uStack_a4 - 0x2007 < 0x23) &&
                                       ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x600000001U)
                                        != 0)) || (uStack_a4 - 10 < 2)) || (uStack_a4 == 0xa0)) {
LAB_0354b500:
                                    if (((uStack_a4 != 0xad) && (uStack_a4 != 0x200b)) &&
                                       (uStack_a4 != 0x2060)) {
                                      lVar25 = *plVar6;
                                      if ((lVar25 == 0) ||
                                         (lVar26 = *(long *)(lVar25 + 0x50), lVar26 == 0))
                                      goto LAB_0354fbf4;
                                      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x95))
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                      *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                                      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar24 = FUN_026b97f8(uVar22,0);
                                    if ((uVar24 & 1) != 0) goto LAB_0354b500;
                                  }
                                  if (uStack_a4 == 0xa0) {
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x50), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(param_1 + 0x95))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar25 = lVar25 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
LAB_0354b950:
                                    *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
                                  }
                                }
LAB_0354ba38:
                                if (((int)param_1[0x5c] == 1) && ((uStack_a4 == 0x2d || (!bVar10))))
                                {
                                  if (param_1[0xcb] == 0) goto LAB_0354fbf4;
                                  fVar79 = *(float *)(param_1 + 0x3d);
                                  iVar19 = FUN_03776950(param_1[0xcb] + 0x50,0);
                                  if (param_1[0xcb] == 0) goto LAB_0354fbf4;
                                  fVar80 = (float)FUN_03776960(param_1[0xcb] + 0x50,0);
                                  lVar25 = param_1[0xca];
                                  fVar54 = fVar71;
                                  if (*(char *)((long)param_1 + 0x305) != '\0') {
                                    fVar54 = 1.0;
                                  }
                                  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0))
                                  goto LAB_0354fbf4;
                                  fVar82 = *(float *)((long)param_1 + 0x404);
                                  fVar76 = *(float *)(lVar25 + 0x2c);
                                  fVar60 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                                  fVar61 = *(float *)(param_1 + 0x6a);
                                  fVar60 = fVar82 * (fVar79 / (float)iVar19) * fVar80 * fVar54 *
                                           fVar76 * fVar60;
                                  fVar79 = *(float *)((long)param_1 + 0x354);
                                  if ((uStack_a4 == 10) &&
                                     (*(int *)((long)param_1 + 0x494) != (int)param_1[0x93])) {
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x38), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    uVar22 = *(int *)((long)param_1 + 0x494) - 1;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar22)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if (param_1[0xcb] == 0) goto LAB_0354fbf4;
                                    fVar54 = *(float *)(lVar25 + (long)(int)uVar22 * 0x178 + 0x60);
                                    iVar19 = FUN_03776950(param_1[0xcb] + 0x50,0);
                                    if (param_1[0xcb] == 0) goto LAB_0354fbf4;
                                    fVar82 = (float)FUN_03776960(param_1[0xcb] + 0x50,0);
                                    lVar25 = param_1[0xca];
                                    fVar80 = fVar71;
                                    if (*(char *)((long)param_1 + 0x305) != '\0') {
                                      fVar80 = 1.0;
                                    }
                                    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0))
                                    goto LAB_0354fbf4;
                                    fVar76 = *(float *)((long)param_1 + 0x404);
                                    fVar63 = *(float *)(lVar25 + 0x2c);
                                    fVar60 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                                    if ((*plVar6 == 0) ||
                                       (lVar25 = *(long *)(*plVar6 + 0x50), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(param_1 + 0x95))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar25 = lVar25 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                    fVar61 = *(float *)(lVar25 + 0x60);
                                    fVar79 = *(float *)(lVar25 + 100);
                                    fVar60 = fVar76 * (fVar54 / (float)iVar19) * fVar82 * fVar80 *
                                             fVar63 * fVar60;
                                  }
                                  fVar82 = *(float *)(param_1 + 0x9b);
                                  fVar54 = 0.0;
                                  fVar80 = 0.0;
                                  if ((0.0 < fVar82) &&
                                     (fVar80 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0')) {
                                    fVar80 = *(float *)(param_1 + 0x99) - *(float *)(param_1 + 0x9a)
                                    ;
                                  }
                                  fVar63 = *(float *)(param_1 + 0x97);
                                  fVar86 = *(float *)((long)param_1 + 0x4cc);
                                  fVar76 = *(float *)(param_1 + 200);
                                  if ((char)param_1[0x1e] == '\0') {
                                    if ((param_1[0xca] == 0) ||
                                       (lVar25 = *(long *)(param_1[0xca] + 0x20), lVar25 == 0))
                                    goto LAB_0354fbf4;
                                    FUN_03776e6c(&local_fe0,lVar25,0);
                                    uStack_178 = uStack_fd8;
                                    local_180 = local_fe0;
                                    local_170 = (undefined4)local_fd0;
                                    fVar54 = (float)FUN_03776cb4(&local_180,0);
                                  }
                                  puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  fVar65 = *(float *)(param_1 + 0x6c);
                                  fVar79 = (fVar85 - fVar61) - fVar79;
                                  bVar15 = true;
                                  if ((fVar65 <= fVar79) && (bVar15 = false, !NAN(fVar65))) {
                                    bVar15 = fVar65 == -1.0;
                                  }
                                  if (!bVar15) {
                                    fVar79 = fVar65;
                                  }
                                  fVar61 = 1.0;
                                  if ((uVar43 & 0x18) != 0) {
                                    fVar61 = DAT_00d38acc;
                                  }
                                  if (((fVar63 - (fVar86 - fVar82)) + fVar80 < fVar52) &&
                                     (ABS(fVar76) +
                                      fVar60 * fVar54 * (1.0 - *(float *)((long)param_1 + 0x2d4)) <
                                      fVar61 * fVar79)) {
                                    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar25 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar25 = *(long *)puVar13;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0x788,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                    lVar25 = *(long *)(*(long *)puVar13 + 0xb8);
                                    memcpy(auStack_1358,(void *)(lVar25 + 0x788),0x378);
                                    FUN_0209b210(lVar25 + 0x11f0,auStack_1358,
                                                 *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                  }
                                }
                                lVar25 = *plVar6;
                                if (lVar25 == 0) goto LAB_0354fbf4;
                                lVar26 = *(long *)(lVar25 + 0x38);
                                if (lVar26 == 0) goto LAB_0354fbf4;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                uVar22 = *(uint *)(param_1 + 0x95);
                                lVar26 = lVar26 + (long)(int)*puVar4 * 0x178;
                                *(uint *)(lVar26 + 100) = uVar22;
                                *(int *)(lVar26 + 0x68) = (int)param_1[0x96];
                                if ((bVar10) ||
                                   ((uStack_a4 < 0xe &&
                                    ((1 << (ulong)(uStack_a4 & 0x1f) & 0x2c00U) != 0)))) {
                                  lVar25 = *(long *)(lVar25 + 0x50);
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar22)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  if (*(int *)(lVar25 + (long)(int)uVar22 * 0x5c + 0x24) == 1)
                                  goto LAB_0354bde0;
                                }
                                else {
                                  lVar25 = *(long *)(lVar25 + 0x50);
                                  if (lVar25 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
                                  if (*(uint *)(lVar25 + 0x18) <= uVar22)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(int *)(lVar25 + (long)(int)uVar22 * 0x5c + 0x68) =
                                       (int)param_1[0x4f];
                                }
                                if (uStack_a4 == 9) {
                                  if (*plVar50 == 0) goto LAB_0354fbf4;
                                  fVar79 = (float)FUN_03776a48(*plVar50 + 0x50,0);
                                  if (*plVar50 == 0) goto LAB_0354fbf4;
                                  fVar64 = *(float *)(param_1 + 200);
                                  fVar54 = (float)NEON_ucvtf((uint)*(byte *)(*plVar50 + 0x1b9));
                                  fVar79 = fVar55 * fVar79 * fVar54;
                                  fVar54 = fVar79 * (float)(int)(fVar64 / fVar79);
                                  uVar70 = (ulong)(uint)fVar54;
                                  if (fVar54 <= fVar64) {
                                    fVar54 = fVar64 + fVar79;
                                  }
LAB_0354c000:
                                  *(float *)(param_1 + 200) = fVar54;
                                }
                                else if (*(float *)(param_1 + 0x56) == 0.0) {
                                  if ((char)param_1[0x1e] == '\0') {
                                    if (*(char *)((long)param_1 + 0x474) == '\0') {
                                      fVar80 = 1.0;
                                    }
                                    else {
                                      fVar80 = (float)thunk_FUN_036bc400(lVar48,0);
                                    }
                                    fVar54 = *(float *)(param_1 + 200);
                                    fVar60 = (float)FUN_03776cb4(&local_f0,0);
                                    if (param_1[0x20] != 0) {
                                      fVar79 = 1.0 - *(float *)((long)param_1 + 0x2d4);
                                      fVar54 = fVar54 + fVar79 * (*(float *)((long)param_1 + 0x2ac)
                                                                 + fVar55 * (fVar64 + fVar80 * 
                                                  fVar60) + fVar58 * (local_17c0 +
                                                                     fVar59 + *(float *)(param_1[
                                                  0x20] + 0x1ac)));
                                      *(float *)(param_1 + 200) = fVar54;
                                      goto joined_r0x0354bf48;
                                    }
                                    goto LAB_0354fbf4;
                                  }
                                  if (*plVar50 == 0) goto LAB_0354fbf4;
                                  fVar54 = (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                           (*(float *)((long)param_1 + 0x2ac) +
                                           fVar55 * fVar64 +
                                           fVar58 * (local_17c0 +
                                                    fVar59 + *(float *)(*plVar50 + 0x1ac)));
                                  uVar70 = (ulong)(uint)fVar54;
                                  fVar54 = *(float *)(param_1 + 200) - fVar54;
                                  *(float *)(param_1 + 200) = fVar54;
                                  if ((uStack_a4 == 0x200b) || (uVar20 != 0)) {
                                    fVar79 = fVar58 * *(float *)((long)param_1 + 0x2b4);
                                    uVar70 = (ulong)(uint)fVar79;
                                    fVar54 = fVar54 - fVar79;
                                    goto LAB_0354c000;
                                  }
                                }
                                else {
                                  if (*plVar50 == 0) goto LAB_0354fbf4;
                                  fVar79 = *(float *)(param_1 + 200);
                                  fVar54 = fVar79 + (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                                    (*(float *)((long)param_1 + 0x2ac) +
                                                    (*(float *)(param_1 + 0x56) - fVar62) +
                                                    fVar58 * (fVar59 + *(float *)(*plVar50 + 0x1ac))
                                                    );
                                  *(float *)(param_1 + 200) = fVar54;
joined_r0x0354bf48:
                                  if ((uStack_a4 == 0x200b) ||
                                     (uVar70 = (ulong)(uint)fVar79, uVar20 != 0)) {
                                    fVar79 = fVar58 * *(float *)((long)param_1 + 0x2b4);
                                    uVar70 = (ulong)(uint)fVar79;
                                    fVar54 = fVar54 + fVar79;
                                    goto LAB_0354c000;
                                  }
                                }
                                lVar25 = *plVar6;
                                if ((lVar25 == 0) ||
                                   (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                                goto LAB_0354fbf4;
                                uVar22 = *puVar4;
                                uVar40 = (uint)*(undefined8 *)(lVar26 + 0x18);
                                if (uVar40 <= uVar22)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(float *)(lVar26 + (long)(int)uVar22 * 0x178 + 0x144) = fVar54;
                                uVar43 = uStack_a4;
                                if ((int)uStack_a4 < 0xd) {
                                  if ((uStack_a4 - 10 < 2) || (uStack_a4 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
                                  if (((bool)(bVar10 & uStack_a4 == 0x2d)) || (uVar22 == uVar35))
                                  goto LAB_0354c060;
                                }
                                else {
                                  if (1 < uStack_a4 - 0x2028) {
                                    if (uStack_a4 != 0xd) goto LAB_0354c6e8;
                                    uVar70 = 0;
                                    *(float *)(param_1 + 200) =
                                         *(float *)((long)param_1 + 0x40c) + 0.0;
                                    if (uVar22 != uVar35) goto LAB_0354c704;
                                  }
LAB_0354c060:
                                  if (0.0 < *(float *)(param_1 + 0x9b)) {
                                    fVar79 = *(float *)(param_1 + 0x99);
                                    fVar54 = *(float *)(param_1 + 0x9a);
                                    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    fVar79 = fVar79 - fVar54;
                                    if (((fVar81 < ABS(fVar79)) &&
                                        (*(char *)((long)param_1 + 0x2c4) == '\0')) &&
                                       (*(char *)((long)param_1 + 0x33c) == '\0')) {
                                      FUN_0358c860(fVar79,param_1,(int)param_1[0x93],
                                                   *(undefined4 *)((long)param_1 + 0x494),0);
                                      *(float *)((long)param_1 + 0x4c4) =
                                           *(float *)((long)param_1 + 0x4c4) - fVar79;
                                      *(float *)(param_1 + 0x9b) =
                                           fVar79 + *(float *)(param_1 + 0x9b);
                                      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)puVar13;
                                      }
                                      lVar26 = *(long *)(lVar25 + 0xb8);
                                      if (*(int *)(lVar26 + 0x7ac) == (int)param_1[0x95]) {
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo
                                                            + 0xb8);
                                        }
                                        FUN_0209b778(lVar26 + 0x11f0,&local_fe0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&local_fe0
                                               ,0x378);
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (*(long *)(lVar25 + 0xb8) + 0x818,0);
                                        lVar25 = *(long *)(*(long *)puVar13 + 0xb8);
                                        *(float *)(lVar25 + 0x7bc) =
                                             fVar79 + *(float *)(lVar25 + 0x7bc);
                                        *(float *)(lVar25 + 0x800) =
                                             fVar79 + *(float *)(lVar25 + 0x800);
                                        memcpy(auStack_16d0,(void *)(lVar25 + 0x788),0x378);
                                        FUN_0209b210(lVar25 + 0x11f0,auStack_16d0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                      }
                                    }
                                  }
                                  fVar64 = *(float *)(param_1 + 0x9b);
                                  *(undefined1 *)((long)param_1 + 0x33c) = 0;
                                  fVar54 = *(float *)((long)param_1 + 0x4cc) - fVar64;
                                  fVar79 = *(float *)((long)param_1 + 0x4c4);
                                  if (fVar54 <= *(float *)((long)param_1 + 0x4c4)) {
                                    fVar79 = fVar54;
                                  }
                                  *(float *)((long)param_1 + 0x4c4) = fVar79;
                                  fVar80 = *(float *)(param_1 + 0x99);
                                  if (local_ac[0] == '\0') {
                                    local_a8 = fVar79;
                                  }
                                  if ((*(char *)((long)param_1 + 0x334) != '\0') &&
                                     (((int)param_1[0x65] <= *(int *)((long)param_1 + 0x494) ||
                                      ((int)param_1[0x66] <= (int)param_1[0x95])))) {
                                    local_ac[0] = '\x01';
                                  }
                                  lVar25 = *plVar6;
                                  if ((lVar25 == 0) ||
                                     (lVar26 = *(long *)(lVar25 + 0x50), lVar26 == 0))
                                  goto LAB_0354fbf4;
                                  uVar22 = *(uint *)(param_1 + 0x95);
                                  if (*(uint *)(lVar26 + 0x18) <= uVar22)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar51 = param_1[0x93];
                                  lVar29 = lVar26 + (long)(int)uVar22 * 0x5c;
                                  *(int *)(lVar29 + 0x34) = (int)lVar51;
                                  uVar40 = *(uint *)(param_1 + 0x93);
                                  if ((int)lVar51 <= (int)*(uint *)((long)param_1 + 0x49c)) {
                                    uVar40 = *(uint *)((long)param_1 + 0x49c);
                                  }
                                  *(uint *)((long)param_1 + 0x49c) = uVar40;
                                  *(uint *)(lVar29 + 0x38) = uVar40;
                                  *(undefined4 *)(param_1 + 0x94) =
                                       *(undefined4 *)((long)param_1 + 0x494);
                                  *(undefined4 *)(lVar29 + 0x3c) =
                                       *(undefined4 *)((long)param_1 + 0x494);
                                  iVar19 = *(int *)((long)param_1 + 0x49c);
                                  if ((int)uVar40 <= *(int *)((long)param_1 + 0x4a4)) {
                                    iVar19 = *(int *)((long)param_1 + 0x4a4);
                                  }
                                  local_d8 = CONCAT44(iVar19,(uint)local_d8);
                                  *(int *)((long)param_1 + 0x4a4) = iVar19;
                                  *(int *)(lVar29 + 0x40) = iVar19;
                                  *(int *)(lVar29 + 0x24) =
                                       (*(int *)(lVar29 + 0x3c) - *(int *)(lVar29 + 0x34)) + 1;
                                  *(undefined4 *)(lVar29 + 0x28) =
                                       *(undefined4 *)((long)param_1 + 0x4ac);
                                  lVar25 = *(long *)(lVar25 + 0x38);
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar40)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  uVar18 = *(undefined4 *)
                                            (lVar25 + (long)(int)uVar40 * 0x178 + 0x11c);
                                  lVar26 = lVar26 + (long)(int)uVar22 * 0x5c;
                                  *(float *)(lVar26 + 0x70) = fVar54;
                                  *(undefined4 *)(lVar26 + 0x6c) = uVar18;
                                  lVar25 = *plVar6;
                                  if ((lVar25 == 0) ||
                                     (lVar26 = *(long *)(lVar25 + 0x50), lVar26 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x95))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar25 = *(long *)(lVar25 + 0x38);
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)param_1 + 0x4a4))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  fVar80 = fVar80 - fVar64;
                                  uVar70 = (ulong)(uint)fVar80;
                                  lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                  *(undefined4 *)(lVar26 + 0x74) =
                                       *(undefined4 *)
                                        (lVar25 + (long)(int)*(uint *)((long)param_1 + 0x4a4) *
                                                  0x178 + 0x128);
                                  *(float *)(lVar26 + 0x78) = fVar80;
                                  lVar25 = *plVar6;
                                  if ((lVar25 == 0) ||
                                     (lVar51 = *(long *)(lVar25 + 0x50), lVar51 == 0))
                                  goto LAB_0354fbf4;
                                  lVar29 = (long)(int)*(uint *)(param_1 + 0x95);
                                  if (*(uint *)(lVar51 + 0x18) <= *(uint *)(param_1 + 0x95))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar26 = lVar51 + lVar29 * 0x5c;
                                  *(float *)(lVar26 + 0x44) =
                                       *(float *)(lVar26 + 0x74) - fVar55 * local_1724;
                                  *(float *)(lVar26 + 0x5c) = local_1794;
                                  if (*(int *)(lVar26 + 0x24) == 1) {
                                    *(int *)(lVar51 + lVar29 * 0x5c + 0x68) = (int)param_1[0x4f];
                                  }
                                  if ((*plVar50 == 0) ||
                                     (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                                  goto LAB_0354fbf4;
                                  lVar45 = (long)(int)*(uint *)((long)param_1 + 0x4a4);
                                  uVar40 = (uint)*(undefined8 *)(lVar26 + 0x18);
                                  if (uVar40 <= *(uint *)((long)param_1 + 0x4a4))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  if ((*(char *)(lVar26 + lVar45 * 0x178 + 0x194) == '\0') &&
                                     (lVar45 = (long)(int)*(uint *)(param_1 + 0x94),
                                     uVar40 <= *(uint *)(param_1 + 0x94)))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar51 = lVar51 + lVar29 * 0x5c;
                                  fVar59 = (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                           (fVar58 * (local_17c0 +
                                                     fVar59 + *(float *)(*plVar50 + 0x1ac)) -
                                           *(float *)((long)param_1 + 0x2ac));
                                  fVar79 = -fVar59;
                                  if ((char)param_1[0x1e] != '\0') {
                                    fVar79 = fVar59;
                                  }
                                  *(float *)(lVar51 + 0x58) =
                                       *(float *)(lVar26 + lVar45 * 0x178 + 0x144) + fVar79;
                                  *(float *)(lVar51 + 0x50) = 0.0 - *(float *)(param_1 + 0x9b);
                                  *(float *)(lVar51 + 0x54) = fVar54;
                                  *(float *)(lVar51 + 0x48) = fVar84 * fVar53 + (fVar80 - fVar54);
                                  *(float *)(lVar51 + 0x4c) = fVar80;
                                  puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  uVar43 = uStack_a4;
                                  if ((int)uStack_a4 < 0x2d) {
                                    if (uStack_a4 - 10 < 2) {
LAB_0354c4a8:
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)puVar13;
                                      }
                                      FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0x410,
                                                   local_d8 & 0xffffffff,
                                                   *(undefined4 *)((long)param_1 + 0x494),0);
                                      lVar25 = param_1[0x6d];
                                      *(undefined4 *)((long)param_1 + 0x4ac) = 0;
                                      iVar19 = (int)param_1[0x95] + 1;
                                      *(int *)(param_1 + 0x95) = iVar19;
                                      *(int *)(param_1 + 0x93) = *(int *)((long)param_1 + 0x494) + 1
                                      ;
                                      if ((lVar25 != 0) && (*(long *)(lVar25 + 0x50) != 0)) {
                                        if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar19) {
                                          FUN_0358ca18(param_1,iVar19,0);
                                          lVar25 = param_1[0x6d];
                                          if (lVar25 == 0) goto LAB_0354fbf4;
                                        }
                                        lVar25 = *(long *)(lVar25 + 0x38);
                                        if (lVar25 != 0) {
                                          uVar20 = *puVar4;
                                          if (uVar20 < *(uint *)(lVar25 + 0x18)) {
                                            fVar79 = *(float *)(lVar25 + (long)(int)uVar20 * 0x178 +
                                                               0x154);
                                            if (*(float *)(param_1 + 0x58) == DAT_00d38ba4) {
                                              if ((uStack_a4 == 0x2029) ||
                                                 (fVar54 = 0.0, uStack_a4 == 10)) {
                                                fVar54 = *(float *)((long)param_1 + 0x2cc);
                                              }
                                              uVar32 = 0;
                                              fVar54 = fVar79 + (0.0 - *(float *)((long)param_1 +
                                                                                 0x4cc)) +
                                                       fVar84 * (fVar53 + *(float *)((long)param_1 +
                                                                                    700)) +
                                                       fVar58 * (*(float *)(param_1 + 0x57) + fVar54
                                                                ) + *(float *)(param_1 + 0x9b);
                                            }
                                            else {
                                              if ((uStack_a4 == 0x2029) ||
                                                 (fVar54 = 0.0, uStack_a4 == 10)) {
                                                fVar54 = *(float *)((long)param_1 + 0x2cc);
                                              }
                                              uVar32 = 1;
                                              fVar54 = *(float *)(param_1 + 0x9b) +
                                                       *(float *)(param_1 + 0x58) +
                                                       fVar58 * (*(float *)(param_1 + 0x57) + fVar54
                                                                );
                                            }
                                            *(float *)(param_1 + 0x9b) = fVar54;
                                            *(undefined1 *)((long)param_1 + 0x2c4) = uVar32;
                                            puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            if (*(int *)(lVar25 + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                              lVar25 = *(long *)puVar13;
                                              uVar20 = *puVar4;
                                            }
                                            lVar25 = *(long *)(lVar25 + 0xb8);
                                            uVar69 = *(undefined8 *)(lVar25 + 0x15a8);
                                            *(float *)(param_1 + 0x9a) = fVar79;
                                            uVar24 = NEON_rev64(uVar69,4);
                                            param_1[0x99] = uVar24;
                                            *(float *)(param_1 + 200) =
                                                 *(float *)(param_1 + 0x81) + 0.0 +
                                                 *(float *)((long)param_1 + 0x40c);
                                            FUN_0358c4f0(param_1,lVar25 + 0x98,local_d8 & 0xffffffff
                                                         ,uVar20,0);
                                            FUN_0358c4f0(param_1,*(long *)(*(long *)puVar13 + 0xb8)
                                                                 + 0xb00,local_d8 & 0xffffffff,
                                                         *(undefined4 *)((long)param_1 + 0x494),0);
                                            *(int *)((long)param_1 + 0x494) =
                                                 *(int *)((long)param_1 + 0x494) + 1;
                                            goto LAB_0354c6b4;
                                          }
                                          goto 
                                          UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        }
                                      }
                                      goto LAB_0354fbf4;
                                    }
                                    if (uStack_a4 == 3) {
                                      if (param_1[0x8f] == 0) goto LAB_0354fbf4;
                                      local_d8 = CONCAT44(iVar19,(int)*(undefined8 *)
                                                                       (param_1[0x8f] + 0x18));
                                      uVar43 = 3;
                                    }
                                  }
                                  else if ((uStack_a4 - 0x2028 < 2) || (uStack_a4 == 0x2d))
                                  goto LAB_0354c4a8;
                                }
LAB_0354c704:
                                uVar22 = *puVar4;
                                if (uVar40 <= uVar22)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                if (*(char *)(lVar26 + (long)(int)uVar22 * 0x178 + 0x194) != '\0') {
                                  lVar26 = lVar26 + (long)(int)uVar22 * 0x178;
                                  uVar70 = *(ulong *)(lVar26 + 0x11c);
                                  uVar24 = *(ulong *)((long)param_1 + 0x4dc);
                                  *(ulong *)((long)param_1 + 0x4dc) =
                                       uVar24 ^ (uVar24 ^ uVar70) &
                                                ~CONCAT44(-(uint)((float)(uVar24 >> 0x20) <
                                                                 (float)(uVar70 >> 0x20)),
                                                          -(uint)((float)uVar24 < (float)uVar70));
                                  uVar24 = *(ulong *)((long)param_1 + 0x4e4);
                                  uVar70 = *(ulong *)(lVar26 + 0x128);
                                  *(ulong *)((long)param_1 + 0x4e4) =
                                       uVar24 ^ (uVar24 ^ uVar70) &
                                                ~CONCAT44(-(uint)((float)(uVar70 >> 0x20) <
                                                                 (float)(uVar24 >> 0x20)),
                                                          -(uint)((float)uVar70 < (float)uVar24));
                                }
                                if (((int)param_1[0x5c] == 5) &&
                                   ((0xd < uVar43 || ((1 << (ulong)(uVar43 & 0x1f) & 0x2c00U) == 0))
                                   )) {
                                  lVar26 = *(long *)(lVar25 + 0x58);
                                  if (lVar26 == 0) goto LAB_0354fbf4;
                                  iVar19 = (int)param_1[0x96] + 1;
                                  if (*(int *)(lVar26 + 0x18) < iVar19) {
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0
                                       ) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_01ff02b8((long *)(lVar25 + 0x58),iVar19,1,
                                                 *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                                    lVar25 = *plVar6;
                                    if (lVar25 == 0) goto LAB_0354fbf4;
                                  }
                                  lVar26 = *(long *)(lVar25 + 0x58);
                                  if (lVar26 == 0) goto LAB_0354fbf4;
                                  uVar43 = *(uint *)(param_1 + 0x96);
                                  lVar51 = (long)(int)uVar43;
                                  uVar40 = *(uint *)(lVar26 + 0x18);
                                  if (uVar40 <= uVar43)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar29 = lVar26 + lVar51 * 0x14;
                                  fVar54 = *(float *)(lVar29 + 0x30);
                                  uVar70 = (ulong)(uint)fVar54;
                                  *(undefined4 *)(lVar29 + 0x28) =
                                       *(undefined4 *)((long)param_1 + 0x4b4);
                                  fVar79 = *(float *)((long)param_1 + 0x4c4);
                                  if (fVar54 <= *(float *)((long)param_1 + 0x4c4)) {
                                    fVar79 = fVar54;
                                  }
                                  *(float *)(lVar29 + 0x30) = fVar79;
                                  uVar22 = *(uint *)((long)param_1 + 0x494);
                                  if (uVar22 == 0 && uVar43 == 0) {
                                    *(uint *)(lVar26 + (ulong)uVar43 * 0x14 + 0x20) = uVar22;
                                  }
                                  else {
                                    uVar42 = uVar22 - 1;
                                    if (0 < (int)uVar22) {
                                      lVar25 = *(long *)(lVar25 + 0x38);
                                      if (lVar25 == 0) goto LAB_0354fbf4;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar42)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      if (uVar43 != *(uint *)(lVar25 + (ulong)uVar42 * 0x178 + 0x68)
                                         ) {
                                        if (uVar43 - 1 < uVar40) {
                                          *(uint *)(lVar26 + 0x20 + (long)(int)(uVar43 - 1) * 0x14 +
                                                   4) = uVar42;
                                          *(uint *)(lVar26 + 0x20 + lVar51 * 0x14) = uVar22;
                                          goto LAB_0354c780;
                                        }
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                      }
                                    }
                                    if (uVar22 == uVar35) {
                                      *(uint *)(lVar26 + lVar51 * 0x14 + 0x24) = uVar35;
                                      uVar22 = uVar35;
                                    }
                                  }
                                }
LAB_0354c780:
                                puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (((char)param_1[0x5b] == '\0') &&
                                   ((6 < *(uint *)(param_1 + 0x5c) ||
                                    ((1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f) & 0x4aU) == 0))
                                   )) goto LAB_0354cc90;
                                if ((uVar20 == 0) &&
                                   (((uStack_a4 != 0x2d && (uStack_a4 != 0x200b)) &&
                                    (uStack_a4 != 0xad)))) {
                                  if (*(char *)((long)param_1 + 0x2da) == '\0') {
LAB_0354c87c:
                                    if (((((0x2bfd < uStack_a4 - 0xac01) &&
                                          (0xfd < uStack_a4 - 0x1101)) &&
                                         (0x1d < uStack_a4 - 0xa961)) ||
                                        (uVar24 = FUN_03597a54(0), (uVar24 & 1) != 0)) &&
                                       ((((0xed < uStack_a4 - 0xff01 && (0x1d < uStack_a4 - 0xfe31))
                                         && (0x717d < uStack_a4 - 0x2e81)) &&
                                        (0x1fd < uStack_a4 - 0xf901)))) goto LAB_0354c904;
                                    lVar25 = FUN_035978e8(0);
                                    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0))
                                    goto LAB_0354fbf4;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,uStack_a4);
                                    uVar22 = FUN_0219c130(*(long *)(lVar25 + 0x10),&local_fe0,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                    if ((int)uVar35 <= (int)*puVar4) {
                                      if ((uVar22 & 1) == 0) {
LAB_0354cc08:
                                        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar25 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar25 = *(long *)puVar13;
                                        }
                                        FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0x98,
                                                     local_d8 & 0xffffffff,
                                                     *(undefined4 *)((long)param_1 + 0x494),0);
                                        bVar11 = 0;
                                        goto LAB_0354cc90;
                                      }
LAB_0354cb6c:
                                      if (uVar41 != uVar34 || ((bVar11 ^ 0xff) & 1) != 0)
                                      goto LAB_0354cc90;
                                      if (uVar20 != 0) goto LAB_0354cb88;
                                      goto LAB_0354cbc0;
                                    }
                                    lVar25 = FUN_035978e8(0);
                                    if (((lVar25 == 0) || (*plVar6 == 0)) ||
                                       (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar26 + 0x18) <= *puVar4 + 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_0354fbf4;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,
                                                         (uint)*(ushort *)
                                                                (lVar26 + (long)(int)(*puVar4 + 1) *
                                                                          0x178 + 0x20));
                                    uVar24 = FUN_0219c130(*(long *)(lVar25 + 0x18),&local_fe0,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                    if ((uVar22 & 1) != 0) goto LAB_0354cb6c;
                                    if ((uVar24 & 1) == 0) goto LAB_0354cc08;
                                    if (bVar11 == 0) goto LAB_0354cc88;
                                    if (uVar20 != 0) {
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      }
                                      FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0xe78,
                                                   local_d8 & 0xffffffff,
                                                   *(undefined4 *)((long)param_1 + 0x494),0);
                                    }
                                    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar25 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0x98,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                  }
                                  else {
                                    if (bVar11 == 0) goto LAB_0354cc88;
LAB_0354c910:
                                    if (!bVar16 && uStack_a4 == 0xad) goto LAB_0354cb88;
LAB_0354cbc0:
                                    puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar25 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar25 = *(long *)puVar13;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0x98,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                  }
                                  bVar11 = 1;
                                }
                                else if (*(char *)((long)param_1 + 0x2da) == '\x01') {
LAB_0354c904:
                                  if (bVar11 != 0) {
                                    if (uVar20 == 0) goto LAB_0354c910;
LAB_0354cb88:
                                    puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar25 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar25 = *(long *)puVar13;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0xe78,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                    goto LAB_0354cbc0;
                                  }
LAB_0354cc88:
                                  bVar11 = 0;
                                }
                                else {
                                  if (((uStack_a4 - 0x2007 < 0x29) &&
                                      ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x10000000401U)
                                       != 0)) || ((uStack_a4 == 0xa0 || (uStack_a4 == 0x2060))))
                                  goto LAB_0354c87c;
                                  lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (*(int *)(lVar25 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    uVar22 = *puVar4;
                                    lVar25 = *(long *)puVar13;
                                  }
                                  FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0x98,
                                               local_d8 & 0xffffffff,uVar22,0);
                                  bVar11 = 0;
                                  *(undefined4 *)(*(long *)(*(long *)puVar13 + 0xb8) + 0xe78) =
                                       0xffffffff;
                                }
LAB_0354cc90:
                                puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar25 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar25 = *(long *)puVar13;
                                }
                                FUN_0358c4f0(param_1,*(long *)(lVar25 + 0xb8) + 0xb00,
                                             local_d8 & 0xffffffff,
                                             *(undefined4 *)((long)param_1 + 0x494),0);
                                *(int *)((long)param_1 + 0x494) =
                                     *(int *)((long)param_1 + 0x494) + 1;
                                uVar24 = (ulong)(uint)fVar55;
                              }
                            }
                            else {
                              *(undefined1 *)((long)param_1 + 0x431) = 1;
                              *(undefined4 *)((long)param_1 + 0x644) = 0;
                              uVar28 = FUN_03586568(param_1,param_1[0x8f],(uint)local_d8 + 1,
                                                    &local_f4,0);
                              if ((uVar28 & 1) == 0) goto LAB_03549378;
                              local_d8 = CONCAT44(local_d8._4_4_,local_f4);
                              if (*(int *)((long)param_1 + 0x644) != 0) goto LAB_03549378;
                            }
LAB_03549564:
                            uVar20 = (uint)local_d8 + 1;
                            local_d8 = CONCAT44(local_d8._4_4_,uVar20);
                            lVar25 = param_1[0x8f];
                            if (lVar25 == 0) goto LAB_0354fbf4;
                            goto LAB_03549220;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0354fbf4;
        }
      }
      (**(code **)(*param_1 + 0x928))(param_1,1,*(undefined8 *)(*param_1 + 0x930));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)((long)param_1 + 0x3ec) = 0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630(param_1,0);
      *(undefined1 *)((long)param_1 + 0x24c) = 1;
      return;
    }
  }
  puVar13 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  uVar18 = FUN_036d3364(param_1,0);
  local_d8 = CONCAT44(uVar18,(uint)local_d8);
  uVar69 = FUN_0276793c((long)&local_d8 + 4,0);
  uVar69 = FUN_025b1328(*(undefined8 *)puVar13,uVar69,0);
  if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar14);
  }
  FUN_036772fc(uVar69,0);
  *(undefined1 *)((long)param_1 + 0x24c) = 1;
  return;
LAB_0354d7c0:
  uVar35 = uVar41 - 1;
  if (*(uint *)(lVar48 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
  lVar29 = (long)(int)uVar35;
  lVar51 = lVar48 + lVar29 * 0x178;
  uVar34 = *(uint *)(lVar51 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar34)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar45 = *(long *)(lVar51 + 0x38);
  lVar47 = (long)(int)uVar34;
  lVar26 = lVar26 + lVar47 * 0x5c;
  uVar22 = *(uint *)(lVar26 + 0x68);
  uVar42 = (uint)*(ushort *)(lVar51 + 0x20);
  uVar40 = *(uint *)(lVar26 + 0x3c);
  iVar8 = *(int *)(lVar26 + 0x20);
  iVar19 = *(int *)(lVar26 + 0x28);
  iVar21 = *(int *)(lVar26 + 0x2c);
  fVar57 = *(float *)(lVar26 + 0x4c);
  uVar43 = *(uint *)(lVar26 + 0x40);
  fVar85 = *(float *)(lVar26 + 0x54);
  fVar55 = *(float *)(lVar26 + 0x58);
  fVar78 = *(float *)(lVar26 + 0x5c);
  fVar81 = *(float *)(lVar26 + 0x60);
  fVar73 = *(float *)(lVar26 + 0x6c);
  fVar59 = *(float *)(lVar26 + 0x70);
  fVar56 = *(float *)(lVar26 + 0x74);
  fVar68 = *(float *)(lVar26 + 0x78);
  if ((int)uVar22 < 9) {
    switch(uVar22) {
    case 1:
      if ((char)param_1[0x1e] == '\0') {
        local_1794 = fVar81 + 0.0;
      }
      else {
        local_1794 = 0.0 - fVar55;
      }
      break;
    case 2:
LAB_0354d968:
      local_1794 = (fVar81 + fVar78 * 0.5) - fVar55 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      local_1794 = (fVar78 + fVar81) - fVar55;
      if ((char)param_1[0x1e] != '\0') {
        local_1794 = fVar78 + fVar81;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    local_17a0 = 0;
  }
  else if (uVar22 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar42 < 0xad) {
      if ((uVar42 != 3) && (uVar42 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar48 + 0x18) <= uVar40)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar9 = *(undefined2 *)(lVar48 + (long)(int)uVar40 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b8cc4(uVar9,0);
      if ((uVar24 & 1) == 0) {
        bVar1 = (int)uVar34 < (int)param_1[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar55 <= fVar78) && (!bVar1 && uVar22 >> 4 == 0)) {
        local_1794 = fVar81;
        if ((char)param_1[0x1e] != '\0') {
          local_1794 = fVar78 + fVar81;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar41 == 1) || (uVar34 != uVar20)) || (uVar35 == *(uint *)((long)param_1 + 0x324))) {
        local_1794 = fVar81;
        if ((char)param_1[0x1e] != '\0') {
          local_1794 = fVar78 + fVar81;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        local_1860 = FUN_026b97f8(uVar42,0);
        local_17a0 = 0;
      }
      else {
        cVar33 = (char)param_1[0x1e];
        fVar81 = -fVar55;
        if (cVar33 != '\0') {
          fVar81 = fVar55;
        }
        if (*(uint *)(lVar48 + 0x18) <= uVar40)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar21 = (int)*(char *)(lVar48 + (long)(int)uVar40 * 0x178 + 0x194) +
                 (-iVar8 - (local_1860 & 1)) + iVar21 + -1;
        if (iVar21 < 1) {
          fVar55 = 1.0;
          iVar21 = 1;
        }
        else {
          fVar55 = *(float *)((long)param_1 + 0x2dc);
        }
        if (uVar42 == 9) {
LAB_0354f76c:
          fVar55 = 1.0 - fVar55;
        }
        else {
          if (uVar42 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_026b97f8(uVar42,0);
            cVar33 = (char)param_1[0x1e];
            if ((uVar24 & 1) != 0) goto LAB_0354f76c;
          }
          iVar21 = (iVar8 - (~local_1860 & 1)) + iVar19;
        }
        fVar55 = ((fVar78 + fVar81) * fVar55) / (float)iVar21;
        if (cVar33 == '\0') {
          local_1794 = local_1794 + fVar55;
          local_17a0 = CONCAT44((float)((ulong)local_17a0 >> 0x20) + 0.0,(float)local_17a0 + 0.0);
        }
        else {
          local_1794 = local_1794 - fVar55;
        }
      }
    }
  }
  else if (uVar22 == 0x20) {
    fVar55 = fVar73 + fVar56;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar22 = (uint)*(undefined8 *)(lVar48 + 0x18);
  if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar48 + lVar29 * 0x178;
  fVar81 = local_17cc + local_1794;
  fVar55 = (float)local_17d8 + (float)local_17a0;
  fVar78 = (float)((ulong)local_17d8 >> 0x20) + (float)((ulong)local_17a0 >> 0x20);
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar19 = *(int *)(lVar48 + lVar29 * 0x178 + 0x2c);
  if (iVar19 != 0) goto LAB_0354e05c;
  fVar54 = fmodf(*(float *)((long)param_1 + 0x314) * (float)(int)uVar34,1.0);
  switch(*(undefined4 *)((long)param_1 + 0x30c)) {
  case 0:
    lVar51 = lVar48 + lVar29 * 0x178;
    *(undefined4 *)(lVar51 + 0x84) = 0;
    *(undefined4 *)(lVar51 + 0xac) = 0;
    *(undefined4 *)(lVar51 + 0xd4) = 0x3f800000;
    fVar54 = 1.0;
    break;
  case 1:
    fVar68 = *(float *)(lVar48 + lVar29 * 0x178 + 0x70);
    if (*(int *)((long)param_1 + 0x274) == 0x208) {
      lVar51 = lVar48 + lVar29 * 0x178;
      fVar56 = (local_1794 + fVar68) - *(float *)((long)param_1 + 0x4dc);
      fVar68 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc);
      goto LAB_0354db24;
    }
    lVar51 = lVar48 + lVar29 * 0x178;
    fVar56 = fVar56 - fVar73;
    *(float *)(lVar51 + 0x84) = fVar54 + (fVar68 - fVar73) / fVar56;
    *(float *)(lVar51 + 0xac) = fVar54 + (*(float *)(lVar51 + 0x98) - fVar73) / fVar56;
    *(float *)(lVar51 + 0xd4) = fVar54 + (*(float *)(lVar51 + 0xc0) - fVar73) / fVar56;
    fVar54 = fVar54 + (*(float *)(lVar51 + 0xe8) - fVar73) / fVar56;
    break;
  case 2:
    lVar51 = lVar48 + lVar29 * 0x178;
    fVar68 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc);
    fVar56 = (local_1794 + *(float *)(lVar51 + 0x70)) - *(float *)((long)param_1 + 0x4dc);
LAB_0354db24:
    *(float *)(lVar51 + 0x84) = fVar54 + fVar56 / fVar68;
    *(float *)(lVar51 + 0xac) =
         fVar54 + ((local_1794 + *(float *)(lVar51 + 0x98)) - *(float *)((long)param_1 + 0x4dc)) /
                  (*(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc));
    *(float *)(lVar51 + 0xd4) =
         fVar54 + ((local_1794 + *(float *)(lVar51 + 0xc0)) - *(float *)((long)param_1 + 0x4dc)) /
                  (*(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc));
    fVar54 = fVar54 + ((local_1794 + *(float *)(lVar51 + 0xe8)) - *(float *)((long)param_1 + 0x4dc))
                      / (*(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc));
    break;
  case 3:
    switch((int)param_1[0x62]) {
    case 0:
      lVar51 = lVar48 + lVar29 * 0x178;
      *(undefined4 *)(lVar51 + 0x88) = 0;
      *(undefined4 *)(lVar51 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar51 + 0xd8) = 0;
      *(undefined4 *)(lVar51 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar51 = lVar48 + lVar29 * 0x178;
      fVar68 = fVar68 - fVar59;
      fVar56 = fVar54 + (*(float *)(lVar51 + 0x74) - fVar59) / fVar68;
      fVar68 = fVar54 + (*(float *)(lVar51 + 0x9c) - fVar59) / fVar68;
      *(float *)(lVar51 + 0x88) = fVar56;
      *(float *)(lVar51 + 0xb0) = fVar68;
      *(float *)(lVar51 + 0xd8) = fVar56;
      *(float *)(lVar51 + 0x100) = fVar68;
      break;
    case 2:
      lVar51 = lVar48 + lVar29 * 0x178;
      fVar56 = fVar54 + (*(float *)(lVar51 + 0x74) - *(float *)(param_1 + 0x9c)) /
                        (*(float *)(param_1 + 0x9d) - *(float *)(param_1 + 0x9c));
      *(float *)(lVar51 + 0x88) = fVar56;
      fVar68 = *(float *)(param_1 + 0x9c);
      fVar73 = *(float *)(param_1 + 0x9d);
      *(float *)(lVar51 + 0xd8) = fVar56;
      fVar56 = fVar54 + (*(float *)(lVar51 + 0x9c) - fVar68) / (fVar73 - fVar68);
      *(float *)(lVar51 + 0xb0) = fVar56;
      *(float *)(lVar51 + 0x100) = fVar56;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar22 = (uint)*(undefined8 *)(lVar48 + 0x18);
    }
    if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar48 + lVar29 * 0x178;
    fVar56 = *(float *)(lVar51 + 0x15c);
    fVar68 = (1.0 - (*(float *)(lVar51 + 0x88) + *(float *)(lVar51 + 0xb0)) * fVar56) * 0.5;
    fVar73 = fVar54 + *(float *)(lVar51 + 0x88) * fVar56 + fVar68;
    fVar54 = fVar54 + fVar68 + *(float *)(lVar51 + 0xb0) * fVar56;
    *(float *)(lVar51 + 0x84) = fVar73;
    *(float *)(lVar51 + 0xac) = fVar73;
    *(float *)(lVar51 + 0xd4) = fVar54;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar48 + lVar29 * 0x178 + 0xfc) = fVar54;
switchD_0354da88_default:
  switch((int)param_1[0x62]) {
  case 0:
    if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar48 + lVar29 * 0x178;
    *(undefined4 *)(lVar51 + 0x88) = 0;
    *(undefined4 *)(lVar51 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar51 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar51 + 0x100) = 0;
    break;
  case 1:
    if (uVar35 < uVar22) {
      lVar51 = lVar48 + lVar29 * 0x178;
      fVar57 = fVar57 - fVar85;
      fVar54 = (*(float *)(lVar51 + 0x74) - fVar85) / fVar57;
      fVar57 = (*(float *)(lVar51 + 0x9c) - fVar85) / fVar57;
      *(float *)(lVar51 + 0x88) = fVar54;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar48 + lVar29 * 0x178;
    fVar54 = (*(float *)(lVar51 + 0x74) - *(float *)(param_1 + 0x9c)) /
             (*(float *)(param_1 + 0x9d) - *(float *)(param_1 + 0x9c));
    *(float *)(lVar51 + 0x88) = fVar54;
    fVar57 = (*(float *)(lVar51 + 0x9c) - *(float *)(param_1 + 0x9c)) /
             (*(float *)(param_1 + 0x9d) - *(float *)(param_1 + 0x9c));
LAB_0354de84:
    *(float *)(lVar51 + 0xb0) = fVar57;
    *(float *)(lVar51 + 0xd8) = fVar57;
    *(float *)(lVar51 + 0x100) = fVar54;
    break;
  case 3:
    if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar48 + lVar29 * 0x178;
    fVar57 = *(float *)(lVar51 + 0x15c);
    fVar56 = (1.0 - (*(float *)(lVar51 + 0x84) + *(float *)(lVar51 + 0xd4)) / fVar57) * 0.5;
    fVar54 = *(float *)(lVar51 + 0x84) / fVar57 + fVar56;
    fVar56 = fVar56 + *(float *)(lVar51 + 0xd4) / fVar57;
    *(float *)(lVar51 + 0x88) = fVar54;
    *(float *)(lVar51 + 0xb0) = fVar56;
    *(float *)(lVar51 + 0x100) = fVar54;
    *(float *)(lVar51 + 0xd8) = fVar56;
  }
  if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar51 = lVar48 + lVar29 * 0x178;
  fVar54 = ABS(fVar84) * *(float *)(lVar51 + 0x160) * (1.0 - *(float *)((long)param_1 + 0x2d4));
  if ((*(char *)(lVar51 + 0x5c) == '\0') && ((*(byte *)(lVar48 + lVar29 * 0x178 + 400) & 1) != 0)) {
    fVar54 = -fVar54;
  }
  lVar51 = lVar48 + lVar29 * 0x178;
  fVar57 = *(float *)(lVar51 + 0x88);
  fVar68 = *(float *)(lVar51 + 0x84);
  fVar56 = -2.1474836e+09;
  if (fVar68 != INFINITY) {
    fVar56 = (float)(int)fVar68;
  }
  fVar73 = *(float *)(lVar51 + 0xd4);
  fVar59 = *(float *)(lVar51 + 0xd8);
  fVar85 = -2.1474836e+09;
  if (fVar57 != INFINITY) {
    fVar85 = (float)(int)fVar57;
  }
  uVar67 = FUN_03591d3c(fVar68 - fVar56,fVar57 - fVar85,param_1,0);
  *(undefined4 *)(lVar51 + 0x84) = uVar67;
  if (*(uint *)(lVar48 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar59 = fVar59 - fVar85;
  *(float *)(lVar51 + 0x88) = fVar54;
  uVar67 = FUN_03591d3c(fVar68 - fVar56,fVar59,param_1,0);
  *(undefined4 *)(lVar48 + lVar29 * 0x178 + 0xac) = uVar67;
  if (*(uint *)(lVar48 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar73 = fVar73 - fVar56;
  *(float *)(lVar48 + lVar29 * 0x178 + 0xb0) = fVar54;
  fVar56 = (float)FUN_03591d3c(fVar73,fVar59,param_1,0);
  *(float *)(lVar51 + 0xd4) = fVar56;
  if (*(uint *)(lVar48 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar51 + 0xd8) = fVar54;
  uVar67 = FUN_03591d3c(fVar73,fVar57 - fVar85,param_1,0);
  *(undefined4 *)(lVar48 + lVar29 * 0x178 + 0xfc) = uVar67;
  uVar22 = (uint)*(undefined8 *)(lVar48 + 0x18);
  if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar48 + lVar29 * 0x178 + 0x100) = fVar54;
LAB_0354e05c:
  if (((int)uVar35 < (int)param_1[0x65]) && (iVar17 < *(int *)((long)param_1 + 0x32c))) {
    if (((int)uVar34 < (int)param_1[0x66]) && ((int)param_1[0x5c] != 5)) {
      if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar26 = lVar48 + lVar29 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar81 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar78 + *(float *)(lVar26 + 0x78);
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar81 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar78 + *(float *)(lVar26 + 0xa0);
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar81 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar78 + *(float *)(lVar26 + 200);
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar81 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar78 + *(float *)(lVar26 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar34 < (int)param_1[0x66]) && ((int)param_1[0x5c] == 5)) {
      if (uVar35 < uVar22) {
        if (*(uint *)(lVar48 + lVar29 * 0x178 + 0x68) == uVar7) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar22 = *(uint *)(lVar48 + 0x18);
  }
  puVar13 = PTR_DAT_03cbded8;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar51 = lVar48 + lVar29 * 0x178;
  *(undefined8 *)(lVar51 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar51 + 0x78) = uVar67;
  if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
  lVar51 = lVar48 + lVar29 * 0x178;
  *(undefined8 *)(lVar51 + 0x98) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
  *(undefined4 *)(lVar51 + 0xa0) = uVar67;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
  *(undefined8 *)(lVar51 + 0xc0) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
  *(undefined4 *)(lVar51 + 200) = uVar67;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
  *(undefined8 *)(lVar51 + 0xe8) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
  *(undefined4 *)(lVar51 + 0xf0) = uVar67;
  *(undefined1 *)(lVar26 + 0x194) = 0;
LAB_0354e184:
  if (iVar19 == 0) {
    pcVar39 = *(code **)(*param_1 + 0x8a8);
    uVar69 = *(undefined8 *)(*param_1 + 0x8b0);
LAB_0354e1b4:
    (*pcVar39)(param_1,uVar35,0,uVar69);
  }
  else if (iVar19 == 1) {
    pcVar39 = *(code **)(*param_1 + 0x8c8);
    uVar69 = *(undefined8 *)(*param_1 + 0x8d0);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  uVar69 = *(undefined8 *)(lVar26 + 0x11c);
  *(undefined8 *)(lVar26 + 0x11c) =
       CONCAT44(fVar55 + (float)((ulong)uVar69 >> 0x20),fVar81 + (float)uVar69);
  *(float *)(lVar26 + 0x124) = fVar78 + *(float *)(lVar26 + 0x124);
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar81 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar78 + *(float *)(lVar26 + 0x118);
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar81 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar78 + *(float *)(lVar26 + 0x130);
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar81 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar78 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *plVar6;
  if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x38), lVar51 == 0)) goto LAB_0354fbf4;
  uVar22 = *(uint *)(lVar51 + 0x18);
  if (uVar22 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar44 = lVar51 + lVar29 * 0x178;
  *(float *)(lVar44 + 0x150) = fVar55 + *(float *)(lVar44 + 0x150);
  *(ulong *)(lVar44 + 0x140) =
       CONCAT44(fVar81 + (float)((ulong)*(undefined8 *)(lVar44 + 0x140) >> 0x20),
                fVar81 + (float)*(undefined8 *)(lVar44 + 0x140));
  *(ulong *)(lVar44 + 0x148) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar44 + 0x148) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar44 + 0x148));
  if (uVar34 == uVar20) {
    uVar20 = *puVar4 - 1;
    if (uVar35 == uVar20) goto LAB_0354e3ec;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar44 = (long)(int)uVar20;
    lVar46 = lVar26 + lVar44 * 0x5c;
    fVar56 = fVar55 + *(float *)(lVar46 + 0x54);
    *(ulong *)(lVar46 + 0x4c) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar46 + 0x4c));
    *(float *)(lVar46 + 0x54) = fVar56;
    *(float *)(lVar46 + 0x58) = fVar81 + *(float *)(lVar46 + 0x58);
    if (uVar22 <= *(uint *)(lVar46 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar67 = *(undefined4 *)(lVar51 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar44 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar56;
    *(undefined4 *)(lVar26 + 0x6c) = uVar67;
    lVar26 = *plVar6;
    if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x50), lVar51 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar51 + 0x18) <= uVar20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_0354fbf4;
    uVar20 = *(uint *)(lVar51 + lVar44 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar51 + lVar44 * 0x5c;
    *(undefined4 *)(lVar51 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar20 * 0x178 + 0x128);
    *(undefined4 *)(lVar51 + 0x78) = *(undefined4 *)(lVar51 + 0x4c);
    uVar20 = *puVar4 - 1;
LAB_0354e3ec:
    if (uVar35 == uVar20) {
      lVar26 = *plVar6;
      if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x50), lVar51 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar34)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar44 = lVar51 + lVar47 * 0x5c;
      fVar56 = fVar55 + *(float *)(lVar44 + 0x54);
      *(ulong *)(lVar44 + 0x4c) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar44 + 0x4c) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar44 + 0x4c));
      *(float *)(lVar44 + 0x54) = fVar56;
      *(float *)(lVar44 + 0x58) = fVar81 + *(float *)(lVar44 + 0x58);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar44 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar67 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar44 + 0x34) * 0x178 + 0x11c);
      lVar51 = lVar51 + lVar47 * 0x5c;
      *(float *)(lVar51 + 0x70) = fVar56;
      *(undefined4 *)(lVar51 + 0x6c) = uVar67;
      lVar26 = *plVar6;
      if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x50), lVar51 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar34)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar20 = *(uint *)(lVar51 + lVar47 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar51 = lVar51 + lVar47 * 0x5c;
      *(undefined4 *)(lVar51 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar20 * 0x178 + 0x128);
      *(undefined4 *)(lVar51 + 0x78) = *(undefined4 *)(lVar51 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar24 = FUN_026b82c4(uVar42,0);
  if (((((uVar24 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
    if (bVar12) {
      if (((uVar41 != 1) && ((int)uVar35 < (int)(*(uint *)(lVar48 + 0x18) - 1))) &&
         (((int)uVar35 < (int)*puVar4 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
        if (*(uint *)(lVar48 + 0x18) <= uVar41 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar9 = *(undefined2 *)(lVar48 + lVar25 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b82c4(uVar9,0);
        if ((uVar24 & 1) != 0) {
          if (*(uint *)(lVar48 + 0x18) <= uVar41)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar9 = *(undefined2 *)(lVar48 + lVar25 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b82c4(uVar9,0);
          if ((uVar24 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar41 != 1) {
LAB_0354f144:
        bVar12 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b81f8(uVar42,0);
      if ((uVar24 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b63d8(uVar42,0);
        if (((uVar42 != 0x200b) && ((uVar24 & 1) == 0)) && (*puVar4 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar35 == *puVar4 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b82c4(uVar42,0);
      iVar19 = (int)local_1770._4_4_;
      if ((uVar24 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar19 = uVar41 - 2;
    }
    lVar26 = *plVar6;
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar51 = *(long *)(lVar26 + 0x40);
    if (lVar51 == 0) goto LAB_0354fbf4;
    uVar20 = *(uint *)(lVar26 + 0x24);
    iVar21 = *(int *)(lVar51 + 0x18);
    if (iVar21 < (int)(uVar20 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar26 + 0x40),iVar21 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar26 = *plVar6;
      if (lVar26 == 0) goto LAB_0354fbf4;
    }
    lVar26 = *(long *)(lVar26 + 0x40);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = lVar26 + (long)(int)uVar20 * 0x18;
    *(long *)(lVar26 + 0x20) = (long)param_1;
    *(float *)(lVar26 + 0x28) = local_1724;
    *(int *)(lVar26 + 0x2c) = iVar19;
    *(int *)(lVar26 + 0x30) = (iVar19 - (int)local_1724) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(lVar26 + 0x20),param_1);
    lVar26 = param_1[0x6d];
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar51 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar51 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar51 + 0x18) <= uVar34)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar51 + lVar47 * 0x5c;
    bVar12 = false;
    iVar17 = iVar17 + 1;
    *(int *)(lVar51 + 0x30) = *(int *)(lVar51 + 0x30) + 1;
  }
  else {
    if (!bVar12) {
      local_1724 = (float)uVar35;
    }
    if (uVar35 == *puVar4 - 1) {
      lVar26 = *plVar6;
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar51 = *(long *)(lVar26 + 0x40);
      if (lVar51 == 0) goto LAB_0354fbf4;
      uVar20 = *(uint *)(lVar26 + 0x24);
      iVar19 = *(int *)(lVar51 + 0x18);
      if (iVar19 < (int)(uVar20 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar19 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar26 = *plVar6;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + (long)(int)uVar20 * 0x18;
      *(long *)(lVar26 + 0x20) = (long)param_1;
      *(float *)(lVar26 + 0x28) = local_1724;
      *(uint *)(lVar26 + 0x2c) = uVar35;
      *(uint *)(lVar26 + 0x30) = uVar41 - (int)local_1724;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar26 + 0x20),param_1);
      lVar26 = param_1[0x6d];
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar51 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar51 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar34)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar51 = lVar51 + lVar47 * 0x5c;
      iVar17 = iVar17 + 1;
      *(int *)(lVar51 + 0x30) = *(int *)(lVar51 + 0x30) + 1;
    }
LAB_0354e610:
    bVar12 = true;
  }
LAB_0354e618:
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar20 = *(uint *)(lVar26 + 0x18);
  if (uVar20 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar29 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar16) {
LAB_0354e660:
      if (uVar20 <= uVar41 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar51 = *param_1;
      uVar67 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      uVar72 = *(undefined4 *)(lVar26 + lVar25 + -0x2f8);
LAB_0354ebc0:
      pcVar39 = *(code **)(lVar51 + 0x8d8);
      uVar69 = *(undefined8 *)(lVar51 + 0x8e0);
LAB_0354ebc8:
      (*pcVar39)(fVar52,local_1828,local_1824,uVar67,local_178c,0,local_180c,uVar72,param_1,
                 (long)&local_c0 + 4,uVar18,uVar69);
      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar13;
      }
LAB_0354ec1c:
      fVar58 = 0.0;
      bVar16 = false;
      local_178c = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
      local_1790 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar16 = false;
    }
  }
  else {
    lVar26 = lVar26 + lVar29 * 0x178;
    iVar19 = *(int *)(lVar26 + 0x68);
    *(undefined4 *)(lVar26 + 0x16c) = local_c0._4_4_;
    if ((((int)param_1[0x65] < (int)uVar35) || ((int)param_1[0x66] < (int)uVar34)) ||
       (((int)param_1[0x5c] == 5 && (iVar19 + 1 != (int)param_1[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar24 = FUN_026b63d8(uVar42,0);
    if ((uVar42 != 0x200b) && ((uVar24 & 1) == 0)) {
      lVar26 = *plVar6;
      if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x38), lVar51 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar35)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar56 = *(float *)(lVar51 + lVar29 * 0x178 + 0x160);
      if (fVar58 <= fVar56) {
        fVar58 = fVar56;
      }
      if (local_1790 <= ABS(fVar54)) {
        local_1790 = ABS(fVar54);
      }
      if (iVar19 != local_1834) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *plVar6;
          if (lVar26 == 0) goto LAB_0354fbf4;
          lVar51 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar51 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        local_178c = *(float *)(lVar51 + 0x15a8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar35)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (param_1[0x1f] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)(lVar26 + lVar29 * 0x178 + 0x14c);
      fVar56 = (float)FUN_03776a10(param_1[0x1f] + 0x50,0);
      fVar57 = fVar57 + fVar58 * fVar56;
      local_1834 = iVar19;
      if (fVar57 <= local_178c) {
        local_178c = fVar57;
      }
    }
    if (!bVar16) {
      bVar16 = false;
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar43 < (int)uVar35)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar35 == uVar43) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b97f8(uVar42,0);
        if ((uVar24 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar35)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar29 * 0x178;
      local_180c = *(float *)(lVar26 + 0x160);
      fVar52 = *(float *)(lVar26 + 0x11c);
      bVar16 = fVar58 != 0.0;
      fVar56 = local_180c;
      if (bVar16) {
        fVar56 = fVar58;
      }
      fVar58 = fVar56;
      uVar18 = *(undefined4 *)(lVar26 + 0x168);
      local_1824 = 0.0;
      fVar56 = fVar54;
      if (bVar16) {
        fVar56 = local_1790;
      }
      local_1828 = local_178c;
      local_1790 = fVar56;
    }
    if (*puVar4 == 1) {
      if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
        if (uVar35 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar29 * 0x178;
          lVar51 = *param_1;
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          uVar72 = *(undefined4 *)(lVar26 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar35 == uVar40) || ((int)uVar43 <= (int)uVar35)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b63d8(uVar42,0);
      if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
        lVar51 = lVar29;
        uVar20 = uVar35;
        if (uVar42 == 0x200b || (uVar24 & 1) != 0) {
          lVar51 = (long)(int)uVar43;
          uVar20 = uVar43;
        }
        if (uVar20 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar51 * 0x178;
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          uVar72 = *(undefined4 *)(lVar26 + 0x160);
          pcVar39 = *(code **)(*param_1 + 0x8d8);
          uVar69 = *(undefined8 *)(*param_1 + 0x8e0);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
        uVar20 = *(uint *)(lVar26 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar35 < (int)(*puVar4 - 1)) {
      if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar41)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar24 = FUN_03567ad8(uVar18,*(undefined4 *)(lVar26 + lVar25),0);
      if ((uVar24 & 1) == 0) {
        if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
          if (uVar35 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar29 * 0x178;
            (**(code **)(*param_1 + 0x8d8))
                      (fVar52,local_1828,local_1824,*(undefined4 *)(lVar26 + 0x128),local_178c,0,
                       local_180c,*(undefined4 *)(lVar26 + 0x160),param_1,(long)&local_c0 + 4,uVar18
                       ,*(undefined8 *)(*param_1 + 0x8e0));
            puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar26 = *(long *)puVar13;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar16 = true;
  }
LAB_0354ec38:
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar35)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar45 == 0) goto LAB_0354fbf4;
  uVar20 = *(uint *)(lVar26 + lVar29 * 0x178 + 400);
  fVar56 = (float)FUN_03776a30(lVar45 + 0x50,0);
  if ((uVar20 >> 6 & 1) == 0) {
    if (bVar10) {
      if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar41 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar67 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      fVar55 = *(float *)(lVar26 + lVar25 + -0x30c);
      pcVar39 = *(code **)(*param_1 + 0x8d8);
      uVar69 = *(undefined8 *)(*param_1 + 0x8e0);
LAB_0354f21c:
      (*pcVar39)(fVar71,local_17f4,local_17f8,uVar67,fVar79 * fVar56 + fVar55,0,fVar79,fVar79,
                 param_1,(long)&local_c0 + 4,uVar23,uVar69);
    }
LAB_0354f250:
    bVar10 = false;
  }
  else {
    lVar26 = *plVar6;
    if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x38), lVar51 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar51 + 0x18) <= uVar35)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(undefined4 *)(lVar51 + lVar29 * 0x178 + 0x174) = local_c0._4_4_;
    if ((((int)param_1[0x65] < (int)uVar35) || ((int)param_1[0x66] < (int)uVar34)) ||
       (((int)param_1[0x5c] == 5 &&
        (*(int *)(lVar51 + lVar29 * 0x178 + 0x68) + 1 != (int)param_1[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar43 < (int)uVar35)) ||
       (bVar10 || !bVar1)) {
LAB_0354ed84:
      if (!bVar10) goto LAB_0354f250;
    }
    else {
      if (uVar35 == uVar43) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b97f8(uVar42,0);
        if ((uVar24 & 1) != 0) goto LAB_0354ed84;
        lVar26 = *plVar6;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar35)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar29 * 0x178;
      local_1844 = *(float *)(lVar26 + 0x60);
      fVar53 = *(float *)(lVar26 + 0x14c);
      fVar71 = *(float *)(lVar26 + 0x11c);
      fVar79 = *(float *)(lVar26 + 0x160);
      uVar23 = *(undefined4 *)(lVar26 + 0x170);
      local_17f4 = fVar56 * fVar79 + fVar53;
      local_17f8 = 0.0;
    }
    uVar20 = *puVar4;
    if (uVar20 == 1) {
      if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
        uVar20 = *(uint *)(lVar26 + 0x18);
LAB_0354ef0c:
        if (uVar35 < uVar20) {
          lVar26 = lVar26 + lVar29 * 0x178;
          lVar51 = *param_1;
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          fVar55 = *(float *)(lVar26 + 0x14c);
LAB_0354ef24:
          pcVar39 = *(code **)(lVar51 + 0x8d8);
          uVar69 = *(undefined8 *)(lVar51 + 0x8e0);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar35 == uVar40) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b63d8(uVar42,0);
      if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
        uVar20 = *(uint *)(lVar26 + 0x18);
        if (uVar42 == 0x200b || (uVar24 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar51 = lVar29;
        if (uVar35 < uVar20) {
LAB_0354f1f8:
          lVar26 = lVar26 + lVar51 * 0x178;
          fVar55 = *(float *)(lVar26 + 0x14c);
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          pcVar39 = *(code **)(*param_1 + 0x8d8);
          uVar69 = *(undefined8 *)(*param_1 + 0x8e0);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar35 < (int)uVar20) {
      lVar26 = *plVar6;
      if ((lVar26 != 0) && (lVar51 = *(long *)(lVar26 + 0x38), lVar51 != 0)) {
        if (uVar41 < *(uint *)(lVar51 + 0x18)) {
          if (*(float *)(lVar51 + lVar25 + -0x108) == local_1844) {
            fVar57 = *(float *)(lVar51 + lVar25 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_03567bac(fVar55 + fVar57,fVar53,0);
            if ((uVar24 & 1) != 0) {
              uVar20 = *puVar4;
              goto LAB_0354f010;
            }
            lVar26 = *plVar6;
            if (lVar26 == 0) goto LAB_0354fbf4;
          }
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 != 0) {
            uVar20 = *(uint *)(lVar26 + 0x18);
            if ((int)uVar35 <= (int)uVar43) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar51 = (long)(int)uVar43;
            if (uVar43 < uVar20) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar35 < (int)uVar20) {
      iVar19 = FUN_036d3364(lVar45,0);
      if (*(uint *)(lVar48 + 0x18) <= uVar41)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar48 + lVar25 + -0x130);
      if (lVar26 == 0) goto LAB_0354fbf4;
      iVar21 = FUN_036d3364(lVar26,0);
      if (iVar19 != iVar21) {
        if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
          uVar20 = *(uint *)(lVar26 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
        if (uVar41 - 2 < *(uint *)(lVar26 + 0x18)) {
          lVar51 = *param_1;
          uVar67 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
          fVar55 = *(float *)(lVar26 + lVar25 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar10 = true;
  }
  if ((*plVar6 == 0) || (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar20 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar20 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar15) {
      (**(code **)(*param_1 + 0x8e8))
                (local_17b0,local_17ac,local_17d0,local_17c0,local_17bc,local_17d0,param_1,
                 (long)&local_c0 + 4,local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x8f0));
    }
LAB_0354f604:
    bVar15 = false;
  }
  else {
    if ((((int)param_1[0x65] < (int)uVar35) || ((int)param_1[0x66] < (int)uVar34)) ||
       (((int)param_1[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar29 * 0x178 + 0x68) + 1 != (int)param_1[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar15) {
LAB_0354f400:
      if (uVar20 <= uVar35) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar29 * 0x178;
      fVar56 = *(float *)(lVar26 + 0x128);
      fVar85 = *(float *)(lVar26 + 0x188);
      uVar70 = *(ulong *)(lVar26 + 0x17c);
      fVar78 = *(float *)(lVar26 + 0x184);
      uVar69 = *(undefined8 *)(lVar26 + 0x184);
      fVar73 = *(float *)(lVar26 + 0x18c);
      fVar55 = *(float *)(lVar26 + 0x11c);
      fVar57 = *(float *)(lVar26 + 0x148);
      fVar68 = *(float *)(lVar26 + 0x150);
      uStack_16e8 = uStack_c8;
      local_16f0 = local_d0;
      local_16e0 = (float)local_c0;
      local_1708 = uVar70;
      local_1700 = fVar78;
      local_16fc = fVar85;
      local_16f8 = fVar73;
      uVar24 = FUN_03568490(&local_16f0,&local_1708,0);
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar24 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar56 = fVar56 + (float)uStack_c8;
        fVar55 = fVar55 - local_d0._4_4_;
        if (fVar55 <= local_17b0) {
          local_17b0 = fVar55;
        }
        if (fVar68 - (float)local_c0 <= local_17ac) {
          local_17ac = fVar68 - (float)local_c0;
        }
        if (local_17c0 <= fVar56) {
          local_17c0 = fVar56;
        }
        if (local_17bc <= fVar57 + uStack_c8._4_4_) {
          local_17bc = fVar57 + uStack_c8._4_4_;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar55 = (fVar55 + (local_17c0 - (float)uStack_c8)) * 0.5;
        if (fVar68 <= local_17ac) {
          local_17ac = fVar68;
        }
        if (local_17bc <= fVar57) {
          local_17bc = fVar57;
        }
        (**(code **)(*param_1 + 0x8e8))
                  (local_17b0,local_17ac,local_17d0,fVar55,local_17bc,local_17d0,param_1,
                   (long)&local_c0 + 4,local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x8f0));
        local_17ac = fVar68 - fVar73;
        local_17c0 = fVar56 + fVar78;
        local_c0 = CONCAT44(local_c0._4_4_,fVar73);
        local_17d0 = 0.0;
        local_17bc = fVar57 + fVar85;
        local_17b0 = fVar55;
        local_d0 = uVar70;
        uStack_c8 = uVar69;
      }
      if (((*puVar4 == 1) || (uVar35 == uVar40)) || (((int)uVar43 <= (int)uVar35 || (!bVar1)))) {
        (**(code **)(*param_1 + 0x8e8))
                  (local_17b0,local_17ac,local_17d0,local_17c0,local_17bc,local_17d0,param_1,
                   (long)&local_c0 + 4,local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x8f0));
        goto LAB_0354f604;
      }
      bVar15 = true;
    }
    else {
      if ((((uVar42 != 0xd) && ((uVar42 & 0xfffe) != 10)) && ((int)uVar35 <= (int)uVar43)) &&
         (bVar1)) {
        if (uVar35 == uVar43) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b97f8(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_0354f374;
        }
        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar51 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar51 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar51 = *(long *)puVar13;
        }
        if ((*plVar6 != 0) && (lVar26 = *(long *)(*plVar6 + 0x38), lVar26 != 0)) {
          uVar20 = (uint)*(undefined8 *)(lVar26 + 0x18);
          if (uVar35 < uVar20) {
            lVar51 = *(long *)(lVar51 + 0xb8);
            lVar45 = lVar26 + lVar29 * 0x178;
            uStack_c8 = *(undefined8 *)(lVar45 + 0x184);
            local_d0 = *(ulong *)(lVar45 + 0x17c);
            local_17b0 = *(float *)(lVar51 + 0x1598);
            local_17ac = *(float *)(lVar51 + 0x159c);
            local_17c0 = *(float *)(lVar51 + 0x15a0);
            local_17bc = *(float *)(lVar51 + 0x15a4);
            local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar45 + 0x18c));
            local_17d0 = 0.0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar15 = false;
    }
  }
  uVar35 = *puVar4;
  local_1770._4_4_ = (float)((int)local_1770._4_4_ + 1);
  lVar25 = lVar25 + 0x178;
  bVar1 = (int)uVar35 <= (int)uVar41;
  uVar20 = uVar34;
  uVar41 = uVar41 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar48 = *plVar6;
  if (lVar48 != 0) {
    iVar19 = uVar34 + 1;
    plVar50 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar48 + 0x18) = uVar35;
    lVar25 = param_1[0xd4];
    *(int *)(lVar48 + 0x2c) = iVar19;
    if ((int)uVar35 < 1 || iVar17 == 0) {
      iVar17 = 1;
    }
    *(int *)(lVar48 + 0x1c) = (int)lVar25;
    *(int *)(lVar48 + 0x24) = iVar17;
    *(int *)(lVar48 + 0x30) = (int)param_1[0x96] + 1;
    if (((int)param_1[99] != 0xff) ||
       (uVar24 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
       (uVar24 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630(param_1,0);
      return;
    }
    lVar48 = param_1[0xdb];
    if (lVar48 != 0) {
      (**(code **)(lVar48 + 0x18))
                (*(undefined8 *)(lVar48 + 0x40),*plVar6,*(undefined8 *)(lVar48 + 0x28));
    }
    if (*(int *)((long)param_1 + 0x31c) != 0) {
      if ((*plVar6 == 0) || (lVar48 = *(long *)(*plVar6 + 0x60), lVar48 == 0)) goto LAB_0354fbf4;
      if (*(int *)(*plVar50 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar48 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar48 + 0x20,1,0);
    }
    if (param_1[0x74] != 0) {
      FUN_036aa790(param_1[0x74],0);
      if ((param_1[0x6d] != 0) && (lVar48 = *(long *)(param_1[0x6d] + 0x60), lVar48 != 0)) {
        if (*(int *)(lVar48 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (param_1[0x74] != 0) {
          FUN_036a460c(param_1[0x74],*(undefined8 *)(lVar48 + 0x30),0);
          if ((param_1[0x6d] != 0) && (lVar48 = *(long *)(param_1[0x6d] + 0x60), lVar48 != 0)) {
            if (*(int *)(lVar48 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (param_1[0x74] != 0) {
              FUN_036a4810(param_1[0x74],*(undefined8 *)(lVar48 + 0x48),0);
              if ((param_1[0x6d] != 0) && (lVar48 = *(long *)(param_1[0x6d] + 0x60), lVar48 != 0)) {
                if (*(int *)(lVar48 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (param_1[0x74] != 0) {
                  FUN_036a48bc(param_1[0x74],*(undefined8 *)(lVar48 + 0x50),0);
                  if ((param_1[0x6d] != 0) &&
                     (lVar48 = *(long *)(param_1[0x6d] + 0x60), lVar48 != 0)) {
                    if (*(int *)(lVar48 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (param_1[0x74] != 0) {
                      FUN_036a4e24(param_1[0x74],*(undefined8 *)(lVar48 + 0x58),0);
                      if (param_1[0x74] != 0) {
                        FUN_036aa280(param_1[0x74],0);
                        lVar48 = *plVar6;
                        if (lVar48 != 0) {
                          lVar26 = 0;
                          lVar25 = 0;
                          do {
                            uVar24 = lVar25 + 1;
                            if ((long)*(int *)(lVar48 + 0x34) <= (long)uVar24) goto LAB_0354d0cc;
                            lVar48 = *(long *)(lVar48 + 0x60);
                            if (lVar48 == 0) break;
                            if (*(int *)(*plVar50 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar48 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar48 + lVar26 + 0x70,0);
                            lVar48 = param_1[0xe1];
                            if (lVar48 == 0) break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar69 = *(undefined8 *)(lVar48 + lVar25 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar70 = FUN_036d35a8(uVar69,0,0);
                            if ((uVar70 & 1) == 0) {
                              if (*(int *)((long)param_1 + 0x31c) != 0) {
                                if ((*plVar6 == 0) ||
                                   (lVar48 = *(long *)(*plVar6 + 0x60), lVar48 == 0)) break;
                                if (*(int *)(*plVar50 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar48 + 0x18) <= uVar24)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar48 + lVar26 + 0x70,1,0);
                              }
                              lVar48 = param_1[0xe1];
                              if (lVar48 == 0) break;
                              if (*(uint *)(lVar48 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                              if (lVar48 == 0) break;
                              lVar48 = FUN_0359d5ac(lVar48,0);
                              if ((*plVar6 == 0) ||
                                 (lVar51 = *(long *)(*plVar6 + 0x60), lVar51 == 0)) break;
                              if (*(uint *)(lVar51 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar48 == 0) break;
                              FUN_036a460c(lVar48,*(undefined8 *)(lVar51 + lVar26 + 0x80),0);
                              lVar48 = param_1[0xe1];
                              if (lVar48 == 0) break;
                              if (*(uint *)(lVar48 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                              if (lVar48 == 0) break;
                              lVar48 = FUN_0359d5ac(lVar48,0);
                              if ((*plVar6 == 0) ||
                                 (lVar51 = *(long *)(*plVar6 + 0x60), lVar51 == 0)) break;
                              if (*(uint *)(lVar51 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar48 == 0) break;
                              FUN_036a4810(lVar48,*(undefined8 *)(lVar51 + lVar26 + 0x98),0);
                              lVar48 = param_1[0xe1];
                              if (lVar48 == 0) break;
                              if (*(uint *)(lVar48 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                              if (lVar48 == 0) break;
                              lVar48 = FUN_0359d5ac(lVar48,0);
                              if ((*plVar6 == 0) ||
                                 (lVar51 = *(long *)(*plVar6 + 0x60), lVar51 == 0)) break;
                              if (*(uint *)(lVar51 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar48 == 0) break;
                              FUN_036a48bc(lVar48,*(undefined8 *)(lVar51 + lVar26 + 0xa0),0);
                              lVar48 = param_1[0xe1];
                              if (lVar48 == 0) break;
                              if (*(uint *)(lVar48 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                              if (lVar48 == 0) break;
                              lVar48 = FUN_0359d5ac(lVar48,0);
                              if ((*plVar6 == 0) ||
                                 (lVar51 = *(long *)(*plVar6 + 0x60), lVar51 == 0)) break;
                              if (*(uint *)(lVar51 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar48 == 0) break;
                              FUN_036a4e24(lVar48,*(undefined8 *)(lVar51 + lVar26 + 0xa8),0);
                              lVar48 = param_1[0xe1];
                              if (lVar48 == 0) break;
                              if (*(uint *)(lVar48 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar48 = *(long *)(lVar48 + lVar25 * 8 + 0x28);
                              if ((lVar48 == 0) || (lVar48 = FUN_0359d5ac(lVar48,0), lVar48 == 0))
                              break;
                              FUN_036aa280(lVar48,0);
                            }
                            lVar48 = *plVar6;
                            lVar25 = lVar25 + 1;
                            lVar26 = lVar26 + 0x50;
                          } while (lVar48 != 0);
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
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


