/*
FUNCTION_NAME: UnityEngine.Android.AndroidApp$$get_Activity
ENTRY_POINT: 0354ff9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 189
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x03551710) */
/* WARNING: Removing unreachable block (ram,0x0355172c) */
/* WARNING: Removing unreachable block (ram,0x03551730) */
/* WARNING: Removing unreachable block (ram,0x035517f8) */
/* WARNING: Removing unreachable block (ram,0x03551824) */
/* WARNING: Removing unreachable block (ram,0x0355183c) */
/* WARNING: Removing unreachable block (ram,0x03551840) */

void UnityEngine_Android_AndroidApp__get_Activity
               (undefined1 param_1 [16],void *param_2,int param_3,size_t param_4)

{
  long *plVar1;
  uint *puVar2;
  ulong *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined2 uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  int *piVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uVar35;
  long lVar36;
  undefined1 uVar37;
  char cVar38;
  uint uVar39;
  float *pfVar40;
  undefined4 *puVar41;
  long lVar42;
  float *pfVar43;
  code *pcVar44;
  uint uVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long *unaff_x19;
  long lVar51;
  long *plVar52;
  long *unaff_x22;
  long *plVar53;
  long *plVar54;
  long lVar55;
  uint uVar56;
  undefined8 *unaff_x29;
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
  float fVar68;
  float fVar69;
  undefined4 uVar70;
  ulong uVar71;
  float fVar72;
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
  float fVar87;
  float fVar88;
  uint uStack0000000000000028;
  int iStack0000000000000034;
  ulong uStack0000000000000038;
  int iStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack000000000000008c;
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined8 uStack00000000000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000d0;
  int iStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 uStack00000000000000e8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000114;
  float fStack0000000000000128;
  undefined4 uStack000000000000012c;
  float fStack0000000000000158;
  float fStack000000000000015c;
  int iStack000000000000016c;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  undefined4 in_stack_00000c1c;
  undefined8 in_stack_00000c20;
  uint in_stack_0000178c;
  uint uVar89;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float fVar90;
  
  uVar28 = param_1._8_8_;
  uVar35 = param_1._0_8_;
  unaff_x29[0x1db] = uVar28;
  unaff_x29[0x1da] = uVar35;
  unaff_x29[0x1d9] = uVar28;
  unaff_x29[0x1d8] = uVar35;
  unaff_x29[0x1d7] = uVar28;
  unaff_x29[0x1d6] = uVar35;
  unaff_x29[0x1d5] = uVar28;
  unaff_x29[0x1d4] = uVar35;
  unaff_x29[0x1d3] = uVar28;
  unaff_x29[0x1d2] = uVar35;
  unaff_x29[0x1d1] = uVar28;
  unaff_x29[0x1d0] = uVar35;
  memset(param_2,param_3,param_4);
  memset(&stack0x00001008,0,0x378);
  memset(&stack0x00000c90,0,0x378);
  lVar51 = unaff_x19[0x1f];
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar13 = PTR_DAT_03cbe438;
  uVar27 = FUN_036d35a8(lVar51,0,0);
  if ((uVar27 & 1) == 0) {
    if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
    lVar51 = FUN_03568ac0(unaff_x19[0x1f],0);
    if (lVar51 != 0) {
      if (unaff_x19[0x6d] != 0) {
        FUN_0359ff94(unaff_x19[0x6d],0);
      }
      lVar51 = unaff_x19[0x8f];
      if ((lVar51 != 0) && (*(long *)(lVar51 + 0x18) != 0)) {
        if ((int)*(long *)(lVar51 + 0x18) == 0) goto LAB_035575f4;
        if (*(int *)(lVar51 + 0x20) != 0) {
          plVar54 = unaff_x19 + 0x20;
          unaff_x19[0x20] = unaff_x19[0x1f];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar54);
          plVar52 = unaff_x19 + 0x23;
          unaff_x19[0x23] = unaff_x19[0x22];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined4 *)(unaff_x19 + 0x24) = 0;
          puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar19 = 0;
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo,0);
            uVar19 = (undefined4)unaff_x19[0x24];
          }
          lVar34 = unaff_x19[0x20];
          lVar36 = unaff_x19[0x23];
          lVar51 = unaff_x19[0xc3];
          unaff_x29[3] = 0;
          unaff_x29[2] = 0;
          unaff_x29[5] = 0;
          unaff_x29[4] = 0;
          unaff_x29[1] = 0;
          *unaff_x29 = 0;
          FUN_03557f30((int)lVar51,&stack0x000008a0,uVar19,lVar34,0,lVar36,0);
          puVar15 = OVRPlugin_OVRP_1_18_0_TypeInfo;
          lVar51 = *(long *)(*(long *)puVar13 + 0xb8);
          unaff_x29[0x77] = unaff_x29[1];
          unaff_x29[0x76] = *unaff_x29;
          unaff_x29[0x79] = unaff_x29[3];
          unaff_x29[0x78] = unaff_x29[2];
          uVar35 = *(undefined8 *)puVar15;
          unaff_x29[0x7b] = unaff_x29[5];
          unaff_x29[0x7a] = unaff_x29[4];
          FUN_0209aa94(lVar51 + 0x10,&stack0x00000c50,uVar35);
          plVar1 = unaff_x19 + 0xd3;
          unaff_x19[0xd3] = unaff_x19[0x36];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
          lVar51 = unaff_x19[0x77];
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar27 = FUN_036cee6c(lVar51,0,0);
          if ((uVar27 & 1) != 0) {
            if (unaff_x19[0x77] == 0) goto LAB_035574b8;
            FUN_03599b08(unaff_x19[0x77],0);
          }
          if (unaff_x19[0x1f] != 0) {
            lVar51 = unaff_x19[0x92];
            fVar86 = *(float *)((long)unaff_x19 + 0x1e4);
            iVar18 = FUN_03776950(unaff_x19[0x1f] + 0x50,0);
            if (unaff_x19[0x1f] != 0) {
              fVar57 = (float)FUN_03776960(unaff_x19[0x1f] + 0x50,0);
              fVar82 = *(float *)((long)unaff_x19 + 0x1e4);
              *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
              *(float *)(unaff_x19 + 0x3d) = fVar82;
              puVar15 = OVRPlugin_OVRP_1_29_0_TypeInfo;
              fVar74 = DAT_00d389a8;
              fVar63 = DAT_00d389a8;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar63 = 1.0;
              }
              FUN_0209aa94(unaff_x19 + 0x3e,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
              *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
              if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
                uVar19 = (undefined4)unaff_x19[0x42];
              }
              else {
                uVar19 = 700;
              }
              *(undefined4 *)((long)unaff_x19 + 0x214) = uVar19;
              FUN_0209aa94(unaff_x19 + 0x43,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
              FUN_035a0500(unaff_x19 + 0x4c,0);
              *(undefined4 *)(unaff_x19 + 0x4f) = *(undefined4 *)((long)unaff_x19 + 0x26c);
              FUN_0209aa94(unaff_x19 + 0x50,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
              *(undefined4 *)((long)unaff_x19 + 0x61c) = 0;
              FUN_0209aa1c(unaff_x19 + 0xc4,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar40 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              fStack00000000000000d8 = *pfVar40;
              fStack0000000000000070 = pfVar40[1];
              fStack0000000000000074 = pfVar40[2];
              uVar19 = FUN_01b6d7fc((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                                    (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0)
              ;
              *(undefined4 *)((long)unaff_x19 + 0x144) = uVar19;
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar19;
              *(undefined4 *)(unaff_x19 + 0x2b) = uVar19;
              *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar19;
              puVar14 = OVRPlugin_OVRP_1_16_0_TypeInfo;
              FUN_0209aa94(unaff_x19 + 0x9e,&stack0x000008a0,
                           *(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
              FUN_0209aa94(unaff_x19 + 0xa2,&stack0x000008a0,*(undefined8 *)puVar14);
              FUN_0209aa94(unaff_x19 + 0xa6,&stack0x000008a0,*(undefined8 *)puVar14);
              puVar14 = OVRPlugin_Mesh_TypeInfo;
              uVar19 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
              if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (DAT_0412df1c == '\0') {
                FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                DAT_0412df1c = '\x01';
              }
              lVar34 = *(long *)puVar14;
              if (*(int *)(lVar34 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar34 = *(long *)puVar14;
              }
              puVar41 = *(undefined4 **)(lVar34 + 0xb8);
              uVar27 = 0;
              FUN_035683a4(*puVar41,puVar41[1],puVar41[2],puVar41[3],&stack0x000008a0,uVar19,0);
              puVar14 = OVRPlugin_OVRP_1_12_0_TypeInfo;
              unaff_x29[0x73] = unaff_x29[1];
              unaff_x29[0x72] = *unaff_x29;
              FUN_0209aa94(unaff_x19 + 0xaa,&stack0x00000c30,*(undefined8 *)puVar14);
              unaff_x19[0xb0] = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xb0,0);
              FUN_0209aa94(unaff_x19 + 0xb1,0,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
              if (unaff_x19[0x20] != 0) {
                *(uint *)(unaff_x19 + 0xbe) = (uint)*(byte *)(unaff_x19[0x20] + 0x1b8);
                FUN_0209aa94(unaff_x19 + 0xba,&stack0x00000c18,
                             *(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo);
                FUN_0209aa1c(unaff_x19 + 0xbf,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
                *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
                if (unaff_x19[0x20] != 0) {
                  fVar58 = (float)FUN_03776970(unaff_x19[0x20] + 0x50,0);
                  if (*plVar54 != 0) {
                    fVar59 = (float)FUN_03776980(*plVar54 + 0x50,0);
                    if (*plVar54 != 0) {
                      fVar60 = (float)FUN_037769c0(*plVar54 + 0x50,0);
                      *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
                      *(undefined4 *)(unaff_x19 + 200) = 0;
                      unaff_x19[0x81] = 0;
                      uVar19 = 0;
                      FUN_0209aa94(unaff_x19 + 0x82,&stack0x00000c18,*(undefined8 *)puVar15);
                      *(undefined1 *)(unaff_x19 + 0x86) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
                      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
                      *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                      lVar34 = *(long *)puVar13;
                      if (*(int *)(lVar34 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar34 = *(long *)puVar13;
                      }
                      lVar36 = unaff_x19[0x6d];
                      uVar35 = *(undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x15a8);
                      unaff_x19[0x95] = 0;
                      unaff_x19[0x9a] = 0;
                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
                      lVar34 = NEON_rev64(uVar35,4);
                      *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
                      unaff_x19[0x99] = lVar34;
                      *(undefined4 *)(unaff_x19 + 0x96) = 0;
                      if ((lVar36 != 0) && (*(long *)(lVar36 + 0x58) != 0)) {
                        uVar26 = (int)unaff_x19[0x67] - 1;
                        uVar89 = *(int *)(*(long *)(lVar36 + 0x58) + 0x18) - 1;
                        if ((int)uVar26 <= (int)uVar89) {
                          uVar89 = uVar26;
                        }
                        uVar5 = 0;
                        if (-1 < (int)uVar26) {
                          uVar5 = uVar89;
                        }
                        FUN_035a02f4(lVar36,0);
                        fVar61 = *(float *)(unaff_x19 + 0x68);
                        *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
                        fVar72 = *(float *)((long)unaff_x19 + 0x344);
                        unaff_x19[0x6a] = 0;
                        lVar34 = *(long *)puVar13;
                        fVar62 = *(float *)((long)unaff_x19 + 0x34c);
                        fVar87 = *(float *)(unaff_x19 + 0x6b);
                        fVar78 = *(float *)((long)unaff_x19 + 0x35c);
                        if (*(int *)(lVar34 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar34 = *(long *)puVar13;
                        }
                        *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                             *(undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x1598);
                        *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                             *(undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x15a0);
                        if (unaff_x19[0x6d] != 0) {
                          FUN_035a0164(unaff_x19[0x6d],0);
                          *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
                          *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
                          *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                          fVar90 = 0.0;
                          *(undefined1 *)((long)unaff_x29 + 0xf34) = 0;
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                          *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
                          FUN_0359f73c(&stack0x000017c8,0xffffffff,0,0);
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0209aa1c(*(long *)(*(long *)puVar13 + 0xb8) + 0x11f0,
                                       *(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
                          fVar76 = DAT_00d38d28;
                          fVar77 = DAT_00d38938;
                          uVar89 = 0;
                          lVar34 = unaff_x19[0x8f];
                          if (lVar34 != 0) {
                            puVar2 = (uint *)((long)unaff_x19 + 0x494);
                            puVar3 = (ulong *)(unaff_x19 + 0xc9);
                            uVar26 = (int)lVar51 - 1;
                            lVar51 = (long)unaff_x19 + 0x434;
                            fVar58 = fVar58 - (fVar59 - fVar60);
                            fStack000000000000015c = 0.0;
                            if (fVar87 <= 0.0) {
                              fVar87 = 0.0;
                            }
                            if (fVar78 <= 0.0) {
                              fVar78 = 0.0;
                            }
                            fVar86 = (fVar86 / (float)iVar18) * fVar57 * fVar63;
                            uVar31 = (ulong)(uint)fVar86;
                            plVar4 = unaff_x19 + 0x6d;
                            fVar87 = fVar87 + DAT_00d3879c;
                            uVar71 = (ulong)(uint)fVar87;
                            fVar57 = fVar78 + DAT_00d3879c;
                            fVar63 = fVar82 * DAT_00d38d28 * fVar63;
                            iStack0000000000000034 = 0;
                            bVar11 = false;
                            iStack000000000000016c = 0;
                            bVar10 = true;
                            bVar12 = 1;
                            fStack00000000000000fc = fVar87;
                            uVar21 = 0;
LAB_0355087c:
                            fVar82 = (float)uVar31;
                            if ((int)*(uint *)(lVar34 + 0x18) <= (int)uVar89) {
LAB_0355459c:
                              fVar86 = (float)uVar71;
                              if (((char)unaff_x19[0x47] != '\0') &&
                                 (fVar86 = DAT_00d389f8,
                                 DAT_00d389f8 <
                                 *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))
                                 ) {
                                fVar86 = *(float *)((long)unaff_x19 + 0x1e4);
                                fVar63 = *(float *)((long)unaff_x19 + 0x254);
                                if ((fVar86 < fVar63) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  if (*(float *)((long)unaff_x19 + 0x2d4) <
                                      *(float *)(unaff_x19 + 0x5a) / 100.0) {
                                    *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                                  }
                                  fVar74 = (*(float *)((long)unaff_x19 + 0x23c) - fVar86) * 0.5;
                                  if (fVar74 <= DAT_00d38b84) {
                                    fVar74 = DAT_00d38b84;
                                  }
                                  *(float *)(unaff_x19 + 0x48) = fVar86;
                                  fVar74 = (fVar86 + fVar74) * 20.0 + 0.5;
                                  fVar86 = DAT_00d38e60;
                                  if (fVar74 != INFINITY) {
                                    fVar86 = (float)(int)fVar74 / 20.0;
                                  }
                                  if (fVar63 <= fVar86) {
                                    fVar86 = fVar63;
                                  }
LAB_03554658:
                                  *(float *)((long)unaff_x19 + 0x1e4) = fVar86;
                                  return;
                                }
                              }
                              *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                              puVar13 = PTR_DAT_03cbdf88;
                              if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                                uVar35 = FUN_0276793c((long)unaff_x19 + 0x244,0);
                                uVar28 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
                                uVar35 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,
                                                      uVar35,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_3_0_TypeInfo,uVar28,0
                                                     );
                                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                                }
                                FUN_0367a6ec(uVar35,0);
                              }
                              puVar15 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if ((*puVar2 == 0) || ((*puVar2 == 1 && (uVar21 == 3)))) {
                                (**(code **)(*unaff_x19 + 0x918))();
                                goto LAB_03554724;
                              }
                              lVar51 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar51 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar51 = *(long *)puVar15;
                              }
                              plVar54 = (long *)OVRPlugin_Media_TypeInfo;
                              lVar51 = **(long **)(lVar51 + 0xb8);
                              if (lVar51 == 0) goto LAB_035574b8;
                              if (*(uint *)(lVar51 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                              goto LAB_035575f4;
                              iVar18 = *(int *)(lVar51 + (long)(int)*(uint *)(unaff_x19 + 0xd1) *
                                                         0x38 + 0x54) << 2;
                              if ((*plVar4 == 0) ||
                                 (lVar51 = *(long *)(*plVar4 + 0x60), lVar51 == 0))
                              goto LAB_035574b8;
                              if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(int *)(lVar51 + 0x18) == 0) goto LAB_035575f4;
                              FUN_035968e8(lVar51 + 0x20,0,0);
                              if (DAT_0411f172 == '\0') {
                                FUN_01ab69ac(PTR_DAT_03cbded8);
                                DAT_0411f172 = '\x01';
                              }
                              iVar23 = (int)unaff_x19[0x4e];
                              fStack00000000000000fc =
                                   **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                              uStack00000000000000e8 =
                                   *(undefined8 *)
                                    (*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                              lVar51 = unaff_x19[0xe3];
                              uStack00000000000000b8 = uStack00000000000000e8;
                              fStack00000000000000c4 = fStack00000000000000fc;
                              if (iVar23 < 0x401) {
                                if (iVar23 == 0x100) {
                                  if (lVar51 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar51 + 0x18) < 2) goto LAB_035575f4;
                                  uVar35 = *(undefined8 *)(lVar51 + 0x30);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar4 == 0) ||
                                       (lVar34 = *(long *)(*plVar4 + 0x58), lVar34 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar5) goto LAB_035575f4;
                                    fVar86 = *(float *)(lVar34 + (long)(int)uVar5 * 0x14 + 0x28);
                                  }
                                  else {
                                    fVar86 = *(float *)(unaff_x19 + 0x97);
                                  }
                                  fStack00000000000000c4 = fVar61 + 0.0 + *(float *)(lVar51 + 0x2c);
                                  fVar86 = (0.0 - fVar86) - fVar72;
                                }
                                else if (iVar23 == 0x200) {
                                  if (lVar51 == 0) goto LAB_035574b8;
                                  if ((*(int *)(lVar51 + 0x18) == 1) ||
                                     (*(int *)(lVar51 + 0x18) == 0)) goto LAB_035575f4;
                                  fStack00000000000000c4 =
                                       (*(float *)(lVar51 + 0x20) + *(float *)(lVar51 + 0x2c)) * 0.5
                                  ;
                                  uVar35 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar51 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar51 + 0x30) >>
                                                           0x20)) * 0.5,
                                                    ((float)*(undefined8 *)(lVar51 + 0x24) +
                                                    (float)*(undefined8 *)(lVar51 + 0x30)) * 0.5);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar4 == 0) ||
                                       (lVar51 = *(long *)(*plVar4 + 0x58), lVar51 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar5) goto LAB_035575f4;
                                    lVar51 = lVar51 + (long)(int)uVar5 * 0x14;
                                    fStack00000000000000c4 = fVar61 + 0.0 + fStack00000000000000c4;
                                    fVar86 = ((fVar72 + *(float *)(lVar51 + 0x28) +
                                              *(float *)(lVar51 + 0x30)) - fVar62) * -0.5 + 0.0;
                                  }
                                  else {
                                    fStack00000000000000c4 = fVar61 + 0.0 + fStack00000000000000c4;
                                    fVar86 = ((fVar72 + *(float *)(unaff_x19 + 0x97) + fVar90) -
                                             fVar62) * -0.5 + 0.0;
                                  }
                                }
                                else {
                                  if (iVar23 != 0x400) goto LAB_03554c4c;
                                  if (lVar51 == 0) goto LAB_035574b8;
                                  if (*(int *)(lVar51 + 0x18) == 0) goto LAB_035575f4;
                                  uVar35 = *(undefined8 *)(lVar51 + 0x24);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar4 == 0) ||
                                       (lVar34 = *(long *)(*plVar4 + 0x58), lVar34 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar5) goto LAB_035575f4;
                                    fVar90 = *(float *)(lVar34 + (long)(int)uVar5 * 0x14 + 0x30);
                                  }
                                  fStack00000000000000c4 = fVar61 + 0.0 + *(float *)(lVar51 + 0x20);
                                  fVar86 = fVar62 + (0.0 - fVar90);
                                }
LAB_03554c3c:
                                uStack00000000000000b8 =
                                     CONCAT44((float)((ulong)uVar35 >> 0x20) + 0.0,
                                              (float)uVar35 + fVar86);
                              }
                              else if (iVar23 == 0x800) {
                                if (lVar51 == 0) goto LAB_035574b8;
                                if ((*(int *)(lVar51 + 0x18) == 1) || (*(int *)(lVar51 + 0x18) == 0)
                                   ) goto LAB_035575f4;
                                fVar86 = fVar61 + 0.0 +
                                         (*(float *)(lVar51 + 0x20) + *(float *)(lVar51 + 0x2c)) *
                                         0.5;
                                uStack00000000000000b8 =
                                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar51 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar51 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
                                              ((float)*(undefined8 *)(lVar51 + 0x24) +
                                              (float)*(undefined8 *)(lVar51 + 0x30)) * 0.5 + 0.0);
                                fStack00000000000000c4 = fVar86;
                              }
                              else {
                                if (iVar23 == 0x1000) {
                                  if (lVar51 != 0) {
                                    if ((*(int *)(lVar51 + 0x18) != 1) &&
                                       (*(int *)(lVar51 + 0x18) != 0)) {
                                      uVar35 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar51 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar51 + 0x30) >> 0x20)) *
                                                        0.5,((float)*(undefined8 *)(lVar51 + 0x24) +
                                                            (float)*(undefined8 *)(lVar51 + 0x30)) *
                                                            0.5);
                                      fStack00000000000000c4 =
                                           fVar61 + 0.0 +
                                           (*(float *)(lVar51 + 0x20) + *(float *)(lVar51 + 0x2c)) *
                                           0.5;
                                      fVar86 = 0.0 - ((fVar72 + *(float *)(unaff_x19 + 0x9d) +
                                                      *(float *)(unaff_x19 + 0x9c)) - fVar62) * 0.5;
                                      goto LAB_03554c3c;
                                    }
                                    goto LAB_035575f4;
                                  }
                                  goto LAB_035574b8;
                                }
                                if (iVar23 == 0x2000) {
                                  if (lVar51 == 0) goto LAB_035574b8;
                                  if ((*(int *)(lVar51 + 0x18) == 1) ||
                                     (*(int *)(lVar51 + 0x18) == 0)) goto LAB_035575f4;
                                  fVar86 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar72) -
                                                 fVar62) * 0.5;
                                  uStack00000000000000b8 =
                                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar51 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar51 + 0x30) >>
                                                       0x20)) * 0.5 + 0.0,
                                                ((float)*(undefined8 *)(lVar51 + 0x24) +
                                                (float)*(undefined8 *)(lVar51 + 0x30)) * 0.5 +
                                                fVar86);
                                  fStack00000000000000c4 =
                                       fVar61 + 0.0 +
                                       (*(float *)(lVar51 + 0x20) + *(float *)(lVar51 + 0x2c)) * 0.5
                                  ;
                                }
                              }
