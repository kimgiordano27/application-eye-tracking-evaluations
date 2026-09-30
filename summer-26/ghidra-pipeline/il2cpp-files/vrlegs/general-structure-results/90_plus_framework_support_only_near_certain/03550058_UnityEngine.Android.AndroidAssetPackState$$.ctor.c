/*
FUNCTION_NAME: UnityEngine.Android.AndroidAssetPackState$$.ctor
ENTRY_POINT: 03550058
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


void UnityEngine_Android_AndroidAssetPackState___ctor(undefined8 param_1,long param_2)

{
  uint *puVar1;
  ulong *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
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
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  int *piVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  undefined1 uVar36;
  char cVar37;
  uint uVar38;
  long lVar39;
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
  long *unaff_x21;
  long *plVar51;
  long *unaff_x22;
  long *plVar52;
  long *plVar53;
  long lVar54;
  uint uVar55;
  undefined8 *unaff_x29;
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
  float fVar69;
  ulong uVar70;
  float fVar71;
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
  undefined4 uVar86;
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
  int iStack0000000000000128;
  float fStack000000000000012c;
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
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint uVar89;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float fVar90;
  
  unaff_x19[0x20] = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar53 = unaff_x19 + 0x23;
  unaff_x19[0x23] = unaff_x19[0x22];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(undefined4 *)(unaff_x19 + 0x24) = 0;
  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  uVar18 = 0;
  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo,0);
    uVar18 = (undefined4)unaff_x19[0x24];
  }
  lVar33 = unaff_x19[0x20];
  lVar35 = unaff_x19[0x23];
  lVar39 = unaff_x19[0xc3];
  unaff_x29[3] = 0;
  unaff_x29[2] = 0;
  unaff_x29[5] = 0;
  unaff_x29[4] = 0;
  unaff_x29[1] = 0;
  *unaff_x29 = 0;
  FUN_03557f30((int)lVar39,&stack0x000008a0,uVar18,lVar33,0,lVar35,0);
  puVar14 = OVRPlugin_OVRP_1_18_0_TypeInfo;
  lVar39 = *(long *)(*(long *)puVar12 + 0xb8);
  unaff_x29[0x77] = unaff_x29[1];
  unaff_x29[0x76] = *unaff_x29;
  unaff_x29[0x79] = unaff_x29[3];
  unaff_x29[0x78] = unaff_x29[2];
  uVar34 = *(undefined8 *)puVar14;
  unaff_x29[0x7b] = unaff_x29[5];
  unaff_x29[0x7a] = unaff_x29[4];
  FUN_0209aa94(lVar39 + 0x10,&stack0x00000c50,uVar34);
  plVar51 = unaff_x19 + 0xd3;
  unaff_x19[0xd3] = unaff_x19[0x36];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar51);
  lVar39 = unaff_x19[0x77];
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar26 = FUN_036cee6c(lVar39,0,0);
  if ((uVar26 & 1) != 0) {
    if (unaff_x19[0x77] == 0) goto LAB_035574b8;
    FUN_03599b08(unaff_x19[0x77],0);
  }
  if (unaff_x19[0x1f] != 0) {
    lVar39 = unaff_x19[0x92];
    fVar85 = *(float *)((long)unaff_x19 + 0x1e4);
    iVar17 = FUN_03776950(unaff_x19[0x1f] + 0x50,0);
    if (unaff_x19[0x1f] != 0) {
      fVar56 = (float)FUN_03776960(unaff_x19[0x1f] + 0x50,0);
      fVar81 = *(float *)((long)unaff_x19 + 0x1e4);
      *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
      *(float *)(unaff_x19 + 0x3d) = fVar81;
      puVar14 = OVRPlugin_OVRP_1_29_0_TypeInfo;
      fVar72 = DAT_00d389a8;
      fVar62 = DAT_00d389a8;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar62 = 1.0;
      }
      FUN_0209aa94(unaff_x19 + 0x3e,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
      *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
      if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
        uVar18 = (undefined4)unaff_x19[0x42];
      }
      else {
        uVar18 = 700;
      }
      *(undefined4 *)((long)unaff_x19 + 0x214) = uVar18;
      FUN_0209aa94(unaff_x19 + 0x43,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
      FUN_035a0500(unaff_x19 + 0x4c,0);
      *(undefined4 *)(unaff_x19 + 0x4f) = *(undefined4 *)((long)unaff_x19 + 0x26c);
      FUN_0209aa94(unaff_x19 + 0x50,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
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
      uVar18 = FUN_01b6d7fc((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                            (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0);
      *(undefined4 *)((long)unaff_x19 + 0x144) = uVar18;
      *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar18;
      *(undefined4 *)(unaff_x19 + 0x2b) = uVar18;
      *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar18;
      puVar13 = OVRPlugin_OVRP_1_16_0_TypeInfo;
      FUN_0209aa94(unaff_x19 + 0x9e,&stack0x000008a0,*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
      FUN_0209aa94(unaff_x19 + 0xa2,&stack0x000008a0,*(undefined8 *)puVar13);
      FUN_0209aa94(unaff_x19 + 0xa6,&stack0x000008a0,*(undefined8 *)puVar13);
      puVar13 = OVRPlugin_Mesh_TypeInfo;
      uVar18 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      lVar33 = *(long *)puVar13;
      if (*(int *)(lVar33 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar33 = *(long *)puVar13;
      }
      puVar41 = *(undefined4 **)(lVar33 + 0xb8);
      uVar26 = 0;
      FUN_035683a4(*puVar41,puVar41[1],puVar41[2],puVar41[3],&stack0x000008a0,uVar18,0);
      puVar13 = OVRPlugin_OVRP_1_12_0_TypeInfo;
      unaff_x29[0x73] = unaff_x29[1];
      unaff_x29[0x72] = *unaff_x29;
      FUN_0209aa94(unaff_x19 + 0xaa,&stack0x00000c30,*(undefined8 *)puVar13);
      unaff_x19[0xb0] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xb0,0);
      FUN_0209aa94(unaff_x19 + 0xb1,0,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
      if (unaff_x19[0x20] != 0) {
        *(uint *)(unaff_x19 + 0xbe) = (uint)*(byte *)(unaff_x19[0x20] + 0x1b8);
        FUN_0209aa94(unaff_x19 + 0xba,&stack0x00000c18,*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo)
        ;
        FUN_0209aa1c(unaff_x19 + 0xbf,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
        *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
        if (unaff_x19[0x20] != 0) {
          fVar57 = (float)FUN_03776970(unaff_x19[0x20] + 0x50,0);
          if (*unaff_x21 != 0) {
            fVar58 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
            if (*unaff_x21 != 0) {
              fVar59 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
              *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
              *(undefined4 *)(unaff_x19 + 200) = 0;
              unaff_x19[0x81] = 0;
              uVar18 = 0;
              FUN_0209aa94(unaff_x19 + 0x82,&stack0x00000c18,*(undefined8 *)puVar14);
              *(undefined1 *)(unaff_x19 + 0x86) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
              *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
              *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
              lVar33 = *(long *)puVar12;
              if (*(int *)(lVar33 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar33 = *(long *)puVar12;
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
                uVar25 = (int)unaff_x19[0x67] - 1;
                uVar89 = *(int *)(*(long *)(lVar35 + 0x58) + 0x18) - 1;
                if ((int)uVar25 <= (int)uVar89) {
                  uVar89 = uVar25;
                }
                uVar4 = 0;
                if (-1 < (int)uVar25) {
                  uVar4 = uVar89;
                }
                FUN_035a02f4(lVar35,0);
                fVar60 = *(float *)(unaff_x19 + 0x68);
                *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
                fVar71 = *(float *)((long)unaff_x19 + 0x344);
                unaff_x19[0x6a] = 0;
                lVar33 = *(long *)puVar12;
                fVar61 = *(float *)((long)unaff_x19 + 0x34c);
                fVar87 = *(float *)(unaff_x19 + 0x6b);
                fVar76 = *(float *)((long)unaff_x19 + 0x35c);
                if (*(int *)(lVar33 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar33 = *(long *)puVar12;
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
                  FUN_0209aa1c(*(long *)(*(long *)puVar12 + 0xb8) + 0x11f0,
                               *(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
                  fVar73 = DAT_00d38d28;
                  fVar75 = DAT_00d38938;
                  uVar89 = 0;
                  lVar33 = unaff_x19[0x8f];
                  if (lVar33 != 0) {
                    puVar1 = (uint *)((long)unaff_x19 + 0x494);
                    puVar2 = (ulong *)(unaff_x19 + 0xc9);
                    uVar25 = (int)lVar39 - 1;
                    lVar39 = (long)unaff_x19 + 0x434;
                    fVar57 = fVar57 - (fVar58 - fVar59);
                    fStack000000000000015c = 0.0;
                    if (fVar87 <= 0.0) {
                      fVar87 = 0.0;
                    }
                    if (fVar76 <= 0.0) {
                      fVar76 = 0.0;
                    }
                    fVar85 = (fVar85 / (float)iVar17) * fVar56 * fVar62;
                    uVar30 = (ulong)(uint)fVar85;
                    plVar3 = unaff_x19 + 0x6d;
                    fVar87 = fVar87 + DAT_00d3879c;
                    uVar70 = (ulong)(uint)fVar87;
                    fVar56 = fVar76 + DAT_00d3879c;
                    fVar62 = fVar81 * DAT_00d38d28 * fVar62;
                    iStack0000000000000034 = 0;
                    bVar10 = false;
                    iStack000000000000016c = 0;
                    bVar9 = true;
                    bVar11 = 1;
                    fStack00000000000000fc = fVar87;
                    uVar20 = 0;
LAB_0355087c:
                    fVar81 = (float)uVar30;
                    if ((int)*(uint *)(lVar33 + 0x18) <= (int)uVar89) {
LAB_0355459c:
                      fVar85 = (float)uVar70;
                      if (((char)unaff_x19[0x47] != '\0') &&
                         (fVar85 = DAT_00d389f8,
                         DAT_00d389f8 <
                         *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                        fVar85 = *(float *)((long)unaff_x19 + 0x1e4);
                        fVar62 = *(float *)((long)unaff_x19 + 0x254);
                        if ((fVar85 < fVar62) &&
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
                          if (fVar62 <= fVar85) {
                            fVar85 = fVar62;
                          }
LAB_03554658:
                          *(float *)((long)unaff_x19 + 0x1e4) = fVar85;
                          return;
                        }
                      }
                      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                      puVar12 = PTR_DAT_03cbdf88;
                      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                        uVar34 = FUN_0276793c((long)unaff_x19 + 0x244,0);
                        uVar27 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
                        uVar34 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar34,
                                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar27,0)
                        ;
                        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                        }
                        FUN_0367a6ec(uVar34,0);
                      }
                      puVar14 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*puVar1 == 0) || ((*puVar1 == 1 && (uVar20 == 3)))) {
                        (**(code **)(*unaff_x19 + 0x918))();
                        goto LAB_03554724;
                      }
                      lVar39 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar39 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar39 = *(long *)puVar14;
                      }
                      plVar53 = (long *)OVRPlugin_Media_TypeInfo;
                      lVar39 = **(long **)(lVar39 + 0xb8);
                      if (lVar39 == 0) goto LAB_035574b8;
                      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                      goto LAB_035575f4;
                      iVar17 = *(int *)(lVar39 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 +
                                       0x54) << 2;
                      if ((*plVar3 == 0) || (lVar39 = *(long *)(*plVar3 + 0x60), lVar39 == 0))
                      goto LAB_035574b8;
                      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      if (*(int *)(lVar39 + 0x18) == 0) goto LAB_035575f4;
                      FUN_035968e8(lVar39 + 0x20,0,0);
                      if (DAT_0411f172 == '\0') {
                        FUN_01ab69ac(PTR_DAT_03cbded8);
                        DAT_0411f172 = '\x01';
                      }
                      iVar22 = (int)unaff_x19[0x4e];
                      fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                      uStack00000000000000e8 =
                           *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                      lVar39 = unaff_x19[0xe3];
                      uStack00000000000000b8 = uStack00000000000000e8;
                      fStack00000000000000c4 = fStack00000000000000fc;
                      if (iVar22 < 0x401) {
                        if (iVar22 == 0x100) {
                          if (lVar39 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar39 + 0x18) < 2) goto LAB_035575f4;
                          uVar34 = *(undefined8 *)(lVar39 + 0x30);
                          if ((int)unaff_x19[0x5c] == 5) {
                            if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x58), lVar33 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar33 + 0x18) <= uVar4) goto LAB_035575f4;
                            fVar85 = *(float *)(lVar33 + (long)(int)uVar4 * 0x14 + 0x28);
                          }
                          else {
                            fVar85 = *(float *)(unaff_x19 + 0x97);
                          }
                          fStack00000000000000c4 = fVar60 + 0.0 + *(float *)(lVar39 + 0x2c);
                          fVar85 = (0.0 - fVar85) - fVar71;
                        }
                        else if (iVar22 == 0x200) {
                          if (lVar39 == 0) goto LAB_035574b8;
                          if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
                          goto LAB_035575f4;
                          fStack00000000000000c4 =
                               (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
                          uVar34 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar39 + 0x24) +
                                                    (float)*(undefined8 *)(lVar39 + 0x30)) * 0.5);
                          if ((int)unaff_x19[0x5c] == 5) {
                            if ((*plVar3 == 0) || (lVar39 = *(long *)(*plVar3 + 0x58), lVar39 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar39 + 0x18) <= uVar4) goto LAB_035575f4;
                            lVar39 = lVar39 + (long)(int)uVar4 * 0x14;
                            fStack00000000000000c4 = fVar60 + 0.0 + fStack00000000000000c4;
                            fVar85 = ((fVar71 + *(float *)(lVar39 + 0x28) +
                                      *(float *)(lVar39 + 0x30)) - fVar61) * -0.5 + 0.0;
                          }
                          else {
                            fStack00000000000000c4 = fVar60 + 0.0 + fStack00000000000000c4;
                            fVar85 = ((fVar71 + *(float *)(unaff_x19 + 0x97) + fVar90) - fVar61) *
                                     -0.5 + 0.0;
                          }
                        }
                        else {
                          if (iVar22 != 0x400) goto LAB_03554c4c;
                          if (lVar39 == 0) goto LAB_035574b8;
                          if (*(int *)(lVar39 + 0x18) == 0) goto LAB_035575f4;
                          uVar34 = *(undefined8 *)(lVar39 + 0x24);
                          if ((int)unaff_x19[0x5c] == 5) {
                            if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x58), lVar33 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar33 + 0x18) <= uVar4) goto LAB_035575f4;
                            fVar90 = *(float *)(lVar33 + (long)(int)uVar4 * 0x14 + 0x30);
                          }
                          fStack00000000000000c4 = fVar60 + 0.0 + *(float *)(lVar39 + 0x20);
                          fVar85 = fVar61 + (0.0 - fVar90);
                        }
LAB_03554c3c:
                        uStack00000000000000b8 =
                             CONCAT44((float)((ulong)uVar34 >> 0x20) + 0.0,(float)uVar34 + fVar85);
                      }
                      else if (iVar22 == 0x800) {
                        if (lVar39 == 0) goto LAB_035574b8;
                        if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
                        goto LAB_035575f4;
                        fVar85 = fVar60 + 0.0 +
                                 (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
                        uStack00000000000000b8 =
                             CONCAT44(((float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20)) * 0.5
                                      + 0.0,((float)*(undefined8 *)(lVar39 + 0x24) +
                                            (float)*(undefined8 *)(lVar39 + 0x30)) * 0.5 + 0.0);
                        fStack00000000000000c4 = fVar85;
                      }
                      else {
                        if (iVar22 == 0x1000) {
                          if (lVar39 != 0) {
                            if ((*(int *)(lVar39 + 0x18) != 1) && (*(int *)(lVar39 + 0x18) != 0)) {
                              uVar34 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar39 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar39 + 0x24) +
                                                (float)*(undefined8 *)(lVar39 + 0x30)) * 0.5);
                              fStack00000000000000c4 =
                                   fVar60 + 0.0 +
                                   (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
                              fVar85 = 0.0 - ((fVar71 + *(float *)(unaff_x19 + 0x9d) +
                                              *(float *)(unaff_x19 + 0x9c)) - fVar61) * 0.5;
                              goto LAB_03554c3c;
                            }
                            goto LAB_035575f4;
                          }
                          goto LAB_035574b8;
                        }
                        if (iVar22 == 0x2000) {
                          if (lVar39 == 0) goto LAB_035574b8;
                          if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
                          goto LAB_035575f4;
                          fVar85 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar71) - fVar61) *
                                         0.5;
                          uStack00000000000000b8 =
                               CONCAT44(((float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20)) *
                                        0.5 + 0.0,
                                        ((float)*(undefined8 *)(lVar39 + 0x24) +
                                        (float)*(undefined8 *)(lVar39 + 0x30)) * 0.5 + fVar85);
                          fStack00000000000000c4 =
                               fVar60 + 0.0 +
                               (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
                        }
                      }
LAB_03554c4c:
                      if (unaff_x19[0xe5] != 0) {
                        uVar34 = FUN_03912334(unaff_x19[0xe5],0);
                        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)puVar12);
                        }
                        uVar26 = FUN_036d35a8(uVar34,0,0);
                        lVar39 = FUN_0357f060();
                        if (lVar39 != 0) {
                          FUN_036df824(lVar39,0);
                          *(float *)(unaff_x19 + 0xe2) = fVar85;
                          if (unaff_x19[0xe5] != 0) {
                            iVar22 = FUN_039117fc(unaff_x19[0xe5],0);
                            if (unaff_x19[0xe5] != 0) {
                              fVar62 = (float)FUN_03911954(unaff_x19[0xe5],0);
                              uVar18 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                              FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                              if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                              }
                              if (DAT_0412df1c == '\0') {
                                FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                                DAT_0412df1c = '\x01';
                              }
                              puVar12 = OVRPlugin_Mesh_TypeInfo;
                              lVar39 = *(long *)OVRPlugin_Mesh_TypeInfo;
                              if (*(int *)(lVar39 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar39 = *(long *)puVar12;
                              }
                              puVar41 = *(undefined4 **)(lVar39 + 0xb8);
                              uVar70 = (ulong)(uint)puVar41[1];
                              uVar28 = (ulong)(uint)puVar41[2];
                              uVar30 = (ulong)(uint)puVar41[3];
                              FUN_035683a4(*puVar41,uVar70,uVar28,uVar30,&stack0x000017b0,0x4000ffff
                                           ,0);
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              lVar39 = *plVar3;
                              if (lVar39 != 0) {
                                uVar89 = *puVar1;
                                if ((int)uVar89 < 1) {
                                  iStack00000000000000d4 = 0;
                                  iVar17 = 0;
                                  goto LAB_03556f00;
                                }
                                lVar39 = *(long *)(lVar39 + 0x38);
                                fVar85 = ABS(fVar85);
                                fVar72 = 1.0;
                                if ((uVar26 & 1) == 0) {
                                  fVar72 = fVar85;
                                }
                                if (lVar39 != 0) {
                                  bVar16 = false;
                                  bVar10 = false;
                                  _iStack0000000000000128 = 0;
                                  bVar9 = false;
                                  iStack00000000000000d4 = 0;
                                  uStack0000000000000028 = 0;
                                  fStack0000000000000158 = 0.0;
                                  iStack000000000000006c = 0;
                                  lVar33 = 0x2e0;
                                  fVar61 = 0.0;
                                  fVar56 = 0.0;
                                  fStack0000000000000104 =
                                       *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo
                                                           + 0xb8) + 0x15a8);
                                  fStack0000000000000100 = 0.0;
                                  fStack000000000000008c = 0.0;
                                  fVar60 = 0.0;
                                  fVar59 = 0.0;
                                  uStack0000000000000038 = 0;
                                  uVar25 = 1;
                                  fStack0000000000000098 = fStack0000000000000074;
                                  fStack000000000000009c = fStack0000000000000070;
                                  fStack00000000000000c0 = fStack0000000000000074;
                                  fStack00000000000000d0 = fStack0000000000000070;
                                  fStack00000000000000dc = fStack0000000000000070;
                                  fVar81 = fStack00000000000000d8;
                                  fVar57 = fStack00000000000000d8;
                                  fVar58 = fStack00000000000000d8;
                                  uVar20 = 0;
                                  goto LAB_03554e78;
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_035574b8;
                    }
                    if (*(uint *)(lVar33 + 0x18) <= uVar89) goto LAB_035575f4;
                    uVar19 = *(uint *)(lVar33 + (long)(int)uVar89 * 0xc + 0x20);
                    if (uVar19 == 0) goto LAB_0355459c;
                    if (5 < iStack000000000000016c) {
                      uVar34 = FUN_0276793c(&stack0x000017dc,0);
                      uVar27 = FUN_0276793c(&stack0x000017a8,0);
                      uVar34 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar34,
                                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar27,0);
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                      }
                      FUN_0367ae18(uVar34,0);
                      in_stack_000017c8 = CONCAT44(3,*puVar1);
                    }
                    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar19 != 0x3c)) {
                      if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                      goto LAB_035574b8;
                      if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                      lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar33 + 0x2c);
                      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar33 + 0x58);
                      unaff_x19[0x20] = *(long *)(lVar33 + 0x38);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_035509d4:
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                      goto LAB_035574b8;
                      uVar20 = *puVar1;
                      if (*(uint *)(lVar33 + 0x18) <= uVar20) goto LAB_035575f4;
                      lVar54 = (long)(int)uVar20;
                      cVar37 = *(char *)(lVar33 + lVar54 * 0x178 + 0x5c);
                      *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                      lVar35 = unaff_x19[0x24];
                      if ((uint)in_stack_000017c8 == uVar20) {
                        uVar19 = (uint)((ulong)in_stack_000017c8 >> 0x20);
                        *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                        if (uVar19 == 0x2026) {
                          *(long *)(lVar33 + lVar54 * 0x178 + 0x30) = unaff_x19[0xca];
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                          *(undefined4 *)(lVar33 + 0x2c) = 0;
                          *(long *)(lVar33 + 0x38) = unaff_x19[0xcb];
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *(long *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x50) = unaff_x19[0xcc];
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          uVar20 = *puVar1;
                          if (*(uint *)(lVar33 + 0x18) <= uVar20) goto LAB_035575f4;
                          bVar16 = true;
                          *(int *)(lVar33 + (long)(int)uVar20 * 0x178 + 0x58) = (int)unaff_x19[0xcd]
                          ;
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                          in_stack_000017c8 = CONCAT44(3,uVar20 + 1);
                        }
                        else if (uVar19 == 3) {
                          if ((*unaff_x21 == 0) ||
                             (lVar29 = FUN_03568ac0(*unaff_x21,0), lVar29 == 0)) goto LAB_035574b8;
                          uVar18 = 3;
                          FUN_0219b634(lVar29,&stack0x00000c18,&stack0x000008a0,
                                       *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                          if (*(uint *)(lVar33 + 0x18) <= uVar20) goto LAB_035575f4;
                          *(ulong *)(lVar33 + lVar54 * 0x178 + 0x30) = uVar26;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          uVar20 = *(uint *)((long)unaff_x19 + 0x494);
                          bVar16 = true;
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                        }
                        else {
                          bVar16 = true;
                        }
                      }
                      else {
                        bVar16 = false;
                      }
                      if (((int)uVar20 < *(int *)((long)unaff_x19 + 0x324)) && (uVar19 != 3)) {
                        if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                        goto LAB_035574b8;
                        if (*(uint *)(lVar33 + 0x18) <= uVar20) goto LAB_035575f4;
                        lVar33 = lVar33 + (long)(int)uVar20 * 0x178;
                        *(undefined1 *)(lVar33 + 0x194) = 0;
                        *(undefined2 *)(lVar33 + 0x20) = 0x200b;
                        *(undefined4 *)(lVar33 + 100) = 0;
                        *puVar1 = uVar20 + 1;
                      }
                      else {
                        iVar17 = *(int *)((long)unaff_x19 + 0x644);
                        if (iVar17 == 0) {
                          uVar20 = *(uint *)((long)unaff_x19 + 0x25c);
                          if ((uVar20 >> 4 & 1) == 0) {
                            if ((uVar20 >> 3 & 1) == 0) {
                              fStack0000000000000158 = 1.0;
                              if ((uVar20 >> 5 & 1) != 0) {
                                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar28 = FUN_026b812c(uVar19,0);
                                if ((uVar28 & 1) != 0) {
                                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar19 = FUN_026b8410(uVar19,0);
                                  uVar19 = uVar19 & 0xffff;
                                  fStack0000000000000158 = fVar75;
                                }
                              }
                            }
                            else {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar28 = FUN_026b8070(uVar19,0);
                              fStack0000000000000158 = 1.0;
                              if ((uVar28 & 1) != 0) {
                                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar19 = FUN_026b8594(uVar19,0);
                                goto LAB_03550fdc;
                              }
                            }
                          }
                          else {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar28 = FUN_026b812c(uVar19,0);
                            fStack0000000000000158 = 1.0;
                            if ((uVar28 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar19 = FUN_026b8410(uVar19,0);
LAB_03550fdc:
                              fStack0000000000000158 = 1.0;
                              uVar19 = uVar19 & 0xffff;
                            }
                          }
                          iVar17 = *(int *)((long)unaff_x19 + 0x644);
                          if (iVar17 != 0) goto LAB_03550c00;
LAB_03550fec:
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *puVar2 = *(ulong *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x30);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar2);
                          if (*puVar2 == 0) goto LAB_03550bd0;
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *unaff_x21 = *(long *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x38);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *plVar53 = *(long *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x50);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          uVar55 = *puVar1;
                          uVar20 = *(uint *)(lVar33 + 0x18);
                          if (uVar20 <= uVar55) goto LAB_035575f4;
                          *(undefined4 *)(unaff_x19 + 0x24) =
                               *(undefined4 *)(lVar33 + (long)(int)uVar55 * 0x178 + 0x58);
                          if (bVar16) {
                            lVar35 = unaff_x19[0x8f];
                            if (lVar35 == 0) goto LAB_035574b8;
                            if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
                            if ((*(int *)(lVar35 + (long)(int)uVar89 * 0xc + 0x20) != 10) ||
                               (uVar55 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
                            if (uVar20 <= uVar55 - 1) goto LAB_035575f4;
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar58 = *(float *)(lVar33 + (long)(int)(uVar55 - 1) * 0x178 + 0x60);
                            iVar17 = FUN_03776950(*unaff_x21 + 0x50,0);
                            lVar33 = *unaff_x21;
                          }
                          else {
LAB_035510fc:
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar58 = *(float *)(unaff_x19 + 0x3d);
                            iVar17 = FUN_03776950(*unaff_x21 + 0x50,0);
                            lVar33 = unaff_x19[0x20];
                          }
                          if (lVar33 == 0) goto LAB_035574b8;
                          fVar82 = (float)FUN_03776960(lVar33 + 0x50,0);
                          fVar67 = fVar72;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar67 = 1.0;
                          }
                          fVar63 = 0.0;
                          fVar65 = 0.0;
                          if (!(bool)(bVar16 & uVar19 == 0x2026)) {
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar65 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar63 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
                          }
                          lVar33 = unaff_x19[0xc9];
                          if ((lVar33 == 0) || (*(long *)(lVar33 + 0x20) == 0)) goto LAB_035574b8;
                          fVar64 = *(float *)((long)unaff_x19 + 0x404);
                          fVar66 = *(float *)(lVar33 + 0x2c);
                          fVar81 = (float)FUN_03776ea8(*(long *)(lVar33 + 0x20),0);
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar83 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar68 = *(float *)((long)unaff_x19 + 0x404);
                          fVar59 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          lVar33 = unaff_x19[0x6d];
                          if ((lVar33 == 0) || (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar35 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar35 = lVar35 + (long)(int)*puVar1 * 0x178;
                          *(undefined4 *)(lVar35 + 0x2c) = 0;
                          fVar67 = ((fStack0000000000000158 * fVar58) / (float)iVar17) * fVar82 *
                                   fVar67;
                          fVar81 = fVar67 * fVar64 * fVar66 * fVar81;
                          *(float *)(lVar35 + 0x160) = fVar81;
                          uVar20 = *(uint *)(unaff_x19 + 0x24);
                          fVar59 = fVar67 * fVar83 * fVar68 * fVar59;
                          if (uVar20 == 0) {
                            fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
                          }
                          else {
                            lVar35 = unaff_x19[0xe1];
                            if (lVar35 == 0) goto LAB_035574b8;
                            if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
                            lVar35 = *(long *)(lVar35 + (long)(int)uVar20 * 8 + 0x20);
                            if (lVar35 == 0) goto LAB_035574b8;
                            fStack000000000000015c = *(float *)(lVar35 + 0x10c);
                          }
LAB_035514b0:
                          unaff_x29 = (undefined8 *)&stack0x000008a0;
                          fVar58 = 0.0;
                          if (uVar19 != 3 && uVar19 != 0xad) {
                            fVar58 = fVar81;
                          }
LAB_035514cc:
                          lVar33 = *(long *)(lVar33 + 0x38);
                          if (lVar33 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                          *(short *)(lVar33 + 0x20) = (short)uVar19;
                          *(int *)(lVar33 + 0x60) = (int)unaff_x19[0x3d];
                          *(undefined4 *)(lVar33 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec)
                          ;
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *(int *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x168) =
                               (int)unaff_x19[0x2b];
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *(undefined4 *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x170) =
                               *(undefined4 *)((long)unaff_x19 + 0x15c);
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          uVar20 = *puVar1;
                          FUN_0209a6e0(unaff_x19 + 0xaa,&stack0x000008a0,
                                       *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                          if (*(uint *)(lVar33 + 0x18) <= uVar20) goto LAB_035575f4;
                          uVar27 = unaff_x29[1];
                          uVar34 = *unaff_x29;
                          lVar33 = lVar33 + (long)(int)uVar20 * 0x178;
                          *(undefined4 *)(lVar33 + 0x18c) = 0;
                          *(undefined8 *)(lVar33 + 0x184) = uVar27;
                          *(undefined8 *)(lVar33 + 0x17c) = uVar34;
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *(undefined4 *)(lVar33 + (long)(int)*puVar1 * 0x178 + 400) =
                               *(undefined4 *)((long)unaff_x19 + 0x25c);
                          if ((unaff_x19[0xc9] == 0) ||
                             (lVar33 = *(long *)(unaff_x19[0xc9] + 0x20), lVar33 == 0))
                          goto LAB_035574b8;
                          FUN_03776e6c(&stack0x00000c18,lVar33,0);
                          puVar12 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                          unaff_x29[0x1df] = in_stack_00000c20;
                          unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,uVar18);
                          if ((int)uVar19 < 0x10000) {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar20 = FUN_026b63d8(uVar19,0);
                            uVar20 = uVar20 & 1;
                          }
                          else {
                            uVar20 = 0;
                          }
                          fVar67 = *(float *)(unaff_x19 + 0x55);
                          *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                          if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                            fStack000000000000012c = 0.0;
                            fVar64 = 0.0;
                            fVar82 = 0.0;
                          }
                          else {
                            if (*puVar2 == 0) goto LAB_035574b8;
                            uVar38 = *puVar1;
                            uVar55 = *(uint *)(*puVar2 + 0x28);
                            if ((int)uVar38 < (int)uVar25) {
                              if ((*plVar3 == 0) ||
                                 (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar33 + 0x18) <= uVar38 + 1) goto LAB_035575f4;
                              lVar33 = *(long *)(lVar33 + (long)(int)(uVar38 + 1) * 0x178 + 0x30);
                              if ((((lVar33 == 0) || (*unaff_x21 == 0)) ||
                                  (lVar35 = *(long *)(*unaff_x21 + 0x128), lVar35 == 0)) ||
                                 (lVar35 = *(long *)(lVar35 + 0x18), lVar35 == 0))
                              goto LAB_035574b8;
                              uVar26 = (ulong)(uVar55 | *(int *)(lVar33 + 0x28) << 0x10);
                              uVar30 = FUN_0219f8b8(lVar35,&stack0x000008a0,&stack0x000016f8,
                                                    *(undefined8 *)
                                                     OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                              uVar86 = 0;
                              if ((uVar30 & 1) == 0) {
                                fStack000000000000012c = 0.0;
                                fVar64 = 0.0;
                                fVar82 = 0.0;
                              }
                              else {
                                if (in_stack_000016f8 == 0) goto LAB_035574b8;
                                fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
                                uVar86 = *(undefined4 *)(in_stack_000016f8 + 0x20);
                                fVar82 = *(float *)(in_stack_000016f8 + 0x14);
                                fVar64 = *(float *)(in_stack_000016f8 + 0x18);
                                if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                                  fVar67 = 0.0;
                                }
                              }
                              uVar38 = *puVar1;
                            }
                            else {
                              uVar86 = 0;
                              fStack000000000000012c = 0.0;
                              fVar64 = 0.0;
                              fVar82 = 0.0;
                            }
                            if (0 < (int)uVar38) {
                              if ((*plVar3 == 0) ||
                                 (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar33 + 0x18) <= uVar38 - 1) goto LAB_035575f4;
                              lVar33 = *(long *)(lVar33 + (ulong)(uVar38 - 1) * 0x178 + 0x30);
                              if (((lVar33 == 0) || (*unaff_x21 == 0)) ||
                                 ((lVar35 = *(long *)(*unaff_x21 + 0x128), lVar35 == 0 ||
                                  (lVar35 = *(long *)(lVar35 + 0x18), lVar35 == 0))))
                              goto LAB_035574b8;
                              uVar26 = (ulong)(*(uint *)(lVar33 + 0x28) | uVar55 << 0x10);
                              uVar30 = FUN_0219f8b8(lVar35,&stack0x000008a0,&stack0x000016f8,
                                                    *(undefined8 *)
                                                     OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                              if ((uVar30 & 1) != 0) {
                                if ((in_stack_000016f8 == 0) ||
                                   (fVar82 = (float)FUN_03571cb4(fVar82,fVar64,
                                                                 fStack000000000000012c,uVar86,
                                                                 *(undefined4 *)
                                                                  (in_stack_000016f8 + 0x28),
                                                                 *(undefined4 *)
                                                                  (in_stack_000016f8 + 0x2c),
                                                                 *(undefined4 *)
                                                                  (in_stack_000016f8 + 0x30),
                                                                 *(undefined4 *)
                                                                  (in_stack_000016f8 + 0x34),0),
                                   in_stack_000016f8 == 0)) goto LAB_035574b8;
                                if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                                  fVar67 = 0.0;
                                }
                              }
                            }
                            *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
                          }
                          if ((char)unaff_x19[0x1e] != '\0') {
                            fVar83 = *(float *)(unaff_x19 + 200);
                            fVar66 = (float)FUN_03776cb4(&stack0x00001790,0);
                            fVar83 = fVar83 - fVar58 * fVar66 * (1.0 - *(float *)((long)unaff_x19 +
                                                                                 0x2d4));
                            *(float *)(unaff_x19 + 200) = fVar83;
                            if ((uVar19 == 0x200b) || (uVar20 != 0)) {
                              *(float *)(unaff_x19 + 200) =
                                   fVar83 - fVar62 * *(float *)((long)unaff_x19 + 0x2b4);
                            }
                          }
                          fVar83 = *(float *)(unaff_x19 + 0x56);
                          fVar66 = 0.0;
                          if (fVar83 != 0.0) {
                            fVar66 = (float)FUN_03776c94(&stack0x00001790,0);
                            fVar68 = (float)FUN_03776ca4(&stack0x00001790,0);
                            fVar66 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                     (fVar83 * 0.5 - fVar58 * (fVar66 * 0.5 + fVar68));
                            *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar66;
                          }
                          if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar37 == '\0')) &&
                             ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                            lVar33 = *plVar53;
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar30 = FUN_036cee6c(lVar33,0,0);
                            fVar68 = 0.0;
                            if ((uVar30 & 1) != 0) {
                              lVar33 = *plVar53;
                              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (lVar33 == 0) goto LAB_035574b8;
                              uVar30 = FUN_03699d3c(lVar33,*(undefined4 *)
                                                            (*(long *)(*(long *)puVar12 + 0xb8) +
                                                            0x54),0);
                              fVar68 = 0.0;
                              if ((uVar30 & 1) != 0) {
                                lVar33 = *plVar53;
                                if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (lVar33 == 0) goto LAB_035574b8;
                                fVar83 = (float)FUN_0369e060(lVar33,*(undefined4 *)
                                                                     (*(long *)(*(long *)puVar12 +
                                                                               0xb8) + 0x54),0);
                                if ((*unaff_x21 == 0) || (*plVar53 == 0)) goto LAB_035574b8;
                                fVar79 = *(float *)(*unaff_x21 + 0x1b0);
                                fVar68 = (float)FUN_0369e060(*plVar53,*(undefined4 *)
                                                                       (*(long *)(*(long *)puVar12 +
                                                                                 0xb8) + 0xcc),0);
                                fVar68 = fVar68 * fVar83 * fVar79 * 0.25;
                                if (fVar83 < fStack000000000000015c + fVar68) {
                                  fStack000000000000015c = fVar83 - fVar68;
                                }
                              }
                            }
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
                          }
                          else {
                            lVar33 = *plVar53;
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar30 = FUN_036cee6c(lVar33,0,0);
                            fStack00000000000000d0 = 0.0;
                            if ((uVar30 & 1) != 0) {
                              lVar33 = *plVar53;
                              if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (lVar33 == 0) goto LAB_035574b8;
                              uVar30 = FUN_03699d3c(lVar33,*(undefined4 *)
                                                            (*(long *)(*(long *)puVar12 + 0xb8) +
                                                            0x54),0);
                              if ((uVar30 & 1) != 0) {
                                lVar33 = *plVar53;
                                if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (lVar33 == 0) goto LAB_035574b8;
                                uVar30 = FUN_03699d3c(lVar33,*(undefined4 *)
                                                              (*(long *)(*(long *)puVar12 + 0xb8) +
                                                              0xcc),0);
                                if ((uVar30 & 1) != 0) {
                                  lVar33 = *plVar53;
                                  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (lVar33 != 0) {
                                    fVar83 = (float)FUN_0369e060(lVar33,*(undefined4 *)
                                                                         (*(long *)(*(long *)puVar12
                                                                                   + 0xb8) + 0x54),0
                                                                );
                                    if ((*unaff_x21 != 0) && (*plVar53 != 0)) {
                                      fVar79 = *(float *)(*unaff_x21 + 0x1a8);
                                      fVar68 = (float)FUN_0369e060(*plVar53,*(undefined4 *)
                                                                             (*(long *)(*(long *)
                                                  puVar12 + 0xb8) + 0xcc),0);
                                      fVar68 = fVar68 * fVar83 * fVar79 * 0.25;
                                      if (fVar83 < fStack000000000000015c + fVar68) {
                                        fStack000000000000015c = fVar83 - fVar68;
                                      }
                                      goto FUN_03551b84;
                                    }
                                  }
                                  goto LAB_035574b8;
                                }
                              }
                            }
                            fVar68 = 0.0;
                          }
FUN_03551b84:
                          fVar83 = *(float *)(unaff_x19 + 200);
                          fVar79 = (float)FUN_03776ca4(&stack0x00001790,0);
                          fVar83 = fVar83 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                            fVar58 * (fVar82 + ((fVar79 - fStack000000000000015c) -
                                                               fVar68));
                          fVar82 = (float)FUN_03776cac(&stack0x00001790,0);
                          fVar88 = *(float *)((long)unaff_x19 + 0x61c) +
                                   ((fVar59 + fVar58 * (fVar64 + fStack000000000000015c + fVar82)) -
                                   *(float *)(unaff_x19 + 0x9b));
                          fVar82 = (float)FUN_03776c9c(&stack0x00001790,0);
                          fVar82 = fVar88 - fVar58 * (fStack000000000000015c +
                                                      fStack000000000000015c + fVar82);
                          fVar64 = (float)FUN_03776c94(&stack0x00001790,0);
                          fVar79 = fVar83 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                            fVar58 * (fVar68 + fVar68 +
                                                     fStack000000000000015c + fStack000000000000015c
                                                     + fVar64);
                          fStack0000000000000104 = fVar83;
                          fVar64 = fVar79;
                          if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar37 == '\0')) &&
                             ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                            fVar78 = (float)(int)unaff_x19[0xbe] * fVar73;
                            fVar64 = (float)FUN_03776cac(&stack0x00001790,0);
                            fVar77 = fVar78 * fVar58 * (fVar68 + fStack000000000000015c + fVar64);
                            fVar64 = (float)FUN_03776cac(&stack0x00001790,0);
                            fVar74 = (float)FUN_03776c9c(&stack0x00001790,0);
                            fVar88 = fVar88 + 0.0;
                            fVar82 = fVar82 + 0.0;
                            fVar78 = fVar78 * fVar58 * (((fVar64 - fVar74) - fStack000000000000015c)
                                                       - fVar68);
                            fVar74 = fVar83 + fVar77;
                            fVar64 = fVar79 + fVar78;
                            fVar69 = (fVar77 - fVar78) * 0.5;
                            fVar83 = (fVar83 + fVar78) - fVar69;
                            fVar79 = (fVar79 + fVar77) - fVar69;
                            fStack0000000000000104 = fVar74 - fVar69;
                            fVar64 = fVar64 - fVar69;
                          }
                          if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                            fStack0000000000000114 = 0.0;
                            fVar69 = 0.0;
                            fVar77 = 0.0;
                            fStack0000000000000100 = 0.0;
                            fVar78 = fVar82;
                            fVar74 = fVar88;
                          }
                          else {
                            thunk_FUN_036bc400(lVar39,0);
                            fVar80 = (fVar79 + fVar83) * 0.5;
                            fVar84 = (fVar82 + fVar88) * 0.5;
                            fVar88 = fVar88 - fVar84;
                            fStack0000000000000100 = 0.0;
                            fVar74 = fVar88;
                            fStack0000000000000104 =
                                 (float)FUN_036bdd2c(fStack0000000000000104 - fVar80,lVar39,0);
                            fStack0000000000000104 = fVar80 + fStack0000000000000104;
                            fStack0000000000000100 = fStack0000000000000100 + 0.0;
                            fVar78 = fVar82 - fVar84;
                            fStack0000000000000114 = 0.0;
                            fVar82 = fVar78;
                            fVar83 = (float)FUN_036bdd2c(fVar83 - fVar80,lVar39,0);
                            fVar83 = fVar80 + fVar83;
                            fStack0000000000000114 = fStack0000000000000114 + 0.0;
                            fVar82 = fVar84 + fVar82;
                            fVar77 = 0.0;
                            fVar79 = (float)FUN_036bdd2c(fVar79 - fVar80,lVar39,0);
                            fVar79 = fVar80 + fVar79;
                            fVar88 = fVar84 + fVar88;
                            fVar77 = fVar77 + 0.0;
                            fVar69 = 0.0;
                            fVar64 = (float)FUN_036bdd2c(fVar64 - fVar80,lVar39,0);
                            fVar64 = fVar80 + fVar64;
                            fVar69 = fVar69 + 0.0;
                            fVar78 = fVar84 + fVar78;
                            fVar74 = fVar84 + fVar74;
                          }
                          if (*plVar3 == 0) goto LAB_035574b8;
                          lVar33 = *(long *)(*plVar3 + 0x38);
                          uVar30 = (ulong)(uint)fVar58;
                          if (lVar33 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                          *(float *)(lVar33 + 0x11c) = fVar83;
                          *(float *)(lVar33 + 0x120) = fVar82;
                          *(float *)(lVar33 + 0x124) = fStack0000000000000114;
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                          *(float *)(lVar33 + 0x114) = fVar74;
                          *(float *)(lVar33 + 0x110) = fStack0000000000000104;
                          *(float *)(lVar33 + 0x118) = fStack0000000000000100;
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                          *(float *)(lVar33 + 0x128) = fVar79;
                          *(float *)(lVar33 + 300) = fVar88;
                          *(float *)(lVar33 + 0x130) = fVar77;
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                          *(float *)(lVar33 + 0x134) = fVar64;
                          *(float *)(lVar33 + 0x138) = fVar78;
                          *(float *)(lVar33 + 0x13c) = fVar69;
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          uVar55 = *puVar1;
                          lVar35 = (long)(int)uVar55;
                          if (*(uint *)(lVar33 + 0x18) <= uVar55) goto LAB_035575f4;
                          lVar54 = lVar33 + lVar35 * 0x178;
                          *(int *)(lVar54 + 0x140) = (int)unaff_x19[200];
                          fVar88 = *(float *)(unaff_x19 + 0x9b);
                          uVar70 = (ulong)(uint)fVar88;
                          fVar64 = *(float *)((long)unaff_x19 + 0x61c);
                          *(float *)(lVar54 + 0x15c) = (fVar79 - fVar83) / (fVar74 - fVar82);
                          *(float *)(lVar54 + 0x14c) = (fVar59 - fVar88) + fVar64;
                          fVar65 = fVar65 * fVar58;
                          if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                            fVar65 = fVar65 / fStack0000000000000158;
                            fVar63 = (fVar63 * fVar58) / fStack0000000000000158;
                          }
                          else {
                            fVar63 = fVar63 * fVar58;
                          }
                          uVar38 = *(uint *)(unaff_x19 + 0x93);
                          if ((uVar20 == 0) || (uVar55 == uVar38)) {
                            fVar63 = fVar64 + fVar63;
                            fVar65 = fVar64 + fVar65;
                            fVar82 = fVar63;
                            fVar59 = fVar65;
                            if (fVar64 != 0.0) {
                              fVar59 = (fVar65 - fVar64) / *(float *)((long)unaff_x19 + 0x404);
                              fVar82 = (fVar63 - fVar64) / *(float *)((long)unaff_x19 + 0x404);
                              if (fVar59 <= fVar65) {
                                fVar59 = fVar65;
                              }
                              if (fVar63 <= fVar82) {
                                fVar82 = fVar63;
                              }
                            }
                            lVar33 = lVar33 + lVar35 * 0x178;
                            fVar64 = fVar59;
                            if (fVar59 <= *(float *)(unaff_x19 + 0x99)) {
                              fVar64 = *(float *)(unaff_x19 + 0x99);
                            }
                            fVar83 = fVar82;
                            if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar82) {
                              fVar83 = *(float *)((long)unaff_x19 + 0x4cc);
                            }
                            *(float *)((long)unaff_x19 + 0x4cc) = fVar83;
                            *(float *)(unaff_x19 + 0x99) = fVar64;
                            *(float *)(lVar33 + 0x154) = fVar59;
                            *(float *)(lVar33 + 0x158) = fVar82;
                            *(float *)(lVar33 + 0x148) = fVar65 - fVar88;
                            *(float *)(unaff_x19 + 0x98) = fVar65 - fVar88;
                            *(float *)(lVar33 + 0x150) = fVar63 - fVar88;
                            *(float *)((long)unaff_x19 + 0x4c4) = fVar63 - fVar88;
                            if (((int)unaff_x19[0x95] == 0) ||
                               (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                              *(float *)(unaff_x19 + 0x97) = fVar64;
                              if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                              fVar59 = *(float *)((long)unaff_x19 + 0x4bc);
                              fVar63 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                              fStack0000000000000158 = (fVar58 * fVar63) / fStack0000000000000158;
                              uVar70 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                              if (fVar59 <= fStack0000000000000158) {
                                fVar59 = fStack0000000000000158;
                              }
                              *(float *)((long)unaff_x19 + 0x4bc) = fVar59;
                            }
                            if ((float)uVar70 == 0.0) {
                              fVar59 = *(float *)((long)unaff_x19 + 0x4b4);
                              if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar65) {
                                fVar59 = fVar65;
                              }
                              *(float *)((long)unaff_x19 + 0x4b4) = fVar59;
                            }
                          }
                          else {
                            fVar59 = *(float *)(unaff_x19 + 0x99);
                            lVar33 = lVar33 + lVar35 * 0x178;
                            *(float *)(lVar33 + 0x154) = fVar59;
                            fVar65 = *(float *)((long)unaff_x19 + 0x4cc);
                            fVar59 = fVar59 - fVar88;
                            *(float *)(lVar33 + 0x148) = fVar59;
                            *(float *)(lVar33 + 0x158) = fVar65;
                            *(float *)(unaff_x19 + 0x98) = fVar59;
                            fVar65 = fVar65 - fVar88;
                            *(float *)(lVar33 + 0x150) = fVar65;
                            *(float *)((long)unaff_x19 + 0x4c4) = fVar65;
                          }
                          lVar33 = *plVar3;
                          if ((lVar33 == 0) || (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                          goto LAB_035574b8;
                          uVar21 = *puVar1;
                          if (*(uint *)(lVar35 + 0x18) <= uVar21) goto LAB_035575f4;
                          lVar35 = lVar35 + (long)(int)uVar21 * 0x178;
                          *(undefined1 *)(lVar35 + 0x194) = 0;
                          uVar45 = *(uint *)(unaff_x19 + 0x4f);
                          if ((uVar19 == 9) ||
                             (((((uVar20 == 0 && (uVar19 != 3)) && (uVar19 != 0x200b)) &&
                               (uVar19 != 0xad)) ||
                              (((bool)(uVar19 == 0xad & (bVar10 ^ 1U)) ||
                               (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                            *(undefined1 *)(lVar35 + 0x194) = 1;
                            pfVar43 = (float *)((long)unaff_x19 + 0x354);
                            pfVar40 = (float *)(unaff_x19 + 0x6a);
                            if (bVar16) {
                              lVar33 = *(long *)(lVar33 + 0x50);
                              if (lVar33 == 0) goto LAB_035574b8;
                              if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                              goto LAB_035575f4;
                              lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              pfVar40 = (float *)(lVar33 + 0x60);
                              pfVar43 = (float *)(lVar33 + 100);
                            }
                            fVar65 = *pfVar40;
                            fVar63 = *pfVar43;
                            fVar59 = *(float *)(unaff_x19 + 0x6c);
                            fVar82 = *(float *)(unaff_x19 + 200);
                            fStack00000000000000fc = (fVar87 - fVar65) - fVar63;
                            bVar15 = true;
                            if ((fVar59 <= fStack00000000000000fc) && (bVar15 = false, !NAN(fVar59))
                               ) {
                              bVar15 = fVar59 == -1.0;
                            }
                            if (!bVar15) {
                              fStack00000000000000fc = fVar59;
                            }
                            fVar59 = 0.0;
                            if ((char)unaff_x19[0x1e] == '\0') {
                              fVar59 = (float)FUN_03776cb4(&stack0x00001790,0);
                              uVar70 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                            }
                            fVar64 = *(float *)((long)unaff_x19 + 0x2d4);
                            fVar83 = *(float *)((long)unaff_x19 + 0x4cc);
                            if (uVar19 != 0xad) {
                              fVar81 = fVar58;
                            }
                            fVar88 = (float)uVar70;
                            fVar79 = 0.0;
                            if ((0.0 < fVar88) &&
                               (fVar79 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                              fVar79 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                            }
                            uVar21 = *puVar1;
                            fVar79 = (*(float *)(unaff_x19 + 0x97) - (fVar83 - fVar88)) + fVar79;
                            if (fVar56 < fVar79) {
                              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                *(uint *)((long)unaff_x19 + 0x2e4) = uVar21;
                              }
                              puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              uVar34 = DAT_00d37868;
                              if ((char)unaff_x19[0x47] != '\0') {
                                fVar74 = *(float *)(unaff_x19 + 0x59);
                                if (((fVar74 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar88))
                                   && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  fVar85 = *(float *)((long)unaff_x19 + 700) +
                                           ((fVar76 - fVar79) / (float)(int)unaff_x19[0x95]) /
                                           fVar85;
                                  if (fVar85 <= fVar74) {
                                    fVar85 = fVar74;
                                  }
                                  goto LAB_03554b48;
                                }
                                fVar88 = *(float *)((long)unaff_x19 + 0x1e4);
                                fVar79 = *(float *)(unaff_x19 + 0x4a);
                                uVar70 = (ulong)(uint)fVar79;
                                if ((fVar79 < fVar88) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  fVar85 = (fVar88 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                  if (fVar85 <= DAT_00d38b84) {
                                    fVar85 = DAT_00d38b84;
                                  }
                                  fVar62 = (fVar88 - fVar85) * 20.0 + 0.5;
                                  *(float *)((long)unaff_x19 + 0x23c) = fVar88;
                                  fVar85 = DAT_00d38e60;
                                  if (fVar62 != INFINITY) {
                                    fVar85 = (float)(int)fVar62 / 20.0;
                                  }
                                  if (fVar85 <= fVar79) {
                                    fVar85 = fVar79;
                                  }
                                  goto LAB_03554658;
                                }
                              }
                              switch((int)unaff_x19[0x5c]) {
                              case 1:
                                lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar33 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar33 = *(long *)puVar12;
                                }
                                lVar35 = *(long *)(lVar33 + 0xb8);
                                lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                                  lVar33 = FUN_01a46ff8(lVar33);
                                }
                                piVar31 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                                                    *(long *)(*(long *)(*(long *)(
                                                  lVar33 + 0xc0) + 8) + 0x80) + 0xa0);
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*piVar31 == 0) {
LAB_03554580:
                                  in_stack_000017c8 = DAT_00d37868;
                                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                                  puVar1[0] = 0;
                                  puVar1[1] = 0;
                                  uVar89 = 0xffffffff;
                                }
                                else {
                                  lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (*(int *)(lVar33 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    lVar33 = *(long *)puVar12;
                                  }
                                  FUN_0209b778(*(long *)(lVar33 + 0xb8) + 0x11f0,&stack0x000008a0,
                                               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                  memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
                                  iVar17 = FUN_0358c15c();
LAB_035529e8:
                                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                                  iVar22 = *(int *)((long)unaff_x19 + 0x494) + -1;
                                  *(int *)((long)unaff_x19 + 0x494) = iVar22;
                                  in_stack_000017c8 = CONCAT44(0x2026,iVar22);
                                  iStack000000000000016c = iStack000000000000016c + 1;
                                  uVar89 = iVar17 - 1;
                                }
                                goto LAB_03550bd0;
                              default:
                                goto UnityEngine_AnimationClip__set_wrapMode;
                              case 3:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
LAB_03552550:
                                uVar89 = FUN_0358c15c();
                                break;
                              case 5:
                                if ((uVar21 == 0) || ((int)uVar89 < 0)) {
                                  uVar89 = 0xffffffff;
                                  *puVar1 = 0;
                                  in_stack_000017c8 = uVar34;
                                  goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
                                }
                                fVar81 = *(float *)(unaff_x19 + 0x99);
                                unaff_x29 = (undefined8 *)&stack0x000008a0;
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar89 = FUN_0358c15c();
                                if (fVar81 - fVar83 <= fVar56) {
                                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                  *(undefined4 *)(unaff_x19 + 0x93) =
                                       *(undefined4 *)((long)unaff_x19 + 0x494);
                                  uVar70 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                  *(float *)(unaff_x19 + 200) =
                                       *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                  lVar33 = NEON_rev64(uVar70,4);
                                  unaff_x19[0x99] = lVar33;
                                  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                  *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                  *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                  goto LAB_03550bd0;
                                }
                                break;
                              case 6:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar89 = FUN_0358c15c();
                                lVar33 = unaff_x19[0x5d];
                                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                }
                                uVar28 = FUN_036cee6c(lVar33,0,0);
                                if ((uVar28 & 1) != 0) {
                                  plVar52 = (long *)unaff_x19[0x5d];
                                  uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                  if (plVar52 == (long *)0x0) goto LAB_035574b8;
                                  (**(code **)(*plVar52 + 0x528))
                                            (plVar52,uVar34,*(undefined8 *)(*plVar52 + 0x530));
                                  lVar33 = unaff_x19[0x5d];
                                  if (lVar33 == 0) goto LAB_035574b8;
                                  *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                  FUN_0357ee30(lVar33,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                  plVar52 = (long *)unaff_x19[0x5d];
                                  if (plVar52 == (long *)0x0) goto LAB_035574b8;
                                  (**(code **)(*plVar52 + 0x7a8))
                                            (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7b0));
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
                              }
UnityEngine_AnimationClip__get_hasMotionCurves:
                              unaff_x29 = (undefined8 *)&stack0x000008a0;
                              in_stack_000017c8 = CONCAT44(3,uVar21);
                              goto LAB_03550bd0;
                            }
UnityEngine_AnimationClip__set_wrapMode:
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            fVar59 = ABS(fVar82) + fVar59 * (1.0 - fVar64) * fVar81;
                            fVar81 = 1.0;
                            if ((uVar45 & 0x18) != 0) {
                              fVar81 = DAT_00d38acc;
                            }
                            fVar82 = fVar81 * fStack00000000000000fc;
                            if (fVar82 < fVar59) {
                              uVar70 = (ulong)(uint)fVar68;
                              if (((char)unaff_x19[0x5b] == '\0') ||
                                 (uVar21 == *(uint *)(unaff_x19 + 0x93))) {
                                if (((char)unaff_x19[0x47] != '\0') &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  fVar82 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                  if (fVar64 < fVar82) {
                                    fVar85 = fVar59 / (1.0 - fVar64);
                                    if (fVar64 <= 0.0) {
                                      fVar85 = fVar59;
                                    }
                                    fVar64 = fVar64 + (fVar59 - fVar81 * (fStack00000000000000fc +
                                                                         DAT_00d38cc4)) / fVar85;
                                    goto LAB_035574e8;
                                  }
                                  fVar64 = *(float *)((long)unaff_x19 + 0x1e4);
                                  fVar82 = *(float *)(unaff_x19 + 0x4a);
                                  if (fVar82 < fVar64) {
                                    fVar85 = (fVar64 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                    if (fVar85 <= DAT_00d38b84) {
                                      fVar85 = DAT_00d38b84;
                                    }
                                    *(float *)((long)unaff_x19 + 0x23c) = fVar64;
                                    fVar64 = fVar64 - fVar85;
LAB_03557524:
                                    fVar62 = fVar64 * 20.0 + 0.5;
                                    fVar85 = DAT_00d38e60;
                                    if (fVar62 != INFINITY) {
                                      fVar85 = (float)(int)fVar62 / 20.0;
                                    }
                                    if (fVar85 <= fVar82) {
                                      fVar85 = fVar82;
                                    }
                                    goto LAB_03554658;
                                  }
                                }
                                iVar17 = (int)unaff_x19[0x5c];
                                if (iVar17 == 1) {
                                  lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (*(int *)(lVar33 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    lVar33 = *(long *)puVar12;
                                  }
                                  lVar35 = *(long *)(lVar33 + 0xb8);
                                  lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                  if ((*(byte *)(lVar33 + 0x135) & 1) == 0) {
                                    lVar33 = FUN_01a46ff8(lVar33);
                                  }
                                  piVar31 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                                                      *(long *)(*(long *)(*(long *)(
                                                  lVar33 + 0xc0) + 8) + 0x80) + 0xa0);
                                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  if (*piVar31 != 0) {
                                    lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar33 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar33 = *(long *)puVar12;
                                    }
                                    FUN_0209b778(*(long *)(lVar33 + 0xb8) + 0x11f0,&stack0x000008a0,
                                                 *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                    memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
                                    goto LAB_035529dc;
                                  }
                                  goto LAB_03554580;
                                }
                                if (iVar17 != 6) {
                                  if (iVar17 == 3) {
                                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    goto LAB_03552550;
                                  }
                                  goto LAB_03552f54;
                                }
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar89 = FUN_0358c15c();
                                lVar33 = unaff_x19[0x5d];
                                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                }
                                uVar28 = FUN_036cee6c(lVar33,0,0);
                                if ((uVar28 & 1) != 0) {
                                  plVar52 = (long *)unaff_x19[0x5d];
                                  uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                  if (plVar52 == (long *)0x0) goto LAB_035574b8;
                                  (**(code **)(*plVar52 + 0x528))
                                            (plVar52,uVar34,*(undefined8 *)(*plVar52 + 0x530));
                                  lVar33 = unaff_x19[0x5d];
                                  if (lVar33 == 0) goto LAB_035574b8;
                                  *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                  FUN_0357ee30(lVar33,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                  plVar52 = (long *)unaff_x19[0x5d];
                                  if (plVar52 == (long *)0x0) goto LAB_035574b8;
                                  (**(code **)(*plVar52 + 0x7a8))
                                            (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7b0));
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
LAB_03552b00:
                                unaff_x29 = (undefined8 *)&stack0x000008a0;
                                in_stack_000017c8 = CONCAT44(3,*puVar1);
                              }
                              else {
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                unaff_x29 = (undefined8 *)&stack0x000008a0;
                                uVar89 = FUN_0358c15c();
                                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                  lVar33 = *plVar3;
                                  if ((lVar33 == 0) ||
                                     (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                                  goto LAB_035574b8;
                                  if (*(uint *)(lVar35 + 0x18) <= *puVar1) goto LAB_035575f4;
                                  fVar82 = *(float *)(unaff_x19 + 0x9b);
                                  fVar64 = 0.0;
                                  if ((0.0 < fVar82) &&
                                     (fVar64 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                    fVar64 = *(float *)(unaff_x19 + 0x99) -
                                             *(float *)(unaff_x19 + 0x9a);
                                  }
                                  fVar64 = fVar62 * *(float *)(unaff_x19 + 0x57) +
                                           *(float *)(lVar35 + (long)(int)*puVar1 * 0x178 + 0x154) +
                                           (fVar64 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                           fVar85 * (fVar57 + *(float *)((long)unaff_x19 + 700));
                                }
                                else {
                                  lVar33 = unaff_x19[0x6d];
                                  *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                                  if (lVar33 == 0) goto LAB_035574b8;
                                  fVar82 = *(float *)(unaff_x19 + 0x9b);
                                  fVar64 = *(float *)(unaff_x19 + 0x58) +
                                           fVar62 * *(float *)(unaff_x19 + 0x57);
                                }
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar33 = *(long *)(lVar33 + 0x38);
                                if (lVar33 == 0) goto LAB_035574b8;
                                uVar46 = *(uint *)((long)unaff_x19 + 0x494);
                                if ((*(uint *)(lVar33 + 0x18) <= uVar46) ||
                                   (uVar8 = uVar46 - 1, *(uint *)(lVar33 + 0x18) <= uVar8))
                                goto LAB_035575f4;
                                uVar70 = (ulong)(uint)(fVar64 + *(float *)(unaff_x19 + 0x97));
                                fVar83 = (fVar64 + *(float *)(unaff_x19 + 0x97) + fVar82) -
                                         *(float *)(lVar33 + (long)(int)uVar46 * 0x178 + 0x158);
                                if ((bVar10 || *(short *)(lVar33 + (long)(int)uVar8 * 0x178 + 0x20)
                                               != 0xad) ||
                                   ((fVar56 <= fVar83 && ((int)unaff_x19[0x5c] != 0)))) {
                                  if (*(short *)(lVar33 + (long)(int)uVar46 * 0x178 + 0x20) == 0xad)
                                  {
                                    bVar10 = true;
                                  }
                                  else {
                                    if ((bVar11 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                                      fVar64 = *(float *)((long)unaff_x19 + 0x2d4);
                                      fVar82 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                      if ((fVar82 <= fVar64) ||
                                         ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))
                                         ) {
                                        fVar64 = *(float *)((long)unaff_x19 + 0x1e4);
                                        uVar70 = (ulong)(uint)fVar64;
                                        fVar82 = *(float *)(unaff_x19 + 0x4a);
                                        if ((fVar64 <= fVar82) ||
                                           ((int)unaff_x19[0x49] <=
                                            *(int *)((long)unaff_x19 + 0x244))) goto LAB_03552d44;
LAB_03557594:
                                        fVar85 = (fVar64 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                        if (fVar85 <= DAT_00d38b84) {
                                          fVar85 = DAT_00d38b84;
                                        }
                                        *(float *)((long)unaff_x19 + 0x23c) = fVar64;
                                        fVar64 = fVar64 - fVar85;
                                        goto LAB_03557524;
                                      }
LAB_03557558:
                                      fVar85 = fVar59;
                                      if (0.0 < fVar64) {
                                        fVar85 = fVar59 / (1.0 - fVar64);
                                      }
                                      fVar64 = fVar64 + (fVar59 - fVar81 * (fStack00000000000000fc +
                                                                           DAT_00d38cc4)) / fVar85;
LAB_035574e8:
                                      if (fVar82 <= fVar64) {
                                        fVar64 = fVar82;
                                      }
                                      *(float *)((long)unaff_x19 + 0x2d4) = fVar64;
                                      return;
                                    }
LAB_03552d44:
                                    lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar33 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar33 = *(long *)puVar12;
                                    }
                                    iVar17 = *(int *)(*(long *)(lVar33 + 0xb8) + 0xe78);
                                    if (((iVar17 != iStack0000000000000034) && (iVar17 != -1)) &&
                                       (bVar11 == 1)) {
                                      if (*(int *)(lVar33 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      uVar89 = FUN_0358c15c();
                                      if ((unaff_x19[0x6d] == 0) ||
                                         (lVar33 = *(long *)(unaff_x19[0x6d] + 0x38), lVar33 == 0))
                                      goto LAB_035574b8;
                                      uVar46 = *puVar1 - 1;
                                      if (*(uint *)(lVar33 + 0x18) <= uVar46) goto LAB_035575f4;
                                      iStack0000000000000034 = iVar17;
                                      if (*(short *)(lVar33 + (long)(int)uVar46 * 0x178 + 0x20) ==
                                          0xad) {
                                        bVar10 = false;
                                        in_stack_000017c8 = CONCAT44(0x2d,uVar46);
                                        *puVar1 = uVar46;
                                        uVar89 = uVar89 - 1;
                                        goto LAB_03550bd0;
                                      }
                                    }
                                    if (fVar83 <= fVar56) {
switchD_03552ef4_caseD_0:
                                      uVar70 = uVar30;
                                      FUN_0358cbd4(fVar85,uVar30,fVar62,
                                                   *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                   fStack00000000000000d0,fVar67,
                                                   fStack00000000000000fc,fVar57);
                                    }
                                    else {
                                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                        *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                             *(undefined4 *)((long)unaff_x19 + 0x494);
                                      }
                                      fVar82 = fVar56;
                                      if ((char)unaff_x19[0x47] != '\0') {
                                        fVar82 = *(float *)(unaff_x19 + 0x59);
                                        if ((fVar82 < *(float *)((long)unaff_x19 + 700)) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) {
                                          fVar85 = *(float *)((long)unaff_x19 + 700) +
                                                   ((fVar76 - fVar83) /
                                                   (float)((int)unaff_x19[0x95] + 1)) / fVar85;
                                          if (fVar85 <= fVar82) {
                                            fVar85 = fVar82;
                                          }
LAB_03554b48:
                                          *(float *)((long)unaff_x19 + 700) = fVar85;
                                          return;
                                        }
                                        fVar64 = *(float *)((long)unaff_x19 + 0x2d4);
                                        fVar82 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                        if ((fVar64 < fVar82) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) goto LAB_03557558;
                                        fVar64 = *(float *)((long)unaff_x19 + 0x1e4);
                                        uVar70 = (ulong)(uint)fVar64;
                                        fVar82 = *(float *)(unaff_x19 + 0x4a);
                                        if ((fVar82 < fVar64) &&
                                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]
                                           )) goto LAB_03557594;
                                      }
                                      switch((int)unaff_x19[0x5c]) {
                                      case 0:
                                      case 2:
                                      case 4:
                                        goto switchD_03552ef4_caseD_0;
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
                                        piVar31 = (int *)thunk_FUN_01a59484(lVar35 + 0x11f0,
                                                                            *(long *)(*(long *)(*(
                                                  long *)(lVar33 + 0xc0) + 8) + 0x80) + 0xa0);
                                        if (*piVar31 == 0) {
                                          bVar10 = false;
                                          goto LAB_03554580;
                                        }
                                        lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        if (*(int *)(lVar33 + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                          lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                        }
                                        FUN_0209b778(*(long *)(lVar33 + 0xb8) + 0x11f0,
                                                     &stack0x000008a0,
                                                     *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                        memcpy(&stack0x00001008,&stack0x000008a0,0x378);
                                        iVar17 = FUN_0358c15c();
                                        bVar10 = false;
                                        goto LAB_035529e8;
                                      case 3:
                                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0)
                                            == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        uVar89 = FUN_0358c15c();
                                        bVar10 = false;
                                        goto UnityEngine_AnimationClip__get_hasMotionCurves;
                                      case 5:
                                        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                        uVar70 = uVar30;
                                        FUN_0358cbd4(fVar85,uVar30,fVar62,
                                                     *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                                     fStack00000000000000d0,fVar67,
                                                     fStack00000000000000fc,fVar57);
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
                                        uVar28 = FUN_036cee6c(lVar33,0,0);
                                        if ((uVar28 & 1) != 0) {
                                          plVar52 = (long *)unaff_x19[0x5d];
                                          uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                          if (plVar52 == (long *)0x0) goto LAB_035574b8;
                                          (**(code **)(*plVar52 + 0x528))
                                                    (plVar52,uVar34,
                                                     *(undefined8 *)(*plVar52 + 0x530));
                                          lVar33 = unaff_x19[0x5d];
                                          if (lVar33 == 0) goto LAB_035574b8;
                                          *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                          FUN_0357ee30(lVar33,*(undefined4 *)
                                                               ((long)unaff_x19 + 0x494),0);
                                          plVar52 = (long *)unaff_x19[0x5d];
                                          if (plVar52 == (long *)0x0) goto LAB_035574b8;
                                          (**(code **)(*plVar52 + 0x7a8))
                                                    (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7b0));
                                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
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
                                  in_stack_000017c8 = CONCAT44(0x2d,uVar8);
                                  *puVar1 = uVar8;
                                  uVar89 = uVar89 - 1;
                                }
                              }
                              goto LAB_03550bd0;
                            }
LAB_03552f54:
                            if (uVar19 != 0xad) {
                              if (uVar19 == 9) {
                                lVar33 = *plVar3;
                                if ((lVar33 != 0) &&
                                   (lVar35 = *(long *)(lVar33 + 0x38), lVar35 != 0)) {
                                  uVar21 = *puVar1;
                                  if (*(uint *)(lVar35 + 0x18) <= uVar21) goto LAB_035575f4;
                                  *(undefined1 *)(lVar35 + (long)(int)uVar21 * 0x178 + 0x194) = 0;
                                  *(uint *)((long)unaff_x19 + 0x4a4) = uVar21;
                                  lVar35 = *(long *)(lVar33 + 0x50);
                                  if (lVar35 != 0) {
                                    if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar35 + 0x18)) {
                                      lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) *
                                                        0x5c;
                                      *(int *)(lVar35 + 0x2c) = *(int *)(lVar35 + 0x2c) + 1;
                                      goto LAB_03552fcc;
                                    }
                                    goto LAB_035575f4;
                                  }
                                }
                              }
                              else {
                                if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                                  (**(code **)(*unaff_x19 + 0x898))(fVar82,fVar68);
                                }
                                else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                  (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
                                }
                                if (bVar9) {
                                  *(uint *)((long)unaff_x19 + 0x49c) = *puVar1;
                                }
                                *(uint *)((long)unaff_x19 + 0x4a4) = *puVar1;
                                *(int *)((long)unaff_x19 + 0x4ac) =
                                     *(int *)((long)unaff_x19 + 0x4ac) + 1;
                                if ((unaff_x19[0x6d] != 0) &&
                                   (lVar33 = *(long *)(unaff_x19[0x6d] + 0x50), lVar33 != 0)) {
                                  if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar33 + 0x18)) {
                                    lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    bVar9 = false;
                                    *(float *)(lVar33 + 0x60) = fVar65;
                                    *(float *)(lVar33 + 100) = fVar63;
                                    goto LAB_035530c4;
                                  }
                                  goto LAB_035575f4;
                                }
                              }
                              goto LAB_035574b8;
                            }
                            if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                            *(undefined1 *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                          }
                          else {
                            if (((uVar19 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                              fVar59 = (float)uVar70;
                              fVar81 = 0.0;
                              if ((0.0 < fVar59) &&
                                 (fVar81 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                fVar81 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a)
                                ;
                              }
                              uVar70 = (ulong)(uint)fVar56;
                              if (fVar56 < (*(float *)(unaff_x19 + 0x97) -
                                           (*(float *)((long)unaff_x19 + 0x4cc) - fVar59)) + fVar81)
                              {
                                if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                  *(uint *)((long)unaff_x19 + 0x2e4) = uVar21;
                                }
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar89 = FUN_0358c15c();
                                lVar33 = unaff_x19[0x5d];
                                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                                }
                                uVar28 = FUN_036cee6c(lVar33,0,0);
                                if ((uVar28 & 1) != 0) {
                                  plVar52 = (long *)unaff_x19[0x5d];
                                  uVar34 = (**(code **)(*unaff_x19 + 0x518))();
                                  if (plVar52 != (long *)0x0) {
                                    (**(code **)(*plVar52 + 0x528))
                                              (plVar52,uVar34,*(undefined8 *)(*plVar52 + 0x530));
                                    lVar33 = unaff_x19[0x5d];
                                    if (lVar33 != 0) {
                                      *(int *)(lVar33 + 0x400) = (int)unaff_x19[0x80];
                                      FUN_0357ee30(lVar33,*(undefined4 *)((long)unaff_x19 + 0x494),0
                                                  );
                                      plVar52 = (long *)unaff_x19[0x5d];
                                      if (plVar52 != (long *)0x0) {
                                        (**(code **)(*plVar52 + 0x7a8))
                                                  (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7b0));
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
                            if ((((uVar19 - 0x2007 < 0x23) &&
                                 ((1L << ((ulong)(uVar19 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                                (uVar19 - 10 < 2)) || (uVar19 == 0xa0)) {
LAB_03552b54:
                              if (((uVar19 != 0xad) && (uVar19 != 0x200b)) && (uVar19 != 0x2060)) {
                                lVar33 = *plVar3;
                                if ((lVar33 == 0) ||
                                   (lVar35 = *(long *)(lVar33 + 0x50), lVar35 == 0))
                                goto LAB_035574b8;
                                if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                                goto LAB_035575f4;
                                lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                *(int *)(lVar35 + 0x2c) = *(int *)(lVar35 + 0x2c) + 1;
                                *(int *)(lVar33 + 0x20) = *(int *)(lVar33 + 0x20) + 1;
                              }
                            }
                            else {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar30 = FUN_026b97f8(uVar19,0);
                              if ((uVar30 & 1) != 0) goto LAB_03552b54;
                            }
                            if (uVar19 == 0xa0) {
                              if ((*plVar3 == 0) ||
                                 (lVar33 = *(long *)(*plVar3 + 0x50), lVar33 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                              goto LAB_035575f4;
                              lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
                              *(int *)(lVar33 + 0x20) = *(int *)(lVar33 + 0x20) + 1;
                            }
                          }
LAB_035530c4:
                          unaff_x29 = (undefined8 *)&stack0x000008a0;
                          if (((int)unaff_x19[0x5c] == 1) && ((uVar19 == 0x2d || (!bVar16)))) {
                            if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                            fVar81 = *(float *)(unaff_x19 + 0x3d);
                            iVar17 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                            if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                            fVar65 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                            lVar33 = unaff_x19[0xca];
                            fVar59 = fVar72;
                            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                              fVar59 = 1.0;
                            }
                            if ((lVar33 == 0) || (*(long *)(lVar33 + 0x20) == 0)) goto LAB_035574b8;
                            fVar82 = *(float *)((long)unaff_x19 + 0x404);
                            fVar83 = *(float *)(lVar33 + 0x2c);
                            fVar63 = (float)FUN_03776ea8(*(long *)(lVar33 + 0x20),0);
                            fVar64 = *(float *)(unaff_x19 + 0x6a);
                            fVar63 = fVar82 * (fVar81 / (float)iVar17) * fVar65 * fVar59 * fVar83 *
                                     fVar63;
                            fVar81 = *(float *)((long)unaff_x19 + 0x354);
                            if ((uVar19 == 10) &&
                               (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                              if ((*plVar3 == 0) ||
                                 (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                              goto LAB_035574b8;
                              uVar21 = *(int *)((long)unaff_x19 + 0x494) - 1;
                              if (*(uint *)(lVar33 + 0x18) <= uVar21) goto LAB_035575f4;
                              if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                              fVar59 = *(float *)(lVar33 + (long)(int)uVar21 * 0x178 + 0x60);
                              iVar17 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                              if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                              fVar82 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                              lVar33 = unaff_x19[0xca];
                              fVar65 = fVar72;
                              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                fVar65 = 1.0;
                              }
                              if ((lVar33 == 0) || (*(long *)(lVar33 + 0x20) == 0))
                              goto LAB_035574b8;
                              fVar83 = *(float *)((long)unaff_x19 + 0x404);
                              fVar68 = *(float *)(lVar33 + 0x2c);
                              fVar63 = (float)FUN_03776ea8(*(long *)(lVar33 + 0x20),0);
                              if ((*plVar3 == 0) ||
                                 (lVar33 = *(long *)(*plVar3 + 0x50), lVar33 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                              goto LAB_035575f4;
                              lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              fVar64 = *(float *)(lVar33 + 0x60);
                              fVar81 = *(float *)(lVar33 + 100);
                              fVar63 = fVar83 * (fVar59 / (float)iVar17) * fVar82 * fVar65 * fVar68
                                       * fVar63;
                            }
                            fVar82 = *(float *)(unaff_x19 + 0x9b);
                            fVar59 = 0.0;
                            fVar65 = 0.0;
                            if ((0.0 < fVar82) &&
                               (fVar65 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                              fVar65 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                            }
                            fVar68 = *(float *)(unaff_x19 + 0x97);
                            fVar79 = *(float *)((long)unaff_x19 + 0x4cc);
                            fVar83 = *(float *)(unaff_x19 + 200);
                            if ((char)unaff_x19[0x1e] == '\0') {
                              if ((unaff_x19[0xca] == 0) ||
                                 (lVar33 = *(long *)(unaff_x19[0xca] + 0x20), lVar33 == 0))
                              goto LAB_035574b8;
                              FUN_03776e6c(&stack0x000008a0,lVar33,0);
                              fVar59 = (float)FUN_03776cb4(&stack0x00001700,0);
                            }
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            fVar88 = *(float *)(unaff_x19 + 0x6c);
                            fVar81 = (fVar87 - fVar64) - fVar81;
                            bVar15 = true;
                            if ((fVar88 <= fVar81) && (bVar15 = false, !NAN(fVar88))) {
                              bVar15 = fVar88 == -1.0;
                            }
                            if (!bVar15) {
                              fVar81 = fVar88;
                            }
                            fVar64 = 1.0;
                            if ((uVar45 & 0x18) != 0) {
                              fVar64 = DAT_00d38acc;
                            }
                            if (((fVar68 - (fVar79 - fVar82)) + fVar65 < fVar56) &&
                               (ABS(fVar83) +
                                fVar63 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                                fVar64 * fVar81)) {
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_0358c4f0();
                              lVar33 = *(long *)(*(long *)puVar12 + 0xb8);
                              memcpy(&stack0x00000528,(void *)(lVar33 + 0x788),0x378);
                              FUN_0209b210(lVar33 + 0x11f0,&stack0x00000528,
                                           *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                            }
                          }
                          lVar33 = *plVar3;
                          if (lVar33 == 0) goto LAB_035574b8;
                          lVar35 = *(long *)(lVar33 + 0x38);
                          uVar30 = (ulong)(uint)fVar58;
                          if (lVar35 == 0) goto LAB_035574b8;
                          if (*(uint *)(lVar35 + 0x18) <= *puVar1) goto LAB_035575f4;
                          uVar21 = *(uint *)(unaff_x19 + 0x95);
                          lVar35 = lVar35 + (long)(int)*puVar1 * 0x178;
                          *(uint *)(lVar35 + 100) = uVar21;
                          *(int *)(lVar35 + 0x68) = (int)unaff_x19[0x96];
                          if ((bVar16) ||
                             ((uVar19 < 0xe && ((1 << (ulong)(uVar19 & 0x1f) & 0x2c00U) != 0)))) {
                            lVar33 = *(long *)(lVar33 + 0x50);
                            if (lVar33 == 0) goto LAB_035574b8;
                            if (*(uint *)(lVar33 + 0x18) <= uVar21) goto LAB_035575f4;
                            if (*(int *)(lVar33 + (long)(int)uVar21 * 0x5c + 0x24) == 1)
                            goto LAB_0355346c;
                          }
                          else {
                            lVar33 = *(long *)(lVar33 + 0x50);
                            if (lVar33 == 0) goto LAB_035574b8;
LAB_0355346c:
                            if (*(uint *)(lVar33 + 0x18) <= uVar21) goto LAB_035575f4;
                            *(int *)(lVar33 + (long)(int)uVar21 * 0x5c + 0x68) =
                                 (int)unaff_x19[0x4f];
                          }
                          if (uVar19 == 9) {
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar81 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar65 = *(float *)(unaff_x19 + 200);
                            fVar59 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
                            fVar81 = fVar58 * fVar81 * fVar59;
                            fVar59 = fVar81 * (float)(int)(fVar65 / fVar81);
                            uVar70 = (ulong)(uint)fVar59;
                            if (fVar59 <= fVar65) {
                              fVar59 = fVar65 + fVar81;
                            }
LAB_03553678:
                            *(float *)(unaff_x19 + 200) = fVar59;
                          }
                          else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                            if ((char)unaff_x19[0x1e] == '\0') {
                              if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                                fVar65 = 1.0;
                              }
                              else {
                                fVar65 = (float)thunk_FUN_036bc400(lVar39,0);
                              }
                              fVar59 = *(float *)(unaff_x19 + 200);
                              fVar63 = (float)FUN_03776cb4(&stack0x00001790,0);
                              if (unaff_x19[0x20] != 0) {
                                fVar81 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                                fVar59 = fVar59 + fVar81 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                           fVar58 * (fStack000000000000012c +
                                                                    fVar65 * fVar63) +
                                                           fVar62 * (fStack00000000000000d0 +
                                                                    fVar67 + *(float *)(unaff_x19[
                                                  0x20] + 0x1ac)));
                                *(float *)(unaff_x19 + 200) = fVar59;
                                goto joined_r0x035535c0;
                              }
                              goto LAB_035574b8;
                            }
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                     (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar58 * fStack000000000000012c +
                                     fVar62 * (fStack00000000000000d0 +
                                              fVar67 + *(float *)(*unaff_x21 + 0x1ac)));
                            uVar70 = (ulong)(uint)fVar59;
                            fVar59 = *(float *)(unaff_x19 + 200) - fVar59;
                            *(float *)(unaff_x19 + 200) = fVar59;
                            if ((uVar19 == 0x200b) || (uVar20 != 0)) {
                              fVar81 = fVar62 * *(float *)((long)unaff_x19 + 0x2b4);
                              uVar70 = (ulong)(uint)fVar81;
                              fVar59 = fVar59 - fVar81;
                              goto LAB_03553678;
                            }
                          }
                          else {
                            if (*unaff_x21 == 0) goto LAB_035574b8;
                            fVar81 = *(float *)(unaff_x19 + 200);
                            fVar59 = fVar81 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                              (*(float *)((long)unaff_x19 + 0x2ac) +
                                              (*(float *)(unaff_x19 + 0x56) - fVar66) +
                                              fVar62 * (fVar67 + *(float *)(*unaff_x21 + 0x1ac)));
                            *(float *)(unaff_x19 + 200) = fVar59;
joined_r0x035535c0:
                            if ((uVar19 == 0x200b) || (uVar70 = (ulong)(uint)fVar81, uVar20 != 0)) {
                              fVar81 = fVar62 * *(float *)((long)unaff_x19 + 0x2b4);
                              uVar70 = (ulong)(uint)fVar81;
                              fVar59 = fVar59 + fVar81;
                              goto LAB_03553678;
                            }
                          }
                          lVar33 = *plVar3;
                          if ((lVar33 == 0) || (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0))
                          goto LAB_035574b8;
                          uVar21 = *puVar1;
                          uVar45 = (uint)*(undefined8 *)(lVar35 + 0x18);
                          if (uVar45 <= uVar21) goto LAB_035575f4;
                          *(float *)(lVar35 + (long)(int)uVar21 * 0x178 + 0x144) = fVar59;
                          uVar46 = uVar19;
                          if ((int)uVar19 < 0xd) {
                            if ((uVar19 - 10 < 2) || (uVar19 == 3)) goto LAB_0355371c;
LAB_03553700:
                            if (((bool)(bVar16 & uVar19 == 0x2d)) || (uVar21 == uVar25))
                            goto LAB_0355371c;
                          }
                          else {
                            if (1 < uVar19 - 0x2028) {
                              if (uVar19 != 0xd) goto LAB_03553700;
                              uVar70 = 0;
                              *(float *)(unaff_x19 + 200) =
                                   *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                              if (uVar21 != uVar25) goto LAB_03553c8c;
                            }
LAB_0355371c:
                            if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                              fVar81 = *(float *)(unaff_x19 + 0x99);
                              fVar59 = *(float *)(unaff_x19 + 0x9a);
                              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              fVar81 = fVar81 - fVar59;
                              if (((fVar73 < ABS(fVar81)) &&
                                  (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                                 (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                                FUN_0358c860(fVar81);
                                *(float *)((long)unaff_x19 + 0x4c4) =
                                     *(float *)((long)unaff_x19 + 0x4c4) - fVar81;
                                *(float *)(unaff_x19 + 0x9b) = fVar81 + *(float *)(unaff_x19 + 0x9b)
                                ;
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar33 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar33 = *(long *)puVar12;
                                }
                                lVar35 = *(long *)(lVar33 + 0xb8);
                                if (*(int *)(lVar35 + 0x7ac) == (int)unaff_x19[0x95]) {
                                  if (*(int *)(lVar33 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                    lVar35 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                      0xb8);
                                  }
                                  FUN_0209b778(lVar35 + 0x11f0,&stack0x000008a0,
                                               *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                  memcpy((void *)(*(long *)(lVar33 + 0xb8) + 0x788),&stack0x000008a0
                                         ,0x378);
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (*(long *)(lVar33 + 0xb8) + 0x818,0);
                                  lVar33 = *(long *)(*(long *)puVar12 + 0xb8);
                                  *(float *)(lVar33 + 0x7bc) = fVar81 + *(float *)(lVar33 + 0x7bc);
                                  *(float *)(lVar33 + 0x800) = fVar81 + *(float *)(lVar33 + 0x800);
                                  memcpy(&stack0x000001b0,(void *)(lVar33 + 0x788),0x378);
                                  FUN_0209b210(lVar33 + 0x11f0,&stack0x000001b0,
                                               *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                                }
                              }
                            }
                            fVar65 = *(float *)(unaff_x19 + 0x9b);
                            *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                            fVar59 = *(float *)((long)unaff_x19 + 0x4cc) - fVar65;
                            fVar81 = *(float *)((long)unaff_x19 + 0x4c4);
                            if (fVar59 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                              fVar81 = fVar59;
                            }
                            *(float *)((long)unaff_x19 + 0x4c4) = fVar81;
                            fVar63 = *(float *)(unaff_x19 + 0x99);
                            if (in_stack_000017d4 == '\0') {
                              fVar90 = fVar81;
                            }
                            if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                               (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                                ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                              in_stack_000017d4 = '\x01';
                            }
                            lVar33 = *plVar3;
                            if ((lVar33 == 0) || (lVar35 = *(long *)(lVar33 + 0x50), lVar35 == 0))
                            goto LAB_035574b8;
                            uVar21 = *(uint *)(unaff_x19 + 0x95);
                            if (*(uint *)(lVar35 + 0x18) <= uVar21) goto LAB_035575f4;
                            lVar54 = unaff_x19[0x93];
                            lVar29 = lVar35 + (long)(int)uVar21 * 0x5c;
                            *(int *)(lVar29 + 0x34) = (int)lVar54;
                            uVar45 = *(uint *)(unaff_x19 + 0x93);
                            if ((int)lVar54 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                              uVar45 = *(uint *)((long)unaff_x19 + 0x49c);
                            }
                            *(uint *)((long)unaff_x19 + 0x49c) = uVar45;
                            *(uint *)(lVar29 + 0x38) = uVar45;
                            *(undefined4 *)(unaff_x19 + 0x94) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                            *(undefined4 *)(lVar29 + 0x3c) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                            iVar17 = *(int *)((long)unaff_x19 + 0x49c);
                            if ((int)uVar45 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                              iVar17 = *(int *)((long)unaff_x19 + 0x4a4);
                            }
                            *(int *)((long)unaff_x19 + 0x4a4) = iVar17;
                            *(int *)(lVar29 + 0x40) = iVar17;
                            *(int *)(lVar29 + 0x24) =
                                 (*(int *)(lVar29 + 0x3c) - *(int *)(lVar29 + 0x34)) + 1;
                            *(undefined4 *)(lVar29 + 0x28) =
                                 *(undefined4 *)((long)unaff_x19 + 0x4ac);
                            lVar33 = *(long *)(lVar33 + 0x38);
                            if (lVar33 == 0) goto LAB_035574b8;
                            if (*(uint *)(lVar33 + 0x18) <= uVar45) goto LAB_035575f4;
                            uVar86 = *(undefined4 *)(lVar33 + (long)(int)uVar45 * 0x178 + 0x11c);
                            lVar35 = lVar35 + (long)(int)uVar21 * 0x5c;
                            *(float *)(lVar35 + 0x70) = fVar59;
                            *(undefined4 *)(lVar35 + 0x6c) = uVar86;
                            lVar33 = *plVar3;
                            if ((lVar33 == 0) || (lVar35 = *(long *)(lVar33 + 0x50), lVar35 == 0))
                            goto LAB_035574b8;
                            if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto LAB_035575f4;
                            lVar33 = *(long *)(lVar33 + 0x38);
                            if (lVar33 == 0) goto LAB_035574b8;
                            if (*(uint *)(lVar33 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                            goto LAB_035575f4;
                            fVar63 = fVar63 - fVar65;
                            uVar70 = (ulong)(uint)fVar63;
                            lVar35 = lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            *(undefined4 *)(lVar35 + 0x74) =
                                 *(undefined4 *)
                                  (lVar33 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * 0x178 +
                                  0x128);
                            *(float *)(lVar35 + 0x78) = fVar63;
                            lVar33 = *plVar3;
                            if ((lVar33 == 0) || (lVar54 = *(long *)(lVar33 + 0x50), lVar54 == 0))
                            goto LAB_035574b8;
                            lVar29 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                            if (*(uint *)(lVar54 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto LAB_035575f4;
                            lVar35 = lVar54 + lVar29 * 0x5c;
                            *(float *)(lVar35 + 0x44) =
                                 *(float *)(lVar35 + 0x74) - fVar58 * fStack000000000000015c;
                            *(float *)(lVar35 + 0x5c) = fStack00000000000000fc;
                            if (*(int *)(lVar35 + 0x24) == 1) {
                              *(int *)(lVar54 + lVar29 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                            }
                            if ((*unaff_x21 == 0) ||
                               (lVar35 = *(long *)(lVar33 + 0x38), lVar35 == 0)) goto LAB_035574b8;
                            lVar48 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                            uVar45 = (uint)*(undefined8 *)(lVar35 + 0x18);
                            if (uVar45 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
                            if ((*(char *)(lVar35 + lVar48 * 0x178 + 0x194) == '\0') &&
                               (lVar48 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                               uVar45 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_035575f4;
                            lVar54 = lVar54 + lVar29 * 0x5c;
                            fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                     (fVar62 * (fStack00000000000000d0 +
                                               fVar67 + *(float *)(*unaff_x21 + 0x1ac)) -
                                     *(float *)((long)unaff_x19 + 0x2ac));
                            fVar81 = -fVar58;
                            if ((char)unaff_x19[0x1e] != '\0') {
                              fVar81 = fVar58;
                            }
                            *(float *)(lVar54 + 0x58) =
                                 *(float *)(lVar35 + lVar48 * 0x178 + 0x144) + fVar81;
                            *(float *)(lVar54 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                            *(float *)(lVar54 + 0x54) = fVar59;
                            *(float *)(lVar54 + 0x48) = fVar85 * fVar57 + (fVar63 - fVar59);
                            *(float *)(lVar54 + 0x4c) = fVar63;
                            if ((int)uVar19 < 0x2d) {
                              if (uVar19 - 10 < 2) {
LAB_03553b60:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                FUN_0358c4f0();
                                lVar33 = unaff_x19[0x6d];
                                *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                                iVar17 = (int)unaff_x19[0x95] + 1;
                                *(int *)(unaff_x19 + 0x95) = iVar17;
                                *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                                if ((lVar33 != 0) && (*(long *)(lVar33 + 0x50) != 0)) {
                                  if (*(int *)(*(long *)(lVar33 + 0x50) + 0x18) <= iVar17) {
                                    FUN_0358ca18();
                                    lVar33 = unaff_x19[0x6d];
                                    if (lVar33 == 0) goto LAB_035574b8;
                                  }
                                  lVar33 = *(long *)(lVar33 + 0x38);
                                  if (lVar33 != 0) {
                                    if (*puVar1 < *(uint *)(lVar33 + 0x18)) {
                                      fVar81 = *(float *)(lVar33 + (long)(int)*puVar1 * 0x178 +
                                                         0x154);
                                      if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                        if ((uVar19 == 0x2029) || (fVar58 = 0.0, uVar19 == 10)) {
                                          fVar58 = *(float *)((long)unaff_x19 + 0x2cc);
                                        }
                                        uVar36 = 0;
                                        fVar58 = fVar81 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)
                                                          ) +
                                                 fVar85 * (fVar57 + *(float *)((long)unaff_x19 + 700
                                                                              )) +
                                                 fVar62 * (*(float *)(unaff_x19 + 0x57) + fVar58) +
                                                 *(float *)(unaff_x19 + 0x9b);
                                      }
                                      else {
                                        if ((uVar19 == 0x2029) || (fVar58 = 0.0, uVar19 == 10)) {
                                          fVar58 = *(float *)((long)unaff_x19 + 0x2cc);
                                        }
                                        uVar36 = 1;
                                        fVar58 = *(float *)(unaff_x19 + 0x9b) +
                                                 *(float *)(unaff_x19 + 0x58) +
                                                 fVar62 * (*(float *)(unaff_x19 + 0x57) + fVar58);
                                      }
                                      *(float *)(unaff_x19 + 0x9b) = fVar58;
                                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar36;
                                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                      if (*(int *)(lVar33 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                        lVar33 = *(long *)puVar12;
                                      }
                                      uVar34 = *(undefined8 *)(*(long *)(lVar33 + 0xb8) + 0x15a8);
                                      *(float *)(unaff_x19 + 0x9a) = fVar81;
                                      uVar70 = NEON_rev64(uVar34,4);
                                      unaff_x19[0x99] = uVar70;
                                      *(float *)(unaff_x19 + 200) =
                                           *(float *)(unaff_x19 + 0x81) + 0.0 +
                                           *(float *)((long)unaff_x19 + 0x40c);
                                      FUN_0358c4f0();
                                      FUN_0358c4f0();
                                      *(int *)((long)unaff_x19 + 0x494) =
                                           *(int *)((long)unaff_x19 + 0x494) + 1;
                                      bVar9 = true;
                                      bVar11 = 1;
                                      goto LAB_03550bd0;
                                    }
                                    goto LAB_035575f4;
                                  }
                                }
                                goto LAB_035574b8;
                              }
                              if (uVar19 == 3) {
                                if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
                                uVar89 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                                uVar46 = 3;
                              }
                            }
                            else if ((uVar19 - 0x2028 < 2) || (uVar19 == 0x2d)) goto LAB_03553b60;
                          }
LAB_03553c8c:
                          uVar21 = *puVar1;
                          if (uVar45 <= uVar21) goto LAB_035575f4;
                          if (*(char *)(lVar35 + (long)(int)uVar21 * 0x178 + 0x194) != '\0') {
                            lVar35 = lVar35 + (long)(int)uVar21 * 0x178;
                            uVar28 = *(ulong *)(lVar35 + 0x11c);
                            uVar70 = *(ulong *)((long)unaff_x19 + 0x4dc);
                            *(ulong *)((long)unaff_x19 + 0x4dc) =
                                 uVar70 ^ (uVar70 ^ uVar28) &
                                          ~CONCAT44(-(uint)((float)(uVar70 >> 0x20) <
                                                           (float)(uVar28 >> 0x20)),
                                                    -(uint)((float)uVar70 < (float)uVar28));
                            uVar28 = *(ulong *)((long)unaff_x19 + 0x4e4);
                            uVar70 = *(ulong *)(lVar35 + 0x128);
                            *(ulong *)((long)unaff_x19 + 0x4e4) =
                                 uVar28 ^ (uVar28 ^ uVar70) &
                                          ~CONCAT44(-(uint)((float)(uVar70 >> 0x20) <
                                                           (float)(uVar28 >> 0x20)),
                                                    -(uint)((float)uVar70 < (float)uVar28));
                          }
                          if (((int)unaff_x19[0x5c] == 5) &&
                             ((0xd < uVar46 || ((1 << (ulong)(uVar46 & 0x1f) & 0x2c00U) == 0)))) {
                            lVar35 = *(long *)(lVar33 + 0x58);
                            if (lVar35 == 0) goto LAB_035574b8;
                            iVar17 = (int)unaff_x19[0x96] + 1;
                            if (*(int *)(lVar35 + 0x18) < iVar17) {
                              if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_01ff02b8((long *)(lVar33 + 0x58),iVar17,1,
                                           *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                              lVar33 = *plVar3;
                              if (lVar33 == 0) goto LAB_035574b8;
                            }
                            lVar35 = *(long *)(lVar33 + 0x58);
                            if (lVar35 == 0) goto LAB_035574b8;
                            uVar45 = *(uint *)(unaff_x19 + 0x96);
                            lVar54 = (long)(int)uVar45;
                            uVar21 = *(uint *)(lVar35 + 0x18);
                            if (uVar21 <= uVar45) goto LAB_035575f4;
                            lVar29 = lVar35 + lVar54 * 0x14;
                            fVar58 = *(float *)(lVar29 + 0x30);
                            uVar70 = (ulong)(uint)fVar58;
                            *(undefined4 *)(lVar29 + 0x28) =
                                 *(undefined4 *)((long)unaff_x19 + 0x4b4);
                            fVar81 = *(float *)((long)unaff_x19 + 0x4c4);
                            if (fVar58 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                              fVar81 = fVar58;
                            }
                            *(float *)(lVar29 + 0x30) = fVar81;
                            uVar46 = *(uint *)((long)unaff_x19 + 0x494);
                            if (uVar46 == 0 && uVar45 == 0) {
                              *(uint *)(lVar35 + (ulong)uVar45 * 0x14 + 0x20) = uVar46;
                            }
                            else {
                              uVar8 = uVar46 - 1;
                              if (0 < (int)uVar46) {
                                lVar33 = *(long *)(lVar33 + 0x38);
                                if (lVar33 == 0) goto LAB_035574b8;
                                if (*(uint *)(lVar33 + 0x18) <= uVar8) goto LAB_035575f4;
                                if (uVar45 != *(uint *)(lVar33 + (ulong)uVar8 * 0x178 + 0x68)) {
                                  if (uVar45 - 1 < uVar21) {
                                    *(uint *)(lVar35 + 0x20 + (long)(int)(uVar45 - 1) * 0x14 + 4) =
                                         uVar8;
                                    *(uint *)(lVar35 + 0x20 + lVar54 * 0x14) = uVar46;
                                    goto LAB_03553d10;
                                  }
                                  goto LAB_035575f4;
                                }
                              }
                              if (uVar46 == uVar25) {
                                *(uint *)(lVar35 + lVar54 * 0x14 + 0x24) = uVar25;
                              }
                            }
                          }
LAB_03553d10:
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          unaff_x29 = (undefined8 *)&stack0x000008a0;
                          if (((char)unaff_x19[0x5b] == '\0') &&
                             ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                              ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                          goto LAB_035542ac;
                          if ((uVar20 == 0) &&
                             (((uVar19 != 0x2d && (uVar19 != 0x200b)) && (uVar19 != 0xad)))) {
                            if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
                              if (((((0x2bfd < uVar19 - 0xac01) && (0xfd < uVar19 - 0x1101)) &&
                                   (0x1d < uVar19 - 0xa961)) ||
                                  (uVar28 = FUN_03597a54(0), (uVar28 & 1) != 0)) &&
                                 ((((0xed < uVar19 - 0xff01 && (0x1d < uVar19 - 0xfe31)) &&
                                   (0x717d < uVar19 - 0x2e81)) && (0x1fd < uVar19 - 0xf901))))
                              goto LAB_03553f78;
                              lVar33 = FUN_035978e8(0);
                              if ((lVar33 == 0) || (*(long *)(lVar33 + 0x10) == 0))
                              goto LAB_035574b8;
                              uVar26 = (ulong)uVar19;
                              uVar21 = FUN_0219c130(*(long *)(lVar33 + 0x10),&stack0x000008a0,
                                                    *(undefined8 *)
                                                     OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                              if ((int)uVar25 <= (int)*puVar1) {
                                if ((uVar21 & 1) == 0) {
LAB_03554270:
                                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0)
                                  {
                                    thunk_FUN_01a58e78();
                                  }
                                  FUN_0358c4f0();
                                  goto LAB_035542a8;
                                }
LAB_035541dc:
                                if (uVar55 != uVar38 || ((bVar11 ^ 0xff) & 1) != 0)
                                goto LAB_035542ac;
                                if (uVar20 != 0)
                                goto UnityEngine_Animator__get_bodyPositionInternal;
                                goto LAB_0355422c;
                              }
                              lVar33 = FUN_035978e8(0);
                              if (((lVar33 == 0) || (*plVar3 == 0)) ||
                                 (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0))
                              goto LAB_035574b8;
                              if (*(uint *)(lVar35 + 0x18) <= *puVar1 + 1) goto LAB_035575f4;
                              if (*(long *)(lVar33 + 0x18) == 0) goto LAB_035574b8;
                              uVar26 = (ulong)*(ushort *)
                                               (lVar35 + (long)(int)(*puVar1 + 1) * 0x178 + 0x20);
                              uVar28 = FUN_0219c130(*(long *)(lVar33 + 0x18),&stack0x000008a0,
                                                    *(undefined8 *)
                                                     OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                              if ((uVar21 & 1) != 0) goto LAB_035541dc;
                              if ((uVar28 & 1) == 0) goto LAB_03554270;
                              if (bVar11 == 0) goto LAB_035542a8;
                              if (uVar20 != 0) {
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                FUN_0358c4f0();
                              }
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_0358c4f0();
                            }
                            else {
                              if (bVar11 == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
                              if (!bVar10 && uVar19 == 0xad)
                              goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_0358c4f0();
                            }
                            bVar11 = 1;
                          }
                          else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
                            if (bVar11 != 0) {
                              if (uVar20 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_0358c4f0();
                              goto LAB_0355422c;
                            }
LAB_035542a8:
                            bVar11 = 0;
                          }
                          else {
                            if (((uVar19 - 0x2007 < 0x29) &&
                                ((1L << ((ulong)(uVar19 - 0x2007) & 0x3f) & 0x10000000401U) != 0))
                               || ((uVar19 == 0xa0 || (uVar19 == 0x2060)))) goto LAB_03553ef0;
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                            bVar11 = 0;
                            *(undefined4 *)(*(long *)(*(long *)puVar12 + 0xb8) + 0xe78) = 0xffffffff
                            ;
                          }
LAB_035542ac:
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          FUN_0358c4f0();
                          *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                        }
                        else {
                          fStack0000000000000158 = 1.0;
                          if (iVar17 == 0) goto LAB_03550fec;
LAB_03550c00:
                          if (iVar17 != 1) {
                            lVar33 = *plVar3;
                            fVar59 = 0.0;
                            fVar58 = 0.0;
                            if (uVar19 != 3 && uVar19 != 0xad) {
                              fVar58 = fVar81;
                            }
                            if (lVar33 != 0) {
                              fVar65 = 0.0;
                              fVar63 = 0.0;
                              goto LAB_035514cc;
                            }
                            goto LAB_035574b8;
                          }
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *plVar51 = *(long *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x40);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar3 == 0) || (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                          *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                               *(undefined4 *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x48);
                          if ((unaff_x19[0xd3] == 0) ||
                             (lVar33 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                             lVar33 == 0)) goto LAB_035574b8;
                          FUN_02215a88(lVar33,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                       &stack0x000008a0,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo
                                      );
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (uVar26 != 0) {
                            if (uVar19 == 0x3c) {
                              uVar19 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                            }
                            else {
                              lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar33 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar33 = *(long *)puVar12;
                              }
                              *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                                   *(undefined4 *)(*(long *)(lVar33 + 0xb8) + 0x68);
                            }
                            if (unaff_x19[0x20] != 0) {
                              fVar81 = *(float *)(unaff_x19 + 0x3d);
                              memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
                              iVar17 = FUN_03776950(&stack0x00001720,0);
                              if (*unaff_x21 != 0) {
                                memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
                                fVar59 = (float)FUN_03776960(&stack0x00001720,0);
                                fVar58 = fVar72;
                                if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                  fVar58 = 1.0;
                                }
                                if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                                fVar58 = (fVar81 / (float)iVar17) * fVar59 * fVar58;
                                iVar17 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                                fVar81 = *(float *)(unaff_x19 + 0x3d);
                                if (iVar17 < 1) {
                                  if (*unaff_x21 == 0) goto LAB_035574b8;
                                  iVar17 = FUN_03776950(*unaff_x21 + 0x50,0);
                                  if (*unaff_x21 == 0) goto LAB_035574b8;
                                  fVar67 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                                  fVar63 = fVar72;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar63 = 1.0;
                                  }
                                  if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                                  fVar82 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                                  if (*(long *)(uVar26 + 0x20) == 0) goto LAB_035574b8;
                                  FUN_03776e6c(&stack0x000008a0,*(long *)(uVar26 + 0x20),0);
                                  fVar64 = (float)FUN_03776c9c(&stack0x00001700,0);
                                  if (*(long *)(uVar26 + 0x20) == 0) goto LAB_035574b8;
                                  fVar83 = *(float *)(uVar26 + 0x2c);
                                  fVar66 = (float)FUN_03776ea8(*(long *)(uVar26 + 0x20),0);
                                  if (*unaff_x21 == 0) goto LAB_035574b8;
                                  fVar65 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                                  if (*unaff_x21 == 0) goto LAB_035574b8;
                                  fVar68 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                                  if (*unaff_x21 == 0) goto LAB_035574b8;
                                  fVar79 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar59 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                                  if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                                  fVar59 = fVar58 * fVar68 * fVar79 * fVar59;
                                  fVar63 = (fVar81 / (float)iVar17) * fVar67 * fVar63;
                                  fVar81 = fVar63 * (fVar82 / fVar64) * fVar83 * fVar66;
                                  fVar63 = fVar63 / fVar81;
                                  fVar65 = fVar63 * fVar65;
                                  fVar58 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                                  fVar63 = fVar63 * fVar58;
                                }
                                else {
                                  if (*plVar51 == 0) goto LAB_035574b8;
                                  iVar17 = FUN_03776950(*plVar51 + 0x48,0);
                                  if (*plVar51 == 0) goto LAB_035574b8;
                                  fVar63 = (float)FUN_03776960(*plVar51 + 0x48,0);
                                  if (*(long *)(uVar26 + 0x20) == 0) goto LAB_035574b8;
                                  fVar82 = *(float *)(uVar26 + 0x2c);
                                  fVar67 = fVar72;
                                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                    fVar67 = 1.0;
                                  }
                                  fVar64 = (float)FUN_03776ea8(*(long *)(uVar26 + 0x20),0);
                                  if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                                  fVar65 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                                  if (*plVar51 == 0) goto LAB_035574b8;
                                  fVar66 = (float)FUN_037769b0(*plVar51 + 0x48,0);
                                  if (*plVar51 == 0) goto LAB_035574b8;
                                  fVar83 = *(float *)((long)unaff_x19 + 0x404);
                                  fVar59 = (float)FUN_03776960(*plVar51 + 0x48,0);
                                  if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                                  fVar59 = fVar58 * fVar66 * fVar83 * fVar59;
                                  fVar81 = (fVar81 / (float)iVar17) * fVar63 * fVar67 *
                                           fVar82 * fVar64;
                                  fVar63 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                                }
                                *puVar2 = uVar26;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (puVar2,uVar26);
                                if ((*plVar3 != 0) &&
                                   (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 != 0)) {
                                  if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                                  lVar33 = lVar33 + (long)(int)*puVar1 * 0x178;
                                  *(undefined4 *)(lVar33 + 0x2c) = 1;
                                  *(float *)(lVar33 + 0x160) = fVar81;
                                  *(long *)(lVar33 + 0x40) = *plVar51;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  if ((*plVar3 != 0) &&
                                     (lVar33 = *(long *)(*plVar3 + 0x38), lVar33 != 0)) {
                                    if (*(uint *)(lVar33 + 0x18) <= *puVar1) goto LAB_035575f4;
                                    *(long *)(lVar33 + (long)(int)*puVar1 * 0x178 + 0x38) =
                                         *unaff_x21;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ();
                                    lVar33 = *plVar3;
                                    if ((lVar33 != 0) &&
                                       (lVar54 = *(long *)(lVar33 + 0x38), lVar54 != 0)) {
                                      if (*puVar1 < *(uint *)(lVar54 + 0x18)) {
                                        fStack000000000000015c = 0.0;
                                        *(int *)(lVar54 + (long)(int)*puVar1 * 0x178 + 0x58) =
                                             (int)unaff_x19[0x24];
                                        *(int *)(unaff_x19 + 0x24) = (int)lVar35;
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
                      uVar28 = FUN_03586568();
                      if (((uVar28 & 1) == 0) ||
                         (uVar89 = in_stack_0000178c, *(int *)((long)unaff_x19 + 0x644) != 0))
                      goto LAB_035509d4;
                    }
LAB_03550bd0:
                    uVar89 = uVar89 + 1;
                    lVar33 = unaff_x19[0x8f];
                    uVar20 = uVar19;
                    if (lVar33 == 0) goto LAB_035574b8;
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
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_03554e78:
  uVar89 = uVar25 - 1;
  if (*(uint *)(lVar39 + 0x18) <= uVar89) goto LAB_035575f4;
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x50), lVar35 == 0)) goto LAB_035574b8;
  lVar29 = (long)(int)uVar89;
  lVar54 = lVar39 + lVar29 * 0x178;
  uVar19 = *(uint *)(lVar54 + 100);
  if (*(uint *)(lVar35 + 0x18) <= uVar19) goto LAB_035575f4;
  lVar50 = (long)(int)uVar19;
  lVar35 = lVar35 + lVar50 * 0x5c;
  lVar48 = *(long *)(lVar54 + 0x38);
  uVar6 = *(ushort *)(lVar54 + 0x20);
  uVar38 = *(uint *)(lVar35 + 0x3c);
  uVar55 = *(uint *)(lVar35 + 0x68);
  iVar5 = *(int *)(lVar35 + 0x20);
  iVar23 = *(int *)(lVar35 + 0x28);
  iVar24 = *(int *)(lVar35 + 0x2c);
  uVar21 = *(uint *)(lVar35 + 0x40);
  lVar54 = (long)(int)uVar21;
  fVar76 = *(float *)(lVar35 + 0x4c);
  fVar73 = *(float *)(lVar35 + 0x54);
  fVar71 = *(float *)(lVar35 + 0x58);
  fVar63 = *(float *)(lVar35 + 0x5c);
  fVar90 = *(float *)(lVar35 + 0x60);
  fVar65 = *(float *)(lVar35 + 0x6c);
  fVar67 = *(float *)(lVar35 + 0x70);
  fVar87 = *(float *)(lVar35 + 0x74);
  fVar75 = *(float *)(lVar35 + 0x78);
  uVar45 = (uint)uVar6;
  if ((int)uVar55 < 9) {
    switch(uVar55) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar90 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar71;
      }
      break;
    case 2:
LAB_03555018:
      fStack00000000000000fc = (fVar90 + fVar63 * 0.5) - fVar71 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar63 + fVar90) - fVar71;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar63 + fVar90;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar55 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar6 < 0xad) {
      if ((uVar6 != 3) && (uVar6 != 10)) goto LAB_03554fac;
    }
    else if ((uVar6 != 0xad) && ((uVar6 != 0x200b && (uVar6 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar39 + 0x18) <= uVar38) goto LAB_035575f4;
      uVar7 = *(undefined2 *)(lVar39 + (long)(int)uVar38 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b8cc4(uVar7,0);
      if ((uVar26 & 1) == 0) {
        bVar15 = (int)uVar19 < (int)unaff_x19[0x95];
      }
      else {
        bVar15 = false;
      }
      if ((fVar71 <= fVar63) && (!bVar15 && uVar55 >> 4 == 0)) {
        fStack00000000000000fc = fVar90;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar63 + fVar90;
        }
        goto LAB_03555088;
      }
      if (((uVar25 == 1) || (uVar19 != uVar20)) || (uVar89 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar90;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar63 + fVar90;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000028 = FUN_026b97f8(uVar45,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar37 = (char)unaff_x19[0x1e];
        fVar90 = -fVar71;
        if (cVar37 != '\0') {
          fVar90 = fVar71;
        }
        if (*(uint *)(lVar39 + 0x18) <= uVar38) goto LAB_035575f4;
        iVar24 = (int)*(char *)(lVar39 + (long)(int)uVar38 * 0x178 + 0x194) +
                 (-iVar5 - (uStack0000000000000028 & 1)) + iVar24 + -1;
        if (iVar24 < 1) {
          fVar71 = 1.0;
          iVar24 = 1;
        }
        else {
          fVar71 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar45 == 9) {
LAB_03556e74:
          fVar71 = 1.0 - fVar71;
        }
        else {
          if (uVar45 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_026b97f8(uVar45,0);
            cVar37 = (char)unaff_x19[0x1e];
            if ((uVar26 & 1) != 0) goto LAB_03556e74;
          }
          iVar24 = (iVar5 - (~uStack0000000000000028 & 1)) + iVar23;
        }
        fVar71 = ((fVar63 + fVar90) * fVar71) / (float)iVar24;
        if (cVar37 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar71;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar71;
        }
      }
    }
  }
  else if (uVar55 == 0x20) {
    fVar71 = fVar65 + fVar87;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar55 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar55 <= uVar89) goto LAB_035575f4;
  lVar35 = lVar39 + lVar29 * 0x178;
  fVar63 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar71 = (float)uStack00000000000000b8 + (float)uStack00000000000000e8;
  fVar90 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar35 + 0x194) == '\0') goto LAB_03555938;
  iVar23 = *(int *)(lVar39 + lVar29 * 0x178 + 0x2c);
  if (iVar23 != 0) goto LAB_0355574c;
  fVar61 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar19,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar42 = lVar39 + lVar29 * 0x178;
    *(undefined4 *)(lVar42 + 0x84) = 0;
    *(undefined4 *)(lVar42 + 0xac) = 0;
    *(undefined4 *)(lVar42 + 0xd4) = 0x3f800000;
    fVar61 = 1.0;
    break;
  case 1:
    fVar75 = *(float *)(lVar39 + lVar29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar42 = lVar39 + lVar29 * 0x178;
      fVar87 = (fStack00000000000000fc + fVar75) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar75 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_035551cc;
    }
    lVar42 = lVar39 + lVar29 * 0x178;
    fVar87 = fVar87 - fVar65;
    *(float *)(lVar42 + 0x84) = fVar61 + (fVar75 - fVar65) / fVar87;
    *(float *)(lVar42 + 0xac) = fVar61 + (*(float *)(lVar42 + 0x98) - fVar65) / fVar87;
    *(float *)(lVar42 + 0xd4) = fVar61 + (*(float *)(lVar42 + 0xc0) - fVar65) / fVar87;
    fVar61 = fVar61 + (*(float *)(lVar42 + 0xe8) - fVar65) / fVar87;
    break;
  case 2:
    lVar42 = lVar39 + lVar29 * 0x178;
    fVar75 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar87 = (fStack00000000000000fc + *(float *)(lVar42 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_035551cc:
    *(float *)(lVar42 + 0x84) = fVar61 + fVar87 / fVar75;
    *(float *)(lVar42 + 0xac) =
         fVar61 + ((fStack00000000000000fc + *(float *)(lVar42 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar42 + 0xd4) =
         fVar61 + ((fStack00000000000000fc + *(float *)(lVar42 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar61 = fVar61 + ((fStack00000000000000fc + *(float *)(lVar42 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar42 = lVar39 + lVar29 * 0x178;
      *(undefined4 *)(lVar42 + 0x88) = 0;
      *(undefined4 *)(lVar42 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar42 + 0xd8) = 0;
      *(undefined4 *)(lVar42 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar42 = lVar39 + lVar29 * 0x178;
      fVar75 = fVar75 - fVar67;
      fVar87 = fVar61 + (*(float *)(lVar42 + 0x74) - fVar67) / fVar75;
      fVar75 = fVar61 + (*(float *)(lVar42 + 0x9c) - fVar67) / fVar75;
      *(float *)(lVar42 + 0x88) = fVar87;
      *(float *)(lVar42 + 0xb0) = fVar75;
      *(float *)(lVar42 + 0xd8) = fVar87;
      *(float *)(lVar42 + 0x100) = fVar75;
      break;
    case 2:
      lVar42 = lVar39 + lVar29 * 0x178;
      fVar87 = fVar61 + (*(float *)(lVar42 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar42 + 0x88) = fVar87;
      fVar75 = *(float *)(unaff_x19 + 0x9c);
      fVar65 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar42 + 0xd8) = fVar87;
      fVar87 = fVar61 + (*(float *)(lVar42 + 0x9c) - fVar75) / (fVar65 - fVar75);
      *(float *)(lVar42 + 0xb0) = fVar87;
      *(float *)(lVar42 + 0x100) = fVar87;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar55 = (uint)*(undefined8 *)(lVar39 + 0x18);
    }
    if (uVar55 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar39 + lVar29 * 0x178;
    fVar87 = *(float *)(lVar42 + 0x15c);
    fVar75 = (1.0 - (*(float *)(lVar42 + 0x88) + *(float *)(lVar42 + 0xb0)) * fVar87) * 0.5;
    fVar65 = fVar61 + *(float *)(lVar42 + 0x88) * fVar87 + fVar75;
    fVar61 = fVar61 + fVar75 + *(float *)(lVar42 + 0xb0) * fVar87;
    *(float *)(lVar42 + 0x84) = fVar65;
    *(float *)(lVar42 + 0xac) = fVar65;
    *(float *)(lVar42 + 0xd4) = fVar61;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar39 + lVar29 * 0x178 + 0xfc) = fVar61;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar55 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar39 + lVar29 * 0x178;
    *(undefined4 *)(lVar42 + 0x88) = 0;
    *(undefined4 *)(lVar42 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar42 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar42 + 0x100) = 0;
    break;
  case 1:
    if (uVar89 < uVar55) {
      lVar42 = lVar39 + lVar29 * 0x178;
      fVar76 = fVar76 - fVar73;
      fVar61 = (*(float *)(lVar42 + 0x74) - fVar73) / fVar76;
      fVar76 = (*(float *)(lVar42 + 0x9c) - fVar73) / fVar76;
      *(float *)(lVar42 + 0x88) = fVar61;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar55 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar39 + lVar29 * 0x178;
    fVar61 = (*(float *)(lVar42 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar42 + 0x88) = fVar61;
    fVar76 = (*(float *)(lVar42 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar42 + 0xb0) = fVar76;
    *(float *)(lVar42 + 0xd8) = fVar76;
    *(float *)(lVar42 + 0x100) = fVar61;
    break;
  case 3:
    if (uVar55 <= uVar89) goto LAB_035575f4;
    lVar42 = lVar39 + lVar29 * 0x178;
    fVar76 = *(float *)(lVar42 + 0x15c);
    fVar87 = (1.0 - (*(float *)(lVar42 + 0x84) + *(float *)(lVar42 + 0xd4)) / fVar76) * 0.5;
    fVar61 = *(float *)(lVar42 + 0x84) / fVar76 + fVar87;
    fVar87 = fVar87 + *(float *)(lVar42 + 0xd4) / fVar76;
    *(float *)(lVar42 + 0x88) = fVar61;
    *(float *)(lVar42 + 0xb0) = fVar87;
    *(float *)(lVar42 + 0x100) = fVar61;
    *(float *)(lVar42 + 0xd8) = fVar87;
  }
  if (uVar55 <= uVar89) goto LAB_035575f4;
  lVar42 = lVar39 + lVar29 * 0x178;
  fVar61 = *(float *)(lVar42 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar42 + 0x5c) == '\0') && ((*(byte *)(lVar39 + lVar29 * 0x178 + 400) & 1) != 0)) {
    fVar61 = -fVar61;
  }
  fVar87 = fVar85;
  if (((iVar22 == 2) || (fVar87 = fVar72, iVar22 == 1)) || (fVar87 = fVar85 / fVar62, iVar22 == 0))
  {
    fVar61 = fVar87 * fVar61;
  }
  lVar42 = lVar39 + lVar29 * 0x178;
  fVar76 = *(float *)(lVar42 + 0x88);
  fVar75 = *(float *)(lVar42 + 0x84);
  fVar87 = -2.1474836e+09;
  if (fVar75 != INFINITY) {
    fVar87 = (float)(int)fVar75;
  }
  fVar65 = *(float *)(lVar42 + 0xd4);
  fVar67 = *(float *)(lVar42 + 0xd8);
  fVar73 = -2.1474836e+09;
  if (fVar76 != INFINITY) {
    fVar73 = (float)(int)fVar76;
  }
  uVar86 = FUN_03591d3c(fVar75 - fVar87,fVar76 - fVar73);
  *(undefined4 *)(lVar42 + 0x84) = uVar86;
  if (*(uint *)(lVar39 + 0x18) <= uVar89) goto LAB_035575f4;
  fVar67 = fVar67 - fVar73;
  *(float *)(lVar42 + 0x88) = fVar61;
  uVar86 = FUN_03591d3c(fVar75 - fVar87,fVar67);
  *(undefined4 *)(lVar39 + lVar29 * 0x178 + 0xac) = uVar86;
  if (*(uint *)(lVar39 + 0x18) <= uVar89) goto LAB_035575f4;
  fVar65 = fVar65 - fVar87;
  *(float *)(lVar39 + lVar29 * 0x178 + 0xb0) = fVar61;
  fVar87 = (float)FUN_03591d3c(fVar65,fVar67);
  *(float *)(lVar42 + 0xd4) = fVar87;
  if (*(uint *)(lVar39 + 0x18) <= uVar89) goto LAB_035575f4;
  *(float *)(lVar42 + 0xd8) = fVar61;
  uVar86 = FUN_03591d3c(fVar65,fVar76 - fVar73);
  *(undefined4 *)(lVar39 + lVar29 * 0x178 + 0xfc) = uVar86;
  uVar55 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar55 <= uVar89) goto LAB_035575f4;
  *(float *)(lVar39 + lVar29 * 0x178 + 0x100) = fVar61;
LAB_0355574c:
  if (((int)uVar89 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar19 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar55 <= uVar89) goto LAB_035575f4;
      lVar35 = lVar39 + lVar29 * 0x178;
      *(ulong *)(lVar35 + 0x70) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar35 + 0x70));
      *(float *)(lVar35 + 0x78) = fVar90 + *(float *)(lVar35 + 0x78);
      *(ulong *)(lVar35 + 0x98) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar35 + 0x98));
      *(float *)(lVar35 + 0xa0) = fVar90 + *(float *)(lVar35 + 0xa0);
      *(ulong *)(lVar35 + 0xc0) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0xc0) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar35 + 0xc0));
      *(float *)(lVar35 + 200) = fVar90 + *(float *)(lVar35 + 200);
      *(ulong *)(lVar35 + 0xe8) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0xe8) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar35 + 0xe8));
      *(float *)(lVar35 + 0xf0) = fVar90 + *(float *)(lVar35 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar19 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar89 < uVar55) {
        if (*(uint *)(lVar39 + lVar29 * 0x178 + 0x68) == uVar4) {
          lVar35 = lVar39 + lVar29 * 0x178;
          *(ulong *)(lVar35 + 0x70) =
               CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20),
                        fVar63 + (float)*(undefined8 *)(lVar35 + 0x70));
          *(float *)(lVar35 + 0x78) = fVar90 + *(float *)(lVar35 + 0x78);
          *(ulong *)(lVar35 + 0x98) =
               CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20),
                        fVar63 + (float)*(undefined8 *)(lVar35 + 0x98));
          *(float *)(lVar35 + 0xa0) = fVar90 + *(float *)(lVar35 + 0xa0);
          *(ulong *)(lVar35 + 0xc0) =
               CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0xc0) >> 0x20),
                        fVar63 + (float)*(undefined8 *)(lVar35 + 0xc0));
          *(float *)(lVar35 + 200) = fVar90 + *(float *)(lVar35 + 200);
          *(ulong *)(lVar35 + 0xe8) =
               CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0xe8) >> 0x20),
                        fVar63 + (float)*(undefined8 *)(lVar35 + 0xe8));
          *(float *)(lVar35 + 0xf0) = fVar90 + *(float *)(lVar35 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar55 <= uVar89) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar55 = *(uint *)(lVar39 + 0x18);
  }
  puVar12 = PTR_DAT_03cbded8;
  uVar86 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar42 = lVar39 + lVar29 * 0x178;
  *(undefined8 *)(lVar42 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar42 + 0x78) = uVar86;
  if (uVar55 <= uVar89) goto LAB_035575f4;
  uVar86 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  lVar42 = lVar39 + lVar29 * 0x178;
  *(undefined8 *)(lVar42 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar42 + 0xa0) = uVar86;
  uVar86 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar42 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar42 + 200) = uVar86;
  uVar86 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar42 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar42 + 0xf0) = uVar86;
  *(undefined1 *)(lVar35 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar23 == 0) {
    pcVar44 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar44)();
  }
  else if (iVar23 == 1) {
    pcVar44 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar35 = lVar35 + lVar29 * 0x178;
  uVar34 = *(undefined8 *)(lVar35 + 0x11c);
  *(undefined8 *)(lVar35 + 0x11c) =
       CONCAT44(fVar71 + (float)((ulong)uVar34 >> 0x20),fVar63 + (float)uVar34);
  *(float *)(lVar35 + 0x124) = fVar90 + *(float *)(lVar35 + 0x124);
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar35 = lVar35 + lVar29 * 0x178;
  *(ulong *)(lVar35 + 0x110) =
       CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0x110) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar35 + 0x110));
  *(float *)(lVar35 + 0x118) = fVar90 + *(float *)(lVar35 + 0x118);
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar35 = lVar35 + lVar29 * 0x178;
  *(ulong *)(lVar35 + 0x128) =
       CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar35 + 0x128) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar35 + 0x128));
  *(float *)(lVar35 + 0x130) = fVar90 + *(float *)(lVar35 + 0x130);
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
  lVar35 = lVar35 + lVar29 * 0x178;
  *(float *)(lVar35 + 0x134) = fVar63 + *(float *)(lVar35 + 0x134);
  *(ulong *)(lVar35 + 0x138) =
       CONCAT44(fVar90 + (float)((ulong)*(undefined8 *)(lVar35 + 0x138) >> 0x20),
                fVar71 + (float)*(undefined8 *)(lVar35 + 0x138));
  lVar35 = *plVar3;
  if ((lVar35 == 0) || (lVar42 = *(long *)(lVar35 + 0x38), lVar42 == 0)) goto LAB_035574b8;
  uVar55 = *(uint *)(lVar42 + 0x18);
  if (uVar55 <= uVar89) goto LAB_035575f4;
  lVar47 = lVar42 + lVar29 * 0x178;
  uVar70 = CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar47 + 0x140) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar47 + 0x140));
  fVar87 = fVar71 + *(float *)(lVar47 + 0x150);
  uVar28 = (ulong)(uint)fVar87;
  uVar30 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar47 + 0x148) >> 0x20),
                    fVar71 + (float)*(undefined8 *)(lVar47 + 0x148));
  *(float *)(lVar47 + 0x150) = fVar87;
  *(ulong *)(lVar47 + 0x140) = uVar70;
  *(ulong *)(lVar47 + 0x148) = uVar30;
  if (uVar19 == uVar20) {
    uVar20 = *puVar1 - 1;
    if (uVar89 == uVar20) goto LAB_03555b44;
  }
  else {
    lVar35 = *(long *)(lVar35 + 0x50);
    if (lVar35 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
    lVar47 = (long)(int)uVar20;
    lVar49 = lVar35 + lVar47 * 0x5c;
    uVar30 = (ulong)(uint)*(float *)(lVar49 + 0x58);
    fVar87 = fVar71 + *(float *)(lVar49 + 0x54);
    uVar70 = (ulong)(uint)fVar87;
    fVar76 = fVar63 + *(float *)(lVar49 + 0x58);
    uVar28 = (ulong)(uint)fVar76;
    *(ulong *)(lVar49 + 0x4c) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar49 + 0x4c) >> 0x20),
                  fVar71 + (float)*(undefined8 *)(lVar49 + 0x4c));
    *(float *)(lVar49 + 0x54) = fVar87;
    *(float *)(lVar49 + 0x58) = fVar76;
    if (uVar55 <= *(uint *)(lVar49 + 0x34)) goto LAB_035575f4;
    uVar86 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar49 + 0x34) * 0x178 + 0x11c);
    lVar35 = lVar35 + lVar47 * 0x5c;
    *(float *)(lVar35 + 0x70) = fVar87;
    *(undefined4 *)(lVar35 + 0x6c) = uVar86;
    lVar35 = *plVar3;
    if ((lVar35 == 0) || (lVar42 = *(long *)(lVar35 + 0x50), lVar42 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar20) goto LAB_035575f4;
    lVar35 = *(long *)(lVar35 + 0x38);
    if (lVar35 == 0) goto LAB_035574b8;
    uVar20 = *(uint *)(lVar42 + lVar47 * 0x5c + 0x40);
    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
    lVar42 = lVar42 + lVar47 * 0x5c;
    *(undefined4 *)(lVar42 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar20 * 0x178 + 0x128);
    *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar42 + 0x4c);
    uVar20 = *puVar1 - 1;
LAB_03555b44:
    if (uVar89 == uVar20) {
      lVar35 = *plVar3;
      if ((lVar35 == 0) || (lVar42 = *(long *)(lVar35 + 0x50), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar19) goto LAB_035575f4;
      lVar47 = lVar42 + lVar50 * 0x5c;
      uVar30 = (ulong)(uint)*(float *)(lVar47 + 0x58);
      uVar70 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar47 + 0x4c) >> 0x20),
                        fVar71 + (float)*(undefined8 *)(lVar47 + 0x4c));
      fVar87 = fVar71 + *(float *)(lVar47 + 0x54);
      fVar63 = fVar63 + *(float *)(lVar47 + 0x58);
      uVar28 = (ulong)(uint)fVar63;
      *(ulong *)(lVar47 + 0x4c) = uVar70;
      *(float *)(lVar47 + 0x54) = fVar87;
      *(float *)(lVar47 + 0x58) = fVar63;
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar47 + 0x34)) goto LAB_035575f4;
      uVar86 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar47 + 0x34) * 0x178 + 0x11c);
      lVar42 = lVar42 + lVar50 * 0x5c;
      *(float *)(lVar42 + 0x70) = fVar87;
      *(undefined4 *)(lVar42 + 0x6c) = uVar86;
      lVar35 = *plVar3;
      if ((lVar35 == 0) || (lVar42 = *(long *)(lVar35 + 0x50), lVar42 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar19) goto LAB_035575f4;
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      uVar20 = *(uint *)(lVar42 + lVar50 * 0x5c + 0x40);
      if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar42 = lVar42 + lVar50 * 0x5c;
      *(undefined4 *)(lVar42 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar20 * 0x178 + 0x128);
      *(undefined4 *)(lVar42 + 0x78) = *(undefined4 *)(lVar42 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar26 = FUN_026b82c4(uVar45,0);
  if (((((uVar26 & 1) == 0) && (1 < uVar45 - 0x2010)) && (uVar45 != 0xad)) && (uVar45 != 0x2d)) {
    if (bVar10) {
      if (((uVar25 != 1) && ((int)uVar89 < (int)(*(uint *)(lVar39 + 0x18) - 1))) &&
         (((int)uVar89 < (int)*puVar1 && ((uVar45 == 0x2019 || (uVar45 == 0x27)))))) {
        if (*(uint *)(lVar39 + 0x18) <= uVar25 - 2) goto LAB_035575f4;
        uVar7 = *(undefined2 *)(lVar39 + lVar33 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b82c4(uVar7,0);
        if ((uVar26 & 1) != 0) {
          if (*(uint *)(lVar39 + 0x18) <= uVar25) goto LAB_035575f4;
          uVar7 = *(undefined2 *)(lVar39 + lVar33 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b82c4(uVar7,0);
          if ((uVar26 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar25 != 1) {
LAB_0355686c:
        bVar10 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b81f8(uVar45,0);
      if ((uVar26 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b63d8(uVar45,0);
        if (((uVar45 != 0x200b) && ((uVar26 & 1) == 0)) && (*puVar1 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar89 == *puVar1 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b82c4(uVar45,0);
      iVar23 = iStack0000000000000128;
      if ((uVar26 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar23 = uVar25 - 2;
    }
    lVar35 = *plVar3;
    if (lVar35 == 0) goto LAB_035574b8;
    lVar42 = *(long *)(lVar35 + 0x40);
    if (lVar42 == 0) goto LAB_035574b8;
    uVar20 = *(uint *)(lVar35 + 0x24);
    iVar24 = *(int *)(lVar42 + 0x18);
    if (iVar24 < (int)(uVar20 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar35 + 0x40),iVar24 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar35 = *plVar3;
      if (lVar35 == 0) goto LAB_035574b8;
    }
    lVar35 = *(long *)(lVar35 + 0x40);
    if (lVar35 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
    lVar35 = lVar35 + (long)(int)uVar20 * 0x18;
    *(long **)(lVar35 + 0x20) = unaff_x19;
    *(float *)(lVar35 + 0x28) = fStack0000000000000158;
    *(int *)(lVar35 + 0x2c) = iVar23;
    *(int *)(lVar35 + 0x30) = (iVar23 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar35 = unaff_x19[0x6d];
    if (lVar35 == 0) goto LAB_035574b8;
    lVar42 = *(long *)(lVar35 + 0x50);
    *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
    if (lVar42 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar42 + 0x18) <= uVar19) goto LAB_035575f4;
    lVar42 = lVar42 + lVar50 * 0x5c;
    bVar10 = false;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar42 + 0x30) = *(int *)(lVar42 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      fStack0000000000000158 = (float)uVar89;
    }
    if (uVar89 == *puVar1 - 1) {
      lVar35 = *plVar3;
      if (lVar35 == 0) goto LAB_035574b8;
      lVar42 = *(long *)(lVar35 + 0x40);
      if (lVar42 == 0) goto LAB_035574b8;
      uVar20 = *(uint *)(lVar35 + 0x24);
      iVar23 = *(int *)(lVar42 + 0x18);
      if (iVar23 < (int)(uVar20 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar35 + 0x40),iVar23 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar35 = *plVar3;
        if (lVar35 == 0) goto LAB_035574b8;
      }
      lVar35 = *(long *)(lVar35 + 0x40);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar20) goto LAB_035575f4;
      lVar35 = lVar35 + (long)(int)uVar20 * 0x18;
      *(long **)(lVar35 + 0x20) = unaff_x19;
      *(float *)(lVar35 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar35 + 0x2c) = uVar89;
      *(uint *)(lVar35 + 0x30) = uVar25 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar35 = unaff_x19[0x6d];
      if (lVar35 == 0) goto LAB_035574b8;
      lVar42 = *(long *)(lVar35 + 0x50);
      *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
      if (lVar42 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar42 + 0x18) <= uVar19) goto LAB_035575f4;
      lVar42 = lVar42 + lVar50 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar42 + 0x30) = *(int *)(lVar42 + 0x30) + 1;
    }
LAB_03555d68:
    bVar10 = true;
  }
LAB_03555d70:
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  uVar20 = *(uint *)(lVar35 + 0x18);
  if (uVar20 <= uVar89) goto LAB_035575f4;
  if ((*(byte *)(lVar35 + lVar29 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar16) {
LAB_03555da0:
      if (uVar20 <= uVar25 - 2) goto LAB_035575f4;
      lVar50 = *unaff_x19;
      uVar20 = *(uint *)(lVar35 + lVar33 + -0x330);
      uVar86 = *(undefined4 *)(lVar35 + lVar33 + -0x2f8);
LAB_035562ec:
      pcVar44 = *(code **)(lVar50 + 0x8d8);
LAB_035562f4:
      uVar30 = (ulong)uVar20;
      uVar70 = (ulong)(uint)fStack0000000000000070;
      uVar28 = (ulong)(uint)fStack0000000000000074;
      (*pcVar44)(fVar58,uVar70,uVar28,uVar30,fStack0000000000000104,0,fStack000000000000008c,uVar86)
      ;
      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar12;
      }
LAB_03556348:
      bVar16 = false;
      fVar56 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar35 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar16 = false;
    }
  }
  else {
    lVar35 = lVar35 + lVar29 * 0x178;
    iVar23 = *(int *)(lVar35 + 0x68);
    *(int *)(lVar35 + 0x16c) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar89) || ((int)unaff_x19[0x66] < (int)uVar19)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar23 + 1 != (int)unaff_x19[0x67])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar26 = FUN_026b63d8(uVar45,0);
    if ((uVar45 != 0x200b) && ((uVar26 & 1) == 0)) {
      lVar35 = *plVar3;
      if ((lVar35 == 0) || (lVar50 = *(long *)(lVar35 + 0x38), lVar50 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar50 + 0x18) <= uVar89) goto LAB_035575f4;
      fVar87 = *(float *)(lVar50 + lVar29 * 0x178 + 0x160);
      if (fVar56 <= fVar87) {
        fVar56 = fVar87;
      }
      if (fStack0000000000000100 <= ABS(fVar61)) {
        fStack0000000000000100 = ABS(fVar61);
      }
      if (iVar23 != iStack000000000000006c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar35 = *plVar3;
          if (lVar35 == 0) goto LAB_035574b8;
          lVar50 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar50 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar50 + 0x15a8);
      }
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar76 = *(float *)(lVar35 + lVar29 * 0x178 + 0x14c);
      fVar87 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar76 = fVar76 + fVar56 * fVar87;
      if (fVar76 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar76;
      }
      uVar70 = (ulong)(uint)fStack0000000000000104;
      iStack000000000000006c = iVar23;
    }
    if (!bVar16) {
      bVar16 = false;
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar21 < (int)uVar89)) ||
         ((bool)(bVar15 ^ 1))) goto LAB_03556364;
      if (uVar89 == uVar21) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b97f8(uVar45,0);
        if ((uVar26 & 1) != 0) goto LAB_03556254;
      }
      if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
      lVar35 = lVar35 + lVar29 * 0x178;
      fStack000000000000008c = *(float *)(lVar35 + 0x160);
      fVar58 = *(float *)(lVar35 + 0x11c);
      uVar28 = (ulong)(uint)fVar58;
      bVar16 = fVar56 != 0.0;
      fVar87 = fStack000000000000008c;
      if (bVar16) {
        fVar87 = fVar56;
      }
      fVar56 = fVar87;
      uVar18 = *(undefined4 *)(lVar35 + 0x168);
      fStack0000000000000074 = 0.0;
      fVar87 = fVar61;
      if (bVar16) {
        fVar87 = fStack0000000000000100;
      }
      uVar70 = (ulong)(uint)fVar87;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar87;
    }
    if (*puVar1 == 1) {
      if ((*plVar3 != 0) && (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 != 0)) {
        if (uVar89 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar29 * 0x178;
          lVar50 = *unaff_x19;
          uVar20 = *(uint *)(lVar35 + 0x128);
          uVar86 = *(undefined4 *)(lVar35 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar89 == uVar38) || ((int)uVar21 <= (int)uVar89)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b63d8(uVar45,0);
      if ((*plVar3 != 0) && (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 != 0)) {
        lVar50 = lVar29;
        uVar20 = uVar89;
        if (uVar45 == 0x200b || (uVar26 & 1) != 0) {
          lVar50 = lVar54;
          uVar20 = uVar21;
        }
        if (uVar20 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar50 * 0x178;
          uVar20 = *(uint *)(lVar35 + 0x128);
          uVar86 = *(undefined4 *)(lVar35 + 0x160);
          pcVar44 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar15) {
      if ((*plVar3 != 0) && (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 != 0)) {
        uVar20 = *(uint *)(lVar35 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar89 < (int)(*puVar1 - 1)) {
      if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar25) goto LAB_035575f4;
      uVar26 = FUN_03567ad8(uVar18,*(undefined4 *)(lVar35 + lVar33),0);
      if ((uVar26 & 1) == 0) {
        if ((*plVar3 != 0) && (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 != 0)) {
          if (uVar89 < *(uint *)(lVar35 + 0x18)) {
            lVar35 = lVar35 + lVar29 * 0x178;
            uVar30 = (ulong)*(uint *)(lVar35 + 0x128);
            uVar28 = (ulong)(uint)fStack0000000000000074;
            uVar70 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar58,uVar70,uVar28,uVar30,fStack0000000000000104,0,fStack000000000000008c,
                       *(undefined4 *)(lVar35 + 0x160));
            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar35 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar35 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar35 = *(long *)puVar12;
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
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
  if (lVar48 == 0) goto LAB_035574b8;
  uVar20 = *(uint *)(lVar35 + lVar29 * 0x178 + 400);
  fVar87 = (float)FUN_03776a30(lVar48 + 0x50,0);
  if ((uVar20 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar25 - 2) goto LAB_035575f4;
      uVar20 = *(uint *)(lVar35 + lVar33 + -0x330);
      fVar71 = *(float *)(lVar35 + lVar33 + -0x30c);
      pcVar44 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar30 = (ulong)uVar20;
      uVar70 = (ulong)(uint)fStack000000000000009c;
      uVar28 = (ulong)(uint)fStack0000000000000098;
      (*pcVar44)(fVar57,uVar70,uVar28,uVar30,fVar59 * fVar87 + fVar71,0,fVar59,fVar59);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar35 = *plVar3;
    if ((lVar35 == 0) || (lVar50 = *(long *)(lVar35 + 0x38), lVar50 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar50 + 0x18) <= uVar89) goto LAB_035575f4;
    *(int *)(lVar50 + lVar29 * 0x178 + 0x174) = iVar17;
    if ((((int)unaff_x19[0x65] < (int)uVar89) || ((int)unaff_x19[0x66] < (int)uVar19)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar50 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar21 < (int)uVar89)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar15)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar89 == uVar21) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b97f8(uVar45,0);
        if ((uVar26 & 1) != 0) goto LAB_035564e8;
        lVar35 = *plVar3;
        if (lVar35 == 0) goto LAB_035574b8;
      }
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar89) goto LAB_035575f4;
      lVar35 = lVar35 + lVar29 * 0x178;
      fVar60 = *(float *)(lVar35 + 0x60);
      fStack000000000000009c = *(float *)(lVar35 + 0x14c);
      uVar70 = (ulong)(uint)fStack000000000000009c;
      fVar57 = *(float *)(lVar35 + 0x11c);
      uVar28 = (ulong)(uint)fVar57;
      fVar59 = *(float *)(lVar35 + 0x160);
      uStack0000000000000038 = (ulong)(uint)fStack000000000000009c;
      fStack000000000000009c = fVar87 * fVar59 + fStack000000000000009c;
      fStack0000000000000098 = 0.0;
    }
    uVar20 = *puVar1;
    if (uVar20 == 1) {
LAB_03556628:
      if ((*plVar3 != 0) && (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 != 0)) {
        if (uVar89 < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + lVar29 * 0x178;
          lVar54 = *unaff_x19;
          uVar20 = *(uint *)(lVar35 + 0x128);
          fVar71 = *(float *)(lVar35 + 0x14c);
LAB_03556654:
          pcVar44 = *(code **)(lVar54 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar89 == uVar38) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar26 = FUN_026b63d8(uVar45,0);
      if ((*plVar3 != 0) && (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 != 0)) {
        uVar20 = *(uint *)(lVar35 + 0x18);
        if (uVar45 == 0x200b || (uVar26 & 1) != 0) {
          if (uVar20 <= uVar21) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar54 = lVar29;
          if (uVar20 <= uVar89) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar35 = lVar35 + lVar54 * 0x178;
        fVar71 = *(float *)(lVar35 + 0x14c);
        uVar20 = *(uint *)(lVar35 + 0x128);
        pcVar44 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar89 < (int)uVar20) {
      lVar35 = *plVar3;
      if ((lVar35 != 0) && (lVar50 = *(long *)(lVar35 + 0x38), lVar50 != 0)) {
        if (uVar25 < *(uint *)(lVar50 + 0x18)) {
          if (*(float *)(lVar50 + lVar33 + -0x108) == fVar60) {
            fVar76 = *(float *)(lVar50 + lVar33 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar70 = uStack0000000000000038;
            uVar26 = FUN_03567bac(fVar71 + fVar76,uStack0000000000000038,0);
            if ((uVar26 & 1) != 0) {
              uVar20 = *puVar1;
              goto LAB_03556744;
            }
            lVar35 = *plVar3;
            if (lVar35 == 0) goto LAB_035574b8;
          }
          lVar35 = *(long *)(lVar35 + 0x38);
          if (lVar35 != 0) {
            uVar20 = *(uint *)(lVar35 + 0x18);
            if ((int)uVar89 <= (int)uVar21) goto FUN_035568e8;
            if (uVar21 < uVar20) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar89 < (int)uVar20) {
      iVar23 = FUN_036d3364(lVar48,0);
      if (*(uint *)(lVar39 + 0x18) <= uVar25) goto LAB_035575f4;
      lVar35 = *(long *)(lVar39 + lVar33 + -0x130);
      if (lVar35 == 0) goto LAB_035574b8;
      iVar24 = FUN_036d3364(lVar35,0);
      if (iVar23 != iVar24) goto LAB_03556628;
    }
    if (!bVar15) {
      if ((*plVar3 != 0) && (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 != 0)) {
        if (uVar25 - 2 < *(uint *)(lVar35 + 0x18)) {
          lVar54 = *unaff_x19;
          uVar20 = *(uint *)(lVar35 + lVar33 + -0x330);
          fVar71 = *(float *)(lVar35 + lVar33 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  uVar20 = (uint)*(undefined8 *)(lVar35 + 0x18);
  if (uVar20 <= uVar89) goto LAB_035575f4;
  if ((*(byte *)(lVar35 + lVar29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar28 = (ulong)(uint)fStack00000000000000c0;
      uVar70 = (ulong)(uint)fStack00000000000000dc;
      uVar30 = (ulong)(uint)fVar81;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar70,uVar28,uVar30,fStack00000000000000d0,uVar28);
    }
LAB_035569b4:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar89) || ((int)unaff_x19[0x66] < (int)uVar19)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar35 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (!bVar9) {
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar21 < (int)uVar89)) ||
         (!bVar15)) goto LAB_035569b4;
      if (uVar89 == uVar21) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar26 = FUN_026b97f8(uVar45,0);
        if ((uVar26 & 1) != 0) goto LAB_035569b4;
      }
      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar54 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar54 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar54 = *(long *)puVar12;
      }
      if ((*plVar3 == 0) || (lVar35 = *(long *)(*plVar3 + 0x38), lVar35 == 0)) goto LAB_035574b8;
      uVar20 = (uint)*(undefined8 *)(lVar35 + 0x18);
      if (uVar20 <= uVar89) goto LAB_035575f4;
      lVar54 = *(long *)(lVar54 + 0xb8);
      lVar48 = lVar35 + lVar29 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar48 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar48 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar54 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar54 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar48 + 0x18c);
      fVar81 = *(float *)(lVar54 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar54 + 0x15a4);
      fStack00000000000000c0 = 0.0;
    }
    if (uVar20 <= uVar89) goto LAB_035575f4;
    lVar35 = lVar35 + lVar29 * 0x178;
    fVar87 = *(float *)(lVar35 + 0x128);
    fVar73 = *(float *)(lVar35 + 0x188);
    uVar27 = *(undefined8 *)(lVar35 + 0x17c);
    fVar65 = *(float *)(lVar35 + 0x184);
    uVar34 = *(undefined8 *)(lVar35 + 0x184);
    fVar90 = *(float *)(lVar35 + 0x18c);
    fVar71 = *(float *)(lVar35 + 0x11c);
    fVar75 = *(float *)(lVar35 + 0x148);
    fVar76 = *(float *)(lVar35 + 0x150);
    in_stack_00000178 = uVar27;
    fStack0000000000000180 = fVar65;
    fStack0000000000000184 = fVar73;
    in_stack_00000188 = fVar90;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar26 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar35 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar26 & 1) == 0) {
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar35);
      }
      fVar87 = fVar87 + (float)in_stack_000017b8;
      uVar28 = (ulong)(uint)fVar87;
      fVar71 = fVar71 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar76 = fVar76 - in_stack_000017c0;
      uVar70 = (ulong)(uint)fVar76;
      fVar75 = fVar75 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar30 = (ulong)(uint)fVar75;
      if (fVar71 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar71;
      }
      if (fVar76 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar76;
      }
      if (fVar81 <= fVar87) {
        fVar81 = fVar87;
      }
      if (fStack00000000000000d0 <= fVar75) {
        fStack00000000000000d0 = fVar75;
      }
    }
    else {
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar35);
      }
      fVar71 = (fVar71 + (fVar81 - (float)in_stack_000017b8)) * 0.5;
      uVar30 = (ulong)(uint)fVar71;
      if (fVar76 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar76;
      }
      uVar70 = (ulong)(uint)fStack00000000000000dc;
      uVar28 = (ulong)(uint)fStack00000000000000c0;
      if (fStack00000000000000d0 <= fVar75) {
        fStack00000000000000d0 = fVar75;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar70,uVar28,uVar30,fStack00000000000000d0,uVar28);
      fStack00000000000000dc = fVar76 - fVar90;
      fVar81 = fVar87 + fVar65;
      fStack00000000000000c0 = 0.0;
      fStack00000000000000d0 = fVar75 + fVar73;
      fStack00000000000000d8 = fVar71;
      in_stack_000017b0 = uVar27;
      in_stack_000017b8 = uVar34;
      in_stack_000017c0 = fVar90;
    }
    if (((*puVar1 == 1) || (uVar89 == uVar38)) || (((int)uVar21 <= (int)uVar89 || (!bVar15)))) {
      uVar28 = (ulong)(uint)fStack00000000000000c0;
      uVar70 = (ulong)(uint)fStack00000000000000dc;
      uVar30 = (ulong)(uint)fVar81;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar70,uVar28,uVar30,fStack00000000000000d0,uVar28);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar89 = *puVar1;
  lVar33 = lVar33 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar15 = (int)uVar89 <= (int)uVar25;
  uVar25 = uVar25 + 1;
  uVar20 = uVar19;
  if (bVar15) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar39 = *plVar3;
  if (lVar39 == 0) goto LAB_035574b8;
  iVar17 = uVar19 + 1;
  plVar53 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
  *(uint *)(lVar39 + 0x18) = uVar89;
  lVar33 = unaff_x19[0xd4];
  *(int *)(lVar39 + 0x2c) = iVar17;
  if ((int)uVar89 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(lVar39 + 0x1c) = (int)lVar33;
  *(int *)(lVar39 + 0x24) = iStack00000000000000d4;
  *(int *)(lVar39 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar26 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar26 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar39 = unaff_x19[0xdf];
  if (lVar39 != 0) {
    (**(code **)(lVar39 + 0x18))
              (*(undefined8 *)(lVar39 + 0x40),*plVar3,*(undefined8 *)(lVar39 + 0x28));
  }
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  iVar17 = FUN_03911ee4(unaff_x19[0xe5],0);
  if (iVar17 != 0x19) {
    lVar39 = unaff_x19[0xe5];
    if (lVar39 == 0) goto LAB_035574b8;
    uVar89 = FUN_03911ee4(lVar39,0);
    FUN_03911f20(lVar39,uVar89 | 0x19,0);
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*plVar3 == 0) || (lVar39 = *(long *)(*plVar3 + 0x60), lVar39 == 0)) goto LAB_035574b8;
    if (*(int *)(*plVar53 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar39 + 0x18) == 0) goto LAB_035575f4;
    FUN_03596b20(lVar39 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar39 = *(long *)(unaff_x19[0x6d] + 0x60), lVar39 != 0)) {
      if (*(int *)(lVar39 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar39 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar39 = *(long *)(unaff_x19[0x6d] + 0x60), lVar39 != 0)) {
          if (*(int *)(lVar39 + 0x18) == 0) goto LAB_035575f4;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar39 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar39 = *(long *)(unaff_x19[0x6d] + 0x60), lVar39 != 0))
            {
              if (*(int *)(lVar39 + 0x18) == 0) goto LAB_035575f4;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar39 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar39 = *(long *)(unaff_x19[0x6d] + 0x60), lVar39 != 0)) {
                  if (*(int *)(lVar39 + 0x18) == 0) goto LAB_035575f4;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar39 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      if (unaff_x19[0xe4] != 0) {
                        FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          uVar34 = FUN_0390ef60(unaff_x19[0xe4],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar89 = FUN_0390ed3c(unaff_x19[0xe4],0);
                            lVar39 = *plVar3;
                            if (lVar39 != 0) {
                              lVar35 = 0;
                              lVar33 = 0;
                              do {
                                uVar26 = lVar33 + 1;
                                if ((long)*(int *)(lVar39 + 0x34) <= (long)uVar26)
                                goto LAB_03554724;
                                lVar39 = *(long *)(lVar39 + 0x60);
                                if (lVar39 == 0) break;
                                if (*(int *)(*plVar53 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                FUN_03596a20(lVar39 + lVar35 + 0x70,0);
                                lVar39 = unaff_x19[0xe1];
                                if (lVar39 == 0) break;
                                if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                uVar27 = *(undefined8 *)(lVar39 + lVar33 * 8 + 0x28);
                                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar32 = FUN_036d35a8(uVar27,0,0);
                                if ((uVar32 & 1) == 0) {
                                  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                    if ((*plVar3 == 0) ||
                                       (lVar39 = *(long *)(*plVar3 + 0x60), lVar39 == 0)) break;
                                    if (*(int *)(*plVar53 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                    FUN_03596b20(lVar39 + lVar35 + 0x70,1,0);
                                  }
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if (lVar39 == 0) break;
                                  lVar39 = UnityEngine_Material__GetColorArray(lVar39,0);
                                  if ((*plVar3 == 0) ||
                                     (lVar54 = *(long *)(*plVar3 + 0x60), lVar54 == 0)) break;
                                  if (*(uint *)(lVar54 + 0x18) <= uVar26) goto LAB_035575f4;
                                  if (lVar39 == 0) break;
                                  FUN_036a460c(lVar39,*(undefined8 *)(lVar54 + lVar35 + 0x80),0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if (lVar39 == 0) break;
                                  lVar39 = UnityEngine_Material__GetColorArray(lVar39,0);
                                  if ((*plVar3 == 0) ||
                                     (lVar54 = *(long *)(*plVar3 + 0x60), lVar54 == 0)) break;
                                  if (*(uint *)(lVar54 + 0x18) <= uVar26) goto LAB_035575f4;
                                  if (lVar39 == 0) break;
                                  FUN_036a4810(lVar39,*(undefined8 *)(lVar54 + lVar35 + 0x98),0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if (lVar39 == 0) break;
                                  lVar39 = UnityEngine_Material__GetColorArray(lVar39,0);
                                  if ((*plVar3 == 0) ||
                                     (lVar54 = *(long *)(*plVar3 + 0x60), lVar54 == 0)) break;
                                  if (*(uint *)(lVar54 + 0x18) <= uVar26) goto LAB_035575f4;
                                  if (lVar39 == 0) break;
                                  FUN_036a48bc(lVar39,*(undefined8 *)(lVar54 + lVar35 + 0xa0),0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if (lVar39 == 0) break;
                                  lVar39 = UnityEngine_Material__GetColorArray(lVar39,0);
                                  if ((*plVar3 == 0) ||
                                     (lVar54 = *(long *)(*plVar3 + 0x60), lVar54 == 0)) break;
                                  if (*(uint *)(lVar54 + 0x18) <= uVar26) goto LAB_035575f4;
                                  if (lVar39 == 0) break;
                                  FUN_036a4e24(lVar39,*(undefined8 *)(lVar54 + lVar35 + 0xa8),0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if ((lVar39 == 0) ||
                                     (lVar39 = UnityEngine_Material__GetColorArray(lVar39,0),
                                     lVar39 == 0)) break;
                                  FUN_036aa280(lVar39,0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if (lVar39 == 0) break;
                                  lVar39 = FUN_037b514c(lVar39,0);
                                  lVar54 = unaff_x19[0xe1];
                                  if (lVar54 == 0) break;
                                  if (*(uint *)(lVar54 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar54 = *(long *)(lVar54 + lVar33 * 8 + 0x28);
                                  if ((lVar54 == 0) ||
                                     (uVar27 = UnityEngine_Material__GetColorArray(lVar54,0),
                                     lVar39 == 0)) break;
                                  FUN_0390f3a4(lVar39,uVar27,0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if ((lVar39 == 0) ||
                                     (lVar39 = FUN_037b514c(lVar39,0), lVar39 == 0)) break;
                                  FUN_0390eec8(uVar34,uVar70,uVar28,uVar30,lVar39,0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  lVar39 = *(long *)(lVar39 + lVar33 * 8 + 0x28);
                                  if ((lVar39 == 0) ||
                                     (lVar39 = FUN_037b514c(lVar39,0), lVar39 == 0)) break;
                                  FUN_0390ed78(lVar39,uVar89 & 1,0);
                                  lVar39 = unaff_x19[0xe1];
                                  if (lVar39 == 0) break;
                                  if (*(uint *)(lVar39 + 0x18) <= uVar26) goto LAB_035575f4;
                                  plVar51 = *(long **)(lVar39 + lVar33 * 8 + 0x28);
                                  uVar25 = (**(code **)(*unaff_x19 + 0x2b8))();
                                  if (plVar51 == (long *)0x0) break;
                                  (**(code **)(*plVar51 + 0x2c8))
                                            (plVar51,uVar25 & 1,*(undefined8 *)(*plVar51 + 0x2d0));
                                }
                                lVar39 = *plVar3;
                                lVar33 = lVar33 + 1;
                                lVar35 = lVar35 + 0x50;
                              } while (lVar39 != 0);
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
  goto LAB_035574b8;
}


