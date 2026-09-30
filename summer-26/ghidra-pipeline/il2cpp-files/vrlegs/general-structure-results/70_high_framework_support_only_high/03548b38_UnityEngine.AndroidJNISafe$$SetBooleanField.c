/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$SetBooleanField
ENTRY_POINT: 03548b38
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


void UnityEngine_AndroidJNISafe__SetBooleanField(void)

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
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  undefined1 uVar30;
  char cVar31;
  uint uVar32;
  float *pfVar33;
  undefined4 *puVar34;
  uint uVar35;
  long lVar36;
  float *pfVar37;
  code *pcVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long *unaff_x19;
  uint uVar46;
  long *unaff_x21;
  int unaff_w23;
  undefined8 uVar47;
  undefined8 *unaff_x24;
  int unaff_w25;
  long *plVar48;
  long *unaff_x26;
  long lVar49;
  float fVar50;
  float fVar51;
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
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  ulong uVar69;
  undefined4 uVar70;
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
  float unaff_s14;
  float fVar82;
  float fVar83;
  float fVar84;
  int iStack000000000000002c;
  uint uStack0000000000000030;
  float fStack000000000000004c;
  int iStack000000000000005c;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000084;
  float fStack0000000000000098;
  float fStack000000000000009c;
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
  ulong uVar85;
  long in_stack_00001708;
  uint in_stack_0000179c;
  uint uVar86;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float fVar87;
  
  fVar50 = (float)FUN_03776960();
  fVar78 = *(float *)((long)unaff_x19 + 0x1e4);
  *(undefined4 *)((long)unaff_x19 + 0x404) = 0x3f800000;
  *(float *)(unaff_x19 + 0x3d) = fVar78;
  puVar12 = OVRPlugin_OVRP_1_29_0_TypeInfo;
  fVar67 = DAT_00d389a8;
  fVar56 = DAT_00d389a8;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar56 = 1.0;
  }
  FUN_0209aa94(unaff_x19 + 0x3e,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_29_0_TypeInfo);
  *(uint *)((long)unaff_x19 + 0x25c) = *(uint *)(unaff_x19 + 0x4b);
  if ((*(uint *)(unaff_x19 + 0x4b) & 1) == 0) {
    uVar16 = (undefined4)unaff_x19[0x42];
  }
  else {
    uVar16 = 700;
  }
  *(undefined4 *)((long)unaff_x19 + 0x214) = uVar16;
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
  pfVar33 = *(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  fStack00000000000000e0 = *pfVar33;
  fStack00000000000000e4 = pfVar33[1];
  fStack000000000000006c = pfVar33[2];
  uVar16 = FUN_01b6d7fc((int)unaff_x19[0x29],*(undefined4 *)((long)unaff_x19 + 0x14c),
                        (int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),0);
  *(undefined4 *)((long)unaff_x19 + 0x144) = uVar16;
  *(undefined4 *)((long)unaff_x19 + 0x4ec) = uVar16;
  *(undefined4 *)(unaff_x19 + 0x2b) = uVar16;
  *(undefined4 *)((long)unaff_x19 + 0x15c) = uVar16;
  puVar13 = OVRPlugin_OVRP_1_16_0_TypeInfo;
  FUN_0209aa94(unaff_x19 + 0x9e,&stack0x000008b0,*(undefined8 *)OVRPlugin_OVRP_1_16_0_TypeInfo);
  FUN_0209aa94(unaff_x19 + 0xa2,&stack0x000008b0,*(undefined8 *)puVar13);
  FUN_0209aa94(unaff_x19 + 0xa6,&stack0x000008b0,*(undefined8 *)puVar13);
  puVar13 = OVRPlugin_Mesh_TypeInfo;
  uVar16 = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (DAT_0412df1c == '\0') {
    FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
    DAT_0412df1c = '\x01';
  }
  lVar23 = *(long *)puVar13;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar23 = *(long *)puVar13;
  }
  puVar34 = *(undefined4 **)(lVar23 + 0xb8);
  uVar85 = 0;
  FUN_035683a4(*puVar34,puVar34[1],puVar34[2],puVar34[3],&stack0x000008b0,uVar16,0);
  puVar13 = OVRPlugin_OVRP_1_12_0_TypeInfo;
  unaff_x24[0x73] = unaff_x24[1];
  unaff_x24[0x72] = *unaff_x24;
  FUN_0209aa94(unaff_x19 + 0xaa,&stack0x00000c40,*(undefined8 *)puVar13);
  unaff_x19[0xb0] = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xb0,0);
  FUN_0209aa94(unaff_x19 + 0xb1,0,*(undefined8 *)OVRPlugin_OVRP_1_21_0_TypeInfo);
  if (unaff_x19[0x20] != 0) {
    *(uint *)(unaff_x19 + 0xbe) = (uint)*(byte *)(unaff_x19[0x20] + 0x1b8);
    FUN_0209aa94(unaff_x19 + 0xba,&stack0x00000c28,*(undefined8 *)OVRPlugin_OVRP_1_1_0_TypeInfo);
    FUN_0209aa1c(unaff_x19 + 0xbf,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
    *(undefined1 *)((long)unaff_x19 + 0x474) = 0;
    *(undefined4 *)(unaff_x19 + 0x9b) = 0;
    *(undefined4 *)(unaff_x19 + 0x58) = 0xc6fffe00;
    if (unaff_x19[0x20] != 0) {
      fVar51 = (float)FUN_03776970(unaff_x19[0x20] + 0x50,0);
      if (*unaff_x21 != 0) {
        fVar52 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 != 0) {
          fVar53 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
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
          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar23 = *(long *)puVar12;
          }
          lVar24 = unaff_x19[0x6d];
          uVar68 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
          unaff_x19[0x95] = 0;
          unaff_x19[0x9a] = 0;
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
          lVar23 = NEON_rev64(uVar68,4);
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
          unaff_x19[0x99] = lVar23;
          *(undefined4 *)(unaff_x19 + 0x96) = 0;
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0x58) != 0)) {
            uVar35 = (int)unaff_x19[0x67] - 1;
            uVar86 = *(int *)(*(long *)(lVar24 + 0x58) + 0x18) - 1;
            if ((int)uVar35 <= (int)uVar86) {
              uVar86 = uVar35;
            }
            uVar5 = 0;
            if (-1 < (int)uVar35) {
              uVar5 = uVar86;
            }
            FUN_035a02f4(lVar24,0);
            fVar54 = *(float *)(unaff_x19 + 0x68);
            *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
            fVar66 = *(float *)((long)unaff_x19 + 0x344);
            unaff_x19[0x6a] = 0;
            lVar23 = *(long *)puVar12;
            fVar55 = *(float *)((long)unaff_x19 + 0x34c);
            fVar82 = *(float *)(unaff_x19 + 0x6b);
            fVar71 = *(float *)((long)unaff_x19 + 0x35c);
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar23 = *(long *)puVar12;
            }
            *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x1598);
            *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                 *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a0);
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
              fVar77 = DAT_00d38d28;
              fVar74 = DAT_00d38938;
              uVar86 = 0;
              lVar23 = unaff_x19[0x8f];
              if (lVar23 != 0) {
                puVar2 = (uint *)((long)unaff_x19 + 0x494);
                puVar3 = (ulong *)(unaff_x19 + 0xc9);
                uVar35 = unaff_w23 - 1;
                lVar24 = (long)unaff_x19 + 0x434;
                fVar51 = fVar51 - (fVar52 - fVar53);
                fStack000000000000016c = 0.0;
                if (fVar82 <= 0.0) {
                  fVar82 = 0.0;
                }
                if (fVar71 <= 0.0) {
                  fVar71 = 0.0;
                }
                fVar50 = (unaff_s14 / (float)unaff_w25) * fVar50 * fVar56;
                uVar28 = (ulong)(uint)fVar50;
                fVar82 = fVar82 + DAT_00d3879c;
                uVar69 = (ulong)(uint)fVar82;
                fVar52 = fVar71 + DAT_00d3879c;
                fVar56 = fVar78 * DAT_00d38d28 * fVar56;
                bVar11 = true;
                iStack000000000000002c = 0;
                bVar15 = false;
                iVar40 = 0;
                plVar4 = unaff_x19 + 0x6d;
                bVar10 = 1;
                fStack00000000000000fc = fVar82;
                uVar19 = 0;
LAB_03549220:
                fVar78 = (float)uVar28;
                if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar86) {
LAB_0354cf48:
                  fVar56 = (float)uVar69;
                  if (((char)unaff_x19[0x47] != '\0') &&
                     (fVar56 = DAT_00d389f8,
                     DAT_00d389f8 <
                     *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                    fVar56 = *(float *)((long)unaff_x19 + 0x1e4);
                    fVar67 = *(float *)((long)unaff_x19 + 0x254);
                    if ((fVar56 < fVar67) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                      if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0
                         ) {
                        *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                      }
                      fVar50 = (*(float *)((long)unaff_x19 + 0x23c) - fVar56) * 0.5;
                      if (fVar50 <= DAT_00d38b84) {
                        fVar50 = DAT_00d38b84;
                      }
                      *(float *)(unaff_x19 + 0x48) = fVar56;
                      fVar50 = (fVar56 + fVar50) * 20.0 + 0.5;
                      fVar56 = DAT_00d38e60;
                      if (fVar50 != INFINITY) {
                        fVar56 = (float)(int)fVar50 / 20.0;
                      }
                      if (fVar67 <= fVar56) {
                        fVar56 = fVar67;
                      }
LAB_0354d004:
                      *(float *)((long)unaff_x19 + 0x1e4) = fVar56;
                      return;
                    }
                  }
                  *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                  if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                    uVar68 = FUN_0276793c((long)unaff_x19 + 0x244,0);
                    uVar25 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
                    uVar68 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar68,
                                          *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar25,0);
                    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                    }
                    FUN_0367a6ec(uVar68,0);
                  }
                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*puVar2 == 0) || ((*puVar2 == 1 && (uVar19 == 3)))) {
                    (**(code **)(*unaff_x19 + 0x928))();
                    goto LAB_0354d0cc;
                  }
                  lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar23 = *(long *)puVar12;
                  }
                  plVar48 = (long *)OVRPlugin_Media_TypeInfo;
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_0354fbf4;
                  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  iVar40 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54)
                           << 2;
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x60), lVar23 == 0))
                  goto LAB_0354fbf4;
                  if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (*(int *)(lVar23 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  FUN_035968e8(lVar23 + 0x20,0,0);
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cbded8);
                    DAT_0411f172 = '\x01';
                  }
                  iVar18 = (int)unaff_x19[0x4e];
                  fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  uStack00000000000000f0 =
                       *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                  lVar23 = unaff_x19[0xeb];
                  uVar68 = uStack00000000000000f0;
                  fStack00000000000000c4 = fStack00000000000000fc;
                  if (iVar18 < 0x401) {
                    if (iVar18 == 0x100) {
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) < 2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar68 = *(undefined8 *)(lVar23 + 0x30);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar4 == 0) || (lVar24 = *(long *)(*plVar4 + 0x58), lVar24 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= uVar5)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar56 = *(float *)(lVar24 + (long)(int)uVar5 * 0x14 + 0x28);
                      }
                      else {
                        fVar56 = *(float *)(unaff_x19 + 0x97);
                      }
                      fStack00000000000000c4 = fVar54 + 0.0 + *(float *)(lVar23 + 0x2c);
                      fVar56 = (0.0 - fVar56) - fVar66;
                    }
                    else if (iVar18 == 0x200) {
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fStack00000000000000c4 =
                           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                      uVar68 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar23 + 0x24) +
                                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x58), lVar23 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= uVar5)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar23 = lVar23 + (long)(int)uVar5 * 0x14;
                        fStack00000000000000c4 = fVar54 + 0.0 + fStack00000000000000c4;
                        fVar56 = ((fVar66 + *(float *)(lVar23 + 0x28) + *(float *)(lVar23 + 0x30)) -
                                 fVar55) * -0.5 + 0.0;
                      }
                      else {
                        fStack00000000000000c4 = fVar54 + 0.0 + fStack00000000000000c4;
                        fVar56 = ((fVar66 + *(float *)(unaff_x19 + 0x97) + fVar87) - fVar55) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar18 != 0x400) goto LAB_0354d620;
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      if (*(int *)(lVar23 + 0x18) == 0)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar68 = *(undefined8 *)(lVar23 + 0x24);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar4 == 0) || (lVar24 = *(long *)(*plVar4 + 0x58), lVar24 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar24 + 0x18) <= uVar5)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar87 = *(float *)(lVar24 + (long)(int)uVar5 * 0x14 + 0x30);
                      }
                      fStack00000000000000c4 = fVar54 + 0.0 + *(float *)(lVar23 + 0x20);
                      fVar56 = fVar55 + (0.0 - fVar87);
                    }
LAB_0354d610:
                    uVar68 = CONCAT44((float)((ulong)uVar68 >> 0x20) + 0.0,(float)uVar68 + fVar56);
                  }
                  else if (iVar18 == 0x800) {
                    if (lVar23 == 0) goto LAB_0354fbf4;
                    if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    fVar56 = fVar54 + 0.0 +
                             (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    uVar68 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5
                                      + 0.0,((float)*(undefined8 *)(lVar23 + 0x24) +
                                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + 0.0);
                    fStack00000000000000c4 = fVar56;
                  }
                  else {
                    if (iVar18 == 0x1000) {
                      if (lVar23 != 0) {
                        if ((*(int *)(lVar23 + 0x18) != 1) && (*(int *)(lVar23 + 0x18) != 0)) {
                          uVar68 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar23 + 0x24) +
                                                    (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                          fStack00000000000000c4 =
                               fVar54 + 0.0 +
                               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                          fVar56 = 0.0 - ((fVar66 + *(float *)(unaff_x19 + 0x9d) +
                                          *(float *)(unaff_x19 + 0x9c)) - fVar55) * 0.5;
                          goto LAB_0354d610;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
                    if (iVar18 == 0x2000) {
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fVar56 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar66) - fVar55) * 0.5
                      ;
                      uVar68 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) *
                                        0.5 + 0.0,
                                        ((float)*(undefined8 *)(lVar23 + 0x24) +
                                        (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + fVar56);
                      fStack00000000000000c4 =
                           fVar54 + 0.0 +
                           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    }
                  }
LAB_0354d620:
                  lVar23 = FUN_03559490();
                  if (lVar23 != 0) {
                    FUN_036df824(lVar23,0);
                    *(float *)((long)unaff_x19 + 0x6e4) = fVar56;
                    uVar16 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                    }
                    if (DAT_0412df1c == '\0') {
                      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                      DAT_0412df1c = '\x01';
                    }
                    puVar12 = OVRPlugin_Mesh_TypeInfo;
                    lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar23 = *(long *)puVar12;
                    }
                    puVar34 = *(undefined4 **)(lVar23 + 0xb8);
                    FUN_035683a4(*puVar34,puVar34[1],puVar34[2],puVar34[3],&stack0x000017c0,
                                 0x4000ffff,0);
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar23 = *plVar4;
                    if (lVar23 != 0) {
                      uVar86 = *puVar2;
                      if ((int)uVar86 < 1) {
                        iVar18 = 0;
                        iVar40 = 0;
                        goto LAB_0354f7f4;
                      }
                      lVar23 = *(long *)(lVar23 + 0x38);
                      if (lVar23 != 0) {
                        bVar15 = false;
                        bVar14 = false;
                        bVar11 = false;
                        fStack0000000000000124 = 0.0;
                        bVar9 = false;
                        iVar18 = 0;
                        uStack0000000000000030 = 0;
                        fStack000000000000016c = 0.0;
                        iStack000000000000005c = 0;
                        lVar24 = 0x2e0;
                        fVar53 = 0.0;
                        fVar67 = 0.0;
                        fStack00000000000000d4 = fStack00000000000000e4;
                        fStack0000000000000068 = fStack00000000000000e4;
                        fStack0000000000000104 =
                             *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8) +
                                       0x15a8);
                        fStack000000000000009c = fStack00000000000000e4;
                        fStack0000000000000100 = 0.0;
                        fStack0000000000000084 = 0.0;
                        fStack000000000000004c = 0.0;
                        fVar51 = 0.0;
                        fVar52 = 0.0;
                        uVar35 = 0;
                        uVar19 = 1;
                        fStack0000000000000098 = fStack000000000000006c;
                        fStack00000000000000c0 = fStack000000000000006c;
                        fStack00000000000000d0 = fStack00000000000000e0;
                        fVar50 = fStack00000000000000e0;
                        fVar78 = fStack00000000000000e0;
                        goto LAB_0354d7c0;
                      }
                    }
                  }
                  goto LAB_0354fbf4;
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar86)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar17 = *(uint *)(lVar23 + (long)(int)uVar86 * 0xc + 0x20);
                if (uVar17 == 0) goto LAB_0354cf48;
                if (5 < iVar40) {
                  uVar68 = FUN_0276793c(&stack0x000017ec,0);
                  uVar25 = FUN_0276793c(&stack0x000017b8,0);
                  uVar68 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar68,
                                        *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar25,0);
                  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                  }
                  FUN_0367ae18(uVar68,0);
                  in_stack_000017d8 = CONCAT44(3,*puVar2);
                }
                if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar17 != 0x3c)) {
                  if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                  *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar23 + 0x2c);
                  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar23 + 0x58);
                  unaff_x19[0x20] = *(long *)(lVar23 + 0x38);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
