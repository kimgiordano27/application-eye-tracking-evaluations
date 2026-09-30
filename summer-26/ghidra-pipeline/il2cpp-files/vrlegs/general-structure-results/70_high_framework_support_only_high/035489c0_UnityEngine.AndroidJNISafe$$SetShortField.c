/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$SetShortField
ENTRY_POINT: 035489c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


void UnityEngine_AndroidJNISafe__SetShortField(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  ulong *puVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  int *piVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  undefined1 uVar36;
  char cVar37;
  uint uVar38;
  float *pfVar39;
  undefined4 *puVar40;
  uint uVar41;
  float *pfVar42;
  code *pcVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long *unaff_x19;
  uint uVar50;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
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
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  float fVar70;
  ulong uVar71;
  float fVar72;
  undefined4 uVar73;
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
  int iStack000000000000002c;
  uint uStack0000000000000030;
  float fStack000000000000004c;
  int iStack000000000000005c;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000084;
  float fStack0000000000000098;
  float fStack000000000000009c;
  undefined8 uStack00000000000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  undefined8 uStack00000000000000f0;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000134;
  float fStack000000000000016c;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  long in_stack_00001708;
  uint in_stack_0000179c;
  uint uVar88;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float fVar89;
  
  uVar26 = FUN_036d35a8(param_1,param_2,0);
  if ((uVar26 & 1) == 0) {
    if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
    lVar27 = FUN_03568ac0(unaff_x19[0x1f],0);
    if (lVar27 != 0) {
      if (unaff_x19[0x6d] != 0) {
        FUN_0359ff94(unaff_x19[0x6d],0);
      }
      lVar27 = unaff_x19[0x8f];
      if ((lVar27 != 0) && (*(long *)(lVar27 + 0x18) != 0)) {
        if ((int)*(long *)(lVar27 + 0x18) == 0)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        if (*(int *)(lVar27 + 0x20) != 0) {
          plVar52 = unaff_x19 + 0x20;
          unaff_x19[0x20] = unaff_x19[0x1f];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar52);
          plVar2 = unaff_x19 + 0x23;
          unaff_x19[0x23] = unaff_x19[0x22];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          *(undefined4 *)(unaff_x19 + 0x24) = 0;
          puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          uVar19 = 0;
          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo,0);
            uVar19 = (undefined4)unaff_x19[0x24];
          }
          lVar33 = unaff_x19[0x20];
          lVar35 = unaff_x19[0x23];
          lVar27 = unaff_x19[0xc3];
          unaff_x24[3] = 0;
          unaff_x24[2] = 0;
          unaff_x24[5] = 0;
          unaff_x24[4] = 0;
          unaff_x24[1] = 0;
          *unaff_x24 = 0;
          FUN_03557f30((int)lVar27,&stack0x000008b0,uVar19,lVar33,0,lVar35,0);
          puVar15 = OVRPlugin_OVRP_1_18_0_TypeInfo;
          lVar27 = *(long *)(*(long *)puVar14 + 0xb8);
          unaff_x24[0x77] = unaff_x24[1];
          unaff_x24[0x76] = *unaff_x24;
          unaff_x24[0x79] = unaff_x24[3];
          unaff_x24[0x78] = unaff_x24[2];
          uVar34 = *(undefined8 *)puVar15;
          unaff_x24[0x7b] = unaff_x24[5];
          unaff_x24[0x7a] = unaff_x24[4];
          FUN_0209aa94(lVar27 + 0x10,&stack0x00000c60,uVar34);
          plVar3 = unaff_x19 + 0xd3;
          unaff_x19[0xd3] = unaff_x19[0x36];
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3);
          lVar27 = unaff_x19[0x77];
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_036cee6c(lVar27,0,0);
          if ((uVar26 & 1) != 0) {
            if (unaff_x19[0x77] == 0) goto LAB_0354fbf4;
            FUN_03599b08(unaff_x19[0x77],0);
          }
          if (unaff_x19[0x1f] != 0) {
            lVar27 = unaff_x19[0x92];
            fVar85 = *(float *)((long)unaff_x19 + 0x1e4);
            iVar18 = FUN_03776950(unaff_x19[0x1f] + 0x50,0);
            if (unaff_x19[0x1f] != 0) {
              fVar54 = (float)FUN_03776960(unaff_x19[0x1f] + 0x50,0);
              fVar80 = *(float *)((long)unaff_x19 + 0x1e4);
              *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
              *(float *)(unaff_x19 + 0x3d) = fVar80;
              puVar14 = OVRPlugin_OVRP_1_29_0_TypeInfo;
              fVar72 = DAT_00d389a8;
              fVar60 = DAT_00d389a8;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar60 = 1.0;
              }
              FUN_0209aa94(unaff_x19 + 0x3e,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
              *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
              if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
                uVar19 = (undefined4)unaff_x19[0x42];
              }
              else {
                uVar19 = 700;
              }
              *(undefined4 *)((long)unaff_x19 + 0x214) = uVar19;
              FUN_0209aa94(unaff_x19 + 0x43,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
              FUN_035a0500(unaff_x19 + 0x4c,0);
              *(undefined4 *)(unaff_x19 + 0x4f) = *(undefined4 *)((long)unaff_x19 + 0x26c);
              FUN_0209aa94(unaff_x19 + 0x50,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
              *(undefined4 *)((long)unaff_x19 + 0x61c) = 0;
              FUN_0209aa1c(unaff_x19 + 0xc4,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              pfVar39 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              fStack00000000000000e0 = *pfVar39;
              fStack0000000000000068 = pfVar39[1];
              fStack000000000000006c = pfVar39[2];
              uVar19 = FUN_01b6d7fc((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                                    (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0)
              ;
              *(undefined4 *)((long)unaff_x19 + 0x144) = uVar19;
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar19;
              *(undefined4 *)(unaff_x19 + 0x2b) = uVar19;
              *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar19;
              puVar15 = OVRPlugin_OVRP_1_16_0_TypeInfo;
              FUN_0209aa94(unaff_x19 + 0x9e,&stack0x000008b0,
                           *(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
              FUN_0209aa94(unaff_x19 + 0xa2,&stack0x000008b0,*(undefined8 *)puVar15);
              FUN_0209aa94(unaff_x19 + 0xa6,&stack0x000008b0,*(undefined8 *)puVar15);
              puVar15 = OVRPlugin_Mesh_TypeInfo;
              uVar19 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
              if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (DAT_0412df1c == '\0') {
                FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                DAT_0412df1c = '\x01';
              }
              lVar33 = *(long *)puVar15;
              if (*(int *)(lVar33 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar33 = *(long *)puVar15;
              }
              puVar40 = *(undefined4 **)(lVar33 + 0xb8);
              uVar26 = 0;
              FUN_035683a4(*puVar40,puVar40[1],puVar40[2],puVar40[3],&stack0x000008b0,uVar19,0);
              puVar15 = OVRPlugin_OVRP_1_12_0_TypeInfo;
              unaff_x24[0x73] = unaff_x24[1];
              unaff_x24[0x72] = *unaff_x24;
              FUN_0209aa94(unaff_x19 + 0xaa,&stack0x00000c40,*(undefined8 *)puVar15);
              unaff_x19[0xb0] = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xb0,0);
              FUN_0209aa94(unaff_x19 + 0xb1,0,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
              if (unaff_x19[0x20] != 0) {
                *(uint *)(unaff_x19 + 0xbe) = (uint)*(byte *)(unaff_x19[0x20] + 0x1b8);
                FUN_0209aa94(unaff_x19 + 0xba,&stack0x00000c28,
                             *(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo);
                FUN_0209aa1c(unaff_x19 + 0xbf,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
                *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
                if (unaff_x19[0x20] != 0) {
                  fVar55 = (float)FUN_03776970(unaff_x19[0x20] + 0x50,0);
                  if (*plVar52 != 0) {
                    fVar56 = (float)FUN_03776980(*plVar52 + 0x50,0);
                    if (*plVar52 != 0) {
                      fVar57 = (float)FUN_037769c0(*plVar52 + 0x50,0);
                      *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
                      *(undefined4 *)(unaff_x19 + 200) = 0;
                      unaff_x19[0x81] = 0;
                      FUN_0209aa94(unaff_x19 + 0x82,&stack0x00000c28,*(undefined8 *)puVar14);
                      *(undefined1 *)(unaff_x19 + 0x86) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
                      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
                      *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
                      *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                      puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar33 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar33 = *(long *)puVar14;
                      }
                      lVar35 = unaff_x19[0x6d];
                      uVar34 = *(undefined8 *)(*(long *)(lVar33 + 0xb8) + 0x15a8);
                      unaff_x19[0x95] = 0;
                      unaff_x19[0x9a] = 0;
                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
                      lVar33 = NEON_rev64(uVar34,4);
                      *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
                      unaff_x19[0x99] = lVar33;
                      *(undefined4 *)(unaff_x19 + 0x96) = 0;
                      if ((lVar35 != 0) && (*(long *)(lVar35 + 0x58) != 0)) {
                        uVar41 = (int)unaff_x19[0x67] - 1;
                        uVar88 = *(int *)(*(long *)(lVar35 + 0x58) + 0x18) - 1;
                        if ((int)uVar41 <= (int)uVar88) {
                          uVar88 = uVar41;
                        }
                        uVar7 = 0;
                        if (-1 < (int)uVar41) {
                          uVar7 = uVar88;
                        }
                        FUN_035a02f4(lVar35,0);
                        fVar58 = *(float *)(unaff_x19 + 0x68);
                        *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
                        fVar70 = *(float *)((long)unaff_x19 + 0x344);
                        unaff_x19[0x6a] = 0;
                        lVar33 = *(long *)puVar14;
                        fVar59 = *(float *)((long)unaff_x19 + 0x34c);
                        fVar86 = *(float *)(unaff_x19 + 0x6b);
                        fVar74 = *(float *)((long)unaff_x19 + 0x35c);
                        if (*(int *)(lVar33 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar33 = *(long *)puVar14;
                        }
                        *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                             *(undefined8 *)(*(long *)(lVar33 + 0xb8) + 0x1598);
                        *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                             *(undefined8 *)(*(long *)(lVar33 + 0xb8) + 0x15a0);
                        if (unaff_x19[0x6d] != 0) {
                          FUN_035a0164(unaff_x19[0x6d],0);
                          *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
                          *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
                          *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                          fVar89 = 0.0;
                          *(undefined1 *)((long)unaff_x24 + 0xf34) = 0;
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                          *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
                          FUN_0359f73c(&stack0x000017d8,0xffffffff,0,0);
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0358c4f0();
                          FUN_0209aa1c(*(long *)(*(long *)puVar14 + 0xb8) + 0x11f0,
                                       *(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
                          fVar82 = DAT_00d38d28;
                          fVar79 = DAT_00d38938;
                          uVar88 = 0;
                          lVar33 = unaff_x19[0x8f];
                          if (lVar33 != 0) {
                            puVar4 = (uint *)((long)unaff_x19 + 0x494);
                            puVar5 = (ulong *)(unaff_x19 + 0xc9);
                            uVar41 = (int)lVar27 - 1;
                            lVar27 = (long)unaff_x19 + 0x434;
                            fVar55 = fVar55 - (fVar56 - fVar57);
                            fStack000000000000016c = 0.0;
                            if (fVar86 <= 0.0) {
                              fVar86 = 0.0;
                            }
                            if (fVar74 <= 0.0) {
                              fVar74 = 0.0;
                            }
                            fVar85 = (fVar85 / (float)iVar18) * fVar54 * fVar60;
                            uVar31 = (ulong)(uint)fVar85;
                            fVar86 = fVar86 + DAT_00d3879c;
                            uVar71 = (ulong)(uint)fVar86;
                            fVar54 = fVar74 + DAT_00d3879c;
                            fVar60 = fVar80 * DAT_00d38d28 * fVar60;
                            bVar13 = true;
                            iStack000000000000002c = 0;
                            bVar17 = false;
                            iVar18 = 0;
                            plVar6 = unaff_x19 + 0x6d;
                            bVar12 = 1;
                            fStack00000000000000fc = fVar86;
                            uVar22 = 0;
LAB_03549220:
                            fVar80 = (float)uVar31;
                            if ((int)*(uint *)(lVar33 + 0x18) <= (int)uVar88) {
LAB_0354cf48:
                              fVar85 = (float)uVar71;
                              if (((char)unaff_x19[0x47] != '\0') &&
                                 (fVar85 = DAT_00d389f8,
                                 DAT_00d389f8 <
                                 *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))
                                 ) {
                                fVar85 = *(float *)((long)unaff_x19 + 0x1e4);
                                fVar60 = *(float *)((long)unaff_x19 + 0x254);
                                if ((fVar85 < fVar60) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  if (*(float *)((long)unaff_x19 + 0x2d4) <
                                      *(float *)(unaff_x19 + 0x5a) / 100.0) {
                                    *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                                  }
                                  fVar72 = (*(float *)((long)unaff_x19 + 0x23c) - fVar85) * 0.5;
                                  if (fVar72 <= DAT_00d38b84) {
                                    fVar72 = DAT_00d38b84;
                                  }
                                  *(float *)(unaff_x19 + 0x48) = fVar85;
                                  fVar72 = (fVar85 + fVar72) * 20.0 + 0.5;
                                  fVar85 = DAT_00d38e60;
                                  if (fVar72 != INFINITY) {
                                    fVar85 = (float)(int)fVar72 / 20.0;
                                  }
                                  if (fVar60 <= fVar85) {
                                    fVar85 = fVar60;
                                  }
LAB_0354d004:
                                  *(float *)((long)unaff_x19 + 0x1e4) = fVar85;
                                  return;
                                }
                              }
                              *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                              if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                                uVar34 = FUN_0276793c((long)unaff_x19 + 0x244,0);
                                uVar28 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
                                uVar34 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,
                                                      uVar34,*(undefined8 *)
                                                              OVRPlugin_OVRP_1_3_0_TypeInfo,uVar28,0
                                                     );
                                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                                }
                                FUN_0367a6ec(uVar34,0);
                              }
                              puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if ((*puVar4 == 0) || ((*puVar4 == 1 && (uVar22 == 3)))) {
                                (**(code **)(*unaff_x19 + 0x928))();
                                goto LAB_0354d0cc;
                              }
                              lVar27 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar27 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar27 = *(long *)puVar14;
                              }
                              plVar52 = (long *)OVRPlugin_Media_TypeInfo;
                              lVar27 = **(long **)(lVar27 + 0xb8);
                              if (lVar27 == 0) goto LAB_0354fbf4;
                              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              iVar18 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd1) *
                                                         0x38 + 0x54) << 2;
                              if ((*plVar6 == 0) ||
                                 (lVar27 = *(long *)(*plVar6 + 0x60), lVar27 == 0))
                              goto LAB_0354fbf4;
                              if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(int *)(lVar27 + 0x18) == 0)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_035968e8(lVar27 + 0x20,0,0);
                              if (DAT_0411f172 == '\0') {
                                FUN_01ab69ac(PTR_DAT_03cbded8);
                                DAT_0411f172 = '\x01';
                              }
                              iVar21 = (int)unaff_x19[0x4e];
                              fStack00000000000000fc =
                                   **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                              uStack00000000000000f0 =
                                   *(undefined8 *)
                                    (*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                              lVar27 = unaff_x19[0xeb];
                              uStack00000000000000b8 = uStack00000000000000f0;
                              fStack00000000000000c4 = fStack00000000000000fc;
                              if (iVar21 < 0x401) {
                                if (iVar21 == 0x100) {
                                  if (lVar27 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar27 + 0x18) < 2)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  uVar34 = *(undefined8 *)(lVar27 + 0x30);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x58), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= uVar7)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    fVar85 = *(float *)(lVar33 + (long)(int)uVar7 * 0x14 + 0x28);
                                  }
                                  else {
                                    fVar85 = *(float *)(unaff_x19 + 0x97);
                                  }
                                  fStack00000000000000c4 = fVar58 + 0.0 + *(float *)(lVar27 + 0x2c);
                                  fVar85 = (0.0 - fVar85) - fVar70;
                                }
                                else if (iVar21 == 0x200) {
                                  if (lVar27 == 0) goto LAB_0354fbf4;
                                  if ((*(int *)(lVar27 + 0x18) == 1) ||
                                     (*(int *)(lVar27 + 0x18) == 0))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  fStack00000000000000c4 =
                                       (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5
                                  ;
                                  uVar34 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24)
                                                            >> 0x20) +
                                                    (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >>
                                                           0x20)) * 0.5,
                                                    ((float)*(undefined8 *)(lVar27 + 0x24) +
                                                    (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar6 == 0) ||
                                       (lVar27 = *(long *)(*plVar6 + 0x58), lVar27 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar7)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar27 = lVar27 + (long)(int)uVar7 * 0x14;
                                    fStack00000000000000c4 = fVar58 + 0.0 + fStack00000000000000c4;
                                    fVar85 = ((fVar70 + *(float *)(lVar27 + 0x28) +
                                              *(float *)(lVar27 + 0x30)) - fVar59) * -0.5 + 0.0;
                                  }
                                  else {
                                    fStack00000000000000c4 = fVar58 + 0.0 + fStack00000000000000c4;
                                    fVar85 = ((fVar70 + *(float *)(unaff_x19 + 0x97) + fVar89) -
                                             fVar59) * -0.5 + 0.0;
                                  }
                                }
                                else {
                                  if (iVar21 != 0x400) goto LAB_0354d620;
                                  if (lVar27 == 0) goto LAB_0354fbf4;
                                  if (*(int *)(lVar27 + 0x18) == 0)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  uVar34 = *(undefined8 *)(lVar27 + 0x24);
                                  if ((int)unaff_x19[0x5c] == 5) {
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x58), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= uVar7)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    fVar89 = *(float *)(lVar33 + (long)(int)uVar7 * 0x14 + 0x30);
                                  }
                                  fStack00000000000000c4 = fVar58 + 0.0 + *(float *)(lVar27 + 0x20);
                                  fVar85 = fVar59 + (0.0 - fVar89);
                                }
LAB_0354d610:
                                uStack00000000000000b8 =
                                     CONCAT44((float)((ulong)uVar34 >> 0x20) + 0.0,
                                              (float)uVar34 + fVar85);
                              }
                              else if (iVar21 == 0x800) {
                                if (lVar27 == 0) goto LAB_0354fbf4;
                                if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0)
                                   ) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                fVar85 = fVar58 + 0.0 +
                                         (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) *
                                         0.5;
                                uStack00000000000000b8 =
                                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20
                                                      ) +
                                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)
                                              ) * 0.5 + 0.0,
                                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 + 0.0);
                                fStack00000000000000c4 = fVar85;
                              }
                              else {
                                if (iVar21 == 0x1000) {
                                  if (lVar27 != 0) {
                                    if ((*(int *)(lVar27 + 0x18) != 1) &&
                                       (*(int *)(lVar27 + 0x18) != 0)) {
                                      uVar34 = CONCAT44(((float)((ulong)*(undefined8 *)
                                                                         (lVar27 + 0x24) >> 0x20) +
                                                        (float)((ulong)*(undefined8 *)
                                                                        (lVar27 + 0x30) >> 0x20)) *
                                                        0.5,((float)*(undefined8 *)(lVar27 + 0x24) +
                                                            (float)*(undefined8 *)(lVar27 + 0x30)) *
                                                            0.5);
                                      fStack00000000000000c4 =
                                           fVar58 + 0.0 +
                                           (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) *
                                           0.5;
                                      fVar85 = 0.0 - ((fVar70 + *(float *)(unaff_x19 + 0x9d) +
                                                      *(float *)(unaff_x19 + 0x9c)) - fVar59) * 0.5;
                                      goto LAB_0354d610;
                                    }
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  }
                                  goto LAB_0354fbf4;
                                }
                                if (iVar21 == 0x2000) {
                                  if (lVar27 == 0) goto LAB_0354fbf4;
                                  if ((*(int *)(lVar27 + 0x18) == 1) ||
                                     (*(int *)(lVar27 + 0x18) == 0))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  fVar85 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar70) -
                                                 fVar59) * 0.5;
                                  uStack00000000000000b8 =
                                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >>
                                                       0x20)) * 0.5 + 0.0,
                                                ((float)*(undefined8 *)(lVar27 + 0x24) +
                                                (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5 +
                                                fVar85);
                                  fStack00000000000000c4 =
                                       fVar58 + 0.0 +
                                       (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5
                                  ;
                                }
                              }
