/*
FUNCTION_NAME: FUN_0354fd34
ENTRY_POINT: 0354fd34
PROGRAM: vrlegs-libil2cpp.so
SCORE: 209
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_7
*/


void FUN_0354fd34(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined2 uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  int *piVar31;
  ulong uVar32;
  undefined1 *puVar33;
  undefined1 uVar34;
  char cVar35;
  uint uVar36;
  float *pfVar37;
  undefined4 *puVar38;
  long lVar39;
  float *pfVar40;
  code *pcVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  long lVar48;
  long lVar49;
  long *plVar50;
  long *plVar51;
  long *plVar52;
  long lVar53;
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
  ulong uVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  ulong uVar72;
  uint uVar73;
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
  float fVar87;
  float fVar88;
  float fVar89;
  uint local_1858;
  int local_184c;
  ulong local_1848;
  int local_1814;
  float local_1810;
  float local_180c;
  float local_17f4;
  float local_17e8;
  float local_17e4;
  undefined8 local_17c8;
  float local_17c0;
  float local_17bc;
  float local_17b0;
  int local_17ac;
  float local_17a8;
  float local_17a4;
  undefined8 local_1798;
  float local_1784;
  float local_1780;
  float local_177c;
  float local_176c;
  undefined8 local_1758;
  float local_1728;
  float local_1724;
  int local_1714;
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
  
  puVar12 = PTR_DAT_03cbdf88;
  if ((DAT_0412df1d & 1) == 0) {
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
    DAT_0412df1d = 1;
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
  lVar49 = param_1[0x1f];
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar13 = PTR_DAT_03cbe438;
  uVar25 = FUN_036d35a8(lVar49,0,0);
  if ((uVar25 & 1) == 0) {
    if (param_1[0x1f] == 0) goto LAB_035574b8;
    lVar49 = FUN_03568ac0(param_1[0x1f],0);
    if (lVar49 != 0) {
      if (param_1[0x6d] != 0) {
        FUN_0359ff94(param_1[0x6d],0);
      }
      lVar49 = param_1[0x8f];
      if ((lVar49 != 0) && (*(long *)(lVar49 + 0x18) != 0)) {
        if ((int)*(long *)(lVar49 + 0x18) == 0) goto LAB_035575f4;
        if (*(int *)(lVar49 + 0x20) != 0) {
          plVar52 = param_1 + 0x20;
          param_1[0x20] = param_1[0x1f];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar52);
          plVar50 = param_1 + 0x23;
          param_1[0x23] = param_1[0x22];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined4 *)(param_1 + 0x24) = 0;
          puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
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
          FUN_0209aa94(*(long *)(*(long *)puVar13 + 0xb8) + 0x10,&local_c30,
                       *(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
          plVar1 = param_1 + 0xd3;
          param_1[0xd3] = param_1[0x36];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
          lVar49 = param_1[0x77];
          if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar25 = FUN_036cee6c(lVar49,0,0);
          if ((uVar25 & 1) != 0) {
            if (param_1[0x77] == 0) goto LAB_035574b8;
            FUN_03599b08(param_1[0x77],0);
          }
          if (param_1[0x1f] != 0) {
            lVar49 = param_1[0x92];
            fVar87 = *(float *)((long)param_1 + 0x1e4);
            iVar17 = FUN_03776950(param_1[0x1f] + 0x50,0);
            if (param_1[0x1f] != 0) {
              fVar54 = (float)FUN_03776960(param_1[0x1f] + 0x50,0);
              fVar82 = *(float *)((long)param_1 + 0x1e4);
              *(undefined4 *)((long)param_1 + 0x404) = 0x3f800000;
              *(float *)(param_1 + 0x3d) = fVar82;
              puVar12 = OVRPlugin_OVRP_1_29_0_TypeInfo;
              fVar71 = DAT_00d389a8;
              fVar60 = DAT_00d389a8;
              if (*(char *)((long)param_1 + 0x305) != '\0') {
                fVar60 = 1.0;
              }
              local_fe0._0_4_ = fVar82;
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
              pfVar37 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              local_17a8 = *pfVar37;
              local_1810 = pfVar37[1];
              local_180c = pfVar37[2];
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
              lVar26 = *(long *)puVar14;
              if (*(int *)(lVar26 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar26 = *(long *)puVar14;
              }
              puVar38 = *(undefined4 **)(lVar26 + 0xb8);
              uStack_fd8 = 0;
              local_fe0 = 0;
              local_fd0 = local_fd0 & 0xffffffff00000000;
              FUN_035683a4(*puVar38,puVar38[1],puVar38[2],puVar38[3],&local_fe0,uVar18,0);
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
                  fVar55 = (float)FUN_03776970(param_1[0x20] + 0x50,0);
                  if (*plVar52 != 0) {
                    fVar56 = (float)FUN_03776980(*plVar52 + 0x50,0);
                    if (*plVar52 != 0) {
                      fVar57 = (float)FUN_037769c0(*plVar52 + 0x50,0);
                      *(undefined8 *)((long)param_1 + 0x2ac) = 0;
                      *(undefined4 *)(param_1 + 200) = 0;
                      param_1[0x81] = 0;
                      local_c68 = 0;
                      FUN_0209aa94(param_1 + 0x82,&local_c68,*(undefined8 *)puVar12);
                      *(undefined1 *)(param_1 + 0x86) = 0;
                      *(undefined4 *)((long)param_1 + 0x494) = 0;
                      *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)((long)param_1 + 0x324);
                      *(undefined8 *)((long)param_1 + 0x49c) = 0;
                      *(undefined4 *)((long)param_1 + 0x4a4) = 0;
                      lVar26 = *(long *)puVar13;
                      if (*(int *)(lVar26 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar26 = *(long *)puVar13;
                      }
                      lVar27 = param_1[0x6d];
                      uVar70 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
                      param_1[0x95] = 0;
                      param_1[0x9a] = 0;
                      *(undefined1 *)((long)param_1 + 0x2c4) = 0;
                      lVar26 = NEON_rev64(uVar70,4);
                      *(undefined4 *)((long)param_1 + 0x2e4) = 0xffffffff;
                      param_1[0x99] = lVar26;
                      *(undefined4 *)(param_1 + 0x96) = 0;
                      if ((lVar27 != 0) && (*(long *)(lVar27 + 0x58) != 0)) {
                        uVar19 = (int)param_1[0x67] - 1;
                        uVar24 = *(int *)(*(long *)(lVar27 + 0x58) + 0x18) - 1;
                        if ((int)uVar19 <= (int)uVar24) {
                          uVar24 = uVar19;
                        }
                        uVar5 = 0;
                        if (-1 < (int)uVar19) {
                          uVar5 = uVar24;
                        }
                        FUN_035a02f4(lVar27,0);
                        fVar58 = *(float *)(param_1 + 0x68);
                        *(undefined4 *)(param_1 + 0x6c) = 0xbf800000;
                        fVar69 = *(float *)((long)param_1 + 0x344);
                        param_1[0x6a] = 0;
                        lVar26 = *(long *)puVar13;
                        fVar59 = *(float *)((long)param_1 + 0x34c);
                        fVar88 = *(float *)(param_1 + 0x6b);
                        fVar77 = *(float *)((long)param_1 + 0x35c);
                        if (*(int *)(lVar26 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar26 = *(long *)puVar13;
                        }
                        *(undefined8 *)((long)param_1 + 0x4dc) =
                             *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1598);
                        *(undefined8 *)((long)param_1 + 0x4e4) =
                             *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x15a0);
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
                          fVar74 = DAT_00d38d28;
                          fVar76 = DAT_00d38938;
                          local_d8 = local_d8 & 0xffffffff00000000;
                          lVar26 = param_1[0x8f];
                          if (lVar26 != 0) {
                            puVar2 = (uint *)((long)param_1 + 0x494);
                            plVar3 = param_1 + 0xc9;
                            uVar24 = (int)lVar49 - 1;
                            lVar49 = (long)param_1 + 0x434;
                            fVar55 = fVar55 - (fVar56 - fVar57);
                            local_1724 = 0.0;
                            if (fVar88 <= 0.0) {
                              fVar88 = 0.0;
                            }
                            if (fVar77 <= 0.0) {
                              fVar77 = 0.0;
                            }
                            fVar87 = (fVar87 / (float)iVar17) * fVar54 * fVar60;
                            uVar25 = (ulong)(uint)fVar87;
                            plVar4 = param_1 + 0x6d;
                            fVar88 = fVar88 + DAT_00d3879c;
                            uVar68 = (ulong)(uint)fVar88;
                            fVar54 = fVar77 + DAT_00d3879c;
                            fVar60 = fVar82 * DAT_00d38d28 * fVar60;
                            local_184c = 0;
                            bVar10 = false;
                            local_1714 = 0;
                            uVar19 = 0;
                            bVar9 = true;
                            bVar11 = 1;
                            local_1784 = fVar88;
LAB_0355087c:
                            fVar82 = (float)uVar25;
                            if ((int)*(uint *)(lVar26 + 0x18) <= (int)uVar19) {
LAB_0355459c:
                              fVar87 = (float)uVar68;
                              if (((char)param_1[0x47] != '\0') &&
                                 (fVar87 = DAT_00d389f8,
                                 DAT_00d389f8 <
                                 *(float *)((long)param_1 + 0x23c) - *(float *)(param_1 + 0x48))) {
                                fVar87 = *(float *)((long)param_1 + 0x1e4);
                                fVar60 = *(float *)((long)param_1 + 0x254);
                                if ((fVar87 < fVar60) &&
                                   (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                  if (*(float *)((long)param_1 + 0x2d4) <
                                      *(float *)(param_1 + 0x5a) / 100.0) {
                                    *(undefined4 *)((long)param_1 + 0x2d4) = 0;
                                  }
                                  fVar71 = (*(float *)((long)param_1 + 0x23c) - fVar87) * 0.5;
                                  if (fVar71 <= DAT_00d38b84) {
                                    fVar71 = DAT_00d38b84;
                                  }
                                  *(float *)(param_1 + 0x48) = fVar87;
                                  fVar71 = (fVar87 + fVar71) * 20.0 + 0.5;
                                  fVar87 = DAT_00d38e60;
                                  if (fVar71 != INFINITY) {
                                    fVar87 = (float)(int)fVar71 / 20.0;
                                  }
                                  if (fVar60 <= fVar87) {
                                    fVar87 = fVar60;
                                  }
LAB_03554658:
                                  *(float *)((long)param_1 + 0x1e4) = fVar87;
                                  return;
                                }
                              }
                              *(undefined1 *)((long)param_1 + 0x24c) = 1;
                              puVar12 = PTR_DAT_03cbdf88;
                              if ((int)param_1[0x49] <= *(int *)((long)param_1 + 0x244)) {
                                uVar70 = FUN_0276793c((long)param_1 + 0x244,0);
                                uVar28 = FUN_0277fa90((long)param_1 + 0x1e4,0);
                                uVar70 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,
                                                      uVar70,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_3_0_TypeInfo,uVar28,0
                                                     );
                                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                                }
                                FUN_0367a6ec(uVar70,0);
                              }
                              puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if ((*puVar2 == 0) || ((*puVar2 == 1 && (uStack_a4 == 3)))) {
                                (**(code **)(*param_1 + 0x918))
                                          (param_1,*(undefined8 *)(*param_1 + 0x920));
                                goto LAB_03554724;
                              }
                              lVar49 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar49 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar49 = *(long *)puVar13;
                              }
                              plVar52 = (long *)OVRPlugin_Media_TypeInfo;
                              lVar49 = **(long **)(lVar49 + 0xb8);
                              if (lVar49 == 0) goto LAB_035574b8;
                              if (*(uint *)(lVar49 + 0x18) <= *(uint *)(param_1 + 0xd1))
                              goto LAB_035575f4;
                              local_c0 = CONCAT44(*(int *)(lVar49 + (long)(int)*(uint *)(param_1 +
                                                                                        0xd1) * 0x38
                                                          + 0x54) << 2,(float)local_c0);
                              if ((*plVar4 == 0) ||
                                 (lVar49 = *(long *)(*plVar4 + 0x60), lVar49 == 0))
                              goto LAB_035574b8;
                              if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(int *)(lVar49 + 0x18) == 0) goto LAB_035575f4;
                              FUN_035968e8(lVar49 + 0x20,0,0);
                              if (DAT_0411f172 == '\0') {
                                FUN_01ab69ac(PTR_DAT_03cbded8);
                                DAT_0411f172 = '\x01';
                              }
                              iVar17 = (int)param_1[0x4e];
                              local_1784 = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                              local_1798 = *(undefined8 *)
                                            (*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                              lVar49 = param_1[0xe3];
                              local_17c8 = local_1798;
                              local_17bc = local_1784;
                              if (iVar17 < 0x401) {
                                if (iVar17 == 0x100) {
                                  if (lVar49 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar49 + 0x18) < 2) goto LAB_035575f4;
                                  uVar70 = *(undefined8 *)(lVar49 + 0x30);
                                  if ((int)param_1[0x5c] == 5) {
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x58), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar5) goto LAB_035575f4;
                                    fVar87 = *(float *)(lVar26 + (long)(int)uVar5 * 0x14 + 0x28);
                                  }
                                  else {
                                    fVar87 = *(float *)(param_1 + 0x97);
                                  }
                                  local_17bc = fVar58 + 0.0 + *(float *)(lVar49 + 0x2c);
                                  fVar87 = (0.0 - fVar87) - fVar69;
                                }
                                else if (iVar17 == 0x200) {
                                  if (lVar49 == 0) goto LAB_035574b8;
                                  if ((*(int *)(lVar49 + 0x18) == 1) ||
                                     (*(int *)(lVar49 + 0x18) == 0)) goto LAB_035575f4;
                                  local_17bc = (*(float *)(lVar49 + 0x20) +
                                               *(float *)(lVar49 + 0x2c)) * 0.5;
                                  uVar70 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar49 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >>
                                                           0x20)) * 0.5,
                                                    ((float)*(undefined8 *)(lVar49 + 0x24) +
                                                    (float)*(undefined8 *)(lVar49 + 0x30)) * 0.5);
                                  if ((int)param_1[0x5c] == 5) {
                                    if ((*plVar4 == 0) ||
                                       (lVar49 = *(long *)(*plVar4 + 0x58), lVar49 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar5) goto LAB_035575f4;
                                    lVar49 = lVar49 + (long)(int)uVar5 * 0x14;
                                    local_17bc = fVar58 + 0.0 + local_17bc;
                                    fVar87 = ((fVar69 + *(float *)(lVar49 + 0x28) +
                                              *(float *)(lVar49 + 0x30)) - fVar59) * -0.5 + 0.0;
                                  }
                                  else {
                                    local_17bc = fVar58 + 0.0 + local_17bc;
                                    fVar87 = ((fVar69 + *(float *)(param_1 + 0x97) + local_a8) -
                                             fVar59) * -0.5 + 0.0;
                                  }
                                }
                                else {
                                  if (iVar17 != 0x400) goto LAB_03554c4c;
                                  if (lVar49 == 0) goto LAB_035574b8;
                                  if (*(int *)(lVar49 + 0x18) == 0) goto LAB_035575f4;
                                  uVar70 = *(undefined8 *)(lVar49 + 0x24);
                                  fVar87 = local_a8;
                                  if ((int)param_1[0x5c] == 5) {
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x58), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar5) goto LAB_035575f4;
                                    fVar87 = *(float *)(lVar26 + (long)(int)uVar5 * 0x14 + 0x30);
                                  }
                                  local_17bc = fVar58 + 0.0 + *(float *)(lVar49 + 0x20);
                                  fVar87 = fVar59 + (0.0 - fVar87);
                                }
LAB_03554c3c:
                                local_17c8 = CONCAT44((float)((ulong)uVar70 >> 0x20) + 0.0,
                                                      (float)uVar70 + fVar87);
                              }
                              else if (iVar17 == 0x800) {
                                if (lVar49 == 0) goto LAB_035574b8;
                                if ((*(int *)(lVar49 + 0x18) == 1) || (*(int *)(lVar49 + 0x18) == 0)
                                   ) goto LAB_035575f4;
                                fVar87 = fVar58 + 0.0 +
                                         (*(float *)(lVar49 + 0x20) + *(float *)(lVar49 + 0x2c)) *
                                         0.5;
                                local_17c8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar49 + 0x24)
                                                              >> 0x20) +
                                                      (float)((ulong)*(undefined8 *)(lVar49 + 0x30)
                                                             >> 0x20)) * 0.5 + 0.0,
                                                      ((float)*(undefined8 *)(lVar49 + 0x24) +
                                                      (float)*(undefined8 *)(lVar49 + 0x30)) * 0.5 +
                                                      0.0);
                                local_17bc = fVar87;
                              }
                              else {
                                if (iVar17 == 0x1000) {
                                  if (lVar49 != 0) {
                                    if ((*(int *)(lVar49 + 0x18) != 1) &&
                                       (*(int *)(lVar49 + 0x18) != 0)) {
                                      uVar70 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar49 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar49 + 0x30) >> 0x20)) *
                                                        0.5,((float)*(undefined8 *)(lVar49 + 0x24) +
                                                            (float)*(undefined8 *)(lVar49 + 0x30)) *
                                                            0.5);
                                      local_17bc = fVar58 + 0.0 +
                                                   (*(float *)(lVar49 + 0x20) +
                                                   *(float *)(lVar49 + 0x2c)) * 0.5;
                                      fVar87 = 0.0 - ((fVar69 + *(float *)(param_1 + 0x9d) +
                                                      *(float *)(param_1 + 0x9c)) - fVar59) * 0.5;
                                      goto LAB_03554c3c;
                                    }
                                    goto LAB_035575f4;
                                  }
                                  goto LAB_035574b8;
                                }
                                if (iVar17 == 0x2000) {
                                  if (lVar49 == 0) goto LAB_035574b8;
                                  if ((*(int *)(lVar49 + 0x18) == 1) ||
                                     (*(int *)(lVar49 + 0x18) == 0)) goto LAB_035575f4;
                                  fVar87 = 0.0 - ((*(float *)((long)param_1 + 0x4bc) - fVar69) -
                                                 fVar59) * 0.5;
                                  local_17c8 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar49 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar49 + 0x30) >> 0x20)) *
                                                        0.5 + 0.0,
                                                        ((float)*(undefined8 *)(lVar49 + 0x24) +
                                                        (float)*(undefined8 *)(lVar49 + 0x30)) * 0.5
                                                        + fVar87);
                                  local_17bc = fVar58 + 0.0 +
                                               (*(float *)(lVar49 + 0x20) +
                                               *(float *)(lVar49 + 0x2c)) * 0.5;
                                }
                              }