LAB_03549378:
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
                  uVar19 = *puVar2;
                  if (*(uint *)(lVar23 + 0x18) <= uVar19)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar49 = (long)(int)uVar19;
                  cVar31 = *(char *)(lVar23 + lVar49 * 0x178 + 0x5c);
                  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                  lVar36 = unaff_x19[0x24];
                  if ((uint)in_stack_000017d8 == uVar19) {
                    uVar17 = (uint)((ulong)in_stack_000017d8 >> 0x20);
                    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                    if (uVar17 == 0x2026) {
                      *(long *)(lVar23 + lVar49 * 0x178 + 0x30) = unaff_x19[0xca];
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                      *(undefined4 *)(lVar23 + 0x2c) = 0;
                      *(long *)(lVar23 + 0x38) = unaff_x19[0xcb];
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(long *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x50) = unaff_x19[0xcc];
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      uVar19 = *puVar2;
                      if (*(uint *)(lVar23 + 0x18) <= uVar19)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      bVar9 = true;
                      *(int *)(lVar23 + (long)(int)uVar19 * 0x178 + 0x58) = (int)unaff_x19[0xcd];
                      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                      in_stack_000017d8 = CONCAT44(3,uVar19 + 1);
                    }
                    else if (uVar17 == 3) {
                      if ((*unaff_x21 == 0) || (lVar27 = FUN_03568ac0(*unaff_x21,0), lVar27 == 0))
                      goto LAB_0354fbf4;
                      FUN_0219b634(lVar27,&stack0x00000c28,&stack0x000008b0,
                                   *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                      if (*(uint *)(lVar23 + 0x18) <= uVar19)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(ulong *)(lVar23 + lVar49 * 0x178 + 0x30) = uVar85;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      uVar19 = *(uint *)((long)unaff_x19 + 0x494);
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
                  if (((int)uVar19 < *(int *)((long)unaff_x19 + 0x324)) && (uVar17 != 3)) {
                    if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= uVar19)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar23 = lVar23 + (long)(int)uVar19 * 0x178;
                    *(undefined1 *)(lVar23 + 0x194) = 0;
                    *(undefined2 *)(lVar23 + 0x20) = 0x200b;
                    *(undefined4 *)(lVar23 + 100) = 0;
                    *puVar2 = uVar19 + 1;
                  }
                  else {
                    iVar18 = *(int *)((long)unaff_x19 + 0x644);
                    if (iVar18 == 0) {
                      uVar19 = *(uint *)((long)unaff_x19 + 0x25c);
                      if ((uVar19 >> 4 & 1) == 0) {
                        if ((uVar19 >> 3 & 1) == 0) {
                          fVar53 = 1.0;
                          if ((uVar19 >> 5 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar26 = FUN_026b812c(uVar17,0);
                            if ((uVar26 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar17 = FUN_026b8410(uVar17,0);
                              uVar17 = uVar17 & 0xffff;
                              fVar53 = fVar74;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar26 = FUN_026b8070(uVar17,0);
                          fVar53 = 1.0;
                          if ((uVar26 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar17 = FUN_026b8594(uVar17,0);
                            goto LAB_03549968;
                          }
                        }
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar26 = FUN_026b812c(uVar17,0);
                        fVar53 = 1.0;
                        if ((uVar26 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar17 = FUN_026b8410(uVar17,0);
LAB_03549968:
                          fVar53 = 1.0;
                          uVar17 = uVar17 & 0xffff;
                        }
                      }
                      iVar18 = *(int *)((long)unaff_x19 + 0x644);
                      if (iVar18 != 0) goto LAB_03549594;
LAB_03549978:
                      if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *puVar3 = *(ulong *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x30);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3);
                      if (*puVar3 == 0) goto LAB_03549564;
                      if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *unaff_x21 = *(long *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x38);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
                      if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *in_stack_00000170 = *(long *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x50);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      uVar46 = *puVar2;
                      uVar19 = *(uint *)(lVar23 + 0x18);
                      if (uVar19 <= uVar46)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(undefined4 *)(unaff_x19 + 0x24) =
                           *(undefined4 *)(lVar23 + (long)(int)uVar46 * 0x178 + 0x58);
                      if (bVar9) {
                        lVar36 = unaff_x19[0x8f];
                        if (lVar36 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar36 + 0x18) <= uVar86)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if ((*(int *)(lVar36 + (long)(int)uVar86 * 0xc + 0x20) != 10) ||
                           (uVar46 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
                        if (uVar19 <= uVar46 - 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        fVar83 = *(float *)(lVar23 + (long)(int)(uVar46 - 1) * 0x178 + 0x60);
                        iVar18 = FUN_03776950(*unaff_x21 + 0x50,0);
                        lVar23 = *unaff_x21;
                      }
                      else {
LAB_03549a88:
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        fVar83 = *(float *)(unaff_x19 + 0x3d);
                        iVar18 = FUN_03776950(*unaff_x21 + 0x50,0);
                        lVar23 = unaff_x19[0x20];
                      }
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      fVar62 = (float)FUN_03776960(lVar23 + 0x50,0);
                      fVar57 = fVar67;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar57 = 1.0;
                      }
                      uVar16 = 0;
                      fStack0000000000000124 = 0.0;
                      if (!(bool)(bVar9 & uVar17 == 0x2026)) {
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        uVar16 = FUN_037769c0(*unaff_x21 + 0x50,0);
                      }
                      lVar23 = unaff_x19[0xc9];
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar16);
                      if (*(long *)(lVar23 + 0x20) == 0) goto LAB_0354fbf4;
                      fVar79 = *(float *)((long)unaff_x19 + 0x404);
                      fVar58 = *(float *)(lVar23 + 0x2c);
                      fVar78 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar60 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar80 = *(float *)((long)unaff_x19 + 0x404);
                      fVar61 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                      lVar23 = unaff_x19[0x6d];
                      if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar36 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar36 = lVar36 + (long)(int)*puVar2 * 0x178;
                      *(undefined4 *)(lVar36 + 0x2c) = 0;
                      fVar57 = ((fVar53 * fVar83) / (float)iVar18) * fVar62 * fVar57;
                      fVar78 = fVar57 * fVar79 * fVar58 * fVar78;
                      *(float *)(lVar36 + 0x160) = fVar78;
                      uVar19 = *(uint *)(unaff_x19 + 0x24);
                      fVar61 = fVar57 * fVar60 * fVar80 * fVar61;
                      if (uVar19 == 0) {
                        fStack000000000000016c = *(float *)(unaff_x19 + 0xc3);
                      }
                      else {
                        lVar36 = unaff_x19[0xe1];
                        if (lVar36 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar36 + 0x18) <= uVar19)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar36 = *(long *)(lVar36 + (long)(int)uVar19 * 8 + 0x20);
                        if (lVar36 == 0) goto LAB_0354fbf4;
                        fStack000000000000016c = *(float *)(lVar36 + 0x54);
                      }
LAB_03549e30:
                      fVar83 = 0.0;
                      if (uVar17 != 3 && uVar17 != 0xad) {
                        fVar83 = fVar78;
                      }
                    }
                    else {
                      fVar53 = 1.0;
                      if (iVar18 == 0) goto LAB_03549978;
LAB_03549594:
                      if (iVar18 == 1) {
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *unaff_x26 = *(long *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x40);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                             *(undefined4 *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x48);
                        if ((unaff_x19[0xd3] == 0) ||
                           (lVar23 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                           lVar23 == 0)) goto LAB_0354fbf4;
                        FUN_02215a88(lVar23,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                     &stack0x000008b0,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (uVar85 == 0) goto LAB_03549564;
                        if (uVar17 == 0x3c) {
                          uVar17 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                        }
                        else {
                          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar23 = *(long *)puVar12;
                          }
                          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                               *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0x68);
                        }
                        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                        fVar78 = *(float *)(unaff_x19 + 0x3d);
                        memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
                        iVar18 = FUN_03776950(&stack0x00001730,0);
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
                        fVar57 = (float)FUN_03776960(&stack0x00001730,0);
                        fVar83 = fVar67;
                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                          fVar83 = 1.0;
                        }
                        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                        fVar83 = (fVar78 / (float)iVar18) * fVar57 * fVar83;
                        iVar18 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                        fVar78 = *(float *)(unaff_x19 + 0x3d);
                        if (iVar18 < 1) {
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          iVar18 = FUN_03776950(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar62 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          fVar57 = fVar67;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar57 = 1.0;
                          }
                          if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                          fVar79 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                          if (*(long *)(uVar85 + 0x20) == 0) goto LAB_0354fbf4;
                          FUN_03776e6c(&stack0x000008b0,*(long *)(uVar85 + 0x20),0);
                          fVar58 = (float)FUN_03776c9c(&stack0x00001710,0);
                          if (*(long *)(uVar85 + 0x20) == 0) goto LAB_0354fbf4;
                          fVar80 = *(float *)(uVar85 + 0x2c);
                          fVar60 = (float)FUN_03776ea8(*(long *)(uVar85 + 0x20),0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar59 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar75 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar84 = *(float *)((long)unaff_x19 + 0x404);
                          fVar61 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                          fVar61 = fVar83 * fVar75 * fVar84 * fVar61;
                          fVar57 = (fVar78 / (float)iVar18) * fVar62 * fVar57;
                          fVar78 = fVar57 * (fVar79 / fVar58) * fVar80 * fVar60;
                          fVar57 = fVar57 / fVar78;
                          fVar59 = fVar57 * fVar59;
                          fVar83 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                          fVar57 = fVar57 * fVar83;
                        }
                        else {
                          if (*unaff_x26 == 0) goto LAB_0354fbf4;
                          iVar18 = FUN_03776950(*unaff_x26 + 0x48,0);
                          if (*unaff_x26 == 0) goto LAB_0354fbf4;
                          fVar57 = (float)FUN_03776960(*unaff_x26 + 0x48,0);
                          if (*(long *)(uVar85 + 0x20) == 0) goto LAB_0354fbf4;
                          fVar79 = *(float *)(uVar85 + 0x2c);
                          fVar62 = fVar67;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar62 = 1.0;
                          }
                          fVar58 = (float)FUN_03776ea8(*(long *)(uVar85 + 0x20),0);
                          if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                          fVar59 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                          if (*unaff_x26 == 0) goto LAB_0354fbf4;
                          fVar60 = (float)FUN_037769b0(*unaff_x26 + 0x48,0);
                          if (*unaff_x26 == 0) goto LAB_0354fbf4;
                          fVar80 = *(float *)((long)unaff_x19 + 0x404);
                          fVar61 = (float)FUN_03776960(*unaff_x26 + 0x48,0);
                          if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                          fVar61 = fVar83 * fVar60 * fVar80 * fVar61;
                          fVar78 = (fVar78 / (float)iVar18) * fVar57 * fVar62 * fVar79 * fVar58;
                          fVar57 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                        }
                        *puVar3 = uVar85;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (puVar3,uVar85);
                        if ((*plVar4 != 0) && (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 != 0)) {
                          if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                          *(undefined4 *)(lVar23 + 0x2c) = 1;
                          *(float *)(lVar23 + 0x160) = fVar78;
                          *(long *)(lVar23 + 0x40) = *unaff_x26;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar4 != 0) && (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 != 0)) {
                            if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            *(long *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x38) = *unaff_x21;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            lVar23 = *plVar4;
                            if ((lVar23 != 0) && (lVar49 = *(long *)(lVar23 + 0x38), lVar49 != 0)) {
                              if (*puVar2 < *(uint *)(lVar49 + 0x18)) {
                                _fStack0000000000000120 = CONCAT44(fVar59,fVar57);
                                fStack000000000000016c = 0.0;
                                *(int *)(lVar49 + (long)(int)*puVar2 * 0x178 + 0x58) =
                                     (int)unaff_x19[0x24];
                                *(int *)(unaff_x19 + 0x24) = (int)lVar36;
                                goto LAB_03549e30;
                              }
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            }
                          }
                        }
                        goto LAB_0354fbf4;
                      }
                      lVar23 = *plVar4;
                      fVar61 = 0.0;
                      fVar83 = 0.0;
                      if (uVar17 != 3 && uVar17 != 0xad) {
                        fVar83 = fVar78;
                      }
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      _fStack0000000000000120 = 0;
                    }
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                    *(short *)(lVar23 + 0x20) = (short)uVar17;
                    *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3d];
                    *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(int *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x168) = (int)unaff_x19[0x2b];
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(undefined4 *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x170) =
                         *(undefined4 *)((long)unaff_x19 + 0x15c);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_0354fbf4;
                    uVar19 = *puVar2;
                    FUN_0209a6e0(unaff_x19 + 0xaa,&stack0x000008b0,
                                 *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                    if (*(uint *)(lVar23 + 0x18) <= uVar19)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar23 = lVar23 + (long)(int)uVar19 * 0x178;
                    *(undefined4 *)(lVar23 + 0x18c) = 0;
                    *(undefined8 *)(lVar23 + 0x184) = 0;
                    *(ulong *)(lVar23 + 0x17c) = uVar85;
                    if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(undefined4 *)(lVar23 + (long)(int)*puVar2 * 0x178 + 400) =
                         *(undefined4 *)((long)unaff_x19 + 0x25c);
                    if ((unaff_x19[0xc9] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0)) goto LAB_0354fbf4;
                    FUN_03776e6c(&stack0x00000c28,lVar23,0);
                    if ((int)uVar17 < 0x10000) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar19 = FUN_026b63d8(uVar17,0);
                      uVar19 = uVar19 & 1;
                    }
                    else {
                      uVar19 = 0;
                    }
                    fVar57 = *(float *)(unaff_x19 + 0x55);
                    *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                    if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                      fVar62 = 0.0;
                      fVar58 = 0.0;
                      fVar79 = 0.0;
                    }
                    else {
                      if (*puVar3 == 0) goto LAB_0354fbf4;
                      uVar32 = *puVar2;
                      uVar46 = *(uint *)(*puVar3 + 0x28);
                      if ((int)uVar32 < (int)uVar35) {
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= uVar32 + 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar23 = *(long *)(lVar23 + (long)(int)(uVar32 + 1) * 0x178 + 0x30);
                        if ((((lVar23 == 0) || (*unaff_x21 == 0)) ||
                            (lVar36 = *(long *)(*unaff_x21 + 0x128), lVar36 == 0)) ||
                           (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)) goto LAB_0354fbf4;
                        uVar85 = (ulong)(uVar46 | *(int *)(lVar23 + 0x28) << 0x10);
                        uVar28 = FUN_0219f8b8(lVar36,&stack0x000008b0,&stack0x00001708,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                        uVar16 = 0;
                        if ((uVar28 & 1) == 0) {
                          fVar62 = 0.0;
                          fVar58 = 0.0;
                          fVar79 = 0.0;
                        }
                        else {
                          if (in_stack_00001708 == 0) goto LAB_0354fbf4;
                          fVar62 = *(float *)(in_stack_00001708 + 0x1c);
                          uVar16 = *(undefined4 *)(in_stack_00001708 + 0x20);
                          fVar79 = *(float *)(in_stack_00001708 + 0x14);
                          fVar58 = *(float *)(in_stack_00001708 + 0x18);
                          if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                            fVar57 = 0.0;
                          }
                        }
                        uVar32 = *puVar2;
                      }
                      else {
                        uVar16 = 0;
                        fVar62 = 0.0;
                        fVar58 = 0.0;
                        fVar79 = 0.0;
                      }
                      if (0 < (int)uVar32) {
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= uVar32 - 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar23 = *(long *)(lVar23 + (ulong)(uVar32 - 1) * 0x178 + 0x30);
                        if (((lVar23 == 0) || (*unaff_x21 == 0)) ||
                           ((lVar36 = *(long *)(*unaff_x21 + 0x128), lVar36 == 0 ||
                            (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)))) goto LAB_0354fbf4;
                        uVar85 = (ulong)(*(uint *)(lVar23 + 0x28) | uVar46 << 0x10);
                        uVar28 = FUN_0219f8b8(lVar36,&stack0x000008b0,&stack0x00001708,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                        if ((uVar28 & 1) != 0) {
                          if ((in_stack_00001708 == 0) ||
                             (fVar79 = (float)FUN_03571cb4(fVar79,fVar58,fVar62,uVar16,
                                                           *(undefined4 *)(in_stack_00001708 + 0x28)
                                                           ,*(undefined4 *)
                                                             (in_stack_00001708 + 0x2c),
                                                           *(undefined4 *)(in_stack_00001708 + 0x30)
                                                           ,*(undefined4 *)
                                                             (in_stack_00001708 + 0x34),0),
                             in_stack_00001708 == 0)) goto LAB_0354fbf4;
                          if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                            fVar57 = 0.0;
                          }
                        }
                      }
                      *(float *)((long)unaff_x19 + 0x2fc) = fVar62;
                    }
                    if ((char)unaff_x19[0x1e] != '\0') {
                      fVar80 = *(float *)(unaff_x19 + 200);
                      fVar60 = (float)FUN_03776cb4(&stack0x000017a0,0);
                      fVar80 = fVar80 - fVar83 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)
                                                          );
                      *(float *)(unaff_x19 + 200) = fVar80;
                      if ((uVar17 == 0x200b) || (uVar19 != 0)) {
                        *(float *)(unaff_x19 + 200) =
                             fVar80 - fVar56 * *(float *)((long)unaff_x19 + 0x2b4);
                      }
                    }
                    fVar80 = *(float *)(unaff_x19 + 0x56);
                    fVar60 = 0.0;
                    if (fVar80 != 0.0) {
                      fVar60 = (float)FUN_03776c94(&stack0x000017a0,0);
                      fVar59 = (float)FUN_03776ca4(&stack0x000017a0,0);
                      fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (fVar80 * 0.5 - fVar83 * (fVar60 * 0.5 + fVar59));
                      *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar60;
                    }
                    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar31 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                      lVar23 = *in_stack_00000170;
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar28 = FUN_036cee6c(lVar23,0,0);
                      fVar59 = 0.0;
                      if ((uVar28 & 1) != 0) {
                        lVar23 = *in_stack_00000170;
                        if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        plVar48 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                        if (lVar23 == 0) goto LAB_0354fbf4;
                        uVar28 = FUN_03699d3c(lVar23,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                        fVar59 = 0.0;
                        if ((uVar28 & 1) != 0) {
                          lVar23 = *in_stack_00000170;
                          if (*(int *)(*plVar48 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            plVar48 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                          }
                          if (lVar23 == 0) goto LAB_0354fbf4;
                          fVar80 = (float)FUN_0369e060(lVar23,*(undefined4 *)
                                                               (*(long *)(*plVar48 + 0xb8) + 0x54),0
                                                      );
                          if ((*unaff_x21 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
                          fVar75 = *(float *)(*unaff_x21 + 0x1b0);
                          fVar59 = (float)FUN_0369e060(*in_stack_00000170,
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                          fVar59 = fVar59 * fVar80 * fVar75 * 0.25;
                          if (fVar80 < fStack000000000000016c + fVar59) {
                            fStack000000000000016c = fVar80 - fVar59;
                          }
                        }
                      }
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
                    }
                    else {
                      lVar23 = *in_stack_00000170;
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar28 = FUN_036cee6c(lVar23,0,0);
                      fStack00000000000000d0 = 0.0;
                      if ((uVar28 & 1) != 0) {
                        lVar23 = *in_stack_00000170;
                        if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        plVar48 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                        if (lVar23 == 0) goto LAB_0354fbf4;
                        uVar28 = FUN_03699d3c(lVar23,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                        if ((uVar28 & 1) != 0) {
                          lVar23 = *in_stack_00000170;
                          if (*(int *)(*plVar48 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            plVar48 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                          }
                          if (lVar23 == 0) goto LAB_0354fbf4;
                          uVar28 = FUN_03699d3c(lVar23,*(undefined4 *)
                                                        (*(long *)(*plVar48 + 0xb8) + 0xcc),0);
                          if ((uVar28 & 1) != 0) {
                            lVar23 = *in_stack_00000170;
                            if (*(int *)(*plVar48 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              plVar48 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                            }
                            if (lVar23 != 0) {
                              fVar80 = (float)FUN_0369e060(lVar23,*(undefined4 *)
                                                                   (*(long *)(*plVar48 + 0xb8) +
                                                                   0x54),0);
                              if ((*unaff_x21 != 0) && (*in_stack_00000170 != 0)) {
                                fVar75 = *(float *)(*unaff_x21 + 0x1a8);
                                fVar59 = (float)FUN_0369e060(*in_stack_00000170,
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                fVar59 = fVar59 * fVar80 * fVar75 * 0.25;
                                if (fVar80 < fStack000000000000016c + fVar59) {
                                  fStack000000000000016c = fVar80 - fVar59;
                                }
                                goto LAB_0354a568;
                              }
                            }
                            goto LAB_0354fbf4;
                          }
                        }
                      }
                      fVar59 = 0.0;
                    }
LAB_0354a568:
                    fVar80 = *(float *)(unaff_x19 + 200);
                    fVar75 = (float)FUN_03776ca4(&stack0x000017a0,0);
                    fVar80 = fVar80 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      fVar83 * (fVar79 + ((fVar75 - fStack000000000000016c) - fVar59
                                                         ));
                    fVar79 = (float)FUN_03776cac(&stack0x000017a0,0);
                    fVar75 = *(float *)((long)unaff_x19 + 0x61c) +
                             ((fVar61 + fVar83 * (fVar58 + fStack000000000000016c + fVar79)) -
                             *(float *)(unaff_x19 + 0x9b));
                    fVar79 = (float)FUN_03776c9c(&stack0x000017a0,0);
                    fStack0000000000000134 =
                         fVar75 - fVar83 * (fStack000000000000016c + fStack000000000000016c + fVar79
                                           );
                    fVar79 = (float)FUN_03776c94(&stack0x000017a0,0);
                    fVar58 = fVar80 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      fVar83 * (fVar59 + fVar59 +
                                               fStack000000000000016c + fStack000000000000016c +
                                               fVar79);
                    fStack0000000000000104 = fVar80;
                    fVar79 = fVar58;
                    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar31 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                      fVar63 = (float)(int)unaff_x19[0xbe] * fVar77;
                      fVar79 = (float)FUN_03776cac(&stack0x000017a0,0);
                      fVar64 = fVar63 * fVar83 * (fVar59 + fStack000000000000016c + fVar79);
                      fVar79 = (float)FUN_03776cac(&stack0x000017a0,0);
                      fVar84 = (float)FUN_03776c9c(&stack0x000017a0,0);
                      fVar75 = fVar75 + 0.0;
                      fStack0000000000000134 = fStack0000000000000134 + 0.0;
                      fVar63 = fVar63 * fVar83 * (((fVar79 - fVar84) - fStack000000000000016c) -
                                                 fVar59);
                      fVar84 = fVar80 + fVar64;
                      fVar79 = fVar58 + fVar63;
                      fVar73 = (fVar64 - fVar63) * 0.5;
                      fVar80 = (fVar80 + fVar63) - fVar73;
                      fVar58 = (fVar58 + fVar64) - fVar73;
                      fStack0000000000000104 = fVar84 - fVar73;
                      fVar79 = fVar79 - fVar73;
                    }
                    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                      fVar63 = 0.0;
                      fVar64 = 0.0;
                      fVar72 = 0.0;
                      fStack0000000000000100 = 0.0;
                      fVar73 = fStack0000000000000134;
                      fVar84 = fVar75;
                    }
                    else {
                      thunk_FUN_036bc400(lVar24,0);
                      fVar76 = (fVar58 + fVar80) * 0.5;
                      fVar81 = (fStack0000000000000134 + fVar75) * 0.5;
                      fVar75 = fVar75 - fVar81;
                      fStack0000000000000100 = 0.0;
                      fVar84 = fVar75;
                      fStack0000000000000104 =
                           (float)FUN_036bdd2c(fStack0000000000000104 - fVar76,lVar24,0);
                      fStack0000000000000104 = fVar76 + fStack0000000000000104;
                      fStack0000000000000100 = fStack0000000000000100 + 0.0;
                      fVar73 = fStack0000000000000134 - fVar81;
                      fVar63 = 0.0;
                      fStack0000000000000134 = fVar73;
                      fVar80 = (float)FUN_036bdd2c(fVar80 - fVar76,lVar24,0);
                      fVar80 = fVar76 + fVar80;
                      fVar63 = fVar63 + 0.0;
                      fStack0000000000000134 = fVar81 + fStack0000000000000134;
                      fVar72 = 0.0;
                      fVar58 = (float)FUN_036bdd2c(fVar58 - fVar76,lVar24,0);
                      fVar58 = fVar76 + fVar58;
                      fVar75 = fVar81 + fVar75;
                      fVar72 = fVar72 + 0.0;
                      fVar64 = 0.0;
                      fVar79 = (float)FUN_036bdd2c(fVar79 - fVar76,lVar24,0);
                      fVar79 = fVar76 + fVar79;
                      fVar64 = fVar64 + 0.0;
                      fVar73 = fVar81 + fVar73;
                      fVar84 = fVar81 + fVar84;
                    }
                    if (*plVar4 == 0) goto LAB_0354fbf4;
                    lVar23 = *(long *)(*plVar4 + 0x38);
                    uVar28 = (ulong)(uint)fVar83;
                    if (lVar23 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar23 + 0x11c) = fVar80;
                    *(float *)(lVar23 + 0x120) = fStack0000000000000134;
                    *(float *)(lVar23 + 0x124) = fVar63;
                    if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar23 + 0x114) = fVar84;
                    *(float *)(lVar23 + 0x110) = fStack0000000000000104;
                    *(float *)(lVar23 + 0x118) = fStack0000000000000100;
                    if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar23 + 0x128) = fVar58;
                    *(float *)(lVar23 + 300) = fVar75;
                    *(float *)(lVar23 + 0x130) = fVar72;
                    if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar23 = lVar23 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar23 + 0x134) = fVar79;
                    *(float *)(lVar23 + 0x138) = fVar73;
                    *(float *)(lVar23 + 0x13c) = fVar64;
                    if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                    goto LAB_0354fbf4;
                    uVar46 = *puVar2;
                    lVar36 = (long)(int)uVar46;
                    if (*(uint *)(lVar23 + 0x18) <= uVar46)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar49 = lVar23 + lVar36 * 0x178;
                    *(int *)(lVar49 + 0x140) = (int)unaff_x19[200];
                    fVar75 = *(float *)(unaff_x19 + 0x9b);
                    uVar69 = (ulong)(uint)fVar75;
                    fVar79 = *(float *)((long)unaff_x19 + 0x61c);
                    *(float *)(lVar49 + 0x15c) =
                         (fVar58 - fVar80) / (fVar84 - fStack0000000000000134);
                    *(float *)(lVar49 + 0x14c) = (fVar61 - fVar75) + fVar79;
                    fVar58 = fStack0000000000000124 * fVar83;
                    if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                      fVar58 = fVar58 / fVar53;
                      fStack0000000000000120 = (fStack0000000000000120 * fVar83) / fVar53;
                    }
                    else {
                      fStack0000000000000120 = fStack0000000000000120 * fVar83;
                    }
                    uVar32 = *(uint *)(unaff_x19 + 0x93);
                    if ((uVar19 == 0) || (uVar46 == uVar32)) {
                      fStack0000000000000120 = fVar79 + fStack0000000000000120;
                      fVar58 = fVar79 + fVar58;
                      fVar61 = fStack0000000000000120;
                      fVar80 = fVar58;
                      if (fVar79 != 0.0) {
                        fVar80 = (fVar58 - fVar79) / *(float *)((long)unaff_x19 + 0x404);
                        fVar61 = (fStack0000000000000120 - fVar79) /
                                 *(float *)((long)unaff_x19 + 0x404);
                        if (fVar80 <= fVar58) {
                          fVar80 = fVar58;
                        }
                        if (fStack0000000000000120 <= fVar61) {
                          fVar61 = fStack0000000000000120;
                        }
                      }
                      lVar23 = lVar23 + lVar36 * 0x178;
                      fVar79 = fVar80;
                      if (fVar80 <= *(float *)(unaff_x19 + 0x99)) {
                        fVar79 = *(float *)(unaff_x19 + 0x99);
                      }
                      fVar84 = fVar61;
                      if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar61) {
                        fVar84 = *(float *)((long)unaff_x19 + 0x4cc);
                      }
                      *(float *)((long)unaff_x19 + 0x4cc) = fVar84;
                      *(float *)(unaff_x19 + 0x99) = fVar79;
                      *(float *)(lVar23 + 0x154) = fVar80;
                      *(float *)(lVar23 + 0x158) = fVar61;
                      *(float *)(lVar23 + 0x148) = fVar58 - fVar75;
                      *(float *)(unaff_x19 + 0x98) = fVar58 - fVar75;
                      *(float *)(lVar23 + 0x150) = fStack0000000000000120 - fVar75;
                      *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar75;
                      if (((int)unaff_x19[0x95] == 0) ||
                         (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                        *(float *)(unaff_x19 + 0x97) = fVar79;
                        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                        fVar79 = *(float *)((long)unaff_x19 + 0x4bc);
                        fVar80 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                        fVar53 = (fVar83 * fVar80) / fVar53;
                        uVar69 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                        if (fVar79 <= fVar53) {
                          fVar79 = fVar53;
                        }
                        *(float *)((long)unaff_x19 + 0x4bc) = fVar79;
                      }
                      if ((float)uVar69 == 0.0) {
                        fVar53 = *(float *)((long)unaff_x19 + 0x4b4);
                        if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar58) {
                          fVar53 = fVar58;
                        }
                        *(float *)((long)unaff_x19 + 0x4b4) = fVar53;
                      }
                    }
                    else {
                      fVar53 = *(float *)(unaff_x19 + 0x99);
                      lVar23 = lVar23 + lVar36 * 0x178;
                      *(float *)(lVar23 + 0x154) = fVar53;
                      fVar79 = *(float *)((long)unaff_x19 + 0x4cc);
                      fVar53 = fVar53 - fVar75;
                      *(float *)(lVar23 + 0x148) = fVar53;
                      *(float *)(lVar23 + 0x158) = fVar79;
                      *(float *)(unaff_x19 + 0x98) = fVar53;
                      fVar79 = fVar79 - fVar75;
                      *(float *)(lVar23 + 0x150) = fVar79;
                      *(float *)((long)unaff_x19 + 0x4c4) = fVar79;
                    }
                    lVar23 = *plVar4;
                    if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                    goto LAB_0354fbf4;
                    uVar20 = *puVar2;
                    if (*(uint *)(lVar36 + 0x18) <= uVar20)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar36 = lVar36 + (long)(int)uVar20 * 0x178;
                    *(undefined1 *)(lVar36 + 0x194) = 0;
                    uVar39 = *(uint *)(unaff_x19 + 0x4f);
                    if ((uVar17 == 9) ||
                       (((((uVar19 == 0 && (uVar17 != 3)) && (uVar17 != 0x200b)) && (uVar17 != 0xad)
                         ) || (((bool)(uVar17 == 0xad & (bVar15 ^ 1U)) ||
                               (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                      *(undefined1 *)(lVar36 + 0x194) = 1;
                      pfVar37 = (float *)((long)unaff_x19 + 0x354);
                      pfVar33 = (float *)(unaff_x19 + 0x6a);
                      if (bVar9) {
                        lVar23 = *(long *)(lVar23 + 0x50);
                        if (lVar23 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        pfVar33 = (float *)(lVar23 + 0x60);
                        pfVar37 = (float *)(lVar23 + 100);
                      }
                      fVar79 = *pfVar33;
                      fVar58 = *pfVar37;
                      fVar53 = *(float *)(unaff_x19 + 0x6c);
                      fVar80 = *(float *)(unaff_x19 + 200);
                      fStack00000000000000fc = (fVar82 - fVar79) - fVar58;
                      bVar14 = true;
                      if ((fVar53 <= fStack00000000000000fc) && (bVar14 = false, !NAN(fVar53))) {
                        bVar14 = fVar53 == -1.0;
                      }
                      if (!bVar14) {
                        fStack00000000000000fc = fVar53;
                      }
                      fVar53 = 0.0;
                      if ((char)unaff_x19[0x1e] == '\0') {
                        fVar53 = (float)FUN_03776cb4(&stack0x000017a0,0);
                        uVar69 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                      }
                      fVar75 = *(float *)((long)unaff_x19 + 0x2d4);
                      fVar61 = *(float *)((long)unaff_x19 + 0x4cc);
                      if (uVar17 != 0xad) {
                        fVar78 = fVar83;
                      }
                      fVar63 = (float)uVar69;
                      fVar84 = 0.0;
                      if ((0.0 < fVar63) &&
                         (fVar84 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar84 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      uVar20 = *puVar2;
                      fVar84 = (*(float *)(unaff_x19 + 0x97) - (fVar61 - fVar63)) + fVar84;
                      if (fVar52 < fVar84) {
                        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2e4) = uVar20;
                        }
                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        uVar68 = DAT_00d37868;
                        if ((char)unaff_x19[0x47] != '\0') {
                          fVar73 = *(float *)(unaff_x19 + 0x59);
                          if (((fVar73 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar63)) &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar56 = *(float *)((long)unaff_x19 + 700) +
                                     ((fVar71 - fVar84) / (float)(int)unaff_x19[0x95]) / fVar50;
                            if (fVar56 <= fVar73) {
                              fVar56 = fVar73;
                            }
                            goto UnityEngine_AndroidJavaObject___ctor;
                          }
                          fVar63 = *(float *)((long)unaff_x19 + 0x1e4);
                          fVar84 = *(float *)(unaff_x19 + 0x4a);
                          uVar69 = (ulong)(uint)fVar84;
                          if ((fVar84 < fVar63) &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar56 = (fVar63 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar56 <= DAT_00d38b84) {
                              fVar56 = DAT_00d38b84;
                            }
                            fVar67 = (fVar63 - fVar56) * 20.0 + 0.5;
                            *(float *)((long)unaff_x19 + 0x23c) = fVar63;
                            fVar56 = DAT_00d38e60;
                            if (fVar67 != INFINITY) {
                              fVar56 = (float)(int)fVar67 / 20.0;
                            }
                            if (fVar56 <= fVar84) {
                              fVar56 = fVar84;
                            }
                            goto LAB_0354d004;
                          }
                        }
                        switch((int)unaff_x19[0x5c]) {
                        case 1:
                          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar23 = *(long *)puVar12;
                          }
                          lVar36 = *(long *)(lVar23 + 0xb8);
                          lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                          if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                            lVar23 = FUN_01a46ff8(lVar23);
                          }
                          piVar29 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                              *(long *)(*(long *)(*(long *)(lVar23 +
                                                                                           0xc0) + 8
                                                                                 ) + 0x80) + 0xa0);
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*piVar29 == 0) {
LAB_0354cf2c:
                            in_stack_000017d8 = DAT_00d37868;
                            puVar2[0] = 0;
                            puVar2[1] = 0;
                            uVar86 = 0xffffffff;
                          }
                          else {
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar23 = *(long *)puVar12;
                            }
                            FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                            iVar18 = FUN_0358c15c();
LAB_0354b3a0:
                            iVar21 = *(int *)((long)unaff_x19 + 0x494) + -1;
                            *(int *)((long)unaff_x19 + 0x494) = iVar21;
                            iVar40 = iVar40 + 1;
                            uVar86 = iVar18 - 1;
                            in_stack_000017d8 = CONCAT44(0x2026,iVar21);
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
                          if ((uVar20 == 0) || ((int)uVar86 < 0)) {
                            *puVar2 = 0;
                            uVar86 = 0xffffffff;
                            in_stack_000017d8 = uVar68;
                          }
                          else {
                            fVar78 = *(float *)(unaff_x19 + 0x99);
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar86 = FUN_0358c15c();
                            if (fVar52 < fVar78 - fVar61) break;
                            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                            *(undefined4 *)(unaff_x19 + 0x93) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                            uVar69 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                         0xb8) + 0x15a8);
                            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            lVar23 = NEON_rev64(uVar69,4);
                            unaff_x19[0x99] = lVar23;
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
                          lVar23 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                          }
                          uVar26 = FUN_036cee6c(lVar23,0,0);
                          if ((uVar26 & 1) != 0) {
                            plVar48 = (long *)unaff_x19[0x5d];
                            uVar68 = (**(code **)(*unaff_x19 + 0x518))();
                            if (plVar48 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar48 + 0x528))
                                      (plVar48,uVar68,*(undefined8 *)(*plVar48 + 0x530));
                            lVar23 = unaff_x19[0x5d];
                            if (lVar23 == 0) goto LAB_0354fbf4;
                            *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                            FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                            plVar48 = (long *)unaff_x19[0x5d];
                            if (plVar48 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar48 + 0x7a8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7b0));
                            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                          }
                        }
LAB_0354b0e0:
                        in_stack_000017d8 = CONCAT44(3,uVar20);
                        goto LAB_03549564;
                      }
