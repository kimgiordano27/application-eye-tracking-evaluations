/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$SetSByteField
ENTRY_POINT: 03548a7c
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


void UnityEngine_AndroidJNISafe__SetSByteField(undefined1 param_1 [16],undefined1 param_2 [16])

{
  bool bVar1;
  uint *puVar2;
  ulong *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  int *piVar31;
  undefined8 uVar32;
  undefined1 uVar33;
  char cVar34;
  uint uVar35;
  long lVar36;
  float *pfVar37;
  undefined4 *puVar38;
  uint uVar39;
  float *pfVar40;
  code *pcVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar48;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
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
  ulong uVar69;
  float fVar70;
  undefined4 uVar71;
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
  long *in_stack_00000170;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  long in_stack_00001708;
  uint in_stack_0000179c;
  uint uVar86;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float fVar87;
  
  unaff_x24[1] = param_2._8_8_;
  *unaff_x24 = param_2._0_8_;
  FUN_03557f30();
  puVar12 = OVRPlugin_OVRP_1_18_0_TypeInfo;
  lVar36 = *(long *)(*unaff_x20 + 0xb8);
  unaff_x24[0x77] = unaff_x24[1];
  unaff_x24[0x76] = *unaff_x24;
  unaff_x24[0x79] = unaff_x24[3];
  unaff_x24[0x78] = unaff_x24[2];
  uVar32 = *(undefined8 *)puVar12;
  unaff_x24[0x7b] = unaff_x24[5];
  unaff_x24[0x7a] = unaff_x24[4];
  FUN_0209aa94(lVar36 + 0x10,&stack0x00000c60,uVar32);
  plVar50 = unaff_x19 + 0xd3;
  unaff_x19[0xd3] = unaff_x19[0x36];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar50);
  lVar36 = unaff_x19[0x77];
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar24 = FUN_036cee6c(lVar36,0,0);
  if ((uVar24 & 1) != 0) {
    if (unaff_x19[0x77] == 0) goto LAB_0354fbf4;
    FUN_03599b08(unaff_x19[0x77],0);
  }
  if (unaff_x19[0x1f] != 0) {
    lVar36 = unaff_x19[0x92];
    fVar83 = *(float *)((long)unaff_x19 + 0x1e4);
    iVar16 = FUN_03776950(unaff_x19[0x1f] + 0x50,0);
    if (unaff_x19[0x1f] != 0) {
      fVar52 = (float)FUN_03776960(unaff_x19[0x1f] + 0x50,0);
      fVar78 = *(float *)((long)unaff_x19 + 0x1e4);
      *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
      *(float *)(unaff_x19 + 0x3d) = fVar78;
      puVar12 = OVRPlugin_OVRP_1_29_0_TypeInfo;
      fVar70 = DAT_00d389a8;
      fVar58 = DAT_00d389a8;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar58 = 1.0;
      }
      FUN_0209aa94(unaff_x19 + 0x3e,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
      *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
      if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
        uVar17 = (undefined4)unaff_x19[0x42];
      }
      else {
        uVar17 = 700;
      }
      *(undefined4 *)((long)unaff_x19 + 0x214) = uVar17;
      FUN_0209aa94(unaff_x19 + 0x43,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo);
      FUN_035a0500(unaff_x19 + 0x4c,0);
      *(undefined4 *)(unaff_x19 + 0x4f) = *(undefined4 *)((long)unaff_x19 + 0x26c);
      FUN_0209aa94(unaff_x19 + 0x50,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_15_0_TypeInfo);
      *(undefined4 *)((long)unaff_x19 + 0x61c) = 0;
      FUN_0209aa1c(unaff_x19 + 0xc4,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      pfVar37 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
      fStack00000000000000e0 = *pfVar37;
      fStack0000000000000068 = pfVar37[1];
      fStack000000000000006c = pfVar37[2];
      uVar17 = FUN_01b6d7fc((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                            (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0);
      *(undefined4 *)((long)unaff_x19 + 0x144) = uVar17;
      *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar17;
      *(undefined4 *)(unaff_x19 + 0x2b) = uVar17;
      *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar17;
      puVar13 = OVRPlugin_OVRP_1_16_0_TypeInfo;
      FUN_0209aa94(unaff_x19 + 0x9e,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
      FUN_0209aa94(unaff_x19 + 0xa2,&stack0x000008b0,*(undefined8 *)puVar13);
      FUN_0209aa94(unaff_x19 + 0xa6,&stack0x000008b0,*(undefined8 *)puVar13);
      puVar13 = OVRPlugin_Mesh_TypeInfo;
      uVar17 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412df1c == '\0') {
        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
        DAT_0412df1c = '\x01';
      }
      lVar25 = *(long *)puVar13;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar25 = *(long *)puVar13;
      }
      puVar38 = *(undefined4 **)(lVar25 + 0xb8);
      uVar24 = 0;
      FUN_035683a4(*puVar38,puVar38[1],puVar38[2],puVar38[3],&stack0x000008b0,uVar17,0);
      puVar13 = OVRPlugin_OVRP_1_12_0_TypeInfo;
      unaff_x24[0x73] = unaff_x24[1];
      unaff_x24[0x72] = *unaff_x24;
      FUN_0209aa94(unaff_x19 + 0xaa,&stack0x00000c40,*(undefined8 *)puVar13);
      unaff_x19[0xb0] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xb0,0);
      FUN_0209aa94(unaff_x19 + 0xb1,0,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
      if (unaff_x19[0x20] != 0) {
        *(uint *)(unaff_x19 + 0xbe) = (uint)*(byte *)(unaff_x19[0x20] + 0x1b8);
        FUN_0209aa94(unaff_x19 + 0xba,&stack0x00000c28,*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo)
        ;
        FUN_0209aa1c(unaff_x19 + 0xbf,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
        *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
        if (unaff_x19[0x20] != 0) {
          fVar53 = (float)FUN_03776970(unaff_x19[0x20] + 0x50,0);
          if (*unaff_x21 != 0) {
            fVar54 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
            if (*unaff_x21 != 0) {
              fVar55 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
              *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
              *(undefined4 *)(unaff_x19 + 200) = 0;
              unaff_x19[0x81] = 0;
              FUN_0209aa94(unaff_x19 + 0x82,&stack0x00000c28,*(undefined8 *)puVar12);
              *(undefined1 *)(unaff_x19 + 0x86) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
              *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
              *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
              puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar25 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar25 = *(long *)puVar12;
              }
              lVar26 = unaff_x19[0x6d];
              uVar32 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
              unaff_x19[0x95] = 0;
              unaff_x19[0x9a] = 0;
              *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
              lVar25 = NEON_rev64(uVar32,4);
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
              unaff_x19[0x99] = lVar25;
              *(undefined4 *)(unaff_x19 + 0x96) = 0;
              if ((lVar26 != 0) && (*(long *)(lVar26 + 0x58) != 0)) {
                uVar39 = (int)unaff_x19[0x67] - 1;
                uVar86 = *(int *)(*(long *)(lVar26 + 0x58) + 0x18) - 1;
                if ((int)uVar39 <= (int)uVar86) {
                  uVar86 = uVar39;
                }
                uVar5 = 0;
                if (-1 < (int)uVar39) {
                  uVar5 = uVar86;
                }
                FUN_035a02f4(lVar26,0);
                fVar56 = *(float *)(unaff_x19 + 0x68);
                *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
                fVar68 = *(float *)((long)unaff_x19 + 0x344);
                unaff_x19[0x6a] = 0;
                lVar25 = *(long *)puVar12;
                fVar57 = *(float *)((long)unaff_x19 + 0x34c);
                fVar84 = *(float *)(unaff_x19 + 0x6b);
                fVar72 = *(float *)((long)unaff_x19 + 0x35c);
                if (*(int *)(lVar25 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar25 = *(long *)puVar12;
                }
                *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                     *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x1598);
                *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                     *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a0);
                if (unaff_x19[0x6d] != 0) {
                  FUN_035a0164(unaff_x19[0x6d],0);
                  *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
                  *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
                  *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                  fVar87 = 0.0;
                  *(undefined1 *)((long)unaff_x24 + 0xf34) = 0;
                  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                  *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
                  FUN_0359f73c(&stack0x000017d8,0xffffffff,0,0);
                  FUN_0358c4f0();
                  FUN_0358c4f0();
                  FUN_0358c4f0();
                  FUN_0358c4f0();
                  FUN_0358c4f0();
                  FUN_0209aa1c(*(long *)(*(long *)puVar12 + 0xb8) + 0x11f0,
                               *(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
                  fVar80 = DAT_00d38d28;
                  fVar77 = DAT_00d38938;
                  uVar86 = 0;
                  lVar25 = unaff_x19[0x8f];
                  if (lVar25 != 0) {
                    puVar2 = (uint *)((long)unaff_x19 + 0x494);
                    puVar3 = (ulong *)(unaff_x19 + 0xc9);
                    uVar39 = (int)lVar36 - 1;
                    lVar36 = (long)unaff_x19 + 0x434;
                    fVar53 = fVar53 - (fVar54 - fVar55);
                    fStack000000000000016c = 0.0;
                    if (fVar84 <= 0.0) {
                      fVar84 = 0.0;
                    }
                    if (fVar72 <= 0.0) {
                      fVar72 = 0.0;
                    }
                    fVar83 = (fVar83 / (float)iVar16) * fVar52 * fVar58;
                    uVar30 = (ulong)(uint)fVar83;
                    fVar84 = fVar84 + DAT_00d3879c;
                    uVar69 = (ulong)(uint)fVar84;
                    fVar52 = fVar72 + DAT_00d3879c;
                    fVar58 = fVar78 * DAT_00d38d28 * fVar58;
                    bVar11 = true;
                    iStack000000000000002c = 0;
                    bVar15 = false;
                    iVar16 = 0;
                    plVar4 = unaff_x19 + 0x6d;
                    bVar10 = 1;
                    fStack00000000000000fc = fVar84;
                    uVar20 = 0;
LAB_03549220:
                    fVar78 = (float)uVar30;
                    if ((int)*(uint *)(lVar25 + 0x18) <= (int)uVar86) {
LAB_0354cf48:
                      fVar83 = (float)uVar69;
                      if (((char)unaff_x19[0x47] != '\0') &&
                         (fVar83 = DAT_00d389f8,
                         DAT_00d389f8 <
                         *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                        fVar83 = *(float *)((long)unaff_x19 + 0x1e4);
                        fVar58 = *(float *)((long)unaff_x19 + 0x254);
                        if ((fVar83 < fVar58) &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          if (*(float *)((long)unaff_x19 + 0x2d4) <
                              *(float *)(unaff_x19 + 0x5a) / 100.0) {
                            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                          }
                          fVar70 = (*(float *)((long)unaff_x19 + 0x23c) - fVar83) * 0.5;
                          if (fVar70 <= DAT_00d38b84) {
                            fVar70 = DAT_00d38b84;
                          }
                          *(float *)(unaff_x19 + 0x48) = fVar83;
                          fVar70 = (fVar83 + fVar70) * 20.0 + 0.5;
                          fVar83 = DAT_00d38e60;
                          if (fVar70 != INFINITY) {
                            fVar83 = (float)(int)fVar70 / 20.0;
                          }
                          if (fVar58 <= fVar83) {
                            fVar83 = fVar58;
                          }
LAB_0354d004:
                          *(float *)((long)unaff_x19 + 0x1e4) = fVar83;
                          return;
                        }
                      }
                      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                        uVar32 = FUN_0276793c((long)unaff_x19 + 0x244,0);
                        uVar27 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
                        uVar32 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar32,
                                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar27,0)
                        ;
                        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                        }
                        FUN_0367a6ec(uVar32,0);
                      }
                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if ((*puVar2 == 0) || ((*puVar2 == 1 && (uVar20 == 3)))) {
                        (**(code **)(*unaff_x19 + 0x928))();
                        goto LAB_0354d0cc;
                      }
                      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar36 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar36 = *(long *)puVar12;
                      }
                      plVar50 = (long *)OVRPlugin_Media_TypeInfo;
                      lVar36 = **(long **)(lVar36 + 0xb8);
                      if (lVar36 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      iVar16 = *(int *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 +
                                       0x54) << 2;
                      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x60), lVar36 == 0))
                      goto LAB_0354fbf4;
                      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      if (*(int *)(lVar36 + 0x18) == 0)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      FUN_035968e8(lVar36 + 0x20,0,0);
                      if (DAT_0411f172 == '\0') {
                        FUN_01ab69ac(PTR_DAT_03cbded8);
                        DAT_0411f172 = '\x01';
                      }
                      iVar19 = (int)unaff_x19[0x4e];
                      fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                      uStack00000000000000f0 =
                           *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                      lVar36 = unaff_x19[0xeb];
                      uStack00000000000000b8 = uStack00000000000000f0;
                      fStack00000000000000c4 = fStack00000000000000fc;
                      if (iVar19 < 0x401) {
                        if (iVar19 == 0x100) {
                          if (lVar36 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar36 + 0x18) < 2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar32 = *(undefined8 *)(lVar36 + 0x30);
                          if ((int)unaff_x19[0x5c] == 5) {
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x58), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= uVar5)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            fVar83 = *(float *)(lVar25 + (long)(int)uVar5 * 0x14 + 0x28);
                          }
                          else {
                            fVar83 = *(float *)(unaff_x19 + 0x97);
                          }
                          fStack00000000000000c4 = fVar56 + 0.0 + *(float *)(lVar36 + 0x2c);
                          fVar83 = (0.0 - fVar83) - fVar68;
                        }
                        else if (iVar19 == 0x200) {
                          if (lVar36 == 0) goto LAB_0354fbf4;
                          if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fStack00000000000000c4 =
                               (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                          uVar32 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar36 + 0x24) +
                                                    (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
                          if ((int)unaff_x19[0x5c] == 5) {
                            if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x58), lVar36 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar36 + 0x18) <= uVar5)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar36 = lVar36 + (long)(int)uVar5 * 0x14;
                            fStack00000000000000c4 = fVar56 + 0.0 + fStack00000000000000c4;
                            fVar83 = ((fVar68 + *(float *)(lVar36 + 0x28) +
                                      *(float *)(lVar36 + 0x30)) - fVar57) * -0.5 + 0.0;
                          }
                          else {
                            fStack00000000000000c4 = fVar56 + 0.0 + fStack00000000000000c4;
                            fVar83 = ((fVar68 + *(float *)(unaff_x19 + 0x97) + fVar87) - fVar57) *
                                     -0.5 + 0.0;
                          }
                        }
                        else {
                          if (iVar19 != 0x400) goto LAB_0354d620;
                          if (lVar36 == 0) goto LAB_0354fbf4;
                          if (*(int *)(lVar36 + 0x18) == 0)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar32 = *(undefined8 *)(lVar36 + 0x24);
                          if ((int)unaff_x19[0x5c] == 5) {
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x58), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= uVar5)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            fVar87 = *(float *)(lVar25 + (long)(int)uVar5 * 0x14 + 0x30);
                          }
                          fStack00000000000000c4 = fVar56 + 0.0 + *(float *)(lVar36 + 0x20);
                          fVar83 = fVar57 + (0.0 - fVar87);
                        }
LAB_0354d610:
                        uStack00000000000000b8 =
                             CONCAT44((float)((ulong)uVar32 >> 0x20) + 0.0,(float)uVar32 + fVar83);
                      }
                      else if (iVar19 == 0x800) {
                        if (lVar36 == 0) goto LAB_0354fbf4;
                        if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar83 = fVar56 + 0.0 +
                                 (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                        uStack00000000000000b8 =
                             CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5
                                      + 0.0,((float)*(undefined8 *)(lVar36 + 0x24) +
                                            (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5 + 0.0);
                        fStack00000000000000c4 = fVar83;
                      }
                      else {
                        if (iVar19 == 0x1000) {
                          if (lVar36 != 0) {
                            if ((*(int *)(lVar36 + 0x18) != 1) && (*(int *)(lVar36 + 0x18) != 0)) {
                              uVar32 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar36 + 0x24) +
                                                (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
                              fStack00000000000000c4 =
                                   fVar56 + 0.0 +
                                   (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                              fVar83 = 0.0 - ((fVar68 + *(float *)(unaff_x19 + 0x9d) +
                                              *(float *)(unaff_x19 + 0x9c)) - fVar57) * 0.5;
                              goto LAB_0354d610;
                            }
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          }
                          goto LAB_0354fbf4;
                        }
                        if (iVar19 == 0x2000) {
                          if (lVar36 == 0) goto LAB_0354fbf4;
                          if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fVar83 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar68) - fVar57) *
                                         0.5;
                          uStack00000000000000b8 =
                               CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) *
                                        0.5 + 0.0,
                                        ((float)*(undefined8 *)(lVar36 + 0x24) +
                                        (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5 + fVar83);
                          fStack00000000000000c4 =
                               fVar56 + 0.0 +
                               (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
                        }
                      }
LAB_0354d620:
                      lVar36 = FUN_03559490();
                      if (lVar36 != 0) {
                        FUN_036df824(lVar36,0);
                        *(float *)((long)unaff_x19 + 0x6e4) = fVar83;
                        uVar17 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                        FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                        if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                        }
                        if (DAT_0412df1c == '\0') {
                          FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                          DAT_0412df1c = '\x01';
                        }
                        puVar12 = OVRPlugin_Mesh_TypeInfo;
                        lVar36 = *(long *)OVRPlugin_Mesh_TypeInfo;
                        if (*(int *)(lVar36 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar36 = *(long *)puVar12;
                        }
                        puVar38 = *(undefined4 **)(lVar36 + 0xb8);
                        FUN_035683a4(*puVar38,puVar38[1],puVar38[2],puVar38[3],&stack0x000017c0,
                                     0x4000ffff,0);
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        lVar36 = *plVar4;
                        if (lVar36 != 0) {
                          uVar86 = *puVar2;
                          if ((int)uVar86 < 1) {
                            iVar19 = 0;
                            iVar16 = 0;
                            goto LAB_0354f7f4;
                          }
                          lVar36 = *(long *)(lVar36 + 0x38);
                          if (lVar36 != 0) {
                            bVar15 = false;
                            bVar14 = false;
                            bVar11 = false;
                            fStack0000000000000124 = 0.0;
                            bVar9 = false;
                            iVar19 = 0;
                            uStack0000000000000030 = 0;
                            fStack000000000000016c = 0.0;
                            iStack000000000000005c = 0;
                            lVar25 = 0x2e0;
                            fVar54 = 0.0;
                            fVar58 = 0.0;
                            fStack0000000000000104 =
                                 *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8
                                                     ) + 0x15a8);
                            fStack0000000000000100 = 0.0;
                            fStack0000000000000084 = 0.0;
                            fStack000000000000004c = 0.0;
                            fVar78 = 0.0;
                            fVar53 = 0.0;
                            uVar39 = 0;
                            uVar20 = 1;
                            fStack0000000000000098 = fStack000000000000006c;
                            fStack000000000000009c = fStack0000000000000068;
                            fStack00000000000000c0 = fStack000000000000006c;
                            fStack00000000000000d0 = fStack00000000000000e0;
                            fStack00000000000000d4 = fStack0000000000000068;
                            fStack00000000000000e4 = fStack0000000000000068;
                            fVar70 = fStack00000000000000e0;
                            fVar52 = fStack00000000000000e0;
                            goto LAB_0354d7c0;
                          }
                        }
                      }
                      goto LAB_0354fbf4;
                    }
                    if (*(uint *)(lVar25 + 0x18) <= uVar86)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    uVar18 = *(uint *)(lVar25 + (long)(int)uVar86 * 0xc + 0x20);
                    if (uVar18 == 0) goto LAB_0354cf48;
                    if (5 < iVar16) {
                      uVar32 = FUN_0276793c(&stack0x000017ec,0);
                      uVar27 = FUN_0276793c(&stack0x000017b8,0);
                      uVar32 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar32,
                                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar27,0);
                      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                      }
                      FUN_0367ae18(uVar32,0);
                      in_stack_000017d8 = CONCAT44(3,*puVar2);
                    }
                    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar18 != 0x3c)) {
                      if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar25 + 0x2c);
                      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar25 + 0x58);
                      unaff_x19[0x20] = *(long *)(lVar25 + 0x38);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