LAB_03554c4c:
                              if (param_1[0xe5] != 0) {
                                uVar70 = FUN_03912334(param_1[0xe5],0);
                                if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)puVar12);
                                }
                                uVar25 = FUN_036d35a8(uVar70,0,0);
                                lVar49 = FUN_0357f060(param_1,0);
                                if (lVar49 != 0) {
                                  FUN_036df824(lVar49,0);
                                  *(float *)(param_1 + 0xe2) = fVar87;
                                  if (param_1[0xe5] != 0) {
                                    iVar17 = FUN_039117fc(param_1[0xe5],0);
                                    if (param_1[0xe5] != 0) {
                                      fVar60 = (float)FUN_03911954(param_1[0xe5],0);
                                      uVar18 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,
                                                            0x3f800000,0);
                                      uVar22 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,
                                                            0x3f800000,0);
                                      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                                      }
                                      if (DAT_0412df1c == '\0') {
                                        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                                        DAT_0412df1c = '\x01';
                                      }
                                      puVar12 = OVRPlugin_Mesh_TypeInfo;
                                      lVar49 = *(long *)OVRPlugin_Mesh_TypeInfo;
                                      if (*(int *)(lVar49 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar49 = *(long *)puVar12;
                                      }
                                      puVar38 = *(undefined4 **)(lVar49 + 0xb8);
                                      uVar29 = (ulong)(uint)puVar38[1];
                                      uVar72 = (ulong)(uint)puVar38[2];
                                      uVar68 = (ulong)(uint)puVar38[3];
                                      FUN_035683a4(*puVar38,uVar29,uVar72,uVar68,&local_d0,
                                                   0x4000ffff,0);
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      lVar49 = *plVar4;
                                      if (lVar49 != 0) {
                                        uVar24 = *puVar2;
                                        if ((int)uVar24 < 1) {
                                          local_17ac = 0;
                                          iVar17 = 0;
                                          goto LAB_03556f00;
                                        }
                                        lVar49 = *(long *)(lVar49 + 0x38);
                                        fVar87 = ABS(fVar87);
                                        fVar71 = 1.0;
                                        if ((uVar25 & 1) == 0) {
                                          fVar71 = fVar87;
                                        }
                                        if (lVar49 != 0) {
                                          bVar16 = false;
                                          bVar10 = false;
                                          local_1758 = 0;
                                          bVar9 = false;
                                          local_17ac = 0;
                                          local_1858 = 0;
                                          local_1728 = 0.0;
                                          local_1814 = 0;
                                          lVar26 = 0x2e0;
                                          fVar59 = 0.0;
                                          fVar54 = 0.0;
                                          local_177c = *(float *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                          local_1780 = 0.0;
                                          local_17f4 = 0.0;
                                          fVar58 = 0.0;
                                          fVar57 = 0.0;
                                          local_1848 = 0;
                                          uVar19 = 1;
                                          local_17e8 = local_180c;
                                          local_17e4 = local_1810;
                                          local_17c0 = local_180c;
                                          local_17b0 = local_1810;
                                          local_17a4 = local_1810;
                                          fVar82 = local_17a8;
                                          fVar55 = local_17a8;
                                          fVar56 = local_17a8;
                                          uVar73 = 0;
                                          goto LAB_03554e78;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_035574b8;
                            }
                            if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                            uVar19 = *(uint *)(lVar26 + (long)(int)uVar19 * 0xc + 0x20);
                            if (uVar19 == 0) goto LAB_0355459c;
                            uStack_a4 = uVar19;
                            if (5 < local_1714) {
                              uVar70 = FUN_0276793c(&uStack_a4,0);
                              uVar28 = FUN_0276793c(&local_d8,0);
                              uVar70 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,
                                                    uVar70,*(undefined8 *)
                                                            OVRPlugin_OVRP_1_42_0_TypeInfo,uVar28,0)
                              ;
                              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                              }
                              FUN_0367ae18(uVar70,0);
                              local_b8 = CONCAT44(3,*puVar2);
                            }
                            if ((*(char *)((long)param_1 + 0x302) == '\0') || (uStack_a4 != 0x3c)) {
                              if ((*plVar4 == 0) ||
                                 (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                              lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                              *(undefined4 *)((long)param_1 + 0x644) =
                                   *(undefined4 *)(lVar26 + 0x2c);
                              *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar26 + 0x58);
                              param_1[0x20] = *(long *)(lVar26 + 0x38);
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar52);
LAB_035509d4:
                              if ((param_1[0x6d] == 0) ||
                                 (lVar26 = *(long *)(param_1[0x6d] + 0x38), lVar26 == 0))
                              goto LAB_035574b8;
                              uVar19 = *puVar2;
                              if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                              lVar53 = (long)(int)uVar19;
                              cVar35 = *(char *)(lVar26 + lVar53 * 0x178 + 0x5c);
                              *(undefined1 *)((long)param_1 + 0x431) = 0;
                              lVar27 = param_1[0x24];
                              if ((uint)local_b8 == uVar19) {
                                uStack_a4 = local_b8._4_4_;
                                *(undefined4 *)((long)param_1 + 0x644) = 0;
                                if (local_b8._4_4_ == 0x2026) {
                                  *(long *)(lVar26 + lVar53 * 0x178 + 0x30) = param_1[0xca];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((param_1[0x6d] == 0) ||
                                     (lVar26 = *(long *)(param_1[0x6d] + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                                  *(undefined4 *)(lVar26 + 0x2c) = 0;
                                  *(long *)(lVar26 + 0x38) = param_1[0xcb];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((param_1[0x6d] == 0) ||
                                     (lVar26 = *(long *)(param_1[0x6d] + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *(long *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x50) =
                                       param_1[0xcc];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar4 == 0) ||
                                     (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  uVar19 = *puVar2;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                  bVar16 = true;
                                  *(int *)(lVar26 + (long)(int)uVar19 * 0x178 + 0x58) =
                                       (int)param_1[0xcd];
                                  *(undefined1 *)(param_1 + 0x5f) = 1;
                                  local_b8 = CONCAT44(3,uVar19 + 1);
                                }
                                else if (local_b8._4_4_ == 3) {
                                  if ((*plVar52 == 0) ||
                                     (lVar30 = FUN_03568ac0(*plVar52,0), lVar30 == 0))
                                  goto LAB_035574b8;
                                  local_c68 = 3;
                                  FUN_0219b634(lVar30,&local_c68,&local_fe0,
                                               *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                                  if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                  *(long *)(lVar26 + lVar53 * 0x178 + 0x30) = local_fe0;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  uVar19 = *(uint *)((long)param_1 + 0x494);
                                  bVar16 = true;
                                  *(undefined1 *)(param_1 + 0x5f) = 1;
                                }
                                else {
                                  bVar16 = true;
                                }
                              }
                              else {
                                bVar16 = false;
                              }
                              uVar73 = uStack_a4;
                              if (((int)uVar19 < *(int *)((long)param_1 + 0x324)) &&
                                 (uStack_a4 != 3)) {
                                if ((*plVar4 == 0) ||
                                   (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)uVar19 * 0x178;
                                *(undefined1 *)(lVar26 + 0x194) = 0;
                                *(undefined2 *)(lVar26 + 0x20) = 0x200b;
                                *(undefined4 *)(lVar26 + 100) = 0;
                                *puVar2 = uVar19 + 1;
                              }
                              else {
                                iVar17 = *(int *)((long)param_1 + 0x644);
                                if (iVar17 == 0) {
                                  uVar19 = *(uint *)((long)param_1 + 0x25c);
                                  if ((uVar19 >> 4 & 1) == 0) {
                                    if ((uVar19 >> 3 & 1) == 0) {
                                      local_1728 = 1.0;
                                      if ((uVar19 >> 5 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar29 = FUN_026b812c(uVar73,0);
                                        uVar19 = uStack_a4;
                                        if ((uVar29 & 1) != 0) {
                                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                          }
                                          uStack_a4 = FUN_026b8410(uVar19,0);
                                          uStack_a4 = uStack_a4 & 0xffff;
                                          local_1728 = fVar76;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar29 = FUN_026b8070(uVar73,0);
                                      uVar19 = uStack_a4;
                                      local_1728 = 1.0;
                                      if ((uVar29 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uStack_a4 = FUN_026b8594(uVar19,0);
                                        goto LAB_03550fdc;
                                      }
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar29 = FUN_026b812c(uVar73,0);
                                    uVar19 = uStack_a4;
                                    local_1728 = 1.0;
                                    if ((uVar29 & 1) != 0) {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uStack_a4 = FUN_026b8410(uVar19,0);
LAB_03550fdc:
                                      local_1728 = 1.0;
                                      uStack_a4 = uStack_a4 & 0xffff;
                                    }
                                  }
                                  iVar17 = *(int *)((long)param_1 + 0x644);
                                  if (iVar17 != 0) goto LAB_03550c00;
LAB_03550fec:
                                  if ((*plVar4 == 0) ||
                                     (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *plVar3 = *(long *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x30);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar3);
                                  if (*plVar3 == 0) goto LAB_03550bd0;
                                  if ((*plVar4 == 0) ||
                                     (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *plVar52 = *(long *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x38);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar52);
                                  if ((*plVar4 == 0) ||
                                     (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *plVar50 = *(long *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x50);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar4 == 0) ||
                                     (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  uVar73 = *puVar2;
                                  uVar19 = *(uint *)(lVar26 + 0x18);
                                  if (uVar19 <= uVar73) goto LAB_035575f4;
                                  *(undefined4 *)(param_1 + 0x24) =
                                       *(undefined4 *)(lVar26 + (long)(int)uVar73 * 0x178 + 0x58);
                                  if (bVar16) {
                                    lVar27 = param_1[0x8f];
                                    if (lVar27 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar27 + 0x18) <= (uint)local_d8)
                                    goto LAB_035575f4;
                                    if ((*(int *)(lVar27 + (long)(int)(uint)local_d8 * 0xc + 0x20)
                                         != 10) || (uVar73 == *(uint *)(param_1 + 0x93)))
                                    goto LAB_035510fc;
                                    if (uVar19 <= uVar73 - 1) goto LAB_035575f4;
                                    if (*plVar52 == 0) goto LAB_035574b8;
                                    fVar56 = *(float *)(lVar26 + (long)(int)(uVar73 - 1) * 0x178 +
                                                       0x60);
                                    iVar17 = FUN_03776950(*plVar52 + 0x50,0);
                                    lVar26 = *plVar52;
                                  }
                                  else {
LAB_035510fc:
                                    if (*plVar52 == 0) goto LAB_035574b8;
                                    fVar56 = *(float *)(param_1 + 0x3d);
                                    iVar17 = FUN_03776950(*plVar52 + 0x50,0);
                                    lVar26 = param_1[0x20];
                                  }
                                  if (lVar26 == 0) goto LAB_035574b8;
                                  fVar84 = (float)FUN_03776960(lVar26 + 0x50,0);
                                  fVar57 = fVar71;
                                  if (*(char *)((long)param_1 + 0x305) != '\0') {
                                    fVar57 = 1.0;
                                  }
                                  fVar83 = 0.0;
                                  fVar62 = 0.0;
                                  if (!(bool)(bVar16 & uStack_a4 == 0x2026)) {
                                    if (*plVar52 == 0) goto LAB_035574b8;
                                    fVar62 = (float)FUN_03776980(*plVar52 + 0x50,0);
                                    if (*plVar52 == 0) goto LAB_035574b8;
                                    fVar83 = (float)FUN_037769c0(*plVar52 + 0x50,0);
                                  }
                                  lVar26 = param_1[0xc9];
                                  if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0))
                                  goto LAB_035574b8;
                                  fVar61 = *(float *)((long)param_1 + 0x404);
                                  fVar63 = *(float *)(lVar26 + 0x2c);
                                  fVar82 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
                                  if (*plVar52 == 0) goto LAB_035574b8;
                                  fVar85 = (float)FUN_037769b0(*plVar52 + 0x50,0);
                                  if (*plVar52 == 0) goto LAB_035574b8;
                                  fVar65 = *(float *)((long)param_1 + 0x404);
                                  fVar64 = (float)FUN_03776960(*plVar52 + 0x50,0);
                                  lVar26 = param_1[0x6d];
                                  if ((lVar26 == 0) ||
                                     (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar27 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar27 = lVar27 + (long)(int)*puVar2 * 0x178;
                                  *(undefined4 *)(lVar27 + 0x2c) = 0;
                                  fVar57 = ((local_1728 * fVar56) / (float)iVar17) * fVar84 * fVar57
                                  ;
                                  fVar82 = fVar57 * fVar61 * fVar63 * fVar82;
                                  *(float *)(lVar27 + 0x160) = fVar82;
                                  uVar19 = *(uint *)(param_1 + 0x24);
                                  fVar64 = fVar57 * fVar85 * fVar65 * fVar64;
                                  if (uVar19 == 0) {
                                    local_1724 = *(float *)(param_1 + 0xc3);
                                  }
                                  else {
                                    lVar27 = param_1[0xe1];
                                    if (lVar27 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
                                    lVar27 = *(long *)(lVar27 + (long)(int)uVar19 * 8 + 0x20);
                                    if (lVar27 == 0) goto LAB_035574b8;
                                    local_1724 = *(float *)(lVar27 + 0x10c);
                                  }
LAB_035514b0:
                                  fVar56 = 0.0;
                                  if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                                    fVar56 = fVar82;
                                  }
                                }
                                else {
                                  local_1728 = 1.0;
                                  if (iVar17 == 0) goto LAB_03550fec;
LAB_03550c00:
                                  if (iVar17 == 1) {
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                    *plVar1 = *(long *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x40);
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ();
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                    *(undefined4 *)((long)param_1 + 0x6a4) =
                                         *(undefined4 *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x48)
                                    ;
                                    if ((param_1[0xd3] == 0) ||
                                       (lVar26 = UnityEngine_Material__DisableKeyword
                                                           (param_1[0xd3],0), lVar26 == 0))
                                    goto LAB_035574b8;
                                    FUN_02215a88(lVar26,*(undefined4 *)((long)param_1 + 0x6a4),
                                                 &local_fe0,
                                                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                                    lVar26 = local_fe0;
                                    puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (local_fe0 == 0) goto LAB_03550bd0;
                                    if (uStack_a4 == 0x3c) {
                                      uStack_a4 = *(int *)((long)param_1 + 0x6a4) + 0xe000;
                                    }
                                    else {
                                      lVar53 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar53 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar53 = *(long *)puVar12;
                                      }
                                      *(undefined4 *)((long)param_1 + 0x1bc) =
                                           *(undefined4 *)(*(long *)(lVar53 + 0xb8) + 0x68);
                                    }
                                    if (param_1[0x20] == 0) goto LAB_035574b8;
                                    fVar82 = *(float *)(param_1 + 0x3d);
                                    memmove(&local_160,(void *)(param_1[0x20] + 0x50),0x60);
                                    iVar17 = FUN_03776950(&local_160,0);
                                    if (*plVar52 == 0) goto LAB_035574b8;
                                    memmove(&local_160,(void *)(*plVar52 + 0x50),0x60);
                                    fVar57 = (float)FUN_03776960(&local_160,0);
                                    fVar56 = fVar71;
                                    if (*(char *)((long)param_1 + 0x305) != '\0') {
                                      fVar56 = 1.0;
                                    }
                                    if (param_1[0xd3] == 0) goto LAB_035574b8;
                                    fVar56 = (fVar82 / (float)iVar17) * fVar57 * fVar56;
                                    iVar17 = FUN_03776950(param_1[0xd3] + 0x48,0);
                                    fVar82 = *(float *)(param_1 + 0x3d);
                                    if (iVar17 < 1) {
                                      if (*plVar52 == 0) goto LAB_035574b8;
                                      iVar17 = FUN_03776950(*plVar52 + 0x50,0);
                                      if (*plVar52 == 0) goto LAB_035574b8;
                                      fVar57 = (float)FUN_03776960(*plVar52 + 0x50,0);
                                      fVar83 = fVar71;
                                      if (*(char *)((long)param_1 + 0x305) != '\0') {
                                        fVar83 = 1.0;
                                      }
                                      if (param_1[0x20] == 0) goto LAB_035574b8;
                                      fVar84 = (float)FUN_03776980(param_1[0x20] + 0x50,0);
                                      if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
                                      FUN_03776e6c(&local_fe0,*(long *)(lVar26 + 0x20),0);
                                      uStack_178 = uStack_fd8;
                                      local_180 = local_fe0;
                                      local_170 = (undefined4)local_fd0;
                                      fVar61 = (float)FUN_03776c9c(&local_180,0);
                                      if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
                                      fVar85 = *(float *)(lVar26 + 0x2c);
                                      fVar63 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
                                      if (*plVar52 == 0) goto LAB_035574b8;
                                      fVar62 = (float)FUN_03776980(*plVar52 + 0x50,0);
                                      if (*plVar52 == 0) goto LAB_035574b8;
                                      fVar65 = (float)FUN_037769b0(*plVar52 + 0x50,0);
                                      if (*plVar52 == 0) goto LAB_035574b8;
                                      fVar80 = *(float *)((long)param_1 + 0x404);
                                      fVar64 = (float)FUN_03776960(*plVar52 + 0x50,0);
                                      if (param_1[0x20] == 0) goto LAB_035574b8;
                                      fVar64 = fVar56 * fVar65 * fVar80 * fVar64;
                                      fVar83 = (fVar82 / (float)iVar17) * fVar57 * fVar83;
                                      fVar82 = fVar83 * (fVar84 / fVar61) * fVar85 * fVar63;
                                      fVar83 = fVar83 / fVar82;
                                      fVar62 = fVar83 * fVar62;
                                      fVar56 = (float)FUN_037769c0(param_1[0x20] + 0x50,0);
                                      fVar83 = fVar83 * fVar56;
                                    }
                                    else {
                                      if (*plVar1 == 0) goto LAB_035574b8;
                                      iVar17 = FUN_03776950(*plVar1 + 0x48,0);
                                      if (*plVar1 == 0) goto LAB_035574b8;
                                      fVar57 = (float)FUN_03776960(*plVar1 + 0x48,0);
                                      if (*(long *)(lVar26 + 0x20) == 0) goto LAB_035574b8;
                                      fVar83 = *(float *)(lVar26 + 0x2c);
                                      fVar84 = fVar71;
                                      if (*(char *)((long)param_1 + 0x305) != '\0') {
                                        fVar84 = 1.0;
                                      }
                                      fVar61 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
                                      if (param_1[0xd3] == 0) goto LAB_035574b8;
                                      fVar62 = (float)FUN_03776980(param_1[0xd3] + 0x48,0);
                                      if (*plVar1 == 0) goto LAB_035574b8;
                                      fVar63 = (float)FUN_037769b0(*plVar1 + 0x48,0);
                                      if (*plVar1 == 0) goto LAB_035574b8;
                                      fVar85 = *(float *)((long)param_1 + 0x404);
                                      fVar64 = (float)FUN_03776960(*plVar1 + 0x48,0);
                                      if (param_1[0xd3] == 0) goto LAB_035574b8;
                                      fVar64 = fVar56 * fVar63 * fVar85 * fVar64;
                                      fVar82 = (fVar82 / (float)iVar17) * fVar57 * fVar84 *
                                               fVar83 * fVar61;
                                      fVar83 = (float)FUN_037769c0(param_1[0xd3] + 0x48,0);
                                    }
                                    *plVar3 = lVar26;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (plVar3,lVar26);
                                    if ((*plVar4 != 0) &&
                                       (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
                                      if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                      lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                                      *(undefined4 *)(lVar26 + 0x2c) = 1;
                                      *(float *)(lVar26 + 0x160) = fVar82;
                                      *(long *)(lVar26 + 0x40) = *plVar1;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ();
                                      if ((*plVar4 != 0) &&
                                         (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
                                        if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                        *(long *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x38) =
                                             *plVar52;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ();
                                        lVar26 = *plVar4;
                                        if ((lVar26 != 0) &&
                                           (lVar53 = *(long *)(lVar26 + 0x38), lVar53 != 0)) {
                                          if (*puVar2 < *(uint *)(lVar53 + 0x18)) {
                                            local_1724 = 0.0;
                                            *(int *)(lVar53 + (long)(int)*puVar2 * 0x178 + 0x58) =
                                                 (int)param_1[0x24];
                                            *(int *)(param_1 + 0x24) = (int)lVar27;
                                            goto LAB_035514b0;
                                          }
                                          goto LAB_035575f4;
                                        }
                                      }
                                    }
                                    goto LAB_035574b8;
                                  }
                                  lVar26 = *plVar4;
                                  fVar64 = 0.0;
                                  fVar56 = 0.0;
                                  if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                                    fVar56 = fVar82;
                                  }
                                  if (lVar26 == 0) goto LAB_035574b8;
                                  fVar62 = 0.0;
                                  fVar83 = 0.0;
                                }
                                lVar26 = *(long *)(lVar26 + 0x38);
                                if (lVar26 == 0) goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                                *(short *)(lVar26 + 0x20) = (short)uStack_a4;
                                *(int *)(lVar26 + 0x60) = (int)param_1[0x3d];
                                *(undefined4 *)(lVar26 + 0x164) =
                                     *(undefined4 *)((long)param_1 + 0x4ec);
                                if ((param_1[0x6d] == 0) ||
                                   (lVar26 = *(long *)(param_1[0x6d] + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                *(int *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x168) =
                                     (int)param_1[0x2b];
                                if ((param_1[0x6d] == 0) ||
                                   (lVar26 = *(long *)(param_1[0x6d] + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                *(undefined4 *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x170) =
                                     *(undefined4 *)((long)param_1 + 0x15c);
                                if ((param_1[0x6d] == 0) ||
                                   (lVar26 = *(long *)(param_1[0x6d] + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                uVar19 = *puVar2;
                                FUN_0209a6e0(param_1 + 0xaa,&local_fe0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                                if (*(uint *)(lVar26 + 0x18) <= uVar19) goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)uVar19 * 0x178;
                                *(undefined4 *)(lVar26 + 0x18c) = (undefined4)local_fd0;
                                *(undefined8 *)(lVar26 + 0x184) = uStack_fd8;
                                *(long *)(lVar26 + 0x17c) = local_fe0;
                                if ((*plVar4 == 0) ||
                                   (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                *(undefined4 *)(lVar26 + (long)(int)*puVar2 * 0x178 + 400) =
                                     *(undefined4 *)((long)param_1 + 0x25c);
                                if ((param_1[0xc9] == 0) ||
                                   (lVar26 = *(long *)(param_1[0xc9] + 0x20), lVar26 == 0))
                                goto LAB_035574b8;
                                FUN_03776e6c(&local_c68,lVar26,0);
                                uVar19 = uStack_a4;
                                puVar12 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                local_f0 = CONCAT44(uStack_c64,local_c68);
                                uStack_e8 = uStack_c60;
                                local_e0 = local_c58;
                                if ((int)uStack_a4 < 0x10000) {
                                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar19 = FUN_026b63d8(uVar19,0);
                                  uVar19 = uVar19 & 1;
                                }
                                else {
                                  uVar19 = 0;
                                }
                                fVar57 = *(float *)(param_1 + 0x55);
                                *(undefined4 *)((long)param_1 + 0x2fc) = 0;
                                if (*(char *)((long)param_1 + 0x2f9) == '\0') {
                                  local_1758._4_4_ = 0.0;
                                  fVar61 = 0.0;
                                  fVar84 = 0.0;
                                }
                                else {
                                  if (*plVar3 == 0) goto LAB_035574b8;
                                  uVar36 = *puVar2;
                                  uVar73 = *(uint *)(*plVar3 + 0x28);
                                  if ((int)uVar36 < (int)uVar24) {
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar36 + 1) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + (long)(int)(uVar36 + 1) * 0x178 +
                                                      0x30);
                                    if ((((lVar26 == 0) || (*plVar52 == 0)) ||
                                        (lVar27 = *(long *)(*plVar52 + 0x128), lVar27 == 0)) ||
                                       (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0))
                                    goto LAB_035574b8;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,
                                                         uVar73 | *(int *)(lVar26 + 0x28) << 0x10);
                                    uVar25 = FUN_0219f8b8(lVar27,&local_fe0,&local_188,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                    uVar18 = 0;
                                    if ((uVar25 & 1) == 0) {
                                      local_1758._4_4_ = 0.0;
                                      fVar61 = 0.0;
                                      fVar84 = 0.0;
                                    }
                                    else {
                                      if (local_188 == 0) goto LAB_035574b8;
                                      local_1758._4_4_ = *(float *)(local_188 + 0x1c);
                                      uVar18 = *(undefined4 *)(local_188 + 0x20);
                                      fVar84 = *(float *)(local_188 + 0x14);
                                      fVar61 = *(float *)(local_188 + 0x18);
                                      if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                                        fVar57 = 0.0;
                                      }
                                    }
                                    uVar36 = *puVar2;
                                  }
                                  else {
                                    uVar18 = 0;
                                    local_1758._4_4_ = 0.0;
                                    fVar61 = 0.0;
                                    fVar84 = 0.0;
                                  }
                                  if (0 < (int)uVar36) {
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar36 - 1) goto LAB_035575f4;
                                    lVar26 = *(long *)(lVar26 + (ulong)(uVar36 - 1) * 0x178 + 0x30);
                                    if (((lVar26 == 0) || (*plVar52 == 0)) ||
                                       ((lVar27 = *(long *)(*plVar52 + 0x128), lVar27 == 0 ||
                                        (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0))))
                                    goto LAB_035574b8;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,
                                                         *(uint *)(lVar26 + 0x28) | uVar73 << 0x10);
                                    uVar25 = FUN_0219f8b8(lVar27,&local_fe0,&local_188,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                    if ((uVar25 & 1) != 0) {
                                      if ((local_188 == 0) ||
                                         (fVar84 = (float)FUN_03571cb4(fVar84,fVar61,
                                                                       local_1758._4_4_,uVar18,
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x28),
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x2c),
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x30),
                                                                       *(undefined4 *)
                                                                        (local_188 + 0x34),0),
                                         local_188 == 0)) goto LAB_035574b8;
                                      if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                                        fVar57 = 0.0;
                                      }
                                    }
                                  }
                                  *(float *)((long)param_1 + 0x2fc) = local_1758._4_4_;
                                }
                                if ((char)param_1[0x1e] != '\0') {
                                  fVar85 = *(float *)(param_1 + 200);
                                  fVar63 = (float)FUN_03776cb4(&local_f0,0);
                                  fVar85 = fVar85 - fVar56 * fVar63 * (1.0 - *(float *)((long)
                                                  param_1 + 0x2d4));
                                  *(float *)(param_1 + 200) = fVar85;
                                  if ((uStack_a4 == 0x200b) || (uVar19 != 0)) {
                                    *(float *)(param_1 + 200) =
                                         fVar85 - fVar60 * *(float *)((long)param_1 + 0x2b4);
                                  }
                                }
                                fVar85 = *(float *)(param_1 + 0x56);
                                fVar63 = 0.0;
                                if (fVar85 != 0.0) {
                                  fVar63 = (float)FUN_03776c94(&local_f0,0);
                                  fVar65 = (float)FUN_03776ca4(&local_f0,0);
                                  fVar63 = (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                           (fVar85 * 0.5 - fVar56 * (fVar63 * 0.5 + fVar65));
                                  *(float *)(param_1 + 200) = *(float *)(param_1 + 200) + fVar63;
                                }
                                if (((*(int *)((long)param_1 + 0x644) == 0) && (cVar35 == '\0')) &&
                                   ((*(byte *)((long)param_1 + 0x25c) & 1) != 0)) {
                                  lVar26 = *plVar50;
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar25 = FUN_036cee6c(lVar26,0,0);
                                  fVar65 = 0.0;
                                  if ((uVar25 & 1) != 0) {
                                    lVar26 = *plVar50;
                                    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    if (lVar26 == 0) goto LAB_035574b8;
                                    uVar25 = FUN_03699d3c(lVar26,*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar12 + 0xb8
                                                                            ) + 0x54),0);
                                    fVar65 = 0.0;
                                    if ((uVar25 & 1) != 0) {
                                      lVar26 = *plVar50;
                                      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (lVar26 == 0) goto LAB_035574b8;
                                      fVar85 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                                                           (*(long *)(*(long *)
                                                  puVar12 + 0xb8) + 0x54),0);
                                      if ((*plVar52 == 0) || (*plVar50 == 0)) goto LAB_035574b8;
                                      fVar80 = *(float *)(*plVar52 + 0x1b0);
                                      fVar65 = (float)FUN_0369e060(*plVar50,*(undefined4 *)
                                                                             (*(long *)(*(long *)
                                                  puVar12 + 0xb8) + 0xcc),0);
                                      fVar65 = fVar65 * fVar85 * fVar80 * 0.25;
                                      if (fVar85 < local_1724 + fVar65) {
                                        local_1724 = fVar85 - fVar65;
                                      }
                                    }
                                  }
                                  if (*plVar52 == 0) goto LAB_035574b8;
                                  local_17b0 = *(float *)(*plVar52 + 0x1b4);
                                }
                                else {
                                  lVar26 = *plVar50;
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar25 = FUN_036cee6c(lVar26,0,0);
                                  local_17b0 = 0.0;
                                  if ((uVar25 & 1) != 0) {
                                    lVar26 = *plVar50;
                                    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    if (lVar26 == 0) goto LAB_035574b8;
                                    uVar25 = FUN_03699d3c(lVar26,*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar12 + 0xb8
                                                                            ) + 0x54),0);
                                    if ((uVar25 & 1) != 0) {
                                      lVar26 = *plVar50;
                                      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (lVar26 == 0) goto LAB_035574b8;
                                      uVar25 = FUN_03699d3c(lVar26,*(undefined4 *)
                                                                    (*(long *)(*(long *)puVar12 +
                                                                              0xb8) + 0xcc),0);
                                      if ((uVar25 & 1) != 0) {
                                        lVar26 = *plVar50;
                                        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        if (lVar26 != 0) {
                                          fVar85 = (float)FUN_0369e060(lVar26,*(undefined4 *)
                                                                               (*(long *)(*(long *)
                                                  puVar12 + 0xb8) + 0x54),0);
                                          if ((*plVar52 != 0) && (*plVar50 != 0)) {
                                            fVar80 = *(float *)(*plVar52 + 0x1a8);
                                            fVar65 = (float)FUN_0369e060(*plVar50,*(undefined4 *)
                                                                                   (*(long *)(*(long
                                                                                                *)
                                                  puVar12 + 0xb8) + 0xcc),0);
                                            fVar65 = fVar65 * fVar85 * fVar80 * 0.25;
                                            if (fVar85 < local_1724 + fVar65) {
                                              local_1724 = fVar85 - fVar65;
                                            }
                                            goto FUN_03551b84;
                                          }
                                        }
                                        goto LAB_035574b8;
                                      }
                                    }
                                  }
                                  fVar65 = 0.0;
                                }
FUN_03551b84:
                                fVar85 = *(float *)(param_1 + 200);
                                fVar80 = (float)FUN_03776ca4(&local_f0,0);
                                fVar85 = fVar85 + (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                                  fVar56 * (fVar84 + ((fVar80 - local_1724) - fVar65
                                                                     ));
                                fVar84 = (float)FUN_03776cac(&local_f0,0);
                                fVar89 = *(float *)((long)param_1 + 0x61c) +
                                         ((fVar64 + fVar56 * (fVar61 + local_1724 + fVar84)) -
                                         *(float *)(param_1 + 0x9b));
                                fVar84 = (float)FUN_03776c9c(&local_f0,0);
                                fVar84 = fVar89 - fVar56 * (local_1724 + local_1724 + fVar84);
                                fVar61 = (float)FUN_03776c94(&local_f0,0);
                                fVar80 = fVar85 + (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                                  fVar56 * (fVar65 + fVar65 +
                                                           local_1724 + local_1724 + fVar61);
                                local_177c = fVar85;
                                fVar61 = fVar80;
                                if (((*(int *)((long)param_1 + 0x644) == 0) && (cVar35 == '\0')) &&
                                   ((*(byte *)((long)param_1 + 0x25c) >> 1 & 1) != 0)) {
                                  fVar79 = (float)(int)param_1[0xbe] * fVar74;
                                  fVar61 = (float)FUN_03776cac(&local_f0,0);
                                  fVar78 = fVar79 * fVar56 * (fVar65 + local_1724 + fVar61);
                                  fVar61 = (float)FUN_03776cac(&local_f0,0);
                                  fVar75 = (float)FUN_03776c9c(&local_f0,0);
                                  fVar89 = fVar89 + 0.0;
                                  fVar84 = fVar84 + 0.0;
                                  fVar79 = fVar79 * fVar56 * (((fVar61 - fVar75) - local_1724) -
                                                             fVar65);
                                  fVar75 = fVar85 + fVar78;
                                  fVar61 = fVar80 + fVar79;
                                  fVar66 = (fVar78 - fVar79) * 0.5;
                                  fVar85 = (fVar85 + fVar79) - fVar66;
                                  fVar80 = (fVar80 + fVar78) - fVar66;
                                  local_177c = fVar75 - fVar66;
                                  fVar61 = fVar61 - fVar66;
                                }
                                if (*(char *)((long)param_1 + 0x474) == '\0') {
                                  local_176c = 0.0;
                                  fVar66 = 0.0;
                                  fVar78 = 0.0;
                                  local_1780 = 0.0;
                                  fVar79 = fVar84;
                                  fVar75 = fVar89;
                                }
                                else {
                                  thunk_FUN_036bc400(lVar49,0);
                                  fVar81 = (fVar80 + fVar85) * 0.5;
                                  fVar86 = (fVar84 + fVar89) * 0.5;
                                  fVar89 = fVar89 - fVar86;
                                  local_1780 = 0.0;
                                  fVar75 = fVar89;
                                  local_177c = (float)FUN_036bdd2c(local_177c - fVar81,lVar49,0);
                                  local_177c = fVar81 + local_177c;
                                  local_1780 = local_1780 + 0.0;
                                  fVar79 = fVar84 - fVar86;
                                  local_176c = 0.0;
                                  fVar84 = fVar79;
                                  fVar85 = (float)FUN_036bdd2c(fVar85 - fVar81,lVar49,0);
                                  fVar85 = fVar81 + fVar85;
                                  local_176c = local_176c + 0.0;
                                  fVar84 = fVar86 + fVar84;
                                  fVar78 = 0.0;
                                  fVar80 = (float)FUN_036bdd2c(fVar80 - fVar81,lVar49,0);
                                  fVar80 = fVar81 + fVar80;
                                  fVar89 = fVar86 + fVar89;
                                  fVar78 = fVar78 + 0.0;
                                  fVar66 = 0.0;
                                  fVar61 = (float)FUN_036bdd2c(fVar61 - fVar81,lVar49,0);
                                  fVar61 = fVar81 + fVar61;
                                  fVar66 = fVar66 + 0.0;
                                  fVar79 = fVar86 + fVar79;
                                  fVar75 = fVar86 + fVar75;
                                }
                                if (*plVar4 == 0) goto LAB_035574b8;
                                lVar26 = *(long *)(*plVar4 + 0x38);
                                uVar25 = (ulong)(uint)fVar56;
                                if (lVar26 == 0) goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                                *(float *)(lVar26 + 0x11c) = fVar85;
                                *(float *)(lVar26 + 0x120) = fVar84;
                                *(float *)(lVar26 + 0x124) = local_176c;
                                if ((*plVar4 == 0) ||
                                   (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                                *(float *)(lVar26 + 0x114) = fVar75;
                                *(float *)(lVar26 + 0x110) = local_177c;
                                *(float *)(lVar26 + 0x118) = local_1780;
                                if ((*plVar4 == 0) ||
                                   (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                                *(float *)(lVar26 + 0x128) = fVar80;
                                *(float *)(lVar26 + 300) = fVar89;
                                *(float *)(lVar26 + 0x130) = fVar78;
                                if ((*plVar4 == 0) ||
                                   (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                                *(float *)(lVar26 + 0x134) = fVar61;
                                *(float *)(lVar26 + 0x138) = fVar79;
                                *(float *)(lVar26 + 0x13c) = fVar66;
                                if ((*plVar4 == 0) ||
                                   (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                goto LAB_035574b8;
                                uVar73 = *puVar2;
                                lVar27 = (long)(int)uVar73;
                                if (*(uint *)(lVar26 + 0x18) <= uVar73) goto LAB_035575f4;
                                lVar53 = lVar26 + lVar27 * 0x178;
                                *(int *)(lVar53 + 0x140) = (int)param_1[200];
                                fVar89 = *(float *)(param_1 + 0x9b);
                                uVar68 = (ulong)(uint)fVar89;
                                fVar61 = *(float *)((long)param_1 + 0x61c);
                                *(float *)(lVar53 + 0x15c) = (fVar80 - fVar85) / (fVar75 - fVar84);
                                *(float *)(lVar53 + 0x14c) = (fVar64 - fVar89) + fVar61;
                                fVar62 = fVar62 * fVar56;
                                if (*(int *)((long)param_1 + 0x644) == 0) {
                                  fVar62 = fVar62 / local_1728;
                                  fVar83 = (fVar83 * fVar56) / local_1728;
                                }
                                else {
                                  fVar83 = fVar83 * fVar56;
                                }
                                uVar36 = *(uint *)(param_1 + 0x93);
                                if ((uVar19 == 0) || (uVar73 == uVar36)) {
                                  fVar83 = fVar61 + fVar83;
                                  fVar62 = fVar61 + fVar62;
                                  fVar85 = fVar83;
                                  fVar84 = fVar62;
                                  if (fVar61 != 0.0) {
                                    fVar84 = (fVar62 - fVar61) / *(float *)((long)param_1 + 0x404);
                                    fVar85 = (fVar83 - fVar61) / *(float *)((long)param_1 + 0x404);
                                    if (fVar84 <= fVar62) {
                                      fVar84 = fVar62;
                                    }
                                    if (fVar83 <= fVar85) {
                                      fVar85 = fVar83;
                                    }
                                  }
                                  lVar26 = lVar26 + lVar27 * 0x178;
                                  fVar61 = fVar84;
                                  if (fVar84 <= *(float *)(param_1 + 0x99)) {
                                    fVar61 = *(float *)(param_1 + 0x99);
                                  }
                                  fVar64 = fVar85;
                                  if (*(float *)((long)param_1 + 0x4cc) <= fVar85) {
                                    fVar64 = *(float *)((long)param_1 + 0x4cc);
                                  }
                                  *(float *)((long)param_1 + 0x4cc) = fVar64;
                                  *(float *)(param_1 + 0x99) = fVar61;
                                  *(float *)(lVar26 + 0x154) = fVar84;
                                  *(float *)(lVar26 + 0x158) = fVar85;
                                  *(float *)(lVar26 + 0x148) = fVar62 - fVar89;
                                  *(float *)(param_1 + 0x98) = fVar62 - fVar89;
                                  *(float *)(lVar26 + 0x150) = fVar83 - fVar89;
                                  *(float *)((long)param_1 + 0x4c4) = fVar83 - fVar89;
                                  if (((int)param_1[0x95] == 0) ||
                                     (*(char *)((long)param_1 + 0x33c) != '\0')) {
                                    *(float *)(param_1 + 0x97) = fVar61;
                                    if (param_1[0x20] == 0) goto LAB_035574b8;
                                    fVar84 = *(float *)((long)param_1 + 0x4bc);
                                    fVar83 = (float)FUN_03776990(param_1[0x20] + 0x50,0);
                                    local_1728 = (fVar56 * fVar83) / local_1728;
                                    uVar68 = (ulong)*(uint *)(param_1 + 0x9b);
                                    if (fVar84 <= local_1728) {
                                      fVar84 = local_1728;
                                    }
                                    *(float *)((long)param_1 + 0x4bc) = fVar84;
                                  }
                                  if ((float)uVar68 == 0.0) {
                                    fVar84 = *(float *)((long)param_1 + 0x4b4);
                                    if (*(float *)((long)param_1 + 0x4b4) <= fVar62) {
                                      fVar84 = fVar62;
                                    }
                                    *(float *)((long)param_1 + 0x4b4) = fVar84;
                                  }
                                }
                                else {
                                  fVar84 = *(float *)(param_1 + 0x99);
                                  lVar26 = lVar26 + lVar27 * 0x178;
                                  *(float *)(lVar26 + 0x154) = fVar84;
                                  fVar62 = *(float *)((long)param_1 + 0x4cc);
                                  fVar84 = fVar84 - fVar89;
                                  *(float *)(lVar26 + 0x148) = fVar84;
                                  *(float *)(lVar26 + 0x158) = fVar62;
                                  *(float *)(param_1 + 0x98) = fVar84;
                                  fVar62 = fVar62 - fVar89;
                                  *(float *)(lVar26 + 0x150) = fVar62;
                                  *(float *)((long)param_1 + 0x4c4) = fVar62;
                                }
                                uVar21 = uStack_a4;
                                lVar26 = *plVar4;
                                if ((lVar26 == 0) ||
                                   (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0))
                                goto LAB_035574b8;
                                uVar42 = *puVar2;
                                if (*(uint *)(lVar27 + 0x18) <= uVar42) goto LAB_035575f4;
                                lVar27 = lVar27 + (long)(int)uVar42 * 0x178;
                                *(undefined1 *)(lVar27 + 0x194) = 0;
                                uVar43 = *(uint *)(param_1 + 0x4f);
                                if ((uStack_a4 == 9) ||
                                   (((((uVar19 == 0 && (uStack_a4 != 3)) && (uStack_a4 != 0x200b))
                                     && (uStack_a4 != 0xad)) ||
                                    (((bool)(uStack_a4 == 0xad & (bVar10 ^ 1U)) ||
                                     (*(int *)((long)param_1 + 0x644) == 1)))))) {
                                  *(undefined1 *)(lVar27 + 0x194) = 1;
                                  pfVar40 = (float *)((long)param_1 + 0x354);
                                  pfVar37 = (float *)(param_1 + 0x6a);
                                  if (bVar16) {
                                    lVar26 = *(long *)(lVar26 + 0x50);
                                    if (lVar26 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x95))
                                    goto LAB_035575f4;
                                    lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                    pfVar37 = (float *)(lVar26 + 0x60);
                                    pfVar40 = (float *)(lVar26 + 100);
                                  }
                                  fVar62 = *pfVar37;
                                  fVar83 = *pfVar40;
                                  fVar84 = *(float *)(param_1 + 0x6c);
                                  fVar61 = *(float *)(param_1 + 200);
                                  local_1784 = (fVar88 - fVar62) - fVar83;
                                  bVar15 = true;
                                  if ((fVar84 <= local_1784) && (bVar15 = false, !NAN(fVar84))) {
                                    bVar15 = fVar84 == -1.0;
                                  }
                                  if (!bVar15) {
                                    local_1784 = fVar84;
                                  }
                                  fVar84 = 0.0;
                                  if ((char)param_1[0x1e] == '\0') {
                                    fVar84 = (float)FUN_03776cb4(&local_f0,0);
                                    uVar68 = (ulong)*(uint *)(param_1 + 0x9b);
                                  }
                                  fVar85 = *(float *)((long)param_1 + 0x2d4);
                                  fVar64 = *(float *)((long)param_1 + 0x4cc);
                                  if (uStack_a4 != 0xad) {
                                    fVar82 = fVar56;
                                  }
                                  fVar89 = (float)uVar68;
                                  fVar80 = 0.0;
                                  if ((0.0 < fVar89) &&
                                     (fVar80 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0')) {
                                    fVar80 = *(float *)(param_1 + 0x99) - *(float *)(param_1 + 0x9a)
                                    ;
                                  }
                                  uVar42 = *puVar2;
                                  fVar80 = (*(float *)(param_1 + 0x97) - (fVar64 - fVar89)) + fVar80
                                  ;
                                  if (fVar54 < fVar80) {
                                    if (*(int *)((long)param_1 + 0x2e4) == -1) {
                                      *(uint *)((long)param_1 + 0x2e4) = uVar42;
                                    }
                                    puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    uVar70 = DAT_00d37868;
                                    if ((char)param_1[0x47] != '\0') {
                                      fVar75 = *(float *)(param_1 + 0x59);
                                      if (((fVar75 < *(float *)((long)param_1 + 700)) &&
                                          (0.0 < fVar89)) &&
                                         (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                        fVar87 = *(float *)((long)param_1 + 700) +
                                                 ((fVar77 - fVar80) / (float)(int)param_1[0x95]) /
                                                 fVar87;
                                        if (fVar87 <= fVar75) {
                                          fVar87 = fVar75;
                                        }
                                        goto LAB_03554b48;
                                      }
                                      fVar89 = *(float *)((long)param_1 + 0x1e4);
                                      fVar80 = *(float *)(param_1 + 0x4a);
                                      uVar68 = (ulong)(uint)fVar80;
                                      if ((fVar80 < fVar89) &&
                                         (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                        fVar87 = (fVar89 - *(float *)(param_1 + 0x48)) * 0.5;
                                        if (fVar87 <= DAT_00d38b84) {
                                          fVar87 = DAT_00d38b84;
                                        }
                                        fVar60 = (fVar89 - fVar87) * 20.0 + 0.5;
                                        *(float *)((long)param_1 + 0x23c) = fVar89;
                                        fVar87 = DAT_00d38e60;
                                        if (fVar60 != INFINITY) {
                                          fVar87 = (float)(int)fVar60 / 20.0;
                                        }
                                        if (fVar87 <= fVar80) {
                                          fVar87 = fVar80;
                                        }
                                        goto LAB_03554658;
                                      }
                                    }
                                    switch((int)param_1[0x5c]) {
                                    case 1:
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      lVar27 = *(long *)(lVar26 + 0xb8);
                                      lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                        0x20);
                                      if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                        lVar26 = FUN_01a46ff8(lVar26);
                                      }
                                      piVar31 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                                                          *(long *)(*(long *)(*(long
                                                                                                *)(
                                                  lVar26 + 0xc0) + 8) + 0x80) + 0xa0);
                                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*piVar31 == 0) {
LAB_03554580:
                                        local_b8 = DAT_00d37868;
                                        local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                                        puVar2[0] = 0;
                                        puVar2[1] = 0;
                                      }
                                      else {
                                        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar26 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar26 = *(long *)puVar12;
                                        }
                                        FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&local_fe0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(auStack_500,&local_fe0,0x378);
                                        puVar33 = auStack_500;
LAB_035529dc:
                                        iVar17 = FUN_0358c15c(param_1,puVar33,0);
LAB_035529e8:
                                        local_d8 = CONCAT44(local_d8._4_4_,iVar17 + -1);
                                        iVar17 = *(int *)((long)param_1 + 0x494) + -1;
                                        *(int *)((long)param_1 + 0x494) = iVar17;
                                        local_b8 = CONCAT44(0x2026,iVar17);
                                        local_1714 = local_1714 + 1;
                                      }
                                      goto LAB_03550bd0;
                                    default:
                                      goto UnityEngine_AnimationClip__set_wrapMode;
                                    case 3:
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      lVar26 = *(long *)(lVar26 + 0xb8) + 0xb00;
LAB_03552550:
                                      uVar18 = FUN_0358c15c(param_1,lVar26,0);
LAB_0355255c:
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      break;
                                    case 5:
                                      if ((uVar42 == 0) || ((int)(uint)local_d8 < 0)) {
                                        local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                                        *puVar2 = 0;
                                        local_b8 = uVar70;
                                      }
                                      else {
                                        fVar82 = *(float *)(param_1 + 0x99);
                                        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar26 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar26 = *(long *)puVar12;
                                        }
                                        uVar18 = FUN_0358c15c(param_1,*(long *)(lVar26 + 0xb8) +
                                                                      0x410,0);
                                        local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                        if (fVar54 < fVar82 - fVar64) break;
                                        *(undefined1 *)((long)param_1 + 0x33c) = 1;
                                        *(undefined4 *)(param_1 + 0x93) =
                                             *(undefined4 *)((long)param_1 + 0x494);
                                        uVar68 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                        *(float *)(param_1 + 200) =
                                             *(float *)((long)param_1 + 0x40c) + 0.0;
                                        *(undefined4 *)(param_1 + 0x9a) = 0;
                                        lVar26 = NEON_rev64(uVar68,4);
                                        param_1[0x99] = lVar26;
                                        *(undefined4 *)(param_1 + 0x9b) = 0;
                                        *(undefined8 *)((long)param_1 + 0x4b4) = 0;
                                        *(int *)(param_1 + 0x95) = (int)param_1[0x95] + 1;
                                        *(int *)(param_1 + 0x96) = (int)param_1[0x96] + 1;
                                      }
                                      goto LAB_03550bd0;
                                    case 6:
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      uVar18 = FUN_0358c15c(param_1,*(long *)(lVar26 + 0xb8) + 0xb00
                                                            ,0);
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      lVar26 = param_1[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar29 = FUN_036cee6c(lVar26,0,0);
                                      if ((uVar29 & 1) != 0) {
                                        plVar51 = (long *)param_1[0x5d];
                                        uVar70 = (**(code **)(*param_1 + 0x518))
                                                           (param_1,*(undefined8 *)
                                                                     (*param_1 + 0x520));
                                        if (plVar51 == (long *)0x0) goto LAB_035574b8;
                                        (**(code **)(*plVar51 + 0x528))
                                                  (plVar51,uVar70,*(undefined8 *)(*plVar51 + 0x530))
                                        ;
                                        lVar26 = param_1[0x5d];
                                        if (lVar26 == 0) goto LAB_035574b8;
                                        *(int *)(lVar26 + 0x400) = (int)param_1[0x80];
                                        FUN_0357ee30(lVar26,*(undefined4 *)((long)param_1 + 0x494),0
                                                    );
                                        plVar51 = (long *)param_1[0x5d];
                                        if (plVar51 == (long *)0x0) goto LAB_035574b8;
                                        (**(code **)(*plVar51 + 0x7a8))
                                                  (plVar51,0,0,*(undefined8 *)(*plVar51 + 0x7b0));
                                        *(undefined1 *)(param_1 + 0x5f) = 1;
                                      }
                                    }
UnityEngine_AnimationClip__get_hasMotionCurves:
                                    local_b8 = CONCAT44(3,uVar42);
                                    goto LAB_03550bd0;
                                  }
UnityEngine_AnimationClip__set_wrapMode:
                                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  fVar84 = ABS(fVar61) + fVar84 * (1.0 - fVar85) * fVar82;
                                  fVar82 = 1.0;
                                  if ((uVar43 & 0x18) != 0) {
                                    fVar82 = DAT_00d38acc;
                                  }
                                  fVar61 = fVar82 * local_1784;
                                  if (fVar61 < fVar84) {
                                    uVar68 = (ulong)(uint)fVar65;
                                    if (((char)param_1[0x5b] == '\0') ||
                                       (uVar42 == *(uint *)(param_1 + 0x93))) {
                                      if (((char)param_1[0x47] != '\0') &&
                                         (*(int *)((long)param_1 + 0x244) < (int)param_1[0x49])) {
                                        fVar61 = *(float *)(param_1 + 0x5a) / 100.0;
                                        if (fVar85 < fVar61) {
                                          fVar87 = fVar84 / (1.0 - fVar85);
                                          if (fVar85 <= 0.0) {
                                            fVar87 = fVar84;
                                          }
                                          fVar85 = fVar85 + (fVar84 - fVar82 * (local_1784 +
                                                                               DAT_00d38cc4)) /
                                                            fVar87;
                                          goto LAB_035574e8;
                                        }
                                        fVar85 = *(float *)((long)param_1 + 0x1e4);
                                        fVar61 = *(float *)(param_1 + 0x4a);
                                        if (fVar61 < fVar85) {
                                          fVar87 = (fVar85 - *(float *)(param_1 + 0x48)) * 0.5;
                                          if (fVar87 <= DAT_00d38b84) {
                                            fVar87 = DAT_00d38b84;
                                          }
                                          *(float *)((long)param_1 + 0x23c) = fVar85;
                                          fVar85 = fVar85 - fVar87;
LAB_03557524:
                                          fVar60 = fVar85 * 20.0 + 0.5;
                                          fVar87 = DAT_00d38e60;
                                          if (fVar60 != INFINITY) {
                                            fVar87 = (float)(int)fVar60 / 20.0;
                                          }
                                          if (fVar87 <= fVar61) {
                                            fVar87 = fVar61;
                                          }
                                          goto LAB_03554658;
                                        }
                                      }
                                      iVar17 = (int)param_1[0x5c];
                                      if (iVar17 == 1) {
                                        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar26 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar26 = *(long *)puVar12;
                                        }
                                        lVar27 = *(long *)(lVar26 + 0xb8);
                                        lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                          0x20);
                                        if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                          lVar26 = FUN_01a46ff8(lVar26);
                                        }
                                        piVar31 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                                                            *(long *)(*(long *)(*(
                                                  long *)(lVar26 + 0xc0) + 8) + 0x80) + 0xa0);
                                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*piVar31 != 0) {
                                          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          if (*(int *)(lVar26 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                            lVar26 = *(long *)puVar12;
                                          }
                                          FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,&local_fe0,
                                                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo)
                                          ;
                                          memcpy(auStack_bf0,&local_fe0,0x378);
                                          puVar33 = auStack_bf0;
                                          goto LAB_035529dc;
                                        }
                                        goto LAB_03554580;
                                      }
                                      if (iVar17 != 6) {
                                        if (iVar17 == 3) {
                                          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          if (*(int *)(lVar26 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                            lVar26 = *(long *)puVar12;
                                          }
                                          lVar26 = *(long *)(lVar26 + 0xb8) + 0x98;
                                          goto LAB_03552550;
                                        }
                                        goto LAB_03552f54;
                                      }
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      uVar18 = FUN_0358c15c(param_1,*(long *)(lVar26 + 0xb8) + 0x98,
                                                            0);
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      lVar26 = param_1[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar29 = FUN_036cee6c(lVar26,0,0);
                                      if ((uVar29 & 1) != 0) {
                                        plVar51 = (long *)param_1[0x5d];
                                        uVar70 = (**(code **)(*param_1 + 0x518))
                                                           (param_1,*(undefined8 *)
                                                                     (*param_1 + 0x520));
                                        if (plVar51 == (long *)0x0) goto LAB_035574b8;
                                        (**(code **)(*plVar51 + 0x528))
                                                  (plVar51,uVar70,*(undefined8 *)(*plVar51 + 0x530))
                                        ;
                                        lVar26 = param_1[0x5d];
                                        if (lVar26 == 0) goto LAB_035574b8;
                                        *(int *)(lVar26 + 0x400) = (int)param_1[0x80];
                                        FUN_0357ee30(lVar26,*(undefined4 *)((long)param_1 + 0x494),0
                                                    );
                                        plVar51 = (long *)param_1[0x5d];
                                        if (plVar51 == (long *)0x0) goto LAB_035574b8;
                                        (**(code **)(*plVar51 + 0x7a8))
                                                  (plVar51,0,0,*(undefined8 *)(*plVar51 + 0x7b0));
                                        *(undefined1 *)(param_1 + 0x5f) = 1;
                                      }
LAB_03552b00:
                                      local_b8 = CONCAT44(3,*puVar2);
                                    }
                                    else {
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      iVar17 = FUN_0358c15c(param_1,*(long *)(lVar26 + 0xb8) + 0x98,
                                                            0);
                                      local_d8 = CONCAT44(local_d8._4_4_,iVar17);
                                      if (*(float *)(param_1 + 0x58) == DAT_00d38ba4) {
                                        lVar26 = *plVar4;
                                        if ((lVar26 == 0) ||
                                           (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0))
                                        goto LAB_035574b8;
                                        if (*(uint *)(lVar27 + 0x18) <= *puVar2) goto LAB_035575f4;
                                        fVar61 = *(float *)(param_1 + 0x9b);
                                        fVar85 = 0.0;
                                        if ((0.0 < fVar61) &&
                                           (fVar85 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0'))
                                        {
                                          fVar85 = *(float *)(param_1 + 0x99) -
                                                   *(float *)(param_1 + 0x9a);
                                        }
                                        fVar85 = fVar60 * *(float *)(param_1 + 0x57) +
                                                 *(float *)(lVar27 + (long)(int)*puVar2 * 0x178 +
                                                           0x154) +
                                                 (fVar85 - *(float *)((long)param_1 + 0x4cc)) +
                                                 fVar87 * (fVar55 + *(float *)((long)param_1 + 700))
                                        ;
                                      }
                                      else {
                                        lVar26 = param_1[0x6d];
                                        *(undefined1 *)((long)param_1 + 0x2c4) = 1;
                                        if (lVar26 == 0) goto LAB_035574b8;
                                        fVar61 = *(float *)(param_1 + 0x9b);
                                        fVar85 = *(float *)(param_1 + 0x58) +
                                                 fVar60 * *(float *)(param_1 + 0x57);
                                      }
                                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar26 = *(long *)(lVar26 + 0x38);
                                      if (lVar26 == 0) goto LAB_035574b8;
                                      uVar21 = *(uint *)((long)param_1 + 0x494);
                                      if ((*(uint *)(lVar26 + 0x18) <= uVar21) ||
                                         (uVar47 = uVar21 - 1, *(uint *)(lVar26 + 0x18) <= uVar47))
                                      goto LAB_035575f4;
                                      uVar68 = (ulong)(uint)(fVar85 + *(float *)(param_1 + 0x97));
                                      fVar64 = (fVar85 + *(float *)(param_1 + 0x97) + fVar61) -
                                               *(float *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x158
                                                         );
                                      if ((bVar10 || *(short *)(lVar26 + (long)(int)uVar47 * 0x178 +
                                                               0x20) != 0xad) ||
                                         ((fVar54 <= fVar64 && ((int)param_1[0x5c] != 0)))) {
                                        if (*(short *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x20) ==
                                            0xad) {
                                          bVar10 = true;
                                        }
                                        else {
                                          if ((bVar11 & *(byte *)(param_1 + 0x47)) != 0) {
                                            fVar85 = *(float *)((long)param_1 + 0x2d4);
                                            fVar61 = *(float *)(param_1 + 0x5a) / 100.0;
                                            if ((fVar61 <= fVar85) ||
                                               ((int)param_1[0x49] <=
                                                *(int *)((long)param_1 + 0x244))) {
                                              fVar85 = *(float *)((long)param_1 + 0x1e4);
                                              uVar68 = (ulong)(uint)fVar85;
                                              fVar61 = *(float *)(param_1 + 0x4a);
                                              if ((fVar85 <= fVar61) ||
                                                 ((int)param_1[0x49] <=
                                                  *(int *)((long)param_1 + 0x244)))
                                              goto LAB_03552d44;
LAB_03557594:
                                              fVar87 = (fVar85 - *(float *)(param_1 + 0x48)) * 0.5;
                                              if (fVar87 <= DAT_00d38b84) {
                                                fVar87 = DAT_00d38b84;
                                              }
                                              *(float *)((long)param_1 + 0x23c) = fVar85;
                                              fVar85 = fVar85 - fVar87;
                                              goto LAB_03557524;
                                            }
LAB_03557558:
                                            fVar87 = fVar84;
                                            if (0.0 < fVar85) {
                                              fVar87 = fVar84 / (1.0 - fVar85);
                                            }
                                            fVar85 = fVar85 + (fVar84 - fVar82 * (local_1784 +
                                                                                 DAT_00d38cc4)) /
                                                              fVar87;
LAB_035574e8:
                                            if (fVar61 <= fVar85) {
                                              fVar85 = fVar61;
                                            }
                                            *(float *)((long)param_1 + 0x2d4) = fVar85;
                                            return;
                                          }
LAB_03552d44:
                                          lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          if (*(int *)(lVar26 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                            lVar26 = *(long *)puVar12;
                                          }
                                          lVar27 = *(long *)(lVar26 + 0xb8);
                                          iVar17 = *(int *)(lVar27 + 0xe78);
                                          if (((iVar17 != local_184c) && (iVar17 != -1)) &&
                                             (bVar11 == 1)) {
                                            if (*(int *)(lVar26 + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                              lVar27 = *(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                            }
                                            iVar20 = FUN_0358c15c(param_1,lVar27 + 0xe78,0);
                                            local_d8 = CONCAT44(local_d8._4_4_,iVar20);
                                            if ((param_1[0x6d] == 0) ||
                                               (lVar26 = *(long *)(param_1[0x6d] + 0x38),
                                               lVar26 == 0)) goto LAB_035574b8;
                                            uVar21 = *puVar2 - 1;
                                            if (*(uint *)(lVar26 + 0x18) <= uVar21)
                                            goto LAB_035575f4;
                                            local_184c = iVar17;
                                            if (*(short *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x20
                                                          ) == 0xad) {
                                              bVar10 = false;
                                              local_b8 = CONCAT44(0x2d,uVar21);
                                              local_d8 = CONCAT44(local_d8._4_4_,iVar20 + -1);
                                              *puVar2 = uVar21;
                                              goto LAB_03550bd0;
                                            }
                                          }
                                          if (fVar64 <= fVar54) {
switchD_03552ef4_caseD_0:
                                            uVar68 = uVar25;
                                            FUN_0358cbd4(fVar87,uVar25,fVar60,
                                                         *(undefined4 *)((long)param_1 + 0x2fc),
                                                         local_17b0,fVar57,local_1784,fVar55,param_1
                                                         ,local_d8 & 0xffffffff,local_ac,&local_a8,0
                                                        );
                                          }
                                          else {
                                            if (*(int *)((long)param_1 + 0x2e4) == -1) {
                                              *(undefined4 *)((long)param_1 + 0x2e4) =
                                                   *(undefined4 *)((long)param_1 + 0x494);
                                            }
                                            fVar61 = fVar54;
                                            if ((char)param_1[0x47] != '\0') {
                                              fVar61 = *(float *)(param_1 + 0x59);
                                              if ((fVar61 < *(float *)((long)param_1 + 700)) &&
                                                 (*(int *)((long)param_1 + 0x244) <
                                                  (int)param_1[0x49])) {
                                                fVar87 = *(float *)((long)param_1 + 700) +
                                                         ((fVar77 - fVar64) /
                                                         (float)((int)param_1[0x95] + 1)) / fVar87;
                                                if (fVar87 <= fVar61) {
                                                  fVar87 = fVar61;
                                                }
LAB_03554b48:
                                                *(float *)((long)param_1 + 700) = fVar87;
                                                return;
                                              }
                                              fVar85 = *(float *)((long)param_1 + 0x2d4);
                                              fVar61 = *(float *)(param_1 + 0x5a) / 100.0;
                                              if ((fVar85 < fVar61) &&
                                                 (*(int *)((long)param_1 + 0x244) <
                                                  (int)param_1[0x49])) goto LAB_03557558;
                                              fVar85 = *(float *)((long)param_1 + 0x1e4);
                                              uVar68 = (ulong)(uint)fVar85;
                                              fVar61 = *(float *)(param_1 + 0x4a);
                                              if ((fVar61 < fVar85) &&
                                                 (*(int *)((long)param_1 + 0x244) <
                                                  (int)param_1[0x49])) goto LAB_03557594;
                                            }
                                            switch((int)param_1[0x5c]) {
                                            case 0:
                                            case 2:
                                            case 4:
                                              goto switchD_03552ef4_caseD_0;
                                            case 1:
                                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                                thunk_FUN_01a58e78();
                                                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              }
                                              lVar27 = *(long *)(lVar26 + 0xb8);
                                              lVar26 = *(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                              if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                                lVar26 = FUN_01a46ff8(lVar26);
                                              }
                                              piVar31 = (int *)thunk_FUN_01a59484(lVar27 + 0x11f0,
                                                                                  *(long *)(*(long *
                                                  )(*(long *)(lVar26 + 0xc0) + 8) + 0x80) + 0xa0);
                                              if (*piVar31 == 0) {
                                                bVar10 = false;
                                                goto LAB_03554580;
                                              }
                                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                                thunk_FUN_01a58e78();
                                                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              }
                                              FUN_0209b778(*(long *)(lVar26 + 0xb8) + 0x11f0,
                                                           &local_fe0,
                                                           *(undefined8 *)
                                                            OVRPlugin_OVRP_1_0_0_TypeInfo);
                                              memcpy(auStack_878,&local_fe0,0x378);
                                              iVar17 = FUN_0358c15c(param_1,auStack_878,0);
                                              bVar10 = false;
                                              goto LAB_035529e8;
                                            case 3:
                                              lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              if (*(int *)(lVar26 + 0xe0) == 0) {
                                                thunk_FUN_01a58e78();
                                                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              }
                                              uVar18 = FUN_0358c15c(param_1,*(long *)(lVar26 + 0xb8)
                                                                            + 0xb00,0);
                                              bVar10 = false;
                                              goto LAB_0355255c;
                                            case 5:
                                              *(undefined1 *)((long)param_1 + 0x33c) = 1;
                                              uVar68 = uVar25;
                                              FUN_0358cbd4(fVar87,uVar25,fVar60,
                                                           *(undefined4 *)((long)param_1 + 0x2fc),
                                                           local_17b0,fVar57,local_1784,fVar55,
                                                           param_1,local_d8 & 0xffffffff,local_ac,
                                                           &local_a8,0);
                                              *(undefined4 *)(param_1 + 0x9a) = 0;
                                              *(undefined4 *)(param_1 + 0x9b) = 0;
                                              *(undefined8 *)((long)param_1 + 0x4b4) = 0;
                                              *(int *)(param_1 + 0x96) = (int)param_1[0x96] + 1;
                                              break;
                                            case 6:
                                              lVar26 = param_1[0x5d];
                                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                                thunk_FUN_01a58e78();
                                              }
                                              uVar29 = FUN_036cee6c(lVar26,0,0);
                                              if ((uVar29 & 1) != 0) {
                                                plVar51 = (long *)param_1[0x5d];
                                                uVar70 = (**(code **)(*param_1 + 0x518))
                                                                   (param_1,*(undefined8 *)
                                                                             (*param_1 + 0x520));
                                                if (plVar51 == (long *)0x0) goto LAB_035574b8;
                                                (**(code **)(*plVar51 + 0x528))
                                                          (plVar51,uVar70,
                                                           *(undefined8 *)(*plVar51 + 0x530));
                                                lVar26 = param_1[0x5d];
                                                if (lVar26 == 0) goto LAB_035574b8;
                                                *(int *)(lVar26 + 0x400) = (int)param_1[0x80];
                                                FUN_0357ee30(lVar26,*(undefined4 *)
                                                                     ((long)param_1 + 0x494),0);
                                                plVar51 = (long *)param_1[0x5d];
                                                if (plVar51 == (long *)0x0) goto LAB_035574b8;
                                                (**(code **)(*plVar51 + 0x7a8))
                                                          (plVar51,0,0,
                                                           *(undefined8 *)(*plVar51 + 0x7b0));
                                                *(undefined1 *)(param_1 + 0x5f) = 1;
                                              }
                                              bVar10 = false;
                                              goto LAB_03552b00;
                                            default:
                                              bVar10 = false;
                                              goto LAB_03552f54;
                                            }
                                          }
                                          bVar11 = 1;
                                          bVar10 = false;
                                          bVar9 = true;
                                        }
                                      }
                                      else {
                                        bVar10 = false;
                                        local_b8 = CONCAT44(0x2d,uVar47);
                                        local_d8 = CONCAT44(local_d8._4_4_,iVar17 + -1);
                                        *puVar2 = uVar47;
                                      }
                                    }
                                    goto LAB_03550bd0;
                                  }
LAB_03552f54:
                                  if (uStack_a4 != 0xad) {
                                    if (uStack_a4 == 9) {
                                      lVar26 = *plVar4;
                                      if ((lVar26 != 0) &&
                                         (lVar27 = *(long *)(lVar26 + 0x38), lVar27 != 0)) {
                                        uVar21 = *puVar2;
                                        if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                        *(undefined1 *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x194)
                                             = 0;
                                        *(uint *)((long)param_1 + 0x4a4) = uVar21;
                                        lVar27 = *(long *)(lVar26 + 0x50);
                                        if (lVar27 != 0) {
                                          if (*(uint *)(param_1 + 0x95) < *(uint *)(lVar27 + 0x18))
                                          {
                                            lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x95) *
                                                              0x5c;
                                            *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
                                            goto LAB_03552fcc;
                                          }
                                          goto LAB_035575f4;
                                        }
                                      }
                                    }
                                    else {
                                      lVar26 = 0x4ec;
                                      if (*(char *)((long)param_1 + 0x1d4) != '\0') {
                                        lVar26 = 0x144;
                                      }
                                      if (*(int *)((long)param_1 + 0x644) == 1) {
                                        (**(code **)(*param_1 + 0x898))
                                                  (fVar61,fVar65,param_1,
                                                   *(undefined4 *)((long)param_1 + lVar26),
                                                   *(undefined8 *)(*param_1 + 0x8a0));
                                      }
                                      else if (*(int *)((long)param_1 + 0x644) == 0) {
                                        (**(code **)(*param_1 + 0x888))
                                                  (local_1724,param_1,
                                                   *(undefined4 *)((long)param_1 + lVar26),
                                                   *(undefined8 *)(*param_1 + 0x890));
                                      }
                                      if (bVar9) {
                                        *(uint *)((long)param_1 + 0x49c) = *puVar2;
                                      }
                                      *(uint *)((long)param_1 + 0x4a4) = *puVar2;
                                      *(int *)((long)param_1 + 0x4ac) =
                                           *(int *)((long)param_1 + 0x4ac) + 1;
                                      if ((param_1[0x6d] != 0) &&
                                         (lVar26 = *(long *)(param_1[0x6d] + 0x50), lVar26 != 0)) {
                                        if (*(uint *)(param_1 + 0x95) < *(uint *)(lVar26 + 0x18)) {
                                          lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x95) *
                                                            0x5c;
                                          bVar9 = false;
                                          *(float *)(lVar26 + 0x60) = fVar62;
                                          *(float *)(lVar26 + 100) = fVar83;
                                          goto LAB_035530c4;
                                        }
                                        goto LAB_035575f4;
                                      }
                                    }
                                    goto LAB_035574b8;
                                  }
                                  if ((*plVar4 == 0) ||
                                     (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *(undefined1 *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x194) = 0;
                                }
                                else {
                                  if (((uStack_a4 & 0xfffffffe) == 10) && ((int)param_1[0x5c] == 6))
                                  {
                                    fVar84 = (float)uVar68;
                                    fVar82 = 0.0;
                                    if ((0.0 < fVar84) &&
                                       (fVar82 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0')) {
                                      fVar82 = *(float *)(param_1 + 0x99) -
                                               *(float *)(param_1 + 0x9a);
                                    }
                                    uVar68 = (ulong)(uint)fVar54;
                                    if (fVar54 < (*(float *)(param_1 + 0x97) -
                                                 (*(float *)((long)param_1 + 0x4cc) - fVar84)) +
                                                 fVar82) {
                                      if (*(int *)((long)param_1 + 0x2e4) == -1) {
                                        *(uint *)((long)param_1 + 0x2e4) = uVar42;
                                      }
                                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      uVar18 = FUN_0358c15c(param_1,*(long *)(lVar26 + 0xb8) + 0xb00
                                                            ,0);
                                      local_d8 = CONCAT44(local_d8._4_4_,uVar18);
                                      lVar26 = param_1[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar29 = FUN_036cee6c(lVar26,0,0);
                                      if ((uVar29 & 1) != 0) {
                                        plVar51 = (long *)param_1[0x5d];
                                        uVar70 = (**(code **)(*param_1 + 0x518))
                                                           (param_1,*(undefined8 *)
                                                                     (*param_1 + 0x520));
                                        if (plVar51 != (long *)0x0) {
                                          (**(code **)(*plVar51 + 0x528))
                                                    (plVar51,uVar70,
                                                     *(undefined8 *)(*plVar51 + 0x530));
                                          lVar26 = param_1[0x5d];
                                          if (lVar26 != 0) {
                                            *(int *)(lVar26 + 0x400) = (int)param_1[0x80];
                                            FUN_0357ee30(lVar26,*(undefined4 *)
                                                                 ((long)param_1 + 0x494),0);
                                            plVar51 = (long *)param_1[0x5d];
                                            if (plVar51 != (long *)0x0) {
                                              (**(code **)(*plVar51 + 0x7a8))
                                                        (plVar51,0,0,
                                                         *(undefined8 *)(*plVar51 + 0x7b0));
                                              *(undefined1 *)(param_1 + 0x5f) = 1;
                                              goto UnityEngine_AnimationClip__get_hasMotionCurves;
                                            }
                                          }
                                        }
                                        goto LAB_035574b8;
                                      }
                                      goto UnityEngine_AnimationClip__get_hasMotionCurves;
                                    }
                                  }
                                  if ((((uStack_a4 - 0x2007 < 0x23) &&
                                       ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x600000001U)
                                        != 0)) || (uStack_a4 - 10 < 2)) || (uStack_a4 == 0xa0)) {
LAB_03552b54:
                                    if (((uStack_a4 != 0xad) && (uStack_a4 != 0x200b)) &&
                                       (uStack_a4 != 0x2060)) {
                                      lVar26 = *plVar4;
                                      if ((lVar26 == 0) ||
                                         (lVar27 = *(long *)(lVar26 + 0x50), lVar27 == 0))
                                      goto LAB_035574b8;
                                      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x95))
                                      goto LAB_035575f4;
                                      lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                      *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
                                      *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar25 = FUN_026b97f8(uVar21,0);
                                    if ((uVar25 & 1) != 0) goto LAB_03552b54;
                                  }
                                  if (uStack_a4 == 0xa0) {
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x50), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x95))
                                    goto LAB_035575f4;
                                    lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
LAB_03552fcc:
                                    *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
                                  }
                                }
LAB_035530c4:
                                if (((int)param_1[0x5c] == 1) && ((uStack_a4 == 0x2d || (!bVar16))))
                                {
                                  if (param_1[0xcb] == 0) goto LAB_035574b8;
                                  fVar82 = *(float *)(param_1 + 0x3d);
                                  iVar17 = FUN_03776950(param_1[0xcb] + 0x50,0);
                                  if (param_1[0xcb] == 0) goto LAB_035574b8;
                                  fVar62 = (float)FUN_03776960(param_1[0xcb] + 0x50,0);
                                  lVar26 = param_1[0xca];
                                  fVar84 = fVar71;
                                  if (*(char *)((long)param_1 + 0x305) != '\0') {
                                    fVar84 = 1.0;
                                  }
                                  if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0))
                                  goto LAB_035574b8;
                                  fVar61 = *(float *)((long)param_1 + 0x404);
                                  fVar64 = *(float *)(lVar26 + 0x2c);
                                  fVar83 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
                                  fVar85 = *(float *)(param_1 + 0x6a);
                                  fVar83 = fVar61 * (fVar82 / (float)iVar17) * fVar62 * fVar84 *
                                           fVar64 * fVar83;
                                  fVar82 = *(float *)((long)param_1 + 0x354);
                                  if ((uStack_a4 == 10) &&
                                     (*(int *)((long)param_1 + 0x494) != (int)param_1[0x93])) {
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0))
                                    goto LAB_035574b8;
                                    uVar21 = *(int *)((long)param_1 + 0x494) - 1;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_035575f4;
                                    if (param_1[0xcb] == 0) goto LAB_035574b8;
                                    fVar84 = *(float *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x60);
                                    iVar17 = FUN_03776950(param_1[0xcb] + 0x50,0);
                                    if (param_1[0xcb] == 0) goto LAB_035574b8;
                                    fVar61 = (float)FUN_03776960(param_1[0xcb] + 0x50,0);
                                    lVar26 = param_1[0xca];
                                    fVar62 = fVar71;
                                    if (*(char *)((long)param_1 + 0x305) != '\0') {
                                      fVar62 = 1.0;
                                    }
                                    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0))
                                    goto LAB_035574b8;
                                    fVar64 = *(float *)((long)param_1 + 0x404);
                                    fVar65 = *(float *)(lVar26 + 0x2c);
                                    fVar83 = (float)FUN_03776ea8(*(long *)(lVar26 + 0x20),0);
                                    if ((*plVar4 == 0) ||
                                       (lVar26 = *(long *)(*plVar4 + 0x50), lVar26 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x95))
                                    goto LAB_035575f4;
                                    lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                    fVar85 = *(float *)(lVar26 + 0x60);
                                    fVar82 = *(float *)(lVar26 + 100);
                                    fVar83 = fVar64 * (fVar84 / (float)iVar17) * fVar61 * fVar62 *
                                             fVar65 * fVar83;
                                  }
                                  fVar61 = *(float *)(param_1 + 0x9b);
                                  fVar84 = 0.0;
                                  fVar62 = 0.0;
                                  if ((0.0 < fVar61) &&
                                     (fVar62 = 0.0, *(char *)((long)param_1 + 0x2c4) == '\0')) {
                                    fVar62 = *(float *)(param_1 + 0x99) - *(float *)(param_1 + 0x9a)
                                    ;
                                  }
                                  fVar65 = *(float *)(param_1 + 0x97);
                                  fVar80 = *(float *)((long)param_1 + 0x4cc);
                                  fVar64 = *(float *)(param_1 + 200);
                                  if ((char)param_1[0x1e] == '\0') {
                                    if ((param_1[0xca] == 0) ||
                                       (lVar26 = *(long *)(param_1[0xca] + 0x20), lVar26 == 0))
                                    goto LAB_035574b8;
                                    FUN_03776e6c(&local_fe0,lVar26,0);
                                    uStack_178 = uStack_fd8;
                                    local_180 = local_fe0;
                                    local_170 = (undefined4)local_fd0;
                                    fVar84 = (float)FUN_03776cb4(&local_180,0);
                                  }
                                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  fVar89 = *(float *)(param_1 + 0x6c);
                                  fVar82 = (fVar88 - fVar85) - fVar82;
                                  bVar15 = true;
                                  if ((fVar89 <= fVar82) && (bVar15 = false, !NAN(fVar89))) {
                                    bVar15 = fVar89 == -1.0;
                                  }
                                  if (!bVar15) {
                                    fVar82 = fVar89;
                                  }
                                  fVar85 = 1.0;
                                  if ((uVar43 & 0x18) != 0) {
                                    fVar85 = DAT_00d38acc;
                                  }
                                  if (((fVar65 - (fVar80 - fVar61)) + fVar62 < fVar54) &&
                                     (ABS(fVar64) +
                                      fVar83 * fVar84 * (1.0 - *(float *)((long)param_1 + 0x2d4)) <
                                      fVar85 * fVar82)) {
                                    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar26 = *(long *)puVar12;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0x788,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                    lVar26 = *(long *)(*(long *)puVar12 + 0xb8);
                                    memcpy(auStack_1358,(void *)(lVar26 + 0x788),0x378);
                                    FUN_0209b210(lVar26 + 0x11f0,auStack_1358,
                                                 *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                  }
                                }
                                lVar26 = *plVar4;
                                if (lVar26 == 0) goto LAB_035574b8;
                                lVar27 = *(long *)(lVar26 + 0x38);
                                uVar25 = (ulong)(uint)fVar56;
                                if (lVar27 == 0) goto LAB_035574b8;
                                if (*(uint *)(lVar27 + 0x18) <= *puVar2) goto LAB_035575f4;
                                uVar21 = *(uint *)(param_1 + 0x95);
                                lVar27 = lVar27 + (long)(int)*puVar2 * 0x178;
                                *(uint *)(lVar27 + 100) = uVar21;
                                *(int *)(lVar27 + 0x68) = (int)param_1[0x96];
                                if ((bVar16) ||
                                   ((uStack_a4 < 0xe &&
                                    ((1 << (ulong)(uStack_a4 & 0x1f) & 0x2c00U) != 0)))) {
                                  lVar26 = *(long *)(lVar26 + 0x50);
                                  if (lVar26 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_035575f4;
                                  if (*(int *)(lVar26 + (long)(int)uVar21 * 0x5c + 0x24) == 1)
                                  goto LAB_0355346c;
                                }
                                else {
                                  lVar26 = *(long *)(lVar26 + 0x50);
                                  if (lVar26 == 0) goto LAB_035574b8;
LAB_0355346c:
                                  if (*(uint *)(lVar26 + 0x18) <= uVar21) goto LAB_035575f4;
                                  *(int *)(lVar26 + (long)(int)uVar21 * 0x5c + 0x68) =
                                       (int)param_1[0x4f];
                                }
                                if (uStack_a4 == 9) {
                                  if (*plVar52 == 0) goto LAB_035574b8;
                                  fVar82 = (float)FUN_03776a48(*plVar52 + 0x50,0);
                                  if (*plVar52 == 0) goto LAB_035574b8;
                                  fVar62 = *(float *)(param_1 + 200);
                                  fVar84 = (float)NEON_ucvtf((uint)*(byte *)(*plVar52 + 0x1b9));
                                  fVar82 = fVar56 * fVar82 * fVar84;
                                  fVar84 = fVar82 * (float)(int)(fVar62 / fVar82);
                                  uVar68 = (ulong)(uint)fVar84;
                                  if (fVar84 <= fVar62) {
                                    fVar84 = fVar62 + fVar82;
                                  }
LAB_03553678:
                                  *(float *)(param_1 + 200) = fVar84;
                                }
                                else if (*(float *)(param_1 + 0x56) == 0.0) {
                                  if ((char)param_1[0x1e] == '\0') {
                                    if (*(char *)((long)param_1 + 0x474) == '\0') {
                                      fVar62 = 1.0;
                                    }
                                    else {
                                      fVar62 = (float)thunk_FUN_036bc400(lVar49,0);
                                    }
                                    fVar84 = *(float *)(param_1 + 200);
                                    fVar83 = (float)FUN_03776cb4(&local_f0,0);
                                    if (param_1[0x20] != 0) {
                                      fVar82 = 1.0 - *(float *)((long)param_1 + 0x2d4);
                                      fVar84 = fVar84 + fVar82 * (*(float *)((long)param_1 + 0x2ac)
                                                                 + fVar56 * (local_1758._4_4_ +
                                                                            fVar62 * fVar83) +
                                                                   fVar60 * (local_17b0 +
                                                                            fVar57 + *(float *)(
                                                  param_1[0x20] + 0x1ac)));
                                      *(float *)(param_1 + 200) = fVar84;
                                      goto joined_r0x035535c0;
                                    }
                                    goto LAB_035574b8;
                                  }
                                  if (*plVar52 == 0) goto LAB_035574b8;
                                  fVar84 = (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                           (*(float *)((long)param_1 + 0x2ac) +
                                           fVar56 * local_1758._4_4_ +
                                           fVar60 * (local_17b0 +
                                                    fVar57 + *(float *)(*plVar52 + 0x1ac)));
                                  uVar68 = (ulong)(uint)fVar84;
                                  fVar84 = *(float *)(param_1 + 200) - fVar84;
                                  *(float *)(param_1 + 200) = fVar84;
                                  if ((uStack_a4 == 0x200b) || (uVar19 != 0)) {
                                    fVar82 = fVar60 * *(float *)((long)param_1 + 0x2b4);
                                    uVar68 = (ulong)(uint)fVar82;
                                    fVar84 = fVar84 - fVar82;
                                    goto LAB_03553678;
                                  }
                                }
                                else {
                                  if (*plVar52 == 0) goto LAB_035574b8;
                                  fVar82 = *(float *)(param_1 + 200);
                                  fVar84 = fVar82 + (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                                    (*(float *)((long)param_1 + 0x2ac) +
                                                    (*(float *)(param_1 + 0x56) - fVar63) +
                                                    fVar60 * (fVar57 + *(float *)(*plVar52 + 0x1ac))
                                                    );
                                  *(float *)(param_1 + 200) = fVar84;
joined_r0x035535c0:
                                  if ((uStack_a4 == 0x200b) ||
                                     (uVar68 = (ulong)(uint)fVar82, uVar19 != 0)) {
                                    fVar82 = fVar60 * *(float *)((long)param_1 + 0x2b4);
                                    uVar68 = (ulong)(uint)fVar82;
                                    fVar84 = fVar84 + fVar82;
                                    goto LAB_03553678;
                                  }
                                }
                                lVar26 = *plVar4;
                                if ((lVar26 == 0) ||
                                   (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0))
                                goto LAB_035574b8;
                                uVar21 = *puVar2;
                                uVar42 = (uint)*(undefined8 *)(lVar27 + 0x18);
                                if (uVar42 <= uVar21) goto LAB_035575f4;
                                *(float *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x144) = fVar84;
                                uVar43 = uStack_a4;
                                if ((int)uStack_a4 < 0xd) {
                                  if ((uStack_a4 - 10 < 2) || (uStack_a4 == 3)) goto LAB_0355371c;
LAB_03553700:
                                  if (((bool)(bVar16 & uStack_a4 == 0x2d)) || (uVar21 == uVar24))
                                  goto LAB_0355371c;
                                }
                                else {
                                  if (1 < uStack_a4 - 0x2028) {
                                    if (uStack_a4 != 0xd) goto LAB_03553700;
                                    uVar68 = 0;
                                    *(float *)(param_1 + 200) =
                                         *(float *)((long)param_1 + 0x40c) + 0.0;
                                    if (uVar21 != uVar24) goto LAB_03553c8c;
                                  }
LAB_0355371c:
                                  if (0.0 < *(float *)(param_1 + 0x9b)) {
                                    fVar82 = *(float *)(param_1 + 0x99);
                                    fVar84 = *(float *)(param_1 + 0x9a);
                                    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    fVar82 = fVar82 - fVar84;
                                    if (((fVar74 < ABS(fVar82)) &&
                                        (*(char *)((long)param_1 + 0x2c4) == '\0')) &&
                                       (*(char *)((long)param_1 + 0x33c) == '\0')) {
                                      FUN_0358c860(fVar82,param_1,(int)param_1[0x93],
                                                   *(undefined4 *)((long)param_1 + 0x494),0);
                                      *(float *)((long)param_1 + 0x4c4) =
                                           *(float *)((long)param_1 + 0x4c4) - fVar82;
                                      *(float *)(param_1 + 0x9b) =
                                           fVar82 + *(float *)(param_1 + 0x9b);
                                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      lVar27 = *(long *)(lVar26 + 0xb8);
                                      if (*(int *)(lVar27 + 0x7ac) == (int)param_1[0x95]) {
                                        if (*(int *)(lVar26 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar27 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo
                                                            + 0xb8);
                                        }
                                        FUN_0209b778(lVar27 + 0x11f0,&local_fe0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x788),&local_fe0
                                               ,0x378);
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (*(long *)(lVar26 + 0xb8) + 0x818,0);
                                        lVar26 = *(long *)(*(long *)puVar12 + 0xb8);
                                        *(float *)(lVar26 + 0x7bc) =
                                             fVar82 + *(float *)(lVar26 + 0x7bc);
                                        *(float *)(lVar26 + 0x800) =
                                             fVar82 + *(float *)(lVar26 + 0x800);
                                        memcpy(auStack_16d0,(void *)(lVar26 + 0x788),0x378);
                                        FUN_0209b210(lVar26 + 0x11f0,auStack_16d0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                      }
                                    }
                                  }
                                  fVar62 = *(float *)(param_1 + 0x9b);
                                  *(undefined1 *)((long)param_1 + 0x33c) = 0;
                                  fVar84 = *(float *)((long)param_1 + 0x4cc) - fVar62;
                                  fVar82 = *(float *)((long)param_1 + 0x4c4);
                                  if (fVar84 <= *(float *)((long)param_1 + 0x4c4)) {
                                    fVar82 = fVar84;
                                  }
                                  *(float *)((long)param_1 + 0x4c4) = fVar82;
                                  fVar83 = *(float *)(param_1 + 0x99);
                                  if (local_ac[0] == '\0') {
                                    local_a8 = fVar82;
                                  }
                                  if ((*(char *)((long)param_1 + 0x334) != '\0') &&
                                     (((int)param_1[0x65] <= *(int *)((long)param_1 + 0x494) ||
                                      ((int)param_1[0x66] <= (int)param_1[0x95])))) {
                                    local_ac[0] = '\x01';
                                  }
                                  lVar26 = *plVar4;
                                  if ((lVar26 == 0) ||
                                     (lVar27 = *(long *)(lVar26 + 0x50), lVar27 == 0))
                                  goto LAB_035574b8;
                                  uVar21 = *(uint *)(param_1 + 0x95);
                                  if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_035575f4;
                                  lVar53 = param_1[0x93];
                                  lVar30 = lVar27 + (long)(int)uVar21 * 0x5c;
                                  *(int *)(lVar30 + 0x34) = (int)lVar53;
                                  uVar42 = *(uint *)(param_1 + 0x93);
                                  if ((int)lVar53 <= (int)*(uint *)((long)param_1 + 0x49c)) {
                                    uVar42 = *(uint *)((long)param_1 + 0x49c);
                                  }
                                  *(uint *)((long)param_1 + 0x49c) = uVar42;
                                  *(uint *)(lVar30 + 0x38) = uVar42;
                                  *(undefined4 *)(param_1 + 0x94) =
                                       *(undefined4 *)((long)param_1 + 0x494);
                                  *(undefined4 *)(lVar30 + 0x3c) =
                                       *(undefined4 *)((long)param_1 + 0x494);
                                  iVar17 = *(int *)((long)param_1 + 0x49c);
                                  if ((int)uVar42 <= *(int *)((long)param_1 + 0x4a4)) {
                                    iVar17 = *(int *)((long)param_1 + 0x4a4);
                                  }
                                  local_d8 = CONCAT44(iVar17,(uint)local_d8);
                                  *(int *)((long)param_1 + 0x4a4) = iVar17;
                                  *(int *)(lVar30 + 0x40) = iVar17;
                                  *(int *)(lVar30 + 0x24) =
                                       (*(int *)(lVar30 + 0x3c) - *(int *)(lVar30 + 0x34)) + 1;
                                  *(undefined4 *)(lVar30 + 0x28) =
                                       *(undefined4 *)((long)param_1 + 0x4ac);
                                  lVar26 = *(long *)(lVar26 + 0x38);
                                  if (lVar26 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_035575f4;
                                  uVar18 = *(undefined4 *)
                                            (lVar26 + (long)(int)uVar42 * 0x178 + 0x11c);
                                  lVar27 = lVar27 + (long)(int)uVar21 * 0x5c;
                                  *(float *)(lVar27 + 0x70) = fVar84;
                                  *(undefined4 *)(lVar27 + 0x6c) = uVar18;
                                  lVar26 = *plVar4;
                                  if ((lVar26 == 0) ||
                                     (lVar27 = *(long *)(lVar26 + 0x50), lVar27 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(param_1 + 0x95))
                                  goto LAB_035575f4;
                                  lVar26 = *(long *)(lVar26 + 0x38);
                                  if (lVar26 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)param_1 + 0x4a4))
                                  goto LAB_035575f4;
                                  fVar83 = fVar83 - fVar62;
                                  uVar68 = (ulong)(uint)fVar83;
                                  lVar27 = lVar27 + (long)(int)*(uint *)(param_1 + 0x95) * 0x5c;
                                  *(undefined4 *)(lVar27 + 0x74) =
                                       *(undefined4 *)
                                        (lVar26 + (long)(int)*(uint *)((long)param_1 + 0x4a4) *
                                                  0x178 + 0x128);
                                  *(float *)(lVar27 + 0x78) = fVar83;
                                  lVar26 = *plVar4;
                                  if ((lVar26 == 0) ||
                                     (lVar53 = *(long *)(lVar26 + 0x50), lVar53 == 0))
                                  goto LAB_035574b8;
                                  lVar30 = (long)(int)*(uint *)(param_1 + 0x95);
                                  if (*(uint *)(lVar53 + 0x18) <= *(uint *)(param_1 + 0x95))
                                  goto LAB_035575f4;
                                  lVar27 = lVar53 + lVar30 * 0x5c;
                                  *(float *)(lVar27 + 0x44) =
                                       *(float *)(lVar27 + 0x74) - fVar56 * local_1724;
                                  *(float *)(lVar27 + 0x5c) = local_1784;
                                  if (*(int *)(lVar27 + 0x24) == 1) {
                                    *(int *)(lVar53 + lVar30 * 0x5c + 0x68) = (int)param_1[0x4f];
                                  }
                                  if ((*plVar52 == 0) ||
                                     (lVar27 = *(long *)(lVar26 + 0x38), lVar27 == 0))
                                  goto LAB_035574b8;
                                  lVar45 = (long)(int)*(uint *)((long)param_1 + 0x4a4);
                                  uVar42 = (uint)*(undefined8 *)(lVar27 + 0x18);
                                  if (uVar42 <= *(uint *)((long)param_1 + 0x4a4)) goto LAB_035575f4;
                                  if ((*(char *)(lVar27 + lVar45 * 0x178 + 0x194) == '\0') &&
                                     (lVar45 = (long)(int)*(uint *)(param_1 + 0x94),
                                     uVar42 <= *(uint *)(param_1 + 0x94))) goto LAB_035575f4;
                                  lVar53 = lVar53 + lVar30 * 0x5c;
                                  fVar56 = (1.0 - *(float *)((long)param_1 + 0x2d4)) *
                                           (fVar60 * (local_17b0 +
                                                     fVar57 + *(float *)(*plVar52 + 0x1ac)) -
                                           *(float *)((long)param_1 + 0x2ac));
                                  fVar82 = -fVar56;
                                  if ((char)param_1[0x1e] != '\0') {
                                    fVar82 = fVar56;
                                  }
                                  *(float *)(lVar53 + 0x58) =
                                       *(float *)(lVar27 + lVar45 * 0x178 + 0x144) + fVar82;
                                  *(float *)(lVar53 + 0x50) = 0.0 - *(float *)(param_1 + 0x9b);
                                  *(float *)(lVar53 + 0x54) = fVar84;
                                  *(float *)(lVar53 + 0x48) = fVar87 * fVar55 + (fVar83 - fVar84);
                                  *(float *)(lVar53 + 0x4c) = fVar83;
                                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  uVar43 = uStack_a4;
                                  if ((int)uStack_a4 < 0x2d) {
                                    if (uStack_a4 - 10 < 2) {
LAB_03553b60:
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)puVar12;
                                      }
                                      FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0x410,
                                                   local_d8 & 0xffffffff,
                                                   *(undefined4 *)((long)param_1 + 0x494),0);
                                      lVar26 = param_1[0x6d];
                                      *(undefined4 *)((long)param_1 + 0x4ac) = 0;
                                      iVar17 = (int)param_1[0x95] + 1;
                                      *(int *)(param_1 + 0x95) = iVar17;
                                      *(int *)(param_1 + 0x93) = *(int *)((long)param_1 + 0x494) + 1
                                      ;
                                      if ((lVar26 != 0) && (*(long *)(lVar26 + 0x50) != 0)) {
                                        if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar17) {
                                          FUN_0358ca18(param_1,iVar17,0);
                                          lVar26 = param_1[0x6d];
                                          if (lVar26 == 0) goto LAB_035574b8;
                                        }
                                        lVar26 = *(long *)(lVar26 + 0x38);
                                        if (lVar26 != 0) {
                                          uVar19 = *puVar2;
                                          if (uVar19 < *(uint *)(lVar26 + 0x18)) {
                                            fVar82 = *(float *)(lVar26 + (long)(int)uVar19 * 0x178 +
                                                               0x154);
                                            if (*(float *)(param_1 + 0x58) == DAT_00d38ba4) {
                                              if ((uStack_a4 == 0x2029) ||
                                                 (fVar56 = 0.0, uStack_a4 == 10)) {
                                                fVar56 = *(float *)((long)param_1 + 0x2cc);
                                              }
                                              uVar34 = 0;
                                              fVar56 = fVar82 + (0.0 - *(float *)((long)param_1 +
                                                                                 0x4cc)) +
                                                       fVar87 * (fVar55 + *(float *)((long)param_1 +
                                                                                    700)) +
                                                       fVar60 * (*(float *)(param_1 + 0x57) + fVar56
                                                                ) + *(float *)(param_1 + 0x9b);
                                            }
                                            else {
                                              if ((uStack_a4 == 0x2029) ||
                                                 (fVar56 = 0.0, uStack_a4 == 10)) {
                                                fVar56 = *(float *)((long)param_1 + 0x2cc);
                                              }
                                              uVar34 = 1;
                                              fVar56 = *(float *)(param_1 + 0x9b) +
                                                       *(float *)(param_1 + 0x58) +
                                                       fVar60 * (*(float *)(param_1 + 0x57) + fVar56
                                                                );
                                            }
                                            *(float *)(param_1 + 0x9b) = fVar56;
                                            *(undefined1 *)((long)param_1 + 0x2c4) = uVar34;
                                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            if (*(int *)(lVar26 + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                              lVar26 = *(long *)puVar12;
                                              uVar19 = *puVar2;
                                            }
                                            lVar26 = *(long *)(lVar26 + 0xb8);
                                            uVar70 = *(undefined8 *)(lVar26 + 0x15a8);
                                            *(float *)(param_1 + 0x9a) = fVar82;
                                            uVar68 = NEON_rev64(uVar70,4);
                                            param_1[0x99] = uVar68;
                                            *(float *)(param_1 + 200) =
                                                 *(float *)(param_1 + 0x81) + 0.0 +
                                                 *(float *)((long)param_1 + 0x40c);
                                            FUN_0358c4f0(param_1,lVar26 + 0x98,local_d8 & 0xffffffff
                                                         ,uVar19,0);
                                            FUN_0358c4f0(param_1,*(long *)(*(long *)puVar12 + 0xb8)
                                                                 + 0xb00,local_d8 & 0xffffffff,
                                                         *(undefined4 *)((long)param_1 + 0x494),0);
                                            *(int *)((long)param_1 + 0x494) =
                                                 *(int *)((long)param_1 + 0x494) + 1;
                                            bVar9 = true;
                                            bVar11 = 1;
                                            goto LAB_03550bd0;
                                          }
                                          goto LAB_035575f4;
                                        }
                                      }
                                      goto LAB_035574b8;
                                    }
                                    if (uStack_a4 == 3) {
                                      if (param_1[0x8f] == 0) goto LAB_035574b8;
                                      local_d8 = CONCAT44(iVar17,(int)*(undefined8 *)
                                                                       (param_1[0x8f] + 0x18));
                                      uVar43 = 3;
                                    }
                                  }
                                  else if ((uStack_a4 - 0x2028 < 2) || (uStack_a4 == 0x2d))
                                  goto LAB_03553b60;
                                }
LAB_03553c8c:
                                uVar21 = *puVar2;
                                if (uVar42 <= uVar21) goto LAB_035575f4;
                                if (*(char *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x194) != '\0') {
                                  lVar27 = lVar27 + (long)(int)uVar21 * 0x178;
                                  uVar29 = *(ulong *)(lVar27 + 0x11c);
                                  uVar68 = *(ulong *)((long)param_1 + 0x4dc);
                                  *(ulong *)((long)param_1 + 0x4dc) =
                                       uVar68 ^ (uVar68 ^ uVar29) &
                                                ~CONCAT44(-(uint)((float)(uVar68 >> 0x20) <
                                                                 (float)(uVar29 >> 0x20)),
                                                          -(uint)((float)uVar68 < (float)uVar29));
                                  uVar29 = *(ulong *)((long)param_1 + 0x4e4);
                                  uVar68 = *(ulong *)(lVar27 + 0x128);
                                  *(ulong *)((long)param_1 + 0x4e4) =
                                       uVar29 ^ (uVar29 ^ uVar68) &
                                                ~CONCAT44(-(uint)((float)(uVar68 >> 0x20) <
                                                                 (float)(uVar29 >> 0x20)),
                                                          -(uint)((float)uVar68 < (float)uVar29));
                                }
                                if (((int)param_1[0x5c] == 5) &&
                                   ((0xd < uVar43 || ((1 << (ulong)(uVar43 & 0x1f) & 0x2c00U) == 0))
                                   )) {
                                  lVar27 = *(long *)(lVar26 + 0x58);
                                  if (lVar27 == 0) goto LAB_035574b8;
                                  iVar17 = (int)param_1[0x96] + 1;
                                  if (*(int *)(lVar27 + 0x18) < iVar17) {
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0
                                       ) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_01ff02b8((long *)(lVar26 + 0x58),iVar17,1,
                                                 *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                                    lVar26 = *plVar4;
                                    if (lVar26 == 0) goto LAB_035574b8;
                                  }
                                  lVar27 = *(long *)(lVar26 + 0x58);
                                  if (lVar27 == 0) goto LAB_035574b8;
                                  uVar43 = *(uint *)(param_1 + 0x96);
                                  lVar53 = (long)(int)uVar43;
                                  uVar42 = *(uint *)(lVar27 + 0x18);
                                  if (uVar42 <= uVar43) goto LAB_035575f4;
                                  lVar30 = lVar27 + lVar53 * 0x14;
                                  fVar56 = *(float *)(lVar30 + 0x30);
                                  uVar68 = (ulong)(uint)fVar56;
                                  *(undefined4 *)(lVar30 + 0x28) =
                                       *(undefined4 *)((long)param_1 + 0x4b4);
                                  fVar82 = *(float *)((long)param_1 + 0x4c4);
                                  if (fVar56 <= *(float *)((long)param_1 + 0x4c4)) {
                                    fVar82 = fVar56;
                                  }
                                  *(float *)(lVar30 + 0x30) = fVar82;
                                  uVar21 = *(uint *)((long)param_1 + 0x494);
                                  if (uVar21 == 0 && uVar43 == 0) {
                                    *(uint *)(lVar27 + (ulong)uVar43 * 0x14 + 0x20) = uVar21;
                                  }
                                  else {
                                    uVar47 = uVar21 - 1;
                                    if (0 < (int)uVar21) {
                                      lVar26 = *(long *)(lVar26 + 0x38);
                                      if (lVar26 == 0) goto LAB_035574b8;
                                      if (*(uint *)(lVar26 + 0x18) <= uVar47) goto LAB_035575f4;
                                      if (uVar43 != *(uint *)(lVar26 + (ulong)uVar47 * 0x178 + 0x68)
                                         ) {
                                        if (uVar43 - 1 < uVar42) {
                                          *(uint *)(lVar27 + 0x20 + (long)(int)(uVar43 - 1) * 0x14 +
                                                   4) = uVar47;
                                          *(uint *)(lVar27 + 0x20 + lVar53 * 0x14) = uVar21;
                                          goto LAB_03553d10;
                                        }
                                        goto LAB_035575f4;
                                      }
                                    }
                                    if (uVar21 == uVar24) {
                                      *(uint *)(lVar27 + lVar53 * 0x14 + 0x24) = uVar24;
                                      uVar21 = uVar24;
                                    }
                                  }
                                }
LAB_03553d10:
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (((char)param_1[0x5b] == '\0') &&
                                   ((6 < *(uint *)(param_1 + 0x5c) ||
                                    ((1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f) & 0x4aU) == 0))
                                   )) goto LAB_035542ac;
                                if ((uVar19 == 0) &&
                                   (((uStack_a4 != 0x2d && (uStack_a4 != 0x200b)) &&
                                    (uStack_a4 != 0xad)))) {
                                  if (*(char *)((long)param_1 + 0x2da) == '\0') {
LAB_03553ef0:
                                    if (((((0x2bfd < uStack_a4 - 0xac01) &&
                                          (0xfd < uStack_a4 - 0x1101)) &&
                                         (0x1d < uStack_a4 - 0xa961)) ||
                                        (uVar29 = FUN_03597a54(0), (uVar29 & 1) != 0)) &&
                                       ((((0xed < uStack_a4 - 0xff01 && (0x1d < uStack_a4 - 0xfe31))
                                         && (0x717d < uStack_a4 - 0x2e81)) &&
                                        (0x1fd < uStack_a4 - 0xf901)))) goto LAB_03553f78;
                                    lVar26 = FUN_035978e8(0);
                                    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0))
                                    goto LAB_035574b8;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,uStack_a4);
                                    uVar21 = FUN_0219c130(*(long *)(lVar26 + 0x10),&local_fe0,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                    if ((int)uVar24 <= (int)*puVar2) {
                                      if ((uVar21 & 1) == 0) {
LAB_03554270:
                                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar26 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar26 = *(long *)puVar12;
                                        }
                                        FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0x98,
                                                     local_d8 & 0xffffffff,
                                                     *(undefined4 *)((long)param_1 + 0x494),0);
                                        goto LAB_035542a8;
                                      }
LAB_035541dc:
                                      if (uVar73 != uVar36 || ((bVar11 ^ 0xff) & 1) != 0)
                                      goto LAB_035542ac;
                                      if (uVar19 != 0)
                                      goto UnityEngine_Animator__get_bodyPositionInternal;
                                      goto LAB_0355422c;
                                    }
                                    lVar26 = FUN_035978e8(0);
                                    if (((lVar26 == 0) || (*plVar4 == 0)) ||
                                       (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar27 + 0x18) <= *puVar2 + 1) goto LAB_035575f4;
                                    if (*(long *)(lVar26 + 0x18) == 0) goto LAB_035574b8;
                                    local_fe0 = CONCAT44(local_fe0._4_4_,
                                                         (uint)*(ushort *)
                                                                (lVar27 + (long)(int)(*puVar2 + 1) *
                                                                          0x178 + 0x20));
                                    uVar29 = FUN_0219c130(*(long *)(lVar26 + 0x18),&local_fe0,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                    if ((uVar21 & 1) != 0) goto LAB_035541dc;
                                    if ((uVar29 & 1) == 0) goto LAB_03554270;
                                    if (bVar11 == 0) goto LAB_035542a8;
                                    if (uVar19 != 0) {
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      }
                                      FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0xe78,
                                                   local_d8 & 0xffffffff,
                                                   *(undefined4 *)((long)param_1 + 0x494),0);
                                    }
                                    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0x98,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                  }
                                  else {
                                    if (bVar11 == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
                                    if (!bVar10 && uStack_a4 == 0xad)
                                    goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
                                    puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar26 = *(long *)puVar12;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0x98,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                  }
                                  bVar11 = 1;
                                }
                                else if (*(char *)((long)param_1 + 0x2da) == '\x01') {
LAB_03553f78:
                                  if (bVar11 != 0) {
                                    if (uVar19 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
                                    puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar26 = *(long *)puVar12;
                                    }
                                    FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0xe78,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x494),0);
                                    goto LAB_0355422c;
                                  }
LAB_035542a8:
                                  bVar11 = 0;
                                }
                                else {
                                  if (((uStack_a4 - 0x2007 < 0x29) &&
                                      ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x10000000401U)
                                       != 0)) || ((uStack_a4 == 0xa0 || (uStack_a4 == 0x2060))))
                                  goto LAB_03553ef0;
                                  lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (*(int *)(lVar26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    uVar21 = *puVar2;
                                    lVar26 = *(long *)puVar12;
                                  }
                                  FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0x98,
                                               local_d8 & 0xffffffff,uVar21,0);
                                  bVar11 = 0;
                                  *(undefined4 *)(*(long *)(*(long *)puVar12 + 0xb8) + 0xe78) =
                                       0xffffffff;
                                }
LAB_035542ac:
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar26 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar26 = *(long *)puVar12;
                                }
                                FUN_0358c4f0(param_1,*(long *)(lVar26 + 0xb8) + 0xb00,
                                             local_d8 & 0xffffffff,
                                             *(undefined4 *)((long)param_1 + 0x494),0);
                                *(int *)((long)param_1 + 0x494) =
                                     *(int *)((long)param_1 + 0x494) + 1;
                              }
                            }
                            else {
                              *(undefined1 *)((long)param_1 + 0x431) = 1;
                              *(undefined4 *)((long)param_1 + 0x644) = 0;
                              uVar29 = FUN_03586568(param_1,param_1[0x8f],(uint)local_d8 + 1,
                                                    &local_f4,0);
                              if ((uVar29 & 1) == 0) goto LAB_035509d4;
                              local_d8 = CONCAT44(local_d8._4_4_,local_f4);
                              if (*(int *)((long)param_1 + 0x644) != 0) goto LAB_035509d4;
                            }
LAB_03550bd0:
                            uVar19 = (uint)local_d8 + 1;
                            local_d8 = CONCAT44(local_d8._4_4_,uVar19);
                            lVar26 = param_1[0x8f];
                            if (lVar26 == 0) goto LAB_035574b8;
                            goto LAB_0355087c;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_035574b8;
        }
      }
      (**(code **)(*param_1 + 0x918))(param_1,*(undefined8 *)(*param_1 + 0x920));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)((long)param_1 + 0x3ec) = 0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630(param_1,0);
      goto LAB_03550288;
    }
  }
  puVar12 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  uVar18 = FUN_036d3364(param_1,0);
  local_d8 = CONCAT44(uVar18,(uint)local_d8);
  uVar70 = FUN_0276793c((long)&local_d8 + 4,0);
  uVar70 = FUN_025b1328(*(undefined8 *)puVar12,uVar70,0);
  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar13);
  }
  FUN_036772fc(uVar70,0);