switchD_0354ad3c_caseD_2:
                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      fVar53 = ABS(fVar80) + fVar53 * (1.0 - fVar75) * fVar78;
                      fVar78 = 1.0;
                      if ((uVar39 & 0x18) != 0) {
                        fVar78 = DAT_00d38acc;
                      }
                      fVar80 = fVar78 * fStack00000000000000fc;
                      if (fVar80 < fVar53) {
                        uVar69 = (ulong)(uint)fVar59;
                        if (((char)unaff_x19[0x5b] == '\0') ||
                           (uVar20 == *(uint *)(unaff_x19 + 0x93))) {
                          if (((char)unaff_x19[0x47] != '\0') &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar80 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                            if (fVar75 < fVar80) {
                              fVar56 = fVar53 / (1.0 - fVar75);
                              if (fVar75 <= 0.0) {
                                fVar56 = fVar53;
                              }
                              fVar75 = fVar75 + (fVar53 - fVar78 * (fStack00000000000000fc +
                                                                   DAT_00d38cc4)) / fVar56;
                              goto LAB_0354fc24;
                            }
                            fVar75 = *(float *)((long)unaff_x19 + 0x1e4);
                            fVar80 = *(float *)(unaff_x19 + 0x4a);
                            if (fVar80 < fVar75) {
                              fVar56 = (fVar75 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                              if (fVar56 <= DAT_00d38b84) {
                                fVar56 = DAT_00d38b84;
                              }
                              *(float *)((long)unaff_x19 + 0x23c) = fVar75;
                              fVar75 = fVar75 - fVar56;
LAB_0354fc60:
                              fVar67 = fVar75 * 20.0 + 0.5;
                              fVar56 = DAT_00d38e60;
                              if (fVar67 != INFINITY) {
                                fVar56 = (float)(int)fVar67 / 20.0;
                              }
                              if (fVar56 <= fVar80) {
                                fVar56 = fVar80;
                              }
                              goto LAB_0354d004;
                            }
                          }
                          iVar18 = (int)unaff_x19[0x5c];
                          if (iVar18 == 1) {
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar23 = *(long *)puVar12;
                            }
                            lVar36 = *(long *)(lVar23 + 0xb8);
                            lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                              lVar23 = FUN_01a46ff8(lVar23);
                            }
                            piVar29 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                                *(long *)(*(long *)(*(long *)(lVar23
                                                                                             + 0xc0)
                                                                                   + 8) + 0x80) +
                                                                0xa0);
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*piVar29 == 0) goto LAB_0354cf2c;
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar23 = *(long *)puVar12;
                            }
                            FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
                            goto LAB_0354b394;
                          }
                          if (iVar18 != 6) {
                            if (iVar18 == 3) {
                              if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
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
                          lVar23 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                          }
                          uVar26 = FUN_036cee6c(lVar23,0,0);
                          if ((uVar26 & 1) != 0) {
                            plVar48 = (long *)unaff_x19[0x5d];
                            uVar68 = (**(code **)(*unaff_x19 + 0x518))();
                            if (plVar48 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar48 + 0x528))
                                      (plVar48,uVar68,*(undefined8 *)(*plVar48 + 0x530));
                            lVar23 = unaff_x19[0x5d];
                            if (lVar23 == 0) goto LAB_0354fbf4;
                            *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                            FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                            plVar48 = (long *)unaff_x19[0x5d];
                            if (plVar48 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar48 + 0x7a8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7b0));
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
                          lVar23 = *plVar4;
                          if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar36 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fVar80 = *(float *)(unaff_x19 + 0x9b);
                          fVar75 = 0.0;
                          if ((0.0 < fVar80) &&
                             (fVar75 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar75 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          fVar75 = fVar56 * *(float *)(unaff_x19 + 0x57) +
                                   *(float *)(lVar36 + (long)(int)*puVar2 * 0x178 + 0x154) +
                                   (fVar75 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                   fVar50 * (fVar51 + *(float *)((long)unaff_x19 + 700));
                        }
                        else {
                          lVar23 = unaff_x19[0x6d];
                          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                          if (lVar23 == 0) goto LAB_0354fbf4;
                          fVar80 = *(float *)(unaff_x19 + 0x9b);
                          fVar75 = *(float *)(unaff_x19 + 0x58) +
                                   fVar56 * *(float *)(unaff_x19 + 0x57);
                        }
                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar23 = *(long *)(lVar23 + 0x38);
                        if (lVar23 == 0) goto LAB_0354fbf4;
                        uVar41 = *(uint *)((long)unaff_x19 + 0x494);
                        if ((*(uint *)(lVar23 + 0x18) <= uVar41) ||
                           (uVar8 = uVar41 - 1, *(uint *)(lVar23 + 0x18) <= uVar8))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar69 = (ulong)(uint)(fVar75 + *(float *)(unaff_x19 + 0x97));
                        fVar61 = (fVar75 + *(float *)(unaff_x19 + 0x97) + fVar80) -
                                 *(float *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x158);
                        if ((!bVar15 && *(short *)(lVar23 + (long)(int)uVar8 * 0x178 + 0x20) == 0xad
                            ) && ((fVar61 < fVar52 || ((int)unaff_x19[0x5c] == 0)))) {
                          bVar15 = false;
                          *puVar2 = uVar8;
                          uVar86 = uVar86 - 1;
                          in_stack_000017d8 = CONCAT44(0x2d,uVar8);
                          goto LAB_03549564;
                        }
                        if (*(short *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x20) == 0xad) {
                          bVar15 = true;
                          goto LAB_03549564;
                        }
                        if ((bVar10 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                          fVar75 = *(float *)((long)unaff_x19 + 0x2d4);
                          fVar80 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                          if ((fVar80 <= fVar75) ||
                             ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                            fVar75 = *(float *)((long)unaff_x19 + 0x1e4);
                            uVar69 = (ulong)(uint)fVar75;
                            fVar80 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar75 <= fVar80) ||
                               ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                            goto LAB_0354b6dc;
LAB_0354fcd0:
                            fVar56 = (fVar75 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar56 <= DAT_00d38b84) {
                              fVar56 = DAT_00d38b84;
                            }
                            *(float *)((long)unaff_x19 + 0x23c) = fVar75;
                            fVar75 = fVar75 - fVar56;
                            goto LAB_0354fc60;
                          }
LAB_0354fc94:
                          fVar56 = fVar53;
                          if (0.0 < fVar75) {
                            fVar56 = fVar53 / (1.0 - fVar75);
                          }
                          fVar75 = fVar75 + (fVar53 - fVar78 * (fStack00000000000000fc +
                                                               DAT_00d38cc4)) / fVar56;
LAB_0354fc24:
                          if (fVar80 <= fVar75) {
                            fVar75 = fVar80;
                          }
                          *(float *)((long)unaff_x19 + 0x2d4) = fVar75;
                          return;
                        }
LAB_0354b6dc:
                        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar23 = *(long *)puVar12;
                        }
                        iVar18 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
                        if (((iVar18 != iStack000000000000002c) && (iVar18 != -1)) && (bVar10 == 1))
                        {
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar86 = FUN_0358c15c();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
                          goto LAB_0354fbf4;
                          uVar41 = *puVar2 - 1;
                          if (*(uint *)(lVar23 + 0x18) <= uVar41)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          iStack000000000000002c = iVar18;
                          if (*(short *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x20) == 0xad) {
                            bVar15 = false;
                            *puVar2 = uVar41;
                            uVar86 = uVar86 - 1;
                            in_stack_000017d8 = CONCAT44(0x2d,uVar41);
                            goto LAB_03549564;
                          }
                        }
                        if (fVar61 <= fVar52) {
switchD_0354b88c_caseD_0:
                          FUN_0358cbd4(fVar50,uVar28,fVar56,*(undefined4 *)((long)unaff_x19 + 0x2fc)
                                       ,fStack00000000000000d0,fVar57,fStack00000000000000fc,fVar51)
                          ;
                        }
                        else {
                          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                            *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                          }
                          fVar80 = fVar52;
                          if ((char)unaff_x19[0x47] != '\0') {
                            fVar80 = *(float *)(unaff_x19 + 0x59);
                            if ((fVar80 < *(float *)((long)unaff_x19 + 700)) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                              fVar56 = *(float *)((long)unaff_x19 + 700) +
                                       ((fVar71 - fVar61) / (float)((int)unaff_x19[0x95] + 1)) /
                                       fVar50;
                              if (fVar56 <= fVar80) {
                                fVar56 = fVar80;
                              }
UnityEngine_AndroidJavaObject___ctor:
                              *(float *)((long)unaff_x19 + 700) = fVar56;
                              return;
                            }
                            fVar75 = *(float *)((long)unaff_x19 + 0x2d4);
                            fVar80 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                            if ((fVar75 < fVar80) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_0354fc94;
                            fVar75 = *(float *)((long)unaff_x19 + 0x1e4);
                            uVar69 = (ulong)(uint)fVar75;
                            fVar80 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar80 < fVar75) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_0354fcd0;
                          }
                          switch((int)unaff_x19[0x5c]) {
                          case 0:
                          case 2:
                          case 4:
                            goto switchD_0354b88c_caseD_0;
                          case 1:
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            }
                            lVar36 = *(long *)(lVar23 + 0xb8);
                            lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                            if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                              lVar23 = FUN_01a46ff8(lVar23);
                            }
                            piVar29 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                                *(long *)(*(long *)(*(long *)(lVar23
                                                                                             + 0xc0)
                                                                                   + 8) + 0x80) +
                                                                0xa0);
                            if (*piVar29 == 0) {
                              bVar15 = false;
                              goto LAB_0354cf2c;
                            }
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            }
                            FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                            iVar18 = FUN_0358c15c();
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
                            FUN_0358cbd4(fVar50,uVar28,fVar56,
                                         *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                         fStack00000000000000d0,fVar57,fStack00000000000000fc,fVar51
                                        );
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                            *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                            break;
                          case 6:
                            lVar23 = unaff_x19[0x5d];
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar26 = FUN_036cee6c(lVar23,0,0);
                            if ((uVar26 & 1) != 0) {
                              plVar48 = (long *)unaff_x19[0x5d];
                              uVar68 = (**(code **)(*unaff_x19 + 0x518))();
                              if (plVar48 == (long *)0x0) goto LAB_0354fbf4;
                              (**(code **)(*plVar48 + 0x528))
                                        (plVar48,uVar68,*(undefined8 *)(*plVar48 + 0x530));
                              lVar23 = unaff_x19[0x5d];
                              if (lVar23 == 0) goto LAB_0354fbf4;
                              *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                              FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                              plVar48 = (long *)unaff_x19[0x5d];
                              if (plVar48 == (long *)0x0) goto LAB_0354fbf4;
                              (**(code **)(*plVar48 + 0x7a8))
                                        (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7b0));
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
                        uVar69 = uVar28;
                        uVar28 = (ulong)(uint)fVar83;
                        goto LAB_03549564;
                      }