LAB_0354d620:
                              lVar27 = FUN_03559490();
                              if (lVar27 != 0) {
                                FUN_036df824(lVar27,0);
                                *(float *)((long)unaff_x19 + 0x6e4) = fVar85;
                                uVar19 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0)
                                ;
                                FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                                if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                                }
                                if (DAT_0412df1c == '\0') {
                                  FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                                  DAT_0412df1c = '\x01';
                                }
                                puVar14 = OVRPlugin_Mesh_TypeInfo;
                                lVar27 = *(long *)OVRPlugin_Mesh_TypeInfo;
                                if (*(int *)(lVar27 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar27 = *(long *)puVar14;
                                }
                                puVar40 = *(undefined4 **)(lVar27 + 0xb8);
                                FUN_035683a4(*puVar40,puVar40[1],puVar40[2],puVar40[3],
                                             &stack0x000017c0,0x4000ffff,0);
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                lVar27 = *plVar6;
                                if (lVar27 != 0) {
                                  uVar88 = *puVar4;
                                  if ((int)uVar88 < 1) {
                                    iVar21 = 0;
                                    iVar18 = 0;
                                    goto LAB_0354f7f4;
                                  }
                                  lVar27 = *(long *)(lVar27 + 0x38);
                                  if (lVar27 != 0) {
                                    bVar17 = false;
                                    bVar16 = false;
                                    bVar13 = false;
                                    fStack0000000000000124 = 0.0;
                                    bVar11 = false;
                                    iVar21 = 0;
                                    uStack0000000000000030 = 0;
                                    fStack000000000000016c = 0.0;
                                    iStack000000000000005c = 0;
                                    lVar33 = 0x2e0;
                                    fVar56 = 0.0;
                                    fVar60 = 0.0;
                                    fStack0000000000000104 =
                                         *(float *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                    fStack0000000000000100 = 0.0;
                                    fStack0000000000000084 = 0.0;
                                    fStack000000000000004c = 0.0;
                                    fVar80 = 0.0;
                                    fVar55 = 0.0;
                                    uVar41 = 0;
                                    uVar22 = 1;
                                    fStack0000000000000098 = fStack000000000000006c;
                                    fStack000000000000009c = fStack0000000000000068;
                                    fStack00000000000000c0 = fStack000000000000006c;
                                    fStack00000000000000d0 = fStack00000000000000e0;
                                    fStack00000000000000d4 = fStack0000000000000068;
                                    fStack00000000000000e4 = fStack0000000000000068;
                                    fVar72 = fStack00000000000000e0;
                                    fVar54 = fStack00000000000000e0;
                                    goto LAB_0354d7c0;
                                  }
                                }
                              }
                              goto LAB_0354fbf4;
                            }
                            if (*(uint *)(lVar33 + 0x18) <= uVar88)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar20 = *(uint *)(lVar33 + (long)(int)uVar88 * 0xc + 0x20);
                            if (uVar20 == 0) goto LAB_0354cf48;
                            if (5 < iVar18) {
                              uVar34 = FUN_0276793c(&stack0x000017ec,0);
                              uVar28 = FUN_0276793c(&stack0x000017b8,0);
                              uVar34 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,
                                                    uVar34,*(undefined8 *)
                                                            OVRPlugin_OVRP_1_42_0_TypeInfo,uVar28,0)
                              ;
                              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                              }
                              FUN_0367ae18(uVar34,0);
                              in_stack_000017d8 = CONCAT44(3,*puVar4);
                            }
                            if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar20 != 0x3c)) {
                              if ((*plVar6 == 0) ||
                                 (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                              goto LAB_0354fbf4;
                              if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                              *(undefined4 *)((long)unaff_x19 + 0x644) =
                                   *(undefined4 *)(lVar33 + 0x2c);
                              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar33 + 0x58);
                              unaff_x19[0x20] = *(long *)(lVar33 + 0x38);
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (plVar52);
LAB_03549378:
                              if ((unaff_x19[0x6d] == 0) ||
                                 (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                              goto LAB_0354fbf4;
                              uVar22 = *puVar4;
                              if (*(uint *)(lVar33 + 0x18) <= uVar22)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar53 = (long)(int)uVar22;
                              cVar37 = *(char *)(lVar33 + lVar53 * 0x178 + 0x5c);
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                              lVar35 = unaff_x19[0x24];
                              if ((uint)in_stack_000017d8 == uVar22) {
                                uVar20 = (uint)((ulong)in_stack_000017d8 >> 0x20);
                                *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                if (uVar20 == 0x2026) {
                                  *(long *)(lVar33 + lVar53 * 0x178 + 0x30) = unaff_x19[0xca];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                                  *(undefined4 *)(lVar33 + 0x2c) = 0;
                                  *(long *)(lVar33 + 0x38) = unaff_x19[0xcb];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((unaff_x19[0x6d] == 0) ||
                                     (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(long *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x50) =
                                       unaff_x19[0xcc];
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar6 == 0) ||
                                     (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  uVar22 = *puVar4;
                                  if (*(uint *)(lVar33 + 0x18) <= uVar22)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  bVar11 = true;
                                  *(int *)(lVar33 + (long)(int)uVar22 * 0x178 + 0x58) =
                                       (int)unaff_x19[0xcd];
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                  in_stack_000017d8 = CONCAT44(3,uVar22 + 1);
                                }
                                else if (uVar20 == 3) {
                                  if ((*plVar52 == 0) ||
                                     (lVar30 = FUN_03568ac0(*plVar52,0), lVar30 == 0))
                                  goto LAB_0354fbf4;
                                  FUN_0219b634(lVar30,&stack0x00000c28,&stack0x000008b0,
                                               *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                                  if (*(uint *)(lVar33 + 0x18) <= uVar22)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(ulong *)(lVar33 + lVar53 * 0x178 + 0x30) = uVar26;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  uVar22 = *(uint *)((long)unaff_x19 + 0x494);
                                  bVar11 = true;
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
                                else {
                                  bVar11 = true;
                                }
                              }
                              else {
                                bVar11 = false;
                              }
                              if (((int)uVar22 < *(int *)((long)unaff_x19 + 0x324)) && (uVar20 != 3)
                                 ) {
                                if ((*plVar6 == 0) ||
                                   (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= uVar22)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar33 = lVar33 + (long)(int)uVar22 * 0x178;
                                *(undefined1 *)(lVar33 + 0x194) = 0;
                                *(undefined2 *)(lVar33 + 0x20) = 0x200b;
                                *(undefined4 *)(lVar33 + 100) = 0;
                                *puVar4 = uVar22 + 1;
                              }
                              else {
                                iVar21 = *(int *)((long)unaff_x19 + 0x644);
                                if (iVar21 == 0) {
                                  uVar22 = *(uint *)((long)unaff_x19 + 0x25c);
                                  if ((uVar22 >> 4 & 1) == 0) {
                                    if ((uVar22 >> 3 & 1) == 0) {
                                      fVar56 = 1.0;
                                      if ((uVar22 >> 5 & 1) != 0) {
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
                                          fVar56 = fVar79;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar29 = FUN_026b8070(uVar20,0);
                                      fVar56 = 1.0;
                                      if ((uVar29 & 1) != 0) {
                                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar20 = FUN_026b8594(uVar20,0);
                                        goto LAB_03549968;
                                      }
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar29 = FUN_026b812c(uVar20,0);
                                    fVar56 = 1.0;
                                    if ((uVar29 & 1) != 0) {
                                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar20 = FUN_026b8410(uVar20,0);
LAB_03549968:
                                      fVar56 = 1.0;
                                      uVar20 = uVar20 & 0xffff;
                                    }
                                  }
                                  iVar21 = *(int *)((long)unaff_x19 + 0x644);
                                  if (iVar21 != 0) goto LAB_03549594;
LAB_03549978:
                                  if ((*plVar6 == 0) ||
                                     (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *puVar5 = *(ulong *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x30);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (puVar5);
                                  if (*puVar5 == 0) goto LAB_03549564;
                                  if ((*plVar6 == 0) ||
                                     (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *plVar52 = *(long *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x38);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (plVar52);
                                  if ((*plVar6 == 0) ||
                                     (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *plVar2 = *(long *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x50);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar6 == 0) ||
                                     (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  uVar50 = *puVar4;
                                  uVar22 = *(uint *)(lVar33 + 0x18);
                                  if (uVar22 <= uVar50)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(undefined4 *)(unaff_x19 + 0x24) =
                                       *(undefined4 *)(lVar33 + (long)(int)uVar50 * 0x178 + 0x58);
                                  if (bVar11) {
                                    lVar35 = unaff_x19[0x8f];
                                    if (lVar35 == 0) goto LAB_0354fbf4;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar88)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if ((*(int *)(lVar35 + (long)(int)uVar88 * 0xc + 0x20) != 10) ||
                                       (uVar50 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
                                    if (uVar22 <= uVar50 - 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if (*plVar52 == 0) goto LAB_0354fbf4;
                                    fVar57 = *(float *)(lVar33 + (long)(int)(uVar50 - 1) * 0x178 +
                                                       0x60);
                                    iVar21 = FUN_03776950(*plVar52 + 0x50,0);
                                    lVar33 = *plVar52;
                                  }
                                  else {
LAB_03549a88:
                                    if (*plVar52 == 0) goto LAB_0354fbf4;
                                    fVar57 = *(float *)(unaff_x19 + 0x3d);
                                    iVar21 = FUN_03776950(*plVar52 + 0x50,0);
                                    lVar33 = unaff_x19[0x20];
                                  }
                                  if (lVar33 == 0) goto LAB_0354fbf4;
                                  fVar66 = (float)FUN_03776960(lVar33 + 0x50,0);
                                  fVar61 = fVar72;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar61 = 1.0;
                                  }
                                  uVar19 = 0;
                                  fStack0000000000000124 = 0.0;
                                  if (!(bool)(bVar11 & uVar20 == 0x2026)) {
                                    if (*plVar52 == 0) goto LAB_0354fbf4;
                                    fStack0000000000000124 = (float)FUN_03776980(*plVar52 + 0x50,0);
                                    if (*plVar52 == 0) goto LAB_0354fbf4;
                                    uVar19 = FUN_037769c0(*plVar52 + 0x50,0);
                                  }
                                  lVar33 = unaff_x19[0xc9];
                                  if (lVar33 == 0) goto LAB_0354fbf4;
                                  _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar19);
                                  if (*(long *)(lVar33 + 0x20) == 0) goto LAB_0354fbf4;
                                  fVar81 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar62 = *(float *)(lVar33 + 0x2c);
                                  fVar80 = (float)FUN_03776ea8(*(long *)(lVar33 + 0x20),0);
                                  if (*plVar52 == 0) goto LAB_0354fbf4;
                                  fVar64 = (float)FUN_037769b0(*plVar52 + 0x50,0);
                                  if (*plVar52 == 0) goto LAB_0354fbf4;
                                  fVar83 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar65 = (float)FUN_03776960(*plVar52 + 0x50,0);
                                  lVar33 = unaff_x19[0x6d];
                                  if ((lVar33 == 0) ||
                                     (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar35 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar35 = lVar35 + (long)(int)*puVar4 * 0x178;
                                  *(undefined4 *)(lVar35 + 0x2c) = 0;
                                  fVar61 = ((fVar56 * fVar57) / (float)iVar21) * fVar66 * fVar61;
                                  fVar80 = fVar61 * fVar81 * fVar62 * fVar80;
                                  *(float *)(lVar35 + 0x160) = fVar80;
                                  uVar22 = *(uint *)(unaff_x19 + 0x24);
                                  fVar65 = fVar61 * fVar64 * fVar83 * fVar65;
                                  if (uVar22 == 0) {
                                    fStack000000000000016c = *(float *)(unaff_x19 + 0xc3);
                                  }
                                  else {
                                    lVar35 = unaff_x19[0xe1];
                                    if (lVar35 == 0) goto LAB_0354fbf4;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar22)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar35 = *(long *)(lVar35 + (long)(int)uVar22 * 8 + 0x20);
                                    if (lVar35 == 0) goto LAB_0354fbf4;
                                    fStack000000000000016c = *(float *)(lVar35 + 0x54);
                                  }
LAB_03549e30:
                                  fVar57 = 0.0;
                                  if (uVar20 != 3 && uVar20 != 0xad) {
                                    fVar57 = fVar80;
                                  }
                                }
                                else {
                                  fVar56 = 1.0;
                                  if (iVar21 == 0) goto LAB_03549978;
LAB_03549594:
                                  if (iVar21 == 1) {
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    *plVar3 = *(long *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x40);
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ();
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                                         *(undefined4 *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x48)
                                    ;
                                    if ((unaff_x19[0xd3] == 0) ||
                                       (lVar33 = UnityEngine_Material__DisableKeyword
                                                           (unaff_x19[0xd3],0), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    FUN_02215a88(lVar33,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                                 &stack0x000008b0,
                                                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                                    puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (uVar26 == 0) goto LAB_03549564;
                                    if (uVar20 == 0x3c) {
                                      uVar20 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                                    }
                                    else {
                                      lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar33 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar33 = *(long *)puVar14;
                                      }
                                      *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                                           *(undefined4 *)(*(long *)(lVar33 + 0xb8) + 0x68);
                                    }
                                    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                                    fVar80 = *(float *)(unaff_x19 + 0x3d);
                                    memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
                                    iVar21 = FUN_03776950(&stack0x00001730,0);
                                    if (*plVar52 == 0) goto LAB_0354fbf4;
                                    memmove(&stack0x00001730,(void *)(*plVar52 + 0x50),0x60);
                                    fVar61 = (float)FUN_03776960(&stack0x00001730,0);
                                    fVar57 = fVar72;
                                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                      fVar57 = 1.0;
                                    }
                                    if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                                    fVar57 = (fVar80 / (float)iVar21) * fVar61 * fVar57;
                                    iVar21 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                                    fVar80 = *(float *)(unaff_x19 + 0x3d);
                                    if (iVar21 < 1) {
                                      if (*plVar52 == 0) goto LAB_0354fbf4;
                                      iVar21 = FUN_03776950(*plVar52 + 0x50,0);
                                      if (*plVar52 == 0) goto LAB_0354fbf4;
                                      fVar66 = (float)FUN_03776960(*plVar52 + 0x50,0);
                                      fVar61 = fVar72;
                                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                        fVar61 = 1.0;
                                      }
                                      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                                      fVar81 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                                      if (*(long *)(uVar26 + 0x20) == 0) goto LAB_0354fbf4;
                                      FUN_03776e6c(&stack0x000008b0,*(long *)(uVar26 + 0x20),0);
                                      fVar62 = (float)FUN_03776c9c(&stack0x00001710,0);
                                      if (*(long *)(uVar26 + 0x20) == 0) goto LAB_0354fbf4;
                                      fVar83 = *(float *)(uVar26 + 0x2c);
                                      fVar64 = (float)FUN_03776ea8(*(long *)(uVar26 + 0x20),0);
                                      if (*plVar52 == 0) goto LAB_0354fbf4;
                                      fVar63 = (float)FUN_03776980(*plVar52 + 0x50,0);
                                      if (*plVar52 == 0) goto LAB_0354fbf4;
                                      fVar77 = (float)FUN_037769b0(*plVar52 + 0x50,0);
                                      if (*plVar52 == 0) goto LAB_0354fbf4;
                                      fVar87 = *(float *)((long)unaff_x19 + 0x404);
                                      fVar65 = (float)FUN_03776960(*plVar52 + 0x50,0);
                                      if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                                      fVar65 = fVar57 * fVar77 * fVar87 * fVar65;
                                      fVar61 = (fVar80 / (float)iVar21) * fVar66 * fVar61;
                                      fVar80 = fVar61 * (fVar81 / fVar62) * fVar83 * fVar64;
                                      fVar61 = fVar61 / fVar80;
                                      fVar63 = fVar61 * fVar63;
                                      fVar57 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                                      fVar61 = fVar61 * fVar57;
                                    }
                                    else {
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      iVar21 = FUN_03776950(*plVar3 + 0x48,0);
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      fVar61 = (float)FUN_03776960(*plVar3 + 0x48,0);
                                      if (*(long *)(uVar26 + 0x20) == 0) goto LAB_0354fbf4;
                                      fVar81 = *(float *)(uVar26 + 0x2c);
                                      fVar66 = fVar72;
                                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                        fVar66 = 1.0;
                                      }
                                      fVar62 = (float)FUN_03776ea8(*(long *)(uVar26 + 0x20),0);
                                      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                                      fVar63 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      fVar64 = (float)FUN_037769b0(*plVar3 + 0x48,0);
                                      if (*plVar3 == 0) goto LAB_0354fbf4;
                                      fVar83 = *(float *)((long)unaff_x19 + 0x404);
                                      fVar65 = (float)FUN_03776960(*plVar3 + 0x48,0);
                                      if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                                      fVar65 = fVar57 * fVar64 * fVar83 * fVar65;
                                      fVar80 = (fVar80 / (float)iVar21) * fVar61 * fVar66 *
                                               fVar81 * fVar62;
                                      fVar61 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                                    }
                                    *puVar5 = uVar26;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (puVar5,uVar26);
                                    if ((*plVar6 != 0) &&
                                       (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 != 0)) {
                                      if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                                      *(undefined4 *)(lVar33 + 0x2c) = 1;
                                      *(float *)(lVar33 + 0x160) = fVar80;
                                      *(long *)(lVar33 + 0x40) = *plVar3;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ();
                                      if ((*plVar6 != 0) &&
                                         (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 != 0)) {
                                        if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        *(long *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x38) =
                                             *plVar52;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ();
                                        lVar33 = *plVar6;
                                        if ((lVar33 != 0) &&
                                           (lVar53 = *(long *)(lVar33 + 0x38), lVar53 != 0)) {
                                          if (*puVar4 < *(uint *)(lVar53 + 0x18)) {
                                            _fStack0000000000000120 = CONCAT44(fVar63,fVar61);
                                            fStack000000000000016c = 0.0;
                                            *(int *)(lVar53 + (long)(int)*puVar4 * 0x178 + 0x58) =
                                                 (int)unaff_x19[0x24];
                                            *(int *)(unaff_x19 + 0x24) = (int)lVar35;
                                            goto LAB_03549e30;
                                          }
                                          goto 
                                          UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        }
                                      }
                                    }
                                    goto LAB_0354fbf4;
                                  }
                                  lVar33 = *plVar6;
                                  fVar65 = 0.0;
                                  fVar57 = 0.0;
                                  if (uVar20 != 3 && uVar20 != 0xad) {
                                    fVar57 = fVar80;
                                  }
                                  if (lVar33 == 0) goto LAB_0354fbf4;
                                  _fStack0000000000000120 = 0;
                                }
                                lVar33 = *(long *)(lVar33 + 0x38);
                                if (lVar33 == 0) goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                                *(short *)(lVar33 + 0x20) = (short)uVar20;
                                *(int *)(lVar33 + 0x60) = (int)unaff_x19[0x3d];
                                *(undefined4 *)(lVar33 + 0x164) =
                                     *(undefined4 *)((long)unaff_x19 + 0x4ec);
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(int *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x168) =
                                     (int)unaff_x19[0x2b];
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(undefined4 *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x170) =
                                     *(undefined4 *)((long)unaff_x19 + 0x15c);
                                if ((unaff_x19[0x6d] == 0) ||
                                   (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                uVar22 = *puVar4;
                                FUN_0209a6e0(unaff_x19 + 0xaa,&stack0x000008b0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                                if (*(uint *)(lVar33 + 0x18) <= uVar22)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar33 = lVar33 + (long)(int)uVar22 * 0x178;
                                *(undefined4 *)(lVar33 + 0x18c) = 0;
                                *(undefined8 *)(lVar33 + 0x184) = 0;
                                *(ulong *)(lVar33 + 0x17c) = uVar26;
                                if ((*plVar6 == 0) ||
                                   (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(undefined4 *)(lVar33 + (long)(int)*puVar4 * 0x178 + 400) =
                                     *(undefined4 *)((long)unaff_x19 + 0x25c);
                                if ((unaff_x19[0xc9] == 0) ||
                                   (lVar33 = *(long *)(unaff_x19[0xc9] + 0x20), lVar33 == 0))
                                goto LAB_0354fbf4;
                                FUN_03776e6c(&stack0x00000c28,lVar33,0);
                                if ((int)uVar20 < 0x10000) {
                                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar22 = FUN_026b63d8(uVar20,0);
                                  uVar22 = uVar22 & 1;
                                }
                                else {
                                  uVar22 = 0;
                                }
                                fVar61 = *(float *)(unaff_x19 + 0x55);
                                *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                                if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                                  fVar66 = 0.0;
                                  fVar62 = 0.0;
                                  fVar81 = 0.0;
                                }
                                else {
                                  if (*puVar5 == 0) goto LAB_0354fbf4;
                                  uVar38 = *puVar4;
                                  uVar50 = *(uint *)(*puVar5 + 0x28);
                                  if ((int)uVar38 < (int)uVar41) {
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= uVar38 + 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar33 = *(long *)(lVar33 + (long)(int)(uVar38 + 1) * 0x178 +
                                                      0x30);
                                    if ((((lVar33 == 0) || (*plVar52 == 0)) ||
                                        (lVar35 = *(long *)(*plVar52 + 0x128), lVar35 == 0)) ||
                                       (lVar35 = *(long *)(lVar35 + 0x18), lVar35 == 0))
                                    goto LAB_0354fbf4;
                                    uVar26 = (ulong)(uVar50 | *(int *)(lVar33 + 0x28) << 0x10);
                                    uVar31 = FUN_0219f8b8(lVar35,&stack0x000008b0,&stack0x00001708,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                    uVar19 = 0;
                                    if ((uVar31 & 1) == 0) {
                                      fVar66 = 0.0;
                                      fVar62 = 0.0;
                                      fVar81 = 0.0;
                                    }
                                    else {
                                      if (in_stack_00001708 == 0) goto LAB_0354fbf4;
                                      fVar66 = *(float *)(in_stack_00001708 + 0x1c);
                                      uVar19 = *(undefined4 *)(in_stack_00001708 + 0x20);
                                      fVar81 = *(float *)(in_stack_00001708 + 0x14);
                                      fVar62 = *(float *)(in_stack_00001708 + 0x18);
                                      if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                                        fVar61 = 0.0;
                                      }
                                    }
                                    uVar38 = *puVar4;
                                  }
                                  else {
                                    uVar19 = 0;
                                    fVar66 = 0.0;
                                    fVar62 = 0.0;
                                    fVar81 = 0.0;
                                  }
                                  if (0 < (int)uVar38) {
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= uVar38 - 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar33 = *(long *)(lVar33 + (ulong)(uVar38 - 1) * 0x178 + 0x30);
                                    if (((lVar33 == 0) || (*plVar52 == 0)) ||
                                       ((lVar35 = *(long *)(*plVar52 + 0x128), lVar35 == 0 ||
                                        (lVar35 = *(long *)(lVar35 + 0x18), lVar35 == 0))))
                                    goto LAB_0354fbf4;
                                    uVar26 = (ulong)(*(uint *)(lVar33 + 0x28) | uVar50 << 0x10);
                                    uVar31 = FUN_0219f8b8(lVar35,&stack0x000008b0,&stack0x00001708,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                                    if ((uVar31 & 1) != 0) {
                                      if ((in_stack_00001708 == 0) ||
                                         (fVar81 = (float)FUN_03571cb4(fVar81,fVar62,fVar66,uVar19,
                                                                       *(undefined4 *)
                                                                        (in_stack_00001708 + 0x28),
                                                                       *(undefined4 *)
                                                                        (in_stack_00001708 + 0x2c),
                                                                       *(undefined4 *)
                                                                        (in_stack_00001708 + 0x30),
                                                                       *(undefined4 *)
                                                                        (in_stack_00001708 + 0x34),0
                                                                      ), in_stack_00001708 == 0))
                                      goto LAB_0354fbf4;
                                      if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                                        fVar61 = 0.0;
                                      }
                                    }
                                  }
                                  *(float *)((long)unaff_x19 + 0x2fc) = fVar66;
                                }
                                if ((char)unaff_x19[0x1e] != '\0') {
                                  fVar83 = *(float *)(unaff_x19 + 200);
                                  fVar64 = (float)FUN_03776cb4(&stack0x000017a0,0);
                                  fVar83 = fVar83 - fVar57 * fVar64 * (1.0 - *(float *)((long)
                                                  unaff_x19 + 0x2d4));
                                  *(float *)(unaff_x19 + 200) = fVar83;
                                  if ((uVar20 == 0x200b) || (uVar22 != 0)) {
                                    *(float *)(unaff_x19 + 200) =
                                         fVar83 - fVar60 * *(float *)((long)unaff_x19 + 0x2b4);
                                  }
                                }
                                fVar83 = *(float *)(unaff_x19 + 0x56);
                                fVar64 = 0.0;
                                if (fVar83 != 0.0) {
                                  fVar64 = (float)FUN_03776c94(&stack0x000017a0,0);
                                  fVar63 = (float)FUN_03776ca4(&stack0x000017a0,0);
                                  fVar64 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (fVar83 * 0.5 - fVar57 * (fVar64 * 0.5 + fVar63));
                                  *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar64
                                  ;
                                }
                                if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar37 == '\0'))
                                   && ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                                  lVar33 = *plVar2;
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar31 = FUN_036cee6c(lVar33,0,0);
                                  fVar63 = 0.0;
                                  if ((uVar31 & 1) != 0) {
                                    lVar33 = *plVar2;
                                    if (*(int *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    plVar51 = (long *)
                                              OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                    if (lVar33 == 0) goto LAB_0354fbf4;
                                    uVar31 = FUN_03699d3c(lVar33,*(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                                    fVar63 = 0.0;
                                    if ((uVar31 & 1) != 0) {
                                      lVar33 = *plVar2;
                                      if (*(int *)(*plVar51 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        plVar51 = (long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                      }
                                      if (lVar33 == 0) goto LAB_0354fbf4;
                                      fVar83 = (float)FUN_0369e060(lVar33,*(undefined4 *)
                                                                           (*(long *)(*plVar51 +
                                                                                     0xb8) + 0x54),0
                                                                  );
                                      if ((*plVar52 == 0) || (*plVar2 == 0)) goto LAB_0354fbf4;
                                      fVar77 = *(float *)(*plVar52 + 0x1b0);
                                      fVar63 = (float)FUN_0369e060(*plVar2,*(undefined4 *)
                                                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                      fVar63 = fVar63 * fVar83 * fVar77 * 0.25;
                                      if (fVar83 < fStack000000000000016c + fVar63) {
                                        fStack000000000000016c = fVar83 - fVar63;
                                      }
                                    }
                                  }
                                  if (*plVar52 == 0) goto LAB_0354fbf4;
                                  fStack00000000000000d0 = *(float *)(*plVar52 + 0x1b4);
                                }
                                else {
                                  lVar33 = *plVar2;
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar31 = FUN_036cee6c(lVar33,0,0);
                                  fStack00000000000000d0 = 0.0;
                                  if ((uVar31 & 1) != 0) {
                                    lVar33 = *plVar2;
                                    if (*(int *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    plVar51 = (long *)
                                              OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                    if (lVar33 == 0) goto LAB_0354fbf4;
                                    uVar31 = FUN_03699d3c(lVar33,*(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                                    if ((uVar31 & 1) != 0) {
                                      lVar33 = *plVar2;
                                      if (*(int *)(*plVar51 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        plVar51 = (long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                      }
                                      if (lVar33 == 0) goto LAB_0354fbf4;
                                      uVar31 = FUN_03699d3c(lVar33,*(undefined4 *)
                                                                    (*(long *)(*plVar51 + 0xb8) +
                                                                    0xcc),0);
                                      if ((uVar31 & 1) != 0) {
                                        lVar33 = *plVar2;
                                        if (*(int *)(*plVar51 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          plVar51 = (long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                        }
                                        if (lVar33 != 0) {
                                          fVar83 = (float)FUN_0369e060(lVar33,*(undefined4 *)
                                                                               (*(long *)(*plVar51 +
                                                                                         0xb8) +
                                                                               0x54),0);
                                          if ((*plVar52 != 0) && (*plVar2 != 0)) {
                                            fVar77 = *(float *)(*plVar52 + 0x1a8);
                                            fVar63 = (float)FUN_0369e060(*plVar2,*(undefined4 *)
                                                                                  (*(long *)(*(long 
                                                  *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                            fVar63 = fVar63 * fVar83 * fVar77 * 0.25;
                                            if (fVar83 < fStack000000000000016c + fVar63) {
                                              fStack000000000000016c = fVar83 - fVar63;
                                            }
                                            goto LAB_0354a568;
                                          }
                                        }
                                        goto LAB_0354fbf4;
                                      }
                                    }
                                  }
                                  fVar63 = 0.0;
                                }
LAB_0354a568:
                                fVar83 = *(float *)(unaff_x19 + 200);
                                fVar77 = (float)FUN_03776ca4(&stack0x000017a0,0);
                                fVar83 = fVar83 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                  fVar57 * (fVar81 + ((fVar77 - 
                                                  fStack000000000000016c) - fVar63));
                                fVar81 = (float)FUN_03776cac(&stack0x000017a0,0);
                                fVar77 = *(float *)((long)unaff_x19 + 0x61c) +
                                         ((fVar65 + fVar57 * (fVar62 + fStack000000000000016c +
                                                                       fVar81)) -
                                         *(float *)(unaff_x19 + 0x9b));
                                fVar81 = (float)FUN_03776c9c(&stack0x000017a0,0);
                                fStack0000000000000134 =
                                     fVar77 - fVar57 * (fStack000000000000016c +
                                                        fStack000000000000016c + fVar81);
                                fVar81 = (float)FUN_03776c94(&stack0x000017a0,0);
                                fVar62 = fVar83 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                  fVar57 * (fVar63 + fVar63 +
                                                           fStack000000000000016c +
                                                           fStack000000000000016c + fVar81);
                                fStack0000000000000104 = fVar83;
                                fVar81 = fVar62;
                                if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar37 == '\0'))
                                   && ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                                  fVar67 = (float)(int)unaff_x19[0xbe] * fVar82;
                                  fVar81 = (float)FUN_03776cac(&stack0x000017a0,0);
                                  fVar68 = fVar67 * fVar57 * (fVar63 + fStack000000000000016c +
                                                                       fVar81);
                                  fVar81 = (float)FUN_03776cac(&stack0x000017a0,0);
                                  fVar87 = (float)FUN_03776c9c(&stack0x000017a0,0);
                                  fVar77 = fVar77 + 0.0;
                                  fStack0000000000000134 = fStack0000000000000134 + 0.0;
                                  fVar67 = fVar67 * fVar57 * (((fVar81 - fVar87) -
                                                              fStack000000000000016c) - fVar63);
                                  fVar87 = fVar83 + fVar68;
                                  fVar81 = fVar62 + fVar67;
                                  fVar76 = (fVar68 - fVar67) * 0.5;
                                  fVar83 = (fVar83 + fVar67) - fVar76;
                                  fVar62 = (fVar62 + fVar68) - fVar76;
                                  fStack0000000000000104 = fVar87 - fVar76;
                                  fVar81 = fVar81 - fVar76;
                                }
                                if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                  fVar67 = 0.0;
                                  fVar68 = 0.0;
                                  fVar75 = 0.0;
                                  fStack0000000000000100 = 0.0;
                                  fVar76 = fStack0000000000000134;
                                  fVar87 = fVar77;
                                }
                                else {
                                  thunk_FUN_036bc400(lVar27,0);
                                  fVar78 = (fVar62 + fVar83) * 0.5;
                                  fVar84 = (fStack0000000000000134 + fVar77) * 0.5;
                                  fVar77 = fVar77 - fVar84;
                                  fStack0000000000000100 = 0.0;
                                  fVar87 = fVar77;
                                  fStack0000000000000104 =
                                       (float)FUN_036bdd2c(fStack0000000000000104 - fVar78,lVar27,0)
                                  ;
                                  fStack0000000000000104 = fVar78 + fStack0000000000000104;
                                  fStack0000000000000100 = fStack0000000000000100 + 0.0;
                                  fVar76 = fStack0000000000000134 - fVar84;
                                  fVar67 = 0.0;
                                  fStack0000000000000134 = fVar76;
                                  fVar83 = (float)FUN_036bdd2c(fVar83 - fVar78,lVar27,0);
                                  fVar83 = fVar78 + fVar83;
                                  fVar67 = fVar67 + 0.0;
                                  fStack0000000000000134 = fVar84 + fStack0000000000000134;
                                  fVar75 = 0.0;
                                  fVar62 = (float)FUN_036bdd2c(fVar62 - fVar78,lVar27,0);
                                  fVar62 = fVar78 + fVar62;
                                  fVar77 = fVar84 + fVar77;
                                  fVar75 = fVar75 + 0.0;
                                  fVar68 = 0.0;
                                  fVar81 = (float)FUN_036bdd2c(fVar81 - fVar78,lVar27,0);
                                  fVar81 = fVar78 + fVar81;
                                  fVar68 = fVar68 + 0.0;
                                  fVar76 = fVar84 + fVar76;
                                  fVar87 = fVar84 + fVar87;
                                }
                                if (*plVar6 == 0) goto LAB_0354fbf4;
                                lVar33 = *(long *)(*plVar6 + 0x38);
                                uVar31 = (ulong)(uint)fVar57;
                                if (lVar33 == 0) goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar33 + 0x11c) = fVar83;
                                *(float *)(lVar33 + 0x120) = fStack0000000000000134;
                                *(float *)(lVar33 + 0x124) = fVar67;
                                if ((*plVar6 == 0) ||
                                   (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar33 + 0x114) = fVar87;
                                *(float *)(lVar33 + 0x110) = fStack0000000000000104;
                                *(float *)(lVar33 + 0x118) = fStack0000000000000100;
                                if ((*plVar6 == 0) ||
                                   (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar33 + 0x128) = fVar62;
                                *(float *)(lVar33 + 300) = fVar77;
                                *(float *)(lVar33 + 0x130) = fVar75;
                                if ((*plVar6 == 0) ||
                                   (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar33 = lVar33 + (long)(int)*puVar4 * 0x178;
                                *(float *)(lVar33 + 0x134) = fVar81;
                                *(float *)(lVar33 + 0x138) = fVar76;
                                *(float *)(lVar33 + 0x13c) = fVar68;
                                if ((*plVar6 == 0) ||
                                   (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                goto LAB_0354fbf4;
                                uVar50 = *puVar4;
                                lVar35 = (long)(int)uVar50;
                                if (*(uint *)(lVar33 + 0x18) <= uVar50)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar53 = lVar33 + lVar35 * 0x178;
                                *(int *)(lVar53 + 0x140) = (int)unaff_x19[200];
                                fVar77 = *(float *)(unaff_x19 + 0x9b);
                                uVar71 = (ulong)(uint)fVar77;
                                fVar81 = *(float *)((long)unaff_x19 + 0x61c);
                                *(float *)(lVar53 + 0x15c) =
                                     (fVar62 - fVar83) / (fVar87 - fStack0000000000000134);
                                *(float *)(lVar53 + 0x14c) = (fVar65 - fVar77) + fVar81;
                                fVar62 = fStack0000000000000124 * fVar57;
                                if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                  fVar62 = fVar62 / fVar56;
                                  fStack0000000000000120 =
                                       (fStack0000000000000120 * fVar57) / fVar56;
                                }
                                else {
                                  fStack0000000000000120 = fStack0000000000000120 * fVar57;
                                }
                                uVar38 = *(uint *)(unaff_x19 + 0x93);
                                if ((uVar22 == 0) || (uVar50 == uVar38)) {
                                  fStack0000000000000120 = fVar81 + fStack0000000000000120;
                                  fVar62 = fVar81 + fVar62;
                                  fVar65 = fStack0000000000000120;
                                  fVar83 = fVar62;
                                  if (fVar81 != 0.0) {
                                    fVar83 = (fVar62 - fVar81) / *(float *)((long)unaff_x19 + 0x404)
                                    ;
                                    fVar65 = (fStack0000000000000120 - fVar81) /
                                             *(float *)((long)unaff_x19 + 0x404);
                                    if (fVar83 <= fVar62) {
                                      fVar83 = fVar62;
                                    }
                                    if (fStack0000000000000120 <= fVar65) {
                                      fVar65 = fStack0000000000000120;
                                    }
                                  }
                                  lVar33 = lVar33 + lVar35 * 0x178;
                                  fVar81 = fVar83;
                                  if (fVar83 <= *(float *)(unaff_x19 + 0x99)) {
                                    fVar81 = *(float *)(unaff_x19 + 0x99);
                                  }
                                  fVar87 = fVar65;
                                  if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar65) {
                                    fVar87 = *(float *)((long)unaff_x19 + 0x4cc);
                                  }
                                  *(float *)((long)unaff_x19 + 0x4cc) = fVar87;
                                  *(float *)(unaff_x19 + 0x99) = fVar81;
                                  *(float *)(lVar33 + 0x154) = fVar83;
                                  *(float *)(lVar33 + 0x158) = fVar65;
                                  *(float *)(lVar33 + 0x148) = fVar62 - fVar77;
                                  *(float *)(unaff_x19 + 0x98) = fVar62 - fVar77;
                                  *(float *)(lVar33 + 0x150) = fStack0000000000000120 - fVar77;
                                  *(float *)((long)unaff_x19 + 0x4c4) =
                                       fStack0000000000000120 - fVar77;
                                  if (((int)unaff_x19[0x95] == 0) ||
                                     (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                                    *(float *)(unaff_x19 + 0x97) = fVar81;
                                    if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                                    fVar81 = *(float *)((long)unaff_x19 + 0x4bc);
                                    fVar83 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                                    fVar56 = (fVar57 * fVar83) / fVar56;
                                    uVar71 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                    if (fVar81 <= fVar56) {
                                      fVar81 = fVar56;
                                    }
                                    *(float *)((long)unaff_x19 + 0x4bc) = fVar81;
                                  }
                                  if ((float)uVar71 == 0.0) {
                                    fVar56 = *(float *)((long)unaff_x19 + 0x4b4);
                                    if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar62) {
                                      fVar56 = fVar62;
                                    }
                                    *(float *)((long)unaff_x19 + 0x4b4) = fVar56;
                                  }
                                }
                                else {
                                  fVar56 = *(float *)(unaff_x19 + 0x99);
                                  lVar33 = lVar33 + lVar35 * 0x178;
                                  *(float *)(lVar33 + 0x154) = fVar56;
                                  fVar81 = *(float *)((long)unaff_x19 + 0x4cc);
                                  fVar56 = fVar56 - fVar77;
                                  *(float *)(lVar33 + 0x148) = fVar56;
                                  *(float *)(lVar33 + 0x158) = fVar81;
                                  *(float *)(unaff_x19 + 0x98) = fVar56;
                                  fVar81 = fVar81 - fVar77;
                                  *(float *)(lVar33 + 0x150) = fVar81;
                                  *(float *)((long)unaff_x19 + 0x4c4) = fVar81;
                                }
                                lVar33 = *plVar6;
                                if ((lVar33 == 0) ||
                                   (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                                goto LAB_0354fbf4;
                                uVar23 = *puVar4;
                                if (*(uint *)(lVar35 + 0x18) <= uVar23)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                lVar35 = lVar35 + (long)(int)uVar23 * 0x178;
                                *(undefined1 *)(lVar35 + 0x194) = 0;
                                uVar44 = *(uint *)(unaff_x19 + 0x4f);
                                if ((uVar20 == 9) ||
                                   (((((uVar22 == 0 && (uVar20 != 3)) && (uVar20 != 0x200b)) &&
                                     (uVar20 != 0xad)) ||
                                    (((bool)(uVar20 == 0xad & (bVar17 ^ 1U)) ||
                                     (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                                  *(undefined1 *)(lVar35 + 0x194) = 1;
                                  pfVar42 = (float *)((long)unaff_x19 + 0x354);
                                  pfVar39 = (float *)(unaff_x19 + 0x6a);
                                  if (bVar11) {
                                    lVar33 = *(long *)(lVar33 + 0x50);
                                    if (lVar33 == 0) goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    pfVar39 = (float *)(lVar33 + 0x60);
                                    pfVar42 = (float *)(lVar33 + 100);
                                  }
                                  fVar81 = *pfVar39;
                                  fVar62 = *pfVar42;
                                  fVar56 = *(float *)(unaff_x19 + 0x6c);
                                  fVar83 = *(float *)(unaff_x19 + 200);
                                  fStack00000000000000fc = (fVar86 - fVar81) - fVar62;
                                  bVar16 = true;
                                  if ((fVar56 <= fStack00000000000000fc) &&
                                     (bVar16 = false, !NAN(fVar56))) {
                                    bVar16 = fVar56 == -1.0;
                                  }
                                  if (!bVar16) {
                                    fStack00000000000000fc = fVar56;
                                  }
                                  fVar56 = 0.0;
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    fVar56 = (float)FUN_03776cb4(&stack0x000017a0,0);
                                    uVar71 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                                  }
                                  fVar77 = *(float *)((long)unaff_x19 + 0x2d4);
                                  fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
                                  if (uVar20 != 0xad) {
                                    fVar80 = fVar57;
                                  }
                                  fVar67 = (float)uVar71;
                                  fVar87 = 0.0;
                                  if ((0.0 < fVar67) &&
                                     (fVar87 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                    fVar87 = *(float *)(unaff_x19 + 0x99) -
                                             *(float *)(unaff_x19 + 0x9a);
                                  }
                                  uVar23 = *puVar4;
                                  fVar87 = (*(float *)(unaff_x19 + 0x97) - (fVar65 - fVar67)) +
                                           fVar87;
                                  if (fVar54 < fVar87) {
                                    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                      *(uint *)((long)unaff_x19 + 0x2e4) = uVar23;
                                    }
                                    puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    uVar34 = DAT_00d37868;
                                    if ((char)unaff_x19[0x47] != '\0') {
                                      fVar76 = *(float *)(unaff_x19 + 0x59);
                                      if (((fVar76 < *(float *)((long)unaff_x19 + 700)) &&
                                          (0.0 < fVar67)) &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar85 = *(float *)((long)unaff_x19 + 700) +
                                                 ((fVar74 - fVar87) / (float)(int)unaff_x19[0x95]) /
                                                 fVar85;
                                        if (fVar85 <= fVar76) {
                                          fVar85 = fVar76;
                                        }
                                        goto UnityEngine_AndroidJavaObject___ctor;
                                      }
                                      fVar67 = *(float *)((long)unaff_x19 + 0x1e4);
                                      fVar87 = *(float *)(unaff_x19 + 0x4a);
                                      uVar71 = (ulong)(uint)fVar87;
                                      if ((fVar87 < fVar67) &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar85 = (fVar67 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                        if (fVar85 <= DAT_00d38b84) {
                                          fVar85 = DAT_00d38b84;
                                        }
                                        fVar60 = (fVar67 - fVar85) * 20.0 + 0.5;
                                        *(float *)((long)unaff_x19 + 0x23c) = fVar67;
                                        fVar85 = DAT_00d38e60;
                                        if (fVar60 != INFINITY) {
                                          fVar85 = (float)(int)fVar60 / 20.0;
                                        }
                                        if (fVar85 <= fVar87) {
                                          fVar85 = fVar87;
                                        }
                                        goto LAB_0354d004;
                                      }
                                    }
                                    switch((int)unaff_x19[0x5c]) {
                                    case 1:
                                      lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar33 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar33 = *(long *)puVar14;
                                      }
                                      lVar35 = *(long *)(lVar33 + 0xb8);
                                      lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                        0x20);
                                      if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                                        lVar33 = FUN_01a46ff8(lVar33);
                                      }
                                      piVar32 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                                                          *(long *)(*(long *)(*(long
                                                                                                *)(
                                                  lVar33 + 0xc0) + 8) + 0x80) + 0xa0);
                                      puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*piVar32 == 0) {
LAB_0354cf2c:
                                        in_stack_000017d8 = DAT_00d37868;
                                        puVar4[0] = 0;
                                        puVar4[1] = 0;
                                        uVar88 = 0xffffffff;
                                      }
                                      else {
                                        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar33 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar33 = *(long *)puVar14;
                                        }
                                        FUN_0209b778(*(long *)(lVar33 + 0xb8) + 0x11f0,
                                                     &stack0x000008b0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                                        iVar21 = FUN_0358c15c();
LAB_0354b3a0:
                                        iVar24 = *(int *)((long)unaff_x19 + 0x494) + -1;
                                        *(int *)((long)unaff_x19 + 0x494) = iVar24;
                                        iVar18 = iVar18 + 1;
                                        uVar88 = iVar21 - 1;
                                        in_stack_000017d8 = CONCAT44(0x2026,iVar24);
                                      }
                                      goto LAB_03549564;
                                    default:
                                      goto switchD_0354ad3c_caseD_2;
                                    case 3:
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
LAB_0354af20:
                                      uVar88 = FUN_0358c15c();
                                      break;
                                    case 5:
                                      if ((uVar23 == 0) || ((int)uVar88 < 0)) {
                                        *puVar4 = 0;
                                        uVar88 = 0xffffffff;
                                        in_stack_000017d8 = uVar34;
                                      }
                                      else {
                                        fVar80 = *(float *)(unaff_x19 + 0x99);
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar88 = FUN_0358c15c();
                                        if (fVar54 < fVar80 - fVar65) break;
                                        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                        *(undefined4 *)(unaff_x19 + 0x93) =
                                             *(undefined4 *)((long)unaff_x19 + 0x494);
                                        uVar71 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                        *(float *)(unaff_x19 + 200) =
                                             *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                        lVar33 = NEON_rev64(uVar71,4);
                                        unaff_x19[0x99] = lVar33;
                                        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                        *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                      }
                                      goto LAB_03549564;
                                    case 6:
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar88 = FUN_0358c15c();
                                      lVar33 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar29 = FUN_036cee6c(lVar33,0,0);
                                      if ((uVar29 & 1) != 0) {
                                        plVar51 = (long *)unaff_x19[0x5d];
                                        uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                        if (plVar51 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar51 + 0x528))
                                                  (plVar51,uVar34,*(undefined8 *)(*plVar51 + 0x530))
                                        ;
                                        lVar33 = unaff_x19[0x5d];
                                        if (lVar33 == 0) goto LAB_0354fbf4;
                                        *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                        FUN_0357ee30(lVar33,*(undefined4 *)((long)unaff_x19 + 0x494)
                                                     ,0);
                                        plVar51 = (long *)unaff_x19[0x5d];
                                        if (plVar51 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar51 + 0x7a8))
                                                  (plVar51,0,0,*(undefined8 *)(*plVar51 + 0x7b0));
                                        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                      }
                                    }
LAB_0354b0e0:
                                    in_stack_000017d8 = CONCAT44(3,uVar23);
                                    goto LAB_03549564;
                                  }
switchD_0354ad3c_caseD_2:
                                  puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  fVar56 = ABS(fVar83) + fVar56 * (1.0 - fVar77) * fVar80;
                                  fVar80 = 1.0;
                                  if ((uVar44 & 0x18) != 0) {
                                    fVar80 = DAT_00d38acc;
                                  }
                                  fVar83 = fVar80 * fStack00000000000000fc;
                                  if (fVar83 < fVar56) {
                                    uVar71 = (ulong)(uint)fVar63;
                                    if (((char)unaff_x19[0x5b] == '\0') ||
                                       (uVar23 == *(uint *)(unaff_x19 + 0x93))) {
                                      if (((char)unaff_x19[0x47] != '\0') &&
                                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                      {
                                        fVar83 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                        if (fVar77 < fVar83) {
                                          fVar85 = fVar56 / (1.0 - fVar77);
                                          if (fVar77 <= 0.0) {
                                            fVar85 = fVar56;
                                          }
                                          fVar77 = fVar77 + (fVar56 - fVar80 * (
                                                  fStack00000000000000fc + DAT_00d38cc4)) / fVar85;
                                          goto LAB_0354fc24;
                                        }
                                        fVar77 = *(float *)((long)unaff_x19 + 0x1e4);
                                        fVar83 = *(float *)(unaff_x19 + 0x4a);
                                        if (fVar83 < fVar77) {
                                          fVar85 = (fVar77 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                          if (fVar85 <= DAT_00d38b84) {
                                            fVar85 = DAT_00d38b84;
                                          }
                                          *(float *)((long)unaff_x19 + 0x23c) = fVar77;
                                          fVar77 = fVar77 - fVar85;
LAB_0354fc60:
                                          fVar60 = fVar77 * 20.0 + 0.5;
                                          fVar85 = DAT_00d38e60;
                                          if (fVar60 != INFINITY) {
                                            fVar85 = (float)(int)fVar60 / 20.0;
                                          }
                                          if (fVar85 <= fVar83) {
                                            fVar85 = fVar83;
                                          }
                                          goto LAB_0354d004;
                                        }
                                      }
                                      iVar21 = (int)unaff_x19[0x5c];
                                      if (iVar21 == 1) {
                                        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar33 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar33 = *(long *)puVar14;
                                        }
                                        lVar35 = *(long *)(lVar33 + 0xb8);
                                        lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                          0x20);
                                        if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                                          lVar33 = FUN_01a46ff8(lVar33);
                                        }
                                        piVar32 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                                                            *(long *)(*(long *)(*(
                                                  long *)(lVar33 + 0xc0) + 8) + 0x80) + 0xa0);
                                        puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*piVar32 == 0) goto LAB_0354cf2c;
                                        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar33 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar33 = *(long *)puVar14;
                                        }
                                        FUN_0209b778(*(long *)(lVar33 + 0xb8) + 0x11f0,
                                                     &stack0x000008b0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
                                        goto LAB_0354b394;
                                      }
                                      if (iVar21 != 6) {
                                        if (iVar21 == 3) {
                                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                      0xe0) == 0) {
                                            thunk_FUN_01a58e78();
                                          }
                                          goto LAB_0354af20;
                                        }
                                        goto LAB_0354b8e4;
                                      }
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar88 = FUN_0358c15c();
                                      lVar33 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar29 = FUN_036cee6c(lVar33,0,0);
                                      if ((uVar29 & 1) != 0) {
                                        plVar51 = (long *)unaff_x19[0x5d];
                                        uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                        if (plVar51 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar51 + 0x528))
                                                  (plVar51,uVar34,*(undefined8 *)(*plVar51 + 0x530))
                                        ;
                                        lVar33 = unaff_x19[0x5d];
                                        if (lVar33 == 0) goto LAB_0354fbf4;
                                        *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                        FUN_0357ee30(lVar33,*(undefined4 *)((long)unaff_x19 + 0x494)
                                                     ,0);
                                        plVar51 = (long *)unaff_x19[0x5d];
                                        if (plVar51 == (long *)0x0) goto LAB_0354fbf4;
                                        (**(code **)(*plVar51 + 0x7a8))
                                                  (plVar51,0,0,*(undefined8 *)(*plVar51 + 0x7b0));
                                        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                      }
LAB_0354b4b4:
                                      in_stack_000017d8 = CONCAT44(3,*puVar4);
                                      goto LAB_03549564;
                                    }
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar88 = FUN_0358c15c();
                                    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                      lVar33 = *plVar6;
                                      if ((lVar33 == 0) ||
                                         (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                                      goto LAB_0354fbf4;
                                      if (*(uint *)(lVar35 + 0x18) <= *puVar4)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      fVar83 = *(float *)(unaff_x19 + 0x9b);
                                      fVar77 = 0.0;
                                      if ((0.0 < fVar83) &&
                                         (fVar77 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                                      {
                                        fVar77 = *(float *)(unaff_x19 + 0x99) -
                                                 *(float *)(unaff_x19 + 0x9a);
                                      }
                                      fVar77 = fVar60 * *(float *)(unaff_x19 + 0x57) +
                                               *(float *)(lVar35 + (long)(int)*puVar4 * 0x178 +
                                                         0x154) +
                                               (fVar77 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                               fVar85 * (fVar55 + *(float *)((long)unaff_x19 + 700))
                                      ;
                                    }
                                    else {
                                      lVar33 = unaff_x19[0x6d];
                                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                                      if (lVar33 == 0) goto LAB_0354fbf4;
                                      fVar83 = *(float *)(unaff_x19 + 0x9b);
                                      fVar77 = *(float *)(unaff_x19 + 0x58) +
                                               fVar60 * *(float *)(unaff_x19 + 0x57);
                                    }
                                    puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar33 = *(long *)(lVar33 + 0x38);
                                    if (lVar33 == 0) goto LAB_0354fbf4;
                                    uVar45 = *(uint *)((long)unaff_x19 + 0x494);
                                    if ((*(uint *)(lVar33 + 0x18) <= uVar45) ||
                                       (uVar10 = uVar45 - 1, *(uint *)(lVar33 + 0x18) <= uVar10))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    uVar71 = (ulong)(uint)(fVar77 + *(float *)(unaff_x19 + 0x97));
                                    fVar65 = (fVar77 + *(float *)(unaff_x19 + 0x97) + fVar83) -
                                             *(float *)(lVar33 + (long)(int)uVar45 * 0x178 + 0x158);
                                    if ((!bVar17 &&
                                         *(short *)(lVar33 + (long)(int)uVar10 * 0x178 + 0x20) ==
                                         0xad) && ((fVar65 < fVar54 || ((int)unaff_x19[0x5c] == 0)))
                                       ) {
                                      bVar17 = false;
                                      *puVar4 = uVar10;
                                      uVar88 = uVar88 - 1;
                                      in_stack_000017d8 = CONCAT44(0x2d,uVar10);
                                      goto LAB_03549564;
                                    }
                                    if (*(short *)(lVar33 + (long)(int)uVar45 * 0x178 + 0x20) ==
                                        0xad) {
                                      bVar17 = true;
                                      goto LAB_03549564;
                                    }
                                    if ((bVar12 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                                      fVar77 = *(float *)((long)unaff_x19 + 0x2d4);
                                      fVar83 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                      if ((fVar83 <= fVar77) ||
                                         ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))
                                         ) {
                                        fVar77 = *(float *)((long)unaff_x19 + 0x1e4);
                                        uVar71 = (ulong)(uint)fVar77;
                                        fVar83 = *(float *)(unaff_x19 + 0x4a);
                                        if ((fVar77 <= fVar83) ||
                                           ((int)unaff_x19[0x49] <=
                                            *(int *)((long)unaff_x19 + 0x244))) goto LAB_0354b6dc;
LAB_0354fcd0:
                                        fVar85 = (fVar77 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                        if (fVar85 <= DAT_00d38b84) {
                                          fVar85 = DAT_00d38b84;
                                        }
                                        *(float *)((long)unaff_x19 + 0x23c) = fVar77;
                                        fVar77 = fVar77 - fVar85;
                                        goto LAB_0354fc60;
                                      }
LAB_0354fc94:
                                      fVar85 = fVar56;
                                      if (0.0 < fVar77) {
                                        fVar85 = fVar56 / (1.0 - fVar77);
                                      }
                                      fVar77 = fVar77 + (fVar56 - fVar80 * (fStack00000000000000fc +
                                                                           DAT_00d38cc4)) / fVar85;
LAB_0354fc24:
                                      if (fVar83 <= fVar77) {
                                        fVar77 = fVar83;
                                      }
                                      *(float *)((long)unaff_x19 + 0x2d4) = fVar77;
                                      return;
                                    }
LAB_0354b6dc:
                                    lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar33 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar33 = *(long *)puVar14;
                                    }
                                    iVar21 = *(int *)(*(long *)(lVar33 + 0xb8) + 0xe78);
                                    if (((iVar21 != iStack000000000000002c) && (iVar21 != -1)) &&
                                       (bVar12 == 1)) {
                                      if (*(int *)(lVar33 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar88 = FUN_0358c15c();
                                      if ((unaff_x19[0x6d] == 0) ||
                                         (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                                      goto LAB_0354fbf4;
                                      uVar45 = *puVar4 - 1;
                                      if (*(uint *)(lVar33 + 0x18) <= uVar45)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      iStack000000000000002c = iVar21;
                                      if (*(short *)(lVar33 + (long)(int)uVar45 * 0x178 + 0x20) ==
                                          0xad) {
                                        bVar17 = false;
                                        *puVar4 = uVar45;
                                        uVar88 = uVar88 - 1;
                                        in_stack_000017d8 = CONCAT44(0x2d,uVar45);
                                        goto LAB_03549564;
                                      }
                                    }
                                    if (fVar65 <= fVar54) {
switchD_0354b88c_caseD_0:
                                      FUN_0358cbd4(fVar85,uVar31,fVar60,
                                                   *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                   fStack00000000000000d0,fVar61,
                                                   fStack00000000000000fc,fVar55);
                                    }
                                    else {
                                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                        *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                             *(undefined4 *)((long)unaff_x19 + 0x494);
                                      }
                                      fVar83 = fVar54;
                                      if ((char)unaff_x19[0x47] != '\0') {
                                        fVar83 = *(float *)(unaff_x19 + 0x59);
                                        if ((fVar83 < *(float *)((long)unaff_x19 + 700)) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) {
                                          fVar85 = *(float *)((long)unaff_x19 + 700) +
                                                   ((fVar74 - fVar65) /
                                                   (float)((int)unaff_x19[0x95] + 1)) / fVar85;
                                          if (fVar85 <= fVar83) {
                                            fVar85 = fVar83;
                                          }
UnityEngine_AndroidJavaObject___ctor:
                                          *(float *)((long)unaff_x19 + 700) = fVar85;
                                          return;
                                        }
                                        fVar77 = *(float *)((long)unaff_x19 + 0x2d4);
                                        fVar83 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                        if ((fVar77 < fVar83) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) goto LAB_0354fc94;
                                        fVar77 = *(float *)((long)unaff_x19 + 0x1e4);
                                        uVar71 = (ulong)(uint)fVar77;
                                        fVar83 = *(float *)(unaff_x19 + 0x4a);
                                        if ((fVar83 < fVar77) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) goto LAB_0354fcd0;
                                      }
                                      switch((int)unaff_x19[0x5c]) {
                                      case 0:
                                      case 2:
                                      case 4:
                                        goto switchD_0354b88c_caseD_0;
                                      case 1:
                                        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar33 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        }
                                        lVar35 = *(long *)(lVar33 + 0xb8);
                                        lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo +
                                                          0x20);
                                        if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                                          lVar33 = FUN_01a46ff8(lVar33);
                                        }
                                        piVar32 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                                                            *(long *)(*(long *)(*(
                                                  long *)(lVar33 + 0xc0) + 8) + 0x80) + 0xa0);
                                        if (*piVar32 == 0) {
                                          bVar17 = false;
                                          goto LAB_0354cf2c;
                                        }
                                        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar33 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        }
                                        FUN_0209b778(*(long *)(lVar33 + 0xb8) + 0x11f0,
                                                     &stack0x000008b0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                                        iVar21 = FUN_0358c15c();
                                        bVar17 = false;
                                        goto LAB_0354b3a0;
                                      case 3:
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar88 = FUN_0358c15c();
                                        bVar17 = false;
                                        goto LAB_0354b0e0;
                                      case 5:
                                        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                        FUN_0358cbd4(fVar85,uVar31,fVar60,
                                                     *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                     fStack00000000000000d0,fVar61,
                                                     fStack00000000000000fc,fVar55);
                                        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                        *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                        break;
                                      case 6:
                                        lVar33 = unaff_x19[0x5d];
                                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar29 = FUN_036cee6c(lVar33,0,0);
                                        if ((uVar29 & 1) != 0) {
                                          plVar51 = (long *)unaff_x19[0x5d];
                                          uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                          if (plVar51 == (long *)0x0) goto LAB_0354fbf4;
                                          (**(code **)(*plVar51 + 0x528))
                                                    (plVar51,uVar34,
                                                     *(undefined8 *)(*plVar51 + 0x530));
                                          lVar33 = unaff_x19[0x5d];
                                          if (lVar33 == 0) goto LAB_0354fbf4;
                                          *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                          FUN_0357ee30(lVar33,*(undefined4 *)
                                                               ((long)unaff_x19 + 0x494),0);
                                          plVar51 = (long *)unaff_x19[0x5d];
                                          if (plVar51 == (long *)0x0) goto LAB_0354fbf4;
                                          (**(code **)(*plVar51 + 0x7a8))
                                                    (plVar51,0,0,*(undefined8 *)(*plVar51 + 0x7b0));
                                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                        }
                                        bVar17 = false;
                                        goto LAB_0354b4b4;
                                      default:
                                        bVar17 = false;
                                        goto LAB_0354b8e4;
                                      }
                                    }
                                    bVar17 = false;
LAB_0354c6b4:
                                    bVar12 = 1;
                                    bVar13 = true;
                                    uVar71 = uVar31;
                                    uVar31 = (ulong)(uint)fVar57;
                                    goto LAB_03549564;
                                  }
LAB_0354b8e4:
                                  if (uVar20 != 0xad) {
                                    if (uVar20 == 9) {
                                      lVar33 = *plVar6;
                                      if ((lVar33 != 0) &&
                                         (lVar35 = *(long *)(lVar33 + 0x38), lVar35 != 0)) {
                                        uVar23 = *puVar4;
                                        if (*(uint *)(lVar35 + 0x18) <= uVar23)
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        *(undefined1 *)(lVar35 + (long)(int)uVar23 * 0x178 + 0x194)
                                             = 0;
                                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar23;
                                        lVar35 = *(long *)(lVar33 + 0x50);
                                        if (lVar35 != 0) {
                                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar35 + 0x18)
                                             ) {
                                            lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95)
                                                              * 0x5c;
                                            *(int *)(lVar35 + 0x2c) = *(int *)(lVar35 + 0x2c) + 1;
                                            goto LAB_0354b950;
                                          }
                                          goto 
                                          UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        }
                                      }
                                    }
                                    else {
                                      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                                        (**(code **)(*unaff_x19 + 0x898))(fVar83,fVar63);
                                      }
                                      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                        (**(code **)(*unaff_x19 + 0x888))(fStack000000000000016c);
                                      }
                                      if (bVar13) {
                                        *(uint *)((long)unaff_x19 + 0x49c) = *puVar4;
                                      }
                                      *(uint *)((long)unaff_x19 + 0x4a4) = *puVar4;
                                      *(int *)((long)unaff_x19 + 0x4ac) =
                                           *(int *)((long)unaff_x19 + 0x4ac) + 1;
                                      if ((unaff_x19[0x6d] != 0) &&
                                         (lVar33 = *(long *)(unaff_x19[0x6d] + 0x50), lVar33 != 0))
                                      {
                                        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar33 + 0x18))
                                        {
                                          lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                            0x5c;
                                          bVar13 = false;
                                          *(float *)(lVar33 + 0x60) = fVar81;
                                          *(float *)(lVar33 + 100) = fVar62;
                                          goto LAB_0354ba38;
                                        }
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                      }
                                    }
                                    goto LAB_0354fbf4;
                                  }
                                  if ((*plVar6 == 0) ||
                                     (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= *puVar4)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(undefined1 *)(lVar33 + (long)(int)*puVar4 * 0x178 + 0x194) = 0;
                                }
                                else {
                                  if (((uVar20 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6))
                                  {
                                    fVar56 = (float)uVar71;
                                    fVar80 = 0.0;
                                    if ((0.0 < fVar56) &&
                                       (fVar80 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                      fVar80 = *(float *)(unaff_x19 + 0x99) -
                                               *(float *)(unaff_x19 + 0x9a);
                                    }
                                    uVar71 = (ulong)(uint)fVar54;
                                    if (fVar54 < (*(float *)(unaff_x19 + 0x97) -
                                                 (*(float *)((long)unaff_x19 + 0x4cc) - fVar56)) +
                                                 fVar80) {
                                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                        *(uint *)((long)unaff_x19 + 0x2e4) = uVar23;
                                      }
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar88 = FUN_0358c15c();
                                      lVar33 = unaff_x19[0x5d];
                                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                      }
                                      uVar29 = FUN_036cee6c(lVar33,0,0);
                                      if ((uVar29 & 1) != 0) {
                                        plVar51 = (long *)unaff_x19[0x5d];
                                        uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                        if (plVar51 != (long *)0x0) {
                                          (**(code **)(*plVar51 + 0x528))
                                                    (plVar51,uVar34,
                                                     *(undefined8 *)(*plVar51 + 0x530));
                                          lVar33 = unaff_x19[0x5d];
                                          if (lVar33 != 0) {
                                            *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                            FUN_0357ee30(lVar33,*(undefined4 *)
                                                                 ((long)unaff_x19 + 0x494),0);
                                            plVar51 = (long *)unaff_x19[0x5d];
                                            if (plVar51 != (long *)0x0) {
                                              (**(code **)(*plVar51 + 0x7a8))
                                                        (plVar51,0,0,
                                                         *(undefined8 *)(*plVar51 + 0x7b0));
                                              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                              goto LAB_0354b0e0;
                                            }
                                          }
                                        }
                                        goto LAB_0354fbf4;
                                      }
                                      goto LAB_0354b0e0;
                                    }
                                  }
                                  if ((((uVar20 - 0x2007 < 0x23) &&
                                       ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x600000001U) !=
                                        0)) || (uVar20 - 10 < 2)) || (uVar20 == 0xa0)) {
LAB_0354b500:
                                    if (((uVar20 != 0xad) && (uVar20 != 0x200b)) &&
                                       (uVar20 != 0x2060)) {
                                      lVar33 = *plVar6;
                                      if ((lVar33 == 0) ||
                                         (lVar35 = *(long *)(lVar33 + 0x50), lVar35 == 0))
                                      goto LAB_0354fbf4;
                                      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
                                      *(int *)(lVar35 + 0x2c) = *(int *)(lVar35 + 0x2c) + 1;
                                      *(int *)(lVar33 + 0x20) = *(int *)(lVar33 + 0x20) + 1;
                                    }
                                  }
                                  else {
                                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar31 = FUN_026b97f8(uVar20,0);
                                    if ((uVar31 & 1) != 0) goto LAB_0354b500;
                                  }
                                  if (uVar20 == 0xa0) {
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x50), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
                                    *(int *)(lVar33 + 0x20) = *(int *)(lVar33 + 0x20) + 1;
                                  }
                                }
LAB_0354ba38:
                                if (((int)unaff_x19[0x5c] == 1) && ((uVar20 == 0x2d || (!bVar11))))
                                {
                                  if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                                  fVar80 = *(float *)(unaff_x19 + 0x3d);
                                  iVar21 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                                  if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                                  fVar81 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                                  lVar33 = unaff_x19[0xca];
                                  fVar56 = fVar72;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar56 = 1.0;
                                  }
                                  if ((lVar33 == 0) || (*(long *)(lVar33 + 0x20) == 0))
                                  goto LAB_0354fbf4;
                                  fVar83 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar77 = *(float *)(lVar33 + 0x2c);
                                  fVar62 = (float)FUN_03776ea8(*(long *)(lVar33 + 0x20),0);
                                  fVar63 = *(float *)(unaff_x19 + 0x6a);
                                  fVar62 = fVar83 * (fVar80 / (float)iVar21) * fVar81 * fVar56 *
                                           fVar77 * fVar62;
                                  fVar80 = *(float *)((long)unaff_x19 + 0x354);
                                  if ((uVar20 == 10) &&
                                     (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x38), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    uVar23 = *(int *)((long)unaff_x19 + 0x494) - 1;
                                    if (*(uint *)(lVar33 + 0x18) <= uVar23)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                                    fVar56 = *(float *)(lVar33 + (long)(int)uVar23 * 0x178 + 0x60);
                                    iVar21 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                                    if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                                    fVar83 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                                    lVar33 = unaff_x19[0xca];
                                    fVar81 = fVar72;
                                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                      fVar81 = 1.0;
                                    }
                                    if ((lVar33 == 0) || (*(long *)(lVar33 + 0x20) == 0))
                                    goto LAB_0354fbf4;
                                    fVar77 = *(float *)((long)unaff_x19 + 0x404);
                                    fVar65 = *(float *)(lVar33 + 0x2c);
                                    fVar62 = (float)FUN_03776ea8(*(long *)(lVar33 + 0x20),0);
                                    if ((*plVar6 == 0) ||
                                       (lVar33 = *(long *)(*plVar6 + 0x50), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    fVar63 = *(float *)(lVar33 + 0x60);
                                    fVar80 = *(float *)(lVar33 + 100);
                                    fVar62 = fVar77 * (fVar56 / (float)iVar21) * fVar83 * fVar81 *
                                             fVar65 * fVar62;
                                  }
                                  fVar83 = *(float *)(unaff_x19 + 0x9b);
                                  fVar56 = 0.0;
                                  fVar81 = 0.0;
                                  if ((0.0 < fVar83) &&
                                     (fVar81 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                    fVar81 = *(float *)(unaff_x19 + 0x99) -
                                             *(float *)(unaff_x19 + 0x9a);
                                  }
                                  fVar65 = *(float *)(unaff_x19 + 0x97);
                                  fVar87 = *(float *)((long)unaff_x19 + 0x4cc);
                                  fVar77 = *(float *)(unaff_x19 + 200);
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    if ((unaff_x19[0xca] == 0) ||
                                       (lVar33 = *(long *)(unaff_x19[0xca] + 0x20), lVar33 == 0))
                                    goto LAB_0354fbf4;
                                    FUN_03776e6c(&stack0x000008b0,lVar33,0);
                                    fVar56 = (float)FUN_03776cb4(&stack0x00001710,0);
                                  }
                                  puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  fVar67 = *(float *)(unaff_x19 + 0x6c);
                                  fVar80 = (fVar86 - fVar63) - fVar80;
                                  bVar16 = true;
                                  if ((fVar67 <= fVar80) && (bVar16 = false, !NAN(fVar67))) {
                                    bVar16 = fVar67 == -1.0;
                                  }
                                  if (!bVar16) {
                                    fVar80 = fVar67;
                                  }
                                  fVar63 = 1.0;
                                  if ((uVar44 & 0x18) != 0) {
                                    fVar63 = DAT_00d38acc;
                                  }
                                  if (((fVar65 - (fVar87 - fVar83)) + fVar81 < fVar54) &&
                                     (ABS(fVar77) +
                                      fVar62 * fVar56 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
                                      < fVar63 * fVar80)) {
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_0358c4f0();
                                    lVar33 = *(long *)(*(long *)puVar14 + 0xb8);
                                    memcpy(&stack0x00000538,(void *)(lVar33 + 0x788),0x378);
                                    FUN_0209b210(lVar33 + 0x11f0,&stack0x00000538,
                                                 *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                  }
                                }
                                lVar33 = *plVar6;
                                if (lVar33 == 0) goto LAB_0354fbf4;
                                lVar35 = *(long *)(lVar33 + 0x38);
                                if (lVar35 == 0) goto LAB_0354fbf4;
                                if (*(uint *)(lVar35 + 0x18) <= *puVar4)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                uVar23 = *(uint *)(unaff_x19 + 0x95);
                                lVar35 = lVar35 + (long)(int)*puVar4 * 0x178;
                                *(uint *)(lVar35 + 100) = uVar23;
                                *(int *)(lVar35 + 0x68) = (int)unaff_x19[0x96];
                                if ((bVar11) ||
                                   ((uVar20 < 0xe && ((1 << (ulong)(uVar20 & 0x1f) & 0x2c00U) != 0))
                                   )) {
                                  lVar33 = *(long *)(lVar33 + 0x50);
                                  if (lVar33 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= uVar23)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  if (*(int *)(lVar33 + (long)(int)uVar23 * 0x5c + 0x24) == 1)
                                  goto LAB_0354bde0;
                                }
                                else {
                                  lVar33 = *(long *)(lVar33 + 0x50);
                                  if (lVar33 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
                                  if (*(uint *)(lVar33 + 0x18) <= uVar23)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  *(int *)(lVar33 + (long)(int)uVar23 * 0x5c + 0x68) =
                                       (int)unaff_x19[0x4f];
                                }
                                if (uVar20 == 9) {
                                  if (*plVar52 == 0) goto LAB_0354fbf4;
                                  fVar80 = (float)FUN_03776a48(*plVar52 + 0x50,0);
                                  if (*plVar52 == 0) goto LAB_0354fbf4;
                                  fVar66 = *(float *)(unaff_x19 + 200);
                                  fVar56 = (float)NEON_ucvtf((uint)*(byte *)(*plVar52 + 0x1b9));
                                  fVar80 = fVar57 * fVar80 * fVar56;
                                  fVar56 = fVar80 * (float)(int)(fVar66 / fVar80);
                                  uVar71 = (ulong)(uint)fVar56;
                                  if (fVar56 <= fVar66) {
                                    fVar56 = fVar66 + fVar80;
                                  }
LAB_0354c000:
                                  *(float *)(unaff_x19 + 200) = fVar56;
                                }
                                else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                                  if ((char)unaff_x19[0x1e] == '\0') {
                                    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                      fVar81 = 1.0;
                                    }
                                    else {
                                      fVar81 = (float)thunk_FUN_036bc400(lVar27,0);
                                    }
                                    fVar56 = *(float *)(unaff_x19 + 200);
                                    fVar62 = (float)FUN_03776cb4(&stack0x000017a0,0);
                                    if (unaff_x19[0x20] != 0) {
                                      fVar80 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                                      fVar56 = fVar56 + fVar80 * (*(float *)((long)unaff_x19 + 0x2ac
                                                                            ) +
                                                                 fVar57 * (fVar66 + fVar81 * fVar62)
                                                                 + fVar60 * (fStack00000000000000d0
                                                                            + fVar61 + *(float *)(
                                                  unaff_x19[0x20] + 0x1ac)));
                                      *(float *)(unaff_x19 + 200) = fVar56;
                                      goto joined_r0x0354bf48;
                                    }
                                    goto LAB_0354fbf4;
                                  }
                                  if (*plVar52 == 0) goto LAB_0354fbf4;
                                  fVar56 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (*(float *)((long)unaff_x19 + 0x2ac) +
                                           fVar57 * fVar66 +
                                           fVar60 * (fStack00000000000000d0 +
                                                    fVar61 + *(float *)(*plVar52 + 0x1ac)));
                                  uVar71 = (ulong)(uint)fVar56;
                                  fVar56 = *(float *)(unaff_x19 + 200) - fVar56;
                                  *(float *)(unaff_x19 + 200) = fVar56;
                                  if ((uVar20 == 0x200b) || (uVar22 != 0)) {
                                    fVar80 = fVar60 * *(float *)((long)unaff_x19 + 0x2b4);
                                    uVar71 = (ulong)(uint)fVar80;
                                    fVar56 = fVar56 - fVar80;
                                    goto LAB_0354c000;
                                  }
                                }
                                else {
                                  if (*plVar52 == 0) goto LAB_0354fbf4;
                                  fVar80 = *(float *)(unaff_x19 + 200);
                                  fVar56 = fVar80 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                                    (*(float *)((long)unaff_x19 + 0x2ac) +
                                                    (*(float *)(unaff_x19 + 0x56) - fVar64) +
                                                    fVar60 * (fVar61 + *(float *)(*plVar52 + 0x1ac))
                                                    );
                                  *(float *)(unaff_x19 + 200) = fVar56;
joined_r0x0354bf48:
                                  if ((uVar20 == 0x200b) ||
                                     (uVar71 = (ulong)(uint)fVar80, uVar22 != 0)) {
                                    fVar80 = fVar60 * *(float *)((long)unaff_x19 + 0x2b4);
                                    uVar71 = (ulong)(uint)fVar80;
                                    fVar56 = fVar56 + fVar80;
                                    goto LAB_0354c000;
                                  }
                                }
                                lVar33 = *plVar6;
                                if ((lVar33 == 0) ||
                                   (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                                goto LAB_0354fbf4;
                                uVar23 = *puVar4;
                                uVar44 = (uint)*(undefined8 *)(lVar35 + 0x18);
                                if (uVar44 <= uVar23)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(float *)(lVar35 + (long)(int)uVar23 * 0x178 + 0x144) = fVar56;
                                uVar45 = uVar20;
                                if ((int)uVar20 < 0xd) {
                                  if ((uVar20 - 10 < 2) || (uVar20 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
                                  if (((bool)(bVar11 & uVar20 == 0x2d)) || (uVar23 == uVar41))
                                  goto LAB_0354c060;
                                }
                                else {
                                  if (1 < uVar20 - 0x2028) {
                                    if (uVar20 != 0xd) goto LAB_0354c6e8;
                                    uVar71 = 0;
                                    *(float *)(unaff_x19 + 200) =
                                         *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                    if (uVar23 != uVar41) goto LAB_0354c704;
                                  }
LAB_0354c060:
                                  if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                                    fVar80 = *(float *)(unaff_x19 + 0x99);
                                    fVar56 = *(float *)(unaff_x19 + 0x9a);
                                    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    fVar80 = fVar80 - fVar56;
                                    if (((fVar82 < ABS(fVar80)) &&
                                        (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                                       (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                                      FUN_0358c860(fVar80);
                                      *(float *)((long)unaff_x19 + 0x4c4) =
                                           *(float *)((long)unaff_x19 + 0x4c4) - fVar80;
                                      *(float *)(unaff_x19 + 0x9b) =
                                           fVar80 + *(float *)(unaff_x19 + 0x9b);
                                      puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar33 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar33 = *(long *)puVar14;
                                      }
                                      lVar35 = *(long *)(lVar33 + 0xb8);
                                      if (*(int *)(lVar35 + 0x7ac) == (int)unaff_x19[0x95]) {
                                        if (*(int *)(lVar33 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar35 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo
                                                            + 0xb8);
                                        }
                                        FUN_0209b778(lVar35 + 0x11f0,&stack0x000008b0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        memcpy((void *)(*(long *)(lVar33 + 0xb8) + 0x788),
                                               &stack0x000008b0,0x378);
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (*(long *)(lVar33 + 0xb8) + 0x818,0);
                                        lVar33 = *(long *)(*(long *)puVar14 + 0xb8);
                                        *(float *)(lVar33 + 0x7bc) =
                                             fVar80 + *(float *)(lVar33 + 0x7bc);
                                        *(float *)(lVar33 + 0x800) =
                                             fVar80 + *(float *)(lVar33 + 0x800);
                                        memcpy(&stack0x000001c0,(void *)(lVar33 + 0x788),0x378);
                                        FUN_0209b210(lVar33 + 0x11f0,&stack0x000001c0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                      }
                                    }
                                  }
                                  fVar66 = *(float *)(unaff_x19 + 0x9b);
                                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                                  fVar56 = *(float *)((long)unaff_x19 + 0x4cc) - fVar66;
                                  fVar80 = *(float *)((long)unaff_x19 + 0x4c4);
                                  if (fVar56 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                    fVar80 = fVar56;
                                  }
                                  *(float *)((long)unaff_x19 + 0x4c4) = fVar80;
                                  fVar81 = *(float *)(unaff_x19 + 0x99);
                                  if (in_stack_000017e4 == '\0') {
                                    fVar89 = fVar80;
                                  }
                                  if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                                     (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                                      ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                                    in_stack_000017e4 = '\x01';
                                  }
                                  lVar33 = *plVar6;
                                  if ((lVar33 == 0) ||
                                     (lVar35 = *(long *)(lVar33 + 0x50), lVar35 == 0))
                                  goto LAB_0354fbf4;
                                  uVar23 = *(uint *)(unaff_x19 + 0x95);
                                  if (*(uint *)(lVar35 + 0x18) <= uVar23)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar53 = unaff_x19[0x93];
                                  lVar30 = lVar35 + (long)(int)uVar23 * 0x5c;
                                  *(int *)(lVar30 + 0x34) = (int)lVar53;
                                  uVar44 = *(uint *)(unaff_x19 + 0x93);
                                  if ((int)lVar53 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                                    uVar44 = *(uint *)((long)unaff_x19 + 0x49c);
                                  }
                                  *(uint *)((long)unaff_x19 + 0x49c) = uVar44;
                                  *(uint *)(lVar30 + 0x38) = uVar44;
                                  *(undefined4 *)(unaff_x19 + 0x94) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                  *(undefined4 *)(lVar30 + 0x3c) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                  iVar21 = *(int *)((long)unaff_x19 + 0x49c);
                                  if ((int)uVar44 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                                    iVar21 = *(int *)((long)unaff_x19 + 0x4a4);
                                  }
                                  *(int *)((long)unaff_x19 + 0x4a4) = iVar21;
                                  *(int *)(lVar30 + 0x40) = iVar21;
                                  *(int *)(lVar30 + 0x24) =
                                       (*(int *)(lVar30 + 0x3c) - *(int *)(lVar30 + 0x34)) + 1;
                                  *(undefined4 *)(lVar30 + 0x28) =
                                       *(undefined4 *)((long)unaff_x19 + 0x4ac);
                                  lVar33 = *(long *)(lVar33 + 0x38);
                                  if (lVar33 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= uVar44)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  uVar19 = *(undefined4 *)
                                            (lVar33 + (long)(int)uVar44 * 0x178 + 0x11c);
                                  lVar35 = lVar35 + (long)(int)uVar23 * 0x5c;
                                  *(float *)(lVar35 + 0x70) = fVar56;
                                  *(undefined4 *)(lVar35 + 0x6c) = uVar19;
                                  lVar33 = *plVar6;
                                  if ((lVar33 == 0) ||
                                     (lVar35 = *(long *)(lVar33 + 0x50), lVar35 == 0))
                                  goto LAB_0354fbf4;
                                  if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar33 = *(long *)(lVar33 + 0x38);
                                  if (lVar33 == 0) goto LAB_0354fbf4;
                                  if (*(uint *)(lVar33 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)
                                     ) goto 
                                       UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  fVar81 = fVar81 - fVar66;
                                  uVar71 = (ulong)(uint)fVar81;
                                  lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                  *(undefined4 *)(lVar35 + 0x74) =
                                       *(undefined4 *)
                                        (lVar33 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) *
                                                  0x178 + 0x128);
                                  *(float *)(lVar35 + 0x78) = fVar81;
                                  lVar33 = *plVar6;
                                  if ((lVar33 == 0) ||
                                     (lVar53 = *(long *)(lVar33 + 0x50), lVar53 == 0))
                                  goto LAB_0354fbf4;
                                  lVar30 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                                  if (*(uint *)(lVar53 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar35 = lVar53 + lVar30 * 0x5c;
                                  *(float *)(lVar35 + 0x44) =
                                       *(float *)(lVar35 + 0x74) - fVar57 * fStack000000000000016c;
                                  *(float *)(lVar35 + 0x5c) = fStack00000000000000fc;
                                  if (*(int *)(lVar35 + 0x24) == 1) {
                                    *(int *)(lVar53 + lVar30 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                                  }
                                  if ((*plVar52 == 0) ||
                                     (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                                  goto LAB_0354fbf4;
                                  lVar47 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                                  uVar44 = (uint)*(undefined8 *)(lVar35 + 0x18);
                                  if (uVar44 <= *(uint *)((long)unaff_x19 + 0x4a4))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  if ((*(char *)(lVar35 + lVar47 * 0x178 + 0x194) == '\0') &&
                                     (lVar47 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                                     uVar44 <= *(uint *)(unaff_x19 + 0x94)))
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar53 = lVar53 + lVar30 * 0x5c;
                                  fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                           (fVar60 * (fStack00000000000000d0 +
                                                     fVar61 + *(float *)(*plVar52 + 0x1ac)) -
                                           *(float *)((long)unaff_x19 + 0x2ac));
                                  fVar80 = -fVar61;
                                  if ((char)unaff_x19[0x1e] != '\0') {
                                    fVar80 = fVar61;
                                  }
                                  *(float *)(lVar53 + 0x58) =
                                       *(float *)(lVar35 + lVar47 * 0x178 + 0x144) + fVar80;
                                  *(float *)(lVar53 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                                  *(float *)(lVar53 + 0x54) = fVar56;
                                  *(float *)(lVar53 + 0x48) = fVar85 * fVar55 + (fVar81 - fVar56);
                                  *(float *)(lVar53 + 0x4c) = fVar81;
                                  if ((int)uVar20 < 0x2d) {
                                    if (uVar20 - 10 < 2) {
LAB_0354c4a8:
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      FUN_0358c4f0();
                                      lVar33 = unaff_x19[0x6d];
                                      *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                                      iVar21 = (int)unaff_x19[0x95] + 1;
                                      *(int *)(unaff_x19 + 0x95) = iVar21;
                                      *(int *)(unaff_x19 + 0x93) =
                                           *(int *)((long)unaff_x19 + 0x494) + 1;
                                      if ((lVar33 != 0) && (*(long *)(lVar33 + 0x50) != 0)) {
                                        if (*(int *)(*(long *)(lVar33 + 0x50) + 0x18) <= iVar21) {
                                          FUN_0358ca18();
                                          lVar33 = unaff_x19[0x6d];
                                          if (lVar33 == 0) goto LAB_0354fbf4;
                                        }
                                        lVar33 = *(long *)(lVar33 + 0x38);
                                        if (lVar33 != 0) {
                                          if (*puVar4 < *(uint *)(lVar33 + 0x18)) {
                                            fVar80 = *(float *)(lVar33 + (long)(int)*puVar4 * 0x178
                                                               + 0x154);
                                            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                              if ((uVar20 == 0x2029) || (fVar56 = 0.0, uVar20 == 10)
                                                 ) {
                                                fVar56 = *(float *)((long)unaff_x19 + 0x2cc);
                                              }
                                              uVar36 = 0;
                                              fVar56 = fVar80 + (0.0 - *(float *)((long)unaff_x19 +
                                                                                 0x4cc)) +
                                                       fVar85 * (fVar55 + *(float *)((long)unaff_x19
                                                                                    + 700)) +
                                                       fVar60 * (*(float *)(unaff_x19 + 0x57) +
                                                                fVar56) +
                                                       *(float *)(unaff_x19 + 0x9b);
                                            }
                                            else {
                                              if ((uVar20 == 0x2029) || (fVar56 = 0.0, uVar20 == 10)
                                                 ) {
                                                fVar56 = *(float *)((long)unaff_x19 + 0x2cc);
                                              }
                                              uVar36 = 1;
                                              fVar56 = *(float *)(unaff_x19 + 0x9b) +
                                                       *(float *)(unaff_x19 + 0x58) +
                                                       fVar60 * (*(float *)(unaff_x19 + 0x57) +
                                                                fVar56);
                                            }
                                            *(float *)(unaff_x19 + 0x9b) = fVar56;
                                            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar36;
                                            puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                            if (*(int *)(lVar33 + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                              lVar33 = *(long *)puVar14;
                                            }
                                            uVar34 = *(undefined8 *)
                                                      (*(long *)(lVar33 + 0xb8) + 0x15a8);
                                            *(float *)(unaff_x19 + 0x9a) = fVar80;
                                            uVar31 = NEON_rev64(uVar34,4);
                                            unaff_x19[0x99] = uVar31;
                                            *(float *)(unaff_x19 + 200) =
                                                 *(float *)(unaff_x19 + 0x81) + 0.0 +
                                                 *(float *)((long)unaff_x19 + 0x40c);
                                            FUN_0358c4f0();
                                            FUN_0358c4f0();
                                            *(int *)((long)unaff_x19 + 0x494) =
                                                 *(int *)((long)unaff_x19 + 0x494) + 1;
                                            goto LAB_0354c6b4;
                                          }
                                          goto 
                                          UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                        }
                                      }
                                      goto LAB_0354fbf4;
                                    }
                                    if (uVar20 == 3) {
                                      if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                                      uVar88 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                                      uVar45 = 3;
                                    }
                                  }
                                  else if ((uVar20 - 0x2028 < 2) || (uVar20 == 0x2d))
                                  goto LAB_0354c4a8;
                                }
LAB_0354c704:
                                uVar23 = *puVar4;
                                if (uVar44 <= uVar23)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                if (*(char *)(lVar35 + (long)(int)uVar23 * 0x178 + 0x194) != '\0') {
                                  lVar35 = lVar35 + (long)(int)uVar23 * 0x178;
                                  uVar71 = *(ulong *)(lVar35 + 0x11c);
                                  uVar31 = *(ulong *)((long)unaff_x19 + 0x4dc);
                                  *(ulong *)((long)unaff_x19 + 0x4dc) =
                                       uVar31 ^ (uVar31 ^ uVar71) &
                                                ~CONCAT44(-(uint)((float)(uVar31 >> 0x20) <
                                                                 (float)(uVar71 >> 0x20)),
                                                          -(uint)((float)uVar31 < (float)uVar71));
                                  uVar31 = *(ulong *)((long)unaff_x19 + 0x4e4);
                                  uVar71 = *(ulong *)(lVar35 + 0x128);
                                  *(ulong *)((long)unaff_x19 + 0x4e4) =
                                       uVar31 ^ (uVar31 ^ uVar71) &
                                                ~CONCAT44(-(uint)((float)(uVar71 >> 0x20) <
                                                                 (float)(uVar31 >> 0x20)),
                                                          -(uint)((float)uVar71 < (float)uVar31));
                                }
                                if (((int)unaff_x19[0x5c] == 5) &&
                                   ((0xd < uVar45 || ((1 << (ulong)(uVar45 & 0x1f) & 0x2c00U) == 0))
                                   )) {
                                  lVar35 = *(long *)(lVar33 + 0x58);
                                  if (lVar35 == 0) goto LAB_0354fbf4;
                                  iVar21 = (int)unaff_x19[0x96] + 1;
                                  if (*(int *)(lVar35 + 0x18) < iVar21) {
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0
                                       ) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_01ff02b8((long *)(lVar33 + 0x58),iVar21,1,
                                                 *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                                    lVar33 = *plVar6;
                                    if (lVar33 == 0) goto LAB_0354fbf4;
                                  }
                                  lVar35 = *(long *)(lVar33 + 0x58);
                                  if (lVar35 == 0) goto LAB_0354fbf4;
                                  uVar44 = *(uint *)(unaff_x19 + 0x96);
                                  lVar53 = (long)(int)uVar44;
                                  uVar23 = *(uint *)(lVar35 + 0x18);
                                  if (uVar23 <= uVar44)
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                  lVar30 = lVar35 + lVar53 * 0x14;
                                  fVar56 = *(float *)(lVar30 + 0x30);
                                  uVar71 = (ulong)(uint)fVar56;
                                  *(undefined4 *)(lVar30 + 0x28) =
                                       *(undefined4 *)((long)unaff_x19 + 0x4b4);
                                  fVar80 = *(float *)((long)unaff_x19 + 0x4c4);
                                  if (fVar56 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                                    fVar80 = fVar56;
                                  }
                                  *(float *)(lVar30 + 0x30) = fVar80;
                                  uVar45 = *(uint *)((long)unaff_x19 + 0x494);
                                  if (uVar45 == 0 && uVar44 == 0) {
                                    *(uint *)(lVar35 + (ulong)uVar44 * 0x14 + 0x20) = uVar45;
                                  }
                                  else {
                                    uVar10 = uVar45 - 1;
                                    if (0 < (int)uVar45) {
                                      lVar33 = *(long *)(lVar33 + 0x38);
                                      if (lVar33 == 0) goto LAB_0354fbf4;
                                      if (*(uint *)(lVar33 + 0x18) <= uVar10)
                                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity
                                      ;
                                      if (uVar44 != *(uint *)(lVar33 + (ulong)uVar10 * 0x178 + 0x68)
                                         ) {
                                        if (uVar44 - 1 < uVar23) {
                                          *(uint *)(lVar35 + 0x20 + (long)(int)(uVar44 - 1) * 0x14 +
                                                   4) = uVar10;
                                          *(uint *)(lVar35 + 0x20 + lVar53 * 0x14) = uVar45;
                                          goto LAB_0354c780;
                                        }
                                        goto 
                                        UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                      }
                                    }
                                    if (uVar45 == uVar41) {
                                      *(uint *)(lVar35 + lVar53 * 0x14 + 0x24) = uVar41;
                                    }
                                  }
                                }
LAB_0354c780:
                                puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (((char)unaff_x19[0x5b] == '\0') &&
                                   ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                                    ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0
                                    )))) goto LAB_0354cc90;
                                if ((uVar22 == 0) &&
                                   (((uVar20 != 0x2d && (uVar20 != 0x200b)) && (uVar20 != 0xad)))) {
                                  if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
                                    if (((((0x2bfd < uVar20 - 0xac01) && (0xfd < uVar20 - 0x1101))
                                         && (0x1d < uVar20 - 0xa961)) ||
                                        (uVar31 = FUN_03597a54(0), (uVar31 & 1) != 0)) &&
                                       ((((0xed < uVar20 - 0xff01 && (0x1d < uVar20 - 0xfe31)) &&
                                         (0x717d < uVar20 - 0x2e81)) && (0x1fd < uVar20 - 0xf901))))
                                    goto LAB_0354c904;
                                    lVar33 = FUN_035978e8(0);
                                    if ((lVar33 == 0) || (*(long *)(lVar33 + 0x10) == 0))
                                    goto LAB_0354fbf4;
                                    uVar26 = (ulong)uVar20;
                                    uVar23 = FUN_0219c130(*(long *)(lVar33 + 0x10),&stack0x000008b0,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                    if ((int)uVar41 <= (int)*puVar4) {
                                      if ((uVar23 & 1) == 0) {
LAB_0354cc08:
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        FUN_0358c4f0();
                                        bVar12 = 0;
                                        goto LAB_0354cc90;
                                      }
LAB_0354cb6c:
                                      if (uVar50 != uVar38 || ((bVar12 ^ 0xff) & 1) != 0)
                                      goto LAB_0354cc90;
                                      if (uVar22 != 0) goto LAB_0354cb88;
                                      goto LAB_0354cbc0;
                                    }
                                    lVar33 = FUN_035978e8(0);
                                    if (((lVar33 == 0) || (*plVar6 == 0)) ||
                                       (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0))
                                    goto LAB_0354fbf4;
                                    if (*(uint *)(lVar35 + 0x18) <= *puVar4 + 1)
                                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                    if (*(long *)(lVar33 + 0x18) == 0) goto LAB_0354fbf4;
                                    uVar26 = (ulong)*(ushort *)
                                                     (lVar35 + (long)(int)(*puVar4 + 1) * 0x178 +
                                                     0x20);
                                    uVar31 = FUN_0219c130(*(long *)(lVar33 + 0x18),&stack0x000008b0,
                                                          *(undefined8 *)
                                                                                                                      
                                                  OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                                    if ((uVar23 & 1) != 0) goto LAB_0354cb6c;
                                    if ((uVar31 & 1) == 0) goto LAB_0354cc08;
                                    if (bVar12 == 0) goto LAB_0354cc88;
                                    if (uVar22 != 0) {
                                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      FUN_0358c4f0();
                                    }
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_0358c4f0();
                                  }
                                  else {
                                    if (bVar12 == 0) goto LAB_0354cc88;
LAB_0354c910:
                                    if (!bVar17 && uVar20 == 0xad) goto LAB_0354cb88;
LAB_0354cbc0:
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_0358c4f0();
                                  }
                                  bVar12 = 1;
                                }
                                else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_0354c904:
                                  if (bVar12 != 0) {
                                    if (uVar22 == 0) goto LAB_0354c910;
LAB_0354cb88:
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    FUN_0358c4f0();
                                    goto LAB_0354cbc0;
                                  }
LAB_0354cc88:
                                  bVar12 = 0;
                                }
                                else {
                                  if (((uVar20 - 0x2007 < 0x29) &&
                                      ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x10000000401U) !=
                                       0)) || ((uVar20 == 0xa0 || (uVar20 == 0x2060))))
                                  goto LAB_0354c87c;
                                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0)
                                  {
                                    thunk_FUN_01a58e78();
                                  }
                                  FUN_0358c4f0();
                                  bVar12 = 0;
                                  *(undefined4 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0xe78) =
                                       0xffffffff;
                                }
LAB_0354cc90:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                FUN_0358c4f0();
                                *(int *)((long)unaff_x19 + 0x494) =
                                     *(int *)((long)unaff_x19 + 0x494) + 1;
                                uVar31 = (ulong)(uint)fVar57;
                              }
                            }
                            else {
                              *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                              *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                              uVar29 = FUN_03586568();
                              if (((uVar29 & 1) == 0) ||
                                 (uVar88 = in_stack_0000179c, *(int *)((long)unaff_x19 + 0x644) != 0
                                 )) goto LAB_03549378;
                            }
LAB_03549564:
                            uVar88 = uVar88 + 1;
                            lVar33 = unaff_x19[0x8f];
                            uVar22 = uVar20;
                            if (lVar33 == 0) goto LAB_0354fbf4;
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
      (**(code **)(*unaff_x19 + 0x928))();
      *(undefined4 *)(unaff_x19 + 0x7c) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x3ec) = 0;
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      return;
    }
  }
  puVar14 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  FUN_036d3364();
  uVar34 = FUN_0276793c(&stack0x000017bc,0);
  uVar34 = FUN_025b1328(*(undefined8 *)puVar14,uVar34,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x21);
  }
  FUN_036772fc(uVar34,0);
  *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
  return;
LAB_0354d7c0:
  uVar88 = uVar22 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x50), lVar35 == 0)) goto LAB_0354fbf4;
  lVar30 = (long)(int)uVar88;
  lVar53 = lVar27 + lVar30 * 0x178;
  uVar20 = *(uint *)(lVar53 + 100);
  if (*(uint *)(lVar35 + 0x18) <= uVar20)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar47 = *(long *)(lVar53 + 0x38);
  lVar49 = (long)(int)uVar20;
  lVar35 = lVar35 + lVar49 * 0x5c;
  uVar50 = *(uint *)(lVar35 + 0x68);
  uVar44 = (uint)*(ushort *)(lVar53 + 0x20);
  uVar38 = *(uint *)(lVar35 + 0x3c);
  iVar8 = *(int *)(lVar35 + 0x20);
  iVar24 = *(int *)(lVar35 + 0x28);
  iVar25 = *(int *)(lVar35 + 0x2c);
  fVar59 = *(float *)(lVar35 + 0x4c);
  uVar23 = *(uint *)(lVar35 + 0x40);
  fVar86 = *(float *)(lVar35 + 0x54);
  fVar57 = *(float *)(lVar35 + 0x58);
  fVar79 = *(float *)(lVar35 + 0x5c);
  fVar82 = *(float *)(lVar35 + 0x60);
  fVar74 = *(float *)(lVar35 + 0x6c);
  fVar89 = *(float *)(lVar35 + 0x70);
  fVar58 = *(float *)(lVar35 + 0x74);
  fVar70 = *(float *)(lVar35 + 0x78);
  if ((int)uVar50 < 9) {
    switch(uVar50) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar82 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar57;
      }
      break;
    case 2:
LAB_0354d968:
      fStack00000000000000fc = (fVar82 + fVar79 * 0.5) - fVar57 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar79 + fVar82) - fVar57;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar79 + fVar82;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar50 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar44 < 0xad) {
      if ((uVar44 != 3) && (uVar44 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar44 != 0xad) && ((uVar44 != 0x200b && (uVar44 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar27 + 0x18) <= uVar38)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar9 = *(undefined2 *)(lVar27 + (long)(int)uVar38 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b8cc4(uVar9,0);
      if ((uVar26 & 1) == 0) {
        bVar1 = (int)uVar20 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar57 <= fVar79) && (!bVar1 && uVar50 >> 4 == 0)) {
        fStack00000000000000fc = fVar82;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar79 + fVar82;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar22 == 1) || (uVar20 != uVar41)) || (uVar88 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar82;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar79 + fVar82;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar44,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar37 = (char)unaff_x19[0x1e];
        fVar82 = -fVar57;
        if (cVar37 != '\0') {
          fVar82 = fVar57;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar38)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar25 = (int)*(char *)(lVar27 + (long)(int)uVar38 * 0x178 + 0x194) +
                 (-iVar8 - (uStack0000000000000030 & 1)) + iVar25 + -1;
        if (iVar25 < 1) {
          fVar57 = 1.0;
          iVar25 = 1;
        }
        else {
          fVar57 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar44 == 9) {
LAB_0354f76c:
          fVar57 = 1.0 - fVar57;
        }
        else {
          if (uVar44 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_026b97f8(uVar44,0);
            cVar37 = (char)unaff_x19[0x1e];
            if ((uVar26 & 1) != 0) goto LAB_0354f76c;
          }
          iVar25 = (iVar8 - (~uStack0000000000000030 & 1)) + iVar24;
        }
        fVar57 = ((fVar79 + fVar82) * fVar57) / (float)iVar25;
        if (cVar37 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar57;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar57;
        }
      }
    }
  }
  else if (uVar50 == 0x20) {
    fVar57 = fVar74 + fVar58;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar50 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar27 + lVar30 * 0x178;
  fVar82 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar57 = (float)uStack00000000000000b8 + (float)uStack00000000000000f0;
  fVar79 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar35 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar24 = *(int *)(lVar27 + lVar30 * 0x178 + 0x2c);
  if (iVar24 != 0) goto LAB_0354e05c;
  fVar56 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar20,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar53 = lVar27 + lVar30 * 0x178;
    *(undefined4 *)(lVar53 + 0x84) = 0;
    *(undefined4 *)(lVar53 + 0xac) = 0;
    *(undefined4 *)(lVar53 + 0xd4) = 0x3f800000;
    fVar56 = 1.0;
    break;
  case 1:
    fVar70 = *(float *)(lVar27 + lVar30 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar53 = lVar27 + lVar30 * 0x178;
      fVar58 = (fStack00000000000000fc + fVar70) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar70 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_0354db24;
    }
    lVar53 = lVar27 + lVar30 * 0x178;
    fVar58 = fVar58 - fVar74;
    *(float *)(lVar53 + 0x84) = fVar56 + (fVar70 - fVar74) / fVar58;
    *(float *)(lVar53 + 0xac) = fVar56 + (*(float *)(lVar53 + 0x98) - fVar74) / fVar58;
    *(float *)(lVar53 + 0xd4) = fVar56 + (*(float *)(lVar53 + 0xc0) - fVar74) / fVar58;
    fVar56 = fVar56 + (*(float *)(lVar53 + 0xe8) - fVar74) / fVar58;
    break;
  case 2:
    lVar53 = lVar27 + lVar30 * 0x178;
    fVar70 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar58 = (fStack00000000000000fc + *(float *)(lVar53 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_0354db24:
    *(float *)(lVar53 + 0x84) = fVar56 + fVar58 / fVar70;
    *(float *)(lVar53 + 0xac) =
         fVar56 + ((fStack00000000000000fc + *(float *)(lVar53 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar53 + 0xd4) =
         fVar56 + ((fStack00000000000000fc + *(float *)(lVar53 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar56 = fVar56 + ((fStack00000000000000fc + *(float *)(lVar53 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar53 = lVar27 + lVar30 * 0x178;
      *(undefined4 *)(lVar53 + 0x88) = 0;
      *(undefined4 *)(lVar53 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar53 + 0xd8) = 0;
      *(undefined4 *)(lVar53 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar53 = lVar27 + lVar30 * 0x178;
      fVar70 = fVar70 - fVar89;
      fVar58 = fVar56 + (*(float *)(lVar53 + 0x74) - fVar89) / fVar70;
      fVar70 = fVar56 + (*(float *)(lVar53 + 0x9c) - fVar89) / fVar70;
      *(float *)(lVar53 + 0x88) = fVar58;
      *(float *)(lVar53 + 0xb0) = fVar70;
      *(float *)(lVar53 + 0xd8) = fVar58;
      *(float *)(lVar53 + 0x100) = fVar70;
      break;
    case 2:
      lVar53 = lVar27 + lVar30 * 0x178;
      fVar58 = fVar56 + (*(float *)(lVar53 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar53 + 0x88) = fVar58;
      fVar70 = *(float *)(unaff_x19 + 0x9c);
      fVar74 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar53 + 0xd8) = fVar58;
      fVar58 = fVar56 + (*(float *)(lVar53 + 0x9c) - fVar70) / (fVar74 - fVar70);
      *(float *)(lVar53 + 0xb0) = fVar58;
      *(float *)(lVar53 + 0x100) = fVar58;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar50 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar53 = lVar27 + lVar30 * 0x178;
    fVar58 = *(float *)(lVar53 + 0x15c);
    fVar70 = (1.0 - (*(float *)(lVar53 + 0x88) + *(float *)(lVar53 + 0xb0)) * fVar58) * 0.5;
    fVar74 = fVar56 + *(float *)(lVar53 + 0x88) * fVar58 + fVar70;
    fVar56 = fVar56 + fVar70 + *(float *)(lVar53 + 0xb0) * fVar58;
    *(float *)(lVar53 + 0x84) = fVar74;
    *(float *)(lVar53 + 0xac) = fVar74;
    *(float *)(lVar53 + 0xd4) = fVar56;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar27 + lVar30 * 0x178 + 0xfc) = fVar56;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar53 = lVar27 + lVar30 * 0x178;
    *(undefined4 *)(lVar53 + 0x88) = 0;
    *(undefined4 *)(lVar53 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar53 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar53 + 0x100) = 0;
    break;
  case 1:
    if (uVar88 < uVar50) {
      lVar53 = lVar27 + lVar30 * 0x178;
      fVar59 = fVar59 - fVar86;
      fVar56 = (*(float *)(lVar53 + 0x74) - fVar86) / fVar59;
      fVar59 = (*(float *)(lVar53 + 0x9c) - fVar86) / fVar59;
      *(float *)(lVar53 + 0x88) = fVar56;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar53 = lVar27 + lVar30 * 0x178;
    fVar56 = (*(float *)(lVar53 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar53 + 0x88) = fVar56;
    fVar59 = (*(float *)(lVar53 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar53 + 0xb0) = fVar59;
    *(float *)(lVar53 + 0xd8) = fVar59;
    *(float *)(lVar53 + 0x100) = fVar56;
    break;
  case 3:
    if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar53 = lVar27 + lVar30 * 0x178;
    fVar59 = *(float *)(lVar53 + 0x15c);
    fVar58 = (1.0 - (*(float *)(lVar53 + 0x84) + *(float *)(lVar53 + 0xd4)) / fVar59) * 0.5;
    fVar56 = *(float *)(lVar53 + 0x84) / fVar59 + fVar58;
    fVar58 = fVar58 + *(float *)(lVar53 + 0xd4) / fVar59;
    *(float *)(lVar53 + 0x88) = fVar56;
    *(float *)(lVar53 + 0xb0) = fVar58;
    *(float *)(lVar53 + 0x100) = fVar56;
    *(float *)(lVar53 + 0xd8) = fVar58;
  }
  if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar53 = lVar27 + lVar30 * 0x178;
  fVar56 = ABS(fVar85) * *(float *)(lVar53 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar53 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar30 * 0x178 + 400) & 1) != 0)) {
    fVar56 = -fVar56;
  }
  lVar53 = lVar27 + lVar30 * 0x178;
  fVar59 = *(float *)(lVar53 + 0x88);
  fVar70 = *(float *)(lVar53 + 0x84);
  fVar58 = -2.1474836e+09;
  if (fVar70 != INFINITY) {
    fVar58 = (float)(int)fVar70;
  }
  fVar74 = *(float *)(lVar53 + 0xd4);
  fVar89 = *(float *)(lVar53 + 0xd8);
  fVar86 = -2.1474836e+09;
  if (fVar59 != INFINITY) {
    fVar86 = (float)(int)fVar59;
  }
  uVar69 = FUN_03591d3c(fVar70 - fVar58,fVar59 - fVar86);
  *(undefined4 *)(lVar53 + 0x84) = uVar69;
  if (*(uint *)(lVar27 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar89 = fVar89 - fVar86;
  *(float *)(lVar53 + 0x88) = fVar56;
  uVar69 = FUN_03591d3c(fVar70 - fVar58,fVar89);
  *(undefined4 *)(lVar27 + lVar30 * 0x178 + 0xac) = uVar69;
  if (*(uint *)(lVar27 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar74 = fVar74 - fVar58;
  *(float *)(lVar27 + lVar30 * 0x178 + 0xb0) = fVar56;
  fVar58 = (float)FUN_03591d3c(fVar74,fVar89);
  *(float *)(lVar53 + 0xd4) = fVar58;
  if (*(uint *)(lVar27 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar53 + 0xd8) = fVar56;
  uVar69 = FUN_03591d3c(fVar74,fVar59 - fVar86);
  *(undefined4 *)(lVar27 + lVar30 * 0x178 + 0xfc) = uVar69;
  uVar50 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar27 + lVar30 * 0x178 + 0x100) = fVar56;
LAB_0354e05c:
  if (((int)uVar88 < (int)unaff_x19[0x65]) && (iVar21 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar20 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar35 = lVar27 + lVar30 * 0x178;
      *(ulong *)(lVar35 + 0x70) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20),
                    fVar82 + (float)*(undefined8 *)(lVar35 + 0x70));
      *(float *)(lVar35 + 0x78) = fVar79 + *(float *)(lVar35 + 0x78);
      *(ulong *)(lVar35 + 0x98) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20),
                    fVar82 + (float)*(undefined8 *)(lVar35 + 0x98));
      *(float *)(lVar35 + 0xa0) = fVar79 + *(float *)(lVar35 + 0xa0);
      *(ulong *)(lVar35 + 0xc0) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0xc0) >> 0x20),
                    fVar82 + (float)*(undefined8 *)(lVar35 + 0xc0));
      *(float *)(lVar35 + 200) = fVar79 + *(float *)(lVar35 + 200);
      *(ulong *)(lVar35 + 0xe8) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0xe8) >> 0x20),
                    fVar82 + (float)*(undefined8 *)(lVar35 + 0xe8));
      *(float *)(lVar35 + 0xf0) = fVar79 + *(float *)(lVar35 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar20 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar88 < uVar50) {
        if (*(uint *)(lVar27 + lVar30 * 0x178 + 0x68) == uVar7) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar50 = *(uint *)(lVar27 + 0x18);
  }
  puVar14 = PTR_DAT_03cbded8;
  uVar69 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar53 = lVar27 + lVar30 * 0x178;
  *(undefined8 *)(lVar53 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar53 + 0x78) = uVar69;
  if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar69 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar14 + 0xb8) + 1);
  lVar53 = lVar27 + lVar30 * 0x178;
  *(undefined8 *)(lVar53 + 0x98) = **(undefined8 **)(*(long *)puVar14 + 0xb8);
  *(undefined4 *)(lVar53 + 0xa0) = uVar69;
  uVar69 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar14 + 0xb8) + 1);
  *(undefined8 *)(lVar53 + 0xc0) = **(undefined8 **)(*(long *)puVar14 + 0xb8);
  *(undefined4 *)(lVar53 + 200) = uVar69;
  uVar69 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar14 + 0xb8) + 1);
  *(undefined8 *)(lVar53 + 0xe8) = **(undefined8 **)(*(long *)puVar14 + 0xb8);
  *(undefined4 *)(lVar53 + 0xf0) = uVar69;
  *(undefined1 *)(lVar35 + 0x194) = 0;
LAB_0354e184:
  if (iVar24 == 0) {
    pcVar43 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar43)();
  }
  else if (iVar24 == 1) {
    pcVar43 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar35 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar35 + lVar30 * 0x178;
  uVar34 = *(undefined8 *)(lVar35 + 0x11c);
  *(undefined8 *)(lVar35 + 0x11c) =
       CONCAT44(fVar57 + (float)((ulong)uVar34 >> 0x20),fVar82 + (float)uVar34);
  *(float *)(lVar35 + 0x124) = fVar79 + *(float *)(lVar35 + 0x124);
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar35 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar35 + lVar30 * 0x178;
  *(ulong *)(lVar35 + 0x110) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0x110) >> 0x20),
                fVar82 + (float)*(undefined8 *)(lVar35 + 0x110));
  *(float *)(lVar35 + 0x118) = fVar79 + *(float *)(lVar35 + 0x118);
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar35 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar35 + lVar30 * 0x178;
  *(ulong *)(lVar35 + 0x128) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0x128) >> 0x20),
                fVar82 + (float)*(undefined8 *)(lVar35 + 0x128));
  *(float *)(lVar35 + 0x130) = fVar79 + *(float *)(lVar35 + 0x130);
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar35 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar35 = lVar35 + lVar30 * 0x178;
  *(float *)(lVar35 + 0x134) = fVar82 + *(float *)(lVar35 + 0x134);
  *(ulong *)(lVar35 + 0x138) =
       CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar35 + 0x138) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar35 + 0x138));
  lVar35 = *plVar6;
  if ((lVar35 == 0) || (lVar53 = *(long *)(lVar35 + 0x38), lVar53 == 0)) goto LAB_0354fbf4;
  uVar50 = *(uint *)(lVar53 + 0x18);
  if (uVar50 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar46 = lVar53 + lVar30 * 0x178;
  *(float *)(lVar46 + 0x150) = fVar57 + *(float *)(lVar46 + 0x150);
  *(ulong *)(lVar46 + 0x140) =
       CONCAT44(fVar82 + (float)((ulong)*(undefined8 *)(lVar46 + 0x140) >> 0x20),
                fVar82 + (float)*(undefined8 *)(lVar46 + 0x140));
  *(ulong *)(lVar46 + 0x148) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 0x148) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar46 + 0x148));
  if (uVar20 == uVar41) {
    uVar41 = *puVar4 - 1;
    if (uVar88 == uVar41) goto LAB_0354e3ec;
  }
  else {
    lVar35 = *(long *)(lVar35 + 0x50);
    if (lVar35 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar35 + 0x18) <= uVar41)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar46 = (long)(int)uVar41;
    lVar48 = lVar35 + lVar46 * 0x5c;
    fVar58 = fVar57 + *(float *)(lVar48 + 0x54);
    *(ulong *)(lVar48 + 0x4c) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar48 + 0x4c) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar48 + 0x4c));
    *(float *)(lVar48 + 0x54) = fVar58;
    *(float *)(lVar48 + 0x58) = fVar82 + *(float *)(lVar48 + 0x58);
    if (uVar50 <= *(uint *)(lVar48 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar69 = *(undefined4 *)(lVar53 + (long)(int)*(uint *)(lVar48 + 0x34) * 0x178 + 0x11c);
    lVar35 = lVar35 + lVar46 * 0x5c;
    *(float *)(lVar35 + 0x70) = fVar58;
    *(undefined4 *)(lVar35 + 0x6c) = uVar69;
    lVar35 = *plVar6;
    if ((lVar35 == 0) || (lVar53 = *(long *)(lVar35 + 0x50), lVar53 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar53 + 0x18) <= uVar41)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar35 = *(long *)(lVar35 + 0x38);
    if (lVar35 == 0) goto LAB_0354fbf4;
    uVar41 = *(uint *)(lVar53 + lVar46 * 0x5c + 0x40);
    if (*(uint *)(lVar35 + 0x18) <= uVar41)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar53 = lVar53 + lVar46 * 0x5c;
    *(undefined4 *)(lVar53 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar41 * 0x178 + 0x128);
    *(undefined4 *)(lVar53 + 0x78) = *(undefined4 *)(lVar53 + 0x4c);
    uVar41 = *puVar4 - 1;
LAB_0354e3ec:
    if (uVar88 == uVar41) {
      lVar35 = *plVar6;
      if ((lVar35 == 0) || (lVar53 = *(long *)(lVar35 + 0x50), lVar53 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar53 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar46 = lVar53 + lVar49 * 0x5c;
      fVar58 = fVar57 + *(float *)(lVar46 + 0x54);
      *(ulong *)(lVar46 + 0x4c) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar46 + 0x4c));
      *(float *)(lVar46 + 0x54) = fVar58;
      *(float *)(lVar46 + 0x58) = fVar82 + *(float *)(lVar46 + 0x58);
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar46 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar69 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
      lVar53 = lVar53 + lVar49 * 0x5c;
      *(float *)(lVar53 + 0x70) = fVar58;
      *(undefined4 *)(lVar53 + 0x6c) = uVar69;
      lVar35 = *plVar6;
      if ((lVar35 == 0) || (lVar53 = *(long *)(lVar35 + 0x50), lVar53 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar53 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_0354fbf4;
      uVar41 = *(uint *)(lVar53 + lVar49 * 0x5c + 0x40);
      if (*(uint *)(lVar35 + 0x18) <= uVar41)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar53 = lVar53 + lVar49 * 0x5c;
      *(undefined4 *)(lVar53 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar41 * 0x178 + 0x128);
      *(undefined4 *)(lVar53 + 0x78) = *(undefined4 *)(lVar53 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar26 = FUN_026b82c4(uVar44,0);
  if (((((uVar26 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
    if (bVar13) {
      if (((uVar22 != 1) && ((int)uVar88 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar88 < (int)*puVar4 && ((uVar44 == 0x2019 || (uVar44 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar22 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar9 = *(undefined2 *)(lVar27 + lVar33 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b82c4(uVar9,0);
        if ((uVar26 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar22)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar9 = *(undefined2 *)(lVar27 + lVar33 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b82c4(uVar9,0);
          if ((uVar26 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar22 != 1) {
LAB_0354f144:
        bVar13 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b81f8(uVar44,0);
      if ((uVar26 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b63d8(uVar44,0);
        if (((uVar44 != 0x200b) && ((uVar26 & 1) == 0)) && (*puVar4 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar88 == *puVar4 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b82c4(uVar44,0);
      iVar24 = (int)fStack0000000000000124;
      if ((uVar26 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar24 = uVar22 - 2;
    }
    lVar35 = *plVar6;
    if (lVar35 == 0) goto LAB_0354fbf4;
    lVar53 = *(long *)(lVar35 + 0x40);
    if (lVar53 == 0) goto LAB_0354fbf4;
    uVar41 = *(uint *)(lVar35 + 0x24);
    iVar25 = *(int *)(lVar53 + 0x18);
    if (iVar25 < (int)(uVar41 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar35 + 0x40),iVar25 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar35 = *plVar6;
      if (lVar35 == 0) goto LAB_0354fbf4;
    }
    lVar35 = *(long *)(lVar35 + 0x40);
    if (lVar35 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar35 + 0x18) <= uVar41)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar35 = lVar35 + (long)(int)uVar41 * 0x18;
    *(long **)(lVar35 + 0x20) = unaff_x19;
    *(float *)(lVar35 + 0x28) = fStack000000000000016c;
    *(int *)(lVar35 + 0x2c) = iVar24;
    *(int *)(lVar35 + 0x30) = (iVar24 - (int)fStack000000000000016c) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar35 = unaff_x19[0x6d];
    if (lVar35 == 0) goto LAB_0354fbf4;
    lVar53 = *(long *)(lVar35 + 0x50);
    *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
    if (lVar53 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar53 + 0x18) <= uVar20)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar53 = lVar53 + lVar49 * 0x5c;
    bVar13 = false;
    iVar21 = iVar21 + 1;
    *(int *)(lVar53 + 0x30) = *(int *)(lVar53 + 0x30) + 1;
  }
  else {
    if (!bVar13) {
      fStack000000000000016c = (float)uVar88;
    }
    if (uVar88 == *puVar4 - 1) {
      lVar35 = *plVar6;
      if (lVar35 == 0) goto LAB_0354fbf4;
      lVar53 = *(long *)(lVar35 + 0x40);
      if (lVar53 == 0) goto LAB_0354fbf4;
      uVar41 = *(uint *)(lVar35 + 0x24);
      iVar24 = *(int *)(lVar53 + 0x18);
      if (iVar24 < (int)(uVar41 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar35 + 0x40),iVar24 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar35 = *plVar6;
        if (lVar35 == 0) goto LAB_0354fbf4;
      }
      lVar35 = *(long *)(lVar35 + 0x40);
      if (lVar35 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= uVar41)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar35 + (long)(int)uVar41 * 0x18;
      *(long **)(lVar35 + 0x20) = unaff_x19;
      *(float *)(lVar35 + 0x28) = fStack000000000000016c;
      *(uint *)(lVar35 + 0x2c) = uVar88;
      *(uint *)(lVar35 + 0x30) = uVar22 - (int)fStack000000000000016c;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar35 = unaff_x19[0x6d];
      if (lVar35 == 0) goto LAB_0354fbf4;
      lVar53 = *(long *)(lVar35 + 0x50);
      *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
      if (lVar53 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar53 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar53 = lVar53 + lVar49 * 0x5c;
      iVar21 = iVar21 + 1;
      *(int *)(lVar53 + 0x30) = *(int *)(lVar53 + 0x30) + 1;
    }
LAB_0354e610:
    bVar13 = true;
  }
LAB_0354e618:
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  uVar41 = *(uint *)(lVar35 + 0x18);
  if (uVar41 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar35 + lVar30 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar17) {
LAB_0354e660:
      if (uVar41 <= uVar22 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar53 = *unaff_x19;
      uVar69 = *(undefined4 *)(lVar35 + lVar33 + -0x330);
      uVar73 = *(undefined4 *)(lVar35 + lVar33 + -0x2f8);
LAB_0354ebc0:
      pcVar43 = *(code **)(lVar53 + 0x8d8);
LAB_0354ebc8:
      (*pcVar43)(fVar54,fStack0000000000000068,fStack000000000000006c,uVar69,fStack0000000000000104,
                 0,fStack0000000000000084,uVar73);
      puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar14;
      }
LAB_0354ec1c:
      fVar60 = 0.0;
      bVar17 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar35 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar17 = false;
    }
  }
  else {
    lVar35 = lVar35 + lVar30 * 0x178;
    iVar24 = *(int *)(lVar35 + 0x68);
    *(int *)(lVar35 + 0x16c) = iVar18;
    if ((((int)unaff_x19[0x65] < (int)uVar88) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar24 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar26 = FUN_026b63d8(uVar44,0);
    if ((uVar44 != 0x200b) && ((uVar26 & 1) == 0)) {
      lVar35 = *plVar6;
      if ((lVar35 == 0) || (lVar53 = *(long *)(lVar35 + 0x38), lVar53 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar53 + 0x18) <= uVar88)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar58 = *(float *)(lVar53 + lVar30 * 0x178 + 0x160);
      if (fVar60 <= fVar58) {
        fVar60 = fVar58;
      }
      if (fStack0000000000000100 <= ABS(fVar56)) {
        fStack0000000000000100 = ABS(fVar56);
      }
      if (iVar24 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar35 = *plVar6;
          if (lVar35 == 0) goto LAB_0354fbf4;
          lVar53 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar53 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar53 + 0x15a8);
      }
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= uVar88)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar59 = *(float *)(lVar35 + lVar30 * 0x178 + 0x14c);
      fVar58 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar59 = fVar59 + fVar60 * fVar58;
      iStack000000000000005c = iVar24;
      if (fVar59 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar59;
      }
    }
    if (!bVar17) {
      bVar17 = false;
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar23 < (int)uVar88)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar88 == uVar23) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b97f8(uVar44,0);
        if ((uVar26 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= uVar88)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar35 + lVar30 * 0x178;
      fStack0000000000000084 = *(float *)(lVar35 + 0x160);
      fVar54 = *(float *)(lVar35 + 0x11c);
      bVar17 = fVar60 != 0.0;
      fVar58 = fStack0000000000000084;
      if (bVar17) {
        fVar58 = fVar60;
      }
      fVar60 = fVar58;
      uVar19 = *(undefined4 *)(lVar35 + 0x168);
      fStack000000000000006c = 0.0;
      fVar58 = fVar56;
      if (bVar17) {
        fVar58 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar58;
    }
    if (*puVar4 == 1) {
      if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
        if (uVar88 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar30 * 0x178;
          lVar53 = *unaff_x19;
          uVar69 = *(undefined4 *)(lVar35 + 0x128);
          uVar73 = *(undefined4 *)(lVar35 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar88 == uVar38) || ((int)uVar23 <= (int)uVar88)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b63d8(uVar44,0);
      if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
        lVar53 = lVar30;
        uVar41 = uVar88;
        if (uVar44 == 0x200b || (uVar26 & 1) != 0) {
          lVar53 = (long)(int)uVar23;
          uVar41 = uVar23;
        }
        if (uVar41 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar53 * 0x178;
          uVar69 = *(undefined4 *)(lVar35 + 0x128);
          uVar73 = *(undefined4 *)(lVar35 + 0x160);
          pcVar43 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
        uVar41 = *(uint *)(lVar35 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar88 < (int)(*puVar4 - 1)) {
      if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar26 = FUN_03567ad8(uVar19,*(undefined4 *)(lVar35 + lVar33),0);
      if ((uVar26 & 1) == 0) {
        if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
          if (uVar88 < *(uint *)(lVar35 + 0x18)) {
            lVar35 = lVar35 + lVar30 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar54,fStack0000000000000068,fStack000000000000006c,
                       *(undefined4 *)(lVar35 + 0x128),fStack0000000000000104,0,
                       fStack0000000000000084,*(undefined4 *)(lVar35 + 0x160));
            puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar35 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar35 = *(long *)puVar14;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar17 = true;
  }
LAB_0354ec38:
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar35 + 0x18) <= uVar88)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar47 == 0) goto LAB_0354fbf4;
  uVar41 = *(uint *)(lVar35 + lVar30 * 0x178 + 400);
  fVar58 = (float)FUN_03776a30(lVar47 + 0x50,0);
  if ((uVar41 >> 6 & 1) == 0) {
    if (bVar11) {
      if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= uVar22 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar69 = *(undefined4 *)(lVar35 + lVar33 + -0x330);
      fVar57 = *(float *)(lVar35 + lVar33 + -0x30c);
      pcVar43 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar43)(fVar72,fStack000000000000009c,fStack0000000000000098,uVar69,
                 fVar80 * fVar58 + fVar57,0,fVar80,fVar80);
    }
LAB_0354f250:
    bVar11 = false;
  }
  else {
    lVar35 = *plVar6;
    if ((lVar35 == 0) || (lVar53 = *(long *)(lVar35 + 0x38), lVar53 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar53 + 0x18) <= uVar88)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar53 + lVar30 * 0x178 + 0x174) = iVar18;
    if ((((int)unaff_x19[0x65] < (int)uVar88) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar53 + lVar30 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar23 < (int)uVar88)) ||
       (bVar11 || !bVar1)) {
LAB_0354ed84:
      if (!bVar11) goto LAB_0354f250;
    }
    else {
      if (uVar88 == uVar23) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b97f8(uVar44,0);
        if ((uVar26 & 1) != 0) goto LAB_0354ed84;
        lVar35 = *plVar6;
        if (lVar35 == 0) goto LAB_0354fbf4;
      }
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar35 + 0x18) <= uVar88)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar35 + lVar30 * 0x178;
      fStack000000000000004c = *(float *)(lVar35 + 0x60);
      fVar55 = *(float *)(lVar35 + 0x14c);
      fVar72 = *(float *)(lVar35 + 0x11c);
      fVar80 = *(float *)(lVar35 + 0x160);
      fStack000000000000009c = fVar58 * fVar80 + fVar55;
      fStack0000000000000098 = 0.0;
    }
    uVar41 = *puVar4;
    if (uVar41 == 1) {
      if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
        uVar41 = *(uint *)(lVar35 + 0x18);
LAB_0354ef0c:
        if (uVar88 < uVar41) {
          lVar35 = lVar35 + lVar30 * 0x178;
          lVar53 = *unaff_x19;
          uVar69 = *(undefined4 *)(lVar35 + 0x128);
          fVar57 = *(float *)(lVar35 + 0x14c);
LAB_0354ef24:
          pcVar43 = *(code **)(lVar53 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar88 == uVar38) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b63d8(uVar44,0);
      if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
        uVar41 = *(uint *)(lVar35 + 0x18);
        if (uVar44 == 0x200b || (uVar26 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar53 = lVar30;
        if (uVar88 < uVar41) {
LAB_0354f1f8:
          lVar35 = lVar35 + lVar53 * 0x178;
          fVar57 = *(float *)(lVar35 + 0x14c);
          uVar69 = *(undefined4 *)(lVar35 + 0x128);
          pcVar43 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar88 < (int)uVar41) {
      lVar35 = *plVar6;
      if ((lVar35 != 0) && (lVar53 = *(long *)(lVar35 + 0x38), lVar53 != 0)) {
        if (uVar22 < *(uint *)(lVar53 + 0x18)) {
          if (*(float *)(lVar53 + lVar33 + -0x108) == fStack000000000000004c) {
            fVar59 = *(float *)(lVar53 + lVar33 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_03567bac(fVar57 + fVar59,fVar55,0);
            if ((uVar26 & 1) != 0) {
              uVar41 = *puVar4;
              goto LAB_0354f010;
            }
            lVar35 = *plVar6;
            if (lVar35 == 0) goto LAB_0354fbf4;
          }
          lVar35 = *(long *)(lVar35 + 0x38);
          if (lVar35 != 0) {
            uVar41 = *(uint *)(lVar35 + 0x18);
            if ((int)uVar88 <= (int)uVar23) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar53 = (long)(int)uVar23;
            if (uVar23 < uVar41) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar88 < (int)uVar41) {
      iVar24 = FUN_036d3364(lVar47,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar22)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = *(long *)(lVar27 + lVar33 + -0x130);
      if (lVar35 == 0) goto LAB_0354fbf4;
      iVar25 = FUN_036d3364(lVar35,0);
      if (iVar24 != iVar25) {
        if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
          uVar41 = *(uint *)(lVar35 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
        if (uVar22 - 2 < *(uint *)(lVar35 + 0x18)) {
          lVar53 = *unaff_x19;
          uVar69 = *(undefined4 *)(lVar35 + lVar33 + -0x330);
          fVar57 = *(float *)(lVar35 + lVar33 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar11 = true;
  }
  if ((*plVar6 == 0) || (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 == 0)) goto LAB_0354fbf4;
  uVar41 = (uint)*(undefined8 *)(lVar35 + 0x18);
  if (uVar41 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar35 + lVar30 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar16) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,fStack00000000000000c0);
    }
LAB_0354f604:
    bVar16 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar88) || ((int)unaff_x19[0x66] < (int)uVar20)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar35 + lVar30 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar16) {
LAB_0354f400:
      if (uVar41 <= uVar88) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar35 = lVar35 + lVar30 * 0x178;
      fVar58 = *(float *)(lVar35 + 0x128);
      fVar86 = *(float *)(lVar35 + 0x188);
      uVar28 = *(undefined8 *)(lVar35 + 0x17c);
      fVar79 = *(float *)(lVar35 + 0x184);
      uVar34 = *(undefined8 *)(lVar35 + 0x184);
      fVar74 = *(float *)(lVar35 + 0x18c);
      fVar57 = *(float *)(lVar35 + 0x11c);
      fVar59 = *(float *)(lVar35 + 0x148);
      fVar70 = *(float *)(lVar35 + 0x150);
      in_stack_00000188 = uVar28;
      fStack0000000000000190 = fVar79;
      fStack0000000000000194 = fVar86;
      in_stack_00000198 = fVar74;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar26 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar35 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar26 & 1) == 0) {
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar35);
        }
        fVar58 = fVar58 + (float)in_stack_000017c8;
        fVar57 = fVar57 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar59 = fVar59 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar57 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar57;
        }
        if (fVar70 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar70 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar58) {
          fStack00000000000000d0 = fVar58;
        }
        if (fStack00000000000000d4 <= fVar59) {
          fStack00000000000000d4 = fVar59;
        }
      }
      else {
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar35);
        }
        fVar57 = (fVar57 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar70 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar70;
        }
        if (fStack00000000000000d4 <= fVar59) {
          fStack00000000000000d4 = fVar59;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,fVar57,
                   fStack00000000000000d4,fStack00000000000000c0);
        fStack00000000000000e4 = fVar70 - fVar74;
        fStack00000000000000d0 = fVar58 + fVar79;
        fStack00000000000000c0 = 0.0;
        fStack00000000000000d4 = fVar59 + fVar86;
        fStack00000000000000e0 = fVar57;
        in_stack_000017c0 = uVar28;
        in_stack_000017c8 = uVar34;
        in_stack_000017d0 = fVar74;
      }
      if (((*puVar4 == 1) || (uVar88 == uVar38)) || (((int)uVar23 <= (int)uVar88 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,fStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar16 = true;
    }
    else {
      if ((((uVar44 != 0xd) && ((uVar44 & 0xfffe) != 10)) && ((int)uVar88 <= (int)uVar23)) &&
         (bVar1)) {
        if (uVar88 == uVar23) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b97f8(uVar44,0);
          if ((uVar26 & 1) != 0) goto LAB_0354f374;
        }
        puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar53 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar53 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar53 = *(long *)puVar14;
        }
        if ((*plVar6 != 0) && (lVar35 = *(long *)(*plVar6 + 0x38), lVar35 != 0)) {
          uVar41 = (uint)*(undefined8 *)(lVar35 + 0x18);
          if (uVar88 < uVar41) {
            lVar53 = *(long *)(lVar53 + 0xb8);
            lVar47 = lVar35 + lVar30 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar47 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar47 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar53 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar53 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar47 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar53 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar53 + 0x15a4);
            fStack00000000000000c0 = 0.0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar16 = false;
    }
  }
  uVar88 = *puVar4;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar33 = lVar33 + 0x178;
  bVar1 = (int)uVar88 <= (int)uVar22;
  uVar41 = uVar20;
  uVar22 = uVar22 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar27 = *plVar6;
  if (lVar27 != 0) {
    iVar18 = uVar20 + 1;
    plVar52 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
    *(uint *)(lVar27 + 0x18) = uVar88;
    lVar33 = unaff_x19[0xd4];
    *(int *)(lVar27 + 0x2c) = iVar18;
    if ((int)uVar88 < 1 || iVar21 == 0) {
      iVar21 = 1;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar33;
    *(int *)(lVar27 + 0x24) = iVar21;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar26 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar26 & 1) == 0)) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar27 = unaff_x19[0xdb];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*plVar6,*(undefined8 *)(lVar27 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*plVar6 == 0) || (lVar27 = *(long *)(*plVar6 + 0x60), lVar27 == 0)) goto LAB_0354fbf4;
      if (*(int *)(*plVar52 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar27 + 0x18) == 0)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      FUN_03596b20(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6d] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        lVar27 = *plVar6;
                        if (lVar27 != 0) {
                          lVar35 = 0;
                          lVar33 = 0;
                          do {
                            uVar26 = lVar33 + 1;
                            if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar26) goto LAB_0354d0cc;
                            lVar27 = *(long *)(lVar27 + 0x60);
                            if (lVar27 == 0) break;
                            if (*(int *)(*plVar52 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            if (*(uint *)(lVar27 + 0x18) <= uVar26)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            FUN_03596a20(lVar27 + lVar35 + 0x70,0);
                            lVar27 = unaff_x19[0xe1];
                            if (lVar27 == 0) break;
                            if (*(uint *)(lVar27 + 0x18) <= uVar26)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar34 = *(undefined8 *)(lVar27 + lVar33 * 8 + 0x28);
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar31 = FUN_036d35a8(uVar34,0,0);
                            if ((uVar31 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                if ((*plVar6 == 0) ||
                                   (lVar27 = *(long *)(*plVar6 + 0x60), lVar27 == 0)) break;
                                if (*(int *)(*plVar52 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar27 + 0x18) <= uVar26)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                FUN_03596b20(lVar27 + lVar35 + 0x70,1,0);
                              }
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*plVar6 == 0) ||
                                 (lVar53 = *(long *)(*plVar6 + 0x60), lVar53 == 0)) break;
                              if (*(uint *)(lVar53 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a460c(lVar27,*(undefined8 *)(lVar53 + lVar35 + 0x80),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*plVar6 == 0) ||
                                 (lVar53 = *(long *)(*plVar6 + 0x60), lVar53 == 0)) break;
                              if (*(uint *)(lVar53 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a4810(lVar27,*(undefined8 *)(lVar53 + lVar35 + 0x98),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*plVar6 == 0) ||
                                 (lVar53 = *(long *)(*plVar6 + 0x60), lVar53 == 0)) break;
                              if (*(uint *)(lVar53 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a48bc(lVar27,*(undefined8 *)(lVar53 + lVar35 + 0xa0),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_0359d5ac(lVar27,0);
                              if ((*plVar6 == 0) ||
                                 (lVar53 = *(long *)(*plVar6 + 0x60), lVar53 == 0)) break;
                              if (*(uint *)(lVar53 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (lVar27 == 0) break;
                              FUN_036a4e24(lVar27,*(undefined8 *)(lVar53 + lVar35 + 0xa8),0);
                              lVar27 = unaff_x19[0xe1];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar26)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar27 = *(long *)(lVar27 + lVar33 * 8 + 0x28);
                              if ((lVar27 == 0) || (lVar27 = FUN_0359d5ac(lVar27,0), lVar27 == 0))
                              break;
                              FUN_036aa280(lVar27,0);
                            }
                            lVar27 = *plVar6;
                            lVar33 = lVar33 + 1;
                            lVar35 = lVar35 + 0x50;
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
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