LAB_03550288:
  *(undefined1 *)((long)param_1 + 0x24c) = 1;
  return;
LAB_03554e78:
  uVar24 = uVar19 - 1;
  if (*(uint *)(lVar49 + 0x18) <= uVar24) goto LAB_035575f4;
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x50), lVar27 == 0)) goto LAB_035574b8;
  lVar30 = (long)(int)uVar24;
  lVar53 = lVar49 + lVar30 * 0x178;
  uVar36 = *(uint *)(lVar53 + 100);
  if (*(uint *)(lVar27 + 0x18) <= uVar36) goto LAB_035575f4;
  lVar48 = (long)(int)uVar36;
  lVar27 = lVar27 + lVar48 * 0x5c;
  lVar45 = *(long *)(lVar53 + 0x38);
  uVar7 = *(ushort *)(lVar53 + 0x20);
  uVar42 = *(uint *)(lVar27 + 0x3c);
  uVar21 = *(uint *)(lVar27 + 0x68);
  iVar6 = *(int *)(lVar27 + 0x20);
  iVar20 = *(int *)(lVar27 + 0x28);
  iVar23 = *(int *)(lVar27 + 0x2c);
  uVar43 = *(uint *)(lVar27 + 0x40);
  lVar53 = (long)(int)uVar43;
  fVar77 = *(float *)(lVar27 + 0x4c);
  fVar74 = *(float *)(lVar27 + 0x54);
  fVar69 = *(float *)(lVar27 + 0x58);
  fVar83 = *(float *)(lVar27 + 0x5c);
  fVar84 = *(float *)(lVar27 + 0x60);
  fVar62 = *(float *)(lVar27 + 0x6c);
  fVar61 = *(float *)(lVar27 + 0x70);
  fVar88 = *(float *)(lVar27 + 0x74);
  fVar76 = *(float *)(lVar27 + 0x78);
  uVar47 = (uint)uVar7;
  if ((int)uVar21 < 9) {
    switch(uVar21) {
    case 1:
      if ((char)param_1[0x1e] == '\0') {
        local_1784 = fVar84 + 0.0;
      }
      else {
        local_1784 = 0.0 - fVar69;
      }
      break;
    case 2:
LAB_03555018:
      local_1784 = (fVar84 + fVar83 * 0.5) - fVar69 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      local_1784 = (fVar83 + fVar84) - fVar69;
      if ((char)param_1[0x1e] != '\0') {
        local_1784 = fVar83 + fVar84;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    local_1798 = 0;
  }
  else if (uVar21 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar7 < 0xad) {
      if ((uVar7 != 3) && (uVar7 != 10)) goto LAB_03554fac;
    }
    else if ((uVar7 != 0xad) && ((uVar7 != 0x200b && (uVar7 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar49 + 0x18) <= uVar42) goto LAB_035575f4;
      uVar8 = *(undefined2 *)(lVar49 + (long)(int)uVar42 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar25 = FUN_026b8cc4(uVar8,0);
      if ((uVar25 & 1) == 0) {
        bVar15 = (int)uVar36 < (int)param_1[0x95];
      }
      else {
        bVar15 = false;
      }
      if ((fVar69 <= fVar83) && (!bVar15 && uVar21 >> 4 == 0)) {
        local_1784 = fVar84;
        if ((char)param_1[0x1e] != '\0') {
          local_1784 = fVar83 + fVar84;
        }
        goto LAB_03555088;
      }
      if (((uVar19 == 1) || (uVar36 != uVar73)) || (uVar24 == *(uint *)((long)param_1 + 0x324))) {
        local_1784 = fVar84;
        if ((char)param_1[0x1e] != '\0') {
          local_1784 = fVar83 + fVar84;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        local_1858 = FUN_026b97f8(uVar47,0);
        local_1798 = 0;
      }
      else {
        cVar35 = (char)param_1[0x1e];
        fVar84 = -fVar69;
        if (cVar35 != '\0') {
          fVar84 = fVar69;
        }
        if (*(uint *)(lVar49 + 0x18) <= uVar42) goto LAB_035575f4;
        iVar23 = (int)*(char *)(lVar49 + (long)(int)uVar42 * 0x178 + 0x194) +
                 (-iVar6 - (local_1858 & 1)) + iVar23 + -1;
        if (iVar23 < 1) {
          fVar69 = 1.0;
          iVar23 = 1;
        }
        else {
          fVar69 = *(float *)((long)param_1 + 0x2dc);
        }
        if (uVar47 == 9) {
LAB_03556e74:
          fVar69 = 1.0 - fVar69;
        }
        else {
          if (uVar47 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar25 = FUN_026b97f8(uVar47,0);
            cVar35 = (char)param_1[0x1e];
            if ((uVar25 & 1) != 0) goto LAB_03556e74;
          }
          iVar23 = (iVar6 - (~local_1858 & 1)) + iVar20;
        }
        fVar69 = ((fVar83 + fVar84) * fVar69) / (float)iVar23;
        if (cVar35 == '\0') {
          local_1784 = local_1784 + fVar69;
          local_1798 = CONCAT44((float)((ulong)local_1798 >> 0x20) + 0.0,(float)local_1798 + 0.0);
        }
        else {
          local_1784 = local_1784 - fVar69;
        }
      }
    }
  }
  else if (uVar21 == 0x20) {
    fVar69 = fVar62 + fVar88;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar21 = (uint)*(undefined8 *)(lVar49 + 0x18);
  if (uVar21 <= uVar24) goto LAB_035575f4;
  lVar27 = lVar49 + lVar30 * 0x178;
  fVar83 = local_17bc + local_1784;
  fVar69 = (float)local_17c8 + (float)local_1798;
  fVar84 = (float)((ulong)local_17c8 >> 0x20) + (float)((ulong)local_1798 >> 0x20);
  if (*(char *)(lVar27 + 0x194) == '\0') goto LAB_03555938;
  iVar20 = *(int *)(lVar49 + lVar30 * 0x178 + 0x2c);
  if (iVar20 != 0) goto LAB_0355574c;
  fVar59 = fmodf(*(float *)((long)param_1 + 0x314) * (float)(int)uVar36,1.0);
  switch(*(undefined4 *)((long)param_1 + 0x30c)) {
  case 0:
    lVar39 = lVar49 + lVar30 * 0x178;
    *(undefined4 *)(lVar39 + 0x84) = 0;
    *(undefined4 *)(lVar39 + 0xac) = 0;
    *(undefined4 *)(lVar39 + 0xd4) = 0x3f800000;
    fVar59 = 1.0;
    break;
  case 1:
    fVar76 = *(float *)(lVar49 + lVar30 * 0x178 + 0x70);
    if (*(int *)((long)param_1 + 0x274) == 0x208) {
      lVar39 = lVar49 + lVar30 * 0x178;
      fVar88 = (local_1784 + fVar76) - *(float *)((long)param_1 + 0x4dc);
      fVar76 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc);
      goto LAB_035551cc;
    }
    lVar39 = lVar49 + lVar30 * 0x178;
    fVar88 = fVar88 - fVar62;
    *(float *)(lVar39 + 0x84) = fVar59 + (fVar76 - fVar62) / fVar88;
    *(float *)(lVar39 + 0xac) = fVar59 + (*(float *)(lVar39 + 0x98) - fVar62) / fVar88;
    *(float *)(lVar39 + 0xd4) = fVar59 + (*(float *)(lVar39 + 0xc0) - fVar62) / fVar88;
    fVar59 = fVar59 + (*(float *)(lVar39 + 0xe8) - fVar62) / fVar88;
    break;
  case 2:
    lVar39 = lVar49 + lVar30 * 0x178;
    fVar76 = *(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc);
    fVar88 = (local_1784 + *(float *)(lVar39 + 0x70)) - *(float *)((long)param_1 + 0x4dc);
LAB_035551cc:
    *(float *)(lVar39 + 0x84) = fVar59 + fVar88 / fVar76;
    *(float *)(lVar39 + 0xac) =
         fVar59 + ((local_1784 + *(float *)(lVar39 + 0x98)) - *(float *)((long)param_1 + 0x4dc)) /
                  (*(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc));
    *(float *)(lVar39 + 0xd4) =
         fVar59 + ((local_1784 + *(float *)(lVar39 + 0xc0)) - *(float *)((long)param_1 + 0x4dc)) /
                  (*(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc));
    fVar59 = fVar59 + ((local_1784 + *(float *)(lVar39 + 0xe8)) - *(float *)((long)param_1 + 0x4dc))
                      / (*(float *)((long)param_1 + 0x4e4) - *(float *)((long)param_1 + 0x4dc));
    break;
  case 3:
    switch((int)param_1[0x62]) {
    case 0:
      lVar39 = lVar49 + lVar30 * 0x178;
      *(undefined4 *)(lVar39 + 0x88) = 0;
      *(undefined4 *)(lVar39 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar39 + 0xd8) = 0;
      *(undefined4 *)(lVar39 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar39 = lVar49 + lVar30 * 0x178;
      fVar76 = fVar76 - fVar61;
      fVar88 = fVar59 + (*(float *)(lVar39 + 0x74) - fVar61) / fVar76;
      fVar76 = fVar59 + (*(float *)(lVar39 + 0x9c) - fVar61) / fVar76;
      *(float *)(lVar39 + 0x88) = fVar88;
      *(float *)(lVar39 + 0xb0) = fVar76;
      *(float *)(lVar39 + 0xd8) = fVar88;
      *(float *)(lVar39 + 0x100) = fVar76;
      break;
    case 2:
      lVar39 = lVar49 + lVar30 * 0x178;
      fVar88 = fVar59 + (*(float *)(lVar39 + 0x74) - *(float *)(param_1 + 0x9c)) /
                        (*(float *)(param_1 + 0x9d) - *(float *)(param_1 + 0x9c));
      *(float *)(lVar39 + 0x88) = fVar88;
      fVar76 = *(float *)(param_1 + 0x9c);
      fVar62 = *(float *)(param_1 + 0x9d);
      *(float *)(lVar39 + 0xd8) = fVar88;
      fVar88 = fVar59 + (*(float *)(lVar39 + 0x9c) - fVar76) / (fVar62 - fVar76);
      *(float *)(lVar39 + 0xb0) = fVar88;
      *(float *)(lVar39 + 0x100) = fVar88;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar21 = (uint)*(undefined8 *)(lVar49 + 0x18);
    }
    if (uVar21 <= uVar24) goto LAB_035575f4;
    lVar39 = lVar49 + lVar30 * 0x178;
    fVar88 = *(float *)(lVar39 + 0x15c);
    fVar76 = (1.0 - (*(float *)(lVar39 + 0x88) + *(float *)(lVar39 + 0xb0)) * fVar88) * 0.5;
    fVar62 = fVar59 + *(float *)(lVar39 + 0x88) * fVar88 + fVar76;
    fVar59 = fVar59 + fVar76 + *(float *)(lVar39 + 0xb0) * fVar88;
    *(float *)(lVar39 + 0x84) = fVar62;
    *(float *)(lVar39 + 0xac) = fVar62;
    *(float *)(lVar39 + 0xd4) = fVar59;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar49 + lVar30 * 0x178 + 0xfc) = fVar59;
switchD_0355512c_default:
  switch((int)param_1[0x62]) {
  case 0:
    if (uVar21 <= uVar24) goto LAB_035575f4;
    lVar39 = lVar49 + lVar30 * 0x178;
    *(undefined4 *)(lVar39 + 0x88) = 0;
    *(undefined4 *)(lVar39 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar39 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar39 + 0x100) = 0;
    break;
  case 1:
    if (uVar24 < uVar21) {
      lVar39 = lVar49 + lVar30 * 0x178;
      fVar77 = fVar77 - fVar74;
      fVar59 = (*(float *)(lVar39 + 0x74) - fVar74) / fVar77;
      fVar77 = (*(float *)(lVar39 + 0x9c) - fVar74) / fVar77;
      *(float *)(lVar39 + 0x88) = fVar59;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar21 <= uVar24) goto LAB_035575f4;
    lVar39 = lVar49 + lVar30 * 0x178;
    fVar59 = (*(float *)(lVar39 + 0x74) - *(float *)(param_1 + 0x9c)) /
             (*(float *)(param_1 + 0x9d) - *(float *)(param_1 + 0x9c));
    *(float *)(lVar39 + 0x88) = fVar59;
    fVar77 = (*(float *)(lVar39 + 0x9c) - *(float *)(param_1 + 0x9c)) /
             (*(float *)(param_1 + 0x9d) - *(float *)(param_1 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar39 + 0xb0) = fVar77;
    *(float *)(lVar39 + 0xd8) = fVar77;
    *(float *)(lVar39 + 0x100) = fVar59;
    break;
  case 3:
    if (uVar21 <= uVar24) goto LAB_035575f4;
    lVar39 = lVar49 + lVar30 * 0x178;
    fVar77 = *(float *)(lVar39 + 0x15c);
    fVar88 = (1.0 - (*(float *)(lVar39 + 0x84) + *(float *)(lVar39 + 0xd4)) / fVar77) * 0.5;
    fVar59 = *(float *)(lVar39 + 0x84) / fVar77 + fVar88;
    fVar88 = fVar88 + *(float *)(lVar39 + 0xd4) / fVar77;
    *(float *)(lVar39 + 0x88) = fVar59;
    *(float *)(lVar39 + 0xb0) = fVar88;
    *(float *)(lVar39 + 0x100) = fVar59;
    *(float *)(lVar39 + 0xd8) = fVar88;
  }
  if (uVar21 <= uVar24) goto LAB_035575f4;
  lVar39 = lVar49 + lVar30 * 0x178;
  fVar59 = *(float *)(lVar39 + 0x160) * (1.0 - *(float *)((long)param_1 + 0x2d4));
  if ((*(char *)(lVar39 + 0x5c) == '\0') && ((*(byte *)(lVar49 + lVar30 * 0x178 + 400) & 1) != 0)) {
    fVar59 = -fVar59;
  }
  fVar88 = fVar87;
  if (((iVar17 == 2) || (fVar88 = fVar71, iVar17 == 1)) || (fVar88 = fVar87 / fVar60, iVar17 == 0))
  {
    fVar59 = fVar88 * fVar59;
  }
  lVar39 = lVar49 + lVar30 * 0x178;
  fVar77 = *(float *)(lVar39 + 0x88);
  fVar76 = *(float *)(lVar39 + 0x84);
  fVar88 = -2.1474836e+09;
  if (fVar76 != INFINITY) {
    fVar88 = (float)(int)fVar76;
  }
  fVar62 = *(float *)(lVar39 + 0xd4);
  fVar61 = *(float *)(lVar39 + 0xd8);
  fVar74 = -2.1474836e+09;
  if (fVar77 != INFINITY) {
    fVar74 = (float)(int)fVar77;
  }
  uVar67 = FUN_03591d3c(fVar76 - fVar88,fVar77 - fVar74,param_1,0);
  *(undefined4 *)(lVar39 + 0x84) = uVar67;
  if (*(uint *)(lVar49 + 0x18) <= uVar24) goto LAB_035575f4;
  fVar61 = fVar61 - fVar74;
  *(float *)(lVar39 + 0x88) = fVar59;
  uVar67 = FUN_03591d3c(fVar76 - fVar88,fVar61,param_1,0);
  *(undefined4 *)(lVar49 + lVar30 * 0x178 + 0xac) = uVar67;
  if (*(uint *)(lVar49 + 0x18) <= uVar24) goto LAB_035575f4;
  fVar62 = fVar62 - fVar88;
  *(float *)(lVar49 + lVar30 * 0x178 + 0xb0) = fVar59;
  fVar88 = (float)FUN_03591d3c(fVar62,fVar61,param_1,0);
  *(float *)(lVar39 + 0xd4) = fVar88;
  if (*(uint *)(lVar49 + 0x18) <= uVar24) goto LAB_035575f4;
  *(float *)(lVar39 + 0xd8) = fVar59;
  uVar67 = FUN_03591d3c(fVar62,fVar77 - fVar74,param_1,0);
  *(undefined4 *)(lVar49 + lVar30 * 0x178 + 0xfc) = uVar67;
  uVar21 = (uint)*(undefined8 *)(lVar49 + 0x18);
  if (uVar21 <= uVar24) goto LAB_035575f4;
  *(float *)(lVar49 + lVar30 * 0x178 + 0x100) = fVar59;
LAB_0355574c:
  if (((int)uVar24 < (int)param_1[0x65]) && (local_17ac < *(int *)((long)param_1 + 0x32c))) {
    if (((int)uVar36 < (int)param_1[0x66]) && ((int)param_1[0x5c] != 5)) {
      if (uVar21 <= uVar24) goto LAB_035575f4;
      lVar27 = lVar49 + lVar30 * 0x178;
      *(ulong *)(lVar27 + 0x70) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar27 + 0x70));
      *(float *)(lVar27 + 0x78) = fVar84 + *(float *)(lVar27 + 0x78);
      *(ulong *)(lVar27 + 0x98) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar27 + 0x98));
      *(float *)(lVar27 + 0xa0) = fVar84 + *(float *)(lVar27 + 0xa0);
      *(ulong *)(lVar27 + 0xc0) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar27 + 0xc0));
      *(float *)(lVar27 + 200) = fVar84 + *(float *)(lVar27 + 200);
      *(ulong *)(lVar27 + 0xe8) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar27 + 0xe8));
      *(float *)(lVar27 + 0xf0) = fVar84 + *(float *)(lVar27 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar36 < (int)param_1[0x66]) && ((int)param_1[0x5c] == 5)) {
      if (uVar24 < uVar21) {
        if (*(uint *)(lVar49 + lVar30 * 0x178 + 0x68) == uVar5) {
          lVar27 = lVar49 + lVar30 * 0x178;
          *(ulong *)(lVar27 + 0x70) =
               CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                        fVar83 + (float)*(undefined8 *)(lVar27 + 0x70));
          *(float *)(lVar27 + 0x78) = fVar84 + *(float *)(lVar27 + 0x78);
          *(ulong *)(lVar27 + 0x98) =
               CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                        fVar83 + (float)*(undefined8 *)(lVar27 + 0x98));
          *(float *)(lVar27 + 0xa0) = fVar84 + *(float *)(lVar27 + 0xa0);
          *(ulong *)(lVar27 + 0xc0) =
               CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                        fVar83 + (float)*(undefined8 *)(lVar27 + 0xc0));
          *(float *)(lVar27 + 200) = fVar84 + *(float *)(lVar27 + 200);
          *(ulong *)(lVar27 + 0xe8) =
               CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                        fVar83 + (float)*(undefined8 *)(lVar27 + 0xe8));
          *(float *)(lVar27 + 0xf0) = fVar84 + *(float *)(lVar27 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar21 <= uVar24) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar21 = *(uint *)(lVar49 + 0x18);
  }
  puVar12 = PTR_DAT_03cbded8;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar39 = lVar49 + lVar30 * 0x178;
  *(undefined8 *)(lVar39 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar39 + 0x78) = uVar67;
  if (uVar21 <= uVar24) goto LAB_035575f4;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  lVar39 = lVar49 + lVar30 * 0x178;
  *(undefined8 *)(lVar39 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar39 + 0xa0) = uVar67;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar39 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar39 + 200) = uVar67;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar39 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar39 + 0xf0) = uVar67;
  *(undefined1 *)(lVar27 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar20 == 0) {
    pcVar41 = *(code **)(*param_1 + 0x8a8);
    uVar70 = *(undefined8 *)(*param_1 + 0x8b0);
LAB_0355591c:
    (*pcVar41)(param_1,uVar24,0,uVar70);
  }
  else if (iVar20 == 1) {
    pcVar41 = *(code **)(*param_1 + 0x8c8);
    uVar70 = *(undefined8 *)(*param_1 + 0x8d0);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
  lVar27 = lVar27 + lVar30 * 0x178;
  uVar70 = *(undefined8 *)(lVar27 + 0x11c);
  *(undefined8 *)(lVar27 + 0x11c) =
       CONCAT44(fVar69 + (float)((ulong)uVar70 >> 0x20),fVar83 + (float)uVar70);
  *(float *)(lVar27 + 0x124) = fVar84 + *(float *)(lVar27 + 0x124);
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
  lVar27 = lVar27 + lVar30 * 0x178;
  *(ulong *)(lVar27 + 0x110) =
       CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0x110) >> 0x20),
                fVar83 + (float)*(undefined8 *)(lVar27 + 0x110));
  *(float *)(lVar27 + 0x118) = fVar84 + *(float *)(lVar27 + 0x118);
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
  lVar27 = lVar27 + lVar30 * 0x178;
  *(ulong *)(lVar27 + 0x128) =
       CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar27 + 0x128) >> 0x20),
                fVar83 + (float)*(undefined8 *)(lVar27 + 0x128));
  *(float *)(lVar27 + 0x130) = fVar84 + *(float *)(lVar27 + 0x130);
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
  lVar27 = lVar27 + lVar30 * 0x178;
  *(float *)(lVar27 + 0x134) = fVar83 + *(float *)(lVar27 + 0x134);
  *(ulong *)(lVar27 + 0x138) =
       CONCAT44(fVar84 + (float)((ulong)*(undefined8 *)(lVar27 + 0x138) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar27 + 0x138));
  lVar27 = *plVar4;
  if ((lVar27 == 0) || (lVar39 = *(long *)(lVar27 + 0x38), lVar39 == 0)) goto LAB_035574b8;
  uVar21 = *(uint *)(lVar39 + 0x18);
  if (uVar21 <= uVar24) goto LAB_035575f4;
  lVar44 = lVar39 + lVar30 * 0x178;
  uVar29 = CONCAT44(fVar83 + (float)((ulong)*(undefined8 *)(lVar44 + 0x140) >> 0x20),
                    fVar83 + (float)*(undefined8 *)(lVar44 + 0x140));
  fVar88 = fVar69 + *(float *)(lVar44 + 0x150);
  uVar72 = (ulong)(uint)fVar88;
  uVar68 = CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar44 + 0x148) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar44 + 0x148));
  *(float *)(lVar44 + 0x150) = fVar88;
  *(ulong *)(lVar44 + 0x140) = uVar29;
  *(ulong *)(lVar44 + 0x148) = uVar68;
  if (uVar36 == uVar73) {
    uVar73 = *puVar2 - 1;
    if (uVar24 == uVar73) goto LAB_03555b44;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar73) goto LAB_035575f4;
    lVar44 = (long)(int)uVar73;
    lVar46 = lVar27 + lVar44 * 0x5c;
    uVar68 = (ulong)(uint)*(float *)(lVar46 + 0x58);
    fVar88 = fVar69 + *(float *)(lVar46 + 0x54);
    uVar29 = (ulong)(uint)fVar88;
    fVar77 = fVar83 + *(float *)(lVar46 + 0x58);
    uVar72 = (ulong)(uint)fVar77;
    *(ulong *)(lVar46 + 0x4c) =
         CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                  fVar69 + (float)*(undefined8 *)(lVar46 + 0x4c));
    *(float *)(lVar46 + 0x54) = fVar88;
    *(float *)(lVar46 + 0x58) = fVar77;
    if (uVar21 <= *(uint *)(lVar46 + 0x34)) goto LAB_035575f4;
    uVar67 = *(undefined4 *)(lVar39 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
    lVar27 = lVar27 + lVar44 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar88;
    *(undefined4 *)(lVar27 + 0x6c) = uVar67;
    lVar27 = *plVar4;
    if ((lVar27 == 0) || (lVar39 = *(long *)(lVar27 + 0x50), lVar39 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar73) goto LAB_035575f4;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_035574b8;
    uVar73 = *(uint *)(lVar39 + lVar44 * 0x5c + 0x40);
    if (*(uint *)(lVar27 + 0x18) <= uVar73) goto LAB_035575f4;
    lVar39 = lVar39 + lVar44 * 0x5c;
    *(undefined4 *)(lVar39 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar73 * 0x178 + 0x128);
    *(undefined4 *)(lVar39 + 0x78) = *(undefined4 *)(lVar39 + 0x4c);
    uVar73 = *puVar2 - 1;
LAB_03555b44:
    if (uVar24 == uVar73) {
      lVar27 = *plVar4;
      if ((lVar27 == 0) || (lVar39 = *(long *)(lVar27 + 0x50), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar36) goto LAB_035575f4;
      lVar44 = lVar39 + lVar48 * 0x5c;
      uVar68 = (ulong)(uint)*(float *)(lVar44 + 0x58);
      uVar29 = CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar44 + 0x4c) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar44 + 0x4c));
      fVar88 = fVar69 + *(float *)(lVar44 + 0x54);
      fVar83 = fVar83 + *(float *)(lVar44 + 0x58);
      uVar72 = (ulong)(uint)fVar83;
      *(ulong *)(lVar44 + 0x4c) = uVar29;
      *(float *)(lVar44 + 0x54) = fVar88;
      *(float *)(lVar44 + 0x58) = fVar83;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(lVar44 + 0x34)) goto LAB_035575f4;
      uVar67 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar44 + 0x34) * 0x178 + 0x11c);
      lVar39 = lVar39 + lVar48 * 0x5c;
      *(float *)(lVar39 + 0x70) = fVar88;
      *(undefined4 *)(lVar39 + 0x6c) = uVar67;
      lVar27 = *plVar4;
      if ((lVar27 == 0) || (lVar39 = *(long *)(lVar27 + 0x50), lVar39 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar36) goto LAB_035575f4;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      uVar73 = *(uint *)(lVar39 + lVar48 * 0x5c + 0x40);
      if (*(uint *)(lVar27 + 0x18) <= uVar73) goto LAB_035575f4;
      lVar39 = lVar39 + lVar48 * 0x5c;
      *(undefined4 *)(lVar39 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar73 * 0x178 + 0x128);
      *(undefined4 *)(lVar39 + 0x78) = *(undefined4 *)(lVar39 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar25 = FUN_026b82c4(uVar47,0);
  if (((((uVar25 & 1) == 0) && (1 < uVar47 - 0x2010)) && (uVar47 != 0xad)) && (uVar47 != 0x2d)) {
    if (bVar10) {
      if (((uVar19 != 1) && ((int)uVar24 < (int)(*(uint *)(lVar49 + 0x18) - 1))) &&
         (((int)uVar24 < (int)*puVar2 && ((uVar47 == 0x2019 || (uVar47 == 0x27)))))) {
        if (*(uint *)(lVar49 + 0x18) <= uVar19 - 2) goto LAB_035575f4;
        uVar8 = *(undefined2 *)(lVar49 + lVar26 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar25 = FUN_026b82c4(uVar8,0);
        if ((uVar25 & 1) != 0) {
          if (*(uint *)(lVar49 + 0x18) <= uVar19) goto LAB_035575f4;
          uVar8 = *(undefined2 *)(lVar49 + lVar26 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar25 = FUN_026b82c4(uVar8,0);
          if ((uVar25 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar19 != 1) {
LAB_0355686c:
        bVar10 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar25 = FUN_026b81f8(uVar47,0);
      if ((uVar25 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar25 = FUN_026b63d8(uVar47,0);
        if (((uVar47 != 0x200b) && ((uVar25 & 1) == 0)) && (*puVar2 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar24 == *puVar2 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar25 = FUN_026b82c4(uVar47,0);
      iVar20 = (int)local_1758;
      if ((uVar25 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar20 = uVar19 - 2;
    }
    lVar27 = *plVar4;
    if (lVar27 == 0) goto LAB_035574b8;
    lVar39 = *(long *)(lVar27 + 0x40);
    if (lVar39 == 0) goto LAB_035574b8;
    uVar73 = *(uint *)(lVar27 + 0x24);
    iVar23 = *(int *)(lVar39 + 0x18);
    if (iVar23 < (int)(uVar73 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar27 + 0x40),iVar23 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar27 = *plVar4;
      if (lVar27 == 0) goto LAB_035574b8;
    }
    lVar27 = *(long *)(lVar27 + 0x40);
    if (lVar27 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar27 + 0x18) <= uVar73) goto LAB_035575f4;
    lVar27 = lVar27 + (long)(int)uVar73 * 0x18;
    *(long *)(lVar27 + 0x20) = (long)param_1;
    *(float *)(lVar27 + 0x28) = local_1728;
    *(int *)(lVar27 + 0x2c) = iVar20;
    *(int *)(lVar27 + 0x30) = (iVar20 - (int)local_1728) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(lVar27 + 0x20),param_1);
    lVar27 = param_1[0x6d];
    if (lVar27 == 0) goto LAB_035574b8;
    lVar39 = *(long *)(lVar27 + 0x50);
    *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
    if (lVar39 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar39 + 0x18) <= uVar36) goto LAB_035575f4;
    lVar39 = lVar39 + lVar48 * 0x5c;
    bVar10 = false;
    local_17ac = local_17ac + 1;
    *(int *)(lVar39 + 0x30) = *(int *)(lVar39 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      local_1728 = (float)uVar24;
    }
    if (uVar24 == *puVar2 - 1) {
      lVar27 = *plVar4;
      if (lVar27 == 0) goto LAB_035574b8;
      lVar39 = *(long *)(lVar27 + 0x40);
      if (lVar39 == 0) goto LAB_035574b8;
      uVar73 = *(uint *)(lVar27 + 0x24);
      iVar20 = *(int *)(lVar39 + 0x18);
      if (iVar20 < (int)(uVar73 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar27 + 0x40),iVar20 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar27 = *plVar4;
        if (lVar27 == 0) goto LAB_035574b8;
      }
      lVar27 = *(long *)(lVar27 + 0x40);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar73) goto LAB_035575f4;
      lVar27 = lVar27 + (long)(int)uVar73 * 0x18;
      *(long *)(lVar27 + 0x20) = (long)param_1;
      *(float *)(lVar27 + 0x28) = local_1728;
      *(uint *)(lVar27 + 0x2c) = uVar24;
      *(uint *)(lVar27 + 0x30) = uVar19 - (int)local_1728;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar27 + 0x20),param_1);
      lVar27 = param_1[0x6d];
      if (lVar27 == 0) goto LAB_035574b8;
      lVar39 = *(long *)(lVar27 + 0x50);
      *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
      if (lVar39 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar39 + 0x18) <= uVar36) goto LAB_035575f4;
      lVar39 = lVar39 + lVar48 * 0x5c;
      local_17ac = local_17ac + 1;
      *(int *)(lVar39 + 0x30) = *(int *)(lVar39 + 0x30) + 1;
    }
LAB_03555d68:
    bVar10 = true;
  }
LAB_03555d70:
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar73 = *(uint *)(lVar27 + 0x18);
  if (uVar73 <= uVar24) goto LAB_035575f4;
  if ((*(byte *)(lVar27 + lVar30 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar16) {
LAB_03555da0:
      if (uVar73 <= uVar19 - 2) goto LAB_035575f4;
      lVar48 = *param_1;
      uVar73 = *(uint *)(lVar27 + lVar26 + -0x330);
      uVar67 = *(undefined4 *)(lVar27 + lVar26 + -0x2f8);
LAB_035562ec:
      pcVar41 = *(code **)(lVar48 + 0x8d8);
      uVar70 = *(undefined8 *)(lVar48 + 0x8e0);
LAB_035562f4:
      uVar68 = (ulong)uVar73;
      uVar29 = (ulong)(uint)local_1810;
      uVar72 = (ulong)(uint)local_180c;
      (*pcVar41)(fVar56,uVar29,uVar72,uVar68,local_177c,0,local_17f4,uVar67,param_1,
                 (long)&local_c0 + 4,uVar18,uVar70);
      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar27 = *(long *)puVar12;
      }
LAB_03556348:
      bVar16 = false;
      fVar54 = 0.0;
      local_177c = *(float *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
      local_1780 = 0.0;
    }
    else {
LAB_03556254:
      bVar16 = false;
    }
  }
  else {
    lVar27 = lVar27 + lVar30 * 0x178;
    iVar20 = *(int *)(lVar27 + 0x68);
    *(undefined4 *)(lVar27 + 0x16c) = local_c0._4_4_;
    if ((((int)param_1[0x65] < (int)uVar24) || ((int)param_1[0x66] < (int)uVar36)) ||
       (((int)param_1[0x5c] == 5 && (iVar20 + 1 != (int)param_1[0x67])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar25 = FUN_026b63d8(uVar47,0);
    if ((uVar47 != 0x200b) && ((uVar25 & 1) == 0)) {
      lVar27 = *plVar4;
      if ((lVar27 == 0) || (lVar48 = *(long *)(lVar27 + 0x38), lVar48 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar48 + 0x18) <= uVar24) goto LAB_035575f4;
      fVar88 = *(float *)(lVar48 + lVar30 * 0x178 + 0x160);
      if (fVar54 <= fVar88) {
        fVar54 = fVar88;
      }
      if (local_1780 <= ABS(fVar59)) {
        local_1780 = ABS(fVar59);
      }
      if (iVar20 != local_1814) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar27 = *plVar4;
          if (lVar27 == 0) goto LAB_035574b8;
          lVar48 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar48 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        local_177c = *(float *)(lVar48 + 0x15a8);
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
      if (param_1[0x1f] == 0) goto LAB_035574b8;
      fVar77 = *(float *)(lVar27 + lVar30 * 0x178 + 0x14c);
      fVar88 = (float)FUN_03776a10(param_1[0x1f] + 0x50,0);
      fVar77 = fVar77 + fVar54 * fVar88;
      if (fVar77 <= local_177c) {
        local_177c = fVar77;
      }
      uVar29 = (ulong)(uint)local_177c;
      local_1814 = iVar20;
    }
    if (!bVar16) {
      bVar16 = false;
      if ((((uVar47 == 0xd) || ((uVar47 & 0xfffe) == 10)) || ((int)uVar43 < (int)uVar24)) ||
         ((bool)(bVar15 ^ 1))) goto LAB_03556364;
      if (uVar24 == uVar43) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar25 = FUN_026b97f8(uVar47,0);
        if ((uVar25 & 1) != 0) goto LAB_03556254;
      }
      if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
      lVar27 = lVar27 + lVar30 * 0x178;
      local_17f4 = *(float *)(lVar27 + 0x160);
      fVar56 = *(float *)(lVar27 + 0x11c);
      uVar72 = (ulong)(uint)fVar56;
      bVar16 = fVar54 != 0.0;
      fVar88 = local_17f4;
      if (bVar16) {
        fVar88 = fVar54;
      }
      fVar54 = fVar88;
      uVar18 = *(undefined4 *)(lVar27 + 0x168);
      local_180c = 0.0;
      fVar88 = fVar59;
      if (bVar16) {
        fVar88 = local_1780;
      }
      uVar29 = (ulong)(uint)fVar88;
      local_1810 = local_177c;
      local_1780 = fVar88;
    }
    if (*puVar2 == 1) {
      if ((*plVar4 != 0) && (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 != 0)) {
        if (uVar24 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar30 * 0x178;
          lVar48 = *param_1;
          uVar73 = *(uint *)(lVar27 + 0x128);
          uVar67 = *(undefined4 *)(lVar27 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar24 == uVar42) || ((int)uVar43 <= (int)uVar24)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar25 = FUN_026b63d8(uVar47,0);
      if ((*plVar4 != 0) && (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 != 0)) {
        lVar48 = lVar30;
        uVar73 = uVar24;
        if (uVar47 == 0x200b || (uVar25 & 1) != 0) {
          lVar48 = lVar53;
          uVar73 = uVar43;
        }
        if (uVar73 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar48 * 0x178;
          uVar73 = *(uint *)(lVar27 + 0x128);
          uVar67 = *(undefined4 *)(lVar27 + 0x160);
          pcVar41 = *(code **)(*param_1 + 0x8d8);
          uVar70 = *(undefined8 *)(*param_1 + 0x8e0);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar15) {
      if ((*plVar4 != 0) && (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 != 0)) {
        uVar73 = *(uint *)(lVar27 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar24 < (int)(*puVar2 - 1)) {
      if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_035575f4;
      uVar25 = FUN_03567ad8(uVar18,*(undefined4 *)(lVar27 + lVar26),0);
      if ((uVar25 & 1) == 0) {
        if ((*plVar4 != 0) && (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 != 0)) {
          if (uVar24 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + lVar30 * 0x178;
            uVar68 = (ulong)*(uint *)(lVar27 + 0x128);
            uVar72 = (ulong)(uint)local_180c;
            uVar29 = (ulong)(uint)local_1810;
            (**(code **)(*param_1 + 0x8d8))
                      (fVar56,uVar29,uVar72,uVar68,local_177c,0,local_17f4,
                       *(undefined4 *)(lVar27 + 0x160),param_1,(long)&local_c0 + 4,uVar18,
                       *(undefined8 *)(*param_1 + 0x8e0));
            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar27 = *(long *)puVar12;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar16 = true;
  }
LAB_03556364:
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
  if (lVar45 == 0) goto LAB_035574b8;
  uVar73 = *(uint *)(lVar27 + lVar30 * 0x178 + 400);
  fVar88 = (float)FUN_03776a30(lVar45 + 0x50,0);
  if ((uVar73 >> 6 & 1) == 0) {
    if ((local_1758 & 0x100000000) != 0) {
      if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar19 - 2) goto LAB_035575f4;
      uVar73 = *(uint *)(lVar27 + lVar26 + -0x330);
      fVar69 = *(float *)(lVar27 + lVar26 + -0x30c);
      pcVar41 = *(code **)(*param_1 + 0x8d8);
      uVar70 = *(undefined8 *)(*param_1 + 0x8e0);
LAB_03556914:
      uVar68 = (ulong)uVar73;
      uVar29 = (ulong)(uint)local_17e4;
      uVar72 = (ulong)(uint)local_17e8;
      (*pcVar41)(fVar55,uVar29,uVar72,uVar68,fVar57 * fVar88 + fVar69,0,fVar57,fVar57,param_1,
                 (long)&local_c0 + 4,uVar22,uVar70);
    }
LAB_03556948:
    local_1758 = local_1758 & 0xffffffff;
  }
  else {
    lVar27 = *plVar4;
    if ((lVar27 == 0) || (lVar48 = *(long *)(lVar27 + 0x38), lVar48 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar48 + 0x18) <= uVar24) goto LAB_035575f4;
    *(undefined4 *)(lVar48 + lVar30 * 0x178 + 0x174) = local_c0._4_4_;
    if ((((int)param_1[0x65] < (int)uVar24) || ((int)param_1[0x66] < (int)uVar36)) ||
       (((int)param_1[0x5c] == 5 &&
        (*(int *)(lVar48 + lVar30 * 0x178 + 0x68) + 1 != (int)param_1[0x67])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((((uVar47 == 0xd) || ((uVar47 & 0xfffe) == 10)) || ((int)uVar43 < (int)uVar24)) ||
       ((local_1758 & 0x100000000) != 0 || !bVar15)) {
LAB_035564e8:
      if ((local_1758 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar24 == uVar43) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar25 = FUN_026b97f8(uVar47,0);
        if ((uVar25 & 1) != 0) goto LAB_035564e8;
        lVar27 = *plVar4;
        if (lVar27 == 0) goto LAB_035574b8;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_035575f4;
      lVar27 = lVar27 + lVar30 * 0x178;
      fVar58 = *(float *)(lVar27 + 0x60);
      local_17e4 = *(float *)(lVar27 + 0x14c);
      uVar29 = (ulong)(uint)local_17e4;
      fVar55 = *(float *)(lVar27 + 0x11c);
      uVar72 = (ulong)(uint)fVar55;
      fVar57 = *(float *)(lVar27 + 0x160);
      uVar22 = *(undefined4 *)(lVar27 + 0x170);
      local_1848 = (ulong)(uint)local_17e4;
      local_17e4 = fVar88 * fVar57 + local_17e4;
      local_17e8 = 0.0;
    }
    uVar73 = *puVar2;
    if (uVar73 == 1) {
LAB_03556628:
      if ((*plVar4 != 0) && (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 != 0)) {
        if (uVar24 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar30 * 0x178;
          lVar53 = *param_1;
          uVar73 = *(uint *)(lVar27 + 0x128);
          fVar69 = *(float *)(lVar27 + 0x14c);
LAB_03556654:
          pcVar41 = *(code **)(lVar53 + 0x8d8);
          uVar70 = *(undefined8 *)(lVar53 + 0x8e0);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar24 == uVar42) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar25 = FUN_026b63d8(uVar47,0);
      if ((*plVar4 != 0) && (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 != 0)) {
        uVar73 = *(uint *)(lVar27 + 0x18);
        if (uVar47 == 0x200b || (uVar25 & 1) != 0) {
          if (uVar73 <= uVar43) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar53 = lVar30;
          if (uVar73 <= uVar24) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar27 = lVar27 + lVar53 * 0x178;
        fVar69 = *(float *)(lVar27 + 0x14c);
        uVar73 = *(uint *)(lVar27 + 0x128);
        pcVar41 = *(code **)(*param_1 + 0x8d8);
        uVar70 = *(undefined8 *)(*param_1 + 0x8e0);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar24 < (int)uVar73) {
      lVar27 = *plVar4;
      if ((lVar27 != 0) && (lVar48 = *(long *)(lVar27 + 0x38), lVar48 != 0)) {
        if (uVar19 < *(uint *)(lVar48 + 0x18)) {
          if (*(float *)(lVar48 + lVar26 + -0x108) == fVar58) {
            fVar77 = *(float *)(lVar48 + lVar26 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar29 = local_1848;
            uVar25 = FUN_03567bac(fVar69 + fVar77,local_1848,0);
            if ((uVar25 & 1) != 0) {
              uVar73 = *puVar2;
              goto LAB_03556744;
            }
            lVar27 = *plVar4;
            if (lVar27 == 0) goto LAB_035574b8;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            uVar73 = *(uint *)(lVar27 + 0x18);
            if ((int)uVar24 <= (int)uVar43) goto FUN_035568e8;
            if (uVar43 < uVar73) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar24 < (int)uVar73) {
      iVar20 = FUN_036d3364(lVar45,0);
      if (*(uint *)(lVar49 + 0x18) <= uVar19) goto LAB_035575f4;
      lVar27 = *(long *)(lVar49 + lVar26 + -0x130);
      if (lVar27 == 0) goto LAB_035574b8;
      iVar23 = FUN_036d3364(lVar27,0);
      if (iVar20 != iVar23) goto LAB_03556628;
    }
    if (!bVar15) {
      if ((*plVar4 != 0) && (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 != 0)) {
        if (uVar19 - 2 < *(uint *)(lVar27 + 0x18)) {
          lVar53 = *param_1;
          uVar73 = *(uint *)(lVar27 + lVar26 + -0x330);
          fVar69 = *(float *)(lVar27 + lVar26 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    local_1758 = CONCAT44(1,(int)local_1758);
  }
  if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
  uVar73 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar73 <= uVar24) goto LAB_035575f4;
  if ((*(byte *)(lVar27 + lVar30 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar72 = (ulong)(uint)local_17c0;
      uVar29 = (ulong)(uint)local_17a4;
      uVar68 = (ulong)(uint)fVar82;
      (**(code **)(*param_1 + 0x8e8))
                (local_17a8,uVar29,uVar72,uVar68,local_17b0,uVar72,param_1,(long)&local_c0 + 4,
                 local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x8f0));
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)param_1[0x65] < (int)uVar24) || ((int)param_1[0x66] < (int)uVar36)) ||
       (((int)param_1[0x5c] == 5 &&
        (*(int *)(lVar27 + lVar30 * 0x178 + 0x68) + 1 != (int)param_1[0x67])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (!bVar9) {
      if ((((uVar47 == 0xd) || ((uVar47 & 0xfffe) == 10)) || ((int)uVar43 < (int)uVar24)) ||
         (!bVar15)) goto LAB_035569b4;
      if (uVar24 == uVar43) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar25 = FUN_026b97f8(uVar47,0);
        if ((uVar25 & 1) != 0) goto LAB_035569b4;
      }
      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar53 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar53 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar53 = *(long *)puVar12;
      }
      if ((*plVar4 == 0) || (lVar27 = *(long *)(*plVar4 + 0x38), lVar27 == 0)) goto LAB_035574b8;
      uVar73 = (uint)*(undefined8 *)(lVar27 + 0x18);
      if (uVar73 <= uVar24) goto LAB_035575f4;
      lVar53 = *(long *)(lVar53 + 0xb8);
      lVar45 = lVar27 + lVar30 * 0x178;
      uStack_c8 = *(undefined8 *)(lVar45 + 0x184);
      local_d0 = *(ulong *)(lVar45 + 0x17c);
      local_17a8 = *(float *)(lVar53 + 0x1598);
      local_17a4 = *(float *)(lVar53 + 0x159c);
      fVar82 = *(float *)(lVar53 + 0x15a0);
      local_17b0 = *(float *)(lVar53 + 0x15a4);
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar45 + 0x18c));
      local_17c0 = 0.0;
    }
    if (uVar73 <= uVar24) goto LAB_035575f4;
    lVar27 = lVar27 + lVar30 * 0x178;
    fVar88 = *(float *)(lVar27 + 0x128);
    fVar74 = *(float *)(lVar27 + 0x188);
    uVar32 = *(ulong *)(lVar27 + 0x17c);
    fVar62 = *(float *)(lVar27 + 0x184);
    uVar70 = *(undefined8 *)(lVar27 + 0x184);
    fVar84 = *(float *)(lVar27 + 0x18c);
    fVar69 = *(float *)(lVar27 + 0x11c);
    fVar76 = *(float *)(lVar27 + 0x148);
    fVar77 = *(float *)(lVar27 + 0x150);
    uStack_16e8 = uStack_c8;
    local_16f0 = local_d0;
    local_16e0 = (float)local_c0;
    local_1708 = uVar32;
    local_1700 = fVar62;
    local_16fc = fVar74;
    local_16f8 = fVar84;
    uVar25 = FUN_03568490(&local_16f0,&local_1708,0);
    lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar25 & 1) == 0) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar27);
      }
      fVar88 = fVar88 + (float)uStack_c8;
      uVar72 = (ulong)(uint)fVar88;
      fVar69 = fVar69 - local_d0._4_4_;
      fVar77 = fVar77 - (float)local_c0;
      uVar29 = (ulong)(uint)fVar77;
      fVar76 = fVar76 + uStack_c8._4_4_;
      uVar68 = (ulong)(uint)fVar76;
      if (fVar69 <= local_17a8) {
        local_17a8 = fVar69;
      }
      if (fVar77 <= local_17a4) {
        local_17a4 = fVar77;
      }
      if (fVar82 <= fVar88) {
        fVar82 = fVar88;
      }
      if (local_17b0 <= fVar76) {
        local_17b0 = fVar76;
      }
    }
    else {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar27);
      }
      fVar69 = (fVar69 + (fVar82 - (float)uStack_c8)) * 0.5;
      uVar68 = (ulong)(uint)fVar69;
      if (fVar77 <= local_17a4) {
        local_17a4 = fVar77;
      }
      uVar29 = (ulong)(uint)local_17a4;
      uVar72 = (ulong)(uint)local_17c0;
      if (local_17b0 <= fVar76) {
        local_17b0 = fVar76;
      }
      (**(code **)(*param_1 + 0x8e8))
                (local_17a8,uVar29,uVar72,uVar68,local_17b0,uVar72,param_1,(long)&local_c0 + 4,
                 local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x8f0));
      local_17a4 = fVar77 - fVar84;
      fVar82 = fVar88 + fVar62;
      local_c0 = CONCAT44(local_c0._4_4_,fVar84);
      local_17c0 = 0.0;
      local_17b0 = fVar76 + fVar74;
      local_17a8 = fVar69;
      local_d0 = uVar32;
      uStack_c8 = uVar70;
    }
    if (((*puVar2 == 1) || (uVar24 == uVar42)) || (((int)uVar43 <= (int)uVar24 || (!bVar15)))) {
      uVar72 = (ulong)(uint)local_17c0;
      uVar29 = (ulong)(uint)local_17a4;
      uVar68 = (ulong)(uint)fVar82;
      (**(code **)(*param_1 + 0x8e8))
                (local_17a8,uVar29,uVar72,uVar68,local_17b0,uVar72,param_1,(long)&local_c0 + 4,
                 local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x8f0));
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar24 = *puVar2;
  lVar26 = lVar26 + 0x178;
  local_1758 = CONCAT44(local_1758._4_4_,(int)local_1758 + 1);
  bVar15 = (int)uVar24 <= (int)uVar19;
  uVar19 = uVar19 + 1;
  uVar73 = uVar36;
  if (bVar15) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar49 = *plVar4;
  if (lVar49 != 0) {
    iVar17 = uVar36 + 1;
    plVar52 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar49 + 0x18) = uVar24;
    lVar26 = param_1[0xd4];
    *(int *)(lVar49 + 0x2c) = iVar17;
    if ((int)uVar24 < 1 || local_17ac == 0) {
      local_17ac = 1;
    }
    *(int *)(lVar49 + 0x1c) = (int)lVar26;
    *(int *)(lVar49 + 0x24) = local_17ac;
    *(int *)(lVar49 + 0x30) = (int)param_1[0x96] + 1;
    if (((int)param_1[99] != 0xff) ||
       (uVar25 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
       (uVar25 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630(param_1,0);
      return;
    }
    lVar49 = param_1[0xdf];
    if (lVar49 != 0) {
      (**(code **)(lVar49 + 0x18))
                (*(undefined8 *)(lVar49 + 0x40),*plVar4,*(undefined8 *)(lVar49 + 0x28));
    }
    if (param_1[0xe5] == 0) goto LAB_035574b8;
    iVar17 = FUN_03911ee4(param_1[0xe5],0);
    if (iVar17 != 0x19) {
      lVar49 = param_1[0xe5];
      if (lVar49 == 0) goto LAB_035574b8;
      uVar24 = FUN_03911ee4(lVar49,0);
      FUN_03911f20(lVar49,uVar24 | 0x19,0);
    }
    if (*(int *)((long)param_1 + 0x31c) != 0) {
      if ((*plVar4 == 0) || (lVar49 = *(long *)(*plVar4 + 0x60), lVar49 == 0)) goto LAB_035574b8;
      if (*(int *)(*plVar52 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar49 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar49 + 0x20,1,0);
    }
    if (param_1[0x74] != 0) {
      FUN_036aa790(param_1[0x74],0);
      if ((param_1[0x6d] != 0) && (lVar49 = *(long *)(param_1[0x6d] + 0x60), lVar49 != 0)) {
        if (*(int *)(lVar49 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (param_1[0x74] != 0) {
          FUN_036a460c(param_1[0x74],*(undefined8 *)(lVar49 + 0x30),0);
          if ((param_1[0x6d] != 0) && (lVar49 = *(long *)(param_1[0x6d] + 0x60), lVar49 != 0)) {
            if (*(int *)(lVar49 + 0x18) == 0) goto LAB_035575f4;
            if (param_1[0x74] != 0) {
              FUN_036a4810(param_1[0x74],*(undefined8 *)(lVar49 + 0x48),0);
              if ((param_1[0x6d] != 0) && (lVar49 = *(long *)(param_1[0x6d] + 0x60), lVar49 != 0)) {
                if (*(int *)(lVar49 + 0x18) == 0) goto LAB_035575f4;
                if (param_1[0x74] != 0) {
                  FUN_036a48bc(param_1[0x74],*(undefined8 *)(lVar49 + 0x50),0);
                  if ((param_1[0x6d] != 0) &&
                     (lVar49 = *(long *)(param_1[0x6d] + 0x60), lVar49 != 0)) {
                    if (*(int *)(lVar49 + 0x18) == 0) goto LAB_035575f4;
                    if (param_1[0x74] != 0) {
                      FUN_036a4e24(param_1[0x74],*(undefined8 *)(lVar49 + 0x58),0);
                      if (param_1[0x74] != 0) {
                        FUN_036aa280(param_1[0x74],0);
                        if (param_1[0xe4] != 0) {
                          FUN_0390f3a4(param_1[0xe4],param_1[0x74],0);
                          if (param_1[0xe4] != 0) {
                            uVar70 = FUN_0390ef60(param_1[0xe4],0);
                            if (param_1[0xe4] != 0) {
                              uVar24 = FUN_0390ed3c(param_1[0xe4],0);
                              lVar49 = *plVar4;
                              if (lVar49 != 0) {
                                lVar27 = 0;
                                lVar26 = 0;
                                do {
                                  uVar25 = lVar26 + 1;
                                  if ((long)*(int *)(lVar49 + 0x34) <= (long)uVar25)
                                  goto LAB_03554724;
                                  lVar49 = *(long *)(lVar49 + 0x60);
                                  if (lVar49 == 0) break;
                                  if (*(int *)(*plVar52 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                  FUN_03596a20(lVar49 + lVar27 + 0x70,0);
                                  lVar49 = param_1[0xe1];
                                  if (lVar49 == 0) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                  uVar28 = *(undefined8 *)(lVar49 + lVar26 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar32 = FUN_036d35a8(uVar28,0,0);
                                  if ((uVar32 & 1) == 0) {
                                    if (*(int *)((long)param_1 + 0x31c) != 0) {
                                      if ((*plVar4 == 0) ||
                                         (lVar49 = *(long *)(*plVar4 + 0x60), lVar49 == 0)) break;
                                      if (*(int *)(*plVar52 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                      FUN_03596b20(lVar49 + lVar27 + 0x70,1,0);
                                    }
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = UnityEngine_Material__GetColorArray(lVar49,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar53 = *(long *)(*plVar4 + 0x60), lVar53 == 0)) break;
                                    if (*(uint *)(lVar53 + 0x18) <= uVar25) goto LAB_035575f4;
                                    if (lVar49 == 0) break;
                                    FUN_036a460c(lVar49,*(undefined8 *)(lVar53 + lVar27 + 0x80),0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = UnityEngine_Material__GetColorArray(lVar49,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar53 = *(long *)(*plVar4 + 0x60), lVar53 == 0)) break;
                                    if (*(uint *)(lVar53 + 0x18) <= uVar25) goto LAB_035575f4;
                                    if (lVar49 == 0) break;
                                    FUN_036a4810(lVar49,*(undefined8 *)(lVar53 + lVar27 + 0x98),0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = UnityEngine_Material__GetColorArray(lVar49,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar53 = *(long *)(*plVar4 + 0x60), lVar53 == 0)) break;
                                    if (*(uint *)(lVar53 + 0x18) <= uVar25) goto LAB_035575f4;
                                    if (lVar49 == 0) break;
                                    FUN_036a48bc(lVar49,*(undefined8 *)(lVar53 + lVar27 + 0xa0),0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = UnityEngine_Material__GetColorArray(lVar49,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar53 = *(long *)(*plVar4 + 0x60), lVar53 == 0)) break;
                                    if (*(uint *)(lVar53 + 0x18) <= uVar25) goto LAB_035575f4;
                                    if (lVar49 == 0) break;
                                    FUN_036a4e24(lVar49,*(undefined8 *)(lVar53 + lVar27 + 0xa8),0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if ((lVar49 == 0) ||
                                       (lVar49 = UnityEngine_Material__GetColorArray(lVar49,0),
                                       lVar49 == 0)) break;
                                    FUN_036aa280(lVar49,0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = FUN_037b514c(lVar49,0);
                                    lVar53 = param_1[0xe1];
                                    if (lVar53 == 0) break;
                                    if (*(uint *)(lVar53 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar53 = *(long *)(lVar53 + lVar26 * 8 + 0x28);
                                    if ((lVar53 == 0) ||
                                       (uVar28 = UnityEngine_Material__GetColorArray(lVar53,0),
                                       lVar49 == 0)) break;
                                    FUN_0390f3a4(lVar49,uVar28,0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if ((lVar49 == 0) ||
                                       (lVar49 = FUN_037b514c(lVar49,0), lVar49 == 0)) break;
                                    FUN_0390eec8(uVar70,uVar29,uVar72,uVar68,lVar49,0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    lVar49 = *(long *)(lVar49 + lVar26 * 8 + 0x28);
                                    if ((lVar49 == 0) ||
                                       (lVar49 = FUN_037b514c(lVar49,0), lVar49 == 0)) break;
                                    FUN_0390ed78(lVar49,uVar24 & 1,0);
                                    lVar49 = param_1[0xe1];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25) goto LAB_035575f4;
                                    plVar50 = *(long **)(lVar49 + lVar26 * 8 + 0x28);
                                    uVar19 = (**(code **)(*param_1 + 0x2b8))
                                                       (param_1,*(undefined8 *)(*param_1 + 0x2c0));
                                    if (plVar50 == (long *)0x0) break;
                                    (**(code **)(*plVar50 + 0x2c8))
                                              (plVar50,uVar19 & 1,*(undefined8 *)(*plVar50 + 0x2d0))
                                    ;
                                  }
                                  lVar49 = *plVar4;
                                  lVar26 = lVar26 + 1;
                                  lVar27 = lVar27 + 0x50;
                                } while (lVar49 != 0);
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
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