LAB_0354b8e4:
                      if (uVar17 != 0xad) {
                        if (uVar17 == 9) {
                          lVar23 = *plVar4;
                          if ((lVar23 != 0) && (lVar36 = *(long *)(lVar23 + 0x38), lVar36 != 0)) {
                            uVar20 = *puVar2;
                            if (*(uint *)(lVar36 + 0x18) <= uVar20)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            *(undefined1 *)(lVar36 + (long)(int)uVar20 * 0x178 + 0x194) = 0;
                            *(uint *)((long)unaff_x19 + 0x4a4) = uVar20;
                            lVar36 = *(long *)(lVar23 + 0x50);
                            if (lVar36 != 0) {
                              if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar36 + 0x18)) {
                                lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
                                goto LAB_0354b950;
                              }
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            }
                          }
                        }
                        else {
                          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                            (**(code **)(*unaff_x19 + 0x898))(fVar80,fVar59);
                          }
                          else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                            (**(code **)(*unaff_x19 + 0x888))(fStack000000000000016c);
                          }
                          if (bVar11) {
                            *(uint *)((long)unaff_x19 + 0x49c) = *puVar2;
                          }
                          *(uint *)((long)unaff_x19 + 0x4a4) = *puVar2;
                          *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
                          if ((unaff_x19[0x6d] != 0) &&
                             (lVar23 = *(long *)(unaff_x19[0x6d] + 0x50), lVar23 != 0)) {
                            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar23 + 0x18)) {
                              lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              bVar11 = false;
                              *(float *)(lVar23 + 0x60) = fVar79;
                              *(float *)(lVar23 + 100) = fVar58;
                              goto LAB_0354ba38;
                            }
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          }
                        }
                        goto LAB_0354fbf4;
                      }
                      if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(undefined1 *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x194) = 0;
                    }
                    else {
                      if (((uVar17 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                        fVar53 = (float)uVar69;
                        fVar78 = 0.0;
                        if ((0.0 < fVar53) &&
                           (fVar78 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                          fVar78 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                        }
                        uVar69 = (ulong)(uint)fVar52;
                        if (fVar52 < (*(float *)(unaff_x19 + 0x97) -
                                     (*(float *)((long)unaff_x19 + 0x4cc) - fVar53)) + fVar78) {
                          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                            *(uint *)((long)unaff_x19 + 0x2e4) = uVar20;
                          }
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar86 = FUN_0358c15c();
                          lVar23 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                          }
                          uVar26 = FUN_036cee6c(lVar23,0,0);
                          if ((uVar26 & 1) != 0) {
                            plVar48 = (long *)unaff_x19[0x5d];
                            uVar68 = (**(code **)(*unaff_x19 + 0x518))();
                            if (plVar48 != (long *)0x0) {
                              (**(code **)(*plVar48 + 0x528))
                                        (plVar48,uVar68,*(undefined8 *)(*plVar48 + 0x530));
                              lVar23 = unaff_x19[0x5d];
                              if (lVar23 != 0) {
                                *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar48 = (long *)unaff_x19[0x5d];
                                if (plVar48 != (long *)0x0) {
                                  (**(code **)(*plVar48 + 0x7a8))
                                            (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7b0));
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
                      if ((((uVar17 - 0x2007 < 0x23) &&
                           ((1L << ((ulong)(uVar17 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                          (uVar17 - 10 < 2)) || (uVar17 == 0xa0)) {
LAB_0354b500:
                        if (((uVar17 != 0xad) && (uVar17 != 0x200b)) && (uVar17 != 0x2060)) {
                          lVar23 = *plVar4;
                          if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x50), lVar36 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                          *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
                          *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                        }
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar28 = FUN_026b97f8(uVar17,0);
                        if ((uVar28 & 1) != 0) goto LAB_0354b500;
                      }
                      if (uVar17 == 0xa0) {
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x50), lVar23 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
                        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                      }
                    }
LAB_0354ba38:
                    if (((int)unaff_x19[0x5c] == 1) && ((uVar17 == 0x2d || (!bVar9)))) {
                      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                      fVar78 = *(float *)(unaff_x19 + 0x3d);
                      iVar18 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                      fVar79 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                      lVar23 = unaff_x19[0xca];
                      fVar53 = fVar67;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar53 = 1.0;
                      }
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_0354fbf4;
                      fVar80 = *(float *)((long)unaff_x19 + 0x404);
                      fVar75 = *(float *)(lVar23 + 0x2c);
                      fVar58 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                      fVar59 = *(float *)(unaff_x19 + 0x6a);
                      fVar58 = fVar80 * (fVar78 / (float)iVar18) * fVar79 * fVar53 * fVar75 * fVar58
                      ;
                      fVar78 = *(float *)((long)unaff_x19 + 0x354);
                      if ((uVar17 == 10) &&
                         (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x38), lVar23 == 0))
                        goto LAB_0354fbf4;
                        uVar20 = *(int *)((long)unaff_x19 + 0x494) - 1;
                        if (*(uint *)(lVar23 + 0x18) <= uVar20)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                        fVar53 = *(float *)(lVar23 + (long)(int)uVar20 * 0x178 + 0x60);
                        iVar18 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                        fVar80 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                        lVar23 = unaff_x19[0xca];
                        fVar79 = fVar67;
                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                          fVar79 = 1.0;
                        }
                        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_0354fbf4;
                        fVar75 = *(float *)((long)unaff_x19 + 0x404);
                        fVar61 = *(float *)(lVar23 + 0x2c);
                        fVar58 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                        if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x50), lVar23 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        fVar59 = *(float *)(lVar23 + 0x60);
                        fVar78 = *(float *)(lVar23 + 100);
                        fVar58 = fVar75 * (fVar53 / (float)iVar18) * fVar80 * fVar79 * fVar61 *
                                 fVar58;
                      }
                      fVar80 = *(float *)(unaff_x19 + 0x9b);
                      fVar53 = 0.0;
                      fVar79 = 0.0;
                      if ((0.0 < fVar80) &&
                         (fVar79 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar79 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      fVar61 = *(float *)(unaff_x19 + 0x97);
                      fVar84 = *(float *)((long)unaff_x19 + 0x4cc);
                      fVar75 = *(float *)(unaff_x19 + 200);
                      if ((char)unaff_x19[0x1e] == '\0') {
                        if ((unaff_x19[0xca] == 0) ||
                           (lVar23 = *(long *)(unaff_x19[0xca] + 0x20), lVar23 == 0))
                        goto LAB_0354fbf4;
                        FUN_03776e6c(&stack0x000008b0,lVar23,0);
                        fVar53 = (float)FUN_03776cb4(&stack0x00001710,0);
                      }
                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      fVar63 = *(float *)(unaff_x19 + 0x6c);
                      fVar78 = (fVar82 - fVar59) - fVar78;
                      bVar14 = true;
                      if ((fVar63 <= fVar78) && (bVar14 = false, !NAN(fVar63))) {
                        bVar14 = fVar63 == -1.0;
                      }
                      if (!bVar14) {
                        fVar78 = fVar63;
                      }
                      fVar59 = 1.0;
                      if ((uVar39 & 0x18) != 0) {
                        fVar59 = DAT_00d38acc;
                      }
                      if (((fVar61 - (fVar84 - fVar80)) + fVar79 < fVar52) &&
                         (ABS(fVar75) +
                          fVar58 * fVar53 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                          fVar59 * fVar78)) {
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_0358c4f0();
                        lVar23 = *(long *)(*(long *)puVar12 + 0xb8);
                        memcpy(&stack0x00000538,(void *)(lVar23 + 0x788),0x378);
                        FUN_0209b210(lVar23 + 0x11f0,&stack0x00000538,
                                     *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                      }
                    }
                    lVar23 = *plVar4;
                    if (lVar23 == 0) goto LAB_0354fbf4;
                    lVar36 = *(long *)(lVar23 + 0x38);
                    if (lVar36 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar36 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    uVar20 = *(uint *)(unaff_x19 + 0x95);
                    lVar36 = lVar36 + (long)(int)*puVar2 * 0x178;
                    *(uint *)(lVar36 + 100) = uVar20;
                    *(int *)(lVar36 + 0x68) = (int)unaff_x19[0x96];
                    if ((bVar9) ||
                       ((uVar17 < 0xe && ((1 << (ulong)(uVar17 & 0x1f) & 0x2c00U) != 0)))) {
                      lVar23 = *(long *)(lVar23 + 0x50);
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar20)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      if (*(int *)(lVar23 + (long)(int)uVar20 * 0x5c + 0x24) == 1)
                      goto LAB_0354bde0;
                    }
                    else {
                      lVar23 = *(long *)(lVar23 + 0x50);
                      if (lVar23 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
                      if (*(uint *)(lVar23 + 0x18) <= uVar20)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(int *)(lVar23 + (long)(int)uVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                    }
                    if (uVar17 == 9) {
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar78 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar62 = *(float *)(unaff_x19 + 200);
                      fVar53 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
                      fVar78 = fVar83 * fVar78 * fVar53;
                      fVar53 = fVar78 * (float)(int)(fVar62 / fVar78);
                      uVar69 = (ulong)(uint)fVar53;
                      if (fVar53 <= fVar62) {
                        fVar53 = fVar62 + fVar78;
                      }
LAB_0354c000:
                      *(float *)(unaff_x19 + 200) = fVar53;
                    }
                    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                      if ((char)unaff_x19[0x1e] == '\0') {
                        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                          fVar79 = 1.0;
                        }
                        else {
                          fVar79 = (float)thunk_FUN_036bc400(lVar24,0);
                        }
                        fVar53 = *(float *)(unaff_x19 + 200);
                        fVar58 = (float)FUN_03776cb4(&stack0x000017a0,0);
                        if (unaff_x19[0x20] != 0) {
                          fVar78 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                          fVar53 = fVar53 + fVar78 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                     fVar83 * (fVar62 + fVar79 * fVar58) +
                                                     fVar56 * (fStack00000000000000d0 +
                                                              fVar57 + *(float *)(unaff_x19[0x20] +
                                                                                 0x1ac)));
                          *(float *)(unaff_x19 + 200) = fVar53;
                          goto joined_r0x0354bf48;
                        }
                        goto LAB_0354fbf4;
                      }
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (*(float *)((long)unaff_x19 + 0x2ac) +
                               fVar83 * fVar62 +
                               fVar56 * (fStack00000000000000d0 +
                                        fVar57 + *(float *)(*unaff_x21 + 0x1ac)));
                      uVar69 = (ulong)(uint)fVar53;
                      fVar53 = *(float *)(unaff_x19 + 200) - fVar53;
                      *(float *)(unaff_x19 + 200) = fVar53;
                      if ((uVar17 == 0x200b) || (uVar19 != 0)) {
                        fVar78 = fVar56 * *(float *)((long)unaff_x19 + 0x2b4);
                        uVar69 = (ulong)(uint)fVar78;
                        fVar53 = fVar53 - fVar78;
                        goto LAB_0354c000;
                      }
                    }
                    else {
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar78 = *(float *)(unaff_x19 + 200);
                      fVar53 = fVar78 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                        (*(float *)((long)unaff_x19 + 0x2ac) +
                                        (*(float *)(unaff_x19 + 0x56) - fVar60) +
                                        fVar56 * (fVar57 + *(float *)(*unaff_x21 + 0x1ac)));
                      *(float *)(unaff_x19 + 200) = fVar53;
joined_r0x0354bf48:
                      if ((uVar17 == 0x200b) || (uVar69 = (ulong)(uint)fVar78, uVar19 != 0)) {
                        fVar78 = fVar56 * *(float *)((long)unaff_x19 + 0x2b4);
                        uVar69 = (ulong)(uint)fVar78;
                        fVar53 = fVar53 + fVar78;
                        goto LAB_0354c000;
                      }
                    }
                    lVar23 = *plVar4;
                    if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                    goto LAB_0354fbf4;
                    uVar20 = *puVar2;
                    uVar39 = (uint)*(undefined8 *)(lVar36 + 0x18);
                    if (uVar39 <= uVar20)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(float *)(lVar36 + (long)(int)uVar20 * 0x178 + 0x144) = fVar53;
                    uVar41 = uVar17;
                    if ((int)uVar17 < 0xd) {
                      if ((uVar17 - 10 < 2) || (uVar17 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
                      if (((bool)(bVar9 & uVar17 == 0x2d)) || (uVar20 == uVar35)) goto LAB_0354c060;
                    }
                    else {
                      if (1 < uVar17 - 0x2028) {
                        if (uVar17 != 0xd) goto LAB_0354c6e8;
                        uVar69 = 0;
                        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                        if (uVar20 != uVar35) goto LAB_0354c704;
                      }
LAB_0354c060:
                      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                        fVar78 = *(float *)(unaff_x19 + 0x99);
                        fVar53 = *(float *)(unaff_x19 + 0x9a);
                        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        fVar78 = fVar78 - fVar53;
                        if (((fVar77 < ABS(fVar78)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                          FUN_0358c860(fVar78);
                          *(float *)((long)unaff_x19 + 0x4c4) =
                               *(float *)((long)unaff_x19 + 0x4c4) - fVar78;
                          *(float *)(unaff_x19 + 0x9b) = fVar78 + *(float *)(unaff_x19 + 0x9b);
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar23 = *(long *)puVar12;
                          }
                          lVar36 = *(long *)(lVar23 + 0xb8);
                          if (*(int *)(lVar36 + 0x7ac) == (int)unaff_x19[0x95]) {
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar36 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                            }
                            FUN_0209b778(lVar36 + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x000008b0,0x378
                                  );
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (*(long *)(lVar23 + 0xb8) + 0x818,0);
                            lVar23 = *(long *)(*(long *)puVar12 + 0xb8);
                            *(float *)(lVar23 + 0x7bc) = fVar78 + *(float *)(lVar23 + 0x7bc);
                            *(float *)(lVar23 + 0x800) = fVar78 + *(float *)(lVar23 + 0x800);
                            memcpy(&stack0x000001c0,(void *)(lVar23 + 0x788),0x378);
                            FUN_0209b210(lVar23 + 0x11f0,&stack0x000001c0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                          }
                        }
                      }
                      fVar62 = *(float *)(unaff_x19 + 0x9b);
                      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                      fVar53 = *(float *)((long)unaff_x19 + 0x4cc) - fVar62;
                      fVar78 = *(float *)((long)unaff_x19 + 0x4c4);
                      if (fVar53 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                        fVar78 = fVar53;
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
                      lVar23 = *plVar4;
                      if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x50), lVar36 == 0))
                      goto LAB_0354fbf4;
                      uVar20 = *(uint *)(unaff_x19 + 0x95);
                      if (*(uint *)(lVar36 + 0x18) <= uVar20)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar49 = unaff_x19[0x93];
                      lVar27 = lVar36 + (long)(int)uVar20 * 0x5c;
                      *(int *)(lVar27 + 0x34) = (int)lVar49;
                      uVar39 = *(uint *)(unaff_x19 + 0x93);
                      if ((int)lVar49 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                        uVar39 = *(uint *)((long)unaff_x19 + 0x49c);
                      }
                      *(uint *)((long)unaff_x19 + 0x49c) = uVar39;
                      *(uint *)(lVar27 + 0x38) = uVar39;
                      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
                      *(undefined4 *)(lVar27 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                      iVar18 = *(int *)((long)unaff_x19 + 0x49c);
                      if ((int)uVar39 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                        iVar18 = *(int *)((long)unaff_x19 + 0x4a4);
                      }
                      *(int *)((long)unaff_x19 + 0x4a4) = iVar18;
                      *(int *)(lVar27 + 0x40) = iVar18;
                      *(int *)(lVar27 + 0x24) =
                           (*(int *)(lVar27 + 0x3c) - *(int *)(lVar27 + 0x34)) + 1;
                      *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                      lVar23 = *(long *)(lVar23 + 0x38);
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= uVar39)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar16 = *(undefined4 *)(lVar23 + (long)(int)uVar39 * 0x178 + 0x11c);
                      lVar36 = lVar36 + (long)(int)uVar20 * 0x5c;
                      *(float *)(lVar36 + 0x70) = fVar53;
                      *(undefined4 *)(lVar36 + 0x6c) = uVar16;
                      lVar23 = *plVar4;
                      if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x50), lVar36 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar23 = *(long *)(lVar23 + 0x38);
                      if (lVar23 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fVar79 = fVar79 - fVar62;
                      uVar69 = (ulong)(uint)fVar79;
                      lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      *(undefined4 *)(lVar36 + 0x74) =
                           *(undefined4 *)
                            (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * 0x178 + 0x128)
                      ;
                      *(float *)(lVar36 + 0x78) = fVar79;
                      lVar23 = *plVar4;
                      if ((lVar23 == 0) || (lVar49 = *(long *)(lVar23 + 0x50), lVar49 == 0))
                      goto LAB_0354fbf4;
                      lVar27 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                      if (*(uint *)(lVar49 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar36 = lVar49 + lVar27 * 0x5c;
                      *(float *)(lVar36 + 0x44) =
                           *(float *)(lVar36 + 0x74) - fVar83 * fStack000000000000016c;
                      *(float *)(lVar36 + 0x5c) = fStack00000000000000fc;
                      if (*(int *)(lVar36 + 0x24) == 1) {
                        *(int *)(lVar49 + lVar27 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                      }
                      if ((*unaff_x21 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                      goto LAB_0354fbf4;
                      lVar43 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                      uVar39 = (uint)*(undefined8 *)(lVar36 + 0x18);
                      if (uVar39 <= *(uint *)((long)unaff_x19 + 0x4a4))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      if ((*(char *)(lVar36 + lVar43 * 0x178 + 0x194) == '\0') &&
                         (lVar43 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                         uVar39 <= *(uint *)(unaff_x19 + 0x94)))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar49 = lVar49 + lVar27 * 0x5c;
                      fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (fVar56 * (fStack00000000000000d0 +
                                         fVar57 + *(float *)(*unaff_x21 + 0x1ac)) -
                               *(float *)((long)unaff_x19 + 0x2ac));
                      fVar78 = -fVar57;
                      if ((char)unaff_x19[0x1e] != '\0') {
                        fVar78 = fVar57;
                      }
                      *(float *)(lVar49 + 0x58) =
                           *(float *)(lVar36 + lVar43 * 0x178 + 0x144) + fVar78;
                      *(float *)(lVar49 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                      *(float *)(lVar49 + 0x54) = fVar53;
                      *(float *)(lVar49 + 0x48) = fVar50 * fVar51 + (fVar79 - fVar53);
                      *(float *)(lVar49 + 0x4c) = fVar79;
                      if ((int)uVar17 < 0x2d) {
                        if (uVar17 - 10 < 2) {
LAB_0354c4a8:
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          FUN_0358c4f0();
                          lVar23 = unaff_x19[0x6d];
                          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                          iVar18 = (int)unaff_x19[0x95] + 1;
                          *(int *)(unaff_x19 + 0x95) = iVar18;
                          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                          if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                            if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar18) {
                              FUN_0358ca18();
                              lVar23 = unaff_x19[0x6d];
                              if (lVar23 == 0) goto LAB_0354fbf4;
                            }
                            lVar23 = *(long *)(lVar23 + 0x38);
                            if (lVar23 != 0) {
                              if (*puVar2 < *(uint *)(lVar23 + 0x18)) {
                                fVar78 = *(float *)(lVar23 + (long)(int)*puVar2 * 0x178 + 0x154);
                                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                  if ((uVar17 == 0x2029) || (fVar53 = 0.0, uVar17 == 10)) {
                                    fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
                                  }
                                  uVar30 = 0;
                                  fVar53 = fVar78 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                           fVar50 * (fVar51 + *(float *)((long)unaff_x19 + 700)) +
                                           fVar56 * (*(float *)(unaff_x19 + 0x57) + fVar53) +
                                           *(float *)(unaff_x19 + 0x9b);
                                }
                                else {
                                  if ((uVar17 == 0x2029) || (fVar53 = 0.0, uVar17 == 10)) {
                                    fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
                                  }
                                  uVar30 = 1;
                                  fVar53 = *(float *)(unaff_x19 + 0x9b) +
                                           *(float *)(unaff_x19 + 0x58) +
                                           fVar56 * (*(float *)(unaff_x19 + 0x57) + fVar53);
                                }
                                *(float *)(unaff_x19 + 0x9b) = fVar53;
                                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar30;
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar23 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar23 = *(long *)puVar12;
                                }
                                uVar68 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 0x9a) = fVar78;
                                uVar28 = NEON_rev64(uVar68,4);
                                unaff_x19[0x99] = uVar28;
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
                        if (uVar17 == 3) {
                          if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                          uVar86 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                          uVar41 = 3;
                        }
                      }
                      else if ((uVar17 - 0x2028 < 2) || (uVar17 == 0x2d)) goto LAB_0354c4a8;
                    }
LAB_0354c704:
                    uVar20 = *puVar2;
                    if (uVar39 <= uVar20)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (*(char *)(lVar36 + (long)(int)uVar20 * 0x178 + 0x194) != '\0') {
                      lVar36 = lVar36 + (long)(int)uVar20 * 0x178;
                      uVar69 = *(ulong *)(lVar36 + 0x11c);
                      uVar28 = *(ulong *)((long)unaff_x19 + 0x4dc);
                      *(ulong *)((long)unaff_x19 + 0x4dc) =
                           uVar28 ^ (uVar28 ^ uVar69) &
                                    ~CONCAT44(-(uint)((float)(uVar28 >> 0x20) <
                                                     (float)(uVar69 >> 0x20)),
                                              -(uint)((float)uVar28 < (float)uVar69));
                      uVar28 = *(ulong *)((long)unaff_x19 + 0x4e4);
                      uVar69 = *(ulong *)(lVar36 + 0x128);
                      *(ulong *)((long)unaff_x19 + 0x4e4) =
                           uVar28 ^ (uVar28 ^ uVar69) &
                                    ~CONCAT44(-(uint)((float)(uVar69 >> 0x20) <
                                                     (float)(uVar28 >> 0x20)),
                                              -(uint)((float)uVar69 < (float)uVar28));
                    }
                    if (((int)unaff_x19[0x5c] == 5) &&
                       ((0xd < uVar41 || ((1 << (ulong)(uVar41 & 0x1f) & 0x2c00U) == 0)))) {
                      lVar36 = *(long *)(lVar23 + 0x58);
                      if (lVar36 == 0) goto LAB_0354fbf4;
                      iVar18 = (int)unaff_x19[0x96] + 1;
                      if (*(int *)(lVar36 + 0x18) < iVar18) {
                        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_01ff02b8((long *)(lVar23 + 0x58),iVar18,1,
                                     *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                        lVar23 = *plVar4;
                        if (lVar23 == 0) goto LAB_0354fbf4;
                      }
                      lVar36 = *(long *)(lVar23 + 0x58);
                      if (lVar36 == 0) goto LAB_0354fbf4;
                      uVar39 = *(uint *)(unaff_x19 + 0x96);
                      lVar49 = (long)(int)uVar39;
                      uVar20 = *(uint *)(lVar36 + 0x18);
                      if (uVar20 <= uVar39)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar27 = lVar36 + lVar49 * 0x14;
                      fVar53 = *(float *)(lVar27 + 0x30);
                      uVar69 = (ulong)(uint)fVar53;
                      *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                      fVar78 = *(float *)((long)unaff_x19 + 0x4c4);
                      if (fVar53 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                        fVar78 = fVar53;
                      }
                      *(float *)(lVar27 + 0x30) = fVar78;
                      uVar41 = *(uint *)((long)unaff_x19 + 0x494);
                      if (uVar41 == 0 && uVar39 == 0) {
                        *(uint *)(lVar36 + (ulong)uVar39 * 0x14 + 0x20) = uVar41;
                      }
                      else {
                        uVar8 = uVar41 - 1;
                        if (0 < (int)uVar41) {
                          lVar23 = *(long *)(lVar23 + 0x38);
                          if (lVar23 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar23 + 0x18) <= uVar8)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          if (uVar39 != *(uint *)(lVar23 + (ulong)uVar8 * 0x178 + 0x68)) {
                            if (uVar39 - 1 < uVar20) {
                              *(uint *)(lVar36 + 0x20 + (long)(int)(uVar39 - 1) * 0x14 + 4) = uVar8;
                              *(uint *)(lVar36 + 0x20 + lVar49 * 0x14) = uVar41;
                              goto LAB_0354c780;
                            }
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          }
                        }
                        if (uVar41 == uVar35) {
                          *(uint *)(lVar36 + lVar49 * 0x14 + 0x24) = uVar35;
                        }
                      }
                    }
LAB_0354c780:
                    puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (((char)unaff_x19[0x5b] == '\0') &&
                       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                    goto LAB_0354cc90;
                    if ((uVar19 == 0) &&
                       (((uVar17 != 0x2d && (uVar17 != 0x200b)) && (uVar17 != 0xad)))) {
                      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
                        if (((((0x2bfd < uVar17 - 0xac01) && (0xfd < uVar17 - 0x1101)) &&
                             (0x1d < uVar17 - 0xa961)) ||
                            (uVar28 = FUN_03597a54(0), (uVar28 & 1) != 0)) &&
                           ((((0xed < uVar17 - 0xff01 && (0x1d < uVar17 - 0xfe31)) &&
                             (0x717d < uVar17 - 0x2e81)) && (0x1fd < uVar17 - 0xf901))))
                        goto LAB_0354c904;
                        lVar23 = FUN_035978e8(0);
                        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_0354fbf4;
                        uVar85 = (ulong)uVar17;
                        uVar20 = FUN_0219c130(*(long *)(lVar23 + 0x10),&stack0x000008b0,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                        if ((int)uVar35 <= (int)*puVar2) {
                          if ((uVar20 & 1) == 0) {
LAB_0354cc08:
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                            bVar10 = 0;
                            goto LAB_0354cc90;
                          }
LAB_0354cb6c:
                          if (uVar46 != uVar32 || ((bVar10 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
                          if (uVar19 != 0) goto LAB_0354cb88;
                          goto LAB_0354cbc0;
                        }
                        lVar23 = FUN_035978e8(0);
                        if (((lVar23 == 0) || (*plVar4 == 0)) ||
                           (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
                        if (*(uint *)(lVar36 + 0x18) <= *puVar2 + 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (*(long *)(lVar23 + 0x18) == 0) goto LAB_0354fbf4;
                        uVar85 = (ulong)*(ushort *)
                                         (lVar36 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20);
                        uVar28 = FUN_0219c130(*(long *)(lVar23 + 0x18),&stack0x000008b0,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                        if ((uVar20 & 1) != 0) goto LAB_0354cb6c;
                        if ((uVar28 & 1) == 0) goto LAB_0354cc08;
                        if (bVar10 == 0) goto LAB_0354cc88;
                        if (uVar19 != 0) {
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
                        if (!bVar15 && uVar17 == 0xad) goto LAB_0354cb88;
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
                        if (uVar19 == 0) goto LAB_0354c910;
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
                      if (((uVar17 - 0x2007 < 0x29) &&
                          ((1L << ((ulong)(uVar17 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                         ((uVar17 == 0xa0 || (uVar17 == 0x2060)))) goto LAB_0354c87c;
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
                    uVar28 = (ulong)(uint)fVar83;
                  }
                }
                else {
                  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                  uVar26 = FUN_03586568();
                  if (((uVar26 & 1) == 0) ||
                     (uVar86 = in_stack_0000179c, *(int *)((long)unaff_x19 + 0x644) != 0))
                  goto LAB_03549378;
                }
LAB_03549564:
                uVar86 = uVar86 + 1;
                lVar23 = unaff_x19[0x8f];
                uVar19 = uVar17;
                if (lVar23 == 0) goto LAB_0354fbf4;
                goto LAB_03549220;
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
  uVar86 = uVar19 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x50), lVar36 == 0)) goto LAB_0354fbf4;
  lVar27 = (long)(int)uVar86;
  lVar49 = lVar23 + lVar27 * 0x178;
  uVar17 = *(uint *)(lVar49 + 100);
  if (*(uint *)(lVar36 + 0x18) <= uVar17)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar43 = *(long *)(lVar49 + 0x38);
  lVar45 = (long)(int)uVar17;
  lVar36 = lVar36 + lVar45 * 0x5c;
  uVar46 = *(uint *)(lVar36 + 0x68);
  uVar39 = (uint)*(ushort *)(lVar49 + 0x20);
  uVar32 = *(uint *)(lVar36 + 0x3c);
  iVar6 = *(int *)(lVar36 + 0x20);
  iVar21 = *(int *)(lVar36 + 0x28);
  iVar22 = *(int *)(lVar36 + 0x2c);
  fVar66 = *(float *)(lVar36 + 0x4c);
  uVar20 = *(uint *)(lVar36 + 0x40);
  fVar71 = *(float *)(lVar36 + 0x54);
  fVar54 = *(float *)(lVar36 + 0x58);
  fVar77 = *(float *)(lVar36 + 0x5c);
  fVar87 = *(float *)(lVar36 + 0x60);
  fVar74 = *(float *)(lVar36 + 0x6c);
  fVar83 = *(float *)(lVar36 + 0x70);
  fVar55 = *(float *)(lVar36 + 0x74);
  fVar82 = *(float *)(lVar36 + 0x78);
  if ((int)uVar46 < 9) {
    switch(uVar46) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar87 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar54;
      }
      break;
    case 2:
LAB_0354d968:
      fStack00000000000000fc = (fVar87 + fVar77 * 0.5) - fVar54 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar77 + fVar87) - fVar54;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar77 + fVar87;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar46 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar39 < 0xad) {
      if ((uVar39 != 3) && (uVar39 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar39 != 0xad) && ((uVar39 != 0x200b && (uVar39 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar23 + 0x18) <= uVar32)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar7 = *(undefined2 *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar85 = FUN_026b8cc4(uVar7,0);
      if ((uVar85 & 1) == 0) {
        bVar1 = (int)uVar17 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar54 <= fVar77) && (!bVar1 && uVar46 >> 4 == 0)) {
        fStack00000000000000fc = fVar87;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar77 + fVar87;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar19 == 1) || (uVar17 != uVar35)) || (uVar86 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar87;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar77 + fVar87;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar39,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar31 = (char)unaff_x19[0x1e];
        fVar87 = -fVar54;
        if (cVar31 != '\0') {
          fVar87 = fVar54;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar32)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar22 = (int)*(char *)(lVar23 + (long)(int)uVar32 * 0x178 + 0x194) +
                 (-iVar6 - (uStack0000000000000030 & 1)) + iVar22 + -1;
        if (iVar22 < 1) {
          fVar54 = 1.0;
          iVar22 = 1;
        }
        else {
          fVar54 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar39 == 9) {
LAB_0354f76c:
          fVar54 = 1.0 - fVar54;
        }
        else {
          if (uVar39 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar85 = FUN_026b97f8(uVar39,0);
            cVar31 = (char)unaff_x19[0x1e];
            if ((uVar85 & 1) != 0) goto LAB_0354f76c;
          }
          iVar22 = (iVar6 - (~uStack0000000000000030 & 1)) + iVar21;
        }
        fVar54 = ((fVar77 + fVar87) * fVar54) / (float)iVar22;
        if (cVar31 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar54;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar54;
        }
      }
    }
  }
  else if (uVar46 == 0x20) {
    fVar54 = fVar74 + fVar55;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar46 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar23 + lVar27 * 0x178;
  fVar87 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar54 = (float)uVar68 + (float)uStack00000000000000f0;
  fVar77 = (float)((ulong)uVar68 >> 0x20) + (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar36 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar21 = *(int *)(lVar23 + lVar27 * 0x178 + 0x2c);
  if (iVar21 != 0) goto LAB_0354e05c;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar17,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar49 = lVar23 + lVar27 * 0x178;
    *(undefined4 *)(lVar49 + 0x84) = 0;
    *(undefined4 *)(lVar49 + 0xac) = 0;
    *(undefined4 *)(lVar49 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar82 = *(float *)(lVar23 + lVar27 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar49 = lVar23 + lVar27 * 0x178;
      fVar55 = (fStack00000000000000fc + fVar82) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar82 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_0354db24;
    }
    lVar49 = lVar23 + lVar27 * 0x178;
    fVar55 = fVar55 - fVar74;
    *(float *)(lVar49 + 0x84) = fVar53 + (fVar82 - fVar74) / fVar55;
    *(float *)(lVar49 + 0xac) = fVar53 + (*(float *)(lVar49 + 0x98) - fVar74) / fVar55;
    *(float *)(lVar49 + 0xd4) = fVar53 + (*(float *)(lVar49 + 0xc0) - fVar74) / fVar55;
    fVar53 = fVar53 + (*(float *)(lVar49 + 0xe8) - fVar74) / fVar55;
    break;
  case 2:
    lVar49 = lVar23 + lVar27 * 0x178;
    fVar82 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar55 = (fStack00000000000000fc + *(float *)(lVar49 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_0354db24:
    *(float *)(lVar49 + 0x84) = fVar53 + fVar55 / fVar82;
    *(float *)(lVar49 + 0xac) =
         fVar53 + ((fStack00000000000000fc + *(float *)(lVar49 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar49 + 0xd4) =
         fVar53 + ((fStack00000000000000fc + *(float *)(lVar49 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar53 = fVar53 + ((fStack00000000000000fc + *(float *)(lVar49 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar49 = lVar23 + lVar27 * 0x178;
      *(undefined4 *)(lVar49 + 0x88) = 0;
      *(undefined4 *)(lVar49 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar49 + 0xd8) = 0;
      *(undefined4 *)(lVar49 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar49 = lVar23 + lVar27 * 0x178;
      fVar82 = fVar82 - fVar83;
      fVar55 = fVar53 + (*(float *)(lVar49 + 0x74) - fVar83) / fVar82;
      fVar82 = fVar53 + (*(float *)(lVar49 + 0x9c) - fVar83) / fVar82;
      *(float *)(lVar49 + 0x88) = fVar55;
      *(float *)(lVar49 + 0xb0) = fVar82;
      *(float *)(lVar49 + 0xd8) = fVar55;
      *(float *)(lVar49 + 0x100) = fVar82;
      break;
    case 2:
      lVar49 = lVar23 + lVar27 * 0x178;
      fVar55 = fVar53 + (*(float *)(lVar49 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar49 + 0x88) = fVar55;
      fVar82 = *(float *)(unaff_x19 + 0x9c);
      fVar74 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar49 + 0xd8) = fVar55;
      fVar55 = fVar53 + (*(float *)(lVar49 + 0x9c) - fVar82) / (fVar74 - fVar82);
      *(float *)(lVar49 + 0xb0) = fVar55;
      *(float *)(lVar49 + 0x100) = fVar55;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar46 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar49 = lVar23 + lVar27 * 0x178;
    fVar55 = *(float *)(lVar49 + 0x15c);
    fVar82 = (1.0 - (*(float *)(lVar49 + 0x88) + *(float *)(lVar49 + 0xb0)) * fVar55) * 0.5;
    fVar74 = fVar53 + *(float *)(lVar49 + 0x88) * fVar55 + fVar82;
    fVar53 = fVar53 + fVar82 + *(float *)(lVar49 + 0xb0) * fVar55;
    *(float *)(lVar49 + 0x84) = fVar74;
    *(float *)(lVar49 + 0xac) = fVar74;
    *(float *)(lVar49 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar23 + lVar27 * 0x178 + 0xfc) = fVar53;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar49 = lVar23 + lVar27 * 0x178;
    *(undefined4 *)(lVar49 + 0x88) = 0;
    *(undefined4 *)(lVar49 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar49 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar49 + 0x100) = 0;
    break;
  case 1:
    if (uVar86 < uVar46) {
      lVar49 = lVar23 + lVar27 * 0x178;
      fVar66 = fVar66 - fVar71;
      fVar53 = (*(float *)(lVar49 + 0x74) - fVar71) / fVar66;
      fVar66 = (*(float *)(lVar49 + 0x9c) - fVar71) / fVar66;
      *(float *)(lVar49 + 0x88) = fVar53;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar49 = lVar23 + lVar27 * 0x178;
    fVar53 = (*(float *)(lVar49 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar49 + 0x88) = fVar53;
    fVar66 = (*(float *)(lVar49 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar49 + 0xb0) = fVar66;
    *(float *)(lVar49 + 0xd8) = fVar66;
    *(float *)(lVar49 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar49 = lVar23 + lVar27 * 0x178;
    fVar66 = *(float *)(lVar49 + 0x15c);
    fVar55 = (1.0 - (*(float *)(lVar49 + 0x84) + *(float *)(lVar49 + 0xd4)) / fVar66) * 0.5;
    fVar53 = *(float *)(lVar49 + 0x84) / fVar66 + fVar55;
    fVar55 = fVar55 + *(float *)(lVar49 + 0xd4) / fVar66;
    *(float *)(lVar49 + 0x88) = fVar53;
    *(float *)(lVar49 + 0xb0) = fVar55;
    *(float *)(lVar49 + 0x100) = fVar53;
    *(float *)(lVar49 + 0xd8) = fVar55;
  }
  if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar49 = lVar23 + lVar27 * 0x178;
  fVar53 = ABS(fVar56) * *(float *)(lVar49 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar49 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar27 * 0x178 + 400) & 1) != 0)) {
    fVar53 = -fVar53;
  }
  lVar49 = lVar23 + lVar27 * 0x178;
  fVar66 = *(float *)(lVar49 + 0x88);
  fVar82 = *(float *)(lVar49 + 0x84);
  fVar55 = -2.1474836e+09;
  if (fVar82 != INFINITY) {
    fVar55 = (float)(int)fVar82;
  }
  fVar74 = *(float *)(lVar49 + 0xd4);
  fVar83 = *(float *)(lVar49 + 0xd8);
  fVar71 = -2.1474836e+09;
  if (fVar66 != INFINITY) {
    fVar71 = (float)(int)fVar66;
  }
  uVar65 = FUN_03591d3c(fVar82 - fVar55,fVar66 - fVar71);
  *(undefined4 *)(lVar49 + 0x84) = uVar65;
  if (*(uint *)(lVar23 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar83 = fVar83 - fVar71;
  *(float *)(lVar49 + 0x88) = fVar53;
  uVar65 = FUN_03591d3c(fVar82 - fVar55,fVar83);
  *(undefined4 *)(lVar23 + lVar27 * 0x178 + 0xac) = uVar65;
  if (*(uint *)(lVar23 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar74 = fVar74 - fVar55;
  *(float *)(lVar23 + lVar27 * 0x178 + 0xb0) = fVar53;
  fVar55 = (float)FUN_03591d3c(fVar74,fVar83);
  *(float *)(lVar49 + 0xd4) = fVar55;
  if (*(uint *)(lVar23 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar49 + 0xd8) = fVar53;
  uVar65 = FUN_03591d3c(fVar74,fVar66 - fVar71);
  *(undefined4 *)(lVar23 + lVar27 * 0x178 + 0xfc) = uVar65;
  uVar46 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar23 + lVar27 * 0x178 + 0x100) = fVar53;
LAB_0354e05c:
  if (((int)uVar86 < (int)unaff_x19[0x65]) && (iVar18 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar17 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar36 = lVar23 + lVar27 * 0x178;
      *(ulong *)(lVar36 + 0x70) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar36 + 0x70));
      *(float *)(lVar36 + 0x78) = fVar77 + *(float *)(lVar36 + 0x78);
      *(ulong *)(lVar36 + 0x98) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar36 + 0x98));
      *(float *)(lVar36 + 0xa0) = fVar77 + *(float *)(lVar36 + 0xa0);
      *(ulong *)(lVar36 + 0xc0) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar36 + 0xc0));
      *(float *)(lVar36 + 200) = fVar77 + *(float *)(lVar36 + 200);
      *(ulong *)(lVar36 + 0xe8) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar36 + 0xe8));
      *(float *)(lVar36 + 0xf0) = fVar77 + *(float *)(lVar36 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar17 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar86 < uVar46) {
        if (*(uint *)(lVar23 + lVar27 * 0x178 + 0x68) == uVar5) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar46 = *(uint *)(lVar23 + 0x18);
  }
  puVar12 = PTR_DAT_03cbded8;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar49 = lVar23 + lVar27 * 0x178;
  *(undefined8 *)(lVar49 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar49 + 0x78) = uVar65;
  if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  lVar49 = lVar23 + lVar27 * 0x178;
  *(undefined8 *)(lVar49 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar49 + 0xa0) = uVar65;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar49 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar49 + 200) = uVar65;
  uVar65 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar49 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar49 + 0xf0) = uVar65;
  *(undefined1 *)(lVar36 + 0x194) = 0;
LAB_0354e184:
  if (iVar21 == 0) {
    pcVar38 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar38)();
  }
  else if (iVar21 == 1) {
    pcVar38 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + lVar27 * 0x178;
  uVar25 = *(undefined8 *)(lVar36 + 0x11c);
  *(undefined8 *)(lVar36 + 0x11c) =
       CONCAT44(fVar54 + (float)((ulong)uVar25 >> 0x20),fVar87 + (float)uVar25);
  *(float *)(lVar36 + 0x124) = fVar77 + *(float *)(lVar36 + 0x124);
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + lVar27 * 0x178;
  *(ulong *)(lVar36 + 0x110) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x110) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar36 + 0x110));
  *(float *)(lVar36 + 0x118) = fVar77 + *(float *)(lVar36 + 0x118);
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + lVar27 * 0x178;
  *(ulong *)(lVar36 + 0x128) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x128) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar36 + 0x128));
  *(float *)(lVar36 + 0x130) = fVar77 + *(float *)(lVar36 + 0x130);
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar36 = lVar36 + lVar27 * 0x178;
  *(float *)(lVar36 + 0x134) = fVar87 + *(float *)(lVar36 + 0x134);
  *(ulong *)(lVar36 + 0x138) =
       CONCAT44(fVar77 + (float)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar36 + 0x138));
  lVar36 = *plVar4;
  if ((lVar36 == 0) || (lVar49 = *(long *)(lVar36 + 0x38), lVar49 == 0)) goto LAB_0354fbf4;
  uVar46 = *(uint *)(lVar49 + 0x18);
  if (uVar46 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar42 = lVar49 + lVar27 * 0x178;
  *(float *)(lVar42 + 0x150) = fVar54 + *(float *)(lVar42 + 0x150);
  *(ulong *)(lVar42 + 0x140) =
       CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar42 + 0x140) >> 0x20),
                fVar87 + (float)*(undefined8 *)(lVar42 + 0x140));
  *(ulong *)(lVar42 + 0x148) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar42 + 0x148) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar42 + 0x148));
  if (uVar17 == uVar35) {
    uVar35 = *puVar2 - 1;
    if (uVar86 == uVar35) goto LAB_0354e3ec;
  }
  else {
    lVar36 = *(long *)(lVar36 + 0x50);
    if (lVar36 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar36 + 0x18) <= uVar35)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar42 = (long)(int)uVar35;
    lVar44 = lVar36 + lVar42 * 0x5c;
    fVar55 = fVar54 + *(float *)(lVar44 + 0x54);
    *(ulong *)(lVar44 + 0x4c) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar44 + 0x4c) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar44 + 0x4c));
    *(float *)(lVar44 + 0x54) = fVar55;
    *(float *)(lVar44 + 0x58) = fVar87 + *(float *)(lVar44 + 0x58);
    if (uVar46 <= *(uint *)(lVar44 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar65 = *(undefined4 *)(lVar49 + (long)(int)*(uint *)(lVar44 + 0x34) * 0x178 + 0x11c);
    lVar36 = lVar36 + lVar42 * 0x5c;
    *(float *)(lVar36 + 0x70) = fVar55;
    *(undefined4 *)(lVar36 + 0x6c) = uVar65;
    lVar36 = *plVar4;
    if ((lVar36 == 0) || (lVar49 = *(long *)(lVar36 + 0x50), lVar49 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar49 + 0x18) <= uVar35)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar36 = *(long *)(lVar36 + 0x38);
    if (lVar36 == 0) goto LAB_0354fbf4;
    uVar35 = *(uint *)(lVar49 + lVar42 * 0x5c + 0x40);
    if (*(uint *)(lVar36 + 0x18) <= uVar35)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar49 = lVar49 + lVar42 * 0x5c;
    *(undefined4 *)(lVar49 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar35 * 0x178 + 0x128);
    *(undefined4 *)(lVar49 + 0x78) = *(undefined4 *)(lVar49 + 0x4c);
    uVar35 = *puVar2 - 1;
LAB_0354e3ec:
    if (uVar86 == uVar35) {
      lVar36 = *plVar4;
      if ((lVar36 == 0) || (lVar49 = *(long *)(lVar36 + 0x50), lVar49 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar49 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar42 = lVar49 + lVar45 * 0x5c;
      fVar55 = fVar54 + *(float *)(lVar42 + 0x54);
      *(ulong *)(lVar42 + 0x4c) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar42 + 0x4c));
      *(float *)(lVar42 + 0x54) = fVar55;
      *(float *)(lVar42 + 0x58) = fVar87 + *(float *)(lVar42 + 0x58);
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar42 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar65 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
      lVar49 = lVar49 + lVar45 * 0x5c;
      *(float *)(lVar49 + 0x70) = fVar55;
      *(undefined4 *)(lVar49 + 0x6c) = uVar65;
      lVar36 = *plVar4;
      if ((lVar36 == 0) || (lVar49 = *(long *)(lVar36 + 0x50), lVar49 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar49 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0354fbf4;
      uVar35 = *(uint *)(lVar49 + lVar45 * 0x5c + 0x40);
      if (*(uint *)(lVar36 + 0x18) <= uVar35)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar49 = lVar49 + lVar45 * 0x5c;
      *(undefined4 *)(lVar49 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar35 * 0x178 + 0x128);
      *(undefined4 *)(lVar49 + 0x78) = *(undefined4 *)(lVar49 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar85 = FUN_026b82c4(uVar39,0);
  if (((((uVar85 & 1) == 0) && (1 < uVar39 - 0x2010)) && (uVar39 != 0xad)) && (uVar39 != 0x2d)) {
    if (bVar11) {
      if (((uVar19 != 1) && ((int)uVar86 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar86 < (int)*puVar2 && ((uVar39 == 0x2019 || (uVar39 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar19 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar7 = *(undefined2 *)(lVar23 + lVar24 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar85 = FUN_026b82c4(uVar7,0);
        if ((uVar85 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar19)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar7 = *(undefined2 *)(lVar23 + lVar24 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar85 = FUN_026b82c4(uVar7,0);
          if ((uVar85 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar19 != 1) {
LAB_0354f144:
        bVar11 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar85 = FUN_026b81f8(uVar39,0);
      if ((uVar85 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar85 = FUN_026b63d8(uVar39,0);
        if (((uVar39 != 0x200b) && ((uVar85 & 1) == 0)) && (*puVar2 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar86 == *puVar2 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar85 = FUN_026b82c4(uVar39,0);
      iVar21 = (int)fStack0000000000000124;
      if ((uVar85 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar21 = uVar19 - 2;
    }
    lVar36 = *plVar4;
    if (lVar36 == 0) goto LAB_0354fbf4;
    lVar49 = *(long *)(lVar36 + 0x40);
    if (lVar49 == 0) goto LAB_0354fbf4;
    uVar35 = *(uint *)(lVar36 + 0x24);
    iVar22 = *(int *)(lVar49 + 0x18);
    if (iVar22 < (int)(uVar35 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar36 + 0x40),iVar22 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar36 = *plVar4;
      if (lVar36 == 0) goto LAB_0354fbf4;
    }
    lVar36 = *(long *)(lVar36 + 0x40);
    if (lVar36 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar36 + 0x18) <= uVar35)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar36 = lVar36 + (long)(int)uVar35 * 0x18;
    *(long **)(lVar36 + 0x20) = unaff_x19;
    *(float *)(lVar36 + 0x28) = fStack000000000000016c;
    *(int *)(lVar36 + 0x2c) = iVar21;
    *(int *)(lVar36 + 0x30) = (iVar21 - (int)fStack000000000000016c) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar36 = unaff_x19[0x6d];
    if (lVar36 == 0) goto LAB_0354fbf4;
    lVar49 = *(long *)(lVar36 + 0x50);
    *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
    if (lVar49 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar49 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar49 = lVar49 + lVar45 * 0x5c;
    bVar11 = false;
    iVar18 = iVar18 + 1;
    *(int *)(lVar49 + 0x30) = *(int *)(lVar49 + 0x30) + 1;
  }
  else {
    if (!bVar11) {
      fStack000000000000016c = (float)uVar86;
    }
    if (uVar86 == *puVar2 - 1) {
      lVar36 = *plVar4;
      if (lVar36 == 0) goto LAB_0354fbf4;
      lVar49 = *(long *)(lVar36 + 0x40);
      if (lVar49 == 0) goto LAB_0354fbf4;
      uVar35 = *(uint *)(lVar36 + 0x24);
      iVar21 = *(int *)(lVar49 + 0x18);
      if (iVar21 < (int)(uVar35 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar36 + 0x40),iVar21 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar36 = *plVar4;
        if (lVar36 == 0) goto LAB_0354fbf4;
      }
      lVar36 = *(long *)(lVar36 + 0x40);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar35)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + (long)(int)uVar35 * 0x18;
      *(long **)(lVar36 + 0x20) = unaff_x19;
      *(float *)(lVar36 + 0x28) = fStack000000000000016c;
      *(uint *)(lVar36 + 0x2c) = uVar86;
      *(uint *)(lVar36 + 0x30) = uVar19 - (int)fStack000000000000016c;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar36 = unaff_x19[0x6d];
      if (lVar36 == 0) goto LAB_0354fbf4;
      lVar49 = *(long *)(lVar36 + 0x50);
      *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
      if (lVar49 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar49 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar49 = lVar49 + lVar45 * 0x5c;
      iVar18 = iVar18 + 1;
      *(int *)(lVar49 + 0x30) = *(int *)(lVar49 + 0x30) + 1;
    }
LAB_0354e610:
    bVar11 = true;
  }
LAB_0354e618:
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  uVar35 = *(uint *)(lVar36 + 0x18);
  if (uVar35 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar36 + lVar27 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar15) {
LAB_0354e660:
      if (uVar35 <= uVar19 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar49 = *unaff_x19;
      uVar65 = *(undefined4 *)(lVar36 + lVar24 + -0x330);
      uVar70 = *(undefined4 *)(lVar36 + lVar24 + -0x2f8);
LAB_0354ebc0:
      pcVar38 = *(code **)(lVar49 + 0x8d8);
LAB_0354ebc8:
      (*pcVar38)(fVar78,fStack0000000000000068,fStack000000000000006c,uVar65,fStack0000000000000104,
                 0,fStack0000000000000084,uVar70);
      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar12;
      }
LAB_0354ec1c:
      fVar67 = 0.0;
      bVar15 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar36 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar15 = false;
    }
  }
  else {
    lVar36 = lVar36 + lVar27 * 0x178;
    iVar21 = *(int *)(lVar36 + 0x68);
    *(int *)(lVar36 + 0x16c) = iVar40;
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar21 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar85 = FUN_026b63d8(uVar39,0);
    if ((uVar39 != 0x200b) && ((uVar85 & 1) == 0)) {
      lVar36 = *plVar4;
      if ((lVar36 == 0) || (lVar49 = *(long *)(lVar36 + 0x38), lVar49 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar49 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar55 = *(float *)(lVar49 + lVar27 * 0x178 + 0x160);
      if (fVar67 <= fVar55) {
        fVar67 = fVar55;
      }
      if (fStack0000000000000100 <= ABS(fVar53)) {
        fStack0000000000000100 = ABS(fVar53);
      }
      if (iVar21 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar36 = *plVar4;
          if (lVar36 == 0) goto LAB_0354fbf4;
          lVar49 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar49 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar49 + 0x15a8);
      }
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar66 = *(float *)(lVar36 + lVar27 * 0x178 + 0x14c);
      fVar55 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar66 = fVar66 + fVar67 * fVar55;
      iStack000000000000005c = iVar21;
      if (fVar66 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar66;
      }
    }
    if (!bVar15) {
      bVar15 = false;
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar20 < (int)uVar86)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar86 == uVar20) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar85 = FUN_026b97f8(uVar39,0);
        if ((uVar85 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + lVar27 * 0x178;
      fStack0000000000000084 = *(float *)(lVar36 + 0x160);
      fVar78 = *(float *)(lVar36 + 0x11c);
      bVar15 = fVar67 != 0.0;
      fVar55 = fStack0000000000000084;
      if (bVar15) {
        fVar55 = fVar67;
      }
      fVar67 = fVar55;
      uVar16 = *(undefined4 *)(lVar36 + 0x168);
      fStack000000000000006c = 0.0;
      fVar55 = fVar53;
      if (bVar15) {
        fVar55 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar55;
    }
    if (*puVar2 == 1) {
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        if (uVar86 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar27 * 0x178;
          lVar49 = *unaff_x19;
          uVar65 = *(undefined4 *)(lVar36 + 0x128);
          uVar70 = *(undefined4 *)(lVar36 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar86 == uVar32) || ((int)uVar20 <= (int)uVar86)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar85 = FUN_026b63d8(uVar39,0);
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        lVar49 = lVar27;
        uVar35 = uVar86;
        if (uVar39 == 0x200b || (uVar85 & 1) != 0) {
          lVar49 = (long)(int)uVar20;
          uVar35 = uVar20;
        }
        if (uVar35 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar49 * 0x178;
          uVar65 = *(undefined4 *)(lVar36 + 0x128);
          uVar70 = *(undefined4 *)(lVar36 + 0x160);
          pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        uVar35 = *(uint *)(lVar36 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar86 < (int)(*puVar2 - 1)) {
      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar19)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar85 = FUN_03567ad8(uVar16,*(undefined4 *)(lVar36 + lVar24),0);
      if ((uVar85 & 1) == 0) {
        if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
          if (uVar86 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar27 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar78,fStack0000000000000068,fStack000000000000006c,
                       *(undefined4 *)(lVar36 + 0x128),fStack0000000000000104,0,
                       fStack0000000000000084,*(undefined4 *)(lVar36 + 0x160));
            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar36 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar36 = *(long *)puVar12;
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
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar36 + 0x18) <= uVar86)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar43 == 0) goto LAB_0354fbf4;
  uVar35 = *(uint *)(lVar36 + lVar27 * 0x178 + 400);
  fVar55 = (float)FUN_03776a30(lVar43 + 0x50,0);
  if ((uVar35 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar19 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar65 = *(undefined4 *)(lVar36 + lVar24 + -0x330);
      fVar54 = *(float *)(lVar36 + lVar24 + -0x30c);
      pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar38)(fVar50,fStack000000000000009c,fStack0000000000000098,uVar65,
                 fVar51 * fVar55 + fVar54,0,fVar51,fVar51);
    }
LAB_0354f250:
    bVar9 = false;
  }
  else {
    lVar36 = *plVar4;
    if ((lVar36 == 0) || (lVar49 = *(long *)(lVar36 + 0x38), lVar49 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar49 + 0x18) <= uVar86)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar49 + lVar27 * 0x178 + 0x174) = iVar40;
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar49 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar20 < (int)uVar86)) ||
       (bVar9 || !bVar1)) {
LAB_0354ed84:
      if (!bVar9) goto LAB_0354f250;
    }
    else {
      if (uVar86 == uVar20) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar85 = FUN_026b97f8(uVar39,0);
        if ((uVar85 & 1) != 0) goto LAB_0354ed84;
        lVar36 = *plVar4;
        if (lVar36 == 0) goto LAB_0354fbf4;
      }
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar36 + 0x18) <= uVar86)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + lVar27 * 0x178;
      fStack000000000000004c = *(float *)(lVar36 + 0x60);
      fVar52 = *(float *)(lVar36 + 0x14c);
      fVar50 = *(float *)(lVar36 + 0x11c);
      fVar51 = *(float *)(lVar36 + 0x160);
      fStack000000000000009c = fVar55 * fVar51 + fVar52;
      fStack0000000000000098 = 0.0;
    }
    uVar35 = *puVar2;
    if (uVar35 == 1) {
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        uVar35 = *(uint *)(lVar36 + 0x18);
LAB_0354ef0c:
        if (uVar86 < uVar35) {
          lVar36 = lVar36 + lVar27 * 0x178;
          lVar49 = *unaff_x19;
          uVar65 = *(undefined4 *)(lVar36 + 0x128);
          fVar54 = *(float *)(lVar36 + 0x14c);
LAB_0354ef24:
          pcVar38 = *(code **)(lVar49 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar86 == uVar32) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar85 = FUN_026b63d8(uVar39,0);
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        uVar35 = *(uint *)(lVar36 + 0x18);
        if (uVar39 == 0x200b || (uVar85 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar49 = lVar27;
        if (uVar86 < uVar35) {
LAB_0354f1f8:
          lVar36 = lVar36 + lVar49 * 0x178;
          fVar54 = *(float *)(lVar36 + 0x14c);
          uVar65 = *(undefined4 *)(lVar36 + 0x128);
          pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar86 < (int)uVar35) {
      lVar36 = *plVar4;
      if ((lVar36 != 0) && (lVar49 = *(long *)(lVar36 + 0x38), lVar49 != 0)) {
        if (uVar19 < *(uint *)(lVar49 + 0x18)) {
          if (*(float *)(lVar49 + lVar24 + -0x108) == fStack000000000000004c) {
            fVar66 = *(float *)(lVar49 + lVar24 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar85 = FUN_03567bac(fVar54 + fVar66,fVar52,0);
            if ((uVar85 & 1) != 0) {
              uVar35 = *puVar2;
              goto LAB_0354f010;
            }
            lVar36 = *plVar4;
            if (lVar36 == 0) goto LAB_0354fbf4;
          }
          lVar36 = *(long *)(lVar36 + 0x38);
          if (lVar36 != 0) {
            uVar35 = *(uint *)(lVar36 + 0x18);
            if ((int)uVar86 <= (int)uVar20) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar49 = (long)(int)uVar20;
            if (uVar20 < uVar35) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar86 < (int)uVar35) {
      iVar21 = FUN_036d3364(lVar43,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar19)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = *(long *)(lVar23 + lVar24 + -0x130);
      if (lVar36 == 0) goto LAB_0354fbf4;
      iVar22 = FUN_036d3364(lVar36,0);
      if (iVar21 != iVar22) {
        if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
          uVar35 = *(uint *)(lVar36 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
        if (uVar19 - 2 < *(uint *)(lVar36 + 0x18)) {
          lVar49 = *unaff_x19;
          uVar65 = *(undefined4 *)(lVar36 + lVar24 + -0x330);
          fVar54 = *(float *)(lVar36 + lVar24 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar9 = true;
  }
  if ((*plVar4 == 0) || (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 == 0)) goto LAB_0354fbf4;
  uVar35 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar35 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar36 + lVar27 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar14) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,fStack00000000000000c0);
    }
LAB_0354f604:
    bVar14 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar86) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar36 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar14) {
LAB_0354f400:
      if (uVar35 <= uVar86) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar36 = lVar36 + lVar27 * 0x178;
      fVar55 = *(float *)(lVar36 + 0x128);
      fVar71 = *(float *)(lVar36 + 0x188);
      uVar47 = *(undefined8 *)(lVar36 + 0x17c);
      fVar77 = *(float *)(lVar36 + 0x184);
      uVar25 = *(undefined8 *)(lVar36 + 0x184);
      fVar74 = *(float *)(lVar36 + 0x18c);
      fVar54 = *(float *)(lVar36 + 0x11c);
      fVar66 = *(float *)(lVar36 + 0x148);
      fVar82 = *(float *)(lVar36 + 0x150);
      in_stack_00000188 = uVar47;
      fStack0000000000000190 = fVar77;
      fStack0000000000000194 = fVar71;
      in_stack_00000198 = fVar74;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar85 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar36 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar85 & 1) == 0) {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar36);
        }
        fVar55 = fVar55 + (float)in_stack_000017c8;
        fVar54 = fVar54 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar66 = fVar66 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar54 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar54;
        }
        if (fVar82 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar82 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar55) {
          fStack00000000000000d0 = fVar55;
        }
        if (fStack00000000000000d4 <= fVar66) {
          fStack00000000000000d4 = fVar66;
        }
      }
      else {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar36);
        }
        fVar87 = (fVar54 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        fVar54 = fStack00000000000000e4;
        if (fVar82 <= fStack00000000000000e4) {
          fVar54 = fVar82;
        }
        if (fStack00000000000000d4 <= fVar66) {
          fStack00000000000000d4 = fVar66;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fVar54,fStack00000000000000c0,fVar87,
                   fStack00000000000000d4,fStack00000000000000c0);
        fStack00000000000000e4 = fVar82 - fVar74;
        fStack00000000000000d0 = fVar55 + fVar77;
        fStack00000000000000c0 = 0.0;
        fStack00000000000000d4 = fVar66 + fVar71;
        fStack00000000000000e0 = fVar87;
        in_stack_000017c0 = uVar47;
        in_stack_000017c8 = uVar25;
        in_stack_000017d0 = fVar74;
      }
      if (((*puVar2 == 1) || (uVar86 == uVar32)) || (((int)uVar20 <= (int)uVar86 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,fStack00000000000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,fStack00000000000000c0);
        goto LAB_0354f604;
      }
      bVar14 = true;
    }
    else {
      if ((((uVar39 != 0xd) && ((uVar39 & 0xfffe) != 10)) && ((int)uVar86 <= (int)uVar20)) &&
         (bVar1)) {
        if (uVar86 == uVar20) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar85 = FUN_026b97f8(uVar39,0);
          if ((uVar85 & 1) != 0) goto LAB_0354f374;
        }
        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar49 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar49 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar49 = *(long *)puVar12;
        }
        if ((*plVar4 != 0) && (lVar36 = *(long *)(*plVar4 + 0x38), lVar36 != 0)) {
          uVar35 = (uint)*(undefined8 *)(lVar36 + 0x18);
          if (uVar86 < uVar35) {
            lVar49 = *(long *)(lVar49 + 0xb8);
            lVar43 = lVar36 + lVar27 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar43 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar43 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar49 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar49 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar43 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar49 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar49 + 0x15a4);
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
  lVar24 = lVar24 + 0x178;
  bVar1 = (int)uVar86 <= (int)uVar19;
  uVar35 = uVar17;
  uVar19 = uVar19 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar23 = *plVar4;
  if (lVar23 == 0) goto LAB_0354fbf4;
  iVar40 = uVar17 + 1;
  plVar48 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
  *(uint *)(lVar23 + 0x18) = uVar86;
  lVar24 = unaff_x19[0xd4];
  *(int *)(lVar23 + 0x2c) = iVar40;
  if ((int)uVar86 < 1 || iVar18 == 0) {
    iVar18 = 1;
  }
  *(int *)(lVar23 + 0x1c) = (int)lVar24;
  *(int *)(lVar23 + 0x24) = iVar18;
  *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar85 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar85 & 1) == 0)) {
LAB_0354d0cc:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar23 = unaff_x19[0xdb];
  if (lVar23 != 0) {
    (**(code **)(lVar23 + 0x18))
              (*(undefined8 *)(lVar23 + 0x40),*plVar4,*(undefined8 *)(lVar23 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*plVar4 == 0) || (lVar23 = *(long *)(*plVar4 + 0x60), lVar23 == 0)) goto LAB_0354fbf4;
    if (*(int *)(*plVar48 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar23 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596b20(lVar23 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
      if (*(int *)(lVar23 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
          if (*(int *)(lVar23 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0))
            {
              if (*(int *)(lVar23 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                  if (*(int *)(lVar23 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      lVar23 = *plVar4;
                      if (lVar23 != 0) {
                        lVar36 = 0;
                        lVar24 = 0;
                        do {
                          uVar85 = lVar24 + 1;
                          if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar85) goto LAB_0354d0cc;
                          lVar23 = *(long *)(lVar23 + 0x60);
                          if (lVar23 == 0) break;
                          if (*(int *)(*plVar48 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar23 + 0x18) <= uVar85)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar23 + lVar36 + 0x70,0);
                          lVar23 = unaff_x19[0xe1];
                          if (lVar23 == 0) break;
                          if (*(uint *)(lVar23 + 0x18) <= uVar85)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar68 = *(undefined8 *)(lVar23 + lVar24 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar28 = FUN_036d35a8(uVar68,0,0);
                          if ((uVar28 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*plVar4 == 0) ||
                                 (lVar23 = *(long *)(*plVar4 + 0x60), lVar23 == 0)) break;
                              if (*(int *)(*plVar48 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar23 + 0x18) <= uVar85)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar23 + lVar36 + 0x70,1,0);
                            }
                            lVar23 = unaff_x19[0xe1];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                            if (lVar23 == 0) break;
                            lVar23 = FUN_0359d5ac(lVar23,0);
                            if ((*plVar4 == 0) || (lVar49 = *(long *)(*plVar4 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar23 == 0) break;
                            FUN_036a460c(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0x80),0);
                            lVar23 = unaff_x19[0xe1];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                            if (lVar23 == 0) break;
                            lVar23 = FUN_0359d5ac(lVar23,0);
                            if ((*plVar4 == 0) || (lVar49 = *(long *)(*plVar4 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar23 == 0) break;
                            FUN_036a4810(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0x98),0);
                            lVar23 = unaff_x19[0xe1];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                            if (lVar23 == 0) break;
                            lVar23 = FUN_0359d5ac(lVar23,0);
                            if ((*plVar4 == 0) || (lVar49 = *(long *)(*plVar4 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar23 == 0) break;
                            FUN_036a48bc(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0xa0),0);
                            lVar23 = unaff_x19[0xe1];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                            if (lVar23 == 0) break;
                            lVar23 = FUN_0359d5ac(lVar23,0);
                            if ((*plVar4 == 0) || (lVar49 = *(long *)(*plVar4 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar23 == 0) break;
                            FUN_036a4e24(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0xa8),0);
                            lVar23 = unaff_x19[0xe1];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar85)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                            if ((lVar23 == 0) || (lVar23 = FUN_0359d5ac(lVar23,0), lVar23 == 0))
                            break;
                            FUN_036aa280(lVar23,0);
                          }
                          lVar23 = *plVar4;
                          lVar24 = lVar24 + 1;
                          lVar36 = lVar36 + 0x50;
                        } while (lVar23 != 0);
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