LAB_03549378:
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
                      goto LAB_0354fbf4;
                      uVar20 = *puVar2;
                      if (*(uint *)(lVar25 + 0x18) <= uVar20)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar51 = (long)(int)uVar20;
                      cVar34 = *(char *)(lVar25 + lVar51 * 0x178 + 0x5c);
                      *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                      lVar26 = unaff_x19[0x24];
                      if ((uint)in_stack_000017d8 == uVar20) {
                        uVar18 = (uint)((ulong)in_stack_000017d8 >> 0x20);
                        *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                        if (uVar18 == 0x2026) {
                          *(long *)(lVar25 + lVar51 * 0x178 + 0x30) = unaff_x19[0xca];
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                          *(undefined4 *)(lVar25 + 0x2c) = 0;
                          *(long *)(lVar25 + 0x38) = unaff_x19[0xcb];
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *(long *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x50) = unaff_x19[0xcc];
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          uVar20 = *puVar2;
                          if (*(uint *)(lVar25 + 0x18) <= uVar20)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          bVar9 = true;
                          *(int *)(lVar25 + (long)(int)uVar20 * 0x178 + 0x58) = (int)unaff_x19[0xcd]
                          ;
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                          in_stack_000017d8 = CONCAT44(3,uVar20 + 1);
                        }
                        else if (uVar18 == 3) {
                          if ((*unaff_x21 == 0) ||
                             (lVar29 = FUN_03568ac0(*unaff_x21,0), lVar29 == 0)) goto LAB_0354fbf4;
                          FUN_0219b634(lVar29,&stack0x00000c28,&stack0x000008b0,
                                       *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                          if (*(uint *)(lVar25 + 0x18) <= uVar20)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *(ulong *)(lVar25 + lVar51 * 0x178 + 0x30) = uVar24;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          uVar20 = *(uint *)((long)unaff_x19 + 0x494);
                          bVar9 = true;
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                        }
                        else {
                          bVar9 = true;
                        }
                      }
                      else {
                        bVar9 = false;
                      }
                      if (((int)uVar20 < *(int *)((long)unaff_x19 + 0x324)) && (uVar18 != 3)) {
                        if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= uVar20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)uVar20 * 0x178;
                        *(undefined1 *)(lVar25 + 0x194) = 0;
                        *(undefined2 *)(lVar25 + 0x20) = 0x200b;
                        *(undefined4 *)(lVar25 + 100) = 0;
                        *puVar2 = uVar20 + 1;
                      }
                      else {
                        iVar19 = *(int *)((long)unaff_x19 + 0x644);
                        if (iVar19 == 0) {
                          uVar20 = *(uint *)((long)unaff_x19 + 0x25c);
                          if ((uVar20 >> 4 & 1) == 0) {
                            if ((uVar20 >> 3 & 1) == 0) {
                              fVar54 = 1.0;
                              if ((uVar20 >> 5 & 1) != 0) {
                                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar28 = FUN_026b812c(uVar18,0);
                                if ((uVar28 & 1) != 0) {
                                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar18 = FUN_026b8410(uVar18,0);
                                  uVar18 = uVar18 & 0xffff;
                                  fVar54 = fVar77;
                                }
                              }
                            }
                            else {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar28 = FUN_026b8070(uVar18,0);
                              fVar54 = 1.0;
                              if ((uVar28 & 1) != 0) {
                                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar18 = FUN_026b8594(uVar18,0);
                                goto LAB_03549968;
                              }
                            }
                          }
                          else {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar28 = FUN_026b812c(uVar18,0);
                            fVar54 = 1.0;
                            if ((uVar28 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar18 = FUN_026b8410(uVar18,0);
LAB_03549968:
                              fVar54 = 1.0;
                              uVar18 = uVar18 & 0xffff;
                            }
                          }
                          iVar19 = *(int *)((long)unaff_x19 + 0x644);
                          if (iVar19 != 0) goto LAB_03549594;
LAB_03549978:
                          if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *puVar3 = *(ulong *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x30);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3);
                          if (*puVar3 == 0) goto LAB_03549564;
                          if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *unaff_x21 = *(long *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x38);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (unaff_x21);
                          if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *in_stack_00000170 = *(long *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x50)
                          ;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          uVar48 = *puVar2;
                          uVar20 = *(uint *)(lVar25 + 0x18);
                          if (uVar20 <= uVar48)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *(undefined4 *)(unaff_x19 + 0x24) =
                               *(undefined4 *)(lVar25 + (long)(int)uVar48 * 0x178 + 0x58);
                          if (bVar9) {
                            lVar26 = unaff_x19[0x8f];
                            if (lVar26 == 0) goto LAB_0354fbf4;
                            if (*(uint *)(lVar26 + 0x18) <= uVar86)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if ((*(int *)(lVar26 + (long)(int)uVar86 * 0xc + 0x20) != 10) ||
                               (uVar48 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
                            if (uVar20 <= uVar48 - 1)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (*unaff_x21 == 0) goto LAB_0354fbf4;
                            fVar55 = *(float *)(lVar25 + (long)(int)(uVar48 - 1) * 0x178 + 0x60);
                            iVar19 = FUN_03776950(*unaff_x21 + 0x50,0);
                            lVar25 = *unaff_x21;
                          }
                          else {
LAB_03549a88:
                            if (*unaff_x21 == 0) goto LAB_0354fbf4;
                            fVar55 = *(float *)(unaff_x19 + 0x3d);
                            iVar19 = FUN_03776950(*unaff_x21 + 0x50,0);
                            lVar25 = unaff_x19[0x20];
                          }
                          if (lVar25 == 0) goto LAB_0354fbf4;
                          fVar64 = (float)FUN_03776960(lVar25 + 0x50,0);
                          fVar59 = fVar70;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar59 = 1.0;
                          }
                          uVar17 = 0;
                          fStack0000000000000124 = 0.0;
                          if (!(bool)(bVar9 & uVar18 == 0x2026)) {
                            if (*unaff_x21 == 0) goto LAB_0354fbf4;
                            fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                            if (*unaff_x21 == 0) goto LAB_0354fbf4;
                            uVar17 = FUN_037769c0(*unaff_x21 + 0x50,0);
                          }
                          lVar25 = unaff_x19[0xc9];
                          if (lVar25 == 0) goto LAB_0354fbf4;
                          _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar17);
                          if (*(long *)(lVar25 + 0x20) == 0) goto LAB_0354fbf4;
                          fVar79 = *(float *)((long)unaff_x19 + 0x404);
                          fVar60 = *(float *)(lVar25 + 0x2c);
                          fVar78 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar62 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar81 = *(float *)((long)unaff_x19 + 0x404);
                          fVar63 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          lVar25 = unaff_x19[0x6d];
                          if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar26 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                          *(undefined4 *)(lVar26 + 0x2c) = 0;
                          fVar59 = ((fVar54 * fVar55) / (float)iVar19) * fVar64 * fVar59;
                          fVar78 = fVar59 * fVar79 * fVar60 * fVar78;
                          *(float *)(lVar26 + 0x160) = fVar78;
                          uVar20 = *(uint *)(unaff_x19 + 0x24);
                          fVar63 = fVar59 * fVar62 * fVar81 * fVar63;
                          if (uVar20 == 0) {
                            fStack000000000000016c = *(float *)(unaff_x19 + 0xc3);
                          }
                          else {
                            lVar26 = unaff_x19[0xe1];
                            if (lVar26 == 0) goto LAB_0354fbf4;
                            if (*(uint *)(lVar26 + 0x18) <= uVar20)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar26 = *(long *)(lVar26 + (long)(int)uVar20 * 8 + 0x20);
                            if (lVar26 == 0) goto LAB_0354fbf4;
                            fStack000000000000016c = *(float *)(lVar26 + 0x54);
                          }
LAB_03549e30:
                          fVar55 = 0.0;
                          if (uVar18 != 3 && uVar18 != 0xad) {
                            fVar55 = fVar78;
                          }
                        }
                        else {
                          fVar54 = 1.0;
                          if (iVar19 == 0) goto LAB_03549978;
LAB_03549594:
                          if (iVar19 == 1) {
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            *plVar50 = *(long *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x40);
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                                 *(undefined4 *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x48);
                            if ((unaff_x19[0xd3] == 0) ||
                               (lVar25 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                               lVar25 == 0)) goto LAB_0354fbf4;
                            FUN_02215a88(lVar25,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                         &stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (uVar24 == 0) goto LAB_03549564;
                            if (uVar18 == 0x3c) {
                              uVar18 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                            }
                            else {
                              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar25 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar25 = *(long *)puVar12;
                              }
                              *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                                   *(undefined4 *)(*(long *)(lVar25 + 0xb8) + 0x68);
                            }
                            if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                            fVar78 = *(float *)(unaff_x19 + 0x3d);
                            memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
                            iVar19 = FUN_03776950(&stack0x00001730,0);
                            if (*unaff_x21 == 0) goto LAB_0354fbf4;
                            memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
                            fVar59 = (float)FUN_03776960(&stack0x00001730,0);
                            fVar55 = fVar70;
                            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                              fVar55 = 1.0;
                            }
                            if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                            fVar55 = (fVar78 / (float)iVar19) * fVar59 * fVar55;
                            iVar19 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                            fVar78 = *(float *)(unaff_x19 + 0x3d);
                            if (iVar19 < 1) {
                              if (*unaff_x21 == 0) goto LAB_0354fbf4;
                              iVar19 = FUN_03776950(*unaff_x21 + 0x50,0);
                              if (*unaff_x21 == 0) goto LAB_0354fbf4;
                              fVar64 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                              fVar59 = fVar70;
                              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                fVar59 = 1.0;
                              }
                              if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                              fVar79 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                              if (*(long *)(uVar24 + 0x20) == 0) goto LAB_0354fbf4;
                              FUN_03776e6c(&stack0x000008b0,*(long *)(uVar24 + 0x20),0);
                              fVar60 = (float)FUN_03776c9c(&stack0x00001710,0);
                              if (*(long *)(uVar24 + 0x20) == 0) goto LAB_0354fbf4;
                              fVar81 = *(float *)(uVar24 + 0x2c);
                              fVar62 = (float)FUN_03776ea8(*(long *)(uVar24 + 0x20),0);
                              if (*unaff_x21 == 0) goto LAB_0354fbf4;
                              fVar61 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                              if (*unaff_x21 == 0) goto LAB_0354fbf4;
                              fVar75 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                              if (*unaff_x21 == 0) goto LAB_0354fbf4;
                              fVar85 = *(float *)((long)unaff_x19 + 0x404);
                              fVar63 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                              if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                              fVar63 = fVar55 * fVar75 * fVar85 * fVar63;
                              fVar59 = (fVar78 / (float)iVar19) * fVar64 * fVar59;
                              fVar78 = fVar59 * (fVar79 / fVar60) * fVar81 * fVar62;
                              fVar59 = fVar59 / fVar78;
                              fVar61 = fVar59 * fVar61;
                              fVar55 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                              fVar59 = fVar59 * fVar55;
                            }
                            else {
                              if (*plVar50 == 0) goto LAB_0354fbf4;
                              iVar19 = FUN_03776950(*plVar50 + 0x48,0);
                              if (*plVar50 == 0) goto LAB_0354fbf4;
                              fVar59 = (float)FUN_03776960(*plVar50 + 0x48,0);
                              if (*(long *)(uVar24 + 0x20) == 0) goto LAB_0354fbf4;
                              fVar79 = *(float *)(uVar24 + 0x2c);
                              fVar64 = fVar70;
                              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                                fVar64 = 1.0;
                              }
                              fVar60 = (float)FUN_03776ea8(*(long *)(uVar24 + 0x20),0);
                              if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                              fVar61 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                              if (*plVar50 == 0) goto LAB_0354fbf4;
                              fVar62 = (float)FUN_037769b0(*plVar50 + 0x48,0);
                              if (*plVar50 == 0) goto LAB_0354fbf4;
                              fVar81 = *(float *)((long)unaff_x19 + 0x404);
                              fVar63 = (float)FUN_03776960(*plVar50 + 0x48,0);
                              if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                              fVar63 = fVar55 * fVar62 * fVar81 * fVar63;
                              fVar78 = (fVar78 / (float)iVar19) * fVar59 * fVar64 * fVar79 * fVar60;
                              fVar59 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                            }
                            *puVar3 = uVar24;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (puVar3,uVar24);
                            if ((*plVar4 != 0) && (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 != 0))
                            {
                              if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                              *(undefined4 *)(lVar25 + 0x2c) = 1;
                              *(float *)(lVar25 + 0x160) = fVar78;
                              *(long *)(lVar25 + 0x40) = *plVar50;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                              if ((*plVar4 != 0) &&
                                 (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 != 0)) {
                                if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(long *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x38) = *unaff_x21;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                lVar25 = *plVar4;
                                if ((lVar25 != 0) &&
                                   (lVar51 = *(long *)(lVar25 + 0x38), lVar51 != 0)) {
                                  if (*puVar2 < *(uint *)(lVar51 + 0x18)) {
                                    _fStack0000000000000120 = CONCAT44(fVar61,fVar59);
                                    fStack000000000000016c = 0.0;
                                    *(int *)(lVar51 + (long)(int)*puVar2 * 0x178 + 0x58) =
                                         (int)unaff_x19[0x24];
                                    *(int *)(unaff_x19 + 0x24) = (int)lVar26;
                                    goto LAB_03549e30;
                                  }
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                }
                              }
                            }
                            goto LAB_0354fbf4;
                          }
                          lVar25 = *plVar4;
                          fVar63 = 0.0;
                          fVar55 = 0.0;
                          if (uVar18 != 3 && uVar18 != 0xad) {
                            fVar55 = fVar78;
                          }
                          if (lVar25 == 0) goto LAB_0354fbf4;
                          _fStack0000000000000120 = 0;
                        }
                        lVar25 = *(long *)(lVar25 + 0x38);
                        if (lVar25 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                        *(short *)(lVar25 + 0x20) = (short)uVar18;
                        *(int *)(lVar25 + 0x60) = (int)unaff_x19[0x3d];
                        *(undefined4 *)(lVar25 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(int *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x168) = (int)unaff_x19[0x2b]
                        ;
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(undefined4 *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x170) =
                             *(undefined4 *)((long)unaff_x19 + 0x15c);
                        if ((unaff_x19[0x6d] == 0) ||
                           (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        uVar20 = *puVar2;
                        FUN_0209a6e0(unaff_x19 + 0xaa,&stack0x000008b0,
                                     *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                        if (*(uint *)(lVar25 + 0x18) <= uVar20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)uVar20 * 0x178;
                        *(undefined4 *)(lVar25 + 0x18c) = 0;
                        *(undefined8 *)(lVar25 + 0x184) = 0;
                        *(ulong *)(lVar25 + 0x17c) = uVar24;
                        if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(undefined4 *)(lVar25 + (long)(int)*puVar2 * 0x178 + 400) =
                             *(undefined4 *)((long)unaff_x19 + 0x25c);
                        if ((unaff_x19[0xc9] == 0) ||
                           (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
                        goto LAB_0354fbf4;
                        FUN_03776e6c(&stack0x00000c28,lVar25,0);
                        if ((int)uVar18 < 0x10000) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar20 = FUN_026b63d8(uVar18,0);
                          uVar20 = uVar20 & 1;
                        }
                        else {
                          uVar20 = 0;
                        }
                        fVar59 = *(float *)(unaff_x19 + 0x55);
                        *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                        if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                          fVar64 = 0.0;
                          fVar60 = 0.0;
                          fVar79 = 0.0;
                        }
                        else {
                          if (*puVar3 == 0) goto LAB_0354fbf4;
                          uVar35 = *puVar2;
                          uVar48 = *(uint *)(*puVar3 + 0x28);
                          if ((int)uVar35 < (int)uVar39) {
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= uVar35 + 1)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar25 = *(long *)(lVar25 + (long)(int)(uVar35 + 1) * 0x178 + 0x30);
                            if ((((lVar25 == 0) || (*unaff_x21 == 0)) ||
                                (lVar26 = *(long *)(*unaff_x21 + 0x128), lVar26 == 0)) ||
                               (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_0354fbf4;
                            uVar24 = (ulong)(uVar48 | *(int *)(lVar25 + 0x28) << 0x10);
                            uVar30 = FUN_0219f8b8(lVar26,&stack0x000008b0,&stack0x00001708,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                            uVar17 = 0;
                            if ((uVar30 & 1) == 0) {
                              fVar64 = 0.0;
                              fVar60 = 0.0;
                              fVar79 = 0.0;
                            }
                            else {
                              if (in_stack_00001708 == 0) goto LAB_0354fbf4;
                              fVar64 = *(float *)(in_stack_00001708 + 0x1c);
                              uVar17 = *(undefined4 *)(in_stack_00001708 + 0x20);
                              fVar79 = *(float *)(in_stack_00001708 + 0x14);
                              fVar60 = *(float *)(in_stack_00001708 + 0x18);
                              if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                                fVar59 = 0.0;
                              }
                            }
                            uVar35 = *puVar2;
                          }
                          else {
                            uVar17 = 0;
                            fVar64 = 0.0;
                            fVar60 = 0.0;
                            fVar79 = 0.0;
                          }
                          if (0 < (int)uVar35) {
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= uVar35 - 1)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar25 = *(long *)(lVar25 + (ulong)(uVar35 - 1) * 0x178 + 0x30);
                            if (((lVar25 == 0) || (*unaff_x21 == 0)) ||
                               ((lVar26 = *(long *)(*unaff_x21 + 0x128), lVar26 == 0 ||
                                (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0))))
                            goto LAB_0354fbf4;
                            uVar24 = (ulong)(*(uint *)(lVar25 + 0x28) | uVar48 << 0x10);
                            uVar30 = FUN_0219f8b8(lVar26,&stack0x000008b0,&stack0x00001708,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                            if ((uVar30 & 1) != 0) {
                              if ((in_stack_00001708 == 0) ||
                                 (fVar79 = (float)FUN_03571cb4(fVar79,fVar60,fVar64,uVar17,
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x28),
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x2c),
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x30),
                                                               *(undefined4 *)
                                                                (in_stack_00001708 + 0x34),0),
                                 in_stack_00001708 == 0)) goto LAB_0354fbf4;
                              if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                                fVar59 = 0.0;
                              }
                            }
                          }
                          *(float *)((long)unaff_x19 + 0x2fc) = fVar64;
                        }
                        if ((char)unaff_x19[0x1e] != '\0') {
                          fVar81 = *(float *)(unaff_x19 + 200);
                          fVar62 = (float)FUN_03776cb4(&stack0x000017a0,0);
                          fVar81 = fVar81 - fVar55 * fVar62 * (1.0 - *(float *)((long)unaff_x19 +
                                                                               0x2d4));
                          *(float *)(unaff_x19 + 200) = fVar81;
                          if ((uVar18 == 0x200b) || (uVar20 != 0)) {
                            *(float *)(unaff_x19 + 200) =
                                 fVar81 - fVar58 * *(float *)((long)unaff_x19 + 0x2b4);
                          }
                        }
                        fVar81 = *(float *)(unaff_x19 + 0x56);
                        fVar62 = 0.0;
                        if (fVar81 != 0.0) {
                          fVar62 = (float)FUN_03776c94(&stack0x000017a0,0);
                          fVar61 = (float)FUN_03776ca4(&stack0x000017a0,0);
                          fVar62 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (fVar81 * 0.5 - fVar55 * (fVar62 * 0.5 + fVar61));
                          *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar62;
                        }
                        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar34 == '\0')) &&
                           ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                          lVar25 = *in_stack_00000170;
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar30 = FUN_036cee6c(lVar25,0,0);
                          fVar61 = 0.0;
                          if ((uVar30 & 1) != 0) {
                            lVar25 = *in_stack_00000170;
                            if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            plVar49 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                            if (lVar25 == 0) goto LAB_0354fbf4;
                            uVar30 = FUN_03699d3c(lVar25,*(undefined4 *)
                                                          (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                            fVar61 = 0.0;
                            if ((uVar30 & 1) != 0) {
                              lVar25 = *in_stack_00000170;
                              if (*(int *)(*plVar49 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                plVar49 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                              }
                              if (lVar25 == 0) goto LAB_0354fbf4;
                              fVar81 = (float)FUN_0369e060(lVar25,*(undefined4 *)
                                                                   (*(long *)(*plVar49 + 0xb8) +
                                                                   0x54),0);
                              if ((*unaff_x21 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
                              fVar75 = *(float *)(*unaff_x21 + 0x1b0);
                              fVar61 = (float)FUN_0369e060(*in_stack_00000170,
                                                           *(undefined4 *)
                                                            (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                              fVar61 = fVar61 * fVar81 * fVar75 * 0.25;
                              if (fVar81 < fStack000000000000016c + fVar61) {
                                fStack000000000000016c = fVar81 - fVar61;
                              }
                            }
                          }
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
                        }
                        else {
                          lVar25 = *in_stack_00000170;
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar30 = FUN_036cee6c(lVar25,0,0);
                          fStack00000000000000d0 = 0.0;
                          if ((uVar30 & 1) != 0) {
                            lVar25 = *in_stack_00000170;
                            if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            plVar49 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                            if (lVar25 == 0) goto LAB_0354fbf4;
                            uVar30 = FUN_03699d3c(lVar25,*(undefined4 *)
                                                          (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                            if ((uVar30 & 1) != 0) {
                              lVar25 = *in_stack_00000170;
                              if (*(int *)(*plVar49 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                plVar49 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                              }
                              if (lVar25 == 0) goto LAB_0354fbf4;
                              uVar30 = FUN_03699d3c(lVar25,*(undefined4 *)
                                                            (*(long *)(*plVar49 + 0xb8) + 0xcc),0);
                              if ((uVar30 & 1) != 0) {
                                lVar25 = *in_stack_00000170;
                                if (*(int *)(*plVar49 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  plVar49 = (long *)
                                            OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                                }
                                if (lVar25 != 0) {
                                  fVar81 = (float)FUN_0369e060(lVar25,*(undefined4 *)
                                                                       (*(long *)(*plVar49 + 0xb8) +
                                                                       0x54),0);
                                  if ((*unaff_x21 != 0) && (*in_stack_00000170 != 0)) {
                                    fVar75 = *(float *)(*unaff_x21 + 0x1a8);
                                    fVar61 = (float)FUN_0369e060(*in_stack_00000170,
                                                                 *(undefined4 *)
                                                                  (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                    fVar61 = fVar61 * fVar81 * fVar75 * 0.25;
                                    if (fVar81 < fStack000000000000016c + fVar61) {
                                      fStack000000000000016c = fVar81 - fVar61;
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
                        fVar81 = *(float *)(unaff_x19 + 200);
                        fVar75 = (float)FUN_03776ca4(&stack0x000017a0,0);
                        fVar81 = fVar81 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                          fVar55 * (fVar79 + ((fVar75 - fStack000000000000016c) -
                                                             fVar61));
                        fVar79 = (float)FUN_03776cac(&stack0x000017a0,0);
                        fVar75 = *(float *)((long)unaff_x19 + 0x61c) +
                                 ((fVar63 + fVar55 * (fVar60 + fStack000000000000016c + fVar79)) -
                                 *(float *)(unaff_x19 + 0x9b));
                        fVar79 = (float)FUN_03776c9c(&stack0x000017a0,0);
                        fStack0000000000000134 =
                             fVar75 - fVar55 * (fStack000000000000016c + fStack000000000000016c +
                                               fVar79);
                        fVar79 = (float)FUN_03776c94(&stack0x000017a0,0);
                        fVar60 = fVar81 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                          fVar55 * (fVar61 + fVar61 +
                                                   fStack000000000000016c + fStack000000000000016c +
                                                   fVar79);
                        fStack0000000000000104 = fVar81;
                        fVar79 = fVar60;
                        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar34 == '\0')) &&
                           ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                          fVar65 = (float)(int)unaff_x19[0xbe] * fVar80;
                          fVar79 = (float)FUN_03776cac(&stack0x000017a0,0);
                          fVar66 = fVar65 * fVar55 * (fVar61 + fStack000000000000016c + fVar79);
                          fVar79 = (float)FUN_03776cac(&stack0x000017a0,0);
                          fVar85 = (float)FUN_03776c9c(&stack0x000017a0,0);
                          fVar75 = fVar75 + 0.0;
                          fStack0000000000000134 = fStack0000000000000134 + 0.0;
                          fVar65 = fVar65 * fVar55 * (((fVar79 - fVar85) - fStack000000000000016c) -
                                                     fVar61);
                          fVar85 = fVar81 + fVar66;
                          fVar79 = fVar60 + fVar65;
                          fVar74 = (fVar66 - fVar65) * 0.5;
                          fVar81 = (fVar81 + fVar65) - fVar74;
                          fVar60 = (fVar60 + fVar66) - fVar74;
                          fStack0000000000000104 = fVar85 - fVar74;
                          fVar79 = fVar79 - fVar74;
                        }
                        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                          fVar65 = 0.0;
                          fVar66 = 0.0;
                          fVar73 = 0.0;
                          fStack0000000000000100 = 0.0;
                          fVar74 = fStack0000000000000134;
                          fVar85 = fVar75;
                        }
                        else {
                          thunk_FUN_036bc400(lVar36,0);
                          fVar76 = (fVar60 + fVar81) * 0.5;
                          fVar82 = (fStack0000000000000134 + fVar75) * 0.5;
                          fVar75 = fVar75 - fVar82;
                          fStack0000000000000100 = 0.0;
                          fVar85 = fVar75;
                          fStack0000000000000104 =
                               (float)FUN_036bdd2c(fStack0000000000000104 - fVar76,lVar36,0);
                          fStack0000000000000104 = fVar76 + fStack0000000000000104;
                          fStack0000000000000100 = fStack0000000000000100 + 0.0;
                          fVar74 = fStack0000000000000134 - fVar82;
                          fVar65 = 0.0;
                          fStack0000000000000134 = fVar74;
                          fVar81 = (float)FUN_036bdd2c(fVar81 - fVar76,lVar36,0);
                          fVar81 = fVar76 + fVar81;
                          fVar65 = fVar65 + 0.0;
                          fStack0000000000000134 = fVar82 + fStack0000000000000134;
                          fVar73 = 0.0;
                          fVar60 = (float)FUN_036bdd2c(fVar60 - fVar76,lVar36,0);
                          fVar60 = fVar76 + fVar60;
                          fVar75 = fVar82 + fVar75;
                          fVar73 = fVar73 + 0.0;
                          fVar66 = 0.0;
                          fVar79 = (float)FUN_036bdd2c(fVar79 - fVar76,lVar36,0);
                          fVar79 = fVar76 + fVar79;
                          fVar66 = fVar66 + 0.0;
                          fVar74 = fVar82 + fVar74;
                          fVar85 = fVar82 + fVar85;
                        }
                        if (*plVar4 == 0) goto LAB_0354fbf4;
                        lVar25 = *(long *)(*plVar4 + 0x38);
                        uVar30 = (ulong)(uint)fVar55;
                        if (lVar25 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                        *(float *)(lVar25 + 0x11c) = fVar81;
                        *(float *)(lVar25 + 0x120) = fStack0000000000000134;
                        *(float *)(lVar25 + 0x124) = fVar65;
                        if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                        *(float *)(lVar25 + 0x114) = fVar85;
                        *(float *)(lVar25 + 0x110) = fStack0000000000000104;
                        *(float *)(lVar25 + 0x118) = fStack0000000000000100;
                        if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                        *(float *)(lVar25 + 0x128) = fVar60;
                        *(float *)(lVar25 + 300) = fVar75;
                        *(float *)(lVar25 + 0x130) = fVar73;
                        if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar25 = lVar25 + (long)(int)*puVar2 * 0x178;
                        *(float *)(lVar25 + 0x134) = fVar79;
                        *(float *)(lVar25 + 0x138) = fVar74;
                        *(float *)(lVar25 + 0x13c) = fVar66;
                        if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                        goto LAB_0354fbf4;
                        uVar48 = *puVar2;
                        lVar26 = (long)(int)uVar48;
                        if (*(uint *)(lVar25 + 0x18) <= uVar48)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar51 = lVar25 + lVar26 * 0x178;
                        *(int *)(lVar51 + 0x140) = (int)unaff_x19[200];
                        fVar75 = *(float *)(unaff_x19 + 0x9b);
                        uVar69 = (ulong)(uint)fVar75;
                        fVar79 = *(float *)((long)unaff_x19 + 0x61c);
                        *(float *)(lVar51 + 0x15c) =
                             (fVar60 - fVar81) / (fVar85 - fStack0000000000000134);
                        *(float *)(lVar51 + 0x14c) = (fVar63 - fVar75) + fVar79;
                        fVar60 = fStack0000000000000124 * fVar55;
                        if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                          fVar60 = fVar60 / fVar54;
                          fStack0000000000000120 = (fStack0000000000000120 * fVar55) / fVar54;
                        }
                        else {
                          fStack0000000000000120 = fStack0000000000000120 * fVar55;
                        }
                        uVar35 = *(uint *)(unaff_x19 + 0x93);
                        if ((uVar20 == 0) || (uVar48 == uVar35)) {
                          fStack0000000000000120 = fVar79 + fStack0000000000000120;
                          fVar60 = fVar79 + fVar60;
                          fVar63 = fStack0000000000000120;
                          fVar81 = fVar60;
                          if (fVar79 != 0.0) {
                            fVar81 = (fVar60 - fVar79) / *(float *)((long)unaff_x19 + 0x404);
                            fVar63 = (fStack0000000000000120 - fVar79) /
                                     *(float *)((long)unaff_x19 + 0x404);
                            if (fVar81 <= fVar60) {
                              fVar81 = fVar60;
                            }
                            if (fStack0000000000000120 <= fVar63) {
                              fVar63 = fStack0000000000000120;
                            }
                          }
                          lVar25 = lVar25 + lVar26 * 0x178;
                          fVar79 = fVar81;
                          if (fVar81 <= *(float *)(unaff_x19 + 0x99)) {
                            fVar79 = *(float *)(unaff_x19 + 0x99);
                          }
                          fVar85 = fVar63;
                          if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar63) {
                            fVar85 = *(float *)((long)unaff_x19 + 0x4cc);
                          }
                          *(float *)((long)unaff_x19 + 0x4cc) = fVar85;
                          *(float *)(unaff_x19 + 0x99) = fVar79;
                          *(float *)(lVar25 + 0x154) = fVar81;
                          *(float *)(lVar25 + 0x158) = fVar63;
                          *(float *)(lVar25 + 0x148) = fVar60 - fVar75;
                          *(float *)(unaff_x19 + 0x98) = fVar60 - fVar75;
                          *(float *)(lVar25 + 0x150) = fStack0000000000000120 - fVar75;
                          *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar75;
                          if (((int)unaff_x19[0x95] == 0) ||
                             (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                            *(float *)(unaff_x19 + 0x97) = fVar79;
                            if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                            fVar79 = *(float *)((long)unaff_x19 + 0x4bc);
                            fVar81 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                            fVar54 = (fVar55 * fVar81) / fVar54;
                            uVar69 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                            if (fVar79 <= fVar54) {
                              fVar79 = fVar54;
                            }
                            *(float *)((long)unaff_x19 + 0x4bc) = fVar79;
                          }
                          if ((float)uVar69 == 0.0) {
                            fVar54 = *(float *)((long)unaff_x19 + 0x4b4);
                            if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar60) {
                              fVar54 = fVar60;
                            }
                            *(float *)((long)unaff_x19 + 0x4b4) = fVar54;
                          }
                        }
                        else {
                          fVar54 = *(float *)(unaff_x19 + 0x99);
                          lVar25 = lVar25 + lVar26 * 0x178;
                          *(float *)(lVar25 + 0x154) = fVar54;
                          fVar79 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar54 = fVar54 - fVar75;
                          *(float *)(lVar25 + 0x148) = fVar54;
                          *(float *)(lVar25 + 0x158) = fVar79;
                          *(float *)(unaff_x19 + 0x98) = fVar54;
                          fVar79 = fVar79 - fVar75;
                          *(float *)(lVar25 + 0x150) = fVar79;
                          *(float *)((long)unaff_x19 + 0x4c4) = fVar79;
                        }
                        lVar25 = *plVar4;
                        if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                        goto LAB_0354fbf4;
                        uVar21 = *puVar2;
                        if (*(uint *)(lVar26 + 0x18) <= uVar21)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar26 = lVar26 + (long)(int)uVar21 * 0x178;
                        *(undefined1 *)(lVar26 + 0x194) = 0;
                        uVar42 = *(uint *)(unaff_x19 + 0x4f);
                        if ((uVar18 == 9) ||
                           (((((uVar20 == 0 && (uVar18 != 3)) && (uVar18 != 0x200b)) &&
                             (uVar18 != 0xad)) ||
                            (((bool)(uVar18 == 0xad & (bVar15 ^ 1U)) ||
                             (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                          *(undefined1 *)(lVar26 + 0x194) = 1;
                          pfVar40 = (float *)((long)unaff_x19 + 0x354);
                          pfVar37 = (float *)(unaff_x19 + 0x6a);
                          if (bVar9) {
                            lVar25 = *(long *)(lVar25 + 0x50);
                            if (lVar25 == 0) goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            pfVar37 = (float *)(lVar25 + 0x60);
                            pfVar40 = (float *)(lVar25 + 100);
                          }
                          fVar79 = *pfVar37;
                          fVar60 = *pfVar40;
                          fVar54 = *(float *)(unaff_x19 + 0x6c);
                          fVar81 = *(float *)(unaff_x19 + 200);
                          fStack00000000000000fc = (fVar84 - fVar79) - fVar60;
                          bVar14 = true;
                          if ((fVar54 <= fStack00000000000000fc) && (bVar14 = false, !NAN(fVar54)))
                          {
                            bVar14 = fVar54 == -1.0;
                          }
                          if (!bVar14) {
                            fStack00000000000000fc = fVar54;
                          }
                          fVar54 = 0.0;
                          if ((char)unaff_x19[0x1e] == '\0') {
                            fVar54 = (float)FUN_03776cb4(&stack0x000017a0,0);
                            uVar69 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                          }
                          fVar75 = *(float *)((long)unaff_x19 + 0x2d4);
                          fVar63 = *(float *)((long)unaff_x19 + 0x4cc);
                          if (uVar18 != 0xad) {
                            fVar78 = fVar55;
                          }
                          fVar65 = (float)uVar69;
                          fVar85 = 0.0;
                          if ((0.0 < fVar65) &&
                             (fVar85 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar85 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          uVar21 = *puVar2;
                          fVar85 = (*(float *)(unaff_x19 + 0x97) - (fVar63 - fVar65)) + fVar85;
                          if (fVar52 < fVar85) {
                            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                              *(uint *)((long)unaff_x19 + 0x2e4) = uVar21;
                            }
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            uVar32 = DAT_00d37868;
                            if ((char)unaff_x19[0x47] != '\0') {
                              fVar74 = *(float *)(unaff_x19 + 0x59);
                              if (((fVar74 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar65))
                                 && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar83 = *(float *)((long)unaff_x19 + 700) +
                                         ((fVar72 - fVar85) / (float)(int)unaff_x19[0x95]) / fVar83;
                                if (fVar83 <= fVar74) {
                                  fVar83 = fVar74;
                                }
                                goto UnityEngine_AndroidJavaObject___ctor;
                              }
                              fVar65 = *(float *)((long)unaff_x19 + 0x1e4);
                              fVar85 = *(float *)(unaff_x19 + 0x4a);
                              uVar69 = (ulong)(uint)fVar85;
                              if ((fVar85 < fVar65) &&
                                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar83 = (fVar65 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                if (fVar83 <= DAT_00d38b84) {
                                  fVar83 = DAT_00d38b84;
                                }
                                fVar58 = (fVar65 - fVar83) * 20.0 + 0.5;
                                *(float *)((long)unaff_x19 + 0x23c) = fVar65;
                                fVar83 = DAT_00d38e60;
                                if (fVar58 != INFINITY) {
                                  fVar83 = (float)(int)fVar58 / 20.0;
                                }
                                if (fVar83 <= fVar85) {
                                  fVar83 = fVar85;
                                }
                                goto LAB_0354d004;
                              }
                            }
                            switch((int)unaff_x19[0x5c]) {
                            case 1:
                              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar25 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar25 = *(long *)puVar12;
                              }
                              lVar26 = *(long *)(lVar25 + 0xb8);
                              lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                              if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                lVar25 = FUN_01a46ff8(lVar25);
                              }
                              piVar31 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                                                  *(long *)(*(long *)(*(long *)(
                                                  lVar25 + 0xc0) + 8) + 0x80) + 0xa0);
                              puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*piVar31 == 0) {
LAB_0354cf2c:
                                in_stack_000017d8 = DAT_00d37868;
                                puVar2[0] = 0;
                                puVar2[1] = 0;
                                uVar86 = 0xffffffff;
                              }
                              else {
                                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar25 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar25 = *(long *)puVar12;
                                }
                                FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008b0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                                iVar19 = FUN_0358c15c();
LAB_0354b3a0:
                                iVar22 = *(int *)((long)unaff_x19 + 0x494) + -1;
                                *(int *)((long)unaff_x19 + 0x494) = iVar22;
                                iVar16 = iVar16 + 1;
                                uVar86 = iVar19 - 1;
                                in_stack_000017d8 = CONCAT44(0x2026,iVar22);
                              }
                              goto LAB_03549564;
                            default:
                              goto switchD_0354ad3c_caseD_2;
                            case 3:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
LAB_0354af20:
                              uVar86 = FUN_0358c15c();
                              break;
                            case 5:
                              if ((uVar21 == 0) || ((int)uVar86 < 0)) {
                                *puVar2 = 0;
                                uVar86 = 0xffffffff;
                                in_stack_000017d8 = uVar32;
                              }
                              else {
                                fVar78 = *(float *)(unaff_x19 + 0x99);
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar86 = FUN_0358c15c();
                                if (fVar52 < fVar78 - fVar63) break;
                                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                *(undefined4 *)(unaff_x19 + 0x93) =
                                     *(undefined4 *)((long)unaff_x19 + 0x494);
                                uVar69 = *(ulong *)(*(long *)(*(long *)
                                                  OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 200) =
                                     *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                lVar25 = NEON_rev64(uVar69,4);
                                unaff_x19[0x99] = lVar25;
                                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                              }
                              goto LAB_03549564;
                            case 6:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar86 = FUN_0358c15c();
                              lVar25 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar28 = FUN_036cee6c(lVar25,0,0);
                              if ((uVar28 & 1) != 0) {
                                plVar49 = (long *)unaff_x19[0x5d];
                                uVar32 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar49 + 0x528))
                                          (plVar49,uVar32,*(undefined8 *)(*plVar49 + 0x530));
                                lVar25 = unaff_x19[0x5d];
                                if (lVar25 == 0) goto LAB_0354fbf4;
                                *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar49 = (long *)unaff_x19[0x5d];
                                if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar49 + 0x7a8))
                                          (plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7b0));
                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                              }
                            }
LAB_0354b0e0:
                            in_stack_000017d8 = CONCAT44(3,uVar21);
                            goto LAB_03549564;
                          }
switchD_0354ad3c_caseD_2:
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          fVar54 = ABS(fVar81) + fVar54 * (1.0 - fVar75) * fVar78;
                          fVar78 = 1.0;
                          if ((uVar42 & 0x18) != 0) {
                            fVar78 = DAT_00d38acc;
                          }
                          fVar81 = fVar78 * fStack00000000000000fc;
                          if (fVar81 < fVar54) {
                            uVar69 = (ulong)(uint)fVar61;
                            if (((char)unaff_x19[0x5b] == '\0') ||
                               (uVar21 == *(uint *)(unaff_x19 + 0x93))) {
                              if (((char)unaff_x19[0x47] != '\0') &&
                                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                fVar81 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                if (fVar75 < fVar81) {
                                  fVar83 = fVar54 / (1.0 - fVar75);
                                  if (fVar75 <= 0.0) {
                                    fVar83 = fVar54;
                                  }
                                  fVar75 = fVar75 + (fVar54 - fVar78 * (fStack00000000000000fc +
                                                                       DAT_00d38cc4)) / fVar83;
                                  goto LAB_0354fc24;
                                }
                                fVar75 = *(float *)((long)unaff_x19 + 0x1e4);
                                fVar81 = *(float *)(unaff_x19 + 0x4a);
                                if (fVar81 < fVar75) {
                                  fVar83 = (fVar75 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                  if (fVar83 <= DAT_00d38b84) {
                                    fVar83 = DAT_00d38b84;
                                  }
                                  *(float *)((long)unaff_x19 + 0x23c) = fVar75;
                                  fVar75 = fVar75 - fVar83;
LAB_0354fc60:
                                  fVar58 = fVar75 * 20.0 + 0.5;
                                  fVar83 = DAT_00d38e60;
                                  if (fVar58 != INFINITY) {
                                    fVar83 = (float)(int)fVar58 / 20.0;
                                  }
                                  if (fVar83 <= fVar81) {
                                    fVar83 = fVar81;
                                  }
                                  goto LAB_0354d004;
                                }
                              }
                              iVar19 = (int)unaff_x19[0x5c];
                              if (iVar19 == 1) {
                                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar25 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar25 = *(long *)puVar12;
                                }
                                lVar26 = *(long *)(lVar25 + 0xb8);
                                lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                  lVar25 = FUN_01a46ff8(lVar25);
                                }
                                piVar31 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                                                    *(long *)(*(long *)(*(long *)(
                                                  lVar25 + 0xc0) + 8) + 0x80) + 0xa0);
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*piVar31 == 0) goto LAB_0354cf2c;
                                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar25 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar25 = *(long *)puVar12;
                                }
                                FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008b0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
                                goto LAB_0354b394;
                              }
                              if (iVar19 != 6) {
                                if (iVar19 == 3) {
                                  if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0)
                                  {
                                    thunk_FUN_01a58e78();
                                  }
                                  goto LAB_0354af20;
                                }
                                goto LAB_0354b8e4;
                              }
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar86 = FUN_0358c15c();
                              lVar25 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar28 = FUN_036cee6c(lVar25,0,0);
                              if ((uVar28 & 1) != 0) {
                                plVar49 = (long *)unaff_x19[0x5d];
                                uVar32 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar49 + 0x528))
                                          (plVar49,uVar32,*(undefined8 *)(*plVar49 + 0x530));
                                lVar25 = unaff_x19[0x5d];
                                if (lVar25 == 0) goto LAB_0354fbf4;
                                *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar49 = (long *)unaff_x19[0x5d];
                                if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                (**(code **)(*plVar49 + 0x7a8))
                                          (plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7b0));
                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                              }
LAB_0354b4b4:
                              in_stack_000017d8 = CONCAT44(3,*puVar2);
                              goto LAB_03549564;
                            }
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar86 = FUN_0358c15c();
                            if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                              lVar25 = *plVar4;
                              if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                              goto LAB_0354fbf4;
                              if (*(uint *)(lVar26 + 0x18) <= *puVar2)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              fVar81 = *(float *)(unaff_x19 + 0x9b);
                              fVar75 = 0.0;
                              if ((0.0 < fVar81) &&
                                 (fVar75 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                                fVar75 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a)
                                ;
                              }
                              fVar75 = fVar58 * *(float *)(unaff_x19 + 0x57) +
                                       *(float *)(lVar26 + (long)(int)*puVar2 * 0x178 + 0x154) +
                                       (fVar75 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                       fVar83 * (fVar53 + *(float *)((long)unaff_x19 + 700));
                            }
                            else {
                              lVar25 = unaff_x19[0x6d];
                              *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                              if (lVar25 == 0) goto LAB_0354fbf4;
                              fVar81 = *(float *)(unaff_x19 + 0x9b);
                              fVar75 = *(float *)(unaff_x19 + 0x58) +
                                       fVar58 * *(float *)(unaff_x19 + 0x57);
                            }
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            lVar25 = *(long *)(lVar25 + 0x38);
                            if (lVar25 == 0) goto LAB_0354fbf4;
                            uVar43 = *(uint *)((long)unaff_x19 + 0x494);
                            if ((*(uint *)(lVar25 + 0x18) <= uVar43) ||
                               (uVar8 = uVar43 - 1, *(uint *)(lVar25 + 0x18) <= uVar8))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            uVar69 = (ulong)(uint)(fVar75 + *(float *)(unaff_x19 + 0x97));
                            fVar63 = (fVar75 + *(float *)(unaff_x19 + 0x97) + fVar81) -
                                     *(float *)(lVar25 + (long)(int)uVar43 * 0x178 + 0x158);
                            if ((!bVar15 &&
                                 *(short *)(lVar25 + (long)(int)uVar8 * 0x178 + 0x20) == 0xad) &&
                               ((fVar63 < fVar52 || ((int)unaff_x19[0x5c] == 0)))) {
                              bVar15 = false;
                              *puVar2 = uVar8;
                              uVar86 = uVar86 - 1;
                              in_stack_000017d8 = CONCAT44(0x2d,uVar8);
                              goto LAB_03549564;
                            }
                            if (*(short *)(lVar25 + (long)(int)uVar43 * 0x178 + 0x20) == 0xad) {
                              bVar15 = true;
                              goto LAB_03549564;
                            }
                            if ((bVar10 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                              fVar75 = *(float *)((long)unaff_x19 + 0x2d4);
                              fVar81 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                              if ((fVar81 <= fVar75) ||
                                 ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                                fVar75 = *(float *)((long)unaff_x19 + 0x1e4);
                                uVar69 = (ulong)(uint)fVar75;
                                fVar81 = *(float *)(unaff_x19 + 0x4a);
                                if ((fVar75 <= fVar81) ||
                                   ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                                goto LAB_0354b6dc;
LAB_0354fcd0:
                                fVar83 = (fVar75 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                if (fVar83 <= DAT_00d38b84) {
                                  fVar83 = DAT_00d38b84;
                                }
                                *(float *)((long)unaff_x19 + 0x23c) = fVar75;
                                fVar75 = fVar75 - fVar83;
                                goto LAB_0354fc60;
                              }
LAB_0354fc94:
                              fVar83 = fVar54;
                              if (0.0 < fVar75) {
                                fVar83 = fVar54 / (1.0 - fVar75);
                              }
                              fVar75 = fVar75 + (fVar54 - fVar78 * (fStack00000000000000fc +
                                                                   DAT_00d38cc4)) / fVar83;
LAB_0354fc24:
                              if (fVar81 <= fVar75) {
                                fVar75 = fVar81;
                              }
                              *(float *)((long)unaff_x19 + 0x2d4) = fVar75;
                              return;
                            }
LAB_0354b6dc:
                            lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar25 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar25 = *(long *)puVar12;
                            }
                            iVar19 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xe78);
                            if (((iVar19 != iStack000000000000002c) && (iVar19 != -1)) &&
                               (bVar10 == 1)) {
                              if (*(int *)(lVar25 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar86 = FUN_0358c15c();
                              if ((unaff_x19[0x6d] == 0) ||
                                 (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
                              goto LAB_0354fbf4;
                              uVar43 = *puVar2 - 1;
                              if (*(uint *)(lVar25 + 0x18) <= uVar43)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              iStack000000000000002c = iVar19;
                              if (*(short *)(lVar25 + (long)(int)uVar43 * 0x178 + 0x20) == 0xad) {
                                bVar15 = false;
                                *puVar2 = uVar43;
                                uVar86 = uVar86 - 1;
                                in_stack_000017d8 = CONCAT44(0x2d,uVar43);
                                goto LAB_03549564;
                              }
                            }
                            if (fVar63 <= fVar52) {
switchD_0354b88c_caseD_0:
                              FUN_0358cbd4(fVar83,uVar30,fVar58,
                                           *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                           fStack00000000000000d0,fVar59,fStack00000000000000fc,
                                           fVar53);
                            }
                            else {
                              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                     *(undefined4 *)((long)unaff_x19 + 0x494);
                              }
                              fVar81 = fVar52;
                              if ((char)unaff_x19[0x47] != '\0') {
                                fVar81 = *(float *)(unaff_x19 + 0x59);
                                if ((fVar81 < *(float *)((long)unaff_x19 + 700)) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  fVar83 = *(float *)((long)unaff_x19 + 700) +
                                           ((fVar72 - fVar63) / (float)((int)unaff_x19[0x95] + 1)) /
                                           fVar83;
                                  if (fVar83 <= fVar81) {
                                    fVar83 = fVar81;
                                  }
UnityEngine_AndroidJavaObject___ctor:
                                  *(float *)((long)unaff_x19 + 700) = fVar83;
                                  return;
                                }
                                fVar75 = *(float *)((long)unaff_x19 + 0x2d4);
                                fVar81 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                if ((fVar75 < fVar81) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                goto LAB_0354fc94;
                                fVar75 = *(float *)((long)unaff_x19 + 0x1e4);
                                uVar69 = (ulong)(uint)fVar75;
                                fVar81 = *(float *)(unaff_x19 + 0x4a);
                                if ((fVar81 < fVar75) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                goto LAB_0354fcd0;
                              }
                              switch((int)unaff_x19[0x5c]) {
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
                                lVar25 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                                if ((*(byte *)(lVar25 + 0x135) & 1) == 0) {
                                  lVar25 = FUN_01a46ff8(lVar25);
                                }
                                piVar31 = (int *)thunk_FUN_01a59484(lVar26 + 0x11f0,
                                                                    *(long *)(*(long *)(*(long *)(
                                                  lVar25 + 0xc0) + 8) + 0x80) + 0xa0);
                                if (*piVar31 == 0) {
                                  bVar15 = false;
                                  goto LAB_0354cf2c;
                                }
                                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar25 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                FUN_0209b778(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x000008b0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                                iVar19 = FUN_0358c15c();
                                bVar15 = false;
                                goto LAB_0354b3a0;
                              case 3:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar86 = FUN_0358c15c();
                                bVar15 = false;
                                goto LAB_0354b0e0;
                              case 5:
                                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                FUN_0358cbd4(fVar83,uVar30,fVar58,
                                             *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                             fStack00000000000000d0,fVar59,fStack00000000000000fc,
                                             fVar53);
                                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                                *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                                break;
                              case 6:
                                lVar25 = unaff_x19[0x5d];
                                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar28 = FUN_036cee6c(lVar25,0,0);
                                if ((uVar28 & 1) != 0) {
                                  plVar49 = (long *)unaff_x19[0x5d];
                                  uVar32 = (**(code **)(*unaff_x19 + 0x518))();
                                  if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                  (**(code **)(*plVar49 + 0x528))
                                            (plVar49,uVar32,*(undefined8 *)(*plVar49 + 0x530));
                                  lVar25 = unaff_x19[0x5d];
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                  *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
                                  FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                  plVar49 = (long *)unaff_x19[0x5d];
                                  if (plVar49 == (long *)0x0) goto LAB_0354fbf4;
                                  (**(code **)(*plVar49 + 0x7a8))
                                            (plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7b0));
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
                                bVar15 = false;
                                goto LAB_0354b4b4;
                              default:
                                bVar15 = false;
                                goto LAB_0354b8e4;
                              }
                            }
                            bVar15 = false;
LAB_0354c6b4:
                            bVar10 = 1;
                            bVar11 = true;
                            uVar69 = uVar30;
                            uVar30 = (ulong)(uint)fVar55;
                            goto LAB_03549564;
                          }
LAB_0354b8e4:
                          if (uVar18 != 0xad) {
                            if (uVar18 == 9) {
                              lVar25 = *plVar4;
                              if ((lVar25 != 0) && (lVar26 = *(long *)(lVar25 + 0x38), lVar26 != 0))
                              {
                                uVar21 = *puVar2;
                                if (*(uint *)(lVar26 + 0x18) <= uVar21)
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                *(undefined1 *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x194) = 0;
                                *(uint *)((long)unaff_x19 + 0x4a4) = uVar21;
                                lVar26 = *(long *)(lVar25 + 0x50);
                                if (lVar26 != 0) {
                                  if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar26 + 0x18)) {
                                    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                    *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                                    goto LAB_0354b950;
                                  }
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                }
                              }
                            }
                            else {
                              if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                                (**(code **)(*unaff_x19 + 0x898))(fVar81,fVar61);
                              }
                              else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                                (**(code **)(*unaff_x19 + 0x888))(fStack000000000000016c);
                              }
                              if (bVar11) {
                                *(uint *)((long)unaff_x19 + 0x49c) = *puVar2;
                              }
                              *(uint *)((long)unaff_x19 + 0x4a4) = *puVar2;
                              *(int *)((long)unaff_x19 + 0x4ac) =
                                   *(int *)((long)unaff_x19 + 0x4ac) + 1;
                              if ((unaff_x19[0x6d] != 0) &&
                                 (lVar25 = *(long *)(unaff_x19[0x6d] + 0x50), lVar25 != 0)) {
                                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar25 + 0x18)) {
                                  lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                  bVar11 = false;
                                  *(float *)(lVar25 + 0x60) = fVar79;
                                  *(float *)(lVar25 + 100) = fVar60;
                                  goto LAB_0354ba38;
                                }
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              }
                            }
                            goto LAB_0354fbf4;
                          }
                          if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *(undefined1 *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x194) = 0;
                        }
                        else {
                          if (((uVar18 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                            fVar54 = (float)uVar69;
                            fVar78 = 0.0;
                            if ((0.0 < fVar54) &&
                               (fVar78 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                              fVar78 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                            }
                            uVar69 = (ulong)(uint)fVar52;
                            if (fVar52 < (*(float *)(unaff_x19 + 0x97) -
                                         (*(float *)((long)unaff_x19 + 0x4cc) - fVar54)) + fVar78) {
                              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                *(uint *)((long)unaff_x19 + 0x2e4) = uVar21;
                              }
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar86 = FUN_0358c15c();
                              lVar25 = unaff_x19[0x5d];
                              if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                              }
                              uVar28 = FUN_036cee6c(lVar25,0,0);
                              if ((uVar28 & 1) != 0) {
                                plVar49 = (long *)unaff_x19[0x5d];
                                uVar32 = (**(code **)(*unaff_x19 + 0x518))();
                                if (plVar49 != (long *)0x0) {
                                  (**(code **)(*plVar49 + 0x528))
                                            (plVar49,uVar32,*(undefined8 *)(*plVar49 + 0x530));
                                  lVar25 = unaff_x19[0x5d];
                                  if (lVar25 != 0) {
                                    *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
                                    FUN_0357ee30(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                    plVar49 = (long *)unaff_x19[0x5d];
                                    if (plVar49 != (long *)0x0) {
                                      (**(code **)(*plVar49 + 0x7a8))
                                                (plVar49,0,0,*(undefined8 *)(*plVar49 + 0x7b0));
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
                          if ((((uVar18 - 0x2007 < 0x23) &&
                               ((1L << ((ulong)(uVar18 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                              (uVar18 - 10 < 2)) || (uVar18 == 0xa0)) {
LAB_0354b500:
                            if (((uVar18 != 0xad) && (uVar18 != 0x200b)) && (uVar18 != 0x2060)) {
                              lVar25 = *plVar4;
                              if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x50), lVar26 == 0))
                              goto LAB_0354fbf4;
                              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                              *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
                            }
                          }
                          else {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar30 = FUN_026b97f8(uVar18,0);
                            if ((uVar30 & 1) != 0) goto LAB_0354b500;
                          }
                          if (uVar18 == 0xa0) {
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x50), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
                            *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
                          }
                        }
LAB_0354ba38:
                        if (((int)unaff_x19[0x5c] == 1) && ((uVar18 == 0x2d || (!bVar9)))) {
                          if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                          fVar78 = *(float *)(unaff_x19 + 0x3d);
                          iVar19 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                          if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                          fVar79 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                          lVar25 = unaff_x19[0xca];
                          fVar54 = fVar70;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar54 = 1.0;
                          }
                          if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_0354fbf4;
                          fVar81 = *(float *)((long)unaff_x19 + 0x404);
                          fVar75 = *(float *)(lVar25 + 0x2c);
                          fVar60 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                          fVar61 = *(float *)(unaff_x19 + 0x6a);
                          fVar60 = fVar81 * (fVar78 / (float)iVar19) * fVar79 * fVar54 * fVar75 *
                                   fVar60;
                          fVar78 = *(float *)((long)unaff_x19 + 0x354);
                          if ((uVar18 == 10) &&
                             (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x38), lVar25 == 0))
                            goto LAB_0354fbf4;
                            uVar21 = *(int *)((long)unaff_x19 + 0x494) - 1;
                            if (*(uint *)(lVar25 + 0x18) <= uVar21)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                            fVar54 = *(float *)(lVar25 + (long)(int)uVar21 * 0x178 + 0x60);
                            iVar19 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                            if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                            fVar81 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                            lVar25 = unaff_x19[0xca];
                            fVar79 = fVar70;
                            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                              fVar79 = 1.0;
                            }
                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_0354fbf4;
                            fVar75 = *(float *)((long)unaff_x19 + 0x404);
                            fVar63 = *(float *)(lVar25 + 0x2c);
                            fVar60 = (float)FUN_03776ea8(*(long *)(lVar25 + 0x20),0);
                            if ((*plVar4 == 0) || (lVar25 = *(long *)(*plVar4 + 0x50), lVar25 == 0))
                            goto LAB_0354fbf4;
                            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            fVar61 = *(float *)(lVar25 + 0x60);
                            fVar78 = *(float *)(lVar25 + 100);
                            fVar60 = fVar75 * (fVar54 / (float)iVar19) * fVar81 * fVar79 * fVar63 *
                                     fVar60;
                          }
                          fVar81 = *(float *)(unaff_x19 + 0x9b);
                          fVar54 = 0.0;
                          fVar79 = 0.0;
                          if ((0.0 < fVar81) &&
                             (fVar79 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar79 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          fVar63 = *(float *)(unaff_x19 + 0x97);
                          fVar85 = *(float *)((long)unaff_x19 + 0x4cc);
                          fVar75 = *(float *)(unaff_x19 + 200);
                          if ((char)unaff_x19[0x1e] == '\0') {
                            if ((unaff_x19[0xca] == 0) ||
                               (lVar25 = *(long *)(unaff_x19[0xca] + 0x20), lVar25 == 0))
                            goto LAB_0354fbf4;
                            FUN_03776e6c(&stack0x000008b0,lVar25,0);
                            fVar54 = (float)FUN_03776cb4(&stack0x00001710,0);
                          }
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          fVar65 = *(float *)(unaff_x19 + 0x6c);
                          fVar78 = (fVar84 - fVar61) - fVar78;
                          bVar14 = true;
                          if ((fVar65 <= fVar78) && (bVar14 = false, !NAN(fVar65))) {
                            bVar14 = fVar65 == -1.0;
                          }
                          if (!bVar14) {
                            fVar78 = fVar65;
                          }
                          fVar61 = 1.0;
                          if ((uVar42 & 0x18) != 0) {
                            fVar61 = DAT_00d38acc;
                          }
                          if (((fVar63 - (fVar85 - fVar81)) + fVar79 < fVar52) &&
                             (ABS(fVar75) +
                              fVar60 * fVar54 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                              fVar61 * fVar78)) {
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                            lVar25 = *(long *)(*(long *)puVar12 + 0xb8);
                            memcpy(&stack0x00000538,(void *)(lVar25 + 0x788),0x378);
                            FUN_0209b210(lVar25 + 0x11f0,&stack0x00000538,
                                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                          }
                        }
                        lVar25 = *plVar4;
                        if (lVar25 == 0) goto LAB_0354fbf4;
                        lVar26 = *(long *)(lVar25 + 0x38);
                        if (lVar26 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar26 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar21 = *(uint *)(unaff_x19 + 0x95);
                        lVar26 = lVar26 + (long)(int)*puVar2 * 0x178;
                        *(uint *)(lVar26 + 100) = uVar21;
                        *(int *)(lVar26 + 0x68) = (int)unaff_x19[0x96];
                        if ((bVar9) ||
                           ((uVar18 < 0xe && ((1 << (ulong)(uVar18 & 0x1f) & 0x2c00U) != 0)))) {
                          lVar25 = *(long *)(lVar25 + 0x50);
                          if (lVar25 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= uVar21)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          if (*(int *)(lVar25 + (long)(int)uVar21 * 0x5c + 0x24) == 1)
                          goto LAB_0354bde0;
                        }
                        else {
                          lVar25 = *(long *)(lVar25 + 0x50);
                          if (lVar25 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
                          if (*(uint *)(lVar25 + 0x18) <= uVar21)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          *(int *)(lVar25 + (long)(int)uVar21 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                        }
                        if (uVar18 == 9) {
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar78 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar64 = *(float *)(unaff_x19 + 200);
                          fVar54 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
                          fVar78 = fVar55 * fVar78 * fVar54;
                          fVar54 = fVar78 * (float)(int)(fVar64 / fVar78);
                          uVar69 = (ulong)(uint)fVar54;
                          if (fVar54 <= fVar64) {
                            fVar54 = fVar64 + fVar78;
                          }
LAB_0354c000:
                          *(float *)(unaff_x19 + 200) = fVar54;
                        }
                        else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                          if ((char)unaff_x19[0x1e] == '\0') {
                            if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                              fVar79 = 1.0;
                            }
                            else {
                              fVar79 = (float)thunk_FUN_036bc400(lVar36,0);
                            }
                            fVar54 = *(float *)(unaff_x19 + 200);
                            fVar60 = (float)FUN_03776cb4(&stack0x000017a0,0);
                            if (unaff_x19[0x20] != 0) {
                              fVar78 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                              fVar54 = fVar54 + fVar78 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                         fVar55 * (fVar64 + fVar79 * fVar60) +
                                                         fVar58 * (fStack00000000000000d0 +
                                                                  fVar59 + *(float *)(unaff_x19[0x20
                                                  ] + 0x1ac)));
                              *(float *)(unaff_x19 + 200) = fVar54;
                              goto joined_r0x0354bf48;
                            }
                            goto LAB_0354fbf4;
                          }
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar54 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (*(float *)((long)unaff_x19 + 0x2ac) +
                                   fVar55 * fVar64 +
                                   fVar58 * (fStack00000000000000d0 +
                                            fVar59 + *(float *)(*unaff_x21 + 0x1ac)));
                          uVar69 = (ulong)(uint)fVar54;
                          fVar54 = *(float *)(unaff_x19 + 200) - fVar54;
                          *(float *)(unaff_x19 + 200) = fVar54;
                          if ((uVar18 == 0x200b) || (uVar20 != 0)) {
                            fVar78 = fVar58 * *(float *)((long)unaff_x19 + 0x2b4);
                            uVar69 = (ulong)(uint)fVar78;
                            fVar54 = fVar54 - fVar78;
                            goto LAB_0354c000;
                          }
                        }
                        else {
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar78 = *(float *)(unaff_x19 + 200);
                          fVar54 = fVar78 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                            (*(float *)((long)unaff_x19 + 0x2ac) +
                                            (*(float *)(unaff_x19 + 0x56) - fVar62) +
                                            fVar58 * (fVar59 + *(float *)(*unaff_x21 + 0x1ac)));
                          *(float *)(unaff_x19 + 200) = fVar54;
joined_r0x0354bf48:
                          if ((uVar18 == 0x200b) || (uVar69 = (ulong)(uint)fVar78, uVar20 != 0)) {
                            fVar78 = fVar58 * *(float *)((long)unaff_x19 + 0x2b4);
                            uVar69 = (ulong)(uint)fVar78;
                            fVar54 = fVar54 + fVar78;
                            goto LAB_0354c000;
                          }
                        }
                        lVar25 = *plVar4;
                        if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                        goto LAB_0354fbf4;
                        uVar21 = *puVar2;
                        uVar42 = (uint)*(undefined8 *)(lVar26 + 0x18);
                        if (uVar42 <= uVar21)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(float *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x144) = fVar54;
                        uVar43 = uVar18;
                        if ((int)uVar18 < 0xd) {
                          if ((uVar18 - 10 < 2) || (uVar18 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
                          if (((bool)(bVar9 & uVar18 == 0x2d)) || (uVar21 == uVar39))
                          goto LAB_0354c060;
                        }
                        else {
                          if (1 < uVar18 - 0x2028) {
                            if (uVar18 != 0xd) goto LAB_0354c6e8;
                            uVar69 = 0;
                            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                            if (uVar21 != uVar39) goto LAB_0354c704;
                          }
LAB_0354c060:
                          if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                            fVar78 = *(float *)(unaff_x19 + 0x99);
                            fVar54 = *(float *)(unaff_x19 + 0x9a);
                            if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            fVar78 = fVar78 - fVar54;
                            if (((fVar80 < ABS(fVar78)) &&
                                (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                               (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                              FUN_0358c860(fVar78);
                              *(float *)((long)unaff_x19 + 0x4c4) =
                                   *(float *)((long)unaff_x19 + 0x4c4) - fVar78;
                              *(float *)(unaff_x19 + 0x9b) = fVar78 + *(float *)(unaff_x19 + 0x9b);
                              puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar25 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar25 = *(long *)puVar12;
                              }
                              lVar26 = *(long *)(lVar25 + 0xb8);
                              if (*(int *)(lVar26 + 0x7ac) == (int)unaff_x19[0x95]) {
                                if (*(int *)(lVar25 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar26 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                  ;
                                }
                                FUN_0209b778(lVar26 + 0x11f0,&stack0x000008b0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&stack0x000008b0,
                                       0x378);
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (*(long *)(lVar25 + 0xb8) + 0x818,0);
                                lVar25 = *(long *)(*(long *)puVar12 + 0xb8);
                                *(float *)(lVar25 + 0x7bc) = fVar78 + *(float *)(lVar25 + 0x7bc);
                                *(float *)(lVar25 + 0x800) = fVar78 + *(float *)(lVar25 + 0x800);
                                memcpy(&stack0x000001c0,(void *)(lVar25 + 0x788),0x378);
                                FUN_0209b210(lVar25 + 0x11f0,&stack0x000001c0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                              }
                            }
                          }
                          fVar64 = *(float *)(unaff_x19 + 0x9b);
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                          fVar54 = *(float *)((long)unaff_x19 + 0x4cc) - fVar64;
                          fVar78 = *(float *)((long)unaff_x19 + 0x4c4);
                          if (fVar54 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                            fVar78 = fVar54;
                          }
                          *(float *)((long)unaff_x19 + 0x4c4) = fVar78;
                          fVar79 = *(float *)(unaff_x19 + 0x99);
                          if (in_stack_000017e4 == '\0') {
                            fVar87 = fVar78;
                          }
                          if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                             (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                              ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                            in_stack_000017e4 = '\x01';
                          }
                          lVar25 = *plVar4;
                          if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x50), lVar26 == 0))
                          goto LAB_0354fbf4;
                          uVar21 = *(uint *)(unaff_x19 + 0x95);
                          if (*(uint *)(lVar26 + 0x18) <= uVar21)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar51 = unaff_x19[0x93];
                          lVar29 = lVar26 + (long)(int)uVar21 * 0x5c;
                          *(int *)(lVar29 + 0x34) = (int)lVar51;
                          uVar42 = *(uint *)(unaff_x19 + 0x93);
                          if ((int)lVar51 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                            uVar42 = *(uint *)((long)unaff_x19 + 0x49c);
                          }
                          *(uint *)((long)unaff_x19 + 0x49c) = uVar42;
                          *(uint *)(lVar29 + 0x38) = uVar42;
                          *(undefined4 *)(unaff_x19 + 0x94) =
                               *(undefined4 *)((long)unaff_x19 + 0x494);
                          *(undefined4 *)(lVar29 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                          iVar19 = *(int *)((long)unaff_x19 + 0x49c);
                          if ((int)uVar42 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                            iVar19 = *(int *)((long)unaff_x19 + 0x4a4);
                          }
                          *(int *)((long)unaff_x19 + 0x4a4) = iVar19;
                          *(int *)(lVar29 + 0x40) = iVar19;
                          *(int *)(lVar29 + 0x24) =
                               (*(int *)(lVar29 + 0x3c) - *(int *)(lVar29 + 0x34)) + 1;
                          *(undefined4 *)(lVar29 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                          lVar25 = *(long *)(lVar25 + 0x38);
                          if (lVar25 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= uVar42)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar17 = *(undefined4 *)(lVar25 + (long)(int)uVar42 * 0x178 + 0x11c);
                          lVar26 = lVar26 + (long)(int)uVar21 * 0x5c;
                          *(float *)(lVar26 + 0x70) = fVar54;
                          *(undefined4 *)(lVar26 + 0x6c) = uVar17;
                          lVar25 = *plVar4;
                          if ((lVar25 == 0) || (lVar26 = *(long *)(lVar25 + 0x50), lVar26 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar25 = *(long *)(lVar25 + 0x38);
                          if (lVar25 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fVar79 = fVar79 - fVar64;
                          uVar69 = (ulong)(uint)fVar79;
                          lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                          *(undefined4 *)(lVar26 + 0x74) =
                               *(undefined4 *)
                                (lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * 0x178 +
                                0x128);
                          *(float *)(lVar26 + 0x78) = fVar79;
                          lVar25 = *plVar4;
                          if ((lVar25 == 0) || (lVar51 = *(long *)(lVar25 + 0x50), lVar51 == 0))
                          goto LAB_0354fbf4;
                          lVar29 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                          if (*(uint *)(lVar51 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar26 = lVar51 + lVar29 * 0x5c;
                          *(float *)(lVar26 + 0x44) =
                               *(float *)(lVar26 + 0x74) - fVar55 * fStack000000000000016c;
                          *(float *)(lVar26 + 0x5c) = fStack00000000000000fc;
                          if (*(int *)(lVar26 + 0x24) == 1) {
                            *(int *)(lVar51 + lVar29 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                          }
                          if ((*unaff_x21 == 0) || (lVar26 = *(long *)(lVar25 + 0x38), lVar26 == 0))
                          goto LAB_0354fbf4;
                          lVar45 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                          uVar42 = (uint)*(undefined8 *)(lVar26 + 0x18);
                          if (uVar42 <= *(uint *)((long)unaff_x19 + 0x4a4))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          if ((*(char *)(lVar26 + lVar45 * 0x178 + 0x194) == '\0') &&
                             (lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                             uVar42 <= *(uint *)(unaff_x19 + 0x94)))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar51 = lVar51 + lVar29 * 0x5c;
                          fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                   (fVar58 * (fStack00000000000000d0 +
                                             fVar59 + *(float *)(*unaff_x21 + 0x1ac)) -
                                   *(float *)((long)unaff_x19 + 0x2ac));
                          fVar78 = -fVar59;
                          if ((char)unaff_x19[0x1e] != '\0') {
                            fVar78 = fVar59;
                          }
                          *(float *)(lVar51 + 0x58) =
                               *(float *)(lVar26 + lVar45 * 0x178 + 0x144) + fVar78;
                          *(float *)(lVar51 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                          *(float *)(lVar51 + 0x54) = fVar54;
                          *(float *)(lVar51 + 0x48) = fVar83 * fVar53 + (fVar79 - fVar54);
                          *(float *)(lVar51 + 0x4c) = fVar79;
                          if ((int)uVar18 < 0x2d) {
                            if (uVar18 - 10 < 2) {
LAB_0354c4a8:
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              FUN_0358c4f0();
                              lVar25 = unaff_x19[0x6d];
                              *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                              iVar19 = (int)unaff_x19[0x95] + 1;
                              *(int *)(unaff_x19 + 0x95) = iVar19;
                              *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                              if ((lVar25 != 0) && (*(long *)(lVar25 + 0x50) != 0)) {
                                if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar19) {
                                  FUN_0358ca18();
                                  lVar25 = unaff_x19[0x6d];
                                  if (lVar25 == 0) goto LAB_0354fbf4;
                                }
                                lVar25 = *(long *)(lVar25 + 0x38);
                                if (lVar25 != 0) {
                                  if (*puVar2 < *(uint *)(lVar25 + 0x18)) {
                                    fVar78 = *(float *)(lVar25 + (long)(int)*puVar2 * 0x178 + 0x154)
                                    ;
                                    if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                      if ((uVar18 == 0x2029) || (fVar54 = 0.0, uVar18 == 10)) {
                                        fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
                                      }
                                      uVar33 = 0;
                                      fVar54 = fVar78 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc))
                                               + fVar83 * (fVar53 + *(float *)((long)unaff_x19 + 700
                                                                              )) +
                                               fVar58 * (*(float *)(unaff_x19 + 0x57) + fVar54) +
                                               *(float *)(unaff_x19 + 0x9b);
                                    }
                                    else {
                                      if ((uVar18 == 0x2029) || (fVar54 = 0.0, uVar18 == 10)) {
                                        fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
                                      }
                                      uVar33 = 1;
                                      fVar54 = *(float *)(unaff_x19 + 0x9b) +
                                               *(float *)(unaff_x19 + 0x58) +
                                               fVar58 * (*(float *)(unaff_x19 + 0x57) + fVar54);
                                    }
                                    *(float *)(unaff_x19 + 0x9b) = fVar54;
                                    *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar33;
                                    puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    lVar25 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                    if (*(int *)(lVar25 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                      lVar25 = *(long *)puVar12;
                                    }
                                    uVar32 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
                                    *(float *)(unaff_x19 + 0x9a) = fVar78;
                                    uVar30 = NEON_rev64(uVar32,4);
                                    unaff_x19[0x99] = uVar30;
                                    *(float *)(unaff_x19 + 200) =
                                         *(float *)(unaff_x19 + 0x81) + 0.0 +
                                         *(float *)((long)unaff_x19 + 0x40c);
                                    FUN_0358c4f0();
                                    FUN_0358c4f0();
                                    *(int *)((long)unaff_x19 + 0x494) =
                                         *(int *)((long)unaff_x19 + 0x494) + 1;
                                    goto LAB_0354c6b4;
                                  }
                                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                                }
                              }
                              goto LAB_0354fbf4;
                            }
                            if (uVar18 == 3) {
                              if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                              uVar86 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                              uVar43 = 3;
                            }
                          }
                          else if ((uVar18 - 0x2028 < 2) || (uVar18 == 0x2d)) goto LAB_0354c4a8;
                        }
LAB_0354c704:
                        uVar21 = *puVar2;
                        if (uVar42 <= uVar21)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (*(char *)(lVar26 + (long)(int)uVar21 * 0x178 + 0x194) != '\0') {
                          lVar26 = lVar26 + (long)(int)uVar21 * 0x178;
                          uVar69 = *(ulong *)(lVar26 + 0x11c);
                          uVar30 = *(ulong *)((long)unaff_x19 + 0x4dc);
                          *(ulong *)((long)unaff_x19 + 0x4dc) =
                               uVar30 ^ (uVar30 ^ uVar69) &
                                        ~CONCAT44(-(uint)((float)(uVar30 >> 0x20) <
                                                         (float)(uVar69 >> 0x20)),
                                                  -(uint)((float)uVar30 < (float)uVar69));
                          uVar30 = *(ulong *)((long)unaff_x19 + 0x4e4);
                          uVar69 = *(ulong *)(lVar26 + 0x128);
                          *(ulong *)((long)unaff_x19 + 0x4e4) =
                               uVar30 ^ (uVar30 ^ uVar69) &
                                        ~CONCAT44(-(uint)((float)(uVar69 >> 0x20) <
                                                         (float)(uVar30 >> 0x20)),
                                                  -(uint)((float)uVar69 < (float)uVar30));
                        }
                        if (((int)unaff_x19[0x5c] == 5) &&
                           ((0xd < uVar43 || ((1 << (ulong)(uVar43 & 0x1f) & 0x2c00U) == 0)))) {
                          lVar26 = *(long *)(lVar25 + 0x58);
                          if (lVar26 == 0) goto LAB_0354fbf4;
                          iVar19 = (int)unaff_x19[0x96] + 1;
                          if (*(int *)(lVar26 + 0x18) < iVar19) {
                            if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_01ff02b8((long *)(lVar25 + 0x58),iVar19,1,
                                         *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                            lVar25 = *plVar4;
                            if (lVar25 == 0) goto LAB_0354fbf4;
                          }
                          lVar26 = *(long *)(lVar25 + 0x58);
                          if (lVar26 == 0) goto LAB_0354fbf4;
                          uVar42 = *(uint *)(unaff_x19 + 0x96);
                          lVar51 = (long)(int)uVar42;
                          uVar21 = *(uint *)(lVar26 + 0x18);
                          if (uVar21 <= uVar42)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar29 = lVar26 + lVar51 * 0x14;
                          fVar54 = *(float *)(lVar29 + 0x30);
                          uVar69 = (ulong)(uint)fVar54;
                          *(undefined4 *)(lVar29 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                          fVar78 = *(float *)((long)unaff_x19 + 0x4c4);
                          if (fVar54 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                            fVar78 = fVar54;
                          }
                          *(float *)(lVar29 + 0x30) = fVar78;
                          uVar43 = *(uint *)((long)unaff_x19 + 0x494);
                          if (uVar43 == 0 && uVar42 == 0) {
                            *(uint *)(lVar26 + (ulong)uVar42 * 0x14 + 0x20) = uVar43;
                          }
                          else {
                            uVar8 = uVar43 - 1;
                            if (0 < (int)uVar43) {
                              lVar25 = *(long *)(lVar25 + 0x38);
                              if (lVar25 == 0) goto LAB_0354fbf4;
                              if (*(uint *)(lVar25 + 0x18) <= uVar8)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              if (uVar42 != *(uint *)(lVar25 + (ulong)uVar8 * 0x178 + 0x68)) {
                                if (uVar42 - 1 < uVar21) {
                                  *(uint *)(lVar26 + 0x20 + (long)(int)(uVar42 - 1) * 0x14 + 4) =
                                       uVar8;
                                  *(uint *)(lVar26 + 0x20 + lVar51 * 0x14) = uVar43;
                                  goto LAB_0354c780;
                                }
                                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              }
                            }
                            if (uVar43 == uVar39) {
                              *(uint *)(lVar26 + lVar51 * 0x14 + 0x24) = uVar39;
                            }
                          }
                        }
LAB_0354c780:
                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (((char)unaff_x19[0x5b] == '\0') &&
                           ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                            ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                        goto LAB_0354cc90;
                        if ((uVar20 == 0) &&
                           (((uVar18 != 0x2d && (uVar18 != 0x200b)) && (uVar18 != 0xad)))) {
                          if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
                            if (((((0x2bfd < uVar18 - 0xac01) && (0xfd < uVar18 - 0x1101)) &&
                                 (0x1d < uVar18 - 0xa961)) ||
                                (uVar30 = FUN_03597a54(0), (uVar30 & 1) != 0)) &&
                               ((((0xed < uVar18 - 0xff01 && (0x1d < uVar18 - 0xfe31)) &&
                                 (0x717d < uVar18 - 0x2e81)) && (0x1fd < uVar18 - 0xf901))))
                            goto LAB_0354c904;
                            lVar25 = FUN_035978e8(0);
                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_0354fbf4;
                            uVar24 = (ulong)uVar18;
                            uVar21 = FUN_0219c130(*(long *)(lVar25 + 0x10),&stack0x000008b0,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                            if ((int)uVar39 <= (int)*puVar2) {
                              if ((uVar21 & 1) == 0) {
LAB_0354cc08:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                FUN_0358c4f0();
                                bVar10 = 0;
                                goto LAB_0354cc90;
                              }
LAB_0354cb6c:
                              if (uVar48 != uVar35 || ((bVar10 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
                              if (uVar20 != 0) goto LAB_0354cb88;
                              goto LAB_0354cbc0;
                            }
                            lVar25 = FUN_035978e8(0);
                            if (((lVar25 == 0) || (*plVar4 == 0)) ||
                               (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
                            if (*(uint *)(lVar26 + 0x18) <= *puVar2 + 1)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (*(long *)(lVar25 + 0x18) == 0) goto LAB_0354fbf4;
                            uVar24 = (ulong)*(ushort *)
                                             (lVar26 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20);
                            uVar30 = FUN_0219c130(*(long *)(lVar25 + 0x18),&stack0x000008b0,
                                                  *(undefined8 *)
                                                   OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                            if ((uVar21 & 1) != 0) goto LAB_0354cb6c;
                            if ((uVar30 & 1) == 0) goto LAB_0354cc08;
                            if (bVar10 == 0) goto LAB_0354cc88;
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
                            if (bVar10 == 0) goto LAB_0354cc88;
LAB_0354c910:
                            if (!bVar15 && uVar18 == 0xad) goto LAB_0354cb88;
LAB_0354cbc0:
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                          }
                          bVar10 = 1;
                        }
                        else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_0354c904:
                          if (bVar10 != 0) {
                            if (uVar20 == 0) goto LAB_0354c910;
LAB_0354cb88:
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                            goto LAB_0354cbc0;
                          }
LAB_0354cc88:
                          bVar10 = 0;
                        }
                        else {
                          if (((uVar18 - 0x2007 < 0x29) &&
                              ((1L << ((ulong)(uVar18 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                             ((uVar18 == 0xa0 || (uVar18 == 0x2060)))) goto LAB_0354c87c;
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          FUN_0358c4f0();
                          bVar10 = 0;
                          *(undefined4 *)(*(long *)(*(long *)puVar12 + 0xb8) + 0xe78) = 0xffffffff;
                        }
LAB_0354cc90:
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_0358c4f0();
                        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                        uVar30 = (ulong)(uint)fVar55;
                      }
                    }
                    else {
                      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                      uVar28 = FUN_03586568();
                      if (((uVar28 & 1) == 0) ||
                         (uVar86 = in_stack_0000179c, *(int *)((long)unaff_x19 + 0x644) != 0))
                      goto LAB_03549378;
                    }
LAB_03549564:
                    uVar86 = uVar86 + 1;
                    lVar25 = unaff_x19[0x8f];
                    uVar20 = uVar18;
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
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0354d7c0:
  uVar86 = uVar20 - 1;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x50), lVar26 == 0)) goto LAB_0354fbf4;
  lVar29 = (long)(int)uVar86;
  lVar51 = lVar36 + lVar29 * 0x178;
  uVar18 = *(uint *)(lVar51 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar18)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar45 = *(long *)(lVar51 + 0x38);
  lVar47 = (long)(int)uVar18;
  lVar26 = lVar26 + lVar47 * 0x5c;
  uVar48 = *(uint *)(lVar26 + 0x68);
  uVar42 = (uint)*(ushort *)(lVar51 + 0x20);
  uVar35 = *(uint *)(lVar26 + 0x3c);
  iVar6 = *(int *)(lVar26 + 0x20);
  iVar22 = *(int *)(lVar26 + 0x28);
  iVar23 = *(int *)(lVar26 + 0x2c);
  fVar57 = *(float *)(lVar26 + 0x4c);
  uVar21 = *(uint *)(lVar26 + 0x40);
  fVar84 = *(float *)(lVar26 + 0x54);
  fVar55 = *(float *)(lVar26 + 0x58);
  fVar77 = *(float *)(lVar26 + 0x5c);
  fVar80 = *(float *)(lVar26 + 0x60);
  fVar72 = *(float *)(lVar26 + 0x6c);
  fVar87 = *(float *)(lVar26 + 0x70);
  fVar56 = *(float *)(lVar26 + 0x74);
  fVar68 = *(float *)(lVar26 + 0x78);
  if ((int)uVar48 < 9) {
    switch(uVar48) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar80 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar55;
      }
      break;
    case 2:
LAB_0354d968:
      fStack00000000000000fc = (fVar80 + fVar77 * 0.5) - fVar55 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar77 + fVar80) - fVar55;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar77 + fVar80;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar48 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar42 < 0xad) {
      if ((uVar42 != 3) && (uVar42 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar36 + 0x18) <= uVar35)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar7 = *(undefined2 *)(lVar36 + (long)(int)uVar35 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b8cc4(uVar7,0);
      if ((uVar24 & 1) == 0) {
        bVar1 = (int)uVar18 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar55 <= fVar77) && (!bVar1 && uVar48 >> 4 == 0)) {
        fStack00000000000000fc = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar77 + fVar80;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar20 == 1) || (uVar18 != uVar39)) || (uVar86 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar77 + fVar80;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar42,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar34 = (char)unaff_x19[0x1e];
        fVar80 = -fVar55;
        if (cVar34 != '\0') {
          fVar80 = fVar55;
        }
        if (*(uint *)(lVar36 + 0x18) <= uVar35)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar23 = (int)*(char *)(lVar36 + (long)(int)uVar35 * 0x178 + 0x194) +
                 (-iVar6 - (uStack0000000000000030 & 1)) + iVar23 + -1;
        if (iVar23 < 1) {
          fVar55 = 1.0;
          iVar23 = 1;
        }
        else {
          fVar55 = *(float *)((long)unaff_x19 + 0x2dc);
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
            cVar34 = (char)unaff_x19[0x1e];
            if ((uVar24 & 1) != 0) goto LAB_0354f76c;
          }
          iVar23 = (iVar6 - (~uStack0000000000000030 & 1)) + iVar22;
        }
        fVar55 = ((fVar77 + fVar80) * fVar55) / (float)iVar23;
        if (cVar34 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar55;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar55;
        }
      }
    }
  }
  else if (uVar48 == 0x20) {
    fVar55 = fVar72 + fVar56;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar48 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar36 + lVar29 * 0x178;
  fVar80 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar55 = (float)uStack00000000000000b8 + (float)uStack00000000000000f0;
  fVar77 = (float)((ulong)uStack00000000000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar22 = *(int *)(lVar36 + lVar29 * 0x178 + 0x2c);
  if (iVar22 != 0) goto LAB_0354e05c;
  fVar54 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar18,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar51 = lVar36 + lVar29 * 0x178;
    *(undefined4 *)(lVar51 + 0x84) = 0;
    *(undefined4 *)(lVar51 + 0xac) = 0;
    *(undefined4 *)(lVar51 + 0xd4) = 0x3f800000;
    fVar54 = 1.0;
    break;
  case 1:
    fVar68 = *(float *)(lVar36 + lVar29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar51 = lVar36 + lVar29 * 0x178;
      fVar56 = (fStack00000000000000fc + fVar68) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar68 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_0354db24;
    }
    lVar51 = lVar36 + lVar29 * 0x178;
    fVar56 = fVar56 - fVar72;
    *(float *)(lVar51 + 0x84) = fVar54 + (fVar68 - fVar72) / fVar56;
    *(float *)(lVar51 + 0xac) = fVar54 + (*(float *)(lVar51 + 0x98) - fVar72) / fVar56;
    *(float *)(lVar51 + 0xd4) = fVar54 + (*(float *)(lVar51 + 0xc0) - fVar72) / fVar56;
    fVar54 = fVar54 + (*(float *)(lVar51 + 0xe8) - fVar72) / fVar56;
    break;
  case 2:
    lVar51 = lVar36 + lVar29 * 0x178;
    fVar68 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar56 = (fStack00000000000000fc + *(float *)(lVar51 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_0354db24:
    *(float *)(lVar51 + 0x84) = fVar54 + fVar56 / fVar68;
    *(float *)(lVar51 + 0xac) =
         fVar54 + ((fStack00000000000000fc + *(float *)(lVar51 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar51 + 0xd4) =
         fVar54 + ((fStack00000000000000fc + *(float *)(lVar51 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar54 = fVar54 + ((fStack00000000000000fc + *(float *)(lVar51 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar51 = lVar36 + lVar29 * 0x178;
      *(undefined4 *)(lVar51 + 0x88) = 0;
      *(undefined4 *)(lVar51 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar51 + 0xd8) = 0;
      *(undefined4 *)(lVar51 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar51 = lVar36 + lVar29 * 0x178;
      fVar68 = fVar68 - fVar87;
      fVar56 = fVar54 + (*(float *)(lVar51 + 0x74) - fVar87) / fVar68;
      fVar68 = fVar54 + (*(float *)(lVar51 + 0x9c) - fVar87) / fVar68;
      *(float *)(lVar51 + 0x88) = fVar56;
      *(float *)(lVar51 + 0xb0) = fVar68;
      *(float *)(lVar51 + 0xd8) = fVar56;
      *(float *)(lVar51 + 0x100) = fVar68;
      break;
    case 2:
      lVar51 = lVar36 + lVar29 * 0x178;
      fVar56 = fVar54 + (*(float *)(lVar51 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar51 + 0x88) = fVar56;
      fVar68 = *(float *)(unaff_x19 + 0x9c);
      fVar72 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar51 + 0xd8) = fVar56;
      fVar56 = fVar54 + (*(float *)(lVar51 + 0x9c) - fVar68) / (fVar72 - fVar68);
      *(float *)(lVar51 + 0xb0) = fVar56;
      *(float *)(lVar51 + 0x100) = fVar56;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar48 = (uint)*(undefined8 *)(lVar36 + 0x18);
    }
    if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar36 + lVar29 * 0x178;
    fVar56 = *(float *)(lVar51 + 0x15c);
    fVar68 = (1.0 - (*(float *)(lVar51 + 0x88) + *(float *)(lVar51 + 0xb0)) * fVar56) * 0.5;
    fVar72 = fVar54 + *(float *)(lVar51 + 0x88) * fVar56 + fVar68;
    fVar54 = fVar54 + fVar68 + *(float *)(lVar51 + 0xb0) * fVar56;
    *(float *)(lVar51 + 0x84) = fVar72;
    *(float *)(lVar51 + 0xac) = fVar72;
    *(float *)(lVar51 + 0xd4) = fVar54;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar36 + lVar29 * 0x178 + 0xfc) = fVar54;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar36 + lVar29 * 0x178;
    *(undefined4 *)(lVar51 + 0x88) = 0;
    *(undefined4 *)(lVar51 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar51 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar51 + 0x100) = 0;
    break;
  case 1:
    if (uVar86 < uVar48) {
      lVar51 = lVar36 + lVar29 * 0x178;
      fVar57 = fVar57 - fVar84;
      fVar54 = (*(float *)(lVar51 + 0x74) - fVar84) / fVar57;
      fVar57 = (*(float *)(lVar51 + 0x9c) - fVar84) / fVar57;
      *(float *)(lVar51 + 0x88) = fVar54;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar36 + lVar29 * 0x178;
    fVar54 = (*(float *)(lVar51 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar51 + 0x88) = fVar54;
    fVar57 = (*(float *)(lVar51 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar51 + 0xb0) = fVar57;
    *(float *)(lVar51 + 0xd8) = fVar57;
    *(float *)(lVar51 + 0x100) = fVar54;
    break;
  case 3:
    if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar36 + lVar29 * 0x178;
    fVar57 = *(float *)(lVar51 + 0x15c);
    fVar56 = (1.0 - (*(float *)(lVar51 + 0x84) + *(float *)(lVar51 + 0xd4)) / fVar57) * 0.5;
    fVar54 = *(float *)(lVar51 + 0x84) / fVar57 + fVar56;
    fVar56 = fVar56 + *(float *)(lVar51 + 0xd4) / fVar57;
    *(float *)(lVar51 + 0x88) = fVar54;
    *(float *)(lVar51 + 0xb0) = fVar56;
    *(float *)(lVar51 + 0x100) = fVar54;
    *(float *)(lVar51 + 0xd8) = fVar56;
  }
  if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar51 = lVar36 + lVar29 * 0x178;
  fVar54 = ABS(fVar83) * *(float *)(lVar51 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar51 + 0x5c) == '\0') && ((*(byte *)(lVar36 + lVar29 * 0x178 + 400) & 1) != 0)) {
    fVar54 = -fVar54;
  }
  lVar51 = lVar36 + lVar29 * 0x178;
  fVar57 = *(float *)(lVar51 + 0x88);
  fVar68 = *(float *)(lVar51 + 0x84);
  fVar56 = -2.1474836e+09;
  if (fVar68 != INFINITY) {
    fVar56 = (float)(int)fVar68;
  }
  fVar72 = *(float *)(lVar51 + 0xd4);
  fVar87 = *(float *)(lVar51 + 0xd8);
  fVar84 = -2.1474836e+09;
  if (fVar57 != INFINITY) {
    fVar84 = (float)(int)fVar57;
  }
  uVar67 = FUN_03591d3c(fVar68 - fVar56,fVar57 - fVar84);
  *(undefined4 *)(lVar51 + 0x84) = uVar67;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar87 = fVar87 - fVar84;
  *(float *)(lVar51 + 0x88) = fVar54;
  uVar67 = FUN_03591d3c(fVar68 - fVar56,fVar87);
  *(undefined4 *)(lVar36 + lVar29 * 0x178 + 0xac) = uVar67;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar72 = fVar72 - fVar56;
  *(float *)(lVar36 + lVar29 * 0x178 + 0xb0) = fVar54;
  fVar56 = (float)FUN_03591d3c(fVar72,fVar87);
  *(float *)(lVar51 + 0xd4) = fVar56;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar51 + 0xd8) = fVar54;
  uVar67 = FUN_03591d3c(fVar72,fVar57 - fVar84);
  *(undefined4 *)(lVar36 + lVar29 * 0x178 + 0xfc) = uVar67;
  uVar48 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar36 + lVar29 * 0x178 + 0x100) = fVar54;
LAB_0354e05c:
  if (((int)uVar86 < (int)unaff_x19[0x65]) && (iVar19 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar18 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar26 = lVar36 + lVar29 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar77 + *(float *)(lVar26 + 0x78);
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar77 + *(float *)(lVar26 + 0xa0);
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar77 + *(float *)(lVar26 + 200);
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar77 + *(float *)(lVar26 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar18 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar86 < uVar48) {
        if (*(uint *)(lVar36 + lVar29 * 0x178 + 0x68) == uVar5) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar48 = *(uint *)(lVar36 + 0x18);
  }
  puVar12 = PTR_DAT_03cbded8;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar51 = lVar36 + lVar29 * 0x178;
  *(undefined8 *)(lVar51 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar51 + 0x78) = uVar67;
  if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  lVar51 = lVar36 + lVar29 * 0x178;
  *(undefined8 *)(lVar51 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar51 + 0xa0) = uVar67;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar51 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar51 + 200) = uVar67;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar51 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar51 + 0xf0) = uVar67;
  *(undefined1 *)(lVar26 + 0x194) = 0;
LAB_0354e184:
  if (iVar22 == 0) {
    pcVar41 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar41)();
  }
  else if (iVar22 == 1) {
    pcVar41 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  uVar32 = *(undefined8 *)(lVar26 + 0x11c);
  *(undefined8 *)(lVar26 + 0x11c) =
       CONCAT44(fVar55 + (float)((ulong)uVar32 >> 0x20),fVar80 + (float)uVar32);
  *(float *)(lVar26 + 0x124) = fVar77 + *(float *)(lVar26 + 0x124);
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar77 + *(float *)(lVar26 + 0x118);
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar77 + *(float *)(lVar26 + 0x130);
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar26 = lVar26 + lVar29 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar80 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar77 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *plVar4;
  if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x38), lVar51 == 0)) goto LAB_0354fbf4;
  uVar48 = *(uint *)(lVar51 + 0x18);
  if (uVar48 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar44 = lVar51 + lVar29 * 0x178;
  *(float *)(lVar44 + 0x150) = fVar55 + *(float *)(lVar44 + 0x150);
  *(ulong *)(lVar44 + 0x140) =
       CONCAT44(fVar80 + (float)((ulong)*(undefined8 *)(lVar44 + 0x140) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar44 + 0x140));
  *(ulong *)(lVar44 + 0x148) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar44 + 0x148) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar44 + 0x148));
  if (uVar18 == uVar39) {
    uVar39 = *puVar2 - 1;
    if (uVar86 == uVar39) goto LAB_0354e3ec;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar39)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar44 = (long)(int)uVar39;
    lVar46 = lVar26 + lVar44 * 0x5c;
    fVar56 = fVar55 + *(float *)(lVar46 + 0x54);
    *(ulong *)(lVar46 + 0x4c) =
         CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar46 + 0x4c));
    *(float *)(lVar46 + 0x54) = fVar56;
    *(float *)(lVar46 + 0x58) = fVar80 + *(float *)(lVar46 + 0x58);
    if (uVar48 <= *(uint *)(lVar46 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar67 = *(undefined4 *)(lVar51 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar44 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar56;
    *(undefined4 *)(lVar26 + 0x6c) = uVar67;
    lVar26 = *plVar4;
    if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x50), lVar51 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar51 + 0x18) <= uVar39)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_0354fbf4;
    uVar39 = *(uint *)(lVar51 + lVar44 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar39)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar51 + lVar44 * 0x5c;
    *(undefined4 *)(lVar51 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar39 * 0x178 + 0x128);
    *(undefined4 *)(lVar51 + 0x78) = *(undefined4 *)(lVar51 + 0x4c);
    uVar39 = *puVar2 - 1;
LAB_0354e3ec:
    if (uVar86 == uVar39) {
      lVar26 = *plVar4;
      if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x50), lVar51 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar18)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar44 = lVar51 + lVar47 * 0x5c;
      fVar56 = fVar55 + *(float *)(lVar44 + 0x54);
      *(ulong *)(lVar44 + 0x4c) =
           CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar44 + 0x4c) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar44 + 0x4c));
      *(float *)(lVar44 + 0x54) = fVar56;
      *(float *)(lVar44 + 0x58) = fVar80 + *(float *)(lVar44 + 0x58);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar44 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar67 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar44 + 0x34) * 0x178 + 0x11c);
      lVar51 = lVar51 + lVar47 * 0x5c;
      *(float *)(lVar51 + 0x70) = fVar56;
      *(undefined4 *)(lVar51 + 0x6c) = uVar67;
      lVar26 = *plVar4;
      if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x50), lVar51 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar18)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      uVar39 = *(uint *)(lVar51 + lVar47 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar39)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar51 = lVar51 + lVar47 * 0x5c;
      *(undefined4 *)(lVar51 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar39 * 0x178 + 0x128);
      *(undefined4 *)(lVar51 + 0x78) = *(undefined4 *)(lVar51 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar24 = FUN_026b82c4(uVar42,0);
  if (((((uVar24 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
    if (bVar11) {
      if (((uVar20 != 1) && ((int)uVar86 < (int)(*(uint *)(lVar36 + 0x18) - 1))) &&
         (((int)uVar86 < (int)*puVar2 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
        if (*(uint *)(lVar36 + 0x18) <= uVar20 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar7 = *(undefined2 *)(lVar36 + lVar25 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b82c4(uVar7,0);
        if ((uVar24 & 1) != 0) {
          if (*(uint *)(lVar36 + 0x18) <= uVar20)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar7 = *(undefined2 *)(lVar36 + lVar25 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b82c4(uVar7,0);
          if ((uVar24 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar20 != 1) {
LAB_0354f144:
        bVar11 = false;
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
        if (((uVar42 != 0x200b) && ((uVar24 & 1) == 0)) && (*puVar2 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar86 == *puVar2 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b82c4(uVar42,0);
      iVar22 = (int)fStack0000000000000124;
      if ((uVar24 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar22 = uVar20 - 2;
    }
    lVar26 = *plVar4;
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar51 = *(long *)(lVar26 + 0x40);
    if (lVar51 == 0) goto LAB_0354fbf4;
    uVar39 = *(uint *)(lVar26 + 0x24);
    iVar23 = *(int *)(lVar51 + 0x18);
    if (iVar23 < (int)(uVar39 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar26 + 0x40),iVar23 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar26 = *plVar4;
      if (lVar26 == 0) goto LAB_0354fbf4;
    }
    lVar26 = *(long *)(lVar26 + 0x40);
    if (lVar26 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar26 + 0x18) <= uVar39)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar26 = lVar26 + (long)(int)uVar39 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(float *)(lVar26 + 0x28) = fStack000000000000016c;
    *(int *)(lVar26 + 0x2c) = iVar22;
    *(int *)(lVar26 + 0x30) = (iVar22 - (int)fStack000000000000016c) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar26 = unaff_x19[0x6d];
    if (lVar26 == 0) goto LAB_0354fbf4;
    lVar51 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar51 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar51 + 0x18) <= uVar18)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar51 = lVar51 + lVar47 * 0x5c;
    bVar11 = false;
    iVar19 = iVar19 + 1;
    *(int *)(lVar51 + 0x30) = *(int *)(lVar51 + 0x30) + 1;
  }
  else {
    if (!bVar11) {
      fStack000000000000016c = (float)uVar86;
    }
    if (uVar86 == *puVar2 - 1) {
      lVar26 = *plVar4;
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar51 = *(long *)(lVar26 + 0x40);
      if (lVar51 == 0) goto LAB_0354fbf4;
      uVar39 = *(uint *)(lVar26 + 0x24);
      iVar22 = *(int *)(lVar51 + 0x18);
      if (iVar22 < (int)(uVar39 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar26 + 0x40),iVar22 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar26 = *plVar4;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar39)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + (long)(int)uVar39 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(float *)(lVar26 + 0x28) = fStack000000000000016c;
      *(uint *)(lVar26 + 0x2c) = uVar86;
      *(uint *)(lVar26 + 0x30) = uVar20 - (int)fStack000000000000016c;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar26 = unaff_x19[0x6d];
      if (lVar26 == 0) goto LAB_0354fbf4;
      lVar51 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar51 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar18)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar51 = lVar51 + lVar47 * 0x5c;
      iVar19 = iVar19 + 1;
      *(int *)(lVar51 + 0x30) = *(int *)(lVar51 + 0x30) + 1;
    }
LAB_0354e610:
    bVar11 = true;
  }
LAB_0354e618:
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar39 = *(uint *)(lVar26 + 0x18);
  if (uVar39 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar29 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar15) {
LAB_0354e660:
      if (uVar39 <= uVar20 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar51 = *unaff_x19;
      uVar67 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      uVar71 = *(undefined4 *)(lVar26 + lVar25 + -0x2f8);
LAB_0354ebc0:
      pcVar41 = *(code **)(lVar51 + 0x8d8);
LAB_0354ebc8:
      (*pcVar41)(fVar52,fStack0000000000000068,fStack000000000000006c,uVar67,fStack0000000000000104,
                 0,fStack0000000000000084,uVar71);
      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar26 = *(long *)puVar12;
      }
LAB_0354ec1c:
      fVar58 = 0.0;
      bVar15 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar15 = false;
    }
  }
  else {
    lVar26 = lVar26 + lVar29 * 0x178;
    iVar22 = *(int *)(lVar26 + 0x68);
    *(int *)(lVar26 + 0x16c) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar18)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar22 + 1 != (int)unaff_x19[0x67])))) {
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
      lVar26 = *plVar4;
      if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x38), lVar51 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar51 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar56 = *(float *)(lVar51 + lVar29 * 0x178 + 0x160);
      if (fVar58 <= fVar56) {
        fVar58 = fVar56;
      }
      if (fStack0000000000000100 <= ABS(fVar54)) {
        fStack0000000000000100 = ABS(fVar54);
      }
      if (iVar22 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar26 = *plVar4;
          if (lVar26 == 0) goto LAB_0354fbf4;
          lVar51 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar51 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar51 + 0x15a8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar57 = *(float *)(lVar26 + lVar29 * 0x178 + 0x14c);
      fVar56 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar57 = fVar57 + fVar58 * fVar56;
      iStack000000000000005c = iVar22;
      if (fVar57 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar57;
      }
    }
    if (!bVar15) {
      bVar15 = false;
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar21 < (int)uVar86)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar86 == uVar21) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b97f8(uVar42,0);
        if ((uVar24 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar29 * 0x178;
      fStack0000000000000084 = *(float *)(lVar26 + 0x160);
      fVar52 = *(float *)(lVar26 + 0x11c);
      bVar15 = fVar58 != 0.0;
      fVar56 = fStack0000000000000084;
      if (bVar15) {
        fVar56 = fVar58;
      }
      fVar58 = fVar56;
      uVar17 = *(undefined4 *)(lVar26 + 0x168);
      fStack000000000000006c = 0.0;
      fVar56 = fVar54;
      if (bVar15) {
        fVar56 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar56;
    }
    if (*puVar2 == 1) {
      if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
        if (uVar86 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar29 * 0x178;
          lVar51 = *unaff_x19;
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          uVar71 = *(undefined4 *)(lVar26 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar86 == uVar35) || ((int)uVar21 <= (int)uVar86)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b63d8(uVar42,0);
      if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
        lVar51 = lVar29;
        uVar39 = uVar86;
        if (uVar42 == 0x200b || (uVar24 & 1) != 0) {
          lVar51 = (long)(int)uVar21;
          uVar39 = uVar21;
        }
        if (uVar39 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar51 * 0x178;
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          uVar71 = *(undefined4 *)(lVar26 + 0x160);
          pcVar41 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
        uVar39 = *(uint *)(lVar26 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar86 < (int)(*puVar2 - 1)) {
      if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar24 = FUN_03567ad8(uVar17,*(undefined4 *)(lVar26 + lVar25),0);
      if ((uVar24 & 1) == 0) {
        if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
          if (uVar86 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar29 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar52,fStack0000000000000068,fStack000000000000006c,
                       *(undefined4 *)(lVar26 + 0x128),fStack0000000000000104,0,
                       fStack0000000000000084,*(undefined4 *)(lVar26 + 0x160));
            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar26 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar26 = *(long *)puVar12;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar15 = true;
  }
LAB_0354ec38:
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar26 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar45 == 0) goto LAB_0354fbf4;
  uVar39 = *(uint *)(lVar26 + lVar29 * 0x178 + 400);
  fVar56 = (float)FUN_03776a30(lVar45 + 0x50,0);
  if ((uVar39 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar20 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar67 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
      fVar55 = *(float *)(lVar26 + lVar25 + -0x30c);
      pcVar41 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar41)(fVar70,fStack000000000000009c,fStack0000000000000098,uVar67,
                 fVar78 * fVar56 + fVar55,0,fVar78,fVar78);
    }
LAB_0354f250:
    bVar9 = false;
  }
  else {
    lVar26 = *plVar4;
    if ((lVar26 == 0) || (lVar51 = *(long *)(lVar26 + 0x38), lVar51 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar51 + 0x18) <= uVar86)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar51 + lVar29 * 0x178 + 0x174) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar18)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar51 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar21 < (int)uVar86)) ||
       (bVar9 || !bVar1)) {
LAB_0354ed84:
      if (!bVar9) goto LAB_0354f250;
    }
    else {
      if (uVar86 == uVar21) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_026b97f8(uVar42,0);
        if ((uVar24 & 1) != 0) goto LAB_0354ed84;
        lVar26 = *plVar4;
        if (lVar26 == 0) goto LAB_0354fbf4;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar26 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar29 * 0x178;
      fStack000000000000004c = *(float *)(lVar26 + 0x60);
      fVar53 = *(float *)(lVar26 + 0x14c);
      fVar70 = *(float *)(lVar26 + 0x11c);
      fVar78 = *(float *)(lVar26 + 0x160);
      fStack000000000000009c = fVar56 * fVar78 + fVar53;
      fStack0000000000000098 = 0.0;
    }
    uVar39 = *puVar2;
    if (uVar39 == 1) {
      if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
        uVar39 = *(uint *)(lVar26 + 0x18);
LAB_0354ef0c:
        if (uVar86 < uVar39) {
          lVar26 = lVar26 + lVar29 * 0x178;
          lVar51 = *unaff_x19;
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          fVar55 = *(float *)(lVar26 + 0x14c);
LAB_0354ef24:
          pcVar41 = *(code **)(lVar51 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar86 == uVar35) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar24 = FUN_026b63d8(uVar42,0);
      if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
        uVar39 = *(uint *)(lVar26 + 0x18);
        if (uVar42 == 0x200b || (uVar24 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar51 = lVar29;
        if (uVar86 < uVar39) {
LAB_0354f1f8:
          lVar26 = lVar26 + lVar51 * 0x178;
          fVar55 = *(float *)(lVar26 + 0x14c);
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          pcVar41 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar86 < (int)uVar39) {
      lVar26 = *plVar4;
      if ((lVar26 != 0) && (lVar51 = *(long *)(lVar26 + 0x38), lVar51 != 0)) {
        if (uVar20 < *(uint *)(lVar51 + 0x18)) {
          if (*(float *)(lVar51 + lVar25 + -0x108) == fStack000000000000004c) {
            fVar57 = *(float *)(lVar51 + lVar25 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_03567bac(fVar55 + fVar57,fVar53,0);
            if ((uVar24 & 1) != 0) {
              uVar39 = *puVar2;
              goto LAB_0354f010;
            }
            lVar26 = *plVar4;
            if (lVar26 == 0) goto LAB_0354fbf4;
          }
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 != 0) {
            uVar39 = *(uint *)(lVar26 + 0x18);
            if ((int)uVar86 <= (int)uVar21) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar51 = (long)(int)uVar21;
            if (uVar21 < uVar39) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar86 < (int)uVar39) {
      iVar22 = FUN_036d3364(lVar45,0);
      if (*(uint *)(lVar36 + 0x18) <= uVar20)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = *(long *)(lVar36 + lVar25 + -0x130);
      if (lVar26 == 0) goto LAB_0354fbf4;
      iVar23 = FUN_036d3364(lVar26,0);
      if (iVar22 != iVar23) {
        if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
          uVar39 = *(uint *)(lVar26 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
        if (uVar20 - 2 < *(uint *)(lVar26 + 0x18)) {
          lVar51 = *unaff_x19;
          uVar67 = *(undefined4 *)(lVar26 + lVar25 + -0x330);
          fVar55 = *(float *)(lVar26 + lVar25 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar9 = true;
  }
  if ((*plVar4 == 0) || (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 == 0)) goto LAB_0354fbf4;
  uVar39 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar39 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar26 + lVar29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar14) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,fStack00000000000000c0);
    }
LAB_0354f604:
    bVar14 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar18)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar14) {
LAB_0354f400:
      if (uVar39 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar26 = lVar26 + lVar29 * 0x178;
      fVar56 = *(float *)(lVar26 + 0x128);
      fVar84 = *(float *)(lVar26 + 0x188);
      uVar27 = *(undefined8 *)(lVar26 + 0x17c);
      fVar77 = *(float *)(lVar26 + 0x184);
      uVar32 = *(undefined8 *)(lVar26 + 0x184);
      fVar72 = *(float *)(lVar26 + 0x18c);
      fVar55 = *(float *)(lVar26 + 0x11c);
      fVar57 = *(float *)(lVar26 + 0x148);
      fVar68 = *(float *)(lVar26 + 0x150);
      in_stack_00000188 = uVar27;
      fStack0000000000000190 = fVar77;
      fStack0000000000000194 = fVar84;
      in_stack_00000198 = fVar72;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar24 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar26 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar24 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar56 = fVar56 + (float)in_stack_000017c8;
        fVar55 = fVar55 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar57 = fVar57 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar55 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar55;
        }
        if (fVar68 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar68 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar56) {
          fStack00000000000000d0 = fVar56;
        }
        if (fStack00000000000000d4 <= fVar57) {
          fStack00000000000000d4 = fVar57;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar26);
        }
        fVar55 = (fVar55 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar68 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar68;
        }
        if (fStack00000000000000d4 <= fVar57) {
          fStack00000000000000d4 = fVar57;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,fVar55,
                   fStack00000000000000d4,fStack00000000000000c0);
        fStack00000000000000e4 = fVar68 - fVar72;
        fStack00000000000000d0 = fVar56 + fVar77;
        fStack00000000000000c0 = 0.0;
        fStack00000000000000d4 = fVar57 + fVar84;
        fStack00000000000000e0 = fVar55;
        in_stack_000017c0 = uVar27;
        in_stack_000017c8 = uVar32;
        in_stack_000017d0 = fVar72;
      }
      if (((*puVar2 == 1) || (uVar86 == uVar35)) || (((int)uVar21 <= (int)uVar86 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,fStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar14 = true;
    }
    else {
      if ((((uVar42 != 0xd) && ((uVar42 & 0xfffe) != 10)) && ((int)uVar86 <= (int)uVar21)) &&
         (bVar1)) {
        if (uVar86 == uVar21) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b97f8(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_0354f374;
        }
        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar51 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar51 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar51 = *(long *)puVar12;
        }
        if ((*plVar4 != 0) && (lVar26 = *(long *)(*plVar4 + 0x38), lVar26 != 0)) {
          uVar39 = (uint)*(undefined8 *)(lVar26 + 0x18);
          if (uVar86 < uVar39) {
            lVar51 = *(long *)(lVar51 + 0xb8);
            lVar45 = lVar26 + lVar29 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar45 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar45 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar51 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar51 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar45 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar51 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar51 + 0x15a4);
            fStack00000000000000c0 = 0.0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar14 = false;
    }
  }
  uVar86 = *puVar2;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar25 = lVar25 + 0x178;
  bVar1 = (int)uVar86 <= (int)uVar20;
  uVar39 = uVar18;
  uVar20 = uVar20 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar36 = *plVar4;
  if (lVar36 == 0) goto LAB_0354fbf4;
  iVar16 = uVar18 + 1;
  plVar50 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
  *(uint *)(lVar36 + 0x18) = uVar86;
  lVar25 = unaff_x19[0xd4];
  *(int *)(lVar36 + 0x2c) = iVar16;
  if ((int)uVar86 < 1 || iVar19 == 0) {
    iVar19 = 1;
  }
  *(int *)(lVar36 + 0x1c) = (int)lVar25;
  *(int *)(lVar36 + 0x24) = iVar19;
  *(int *)(lVar36 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar24 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar24 & 1) == 0)) {
LAB_0354d0cc:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar36 = unaff_x19[0xdb];
  if (lVar36 != 0) {
    (**(code **)(lVar36 + 0x18))
              (*(undefined8 *)(lVar36 + 0x40),*plVar4,*(undefined8 *)(lVar36 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x60), lVar36 == 0)) goto LAB_0354fbf4;
    if (*(int *)(*plVar50 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar36 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596b20(lVar36 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0)) {
      if (*(int *)(lVar36 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0)) {
          if (*(int *)(lVar36 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0))
            {
              if (*(int *)(lVar36 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar36 = *(long *)(unaff_x19[0x6d] + 0x60), lVar36 != 0)) {
                  if (*(int *)(lVar36 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar36 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      lVar36 = *plVar4;
                      if (lVar36 != 0) {
                        lVar26 = 0;
                        lVar25 = 0;
                        do {
                          uVar24 = lVar25 + 1;
                          if ((long)*(int *)(lVar36 + 0x34) <= (long)uVar24) goto LAB_0354d0cc;
                          lVar36 = *(long *)(lVar36 + 0x60);
                          if (lVar36 == 0) break;
                          if (*(int *)(*plVar50 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar36 + 0x18) <= uVar24)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar36 + lVar26 + 0x70,0);
                          lVar36 = unaff_x19[0xe1];
                          if (lVar36 == 0) break;
                          if (*(uint *)(lVar36 + 0x18) <= uVar24)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar32 = *(undefined8 *)(lVar36 + lVar25 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar30 = FUN_036d35a8(uVar32,0,0);
                          if ((uVar30 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*plVar4 == 0) ||
                                 (lVar36 = *(long *)(*plVar4 + 0x60), lVar36 == 0)) break;
                              if (*(int *)(*plVar50 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar36 + 0x18) <= uVar24)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar36 + lVar26 + 0x70,1,0);
                            }
                            lVar36 = unaff_x19[0xe1];
                            if (lVar36 == 0) break;
                            if (*(uint *)(lVar36 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar36 = *(long *)(lVar36 + lVar25 * 8 + 0x28);
                            if (lVar36 == 0) break;
                            lVar36 = FUN_0359d5ac(lVar36,0);
                            if ((*plVar4 == 0) || (lVar51 = *(long *)(*plVar4 + 0x60), lVar51 == 0))
                            break;
                            if (*(uint *)(lVar51 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar36 == 0) break;
                            FUN_036a460c(lVar36,*(undefined8 *)(lVar51 + lVar26 + 0x80),0);
                            lVar36 = unaff_x19[0xe1];
                            if (lVar36 == 0) break;
                            if (*(uint *)(lVar36 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar36 = *(long *)(lVar36 + lVar25 * 8 + 0x28);
                            if (lVar36 == 0) break;
                            lVar36 = FUN_0359d5ac(lVar36,0);
                            if ((*plVar4 == 0) || (lVar51 = *(long *)(*plVar4 + 0x60), lVar51 == 0))
                            break;
                            if (*(uint *)(lVar51 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar36 == 0) break;
                            FUN_036a4810(lVar36,*(undefined8 *)(lVar51 + lVar26 + 0x98),0);
                            lVar36 = unaff_x19[0xe1];
                            if (lVar36 == 0) break;
                            if (*(uint *)(lVar36 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar36 = *(long *)(lVar36 + lVar25 * 8 + 0x28);
                            if (lVar36 == 0) break;
                            lVar36 = FUN_0359d5ac(lVar36,0);
                            if ((*plVar4 == 0) || (lVar51 = *(long *)(*plVar4 + 0x60), lVar51 == 0))
                            break;
                            if (*(uint *)(lVar51 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar36 == 0) break;
                            FUN_036a48bc(lVar36,*(undefined8 *)(lVar51 + lVar26 + 0xa0),0);
                            lVar36 = unaff_x19[0xe1];
                            if (lVar36 == 0) break;
                            if (*(uint *)(lVar36 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar36 = *(long *)(lVar36 + lVar25 * 8 + 0x28);
                            if (lVar36 == 0) break;
                            lVar36 = FUN_0359d5ac(lVar36,0);
                            if ((*plVar4 == 0) || (lVar51 = *(long *)(*plVar4 + 0x60), lVar51 == 0))
                            break;
                            if (*(uint *)(lVar51 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar36 == 0) break;
                            FUN_036a4e24(lVar36,*(undefined8 *)(lVar51 + lVar26 + 0xa8),0);
                            lVar36 = unaff_x19[0xe1];
                            if (lVar36 == 0) break;
                            if (*(uint *)(lVar36 + 0x18) <= uVar24)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar36 = *(long *)(lVar36 + lVar25 * 8 + 0x28);
                            if ((lVar36 == 0) || (lVar36 = FUN_0359d5ac(lVar36,0), lVar36 == 0))
                            break;
                            FUN_036aa280(lVar36,0);
                          }
                          lVar36 = *plVar4;
                          lVar25 = lVar25 + 1;
                          lVar26 = lVar26 + 0x50;
                        } while (lVar36 != 0);
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
  goto LAB_0354fbf4;
}