LAB_03554c4c:
                              if (unaff_x19[0xe5] != 0) {
                                uVar35 = FUN_03912334(unaff_x19[0xe5],0);
                                if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)puVar13);
                                }
                                uVar27 = FUN_036d35a8(uVar35,0,0);
                                lVar51 = FUN_0357f060();
                                if (lVar51 != 0) {
                                  FUN_036df824(lVar51,0);
                                  *(float *)(unaff_x19 + 0xe2) = fVar86;
                                  if (unaff_x19[0xe5] != 0) {
                                    iVar23 = FUN_039117fc(unaff_x19[0xe5],0);
                                    if (unaff_x19[0xe5] != 0) {
                                      fVar63 = (float)FUN_03911954(unaff_x19[0xe5],0);
                                      uVar19 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,
                                                            0x3f800000,0);
                                      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                                      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                                      }
                                      if (DAT_0412df1c == '\0') {
                                        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                                        DAT_0412df1c = '\x01';
                                      }
                                      puVar13 = OVRPlugin_Mesh_TypeInfo;
                                      lVar51 = *(long *)OVRPlugin_Mesh_TypeInfo;
                                      if (*(int *)(lVar51 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar51 = *(long *)puVar13;
                                      }
                                      puVar41 = *(undefined4 **)(lVar51 + 0xb8);
                                      uVar71 = (ulong)(uint)puVar41[1];
                                      uVar29 = (ulong)(uint)puVar41[2];
                                      uVar31 = (ulong)(uint)puVar41[3];
                                      FUN_035683a4(*puVar41,uVar71,uVar29,uVar31,&stack0x000017b0,
                                                   0x4000ffff,0);
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      lVar51 = *plVar4;
                                      if (lVar51 != 0) {
                                        uVar89 = *puVar2;
                                        if ((int)uVar89 < 1) {
                                          iStack00000000000000d4 = 0;
                                          iVar18 = 0;
                                          goto LAB_03556f00;
                                        }
                                        lVar51 = *(long *)(lVar51 + 0x38);
                                        fVar86 = ABS(fVar86);
                                        fVar74 = 1.0;
                                        if ((uVar27 & 1) == 0) {
                                          fVar74 = fVar86;
                                        }
                                        if (lVar51 != 0) {
                                          bVar17 = false;
                                          bVar11 = false;
                                          _fStack0000000000000128 = 0;
                                          bVar10 = false;
                                          iStack00000000000000d4 = 0;
                                          uStack0000000000000028 = 0;
                                          fStack0000000000000158 = 0.0;
                                          iStack000000000000006c = 0;
                                          lVar34 = 0x2e0;
                                          fVar62 = 0.0;
                                          fVar57 = 0.0;
                                          fStack0000000000000104 =
                                               *(float *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                          fStack0000000000000100 = 0.0;
                                          fStack000000000000008c = 0.0;
                                          fVar61 = 0.0;
                                          fVar60 = 0.0;
                                          uStack0000000000000038 = 0;
                                          uVar26 = 1;
                                          fStack0000000000000098 = fStack0000000000000074;
                                          fStack000000000000009c = fStack0000000000000070;
                                          fStack00000000000000c0 = fStack0000000000000074;
                                          fStack00000000000000d0 = fStack0000000000000070;
                                          fStack00000000000000dc = fStack0000000000000070;
                                          fVar82 = fStack00000000000000d8;
                                          fVar58 = fStack00000000000000d8;
                                          fVar59 = fStack00000000000000d8;
                                          uVar21 = 0;
                                          goto LAB_03554e78;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_035574b8;
                            }
                            if (*(uint *)(lVar34 + 0x18) <= uVar89) goto LAB_035575f4;
                            uVar20 = *(uint *)(lVar34 + (long)(int)uVar89 * 0xc + 0x20);
                            if (uVar20 == 0) goto LAB_0355459c;
                            if (5 < iStack000000000000016c) {
                              uVar35 = FUN_0276793c(&stack0x000017dc,0);
                              uVar28 = FUN_0276793c(&stack0x000017a8,0);
                              uVar35 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,
                                                    uVar35,*(undefined8 *)
                                                            OVRPlugin_OVRP_1_42_0_TypeInfo,uVar28,0)
                              ;
                              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                              }
                              FUN_0367ae18(uVar35,0);
                              in_stack_000017c8 = CONCAT44(3,*puVar2);
                            }
                            if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar20 != 0x3c)) {
                              if ((*plVar4 == 0) ||
                                 (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                              lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                              *(undefined4 *)((long)unaff_x19 + 0x644) =
                                   *(undefined4 *)(lVar34 + 0x2c);
                              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar34 + 0x58);
                              unaff_x19[0x20] = *(long *)(lVar34 + 0x38);
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar54);
LAB_035509d4:
                              if ((unaff_x19[0x6d] == 0) ||
                                 (lVar34 = *(long *)(unaff_x19[0x6d] + 0x38), lVar34 == 0))
                              goto LAB_035574b8;
                              uVar21 = *puVar2;
                              if (*(uint *)(lVar34 + 0x18) <= uVar21) goto LAB_035575f4;
                              lVar55 = (long)(int)uVar21;
                              cVar38 = *(char *)(lVar34 + lVar55 * 0x178 + 0x5c);
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                              lVar36 = unaff_x19[0x24];
                              if ((uint)in_stack_000017c8 == uVar21) {
                                uVar20 = (uint)((ulong)in_stack_000017c8 >> 0x20);
                                *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                if (uVar20 == 0x2026) {
                                  *(long *)(lVar34 + lVar55 * 0x178 + 0x30) = unaff_x19[0xca];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar34 = *(long *)(unaff_x19[0x6d] + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                                  *(undefined4 *)(lVar34 + 0x2c) = 0;
                                  *(long *)(lVar34 + 0x38) = unaff_x19[0xcb];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar34 = *(long *)(unaff_x19[0x6d] + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *(long *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x50) =
                                       unaff_x19[0xcc];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  uVar21 = *puVar2;
                                  if (*(uint *)(lVar34 + 0x18) <= uVar21) goto LAB_035575f4;
                                  bVar17 = true;
                                  *(int *)(lVar34 + (long)(int)uVar21 * 0x178 + 0x58) =
                                       (int)unaff_x19[0xcd];
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                  in_stack_000017c8 = CONCAT44(3,uVar21 + 1);
                                }
                                else if (uVar20 == 3) {
                                  if ((*plVar54 == 0) ||
                                     (lVar30 = FUN_03568ac0(*plVar54,0), lVar30 == 0))
                                  goto LAB_035574b8;
                                  uVar19 = 3;
                                  FUN_0219b634(lVar30,&stack0x00000c18,&stack0x000008a0,
                                               *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                                  if (*(uint *)(lVar34 + 0x18) <= uVar21) goto LAB_035575f4;
                                  *(ulong *)(lVar34 + lVar55 * 0x178 + 0x30) = uVar27;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  uVar21 = *(uint *)((long)unaff_x19 + 0x494);
                                  bVar17 = true;
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
                                else {
                                  bVar17 = true;
                                }
                              }
                              else {
                                bVar17 = false;
                              }
                              if (((int)uVar21 < *(int *)((long)unaff_x19 + 0x324)) && (uVar20 != 3)
                                 ) {
                                if ((*plVar4 == 0) ||
                                   (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar34 + 0x18) <= uVar21) goto LAB_035575f4;
                                lVar34 = lVar34 + (long)(int)uVar21 * 0x178;
                                *(undefined1 *)(lVar34 + 0x194) = 0;
                                *(undefined2 *)(lVar34 + 0x20) = 0x200b;
                                *(undefined4 *)(lVar34 + 100) = 0;
                                *puVar2 = uVar21 + 1;
                              }
                              else {
                                iVar18 = *(int *)((long)unaff_x19 + 0x644);
                                if (iVar18 == 0) {
                                  uVar21 = *(uint *)((long)unaff_x19 + 0x25c);
                                  if ((uVar21 >> 4 & 1) == 0) {
                                    if ((uVar21 >> 3 & 1) == 0) {
                                      fStack0000000000000158 = 1.0;
                                      if ((uVar21 >> 5 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar29 = FUN_026b812c(uVar20,0);
                                        if ((uVar29 & 1) != 0) {
                                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                          }
                                          uVar20 = FUN_026b8410(uVar20,0);
                                          uVar20 = uVar20 & 0xffff;
                                          fStack0000000000000158 = fVar77;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar29 = FUN_026b8070(uVar20,0);
                                      fStack0000000000000158 = 1.0;
                                      if ((uVar29 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar20 = FUN_026b8594(uVar20,0);
                                        goto LAB_03550fdc;
                                      }
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar29 = FUN_026b812c(uVar20,0);
                                    fStack0000000000000158 = 1.0;
                                    if ((uVar29 & 1) != 0) {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar20 = FUN_026b8410(uVar20,0);
LAB_03550fdc:
                                      fStack0000000000000158 = 1.0;
                                      uVar20 = uVar20 & 0xffff;
                                    }
                                  }
                                  iVar18 = *(int *)((long)unaff_x19 + 0x644);
                                  if (iVar18 != 0) goto LAB_03550c00;
LAB_03550fec:
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *puVar3 = *(ulong *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x30);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (puVar3);
                                  if (*puVar3 == 0) goto LAB_03550bd0;
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *plVar54 = *(long *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x38);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar54);
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *plVar52 = *(long *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x50);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  uVar56 = *puVar2;
                                  uVar21 = *(uint *)(lVar34 + 0x18);
                                  if (uVar21 <= uVar56) goto LAB_035575f4;
                                  *(undefined4 *)(unaff_x19 + 0x24) =
                                       *(undefined4 *)(lVar34 + (long)(int)uVar56 * 0x178 + 0x58);
                                  if (bVar17) {
                                    lVar36 = unaff_x19[0x8f];
                                    if (lVar36 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
                                    if ((*(int *)(lVar36 + (long)(int)uVar89 * 0xc + 0x20) != 10) ||
                                       (uVar56 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
                                    if (uVar21 <= uVar56 - 1) goto LAB_035575f4;
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fVar59 = *(float *)(lVar34 + (long)(int)(uVar56 - 1) * 0x178 +
                                                       0x60);
                                    iVar18 = FUN_03776950(*plVar54 + 0x50,0);
                                    lVar34 = *plVar54;
                                  }
                                  else {
LAB_035510fc:
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fVar59 = *(float *)(unaff_x19 + 0x3d);
                                    iVar18 = FUN_03776950(*plVar54 + 0x50,0);
                                    lVar34 = unaff_x19[0x20];
                                  }
                                  if (lVar34 == 0) goto LAB_035574b8;
                                  fVar83 = (float)FUN_03776960(lVar34 + 0x50,0);
                                  fVar68 = fVar74;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar68 = 1.0;
                                  }
                                  fVar64 = 0.0;
                                  fStack0000000000000128 = 0.0;
                                  if (!(bool)(bVar17 & uVar20 == 0x2026)) {
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fStack0000000000000128 = (float)FUN_03776980(*plVar54 + 0x50,0);
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fVar64 = (float)FUN_037769c0(*plVar54 + 0x50,0);
                                  }
                                  lVar34 = unaff_x19[0xc9];
                                  if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0))
                                  goto LAB_035574b8;
                                  fVar65 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar67 = *(float *)(lVar34 + 0x2c);
                                  fVar82 = (float)FUN_03776ea8(*(long *)(lVar34 + 0x20),0);
                                  if (*plVar54 == 0) goto LAB_035574b8;
                                  fVar84 = (float)FUN_037769b0(*plVar54 + 0x50,0);
                                  if (*plVar54 == 0) goto LAB_035574b8;
                                  fVar66 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar60 = (float)FUN_03776960(*plVar54 + 0x50,0);
                                  lVar34 = unaff_x19[0x6d];
                                  if ((lVar34 == 0) ||
                                     (lVar36 = *(long *)(lVar34 + 0x38), lVar36 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar36 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar36 = lVar36 + (long)(int)*puVar2 * 0x178;
                                  *(undefined4 *)(lVar36 + 0x2c) = 0;
                                  fVar68 = ((fStack0000000000000158 * fVar59) / (float)iVar18) *
                                           fVar83 * fVar68;
                                  fVar82 = fVar68 * fVar65 * fVar67 * fVar82;
                                  *(float *)(lVar36 + 0x160) = fVar82;
                                  uVar21 = *(uint *)(unaff_x19 + 0x24);
                                  fVar60 = fVar68 * fVar84 * fVar66 * fVar60;
                                  if (uVar21 == 0) {
                                    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
                                  }
                                  else {
                                    lVar36 = unaff_x19[0xe1];
                                    if (lVar36 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar21) goto LAB_035575f4;
                                    lVar36 = *(long *)(lVar36 + (long)(int)uVar21 * 8 + 0x20);
                                    if (lVar36 == 0) goto LAB_035574b8;
                                    fStack000000000000015c = *(float *)(lVar36 + 0x10c);
                                  }
LAB_035514b0:
                                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                                  fVar59 = 0.0;
                                  if (uVar20 != 3 && uVar20 != 0xad) {
                                    fVar59 = fVar82;
                                  }
LAB_035514cc:
                                  lVar34 = *(long *)(lVar34 + 0x38);
                                  if (lVar34 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                                  *(short *)(lVar34 + 0x20) = (short)uVar20;
                                  *(int *)(lVar34 + 0x60) = (int)unaff_x19[0x3d];
                                  *(undefined4 *)(lVar34 + 0x164) =
                                       *(undefined4 *)((long)unaff_x19 + 0x4ec);
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar34 = *(long *)(unaff_x19[0x6d] + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *(int *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x168) =
                                       (int)unaff_x19[0x2b];
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar34 = *(long *)(unaff_x19[0x6d] + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *(undefined4 *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x170) =
                                       *(undefined4 *)((long)unaff_x19 + 0x15c);
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar34 = *(long *)(unaff_x19[0x6d] + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  uVar21 = *puVar2;
                                  FUN_0209a6e0(unaff_x19 + 0xaa,&stack0x000008a0,
                                               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                                  if (*(uint *)(lVar34 + 0x18) <= uVar21) goto LAB_035575f4;
                                  uVar28 = unaff_x29[1];
                                  uVar35 = *unaff_x29;
                                  lVar34 = lVar34 + (long)(int)uVar21 * 0x178;
                                  *(undefined4 *)(lVar34 + 0x18c) = 0;
                                  *(undefined8 *)(lVar34 + 0x184) = uVar28;
                                  *(undefined8 *)(lVar34 + 0x17c) = uVar35;
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *(undefined4 *)(lVar34 + (long)(int)*puVar2 * 0x178 + 400) =
                                       *(undefined4 *)((long)unaff_x19 + 0x25c);
                                  if ((unaff_x19[0xc9] == 0) ||
                                     (lVar34 = *(long *)(unaff_x19[0xc9] + 0x20), lVar34 == 0))
                                  goto LAB_035574b8;
                                  FUN_03776e6c(&stack0x00000c18,lVar34,0);
                                  puVar13 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                  unaff_x29[0x1df] = in_stack_00000c20;
                                  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,uVar19);
                                  if ((int)uVar20 < 0x10000) {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar21 = FUN_026b63d8(uVar20,0);
                                    uVar21 = uVar21 & 1;
                                  }
                                  else {
                                    uVar21 = 0;
                                  }
                                  fVar68 = *(float *)(unaff_x19 + 0x55);
                                  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                                  if (*(char *)((long)unaff_x19 + 0x2f9) != '\0') {
                                    if (*puVar3 == 0) goto LAB_035574b8;
                                    uVar39 = *puVar2;
                                    uVar56 = *(uint *)(*puVar3 + 0x28);
                                    if ((int)uVar39 < (int)uVar26) {
                                      if ((*plVar4 == 0) ||
                                         (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                      goto LAB_035574b8;
                                      if (*(uint *)(lVar34 + 0x18) <= uVar39 + 1) goto LAB_035575f4;
                                      lVar34 = *(long *)(lVar34 + (long)(int)(uVar39 + 1) * 0x178 +
                                                        0x30);
                                      if ((((lVar34 == 0) || (*plVar54 == 0)) ||
                                          (lVar36 = *(long *)(*plVar54 + 0x128), lVar36 == 0)) ||
                                         (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0))
                                      goto LAB_035574b8;
                                      uVar27 = (ulong)(uVar56 | *(int *)(lVar34 + 0x28) << 0x10);
                                      uVar31 = FUN_0219f8b8(lVar36,&stack0x000008a0,&stack0x000016f8
                                                            ,*(undefined8 *)
                                                                                                                            
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                      if ((uVar31 & 1) != 0) goto LAB_035574b8;
                                      uVar39 = *puVar2;
                                    }
                                    if (0 < (int)uVar39) {
                                      if ((*plVar4 == 0) ||
                                         (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                      goto LAB_035574b8;
                                      if (*(uint *)(lVar34 + 0x18) <= uVar39 - 1) goto LAB_035575f4;
                                      lVar34 = *(long *)(lVar34 + (ulong)(uVar39 - 1) * 0x178 + 0x30
                                                        );
                                      if (((lVar34 == 0) || (*plVar54 == 0)) ||
                                         ((lVar36 = *(long *)(*plVar54 + 0x128), lVar36 == 0 ||
                                          (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0))))
                                      goto LAB_035574b8;
                                      uVar27 = (ulong)(*(uint *)(lVar34 + 0x28) | uVar56 << 0x10);
                                      uVar31 = FUN_0219f8b8(lVar36,&stack0x000008a0,&stack0x000016f8
                                                            ,*(undefined8 *)
                                                                                                                            
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                      if ((uVar31 & 1) != 0) goto LAB_035574b8;
                                    }
                                    *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                                  }
                                  if ((char)unaff_x19[0x1e] != '\0') {
                                    fVar65 = *(float *)(unaff_x19 + 200);
                                    fVar83 = (float)FUN_03776cb4(&stack0x00001790,0);
                                    fVar65 = fVar65 - fVar59 * fVar83 * (1.0 - *(float *)((long)
                                                  unaff_x19 + 0x2d4));
                                    *(float *)(unaff_x19 + 200) = fVar65;
                                    if ((uVar20 == 0x200b) || (uVar21 != 0)) {
                                      *(float *)(unaff_x19 + 200) =
                                           fVar65 - fVar63 * *(float *)((long)unaff_x19 + 0x2b4);
                                    }
                                  }
                                  fVar65 = *(float *)(unaff_x19 + 0x56);
                                  fVar83 = 0.0;
                                  if (fVar65 != 0.0) {
                                    fVar83 = (float)FUN_03776c94(&stack0x00001790,0);
                                    fVar67 = (float)FUN_03776ca4(&stack0x00001790,0);
                                    fVar83 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                             (fVar65 * 0.5 - fVar59 * (fVar83 * 0.5 + fVar67));
                                    *(float *)(unaff_x19 + 200) =
                                         *(float *)(unaff_x19 + 200) + fVar83;
                                  }
                                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar38 == '\0'))
                                     && ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                                    lVar34 = *plVar52;
                                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar31 = FUN_036cee6c(lVar34,0,0);
                                    fVar67 = 0.0;
                                    if ((uVar31 & 1) != 0) {
                                      lVar34 = *plVar52;
                                      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (lVar34 == 0) goto LAB_035574b8;
                                      uVar31 = FUN_03699d3c(lVar34,*(undefined4 *)
                                                                    (*(long *)(*(long *)puVar13 +
                                                                              0xb8) + 0x54),0);
                                      fVar67 = 0.0;
                                      if ((uVar31 & 1) != 0) {
                                        lVar34 = *plVar52;
                                        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        if (lVar34 == 0) goto LAB_035574b8;
                                        fVar65 = (float)FUN_0369e060(lVar34,*(undefined4 *)
                                                                             (*(long *)(*(long *)
                                                  puVar13 + 0xb8) + 0x54),0);
                                        if ((*plVar54 == 0) || (*plVar52 == 0)) goto LAB_035574b8;
                                        fVar84 = *(float *)(*plVar54 + 0x1b0);
                                        fVar67 = (float)FUN_0369e060(*plVar52,*(undefined4 *)
                                                                               (*(long *)(*(long *)
                                                  puVar13 + 0xb8) + 0xcc),0);
                                        fVar67 = fVar67 * fVar65 * fVar84 * 0.25;
                                        if (fVar65 < fStack000000000000015c + fVar67) {
                                          fStack000000000000015c = fVar65 - fVar67;
                                        }
                                      }
                                    }
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fStack00000000000000d0 = *(float *)(*plVar54 + 0x1b4);
                                  }
                                  else {
                                    lVar34 = *plVar52;
                                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar31 = FUN_036cee6c(lVar34,0,0);
                                    fStack00000000000000d0 = 0.0;
                                    if ((uVar31 & 1) != 0) {
                                      lVar34 = *plVar52;
                                      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (lVar34 == 0) goto LAB_035574b8;
                                      uVar31 = FUN_03699d3c(lVar34,*(undefined4 *)
                                                                    (*(long *)(*(long *)puVar13 +
                                                                              0xb8) + 0x54),0);
                                      if ((uVar31 & 1) != 0) {
                                        lVar34 = *plVar52;
                                        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        if (lVar34 == 0) goto LAB_035574b8;
                                        uVar31 = FUN_03699d3c(lVar34,*(undefined4 *)
                                                                      (*(long *)(*(long *)puVar13 +
                                                                                0xb8) + 0xcc),0);
                                        if ((uVar31 & 1) != 0) {
                                          lVar34 = *plVar52;
                                          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                          }
                                          if (lVar34 != 0) {
                                            fVar65 = (float)FUN_0369e060(lVar34,*(undefined4 *)
                                                                                 (*(long *)(*(long *
                                                  )puVar13 + 0xb8) + 0x54),0);
                                            if ((*plVar54 != 0) && (*plVar52 != 0)) {
                                              fVar84 = *(float *)(*plVar54 + 0x1a8);
                                              fVar67 = (float)FUN_0369e060(*plVar52,*(undefined4 *)
                                                                                     (*(long *)(*(
                                                  long *)puVar13 + 0xb8) + 0xcc),0);
                                              fVar67 = fVar67 * fVar65 * fVar84 * 0.25;
                                              if (fVar65 < fStack000000000000015c + fVar67) {
                                                fStack000000000000015c = fVar65 - fVar67;
                                              }
                                              goto FUN_03551b84;
                                            }
                                          }
                                          goto LAB_035574b8;
                                        }
                                      }
                                    }
                                    fVar67 = 0.0;
                                  }
FUN_03551b84:
                                  fVar65 = *(float *)(unaff_x19 + 200);
                                  fVar84 = (float)FUN_03776ca4(&stack0x00001790,0);
                                  fVar65 = fVar65 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                    fVar59 * (((fVar84 - fStack000000000000015c) -
                                                              fVar67) + 0.0);
                                  fVar84 = (float)FUN_03776cac(&stack0x00001790,0);
                                  fVar88 = *(float *)((long)unaff_x19 + 0x61c) +
                                           ((fVar60 + fVar59 * (fStack000000000000015c + fVar84 +
                                                               0.0)) - *(float *)(unaff_x19 + 0x9b))
                                  ;
                                  fVar84 = (float)FUN_03776c9c(&stack0x00001790,0);
                                  fVar84 = fVar88 - fVar59 * (fStack000000000000015c +
                                                              fStack000000000000015c + fVar84);
                                  fVar66 = (float)FUN_03776c94(&stack0x00001790,0);
                                  fVar75 = fVar65 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                    fVar59 * (fVar67 + fVar67 +
                                                             fStack000000000000015c +
                                                             fStack000000000000015c + fVar66);
                                  fStack0000000000000104 = fVar65;
                                  fVar66 = fVar75;
                                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar38 == '\0'))
                                     && ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                                    fVar80 = (float)(int)unaff_x19[0xbe] * fVar76;
                                    fVar66 = (float)FUN_03776cac(&stack0x00001790,0);
                                    fVar79 = fVar80 * fVar59 * (fVar67 + fStack000000000000015c +
                                                                         fVar66);
                                    fVar66 = (float)FUN_03776cac(&stack0x00001790,0);
                                    fVar73 = (float)FUN_03776c9c(&stack0x00001790,0);
                                    fVar88 = fVar88 + 0.0;
                                    fVar84 = fVar84 + 0.0;
                                    fVar80 = fVar80 * fVar59 * (((fVar66 - fVar73) -
                                                                fStack000000000000015c) - fVar67);
                                    fVar73 = fVar65 + fVar79;
                                    fVar66 = fVar75 + fVar80;
                                    fVar69 = (fVar79 - fVar80) * 0.5;
                                    fVar65 = (fVar65 + fVar80) - fVar69;
                                    fVar75 = (fVar75 + fVar79) - fVar69;
                                    fStack0000000000000104 = fVar73 - fVar69;
                                    fVar66 = fVar66 - fVar69;
                                  }
                                  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                    fStack0000000000000114 = 0.0;
                                    fVar69 = 0.0;
                                    fVar79 = 0.0;
                                    fStack0000000000000100 = 0.0;
                                    fVar80 = fVar84;
                                    fVar73 = fVar88;
                                  }
                                  else {
                                    thunk_FUN_036bc400(lVar51,0);
                                    fVar81 = (fVar75 + fVar65) * 0.5;
                                    fVar85 = (fVar84 + fVar88) * 0.5;
                                    fVar88 = fVar88 - fVar85;
                                    fStack0000000000000100 = 0.0;
                                    fVar73 = fVar88;
                                    fStack0000000000000104 =
                                         (float)FUN_036bdd2c(fStack0000000000000104 - fVar81,lVar51,
                                                             0);
                                    fStack0000000000000104 = fVar81 + fStack0000000000000104;
                                    fStack0000000000000100 = fStack0000000000000100 + 0.0;
                                    fVar80 = fVar84 - fVar85;
                                    fStack0000000000000114 = 0.0;
                                    fVar84 = fVar80;
                                    fVar65 = (float)FUN_036bdd2c(fVar65 - fVar81,lVar51,0);
                                    fVar65 = fVar81 + fVar65;
                                    fStack0000000000000114 = fStack0000000000000114 + 0.0;
                                    fVar84 = fVar85 + fVar84;
                                    fVar79 = 0.0;
                                    fVar75 = (float)FUN_036bdd2c(fVar75 - fVar81,lVar51,0);
                                    fVar75 = fVar81 + fVar75;
                                    fVar88 = fVar85 + fVar88;
                                    fVar79 = fVar79 + 0.0;
                                    fVar69 = 0.0;
                                    fVar66 = (float)FUN_036bdd2c(fVar66 - fVar81,lVar51,0);
                                    fVar66 = fVar81 + fVar66;
                                    fVar69 = fVar69 + 0.0;
                                    fVar80 = fVar85 + fVar80;
                                    fVar73 = fVar85 + fVar73;
                                  }
                                  if (*plVar4 == 0) goto LAB_035574b8;
                                  lVar34 = *(long *)(*plVar4 + 0x38);
                                  uVar31 = (ulong)(uint)fVar59;
                                  if (lVar34 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                                  *(float *)(lVar34 + 0x11c) = fVar65;
                                  *(float *)(lVar34 + 0x120) = fVar84;
                                  *(float *)(lVar34 + 0x124) = fStack0000000000000114;
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                                  *(float *)(lVar34 + 0x114) = fVar73;
                                  *(float *)(lVar34 + 0x110) = fStack0000000000000104;
                                  *(float *)(lVar34 + 0x118) = fStack0000000000000100;
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                                  *(float *)(lVar34 + 0x128) = fVar75;
                                  *(float *)(lVar34 + 300) = fVar88;
                                  *(float *)(lVar34 + 0x130) = fVar79;
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                                  *(float *)(lVar34 + 0x134) = fVar66;
                                  *(float *)(lVar34 + 0x138) = fVar80;
                                  *(float *)(lVar34 + 0x13c) = fVar69;
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  uVar56 = *puVar2;
                                  lVar36 = (long)(int)uVar56;
                                  if (*(uint *)(lVar34 + 0x18) <= uVar56) goto LAB_035575f4;
                                  lVar55 = lVar34 + lVar36 * 0x178;
                                  *(int *)(lVar55 + 0x140) = (int)unaff_x19[200];
                                  fVar88 = *(float *)(unaff_x19 + 0x9b);
                                  uVar71 = (ulong)(uint)fVar88;
                                  fVar66 = *(float *)((long)unaff_x19 + 0x61c);
                                  *(float *)(lVar55 + 0x15c) = (fVar75 - fVar65) / (fVar73 - fVar84)
                                  ;
                                  *(float *)(lVar55 + 0x14c) = (fVar60 - fVar88) + fVar66;
                                  fStack0000000000000128 = fStack0000000000000128 * fVar59;
                                  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                    fStack0000000000000128 =
                                         fStack0000000000000128 / fStack0000000000000158;
                                    fVar64 = (fVar64 * fVar59) / fStack0000000000000158;
                                  }
                                  else {
                                    fVar64 = fVar64 * fVar59;
                                  }
                                  uVar39 = *(uint *)(unaff_x19 + 0x93);
                                  if ((uVar21 == 0) || (uVar56 == uVar39)) {
                                    fVar64 = fVar66 + fVar64;
                                    fVar84 = fVar66 + fStack0000000000000128;
                                    fVar65 = fVar64;
                                    fVar60 = fVar84;
                                    if (fVar66 != 0.0) {
                                      fVar60 = (fVar84 - fVar66) /
                                               *(float *)((long)unaff_x19 + 0x404);
                                      fVar65 = (fVar64 - fVar66) /
                                               *(float *)((long)unaff_x19 + 0x404);
                                      if (fVar60 <= fVar84) {
                                        fVar60 = fVar84;
                                      }
                                      if (fVar64 <= fVar65) {
                                        fVar65 = fVar64;
                                      }
                                    }
                                    lVar34 = lVar34 + lVar36 * 0x178;
                                    fVar66 = fVar60;
                                    if (fVar60 <= *(float *)(unaff_x19 + 0x99)) {
                                      fVar66 = *(float *)(unaff_x19 + 0x99);
                                    }
                                    fVar75 = fVar65;
                                    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar65) {
                                      fVar75 = *(float *)((long)unaff_x19 + 0x4cc);
                                    }
                                    *(float *)((long)unaff_x19 + 0x4cc) = fVar75;
                                    *(float *)(unaff_x19 + 0x99) = fVar66;
                                    *(float *)(lVar34 + 0x154) = fVar60;
                                    *(float *)(lVar34 + 0x158) = fVar65;
                                    *(float *)(lVar34 + 0x148) = fVar84 - fVar88;
                                    *(float *)(unaff_x19 + 0x98) = fVar84 - fVar88;
                                    *(float *)(lVar34 + 0x150) = fVar64 - fVar88;
                                    *(float *)((long)unaff_x19 + 0x4c4) = fVar64 - fVar88;
                                    if (((int)unaff_x19[0x95] == 0) ||
                                       (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                                      *(float *)(unaff_x19 + 0x97) = fVar66;
                                      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                                      fVar60 = *(float *)((long)unaff_x19 + 0x4bc);
                                      fVar64 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                                      fStack0000000000000158 =
                                           (fVar59 * fVar64) / fStack0000000000000158;
                                      uVar71 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                      if (fVar60 <= fStack0000000000000158) {
                                        fVar60 = fStack0000000000000158;
                                      }
                                      *(float *)((long)unaff_x19 + 0x4bc) = fVar60;
                                    }
                                    if ((float)uVar71 == 0.0) {
                                      fVar60 = *(float *)((long)unaff_x19 + 0x4b4);
                                      if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar84) {
                                        fVar60 = fVar84;
                                      }
                                      *(float *)((long)unaff_x19 + 0x4b4) = fVar60;
                                    }
                                  }
                                  else {
                                    fVar60 = *(float *)(unaff_x19 + 0x99);
                                    lVar34 = lVar34 + lVar36 * 0x178;
                                    *(float *)(lVar34 + 0x154) = fVar60;
                                    fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
                                    fVar60 = fVar60 - fVar88;
                                    *(float *)(lVar34 + 0x148) = fVar60;
                                    *(float *)(lVar34 + 0x158) = fVar64;
                                    *(float *)(unaff_x19 + 0x98) = fVar60;
                                    fVar64 = fVar64 - fVar88;
                                    *(float *)(lVar34 + 0x150) = fVar64;
                                    *(float *)((long)unaff_x19 + 0x4c4) = fVar64;
                                  }
                                  lVar34 = *plVar4;
                                  if ((lVar34 == 0) ||
                                     (lVar36 = *(long *)(lVar34 + 0x38), lVar36 == 0))
                                  goto LAB_035574b8;
                                  uVar22 = *puVar2;
                                  if (*(uint *)(lVar36 + 0x18) <= uVar22) goto LAB_035575f4;
                                  lVar36 = lVar36 + (long)(int)uVar22 * 0x178;
                                  *(undefined1 *)(lVar36 + 0x194) = 0;
                                  uVar45 = *(uint *)(unaff_x19 + 0x4f);
                                  if ((uVar20 == 9) ||
                                     (((((uVar21 == 0 && (uVar20 != 3)) && (uVar20 != 0x200b)) &&
                                       (uVar20 != 0xad)) ||
                                      (((bool)(uVar20 == 0xad & (bVar11 ^ 1U)) ||
                                       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                                    *(undefined1 *)(lVar36 + 0x194) = 1;
                                    pfVar43 = (float *)((long)unaff_x19 + 0x354);
                                    pfVar40 = (float *)(unaff_x19 + 0x6a);
                                    if (bVar17) {
                                      lVar34 = *(long *)(lVar34 + 0x50);
                                      if (lVar34 == 0) goto LAB_035574b8;
                                      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                      goto LAB_035575f4;
                                      lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
                                      pfVar40 = (float *)(lVar34 + 0x60);
                                      pfVar43 = (float *)(lVar34 + 100);
                                    }
                                    fVar64 = *pfVar40;
                                    fVar65 = *pfVar43;
                                    fVar60 = *(float *)(unaff_x19 + 0x6c);
                                    fVar84 = *(float *)(unaff_x19 + 200);
                                    fStack00000000000000fc = (fVar87 - fVar64) - fVar65;
                                    bVar16 = true;
                                    if ((fVar60 <= fStack00000000000000fc) &&
                                       (bVar16 = false, !NAN(fVar60))) {
                                      bVar16 = fVar60 == -1.0;
                                    }
                                    if (!bVar16) {
                                      fStack00000000000000fc = fVar60;
                                    }
                                    fVar60 = 0.0;
                                    if ((char)unaff_x19[0x1e] == '\0') {
                                      fVar60 = (float)FUN_03776cb4(&stack0x00001790,0);
                                      uVar71 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                    }
                                    fVar66 = *(float *)((long)unaff_x19 + 0x2d4);
                                    fVar75 = *(float *)((long)unaff_x19 + 0x4cc);
                                    if (uVar20 != 0xad) {
                                      fVar82 = fVar59;
                                    }
                                    fVar73 = (float)uVar71;
                                    fVar88 = 0.0;
                                    if ((0.0 < fVar73) &&
                                       (fVar88 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                      fVar88 = *(float *)(unaff_x19 + 0x99) -
                                               *(float *)(unaff_x19 + 0x9a);
                                    }
                                    uVar22 = *puVar2;
                                    fVar88 = (*(float *)(unaff_x19 + 0x97) - (fVar75 - fVar73)) +
                                             fVar88;
                                    if (fVar57 < fVar88) {
                                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                        *(uint *)((long)unaff_x19 + 0x2e4) = uVar22;
                                      }
                                      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      uVar35 = DAT_00d37868;
                                      if ((char)unaff_x19[0x47] != '\0') {
                                        fVar80 = *(float *)(unaff_x19 + 0x59);
                                        if (((fVar80 < *(float *)((long)unaff_x19 + 700)) &&
                                            (0.0 < fVar73)) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) {
                                          fVar86 = *(float *)((long)unaff_x19 + 700) +
                                                   ((fVar78 - fVar88) / (float)(int)unaff_x19[0x95])
                                                   / fVar86;
                                          if (fVar86 <= fVar80) {
                                            fVar86 = fVar80;
                                          }
                                          goto LAB_03554b48;
                                        }
                                        fVar73 = *(float *)((long)unaff_x19 + 0x1e4);
                                        fVar88 = *(float *)(unaff_x19 + 0x4a);
                                        uVar71 = (ulong)(uint)fVar88;
                                        if ((fVar88 < fVar73) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) {
                                          fVar86 = (fVar73 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                          if (fVar86 <= DAT_00d38b84) {
                                            fVar86 = DAT_00d38b84;
                                          }
                                          fVar63 = (fVar73 - fVar86) * 20.0 + 0.5;
                                          *(float *)((long)unaff_x19 + 0x23c) = fVar73;
                                          fVar86 = DAT_00d38e60;
                                          if (fVar63 != INFINITY) {
                                            fVar86 = (float)(int)fVar63 / 20.0;
                                          }
                                          if (fVar86 <= fVar88) {
                                            fVar86 = fVar88;
                                          }
                                          goto LAB_03554658;
                                        }
                                      }
                                      switch((int)unaff_x19[0x5c]) {
                                      case 1:
                                        lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar34 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar34 = *(long *)puVar13;
                                        }
                                        lVar36 = *(long *)(lVar34 + 0xb8);
                                        lVar34 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                          0x20);
                                        if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                                          lVar34 = FUN_01a46ff8(lVar34);
                                        }
                                        piVar32 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                                            *(long *)(*(long *)(*(
                                                  long *)(lVar34 + 0xc0) + 8) + 0x80) + 0xa0);
                                        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*piVar32 == 0) {
LAB_03554580:
                                          in_stack_000017c8 = DAT_00d37868;
                                          unaff_x29 = (undefined8 *)&stack0x000008a0;
                                          puVar2[0] = 0;
                                          puVar2[1] = 0;
                                          uVar89 = 0xffffffff;
                                        }
                                        else {
                                          lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          if (*(int *)(lVar34 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                            lVar34 = *(long *)puVar13;
                                          }
                                          FUN_0209b778(*(long *)(lVar34 + 0xb8) + 0x11f0,
                                                       &stack0x000008a0,
                                                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo)
                                          ;
                                          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
                                          iVar18 = FUN_0358c15c();
LAB_035529e8:
                                          unaff_x29 = (undefined8 *)&stack0x000008a0;
                                          iVar23 = *(int *)((long)unaff_x19 + 0x494) + -1;
                                          *(int *)((long)unaff_x19 + 0x494) = iVar23;
                                          in_stack_000017c8 = CONCAT44(0x2026,iVar23);
                                          iStack000000000000016c = iStack000000000000016c + 1;
                                          uVar89 = iVar18 - 1;
                                        }
                                        goto LAB_03550bd0;
                                      default:
                                        goto UnityEngine_AnimationClip__set_wrapMode;
                                      case 3:
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
LAB_03552550:
                                        uVar89 = FUN_0358c15c();
                                        break;
                                      case 5:
                                        if ((uVar22 == 0) || ((int)uVar89 < 0)) {
                                          uVar89 = 0xffffffff;
                                          *puVar2 = 0;
                                          in_stack_000017c8 = uVar35;
                                          goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
                                        }
                                        fVar82 = *(float *)(unaff_x19 + 0x99);
                                        unaff_x29 = (undefined8 *)&stack0x000008a0;
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar89 = FUN_0358c15c();
                                        if (fVar82 - fVar75 <= fVar57) {
                                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                          *(undefined4 *)(unaff_x19 + 0x93) =
                                               *(undefined4 *)((long)unaff_x19 + 0x494);
                                          uVar71 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                          *(float *)(unaff_x19 + 200) =
                                               *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                          lVar34 = NEON_rev64(uVar71,4);
                                          unaff_x19[0x99] = lVar34;
                                          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                          *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                          goto LAB_03550bd0;
                                        }
                                        break;
                                      case 6:
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar89 = FUN_0358c15c();
                                        lVar34 = unaff_x19[0x5d];
                                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                        }
                                        uVar29 = FUN_036cee6c(lVar34,0,0);
                                        if ((uVar29 & 1) != 0) {
                                          plVar53 = (long *)unaff_x19[0x5d];
                                          uVar35 = (**(code **)(*unaff_x19 + 0x518))();
                                          if (plVar53 == (long *)0x0) goto LAB_035574b8;
                                          (**(code **)(*plVar53 + 0x528))
                                                    (plVar53,uVar35,
                                                     *(undefined8 *)(*plVar53 + 0x530));
                                          lVar34 = unaff_x19[0x5d];
                                          if (lVar34 == 0) goto LAB_035574b8;
                                          *(int *)(lVar34 + 0x400) = (int)unaff_x19[0x80];
                                          FUN_0357ee30(lVar34,*(undefined4 *)
                                                               ((long)unaff_x19 + 0x494),0);
                                          plVar53 = (long *)unaff_x19[0x5d];
                                          if (plVar53 == (long *)0x0) goto LAB_035574b8;
                                          (**(code **)(*plVar53 + 0x7a8))
                                                    (plVar53,0,0,*(undefined8 *)(*plVar53 + 0x7b0));
                                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                        }
                                      }
UnityEngine_AnimationClip__get_hasMotionCurves:
                                      unaff_x29 = (undefined8 *)&stack0x000008a0;
                                      in_stack_000017c8 = CONCAT44(3,uVar22);
                                      goto LAB_03550bd0;
                                    }
UnityEngine_AnimationClip__set_wrapMode:
                                    puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    fVar60 = ABS(fVar84) + fVar60 * (1.0 - fVar66) * fVar82;
                                    fVar82 = 1.0;
                                    if ((uVar45 & 0x18) != 0) {
                                      fVar82 = DAT_00d38acc;
                                    }
                                    fVar84 = fVar82 * fStack00000000000000fc;
                                    if (fVar84 < fVar60) {
                                      uVar71 = (ulong)(uint)fVar67;
                                      if (((char)unaff_x19[0x5b] == '\0') ||
                                         (uVar22 == *(uint *)(unaff_x19 + 0x93))) {
                                        if (((char)unaff_x19[0x47] != '\0') &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) {
                                          fVar84 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                          if (fVar66 < fVar84) {
                                            fVar86 = fVar60 / (1.0 - fVar66);
                                            if (fVar66 <= 0.0) {
                                              fVar86 = fVar60;
                                            }
                                            fVar66 = fVar66 + (fVar60 - fVar82 * (
                                                  fStack00000000000000fc + DAT_00d38cc4)) / fVar86;
                                            goto LAB_035574e8;
                                          }
                                          fVar66 = *(float *)((long)unaff_x19 + 0x1e4);
                                          fVar84 = *(float *)(unaff_x19 + 0x4a);
                                          if (fVar84 < fVar66) {
                                            fVar86 = (fVar66 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                            if (fVar86 <= DAT_00d38b84) {
                                              fVar86 = DAT_00d38b84;
                                            }
                                            *(float *)((long)unaff_x19 + 0x23c) = fVar66;
                                            fVar66 = fVar66 - fVar86;
LAB_03557524:
                                            fVar63 = fVar66 * 20.0 + 0.5;
                                            fVar86 = DAT_00d38e60;
                                            if (fVar63 != INFINITY) {
                                              fVar86 = (float)(int)fVar63 / 20.0;
                                            }
                                            if (fVar86 <= fVar84) {
                                              fVar86 = fVar84;
                                            }
                                            goto LAB_03554658;
                                          }
                                        }
                                        iVar18 = (int)unaff_x19[0x5c];
                                        if (iVar18 == 1) {
                                          lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          if (*(int *)(lVar34 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                            lVar34 = *(long *)puVar13;
                                          }
                                          lVar36 = *(long *)(lVar34 + 0xb8);
                                          lVar34 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo
                                                            + 0x20);
                                          if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                                            lVar34 = FUN_01a46ff8(lVar34);
                                          }
                                          piVar32 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                                              *(long *)(*(long *)(*(
                                                  long *)(lVar34 + 0xc0) + 8) + 0x80) + 0xa0);
                                          puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          if (*piVar32 != 0) {
                                            lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            if (*(int *)(lVar34 + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                              lVar34 = *(long *)puVar13;
                                            }
                                            FUN_0209b778(*(long *)(lVar34 + 0xb8) + 0x11f0,
                                                         &stack0x000008a0,
                                                         *(undefined8 *)
                                                          OVRPlugin_OVRP_1_0_0_TypeInfo);
                                            memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
                                            goto LAB_035529dc;
                                          }
                                          goto LAB_03554580;
                                        }
                                        if (iVar18 != 6) {
                                          if (iVar18 == 3) {
                                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                        0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                            }
                                            goto LAB_03552550;
                                          }
                                          goto LAB_03552f54;
                                        }
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar89 = FUN_0358c15c();
                                        lVar34 = unaff_x19[0x5d];
                                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                        }
                                        uVar29 = FUN_036cee6c(lVar34,0,0);
                                        if ((uVar29 & 1) != 0) {
                                          plVar53 = (long *)unaff_x19[0x5d];
                                          uVar35 = (**(code **)(*unaff_x19 + 0x518))();
                                          if (plVar53 == (long *)0x0) goto LAB_035574b8;
                                          (**(code **)(*plVar53 + 0x528))
                                                    (plVar53,uVar35,
                                                     *(undefined8 *)(*plVar53 + 0x530));
                                          lVar34 = unaff_x19[0x5d];
                                          if (lVar34 == 0) goto LAB_035574b8;
                                          *(int *)(lVar34 + 0x400) = (int)unaff_x19[0x80];
                                          FUN_0357ee30(lVar34,*(undefined4 *)
                                                               ((long)unaff_x19 + 0x494),0);
                                          plVar53 = (long *)unaff_x19[0x5d];
                                          if (plVar53 == (long *)0x0) goto LAB_035574b8;
                                          (**(code **)(*plVar53 + 0x7a8))
                                                    (plVar53,0,0,*(undefined8 *)(*plVar53 + 0x7b0));
                                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                        }
LAB_03552b00:
                                        unaff_x29 = (undefined8 *)&stack0x000008a0;
                                        in_stack_000017c8 = CONCAT44(3,*puVar2);
                                      }
                                      else {
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        unaff_x29 = (undefined8 *)&stack0x000008a0;
                                        uVar89 = FUN_0358c15c();
                                        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                          lVar34 = *plVar4;
                                          if ((lVar34 == 0) ||
                                             (lVar36 = *(long *)(lVar34 + 0x38), lVar36 == 0))
                                          goto LAB_035574b8;
                                          if (*(uint *)(lVar36 + 0x18) <= *puVar2)
                                          goto LAB_035575f4;
                                          fVar84 = *(float *)(unaff_x19 + 0x9b);
                                          fVar66 = 0.0;
                                          if ((0.0 < fVar84) &&
                                             (fVar66 = 0.0,
                                             *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                            fVar66 = *(float *)(unaff_x19 + 0x99) -
                                                     *(float *)(unaff_x19 + 0x9a);
                                          }
                                          fVar66 = fVar63 * *(float *)(unaff_x19 + 0x57) +
                                                   *(float *)(lVar36 + (long)(int)*puVar2 * 0x178 +
                                                             0x154) +
                                                   (fVar66 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                                   fVar86 * (fVar58 + *(float *)((long)unaff_x19 +
                                                                                700));
                                        }
                                        else {
                                          lVar34 = unaff_x19[0x6d];
                                          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                                          if (lVar34 == 0) goto LAB_035574b8;
                                          fVar84 = *(float *)(unaff_x19 + 0x9b);
                                          fVar66 = *(float *)(unaff_x19 + 0x58) +
                                                   fVar63 * *(float *)(unaff_x19 + 0x57);
                                        }
                                        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar34 = *(long *)(lVar34 + 0x38);
                                        if (lVar34 == 0) goto LAB_035574b8;
                                        uVar46 = *(uint *)((long)unaff_x19 + 0x494);
                                        if ((*(uint *)(lVar34 + 0x18) <= uVar46) ||
                                           (uVar9 = uVar46 - 1, *(uint *)(lVar34 + 0x18) <= uVar9))
                                        goto LAB_035575f4;
                                        uVar71 = (ulong)(uint)(fVar66 + *(float *)(unaff_x19 + 0x97)
                                                              );
                                        fVar75 = (fVar66 + *(float *)(unaff_x19 + 0x97) + fVar84) -
                                                 *(float *)(lVar34 + (long)(int)uVar46 * 0x178 +
                                                           0x158);
                                        if ((bVar11 || *(short *)(lVar34 + (long)(int)uVar9 * 0x178
                                                                 + 0x20) != 0xad) ||
                                           ((fVar57 <= fVar75 && ((int)unaff_x19[0x5c] != 0)))) {
                                          if (*(short *)(lVar34 + (long)(int)uVar46 * 0x178 + 0x20)
                                              == 0xad) {
                                            bVar11 = true;
                                          }
                                          else {
                                            if ((bVar12 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                                              fVar66 = *(float *)((long)unaff_x19 + 0x2d4);
                                              fVar84 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                              if ((fVar84 <= fVar66) ||
                                                 ((int)unaff_x19[0x49] <=
                                                  *(int *)((long)unaff_x19 + 0x244))) {
                                                fVar66 = *(float *)((long)unaff_x19 + 0x1e4);
                                                uVar71 = (ulong)(uint)fVar66;
                                                fVar84 = *(float *)(unaff_x19 + 0x4a);
                                                if ((fVar66 <= fVar84) ||
                                                   ((int)unaff_x19[0x49] <=
                                                    *(int *)((long)unaff_x19 + 0x244)))
                                                goto LAB_03552d44;
LAB_03557594:
                                                fVar86 = (fVar66 - *(float *)(unaff_x19 + 0x48)) *
                                                         0.5;
                                                if (fVar86 <= DAT_00d38b84) {
                                                  fVar86 = DAT_00d38b84;
                                                }
                                                *(float *)((long)unaff_x19 + 0x23c) = fVar66;
                                                fVar66 = fVar66 - fVar86;
                                                goto LAB_03557524;
                                              }
LAB_03557558:
                                              fVar86 = fVar60;
                                              if (0.0 < fVar66) {
                                                fVar86 = fVar60 / (1.0 - fVar66);
                                              }
                                              fVar66 = fVar66 + (fVar60 - fVar82 * (
                                                  fStack00000000000000fc + DAT_00d38cc4)) / fVar86;
LAB_035574e8:
                                              if (fVar84 <= fVar66) {
                                                fVar66 = fVar84;
                                              }
                                              *(float *)((long)unaff_x19 + 0x2d4) = fVar66;
                                              return;
                                            }
LAB_03552d44:
                                            lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            if (*(int *)(lVar34 + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                              lVar34 = *(long *)puVar13;
                                            }
                                            iVar18 = *(int *)(*(long *)(lVar34 + 0xb8) + 0xe78);
                                            if (((iVar18 != iStack0000000000000034) &&
                                                (iVar18 != -1)) && (bVar12 == 1)) {
                                              if (*(int *)(lVar34 + 0xe0) == 0) {
                                                thunk_FUN_01a58e78();
                                              }
                                              uVar89 = FUN_0358c15c();
                                              if ((unaff_x19[0x6d] == 0) ||
                                                 (lVar34 = *(long *)(unaff_x19[0x6d] + 0x38),
                                                 lVar34 == 0)) goto LAB_035574b8;
                                              uVar46 = *puVar2 - 1;
                                              if (*(uint *)(lVar34 + 0x18) <= uVar46)
                                              goto LAB_035575f4;
                                              iStack0000000000000034 = iVar18;
                                              if (*(short *)(lVar34 + (long)(int)uVar46 * 0x178 +
                                                            0x20) == 0xad) {
                                                bVar11 = false;
                                                in_stack_000017c8 = CONCAT44(0x2d,uVar46);
                                                *puVar2 = uVar46;
                                                uVar89 = uVar89 - 1;
                                                goto LAB_03550bd0;
                                              }
                                            }
                                            if (fVar75 <= fVar57) {
switchD_03552ef4_caseD_0:
                                              uVar71 = uVar31;
                                              FUN_0358cbd4(fVar86,uVar31,fVar63,
                                                           *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                           fStack00000000000000d0,fVar68,
                                                           fStack00000000000000fc,fVar58);
                                            }
                                            else {
                                              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                                *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                                     *(undefined4 *)((long)unaff_x19 + 0x494);
                                              }
                                              fVar84 = fVar57;
                                              if ((char)unaff_x19[0x47] != '\0') {
                                                fVar84 = *(float *)(unaff_x19 + 0x59);
                                                if ((fVar84 < *(float *)((long)unaff_x19 + 700)) &&
                                                   (*(int *)((long)unaff_x19 + 0x244) <
                                                    (int)unaff_x19[0x49])) {
                                                  fVar86 = *(float *)((long)unaff_x19 + 700) +
                                                           ((fVar78 - fVar75) /
                                                           (float)((int)unaff_x19[0x95] + 1)) /
                                                           fVar86;
                                                  if (fVar86 <= fVar84) {
                                                    fVar86 = fVar84;
                                                  }
LAB_03554b48:
                                                  *(float *)((long)unaff_x19 + 700) = fVar86;
                                                  return;
                                                }
                                                fVar66 = *(float *)((long)unaff_x19 + 0x2d4);
                                                fVar84 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                                if ((fVar66 < fVar84) &&
                                                   (*(int *)((long)unaff_x19 + 0x244) <
                                                    (int)unaff_x19[0x49])) goto LAB_03557558;
                                                fVar66 = *(float *)((long)unaff_x19 + 0x1e4);
                                                uVar71 = (ulong)(uint)fVar66;
                                                fVar84 = *(float *)(unaff_x19 + 0x4a);
                                                if ((fVar84 < fVar66) &&
                                                   (*(int *)((long)unaff_x19 + 0x244) <
                                                    (int)unaff_x19[0x49])) goto LAB_03557594;
                                              }
                                              switch((int)unaff_x19[0x5c]) {
                                              case 0:
                                              case 2:
                                              case 4:
                                                goto switchD_03552ef4_caseD_0;
                                              case 1:
                                                lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                                if (*(int *)(lVar34 + 0xe0) == 0) {
                                                  thunk_FUN_01a58e78();
                                                  lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                                }
                                                lVar36 = *(long *)(lVar34 + 0xb8);
                                                lVar34 = *(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                                if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                                                  lVar34 = FUN_01a46ff8(lVar34);
                                                }
                                                piVar32 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                                                    *(long *)(*(long
                                                                                                *)(*
                                                  (long *)(lVar34 + 0xc0) + 8) + 0x80) + 0xa0);
                                                if (*piVar32 == 0) {
                                                  bVar11 = false;
                                                  goto LAB_03554580;
                                                }
                                                lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                                if (*(int *)(lVar34 + 0xe0) == 0) {
                                                  thunk_FUN_01a58e78();
                                                  lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                                }
                                                FUN_0209b778(*(long *)(lVar34 + 0xb8) + 0x11f0,
                                                             &stack0x000008a0,
                                                             *(undefined8 *)
                                                              OVRPlugin_OVRP_1_0_0_TypeInfo);
                                                memcpy(&stack0x00001008,&stack0x000008a0,0x378);
                                                iVar18 = FUN_0358c15c();
                                                bVar11 = false;
                                                goto LAB_035529e8;
                                              case 3:
                                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo
                                                            + 0xe0) == 0) {
                                                  thunk_FUN_01a58e78();
                                                }
                                                uVar89 = FUN_0358c15c();
                                                bVar11 = false;
                                                goto UnityEngine_AnimationClip__get_hasMotionCurves;
                                              case 5:
                                                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                                uVar71 = uVar31;
                                                FUN_0358cbd4(fVar86,uVar31,fVar63,
                                                             *(undefined4 *)
                                                              ((long)unaff_x19 + 0x2fc),
                                                             fStack00000000000000d0,fVar68,
                                                             fStack00000000000000fc,fVar58);
                                                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                                *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                                *(int *)(unaff_x19 + 0x96) =
                                                     (int)unaff_x19[0x96] + 1;
                                                break;
                                              case 6:
                                                lVar34 = unaff_x19[0x5d];
                                                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0)
                                                {
                                                  thunk_FUN_01a58e78();
                                                }
                                                uVar29 = FUN_036cee6c(lVar34,0,0);
                                                if ((uVar29 & 1) != 0) {
                                                  plVar53 = (long *)unaff_x19[0x5d];
                                                  uVar35 = (**(code **)(*unaff_x19 + 0x518))();
                                                  if (plVar53 == (long *)0x0) goto LAB_035574b8;
                                                  (**(code **)(*plVar53 + 0x528))
                                                            (plVar53,uVar35,
                                                             *(undefined8 *)(*plVar53 + 0x530));
                                                  lVar34 = unaff_x19[0x5d];
                                                  if (lVar34 == 0) goto LAB_035574b8;
                                                  *(int *)(lVar34 + 0x400) = (int)unaff_x19[0x80];
                                                  FUN_0357ee30(lVar34,*(undefined4 *)
                                                                       ((long)unaff_x19 + 0x494),0);
                                                  plVar53 = (long *)unaff_x19[0x5d];
                                                  if (plVar53 == (long *)0x0) goto LAB_035574b8;
                                                  (**(code **)(*plVar53 + 0x7a8))
                                                            (plVar53,0,0,
                                                             *(undefined8 *)(*plVar53 + 0x7b0));
                                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                                }
                                                bVar11 = false;
                                                goto LAB_03552b00;
                                              default:
                                                bVar11 = false;
                                                goto LAB_03552f54;
                                              }
                                            }
                                            bVar12 = 1;
                                            bVar11 = false;
                                            bVar10 = true;
                                          }
                                        }
                                        else {
                                          bVar11 = false;
                                          in_stack_000017c8 = CONCAT44(0x2d,uVar9);
                                          *puVar2 = uVar9;
                                          uVar89 = uVar89 - 1;
                                        }
                                      }
                                      goto LAB_03550bd0;
                                    }
LAB_03552f54:
                                    if (uVar20 != 0xad) {
                                      if (uVar20 == 9) {
                                        lVar34 = *plVar4;
                                        if ((lVar34 != 0) &&
                                           (lVar36 = *(long *)(lVar34 + 0x38), lVar36 != 0)) {
                                          uVar22 = *puVar2;
                                          if (*(uint *)(lVar36 + 0x18) <= uVar22) goto LAB_035575f4;
                                          *(undefined1 *)
                                           (lVar36 + (long)(int)uVar22 * 0x178 + 0x194) = 0;
                                          *(uint *)((long)unaff_x19 + 0x4a4) = uVar22;
                                          lVar36 = *(long *)(lVar34 + 0x50);
                                          if (lVar36 != 0) {
                                            if (*(uint *)(unaff_x19 + 0x95) <
                                                *(uint *)(lVar36 + 0x18)) {
                                              lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 +
                                                                                    0x95) * 0x5c;
                                              *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
                                              goto LAB_03552fcc;
                                            }
                                            goto LAB_035575f4;
                                          }
                                        }
                                      }
                                      else {
                                        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                                          (**(code **)(*unaff_x19 + 0x898))(fVar84,fVar67);
                                        }
                                        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
                                        }
                                        if (bVar10) {
                                          *(uint *)((long)unaff_x19 + 0x49c) = *puVar2;
                                        }
                                        *(uint *)((long)unaff_x19 + 0x4a4) = *puVar2;
                                        *(int *)((long)unaff_x19 + 0x4ac) =
                                             *(int *)((long)unaff_x19 + 0x4ac) + 1;
                                        if ((unaff_x19[0x6d] != 0) &&
                                           (lVar34 = *(long *)(unaff_x19[0x6d] + 0x50), lVar34 != 0)
                                           ) {
                                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar34 + 0x18)
                                             ) {
                                            lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95)
                                                              * 0x5c;
                                            bVar10 = false;
                                            *(float *)(lVar34 + 0x60) = fVar64;
                                            *(float *)(lVar34 + 100) = fVar65;
                                            goto LAB_035530c4;
                                          }
                                          goto LAB_035575f4;
                                        }
                                      }
                                      goto LAB_035574b8;
                                    }
                                    if ((*plVar4 == 0) ||
                                       (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                    *(undefined1 *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x194) = 0
                                    ;
                                  }
                                  else {
                                    if (((uVar20 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)
                                       ) {
                                      fVar60 = (float)uVar71;
                                      fVar82 = 0.0;
                                      if ((0.0 < fVar60) &&
                                         (fVar82 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                                      {
                                        fVar82 = *(float *)(unaff_x19 + 0x99) -
                                                 *(float *)(unaff_x19 + 0x9a);
                                      }
                                      uVar71 = (ulong)(uint)fVar57;
                                      if (fVar57 < (*(float *)(unaff_x19 + 0x97) -
                                                   (*(float *)((long)unaff_x19 + 0x4cc) - fVar60)) +
                                                   fVar82) {
                                        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                          *(uint *)((long)unaff_x19 + 0x2e4) = uVar22;
                                        }
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar89 = FUN_0358c15c();
                                        lVar34 = unaff_x19[0x5d];
                                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                        }
                                        uVar29 = FUN_036cee6c(lVar34,0,0);
                                        if ((uVar29 & 1) != 0) {
                                          plVar53 = (long *)unaff_x19[0x5d];
                                          uVar35 = (**(code **)(*unaff_x19 + 0x518))();
                                          if (plVar53 != (long *)0x0) {
                                            (**(code **)(*plVar53 + 0x528))
                                                      (plVar53,uVar35,
                                                       *(undefined8 *)(*plVar53 + 0x530));
                                            lVar34 = unaff_x19[0x5d];
                                            if (lVar34 != 0) {
                                              *(int *)(lVar34 + 0x400) = (int)unaff_x19[0x80];
                                              FUN_0357ee30(lVar34,*(undefined4 *)
                                                                   ((long)unaff_x19 + 0x494),0);
                                              plVar53 = (long *)unaff_x19[0x5d];
                                              if (plVar53 != (long *)0x0) {
                                                (**(code **)(*plVar53 + 0x7a8))
                                                          (plVar53,0,0,
                                                           *(undefined8 *)(*plVar53 + 0x7b0));
                                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                                goto UnityEngine_AnimationClip__get_hasMotionCurves;
                                              }
                                            }
                                          }
                                          goto LAB_035574b8;
                                        }
                                        goto UnityEngine_AnimationClip__get_hasMotionCurves;
                                      }
                                    }
                                    if ((((uVar20 - 0x2007 < 0x23) &&
                                         ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x600000001U)
                                          != 0)) || (uVar20 - 10 < 2)) || (uVar20 == 0xa0)) {
LAB_03552b54:
                                      if (((uVar20 != 0xad) && (uVar20 != 0x200b)) &&
                                         (uVar20 != 0x2060)) {
                                        lVar34 = *plVar4;
                                        if ((lVar34 == 0) ||
                                           (lVar36 = *(long *)(lVar34 + 0x50), lVar36 == 0))
                                        goto LAB_035574b8;
                                        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                        goto LAB_035575f4;
                                        lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                          0x5c;
                                        *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
                                        *(int *)(lVar34 + 0x20) = *(int *)(lVar34 + 0x20) + 1;
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar31 = FUN_026b97f8(uVar20,0);
                                      if ((uVar31 & 1) != 0) goto LAB_03552b54;
                                    }
                                    if (uVar20 == 0xa0) {
                                      if ((*plVar4 == 0) ||
                                         (lVar34 = *(long *)(*plVar4 + 0x50), lVar34 == 0))
                                      goto LAB_035574b8;
                                      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                      goto LAB_035575f4;
                                      lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
LAB_03552fcc:
                                      *(int *)(lVar34 + 0x20) = *(int *)(lVar34 + 0x20) + 1;
                                    }
                                  }
LAB_035530c4:
                                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                                  if (((int)unaff_x19[0x5c] == 1) && ((uVar20 == 0x2d || (!bVar17)))
                                     ) {
                                    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                                    fVar82 = *(float *)(unaff_x19 + 0x3d);
                                    iVar18 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                                    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                                    fVar64 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                                    lVar34 = unaff_x19[0xca];
                                    fVar60 = fVar74;
                                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                      fVar60 = 1.0;
                                    }
                                    if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0))
                                    goto LAB_035574b8;
                                    fVar67 = *(float *)((long)unaff_x19 + 0x404);
                                    fVar66 = *(float *)(lVar34 + 0x2c);
                                    fVar65 = (float)FUN_03776ea8(*(long *)(lVar34 + 0x20),0);
                                    fVar84 = *(float *)(unaff_x19 + 0x6a);
                                    fVar65 = fVar67 * (fVar82 / (float)iVar18) * fVar64 * fVar60 *
                                             fVar66 * fVar65;
                                    fVar82 = *(float *)((long)unaff_x19 + 0x354);
                                    if ((uVar20 == 10) &&
                                       (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
                                    {
                                      if ((*plVar4 == 0) ||
                                         (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                      goto LAB_035574b8;
                                      uVar22 = *(int *)((long)unaff_x19 + 0x494) - 1;
                                      if (*(uint *)(lVar34 + 0x18) <= uVar22) goto LAB_035575f4;
                                      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                                      fVar60 = *(float *)(lVar34 + (long)(int)uVar22 * 0x178 + 0x60)
                                      ;
                                      iVar18 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                                      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                                      fVar67 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                                      lVar34 = unaff_x19[0xca];
                                      fVar64 = fVar74;
                                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                        fVar64 = 1.0;
                                      }
                                      if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0))
                                      goto LAB_035574b8;
                                      fVar66 = *(float *)((long)unaff_x19 + 0x404);
                                      fVar75 = *(float *)(lVar34 + 0x2c);
                                      fVar65 = (float)FUN_03776ea8(*(long *)(lVar34 + 0x20),0);
                                      if ((*plVar4 == 0) ||
                                         (lVar34 = *(long *)(*plVar4 + 0x50), lVar34 == 0))
                                      goto LAB_035574b8;
                                      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                      goto LAB_035575f4;
                                      lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
                                      fVar84 = *(float *)(lVar34 + 0x60);
                                      fVar82 = *(float *)(lVar34 + 100);
                                      fVar65 = fVar66 * (fVar60 / (float)iVar18) * fVar67 * fVar64 *
                                               fVar75 * fVar65;
                                    }
                                    fVar67 = *(float *)(unaff_x19 + 0x9b);
                                    fVar60 = 0.0;
                                    fVar64 = 0.0;
                                    if ((0.0 < fVar67) &&
                                       (fVar64 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                      fVar64 = *(float *)(unaff_x19 + 0x99) -
                                               *(float *)(unaff_x19 + 0x9a);
                                    }
                                    fVar75 = *(float *)(unaff_x19 + 0x97);
                                    fVar88 = *(float *)((long)unaff_x19 + 0x4cc);
                                    fVar66 = *(float *)(unaff_x19 + 200);
                                    if ((char)unaff_x19[0x1e] == '\0') {
                                      if ((unaff_x19[0xca] == 0) ||
                                         (lVar34 = *(long *)(unaff_x19[0xca] + 0x20), lVar34 == 0))
                                      goto LAB_035574b8;
                                      FUN_03776e6c(&stack0x000008a0,lVar34,0);
                                      fVar60 = (float)FUN_03776cb4(&stack0x00001700,0);
                                    }
                                    puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    fVar73 = *(float *)(unaff_x19 + 0x6c);
                                    fVar82 = (fVar87 - fVar84) - fVar82;
                                    bVar16 = true;
                                    if ((fVar73 <= fVar82) && (bVar16 = false, !NAN(fVar73))) {
                                      bVar16 = fVar73 == -1.0;
                                    }
                                    if (!bVar16) {
                                      fVar82 = fVar73;
                                    }
                                    fVar84 = 1.0;
                                    if ((uVar45 & 0x18) != 0) {
                                      fVar84 = DAT_00d38acc;
                                    }
                                    if (((fVar75 - (fVar88 - fVar67)) + fVar64 < fVar57) &&
                                       (ABS(fVar66) +
                                        fVar65 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)
                                                          ) < fVar84 * fVar82)) {
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      FUN_0358c4f0();
                                      lVar34 = *(long *)(*(long *)puVar13 + 0xb8);
                                      memcpy(&stack0x00000528,(void *)(lVar34 + 0x788),0x378);
                                      FUN_0209b210(lVar34 + 0x11f0,&stack0x00000528,
                                                   *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                    }
                                  }
                                  lVar34 = *plVar4;
                                  if (lVar34 == 0) goto LAB_035574b8;
                                  lVar36 = *(long *)(lVar34 + 0x38);
                                  uVar31 = (ulong)(uint)fVar59;
                                  if (lVar36 == 0) goto LAB_035574b8;
                                  if (*(uint *)(lVar36 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  uVar22 = *(uint *)(unaff_x19 + 0x95);
                                  lVar36 = lVar36 + (long)(int)*puVar2 * 0x178;
                                  *(uint *)(lVar36 + 100) = uVar22;
                                  *(int *)(lVar36 + 0x68) = (int)unaff_x19[0x96];
                                  if ((bVar17) ||
                                     ((uVar20 < 0xe &&
                                      ((1 << (ulong)(uVar20 & 0x1f) & 0x2c00U) != 0)))) {
                                    lVar34 = *(long *)(lVar34 + 0x50);
                                    if (lVar34 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar22) goto LAB_035575f4;
                                    if (*(int *)(lVar34 + (long)(int)uVar22 * 0x5c + 0x24) == 1)
                                    goto LAB_0355346c;
                                  }
                                  else {
                                    lVar34 = *(long *)(lVar34 + 0x50);
                                    if (lVar34 == 0) goto LAB_035574b8;
LAB_0355346c:
                                    if (*(uint *)(lVar34 + 0x18) <= uVar22) goto LAB_035575f4;
                                    *(int *)(lVar34 + (long)(int)uVar22 * 0x5c + 0x68) =
                                         (int)unaff_x19[0x4f];
                                  }
                                  if (uVar20 == 9) {
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fVar82 = (float)FUN_03776a48(*plVar54 + 0x50,0);
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fVar64 = *(float *)(unaff_x19 + 200);
                                    fVar60 = (float)NEON_ucvtf((uint)*(byte *)(*plVar54 + 0x1b9));
                                    fVar82 = fVar59 * fVar82 * fVar60;
                                    fVar60 = fVar82 * (float)(int)(fVar64 / fVar82);
                                    uVar71 = (ulong)(uint)fVar60;
                                    if (fVar60 <= fVar64) {
                                      fVar60 = fVar64 + fVar82;
                                    }
LAB_03553678:
                                    *(float *)(unaff_x19 + 200) = fVar60;
                                  }
                                  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                                    if ((char)unaff_x19[0x1e] == '\0') {
                                      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                        fVar64 = 1.0;
                                      }
                                      else {
                                        fVar64 = (float)thunk_FUN_036bc400(lVar51,0);
                                      }
                                      fVar60 = *(float *)(unaff_x19 + 200);
                                      fVar83 = (float)FUN_03776cb4(&stack0x00001790,0);
                                      if (unaff_x19[0x20] != 0) {
                                        fVar82 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                                        fVar60 = fVar60 + fVar82 * (*(float *)((long)unaff_x19 +
                                                                              0x2ac) +
                                                                   fVar59 * (fVar64 * fVar83 + 0.0)
                                                                   + fVar63 * (
                                                  fStack00000000000000d0 +
                                                  fVar68 + *(float *)(unaff_x19[0x20] + 0x1ac)));
                                        *(float *)(unaff_x19 + 200) = fVar60;
                                        goto joined_r0x035535c0;
                                      }
                                      goto LAB_035574b8;
                                    }
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                             (*(float *)((long)unaff_x19 + 0x2ac) +
                                             fVar59 * 0.0 +
                                             fVar63 * (fStack00000000000000d0 +
                                                      fVar68 + *(float *)(*plVar54 + 0x1ac)));
                                    uVar71 = (ulong)(uint)fVar60;
                                    fVar60 = *(float *)(unaff_x19 + 200) - fVar60;
                                    *(float *)(unaff_x19 + 200) = fVar60;
                                    if ((uVar20 == 0x200b) || (uVar21 != 0)) {
                                      fVar82 = fVar63 * *(float *)((long)unaff_x19 + 0x2b4);
                                      uVar71 = (ulong)(uint)fVar82;
                                      fVar60 = fVar60 - fVar82;
                                      goto LAB_03553678;
                                    }
                                  }
                                  else {
                                    if (*plVar54 == 0) goto LAB_035574b8;
                                    fVar82 = *(float *)(unaff_x19 + 200);
                                    fVar60 = fVar82 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                      (*(float *)((long)unaff_x19 + 0x2ac) +
                                                      (*(float *)(unaff_x19 + 0x56) - fVar83) +
                                                      fVar63 * (fVar68 + *(float *)(*plVar54 + 0x1ac
                                                                                   )));
                                    *(float *)(unaff_x19 + 200) = fVar60;
joined_r0x035535c0:
                                    if ((uVar20 == 0x200b) ||
                                       (uVar71 = (ulong)(uint)fVar82, uVar21 != 0)) {
                                      fVar82 = fVar63 * *(float *)((long)unaff_x19 + 0x2b4);
                                      uVar71 = (ulong)(uint)fVar82;
                                      fVar60 = fVar60 + fVar82;
                                      goto LAB_03553678;
                                    }
                                  }
                                  lVar34 = *plVar4;
                                  if ((lVar34 == 0) ||
                                     (lVar36 = *(long *)(lVar34 + 0x38), lVar36 == 0))
                                  goto LAB_035574b8;
                                  uVar22 = *puVar2;
                                  uVar45 = (uint)*(undefined8 *)(lVar36 + 0x18);
                                  if (uVar45 <= uVar22) goto LAB_035575f4;
                                  *(float *)(lVar36 + (long)(int)uVar22 * 0x178 + 0x144) = fVar60;
                                  uVar46 = uVar20;
                                  if ((int)uVar20 < 0xd) {
                                    if ((uVar20 - 10 < 2) || (uVar20 == 3)) goto LAB_0355371c;
LAB_03553700:
                                    if (((bool)(bVar17 & uVar20 == 0x2d)) || (uVar22 == uVar26))
                                    goto LAB_0355371c;
                                  }
                                  else {
                                    if (1 < uVar20 - 0x2028) {
                                      if (uVar20 != 0xd) goto LAB_03553700;
                                      uVar71 = 0;
                                      *(float *)(unaff_x19 + 200) =
                                           *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                      if (uVar22 != uVar26) goto LAB_03553c8c;
                                    }
LAB_0355371c:
                                    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                                      fVar82 = *(float *)(unaff_x19 + 0x99);
                                      fVar60 = *(float *)(unaff_x19 + 0x9a);
                                      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      fVar82 = fVar82 - fVar60;
                                      if (((fVar76 < ABS(fVar82)) &&
                                          (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                                         (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                                        FUN_0358c860(fVar82);
                                        *(float *)((long)unaff_x19 + 0x4c4) =
                                             *(float *)((long)unaff_x19 + 0x4c4) - fVar82;
                                        *(float *)(unaff_x19 + 0x9b) =
                                             fVar82 + *(float *)(unaff_x19 + 0x9b);
                                        puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar34 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar34 = *(long *)puVar13;
                                        }
                                        lVar36 = *(long *)(lVar34 + 0xb8);
                                        if (*(int *)(lVar36 + 0x7ac) == (int)unaff_x19[0x95]) {
                                          if (*(int *)(lVar34 + 0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                            lVar36 = *(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                                          }
                                          FUN_0209b778(lVar36 + 0x11f0,&stack0x000008a0,
                                                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo)
                                          ;
                                          puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                          memcpy((void *)(*(long *)(lVar34 + 0xb8) + 0x788),
                                                 &stack0x000008a0,0x378);
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (*(long *)(lVar34 + 0xb8) + 0x818,0);
                                          lVar34 = *(long *)(*(long *)puVar13 + 0xb8);
                                          *(float *)(lVar34 + 0x7bc) =
                                               fVar82 + *(float *)(lVar34 + 0x7bc);
                                          *(float *)(lVar34 + 0x800) =
                                               fVar82 + *(float *)(lVar34 + 0x800);
                                          memcpy(&stack0x000001b0,(void *)(lVar34 + 0x788),0x378);
                                          FUN_0209b210(lVar34 + 0x11f0,&stack0x000001b0,
                                                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo
                                                      );
                                        }
                                      }
                                    }
                                    fVar64 = *(float *)(unaff_x19 + 0x9b);
                                    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                                    fVar60 = *(float *)((long)unaff_x19 + 0x4cc) - fVar64;
                                    fVar82 = *(float *)((long)unaff_x19 + 0x4c4);
                                    if (fVar60 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                      fVar82 = fVar60;
                                    }
                                    *(float *)((long)unaff_x19 + 0x4c4) = fVar82;
                                    fVar83 = *(float *)(unaff_x19 + 0x99);
                                    if (in_stack_000017d4 == '\0') {
                                      fVar90 = fVar82;
                                    }
                                    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                                       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494)
                                        || ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                                      in_stack_000017d4 = '\x01';
                                    }
                                    lVar34 = *plVar4;
                                    if ((lVar34 == 0) ||
                                       (lVar36 = *(long *)(lVar34 + 0x50), lVar36 == 0))
                                    goto LAB_035574b8;
                                    uVar22 = *(uint *)(unaff_x19 + 0x95);
                                    if (*(uint *)(lVar36 + 0x18) <= uVar22) goto LAB_035575f4;
                                    lVar55 = unaff_x19[0x93];
                                    lVar30 = lVar36 + (long)(int)uVar22 * 0x5c;
                                    *(int *)(lVar30 + 0x34) = (int)lVar55;
                                    uVar45 = *(uint *)(unaff_x19 + 0x93);
                                    if ((int)lVar55 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                                      uVar45 = *(uint *)((long)unaff_x19 + 0x49c);
                                    }
                                    *(uint *)((long)unaff_x19 + 0x49c) = uVar45;
                                    *(uint *)(lVar30 + 0x38) = uVar45;
                                    *(undefined4 *)(unaff_x19 + 0x94) =
                                         *(undefined4 *)((long)unaff_x19 + 0x494);
                                    *(undefined4 *)(lVar30 + 0x3c) =
                                         *(undefined4 *)((long)unaff_x19 + 0x494);
                                    iVar18 = *(int *)((long)unaff_x19 + 0x49c);
                                    if ((int)uVar45 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                                      iVar18 = *(int *)((long)unaff_x19 + 0x4a4);
                                    }
                                    *(int *)((long)unaff_x19 + 0x4a4) = iVar18;
                                    *(int *)(lVar30 + 0x40) = iVar18;
                                    *(int *)(lVar30 + 0x24) =
                                         (*(int *)(lVar30 + 0x3c) - *(int *)(lVar30 + 0x34)) + 1;
                                    *(undefined4 *)(lVar30 + 0x28) =
                                         *(undefined4 *)((long)unaff_x19 + 0x4ac);
                                    lVar34 = *(long *)(lVar34 + 0x38);
                                    if (lVar34 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar45) goto LAB_035575f4;
                                    uVar70 = *(undefined4 *)
                                              (lVar34 + (long)(int)uVar45 * 0x178 + 0x11c);
                                    lVar36 = lVar36 + (long)(int)uVar22 * 0x5c;
                                    *(float *)(lVar36 + 0x70) = fVar60;
                                    *(undefined4 *)(lVar36 + 0x6c) = uVar70;
                                    lVar34 = *plVar4;
                                    if ((lVar34 == 0) ||
                                       (lVar36 = *(long *)(lVar34 + 0x50), lVar36 == 0))
                                    goto LAB_035574b8;
                                    if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_035575f4;
                                    lVar34 = *(long *)(lVar34 + 0x38);
                                    if (lVar34 == 0) goto LAB_035574b8;
                                    if (*(uint *)(lVar34 + 0x18) <=
                                        *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
                                    fVar83 = fVar83 - fVar64;
                                    uVar71 = (ulong)(uint)fVar83;
                                    lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    *(undefined4 *)(lVar36 + 0x74) =
                                         *(undefined4 *)
                                          (lVar34 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) *
                                                    0x178 + 0x128);
                                    *(float *)(lVar36 + 0x78) = fVar83;
                                    lVar34 = *plVar4;
                                    if ((lVar34 == 0) ||
                                       (lVar55 = *(long *)(lVar34 + 0x50), lVar55 == 0))
                                    goto LAB_035574b8;
                                    lVar30 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                                    if (*(uint *)(lVar55 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto LAB_035575f4;
                                    lVar36 = lVar55 + lVar30 * 0x5c;
                                    *(float *)(lVar36 + 0x44) =
                                         *(float *)(lVar36 + 0x74) - fVar59 * fStack000000000000015c
                                    ;
                                    *(float *)(lVar36 + 0x5c) = fStack00000000000000fc;
                                    if (*(int *)(lVar36 + 0x24) == 1) {
                                      *(int *)(lVar55 + lVar30 * 0x5c + 0x68) = (int)unaff_x19[0x4f]
                                      ;
                                    }
                                    if ((*plVar54 == 0) ||
                                       (lVar36 = *(long *)(lVar34 + 0x38), lVar36 == 0))
                                    goto LAB_035574b8;
                                    lVar48 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                                    uVar45 = (uint)*(undefined8 *)(lVar36 + 0x18);
                                    if (uVar45 <= *(uint *)((long)unaff_x19 + 0x4a4))
                                    goto LAB_035575f4;
                                    if ((*(char *)(lVar36 + lVar48 * 0x178 + 0x194) == '\0') &&
                                       (lVar48 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                                       uVar45 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_035575f4;
                                    lVar55 = lVar55 + lVar30 * 0x5c;
                                    fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                             (fVar63 * (fStack00000000000000d0 +
                                                       fVar68 + *(float *)(*plVar54 + 0x1ac)) -
                                             *(float *)((long)unaff_x19 + 0x2ac));
                                    fVar82 = -fVar59;
                                    if ((char)unaff_x19[0x1e] != '\0') {
                                      fVar82 = fVar59;
                                    }
                                    *(float *)(lVar55 + 0x58) =
                                         *(float *)(lVar36 + lVar48 * 0x178 + 0x144) + fVar82;
                                    *(float *)(lVar55 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                                    *(float *)(lVar55 + 0x54) = fVar60;
                                    *(float *)(lVar55 + 0x48) = fVar86 * fVar58 + (fVar83 - fVar60);
                                    *(float *)(lVar55 + 0x4c) = fVar83;
                                    if ((int)uVar20 < 0x2d) {
                                      if (uVar20 - 10 < 2) {
LAB_03553b60:
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        FUN_0358c4f0();
                                        lVar34 = unaff_x19[0x6d];
                                        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                                        iVar18 = (int)unaff_x19[0x95] + 1;
                                        *(int *)(unaff_x19 + 0x95) = iVar18;
                                        *(int *)(unaff_x19 + 0x93) =
                                             *(int *)((long)unaff_x19 + 0x494) + 1;
                                        if ((lVar34 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
                                          if (*(int *)(*(long *)(lVar34 + 0x50) + 0x18) <= iVar18) {
                                            FUN_0358ca18();
                                            lVar34 = unaff_x19[0x6d];
                                            if (lVar34 == 0) goto LAB_035574b8;
                                          }
                                          lVar34 = *(long *)(lVar34 + 0x38);
                                          if (lVar34 != 0) {
                                            if (*puVar2 < *(uint *)(lVar34 + 0x18)) {
                                              fVar82 = *(float *)(lVar34 + (long)(int)*puVar2 *
                                                                           0x178 + 0x154);
                                              if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                                if ((uVar20 == 0x2029) ||
                                                   (fVar59 = 0.0, uVar20 == 10)) {
                                                  fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
                                                }
                                                uVar37 = 0;
                                                fVar59 = fVar82 + (0.0 - *(float *)((long)unaff_x19
                                                                                   + 0x4cc)) +
                                                         fVar86 * (fVar58 + *(float *)((long)
                                                  unaff_x19 + 700)) +
                                                  fVar63 * (*(float *)(unaff_x19 + 0x57) + fVar59) +
                                                  *(float *)(unaff_x19 + 0x9b);
                                              }
                                              else {
                                                if ((uVar20 == 0x2029) ||
                                                   (fVar59 = 0.0, uVar20 == 10)) {
                                                  fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
                                                }
                                                uVar37 = 1;
                                                fVar59 = *(float *)(unaff_x19 + 0x9b) +
                                                         *(float *)(unaff_x19 + 0x58) +
                                                         fVar63 * (*(float *)(unaff_x19 + 0x57) +
                                                                  fVar59);
                                              }
                                              *(float *)(unaff_x19 + 0x9b) = fVar59;
                                              *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar37;
                                              puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                              if (*(int *)(lVar34 + 0xe0) == 0) {
                                                thunk_FUN_01a58e78();
                                                lVar34 = *(long *)puVar13;
                                              }
                                              uVar35 = *(undefined8 *)
                                                        (*(long *)(lVar34 + 0xb8) + 0x15a8);
                                              *(float *)(unaff_x19 + 0x9a) = fVar82;
                                              uVar71 = NEON_rev64(uVar35,4);
                                              unaff_x19[0x99] = uVar71;
                                              *(float *)(unaff_x19 + 200) =
                                                   *(float *)(unaff_x19 + 0x81) + 0.0 +
                                                   *(float *)((long)unaff_x19 + 0x40c);
                                              FUN_0358c4f0();
                                              FUN_0358c4f0();
                                              *(int *)((long)unaff_x19 + 0x494) =
                                                   *(int *)((long)unaff_x19 + 0x494) + 1;
                                              bVar10 = true;
                                              bVar12 = 1;
                                              goto LAB_03550bd0;
                                            }
                                            goto LAB_035575f4;
                                          }
                                        }
                                        goto LAB_035574b8;
                                      }
                                      if (uVar20 == 3) {
                                        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
                                        uVar89 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                                        uVar46 = 3;
                                      }
                                    }
                                    else if ((uVar20 - 0x2028 < 2) || (uVar20 == 0x2d))
                                    goto LAB_03553b60;
                                  }
LAB_03553c8c:
                                  uVar22 = *puVar2;
                                  if (uVar45 <= uVar22) goto LAB_035575f4;
                                  if (*(char *)(lVar36 + (long)(int)uVar22 * 0x178 + 0x194) != '\0')
                                  {
                                    lVar36 = lVar36 + (long)(int)uVar22 * 0x178;
                                    uVar29 = *(ulong *)(lVar36 + 0x11c);
                                    uVar71 = *(ulong *)((long)unaff_x19 + 0x4dc);
                                    *(ulong *)((long)unaff_x19 + 0x4dc) =
                                         uVar71 ^ (uVar71 ^ uVar29) &
                                                  ~CONCAT44(-(uint)((float)(uVar71 >> 0x20) <
                                                                   (float)(uVar29 >> 0x20)),
                                                            -(uint)((float)uVar71 < (float)uVar29));
                                    uVar29 = *(ulong *)((long)unaff_x19 + 0x4e4);
                                    uVar71 = *(ulong *)(lVar36 + 0x128);
                                    *(ulong *)((long)unaff_x19 + 0x4e4) =
                                         uVar29 ^ (uVar29 ^ uVar71) &
                                                  ~CONCAT44(-(uint)((float)(uVar71 >> 0x20) <
                                                                   (float)(uVar29 >> 0x20)),
                                                            -(uint)((float)uVar71 < (float)uVar29));
                                  }
                                  if (((int)unaff_x19[0x5c] == 5) &&
                                     ((0xd < uVar46 ||
                                      ((1 << (ulong)(uVar46 & 0x1f) & 0x2c00U) == 0)))) {
                                    lVar36 = *(long *)(lVar34 + 0x58);
                                    if (lVar36 == 0) goto LAB_035574b8;
                                    iVar18 = (int)unaff_x19[0x96] + 1;
                                    if (*(int *)(lVar36 + 0x18) < iVar18) {
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) ==
                                          0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      FUN_01ff02b8((long *)(lVar34 + 0x58),iVar18,1,
                                                   *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                                      lVar34 = *plVar4;
                                      if (lVar34 == 0) goto LAB_035574b8;
                                    }
                                    lVar36 = *(long *)(lVar34 + 0x58);
                                    if (lVar36 == 0) goto LAB_035574b8;
                                    uVar45 = *(uint *)(unaff_x19 + 0x96);
                                    lVar55 = (long)(int)uVar45;
                                    uVar22 = *(uint *)(lVar36 + 0x18);
                                    if (uVar22 <= uVar45) goto LAB_035575f4;
                                    lVar30 = lVar36 + lVar55 * 0x14;
                                    fVar59 = *(float *)(lVar30 + 0x30);
                                    uVar71 = (ulong)(uint)fVar59;
                                    *(undefined4 *)(lVar30 + 0x28) =
                                         *(undefined4 *)((long)unaff_x19 + 0x4b4);
                                    fVar82 = *(float *)((long)unaff_x19 + 0x4c4);
                                    if (fVar59 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                      fVar82 = fVar59;
                                    }
                                    *(float *)(lVar30 + 0x30) = fVar82;
                                    uVar46 = *(uint *)((long)unaff_x19 + 0x494);
                                    if (uVar46 == 0 && uVar45 == 0) {
                                      *(uint *)(lVar36 + (ulong)uVar45 * 0x14 + 0x20) = uVar46;
                                    }
                                    else {
                                      uVar9 = uVar46 - 1;
                                      if (0 < (int)uVar46) {
                                        lVar34 = *(long *)(lVar34 + 0x38);
                                        if (lVar34 == 0) goto LAB_035574b8;
                                        if (*(uint *)(lVar34 + 0x18) <= uVar9) goto LAB_035575f4;
                                        if (uVar45 != *(uint *)(lVar34 + (ulong)uVar9 * 0x178 + 0x68
                                                               )) {
                                          if (uVar45 - 1 < uVar22) {
                                            *(uint *)(lVar36 + 0x20 + (long)(int)(uVar45 - 1) * 0x14
                                                     + 4) = uVar9;
                                            *(uint *)(lVar36 + 0x20 + lVar55 * 0x14) = uVar46;
                                            goto LAB_03553d10;
                                          }
                                          goto LAB_035575f4;
                                        }
                                      }
                                      if (uVar46 == uVar26) {
                                        *(uint *)(lVar36 + lVar55 * 0x14 + 0x24) = uVar26;
                                      }
                                    }
                                  }
LAB_03553d10:
                                  puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                                  if (((char)unaff_x19[0x5b] == '\0') &&
                                     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                                      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) ==
                                       0)))) goto LAB_035542ac;
                                  if ((uVar21 == 0) &&
                                     (((uVar20 != 0x2d && (uVar20 != 0x200b)) && (uVar20 != 0xad))))
                                  {
                                    if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
                                      if (((((0x2bfd < uVar20 - 0xac01) && (0xfd < uVar20 - 0x1101))
                                           && (0x1d < uVar20 - 0xa961)) ||
                                          (uVar29 = FUN_03597a54(0), (uVar29 & 1) != 0)) &&
                                         ((((0xed < uVar20 - 0xff01 && (0x1d < uVar20 - 0xfe31)) &&
                                           (0x717d < uVar20 - 0x2e81)) && (0x1fd < uVar20 - 0xf901))
                                         )) goto LAB_03553f78;
                                      lVar34 = FUN_035978e8(0);
                                      if ((lVar34 == 0) || (*(long *)(lVar34 + 0x10) == 0))
                                      goto LAB_035574b8;
                                      uVar27 = (ulong)uVar20;
                                      uVar22 = FUN_0219c130(*(long *)(lVar34 + 0x10),
                                                            &stack0x000008a0,
                                                            *(undefined8 *)
                                                                                                                          
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                      if ((int)uVar26 <= (int)*puVar2) {
                                        if ((uVar22 & 1) == 0) {
LAB_03554270:
                                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                      0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                          }
                                          FUN_0358c4f0();
                                          goto LAB_035542a8;
                                        }
LAB_035541dc:
                                        if (uVar56 != uVar39 || ((bVar12 ^ 0xff) & 1) != 0)
                                        goto LAB_035542ac;
                                        if (uVar21 != 0)
                                        goto UnityEngine_Animator__get_bodyPositionInternal;
                                        goto LAB_0355422c;
                                      }
                                      lVar34 = FUN_035978e8(0);
                                      if (((lVar34 == 0) || (*plVar4 == 0)) ||
                                         (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0))
                                      goto LAB_035574b8;
                                      if (*(uint *)(lVar36 + 0x18) <= *puVar2 + 1)
                                      goto LAB_035575f4;
                                      if (*(long *)(lVar34 + 0x18) == 0) goto LAB_035574b8;
                                      uVar27 = (ulong)*(ushort *)
                                                       (lVar36 + (long)(int)(*puVar2 + 1) * 0x178 +
                                                       0x20);
                                      uVar29 = FUN_0219c130(*(long *)(lVar34 + 0x18),
                                                            &stack0x000008a0,
                                                            *(undefined8 *)
                                                                                                                          
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                      if ((uVar22 & 1) != 0) goto LAB_035541dc;
                                      if ((uVar29 & 1) == 0) goto LAB_03554270;
                                      if (bVar12 == 0) goto LAB_035542a8;
                                      if (uVar21 != 0) {
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        FUN_0358c4f0();
                                      }
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      FUN_0358c4f0();
                                    }
                                    else {
                                      if (bVar12 == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
                                      if (!bVar11 && uVar20 == 0xad)
                                      goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      FUN_0358c4f0();
                                    }
                                    bVar12 = 1;
                                  }
                                  else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
                                    if (bVar12 != 0) {
                                      if (uVar21 == 0)
                                      goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      FUN_0358c4f0();
                                      goto LAB_0355422c;
                                    }
LAB_035542a8:
                                    bVar12 = 0;
                                  }
                                  else {
                                    if (((uVar20 - 0x2007 < 0x29) &&
                                        ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x10000000401U)
                                         != 0)) || ((uVar20 == 0xa0 || (uVar20 == 0x2060))))
                                    goto LAB_03553ef0;
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_0358c4f0();
                                    bVar12 = 0;
                                    *(undefined4 *)(*(long *)(*(long *)puVar13 + 0xb8) + 0xe78) =
                                         0xffffffff;
                                  }
LAB_035542ac:
                                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0)
                                  {
                                    thunk_FUN_01a58e78();
                                  }
                                  FUN_0358c4f0();
                                  *(int *)((long)unaff_x19 + 0x494) =
                                       *(int *)((long)unaff_x19 + 0x494) + 1;
                                }
                                else {
                                  fStack0000000000000158 = 1.0;
                                  if (iVar18 == 0) goto LAB_03550fec;
LAB_03550c00:
                                  if (iVar18 != 1) {
                                    lVar34 = *plVar4;
                                    fVar60 = 0.0;
                                    fVar59 = 0.0;
                                    if (uVar20 != 3 && uVar20 != 0xad) {
                                      fVar59 = fVar82;
                                    }
                                    if (lVar34 != 0) {
                                      fStack0000000000000128 = 0.0;
                                      fVar64 = 0.0;
                                      goto LAB_035514cc;
                                    }
                                    goto LAB_035574b8;
                                  }
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *plVar1 = *(long *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x40);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar4 == 0) ||
                                     (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar34 + 0x18) <= *puVar2) goto LAB_035575f4;
                                  *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                                       *(undefined4 *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x48);
                                  if ((unaff_x19[0xd3] == 0) ||
                                     (lVar34 = UnityEngine_Material__DisableKeyword
                                                         (unaff_x19[0xd3],0), lVar34 == 0))
                                  goto LAB_035574b8;
                                  FUN_02215a88(lVar34,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                               &stack0x000008a0,
                                               *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                                  puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (uVar27 != 0) {
                                    if (uVar20 == 0x3c) {
                                      uVar20 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                                    }
                                    else {
                                      lVar34 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar34 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar34 = *(long *)puVar13;
                                      }
                                      *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                                           *(undefined4 *)(*(long *)(lVar34 + 0xb8) + 0x68);
                                    }
                                    if (unaff_x19[0x20] != 0) {
                                      fVar82 = *(float *)(unaff_x19 + 0x3d);
                                      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60
                                             );
                                      iVar18 = FUN_03776950(&stack0x00001720,0);
                                      if (*plVar54 != 0) {
                                        memmove(&stack0x00001720,(void *)(*plVar54 + 0x50),0x60);
                                        fVar60 = (float)FUN_03776960(&stack0x00001720,0);
                                        fVar59 = fVar74;
                                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                          fVar59 = 1.0;
                                        }
                                        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                                        fVar59 = (fVar82 / (float)iVar18) * fVar60 * fVar59;
                                        iVar18 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                                        fVar82 = *(float *)(unaff_x19 + 0x3d);
                                        if (iVar18 < 1) {
                                          if (*plVar54 == 0) goto LAB_035574b8;
                                          iVar18 = FUN_03776950(*plVar54 + 0x50,0);
                                          if (*plVar54 == 0) goto LAB_035574b8;
                                          fVar68 = (float)FUN_03776960(*plVar54 + 0x50,0);
                                          fVar64 = fVar74;
                                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                            fVar64 = 1.0;
                                          }
                                          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                                          fVar83 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                                          if (*(long *)(uVar27 + 0x20) == 0) goto LAB_035574b8;
                                          FUN_03776e6c(&stack0x000008a0,*(long *)(uVar27 + 0x20),0);
                                          fVar65 = (float)FUN_03776c9c(&stack0x00001700,0);
                                          if (*(long *)(uVar27 + 0x20) == 0) goto LAB_035574b8;
                                          fVar84 = *(float *)(uVar27 + 0x2c);
                                          fVar67 = (float)FUN_03776ea8(*(long *)(uVar27 + 0x20),0);
                                          if (*plVar54 == 0) goto LAB_035574b8;
                                          fVar66 = (float)FUN_03776980(*plVar54 + 0x50,0);
                                          if (*plVar54 == 0) goto LAB_035574b8;
                                          fVar75 = (float)FUN_037769b0(*plVar54 + 0x50,0);
                                          if (*plVar54 == 0) goto LAB_035574b8;
                                          fVar88 = *(float *)((long)unaff_x19 + 0x404);
                                          fVar60 = (float)FUN_03776960(*plVar54 + 0x50,0);
                                          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                                          fVar60 = fVar59 * fVar75 * fVar88 * fVar60;
                                          fVar64 = (fVar82 / (float)iVar18) * fVar68 * fVar64;
                                          fVar82 = fVar64 * (fVar83 / fVar65) * fVar84 * fVar67;
                                          fVar64 = fVar64 / fVar82;
                                          fVar66 = fVar64 * fVar66;
                                          fVar59 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                                          fVar64 = fVar64 * fVar59;
                                        }
                                        else {
                                          if (*plVar1 == 0) goto LAB_035574b8;
                                          iVar18 = FUN_03776950(*plVar1 + 0x48,0);
                                          if (*plVar1 == 0) goto LAB_035574b8;
                                          fVar64 = (float)FUN_03776960(*plVar1 + 0x48,0);
                                          if (*(long *)(uVar27 + 0x20) == 0) goto LAB_035574b8;
                                          fVar83 = *(float *)(uVar27 + 0x2c);
                                          fVar68 = fVar74;
                                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                            fVar68 = 1.0;
                                          }
                                          fVar65 = (float)FUN_03776ea8(*(long *)(uVar27 + 0x20),0);
                                          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                                          fVar66 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                                          if (*plVar1 == 0) goto LAB_035574b8;
                                          fVar67 = (float)FUN_037769b0(*plVar1 + 0x48,0);
                                          if (*plVar1 == 0) goto LAB_035574b8;
                                          fVar84 = *(float *)((long)unaff_x19 + 0x404);
                                          fVar60 = (float)FUN_03776960(*plVar1 + 0x48,0);
                                          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                                          fVar60 = fVar59 * fVar67 * fVar84 * fVar60;
                                          fVar82 = (fVar82 / (float)iVar18) * fVar64 * fVar68 *
                                                   fVar83 * fVar65;
                                          fVar64 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                                        }
                                        *puVar3 = uVar27;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (puVar3,uVar27);
                                        if ((*plVar4 != 0) &&
                                           (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 != 0)) {
                                          if (*(uint *)(lVar34 + 0x18) <= *puVar2)
                                          goto LAB_035575f4;
                                          lVar34 = lVar34 + (long)(int)*puVar2 * 0x178;
                                          *(undefined4 *)(lVar34 + 0x2c) = 1;
                                          *(float *)(lVar34 + 0x160) = fVar82;
                                          *(long *)(lVar34 + 0x40) = *plVar1;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    ();
                                          if ((*plVar4 != 0) &&
                                             (lVar34 = *(long *)(*plVar4 + 0x38), lVar34 != 0)) {
                                            if (*(uint *)(lVar34 + 0x18) <= *puVar2)
                                            goto LAB_035575f4;
                                            *(long *)(lVar34 + (long)(int)*puVar2 * 0x178 + 0x38) =
                                                 *plVar54;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      ();
                                            lVar34 = *plVar4;
                                            if ((lVar34 != 0) &&
                                               (lVar55 = *(long *)(lVar34 + 0x38), lVar55 != 0)) {
                                              if (*puVar2 < *(uint *)(lVar55 + 0x18)) {
                                                fStack000000000000015c = 0.0;
                                                *(int *)(lVar55 + (long)(int)*puVar2 * 0x178 + 0x58)
                                                     = (int)unaff_x19[0x24];
                                                *(int *)(unaff_x19 + 0x24) = (int)lVar36;
                                                fStack0000000000000128 = fVar66;
                                                goto LAB_035514b0;
                                              }
                                              goto LAB_035575f4;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    goto LAB_035574b8;
                                  }
UnityEngine_AnimatorStateInfo__get_fullPathHash:
                                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                                }
                              }
                            }
                            else {
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                              *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                              uVar29 = FUN_03586568();
                              if (((uVar29 & 1) == 0) ||
                                 (uVar89 = in_stack_0000178c, *(int *)((long)unaff_x19 + 0x644) != 0
                                 )) goto LAB_035509d4;
                            }
LAB_03550bd0:
                            uVar89 = uVar89 + 1;
                            lVar34 = unaff_x19[0x8f];
                            uVar21 = uVar20;
                            if (lVar34 == 0) goto LAB_035574b8;
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
      (**(code **)(*unaff_x19 + 0x918))();
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x3ec) = 0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      goto LAB_03550288;
    }
  }
  puVar15 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  FUN_036d3364();
  uVar35 = FUN_0276793c(&stack0x000017ac,0);
  uVar35 = FUN_025b1328(*(undefined8 *)puVar15,uVar35,0);
  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar13);
  }
  FUN_036772fc(uVar35,0);
LAB_03550288:
  *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
  return;
LAB_03554e78:
  uVar89 = uVar26 - 1;
  if (*(uint *)(lVar51 + 0x18) <= uVar89) goto LAB_035575f4;
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x50), lVar36 == 0)) goto LAB_035574b8;
  lVar30 = (long)(int)uVar89;
  lVar55 = lVar51 + lVar30 * 0x178;
  uVar20 = *(uint *)(lVar55 + 100);
  if (*(uint *)(lVar36 + 0x18) <= uVar20) goto LAB_035575f4;
  lVar50 = (long)(int)uVar20;
  lVar36 = lVar36 + lVar50 * 0x5c;
  lVar48 = *(long *)(lVar55 + 0x38);
  uVar7 = *(ushort *)(lVar55 + 0x20);
  uVar39 = *(uint *)(lVar36 + 0x3c);
  uVar56 = *(uint *)(lVar36 + 0x68);
  iVar6 = *(int *)(lVar36 + 0x20);
  iVar24 = *(int *)(lVar36 + 0x28);
  iVar25 = *(int *)(lVar36 + 0x2c);
  uVar22 = *(uint *)(lVar36 + 0x40);
  lVar55 = (long)(int)uVar22;
  fVar78 = *(float *)(lVar36 + 0x4c);
  fVar76 = *(float *)(lVar36 + 0x54);
  fVar72 = *(float *)(lVar36 + 0x58);
  fVar68 = *(float *)(lVar36 + 0x5c);
  fVar90 = *(float *)(lVar36 + 0x60);
  fVar64 = *(float *)(lVar36 + 0x6c);
  fVar83 = *(float *)(lVar36 + 0x70);
  fVar87 = *(float *)(lVar36 + 0x74);
  fVar77 = *(float *)(lVar36 + 0x78);
  uVar45 = (uint)uVar7;
  if ((int)uVar56 < 9) {
    switch(uVar56) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar90 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar72;
      }
      break;
    case 2:
LAB_03555018:
      fStack00000000000000fc = (fVar90 + fVar68 * 0.5) - fVar72 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar68 + fVar90) - fVar72;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar68 + fVar90;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar56 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar7 < 0xad) {
      if ((uVar7 != 3) && (uVar7 != 10)) goto LAB_03554fac;
    }
    else if ((uVar7 != 0xad) && ((uVar7 != 0x200b && (uVar7 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar51 + 0x18) <= uVar39) goto LAB_035575f4;
      uVar8 = *(undefined2 *)(lVar51 + (long)(int)uVar39 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar27 = FUN_026b8cc4(uVar8,0);
      if ((uVar27 & 1) == 0) {
        bVar16 = (int)uVar20 < (int)unaff_x19[0x95];
      }
      else {
        bVar16 = false;
      }
      if ((fVar72 <= fVar68) && (!bVar16 && uVar56 >> 4 == 0)) {
        fStack00000000000000fc = fVar90;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar68 + fVar90;
        }
        goto LAB_03555088;
      }
      if (((uVar26 == 1) || (uVar20 != uVar21)) || (uVar89 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar90;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar68 + fVar90;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000028 = FUN_026b97f8(uVar45,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar38 = (char)unaff_x19[0x1e];
        fVar90 = -fVar72;
        if (cVar38 != '\0') {
          fVar90 = fVar72;
        }
        if (*(uint *)(lVar51 + 0x18) <= uVar39) goto LAB_035575f4;
        iVar25 = (int)*(char *)(lVar51 + (long)(int)uVar39 * 0x178 + 0x194) +
                 (-iVar6 - (uStack0000000000000028 & 1)) + iVar25 + -1;
        if (iVar25 < 1) {
          fVar72 = 1.0;
          iVar25 = 1;
        }
        else {
          fVar72 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar45 == 9) {
LAB_03556e74:
          fVar72 = 1.0 - fVar72;
        }
        else {
          if (uVar45 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar27 = FUN_026b97f8(uVar45,0);
            cVar38 = (char)unaff_x19[0x1e];
            if ((uVar27 & 1) != 0) goto LAB_03556e74;
          }
          iVar25 = (iVar6 - (~uStack0000000000000028 & 1)) + iVar24;
        }
        fVar72 = ((fVar68 + fVar90) * fVar72) / (float)iVar25;
        if (cVar38 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar72;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar72;
        }
      }
    }
  }
  else if (uVar56 == 0x20) {
    fVar72 = fVar64 + fVar87;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar56 = (uint)*(undefined8 *)(lVar51 + 0x18);
  if (uVar56 <= uVar89) goto LAB_035575f4;
  lVar36 = lVar51 + lVar30 * 0x178;
  fVar68 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar72 = (float)uStack00000000000000b8 + (float)uStack00000000000000e8;
  fVar90 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar36 + 0x194) == '\0') goto LAB_03555938;
  iVar24 = *(int *)(lVar51 + lVar30 * 0x178 + 0x2c);
  if (iVar24 != 0) goto LAB_0355574c;
  fVar62 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar20,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar42 = lVar51 + lVar30 * 0x178;
    *(undefined4 *)(lVar42 + 0x84) = 0;
    *(undefined4 *)(lVar42 + 0xac) = 0;
    *(undefined4 *)(lVar42 + 0xd4) = 0x3f800000;
    fVar62 = 1.0;
    break;
  case 1:
    fVar77 = *(float *)(lVar51 + lVar30 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar42 = lVar51 + lVar30 * 0x178;
      fVar87 = (fStack00000000000000fc + fVar77) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar77 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_035551cc;
    }
    lVar42 = lVar51 + lVar30 * 0x178;
    fVar87 = fVar87 - fVar64;
    *(float *)(lVar42 + 0x84) = fVar62 + (fVar77 - fVar64) / fVar87;
    *(float *)(lVar42 + 0xac) = fVar62 + (*(float *)(lVar42 + 0x98) - fVar64) / fVar87;
    *(float *)(lVar42 + 0xd4) = fVar62 + (*(float *)(lVar42 + 0xc0) - fVar64) / fVar87;
    fVar62 = fVar62 + (*(float *)(lVar42 + 0xe8) - fVar64) / fVar87;
    break;
  case 2:
    lVar42 = lVar51 + lVar30 * 0x178;
    fVar77 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar87 = (fStack00000000000000fc + *(float *)(lVar42 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_035551cc:
    *(float *)(lVar42 + 0x84) = fVar62 + fVar87 / fVar77;
    *(float *)(lVar42 + 0xac) =
         fVar62 + ((fStack00000000000000fc + *(float *)(lVar42 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar42 + 0xd4) =
         fVar62 + ((fStack00000000000000fc + *(float *)(lVar42 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar62 = fVar62 + ((fStack00000000000000fc + *(float *)(lVar42 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar42 = lVar51 + lVar30 * 0x178;
      *(undefined4 *)(lVar42 + 0x88) = 0;
      *(undefined4 *)(lVar42 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar42 + 0xd8) = 0;
      *(undefined4 *)(lVar42 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar42 = lVar51 + lVar30 * 0x178;
      fVar77 = fVar77 - fVar83;
      fVar87 = fVar62 + (*(float *)(lVar42 + 0x74) - fVar83) / fVar77;
      fVar77 = fVar62 + (*(float *)(lVar42 + 0x9c) - fVar83) / fVar77;
      *(float *)(lVar42 + 0x88) = fVar87;
      *(float *)(lVar42 + 0xb0) = fVar77;
      *(float *)(lVar42 + 0xd8) = fVar87;
      *(float *)(lVar42 + 0x100) = fVar77;
      break;
    case 2:
      lVar42 = lVar51 + lVar30 * 0x178;
      fVar87 = fVar62 + (*(float *)(lVar42 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar42 + 0x88) = fVar87;
      fVar77 = *(float *)(unaff_x19 + 0x9c);
      fVar64 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar42 + 0xd8) = fVar87;
      fVar87 = fVar62 + (*(float *)(lVar42 + 0x9c) - fVar77) / (fVar64 - fVar77);
      *(float *)(lVar42 + 0xb0) = fVar87;
      *(float *)(lVar42 + 0x100) = fVar87;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar56 = (uint)*(undefined8 *)(lVar51 + 0x18);
    }
    if (uVar56 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar51 + lVar30 * 0x178;
    fVar87 = *(float *)(lVar42 + 0x15c);
    fVar77 = (1.0 - (*(float *)(lVar42 + 0x88) + *(float *)(lVar42 + 0xb0)) * fVar87) * 0.5;
    fVar64 = fVar62 + *(float *)(lVar42 + 0x88) * fVar87 + fVar77;
    fVar62 = fVar62 + fVar77 + *(float *)(lVar42 + 0xb0) * fVar87;
    *(float *)(lVar42 + 0x84) = fVar64;
    *(float *)(lVar42 + 0xac) = fVar64;
    *(float *)(lVar42 + 0xd4) = fVar62;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar51 + lVar30 * 0x178 + 0xfc) = fVar62;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar56 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar51 + lVar30 * 0x178;
    *(undefined4 *)(lVar42 + 0x88) = 0;
    *(undefined4 *)(lVar42 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar42 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar42 + 0x100) = 0;
    break;
  case 1:
    if (uVar89 < uVar56) {
      lVar42 = lVar51 + lVar30 * 0x178;
      fVar78 = fVar78 - fVar76;
      fVar62 = (*(float *)(lVar42 + 0x74) - fVar76) / fVar78;
      fVar78 = (*(float *)(lVar42 + 0x9c) - fVar76) / fVar78;
      *(float *)(lVar42 + 0x88) = fVar62;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar56 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar51 + lVar30 * 0x178;
    fVar62 = (*(float *)(lVar42 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar42 + 0x88) = fVar62;
    fVar78 = (*(float *)(lVar42 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar42 + 0xb0) = fVar78;
    *(float *)(lVar42 + 0xd8) = fVar78;
    *(float *)(lVar42 + 0x100) = fVar62;
    break;
  case 3:
    if (uVar56 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar51 + lVar30 * 0x178;
    fVar78 = *(float *)(lVar42 + 0x15c);
    fVar87 = (1.0 - (*(float *)(lVar42 + 0x84) + *(float *)(lVar42 + 0xd4)) / fVar78) * 0.5;
    fVar62 = *(float *)(lVar42 + 0x84) / fVar78 + fVar87;
    fVar87 = fVar87 + *(float *)(lVar42 + 0xd4) / fVar78;
    *(float *)(lVar42 + 0x88) = fVar62;
    *(float *)(lVar42 + 0xb0) = fVar87;
    *(float *)(lVar42 + 0x100) = fVar62;
    *(float *)(lVar42 + 0xd8) = fVar87;
  }
  if (uVar56 <= uVar89) goto LAB_035575f4;
  lVar42 = lVar51 + lVar30 * 0x178;
  fVar62 = *(float *)(lVar42 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar42 + 0x5c) == '\0') && ((*(byte *)(lVar51 + lVar30 * 0x178 + 400) & 1) != 0)) {
    fVar62 = -fVar62;
  }
  fVar87 = fVar86;
  if (((iVar23 == 2) || (fVar87 = fVar74, iVar23 == 1)) || (fVar87 = fVar86 / fVar63, iVar23 == 0))
  {
    fVar62 = fVar87 * fVar62;
  }
  lVar42 = lVar51 + lVar30 * 0x178;
  fVar78 = *(float *)(lVar42 + 0x88);
  fVar77 = *(float *)(lVar42 + 0x84);
  fVar87 = -2.1474836e+09;
  if (fVar77 != INFINITY) {
    fVar87 = (float)(int)fVar77;
  }
  fVar64 = *(float *)(lVar42 + 0xd4);
  fVar83 = *(float *)(lVar42 + 0xd8);
  fVar76 = -2.1474836e+09;
  if (fVar78 != INFINITY) {
    fVar76 = (float)(int)fVar78;
  }
  uVar70 = FUN_03591d3c(fVar77 - fVar87,fVar78 - fVar76);
  *(undefined4 *)(lVar42 + 0x84) = uVar70;
  if (*(uint *)(lVar51 + 0x18) <= uVar89) goto LAB_035575f4;
  fVar83 = fVar83 - fVar76;
  *(float *)(lVar42 + 0x88) = fVar62;
  uVar70 = FUN_03591d3c(fVar77 - fVar87,fVar83);
  *(undefined4 *)(lVar51 + lVar30 * 0x178 + 0xac) = uVar70;
  if (*(uint *)(lVar51 + 0x18) <= uVar89) goto LAB_035575f4;
  fVar64 = fVar64 - fVar87;
  *(float *)(lVar51 + lVar30 * 0x178 + 0xb0) = fVar62;
  fVar87 = (float)FUN_03591d3c(fVar64,fVar83);
  *(float *)(lVar42 + 0xd4) = fVar87;
  if (*(uint *)(lVar51 + 0x18) <= uVar89) goto LAB_035575f4;
  *(float *)(lVar42 + 0xd8) = fVar62;
  uVar70 = FUN_03591d3c(fVar64,fVar78 - fVar76);
  *(undefined4 *)(lVar51 + lVar30 * 0x178 + 0xfc) = uVar70;
  uVar56 = (uint)*(undefined8 *)(lVar51 + 0x18);
  if (uVar56 <= uVar89) goto LAB_035575f4;
  *(float *)(lVar51 + lVar30 * 0x178 + 0x100) = fVar62;
LAB_0355574c:
  if (((int)uVar89 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar20 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar56 <= uVar89) goto LAB_035575f4;
      lVar36 = lVar51 + lVar30 * 0x178;
      *(ulong *)(lVar36 + 0x70) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0x70));
      *(float *)(lVar36 + 0x78) = fVar90 + *(float *)(lVar36 + 0x78);
      *(ulong *)(lVar36 + 0x98) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0x98));
      *(float *)(lVar36 + 0xa0) = fVar90 + *(float *)(lVar36 + 0xa0);
      *(ulong *)(lVar36 + 0xc0) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0xc0));
      *(float *)(lVar36 + 200) = fVar90 + *(float *)(lVar36 + 200);
      *(ulong *)(lVar36 + 0xe8) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar36 + 0xe8));
      *(float *)(lVar36 + 0xf0) = fVar90 + *(float *)(lVar36 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar20 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar89 < uVar56) {
        if (*(uint *)(lVar51 + lVar30 * 0x178 + 0x68) == uVar5) {
          lVar36 = lVar51 + lVar30 * 0x178;
          *(ulong *)(lVar36 + 0x70) =
               CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar36 + 0x70));
          *(float *)(lVar36 + 0x78) = fVar90 + *(float *)(lVar36 + 0x78);
          *(ulong *)(lVar36 + 0x98) =
               CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar36 + 0x98));
          *(float *)(lVar36 + 0xa0) = fVar90 + *(float *)(lVar36 + 0xa0);
          *(ulong *)(lVar36 + 0xc0) =
               CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar36 + 0xc0));
          *(float *)(lVar36 + 200) = fVar90 + *(float *)(lVar36 + 200);
          *(ulong *)(lVar36 + 0xe8) =
               CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar36 + 0xe8));
          *(float *)(lVar36 + 0xf0) = fVar90 + *(float *)(lVar36 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar56 <= uVar89) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar56 = *(uint *)(lVar51 + 0x18);
  }
  puVar13 = PTR_DAT_03cbded8;
  uVar70 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar42 = lVar51 + lVar30 * 0x178;
  *(undefined8 *)(lVar42 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar42 + 0x78) = uVar70;
  if (uVar56 <= uVar89) goto LAB_035575f4;
  uVar70 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
  lVar42 = lVar51 + lVar30 * 0x178;
  *(undefined8 *)(lVar42 + 0x98) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
  *(undefined4 *)(lVar42 + 0xa0) = uVar70;
  uVar70 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
  *(undefined8 *)(lVar42 + 0xc0) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
  *(undefined4 *)(lVar42 + 200) = uVar70;
  uVar70 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
  *(undefined8 *)(lVar42 + 0xe8) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
  *(undefined4 *)(lVar42 + 0xf0) = uVar70;
  *(undefined1 *)(lVar36 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar24 == 0) {
    pcVar44 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar44)();
  }
  else if (iVar24 == 1) {
    pcVar44 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar36 = lVar36 + lVar30 * 0x178;
  uVar35 = *(undefined8 *)(lVar36 + 0x11c);
  *(undefined8 *)(lVar36 + 0x11c) =
       CONCAT44(fVar72 + (float)((ulong)uVar35 >> 0x20),fVar68 + (float)uVar35);
  *(float *)(lVar36 + 0x124) = fVar90 + *(float *)(lVar36 + 0x124);
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar36 = lVar36 + lVar30 * 0x178;
  *(ulong *)(lVar36 + 0x110) =
       CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0x110) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar36 + 0x110));
  *(float *)(lVar36 + 0x118) = fVar90 + *(float *)(lVar36 + 0x118);
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar36 = lVar36 + lVar30 * 0x178;
  *(ulong *)(lVar36 + 0x128) =
       CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar36 + 0x128) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar36 + 0x128));
  *(float *)(lVar36 + 0x130) = fVar90 + *(float *)(lVar36 + 0x130);
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar36 = lVar36 + lVar30 * 0x178;
  *(float *)(lVar36 + 0x134) = fVar68 + *(float *)(lVar36 + 0x134);
  *(ulong *)(lVar36 + 0x138) =
       CONCAT44(fVar90 + (float)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20),
                fVar72 + (float)*(undefined8 *)(lVar36 + 0x138));
  lVar36 = *plVar4;
  if ((lVar36 == 0) || (lVar42 = *(long *)(lVar36 + 0x38), lVar42 == 0)) goto LAB_035574b8;
  uVar56 = *(uint *)(lVar42 + 0x18);
  if (uVar56 <= uVar89) goto LAB_035575f4;
  lVar47 = lVar42 + lVar30 * 0x178;
  uVar71 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar47 + 0x140) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar47 + 0x140));
  fVar87 = fVar72 + *(float *)(lVar47 + 0x150);
  uVar29 = (ulong)(uint)fVar87;
  uVar31 = CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar47 + 0x148) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar47 + 0x148));
  *(float *)(lVar47 + 0x150) = fVar87;
  *(ulong *)(lVar47 + 0x140) = uVar71;
  *(ulong *)(lVar47 + 0x148) = uVar31;
  if (uVar20 == uVar21) {
    uVar21 = *puVar2 - 1;
    if (uVar89 == uVar21) goto LAB_03555b44;
  }
  else {
    lVar36 = *(long *)(lVar36 + 0x50);
    if (lVar36 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar36 + 0x18) <= uVar21) goto LAB_035575f4;
    lVar47 = (long)(int)uVar21;
    lVar49 = lVar36 + lVar47 * 0x5c;
    uVar31 = (ulong)(uint)*(float *)(lVar49 + 0x58);
    fVar87 = fVar72 + *(float *)(lVar49 + 0x54);
    uVar71 = (ulong)(uint)fVar87;
    fVar78 = fVar68 + *(float *)(lVar49 + 0x58);
    uVar29 = (ulong)(uint)fVar78;
    *(ulong *)(lVar49 + 0x4c) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar49 + 0x4c) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar49 + 0x4c));
    *(float *)(lVar49 + 0x54) = fVar87;
    *(float *)(lVar49 + 0x58) = fVar78;
    if (uVar56 <= *(uint *)(lVar49 + 0x34)) goto LAB_035575f4;
    uVar70 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar49 + 0x34) * 0x178 + 0x11c);
    lVar36 = lVar36 + lVar47 * 0x5c;
    *(float *)(lVar36 + 0x70) = fVar87;
    *(undefined4 *)(lVar36 + 0x6c) = uVar70;
    lVar36 = *plVar4;
    if ((lVar36 == 0) || (lVar42 = *(long *)(lVar36 + 0x50), lVar42 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar21) goto LAB_035575f4;
    lVar36 = *(long *)(lVar36 + 0x38);
    if (lVar36 == 0) goto LAB_035574b8;
    uVar21 = *(uint *)(lVar42 + lVar47 * 0x5c + 0x40);
    if (*(uint *)(lVar36 + 0x18) <= uVar21) goto LAB_035575f4;
    lVar42 = lVar42 + lVar47 * 0x5c;
    *(undefined4 *)(lVar42 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar21 * 0x178 + 0x128);
    *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar42 + 0x4c);
    uVar21 = *puVar2 - 1;
LAB_03555b44:
    if (uVar89 == uVar21) {
      lVar36 = *plVar4;
      if ((lVar36 == 0) || (lVar42 = *(long *)(lVar36 + 0x50), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar47 = lVar42 + lVar50 * 0x5c;
      uVar31 = (ulong)(uint)*(float *)(lVar47 + 0x58);
      uVar71 = CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar47 + 0x4c) >> 0x20),
                        fVar72 + (float)*(undefined8 *)(lVar47 + 0x4c));
      fVar87 = fVar72 + *(float *)(lVar47 + 0x54);
      fVar68 = fVar68 + *(float *)(lVar47 + 0x58);
      uVar29 = (ulong)(uint)fVar68;
      *(ulong *)(lVar47 + 0x4c) = uVar71;
      *(float *)(lVar47 + 0x54) = fVar87;
      *(float *)(lVar47 + 0x58) = fVar68;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar47 + 0x34)) goto LAB_035575f4;
      uVar70 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar47 + 0x34) * 0x178 + 0x11c);
      lVar42 = lVar42 + lVar50 * 0x5c;
      *(float *)(lVar42 + 0x70) = fVar87;
      *(undefined4 *)(lVar42 + 0x6c) = uVar70;
      lVar36 = *plVar4;
      if ((lVar36 == 0) || (lVar42 = *(long *)(lVar36 + 0x50), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      uVar21 = *(uint *)(lVar42 + lVar50 * 0x5c + 0x40);
      if (*(uint *)(lVar36 + 0x18) <= uVar21) goto LAB_035575f4;
      lVar42 = lVar42 + lVar50 * 0x5c;
      *(undefined4 *)(lVar42 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar21 * 0x178 + 0x128);
      *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar42 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar27 = FUN_026b82c4(uVar45,0);
  if (((((uVar27 & 1) == 0) && (1 < uVar45 - 0x2010)) && (uVar45 != 0xad)) && (uVar45 != 0x2d)) {
    if (bVar11) {
      if (((uVar26 != 1) && ((int)uVar89 < (int)(*(uint *)(lVar51 + 0x18) - 1))) &&
         (((int)uVar89 < (int)*puVar2 && ((uVar45 == 0x2019 || (uVar45 == 0x27)))))) {
        if (*(uint *)(lVar51 + 0x18) <= uVar26 - 2) goto LAB_035575f4;
        uVar8 = *(undefined2 *)(lVar51 + lVar34 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar27 = FUN_026b82c4(uVar8,0);
        if ((uVar27 & 1) != 0) {
          if (*(uint *)(lVar51 + 0x18) <= uVar26) goto LAB_035575f4;
          uVar8 = *(undefined2 *)(lVar51 + lVar34 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar27 = FUN_026b82c4(uVar8,0);
          if ((uVar27 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar26 != 1) {
LAB_0355686c:
        bVar11 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar27 = FUN_026b81f8(uVar45,0);
      if ((uVar27 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar27 = FUN_026b63d8(uVar45,0);
        if (((uVar45 != 0x200b) && ((uVar27 & 1) == 0)) && (*puVar2 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar89 == *puVar2 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar27 = FUN_026b82c4(uVar45,0);
      iVar24 = (int)fStack0000000000000128;
      if ((uVar27 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar24 = uVar26 - 2;
    }
    lVar36 = *plVar4;
    if (lVar36 == 0) goto LAB_035574b8;
    lVar42 = *(long *)(lVar36 + 0x40);
    if (lVar42 == 0) goto LAB_035574b8;
    uVar21 = *(uint *)(lVar36 + 0x24);
    iVar25 = *(int *)(lVar42 + 0x18);
    if (iVar25 < (int)(uVar21 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar36 + 0x40),iVar25 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar36 = *plVar4;
      if (lVar36 == 0) goto LAB_035574b8;
    }
    lVar36 = *(long *)(lVar36 + 0x40);
    if (lVar36 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar36 + 0x18) <= uVar21) goto LAB_035575f4;
    lVar36 = lVar36 + (long)(int)uVar21 * 0x18;
    *(long **)(lVar36 + 0x20) = unaff_x19;
    *(float *)(lVar36 + 0x28) = fStack0000000000000158;
    *(int *)(lVar36 + 0x2c) = iVar24;
    *(int *)(lVar36 + 0x30) = (iVar24 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar36 = unaff_x19[0x6d];
    if (lVar36 == 0) goto LAB_035574b8;
    lVar42 = *(long *)(lVar36 + 0x50);
    *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar20) goto LAB_035575f4;
    lVar42 = lVar42 + lVar50 * 0x5c;
    bVar11 = false;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar42 + 0x30) = *(int *)(lVar42 + 0x30) + 1;
  }
  else {
    if (!bVar11) {
      fStack0000000000000158 = (float)uVar89;
    }
    if (uVar89 == *puVar2 - 1) {
      lVar36 = *plVar4;
      if (lVar36 == 0) goto LAB_035574b8;
      lVar42 = *(long *)(lVar36 + 0x40);
      if (lVar42 == 0) goto LAB_035574b8;
      uVar21 = *(uint *)(lVar36 + 0x24);
      iVar24 = *(int *)(lVar42 + 0x18);
      if (iVar24 < (int)(uVar21 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar36 + 0x40),iVar24 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar36 = *plVar4;
        if (lVar36 == 0) goto LAB_035574b8;
      }
      lVar36 = *(long *)(lVar36 + 0x40);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar21) goto LAB_035575f4;
      lVar36 = lVar36 + (long)(int)uVar21 * 0x18;
      *(long **)(lVar36 + 0x20) = unaff_x19;
      *(float *)(lVar36 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar36 + 0x2c) = uVar89;
      *(uint *)(lVar36 + 0x30) = uVar26 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar36 = unaff_x19[0x6d];
      if (lVar36 == 0) goto LAB_035574b8;
      lVar42 = *(long *)(lVar36 + 0x50);
      *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar42 = lVar42 + lVar50 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar42 + 0x30) = *(int *)(lVar42 + 0x30) + 1;
    }
LAB_03555d68:
    bVar11 = true;
  }
LAB_03555d70:
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  uVar21 = *(uint *)(lVar36 + 0x18);
  if (uVar21 <= uVar89) goto LAB_035575f4;
  if ((*(byte *)(lVar36 + lVar30 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar17) {
LAB_03555da0:
      if (uVar21 <= uVar26 - 2) goto LAB_035575f4;
      lVar50 = *unaff_x19;
      uVar21 = *(uint *)(lVar36 + lVar34 + -0x330);
      uVar70 = *(undefined4 *)(lVar36 + lVar34 + -0x2f8);
LAB_035562ec:
      pcVar44 = *(code **)(lVar50 + 0x8d8);
LAB_035562f4:
      uVar31 = (ulong)uVar21;
      uVar71 = (ulong)(uint)fStack0000000000000070;
      uVar29 = (ulong)(uint)fStack0000000000000074;
      (*pcVar44)(fVar59,uVar71,uVar29,uVar31,fStack0000000000000104,0,fStack000000000000008c,uVar70)
      ;
      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar13;
      }
LAB_03556348:
      bVar17 = false;
      fVar57 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar36 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar17 = false;
    }
  }
  else {
    lVar36 = lVar36 + lVar30 * 0x178;
    iVar24 = *(int *)(lVar36 + 0x68);
    *(int *)(lVar36 + 0x16c) = iVar18;
    if ((((int)unaff_x19[0x65] < (int)uVar89) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar24 + 1 != (int)unaff_x19[0x67])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar27 = FUN_026b63d8(uVar45,0);
    if ((uVar45 != 0x200b) && ((uVar27 & 1) == 0)) {
      lVar36 = *plVar4;
      if ((lVar36 == 0) || (lVar50 = *(long *)(lVar36 + 0x38), lVar50 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar50 + 0x18) <= uVar89) goto LAB_035575f4;
      fVar87 = *(float *)(lVar50 + lVar30 * 0x178 + 0x160);
      if (fVar57 <= fVar87) {
        fVar57 = fVar87;
      }
      if (fStack0000000000000100 <= ABS(fVar62)) {
        fStack0000000000000100 = ABS(fVar62);
      }
      if (iVar24 != iStack000000000000006c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar36 = *plVar4;
          if (lVar36 == 0) goto LAB_035574b8;
          lVar50 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar50 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar50 + 0x15a8);
      }
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar78 = *(float *)(lVar36 + lVar30 * 0x178 + 0x14c);
      fVar87 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar78 = fVar78 + fVar57 * fVar87;
      if (fVar78 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar78;
      }
      uVar71 = (ulong)(uint)fStack0000000000000104;
      iStack000000000000006c = iVar24;
    }
    if (!bVar17) {
      bVar17 = false;
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar22 < (int)uVar89)) ||
         ((bool)(bVar16 ^ 1))) goto LAB_03556364;
      if (uVar89 == uVar22) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar27 = FUN_026b97f8(uVar45,0);
        if ((uVar27 & 1) != 0) goto LAB_03556254;
      }
      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
      lVar36 = lVar36 + lVar30 * 0x178;
      fStack000000000000008c = *(float *)(lVar36 + 0x160);
      fVar59 = *(float *)(lVar36 + 0x11c);
      uVar29 = (ulong)(uint)fVar59;
      bVar17 = fVar57 != 0.0;
      fVar87 = fStack000000000000008c;
      if (bVar17) {
        fVar87 = fVar57;
      }
      fVar57 = fVar87;
      uVar19 = *(undefined4 *)(lVar36 + 0x168);
      fStack0000000000000074 = 0.0;
      fVar87 = fVar62;
      if (bVar17) {
        fVar87 = fStack0000000000000100;
      }
      uVar71 = (ulong)(uint)fVar87;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar87;
    }
    if (*puVar2 == 1) {
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        if (uVar89 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar30 * 0x178;
          lVar50 = *unaff_x19;
          uVar21 = *(uint *)(lVar36 + 0x128);
          uVar70 = *(undefined4 *)(lVar36 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar89 == uVar39) || ((int)uVar22 <= (int)uVar89)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar27 = FUN_026b63d8(uVar45,0);
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        lVar50 = lVar30;
        uVar21 = uVar89;
        if (uVar45 == 0x200b || (uVar27 & 1) != 0) {
          lVar50 = lVar55;
          uVar21 = uVar22;
        }
        if (uVar21 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar50 * 0x178;
          uVar21 = *(uint *)(lVar36 + 0x128);
          uVar70 = *(undefined4 *)(lVar36 + 0x160);
          pcVar44 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar16) {
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        uVar21 = *(uint *)(lVar36 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar89 < (int)(*puVar2 - 1)) {
      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar26) goto LAB_035575f4;
      uVar27 = FUN_03567ad8(uVar19,*(undefined4 *)(lVar36 + lVar34),0);
      if ((uVar27 & 1) == 0) {
        if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
          if (uVar89 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar30 * 0x178;
            uVar31 = (ulong)*(uint *)(lVar36 + 0x128);
            uVar29 = (ulong)(uint)fStack0000000000000074;
            uVar71 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar59,uVar71,uVar29,uVar31,fStack0000000000000104,0,fStack000000000000008c,
                       *(undefined4 *)(lVar36 + 0x160));
            puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar36 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar36 = *(long *)puVar13;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar17 = true;
  }
LAB_03556364:
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
  if (lVar48 == 0) goto LAB_035574b8;
  uVar21 = *(uint *)(lVar36 + lVar30 * 0x178 + 400);
  fVar87 = (float)FUN_03776a30(lVar48 + 0x50,0);
  if ((uVar21 >> 6 & 1) == 0) {
    if ((_fStack0000000000000128 & 0x100000000) != 0) {
      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar26 - 2) goto LAB_035575f4;
      uVar21 = *(uint *)(lVar36 + lVar34 + -0x330);
      fVar72 = *(float *)(lVar36 + lVar34 + -0x30c);
      pcVar44 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar31 = (ulong)uVar21;
      uVar71 = (ulong)(uint)fStack000000000000009c;
      uVar29 = (ulong)(uint)fStack0000000000000098;
      (*pcVar44)(fVar58,uVar71,uVar29,uVar31,fVar60 * fVar87 + fVar72,0,fVar60,fVar60);
    }
LAB_03556948:
    _fStack0000000000000128 = _fStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar36 = *plVar4;
    if ((lVar36 == 0) || (lVar50 = *(long *)(lVar36 + 0x38), lVar50 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar50 + 0x18) <= uVar89) goto LAB_035575f4;
    *(int *)(lVar50 + lVar30 * 0x178 + 0x174) = iVar18;
    if ((((int)unaff_x19[0x65] < (int)uVar89) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar50 + lVar30 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar22 < (int)uVar89)) ||
       ((_fStack0000000000000128 & 0x100000000) != 0 || !bVar16)) {
LAB_035564e8:
      if ((_fStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar89 == uVar22) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar27 = FUN_026b97f8(uVar45,0);
        if ((uVar27 & 1) != 0) goto LAB_035564e8;
        lVar36 = *plVar4;
        if (lVar36 == 0) goto LAB_035574b8;
      }
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar89) goto LAB_035575f4;
      lVar36 = lVar36 + lVar30 * 0x178;
      fVar61 = *(float *)(lVar36 + 0x60);
      fStack000000000000009c = *(float *)(lVar36 + 0x14c);
      uVar71 = (ulong)(uint)fStack000000000000009c;
      fVar58 = *(float *)(lVar36 + 0x11c);
      uVar29 = (ulong)(uint)fVar58;
      fVar60 = *(float *)(lVar36 + 0x160);
      uStack0000000000000038 = (ulong)(uint)fStack000000000000009c;
      fStack000000000000009c = fVar87 * fVar60 + fStack000000000000009c;
      fStack0000000000000098 = 0.0;
    }
    uVar21 = *puVar2;
    if (uVar21 == 1) {
LAB_03556628:
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        if (uVar89 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar30 * 0x178;
          lVar55 = *unaff_x19;
          uVar21 = *(uint *)(lVar36 + 0x128);
          fVar72 = *(float *)(lVar36 + 0x14c);
LAB_03556654:
          pcVar44 = *(code **)(lVar55 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar89 == uVar39) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar27 = FUN_026b63d8(uVar45,0);
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        uVar21 = *(uint *)(lVar36 + 0x18);
        if (uVar45 == 0x200b || (uVar27 & 1) != 0) {
          if (uVar21 <= uVar22) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar55 = lVar30;
          if (uVar21 <= uVar89) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar36 = lVar36 + lVar55 * 0x178;
        fVar72 = *(float *)(lVar36 + 0x14c);
        uVar21 = *(uint *)(lVar36 + 0x128);
        pcVar44 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar89 < (int)uVar21) {
      lVar36 = *plVar4;
      if ((lVar36 != 0) && (lVar50 = *(long *)(lVar36 + 0x38), lVar50 != 0)) {
        if (uVar26 < *(uint *)(lVar50 + 0x18)) {
          if (*(float *)(lVar50 + lVar34 + -0x108) == fVar61) {
            fVar78 = *(float *)(lVar50 + lVar34 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar71 = uStack0000000000000038;
            uVar27 = FUN_03567bac(fVar72 + fVar78,uStack0000000000000038,0);
            if ((uVar27 & 1) != 0) {
              uVar21 = *puVar2;
              goto LAB_03556744;
            }
            lVar36 = *plVar4;
            if (lVar36 == 0) goto LAB_035574b8;
          }
          lVar36 = *(long *)(lVar36 + 0x38);
          if (lVar36 != 0) {
            uVar21 = *(uint *)(lVar36 + 0x18);
            if ((int)uVar89 <= (int)uVar22) goto FUN_035568e8;
            if (uVar22 < uVar21) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar89 < (int)uVar21) {
      iVar24 = FUN_036d3364(lVar48,0);
      if (*(uint *)(lVar51 + 0x18) <= uVar26) goto LAB_035575f4;
      lVar36 = *(long *)(lVar51 + lVar34 + -0x130);
      if (lVar36 == 0) goto LAB_035574b8;
      iVar25 = FUN_036d3364(lVar36,0);
      if (iVar24 != iVar25) goto LAB_03556628;
    }
    if (!bVar16) {
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        if (uVar26 - 2 < *(uint *)(lVar36 + 0x18)) {
          lVar55 = *unaff_x19;
          uVar21 = *(uint *)(lVar36 + lVar34 + -0x330);
          fVar72 = *(float *)(lVar36 + lVar34 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _fStack0000000000000128 = CONCAT44(1,fStack0000000000000128);
  }
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  uVar21 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar21 <= uVar89) goto LAB_035575f4;
  if ((*(byte *)(lVar36 + lVar30 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar29 = (ulong)(uint)fStack00000000000000c0;
      uVar71 = (ulong)(uint)fStack00000000000000dc;
      uVar31 = (ulong)(uint)fVar82;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar71,uVar29,uVar31,fStack00000000000000d0,uVar29);
    }
LAB_035569b4:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar89) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar36 + lVar30 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (!bVar10) {
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar22 < (int)uVar89)) ||
         (!bVar16)) goto LAB_035569b4;
      if (uVar89 == uVar22) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar27 = FUN_026b97f8(uVar45,0);
        if ((uVar27 & 1) != 0) goto LAB_035569b4;
      }
      puVar13 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar55 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar55 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar55 = *(long *)puVar13;
      }
      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      uVar21 = (uint)*(undefined8 *)(lVar36 + 0x18);
      if (uVar21 <= uVar89) goto LAB_035575f4;
      lVar55 = *(long *)(lVar55 + 0xb8);
      lVar48 = lVar36 + lVar30 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar48 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar48 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar55 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar55 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar48 + 0x18c);
      fVar82 = *(float *)(lVar55 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar55 + 0x15a4);
      fStack00000000000000c0 = 0.0;
    }
    if (uVar21 <= uVar89) goto LAB_035575f4;
    lVar36 = lVar36 + lVar30 * 0x178;
    fVar87 = *(float *)(lVar36 + 0x128);
    fVar76 = *(float *)(lVar36 + 0x188);
    uVar28 = *(undefined8 *)(lVar36 + 0x17c);
    fVar64 = *(float *)(lVar36 + 0x184);
    uVar35 = *(undefined8 *)(lVar36 + 0x184);
    fVar90 = *(float *)(lVar36 + 0x18c);
    fVar72 = *(float *)(lVar36 + 0x11c);
    fVar77 = *(float *)(lVar36 + 0x148);
    fVar78 = *(float *)(lVar36 + 0x150);
    in_stack_00000178 = uVar28;
    fStack0000000000000180 = fVar64;
    fStack0000000000000184 = fVar76;
    in_stack_00000188 = fVar90;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar27 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar36 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar27 & 1) == 0) {
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar36);
      }
      fVar87 = fVar87 + (float)in_stack_000017b8;
      uVar29 = (ulong)(uint)fVar87;
      fVar72 = fVar72 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar78 = fVar78 - in_stack_000017c0;
      uVar71 = (ulong)(uint)fVar78;
      fVar77 = fVar77 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar31 = (ulong)(uint)fVar77;
      if (fVar72 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar72;
      }
      if (fVar78 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar78;
      }
      if (fVar82 <= fVar87) {
        fVar82 = fVar87;
      }
      if (fStack00000000000000d0 <= fVar77) {
        fStack00000000000000d0 = fVar77;
      }
    }
    else {
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar36);
      }
      fVar72 = (fVar72 + (fVar82 - (float)in_stack_000017b8)) * 0.5;
      uVar31 = (ulong)(uint)fVar72;
      if (fVar78 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar78;
      }
      uVar71 = (ulong)(uint)fStack00000000000000dc;
      uVar29 = (ulong)(uint)fStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar77) {
        fStack00000000000000d0 = fVar77;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar71,uVar29,uVar31,fStack00000000000000d0,uVar29);
      fStack00000000000000dc = fVar78 - fVar90;
      fVar82 = fVar87 + fVar64;
      fStack00000000000000c0 = 0.0;
      fStack00000000000000d0 = fVar77 + fVar76;
      fStack00000000000000d8 = fVar72;
      in_stack_000017b0 = uVar28;
      in_stack_000017b8 = uVar35;
      in_stack_000017c0 = fVar90;
    }
    if (((*puVar2 == 1) || (uVar89 == uVar39)) || (((int)uVar22 <= (int)uVar89 || (!bVar16)))) {
      uVar29 = (ulong)(uint)fStack00000000000000c0;
      uVar71 = (ulong)(uint)fStack00000000000000dc;
      uVar31 = (ulong)(uint)fVar82;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar71,uVar29,uVar31,fStack00000000000000d0,uVar29);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar89 = *puVar2;
  lVar34 = lVar34 + 0x178;
  _fStack0000000000000128 = CONCAT44(uStack000000000000012c,(int)fStack0000000000000128 + 1);
  bVar16 = (int)uVar89 <= (int)uVar26;
  uVar26 = uVar26 + 1;
  uVar21 = uVar20;
  if (bVar16) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar51 = *plVar4;
  if (lVar51 != 0) {
    iVar18 = uVar20 + 1;
    plVar54 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
    *(uint *)(lVar51 + 0x18) = uVar89;
    lVar34 = unaff_x19[0xd4];
    *(int *)(lVar51 + 0x2c) = iVar18;
    if ((int)uVar89 < 1 || iStack00000000000000d4 == 0) {
      iStack00000000000000d4 = 1;
    }
    *(int *)(lVar51 + 0x1c) = (int)lVar34;
    *(int *)(lVar51 + 0x24) = iStack00000000000000d4;
    *(int *)(lVar51 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar27 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar27 & 1) == 0)) {
LAB_03554724:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar51 = unaff_x19[0xdf];
    if (lVar51 != 0) {
      (**(code **)(lVar51 + 0x18))
                (*(undefined8 *)(lVar51 + 0x40),*plVar4,*(undefined8 *)(lVar51 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
    iVar18 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar18 != 0x19) {
      lVar51 = unaff_x19[0xe5];
      if (lVar51 == 0) goto LAB_035574b8;
      uVar89 = FUN_03911ee4(lVar51,0);
      FUN_03911f20(lVar51,uVar89 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*plVar4 == 0) || (lVar51 = *(long *)(*plVar4 + 0x60), lVar51 == 0)) goto LAB_035574b8;
      if (*(int *)(*plVar54 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar51 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar51 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar51 = *(long *)(unaff_x19[0x6d] + 0x60), lVar51 != 0)) {
        if (*(int *)(lVar51 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar51 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar51 = *(long *)(unaff_x19[0x6d] + 0x60), lVar51 != 0)) {
            if (*(int *)(lVar51 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar51 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar51 = *(long *)(unaff_x19[0x6d] + 0x60), lVar51 != 0)) {
                if (*(int *)(lVar51 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar51 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar51 = *(long *)(unaff_x19[0x6d] + 0x60), lVar51 != 0)) {
                    if (*(int *)(lVar51 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar51 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar35 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar89 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar51 = *plVar4;
                              if (lVar51 != 0) {
                                lVar36 = 0;
                                lVar34 = 0;
                                do {
                                  uVar27 = lVar34 + 1;
                                  if ((long)*(int *)(lVar51 + 0x34) <= (long)uVar27)
                                  goto LAB_03554724;
                                  lVar51 = *(long *)(lVar51 + 0x60);
                                  if (lVar51 == 0) break;
                                  if (*(int *)(*plVar54 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                  FUN_03596a20(lVar51 + lVar36 + 0x70,0);
                                  lVar51 = unaff_x19[0xe1];
                                  if (lVar51 == 0) break;
                                  if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                  uVar28 = *(undefined8 *)(lVar51 + lVar34 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar33 = FUN_036d35a8(uVar28,0,0);
                                  if ((uVar33 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*plVar4 == 0) ||
                                         (lVar51 = *(long *)(*plVar4 + 0x60), lVar51 == 0)) break;
                                      if (*(int *)(*plVar54 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                      FUN_03596b20(lVar51 + lVar36 + 0x70,1,0);
                                    }
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if (lVar51 == 0) break;
                                    lVar51 = UnityEngine_Material__GetColorArray(lVar51,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar55 = *(long *)(*plVar4 + 0x60), lVar55 == 0)) break;
                                    if (*(uint *)(lVar55 + 0x18) <= uVar27) goto LAB_035575f4;
                                    if (lVar51 == 0) break;
                                    FUN_036a460c(lVar51,*(undefined8 *)(lVar55 + lVar36 + 0x80),0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if (lVar51 == 0) break;
                                    lVar51 = UnityEngine_Material__GetColorArray(lVar51,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar55 = *(long *)(*plVar4 + 0x60), lVar55 == 0)) break;
                                    if (*(uint *)(lVar55 + 0x18) <= uVar27) goto LAB_035575f4;
                                    if (lVar51 == 0) break;
                                    FUN_036a4810(lVar51,*(undefined8 *)(lVar55 + lVar36 + 0x98),0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if (lVar51 == 0) break;
                                    lVar51 = UnityEngine_Material__GetColorArray(lVar51,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar55 = *(long *)(*plVar4 + 0x60), lVar55 == 0)) break;
                                    if (*(uint *)(lVar55 + 0x18) <= uVar27) goto LAB_035575f4;
                                    if (lVar51 == 0) break;
                                    FUN_036a48bc(lVar51,*(undefined8 *)(lVar55 + lVar36 + 0xa0),0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if (lVar51 == 0) break;
                                    lVar51 = UnityEngine_Material__GetColorArray(lVar51,0);
                                    if ((*plVar4 == 0) ||
                                       (lVar55 = *(long *)(*plVar4 + 0x60), lVar55 == 0)) break;
                                    if (*(uint *)(lVar55 + 0x18) <= uVar27) goto LAB_035575f4;
                                    if (lVar51 == 0) break;
                                    FUN_036a4e24(lVar51,*(undefined8 *)(lVar55 + lVar36 + 0xa8),0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if ((lVar51 == 0) ||
                                       (lVar51 = UnityEngine_Material__GetColorArray(lVar51,0),
                                       lVar51 == 0)) break;
                                    FUN_036aa280(lVar51,0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if (lVar51 == 0) break;
                                    lVar51 = FUN_037b514c(lVar51,0);
                                    lVar55 = unaff_x19[0xe1];
                                    if (lVar55 == 0) break;
                                    if (*(uint *)(lVar55 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar55 = *(long *)(lVar55 + lVar34 * 8 + 0x28);
                                    if ((lVar55 == 0) ||
                                       (uVar28 = UnityEngine_Material__GetColorArray(lVar55,0),
                                       lVar51 == 0)) break;
                                    FUN_0390f3a4(lVar51,uVar28,0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if ((lVar51 == 0) ||
                                       (lVar51 = FUN_037b514c(lVar51,0), lVar51 == 0)) break;
                                    FUN_0390eec8(uVar35,uVar71,uVar29,uVar31,lVar51,0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    lVar51 = *(long *)(lVar51 + lVar34 * 8 + 0x28);
                                    if ((lVar51 == 0) ||
                                       (lVar51 = FUN_037b514c(lVar51,0), lVar51 == 0)) break;
                                    FUN_0390ed78(lVar51,uVar89 & 1,0);
                                    lVar51 = unaff_x19[0xe1];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar27) goto LAB_035575f4;
                                    plVar52 = *(long **)(lVar51 + lVar34 * 8 + 0x28);
                                    uVar26 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar52 == (long *)0x0) break;
                                    (**(code **)(*plVar52 + 0x2c8))
                                              (plVar52,uVar26 & 1,*(undefined8 *)(*plVar52 + 0x2d0))
                                    ;
                                  }
                                  lVar51 = *plVar4;
                                  lVar34 = lVar34 + 1;
                                  lVar36 = lVar36 + 0x50;
                                } while (lVar51 != 0);
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


