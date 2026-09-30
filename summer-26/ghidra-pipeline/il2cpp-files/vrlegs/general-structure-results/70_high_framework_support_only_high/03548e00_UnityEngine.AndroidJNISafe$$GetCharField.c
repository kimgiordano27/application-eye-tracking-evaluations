/*
FUNCTION_NAME: UnityEngine.AndroidJNISafe$$GetCharField
ENTRY_POINT: 03548e00
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


void UnityEngine_AndroidJNISafe__GetCharField(void)

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
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  undefined1 uVar28;
  char cVar29;
  uint uVar30;
  undefined4 *puVar31;
  uint uVar32;
  long lVar33;
  float *pfVar34;
  code *pcVar35;
  uint uVar36;
  int iVar37;
  float *pfVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long *unaff_x19;
  undefined8 *unaff_x20;
  uint uVar44;
  long *unaff_x21;
  int unaff_w23;
  undefined8 *unaff_x24;
  int unaff_w25;
  long *plVar45;
  long lVar46;
  float fVar47;
  float fVar48;
  float fVar49;
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
  undefined4 uVar61;
  float fVar62;
  undefined8 uVar63;
  ulong uVar64;
  float fVar65;
  float fVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float unaff_s12;
  float fVar75;
  float unaff_s13;
  float fVar76;
  float fVar77;
  float unaff_s14;
  undefined4 uVar78;
  float unaff_s15;
  float fVar79;
  float fVar80;
  float fVar81;
  int iStack000000000000002c;
  uint uStack0000000000000030;
  float fStack000000000000004c;
  int iStack000000000000005c;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000084;
  float in_stack_00000098;
  float fStack000000000000009c;
  long *in_stack_000000b8;
  undefined4 in_stack_000000c0;
  float fStack00000000000000c4;
  undefined8 in_stack_000000c8;
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
  ulong uVar82;
  long in_stack_00001708;
  uint in_stack_0000179c;
  uint uVar83;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined8 in_stack_000017d8;
  char in_stack_000017e4;
  float fVar84;
  uint in_stack_000017ec;
  
  uVar82 = 0;
  FUN_035683a4();
  puVar12 = OVRPlugin_OVRP_1_12_0_TypeInfo;
  unaff_x24[0x73] = unaff_x24[1];
  unaff_x24[0x72] = *unaff_x24;
  FUN_0209aa94(in_stack_000000c8,&stack0x00000c40,*(undefined8 *)puVar12);
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
      fVar47 = (float)FUN_03776970(unaff_x19[0x20] + 0x50,0);
      if (*unaff_x21 != 0) {
        fVar48 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
        if (*unaff_x21 != 0) {
          fVar49 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
          *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
          *(undefined4 *)(unaff_x19 + 200) = 0;
          unaff_x19[0x81] = 0;
          FUN_0209aa94(unaff_x19 + 0x82,&stack0x00000c28,*unaff_x20);
          *(undefined1 *)(unaff_x19 + 0x86) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
          *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar21 = *(long *)puVar12;
          }
          lVar22 = unaff_x19[0x6d];
          uVar63 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
          unaff_x19[0x95] = 0;
          unaff_x19[0x9a] = 0;
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
          lVar21 = NEON_rev64(uVar63,4);
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
          unaff_x19[0x99] = lVar21;
          *(undefined4 *)(unaff_x19 + 0x96) = 0;
          if ((lVar22 != 0) && (*(long *)(lVar22 + 0x58) != 0)) {
            uVar32 = (int)unaff_x19[0x67] - 1;
            uVar83 = *(int *)(*(long *)(lVar22 + 0x58) + 0x18) - 1;
            if ((int)uVar32 <= (int)uVar83) {
              uVar83 = uVar32;
            }
            uVar5 = 0;
            if (-1 < (int)uVar32) {
              uVar5 = uVar83;
            }
            FUN_035a02f4(lVar22,0);
            fVar50 = *(float *)(unaff_x19 + 0x68);
            *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
            fVar62 = *(float *)((long)unaff_x19 + 0x344);
            unaff_x19[0x6a] = 0;
            lVar21 = *(long *)puVar12;
            fVar51 = *(float *)((long)unaff_x19 + 0x34c);
            fVar79 = *(float *)(unaff_x19 + 0x6b);
            fVar68 = *(float *)((long)unaff_x19 + 0x35c);
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar21 = *(long *)puVar12;
            }
            *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x1598);
            *(undefined8 *)((long)unaff_x19 + 0x4e4) =
                 *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a0);
            if (unaff_x19[0x6d] != 0) {
              FUN_035a0164(unaff_x19[0x6d],0);
              *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4c4) = 0;
              *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
              fVar84 = 0.0;
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
              fVar66 = DAT_00d38d28;
              fVar71 = DAT_00d38938;
              uVar83 = 0;
              lVar21 = unaff_x19[0x8f];
              if (lVar21 != 0) {
                puVar2 = (uint *)((long)unaff_x19 + 0x494);
                puVar3 = (ulong *)(unaff_x19 + 0xc9);
                uVar32 = unaff_w23 - 1;
                lVar22 = (long)unaff_x19 + 0x434;
                fVar47 = fVar47 - (fVar48 - fVar49);
                fStack000000000000016c = 0.0;
                if (fVar79 <= 0.0) {
                  fVar79 = 0.0;
                }
                if (fVar68 <= 0.0) {
                  fVar68 = 0.0;
                }
                fVar48 = (unaff_s14 / (float)unaff_w25) * unaff_s15 * unaff_s13;
                uVar26 = (ulong)(uint)fVar48;
                fVar79 = fVar79 + DAT_00d3879c;
                uVar64 = (ulong)(uint)fVar79;
                fVar65 = fVar68 + DAT_00d3879c;
                fVar49 = unaff_s12 * DAT_00d38d28 * unaff_s13;
                bVar11 = true;
                iStack000000000000002c = 0;
                bVar14 = false;
                iVar37 = 0;
                plVar4 = unaff_x19 + 0x6d;
                bVar10 = 1;
                fStack00000000000000fc = fVar79;
LAB_03549220:
                fVar69 = (float)uVar26;
                if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar83) {
LAB_0354cf48:
                  fVar47 = (float)uVar64;
                  if (((char)unaff_x19[0x47] != '\0') &&
                     (fVar47 = DAT_00d389f8,
                     DAT_00d389f8 <
                     *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                    fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
                    fVar48 = *(float *)((long)unaff_x19 + 0x254);
                    if ((fVar47 < fVar48) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                      if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0
                         ) {
                        *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                      }
                      fVar49 = (*(float *)((long)unaff_x19 + 0x23c) - fVar47) * 0.5;
                      if (fVar49 <= DAT_00d38b84) {
                        fVar49 = DAT_00d38b84;
                      }
                      *(float *)(unaff_x19 + 0x48) = fVar47;
                      fVar49 = (fVar47 + fVar49) * 20.0 + 0.5;
                      fVar47 = DAT_00d38e60;
                      if (fVar49 != INFINITY) {
                        fVar47 = (float)(int)fVar49 / 20.0;
                      }
                      if (fVar48 <= fVar47) {
                        fVar47 = fVar48;
                      }
LAB_0354d004:
                      *(float *)((long)unaff_x19 + 0x1e4) = fVar47;
                      return;
                    }
                  }
                  *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                  if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                    uVar63 = FUN_0276793c((long)unaff_x19 + 0x244,0);
                    uVar23 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
                    uVar63 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar63,
                                          *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar23,0);
                    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                    }
                    FUN_0367a6ec(uVar63,0);
                  }
                  puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if ((*puVar2 == 0) || ((*puVar2 == 1 && (in_stack_000017ec == 3)))) {
                    (**(code **)(*unaff_x19 + 0x928))();
                    goto LAB_0354d0cc;
                  }
                  lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar21 = *(long *)puVar12;
                  }
                  plVar45 = (long *)OVRPlugin_Media_TypeInfo;
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_0354fbf4;
                  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0xd1))
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  iVar37 = *(int *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54)
                           << 2;
                  if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x60), lVar21 == 0))
                  goto LAB_0354fbf4;
                  if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (*(int *)(lVar21 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  FUN_035968e8(lVar21 + 0x20,0,0);
                  if (DAT_0411f172 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cbded8);
                    DAT_0411f172 = '\x01';
                  }
                  iVar16 = (int)unaff_x19[0x4e];
                  fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
                  uStack00000000000000f0 =
                       *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
                  lVar21 = unaff_x19[0xeb];
                  in_stack_000000b8 = (long *)uStack00000000000000f0;
                  fStack00000000000000c4 = fStack00000000000000fc;
                  if (iVar16 < 0x401) {
                    if (iVar16 == 0x100) {
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) < 2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar63 = *(undefined8 *)(lVar21 + 0x30);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar4 == 0) || (lVar22 = *(long *)(*plVar4 + 0x58), lVar22 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar22 + 0x18) <= uVar5)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar47 = *(float *)(lVar22 + (long)(int)uVar5 * 0x14 + 0x28);
                      }
                      else {
                        fVar47 = *(float *)(unaff_x19 + 0x97);
                      }
                      fStack00000000000000c4 = fVar50 + 0.0 + *(float *)(lVar21 + 0x2c);
                      fVar47 = (0.0 - fVar47) - fVar62;
                    }
                    else if (iVar16 == 0x200) {
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fStack00000000000000c4 =
                           (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                      uVar63 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar21 + 0x24) +
                                            (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x58), lVar21 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= uVar5)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar21 = lVar21 + (long)(int)uVar5 * 0x14;
                        fStack00000000000000c4 = fVar50 + 0.0 + fStack00000000000000c4;
                        fVar47 = ((fVar62 + *(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x30)) -
                                 fVar51) * -0.5 + 0.0;
                      }
                      else {
                        fStack00000000000000c4 = fVar50 + 0.0 + fStack00000000000000c4;
                        fVar47 = ((fVar62 + *(float *)(unaff_x19 + 0x97) + fVar84) - fVar51) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar16 != 0x400) goto LAB_0354d620;
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      if (*(int *)(lVar21 + 0x18) == 0)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar63 = *(undefined8 *)(lVar21 + 0x24);
                      if ((int)unaff_x19[0x5c] == 5) {
                        if ((*plVar4 == 0) || (lVar22 = *(long *)(*plVar4 + 0x58), lVar22 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar22 + 0x18) <= uVar5)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        fVar84 = *(float *)(lVar22 + (long)(int)uVar5 * 0x14 + 0x30);
                      }
                      fStack00000000000000c4 = fVar50 + 0.0 + *(float *)(lVar21 + 0x20);
                      fVar47 = fVar51 + (0.0 - fVar84);
                    }
LAB_0354d610:
                    in_stack_000000b8 =
                         (long *)CONCAT44((float)((ulong)uVar63 >> 0x20) + 0.0,
                                          (float)uVar63 + fVar47);
                  }
                  else if (iVar16 == 0x800) {
                    if (lVar21 == 0) goto LAB_0354fbf4;
                    if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    fVar47 = fVar50 + 0.0 +
                             (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                    in_stack_000000b8 =
                         (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) *
                                          0.5 + 0.0,
                                          ((float)*(undefined8 *)(lVar21 + 0x24) +
                                          (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5 + 0.0);
                    fStack00000000000000c4 = fVar47;
                  }
                  else {
                    if (iVar16 == 0x1000) {
                      if (lVar21 != 0) {
                        if ((*(int *)(lVar21 + 0x18) != 1) && (*(int *)(lVar21 + 0x18) != 0)) {
                          uVar63 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar21 + 0x24) +
                                                    (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
                          fStack00000000000000c4 =
                               fVar50 + 0.0 +
                               (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                          fVar47 = 0.0 - ((fVar62 + *(float *)(unaff_x19 + 0x9d) +
                                          *(float *)(unaff_x19 + 0x9c)) - fVar51) * 0.5;
                          goto LAB_0354d610;
                        }
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      }
                      goto LAB_0354fbf4;
                    }
                    if (iVar16 == 0x2000) {
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fVar47 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar62) - fVar51) * 0.5
                      ;
                      in_stack_000000b8 =
                           (long *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)
                                            ) * 0.5 + 0.0,
                                            ((float)*(undefined8 *)(lVar21 + 0x24) +
                                            (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5 + fVar47);
                      fStack00000000000000c4 =
                           fVar50 + 0.0 +
                           (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
                    }
                  }
LAB_0354d620:
                  lVar21 = FUN_03559490();
                  if (lVar21 != 0) {
                    FUN_036df824(lVar21,0);
                    *(float *)((long)unaff_x19 + 0x6e4) = fVar47;
                    uVar78 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                    }
                    if (DAT_0412df1c == '\0') {
                      FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                      DAT_0412df1c = '\x01';
                    }
                    puVar12 = OVRPlugin_Mesh_TypeInfo;
                    lVar21 = *(long *)OVRPlugin_Mesh_TypeInfo;
                    if (*(int *)(lVar21 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar21 = *(long *)puVar12;
                    }
                    puVar31 = *(undefined4 **)(lVar21 + 0xb8);
                    FUN_035683a4(*puVar31,puVar31[1],puVar31[2],puVar31[3],&stack0x000017c0,
                                 0x4000ffff,0);
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar21 = *plVar4;
                    if (lVar21 != 0) {
                      uVar83 = *puVar2;
                      if ((int)uVar83 < 1) {
                        iVar16 = 0;
                        iVar37 = 0;
                        goto LAB_0354f7f4;
                      }
                      lVar21 = *(long *)(lVar21 + 0x38);
                      if (lVar21 != 0) {
                        bVar14 = false;
                        bVar13 = false;
                        bVar11 = false;
                        fStack0000000000000124 = 0.0;
                        bVar9 = false;
                        iVar16 = 0;
                        uStack0000000000000030 = 0;
                        fStack000000000000016c = 0.0;
                        iStack000000000000005c = 0;
                        lVar22 = 0x2e0;
                        fVar79 = 0.0;
                        fVar48 = 0.0;
                        fStack00000000000000d0 = fStack00000000000000e0;
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
                        fVar62 = 0.0;
                        uStack000000000000006c = in_stack_000000c0;
                        in_stack_00000098 = (float)in_stack_000000c0;
                        uVar32 = 0;
                        uVar15 = 1;
                        fVar49 = fStack00000000000000e0;
                        fVar50 = fStack00000000000000e0;
                        goto LAB_0354d7c0;
                      }
                    }
                  }
                  goto LAB_0354fbf4;
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar83)
                goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                uVar15 = *(uint *)(lVar21 + (long)(int)uVar83 * 0xc + 0x20);
                if (uVar15 == 0) goto LAB_0354cf48;
                if (5 < iVar37) {
                  uVar63 = FUN_0276793c(&stack0x000017ec,0);
                  uVar23 = FUN_0276793c(&stack0x000017b8,0);
                  uVar63 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar63,
                                        *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar23,0);
                  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                  }
                  FUN_0367ae18(uVar63,0);
                  in_stack_000017d8 = CONCAT44(3,*puVar2);
                }
                if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar15 != 0x3c)) {
                  if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                  goto LAB_0354fbf4;
                  if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                  *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar21 + 0x2c);
                  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar21 + 0x58);
                  unaff_x19[0x20] = *(long *)(lVar21 + 0x38);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
LAB_03549378:
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
                  uVar17 = *puVar2;
                  if (*(uint *)(lVar21 + 0x18) <= uVar17)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  lVar46 = (long)(int)uVar17;
                  cVar29 = *(char *)(lVar21 + lVar46 * 0x178 + 0x5c);
                  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
                  lVar33 = unaff_x19[0x24];
                  if ((uint)in_stack_000017d8 == uVar17) {
                    uVar15 = (uint)((ulong)in_stack_000017d8 >> 0x20);
                    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                    if (uVar15 == 0x2026) {
                      *(long *)(lVar21 + lVar46 * 0x178 + 0x30) = unaff_x19[0xca];
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                      *(undefined4 *)(lVar21 + 0x2c) = 0;
                      *(long *)(lVar21 + 0x38) = unaff_x19[0xcb];
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((unaff_x19[0x6d] == 0) ||
                         (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x50) = unaff_x19[0xcc];
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      uVar17 = *puVar2;
                      if (*(uint *)(lVar21 + 0x18) <= uVar17)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      bVar9 = true;
                      *(int *)(lVar21 + (long)(int)uVar17 * 0x178 + 0x58) = (int)unaff_x19[0xcd];
                      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                      in_stack_000017d8 = CONCAT44(3,uVar17 + 1);
                    }
                    else if (uVar15 == 3) {
                      if ((*unaff_x21 == 0) || (lVar25 = FUN_03568ac0(*unaff_x21,0), lVar25 == 0))
                      goto LAB_0354fbf4;
                      FUN_0219b634(lVar25,&stack0x00000c28,&stack0x000008b0,
                                   *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                      if (*(uint *)(lVar21 + 0x18) <= uVar17)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(ulong *)(lVar21 + lVar46 * 0x178 + 0x30) = uVar82;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      uVar17 = *(uint *)((long)unaff_x19 + 0x494);
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
                  if (((int)uVar17 < *(int *)((long)unaff_x19 + 0x324)) && (uVar15 != 3)) {
                    if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= uVar17)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar21 = lVar21 + (long)(int)uVar17 * 0x178;
                    *(undefined1 *)(lVar21 + 0x194) = 0;
                    *(undefined2 *)(lVar21 + 0x20) = 0x200b;
                    *(undefined4 *)(lVar21 + 100) = 0;
                    *puVar2 = uVar17 + 1;
                  }
                  else {
                    iVar16 = *(int *)((long)unaff_x19 + 0x644);
                    if (iVar16 == 0) {
                      uVar17 = *(uint *)((long)unaff_x19 + 0x25c);
                      if ((uVar17 >> 4 & 1) == 0) {
                        if ((uVar17 >> 3 & 1) == 0) {
                          fVar60 = 1.0;
                          if ((uVar17 >> 5 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar24 = FUN_026b812c(uVar15,0);
                            if ((uVar24 & 1) != 0) {
                              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar15 = FUN_026b8410(uVar15,0);
                              uVar15 = uVar15 & 0xffff;
                              fVar60 = fVar71;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar24 = FUN_026b8070(uVar15,0);
                          fVar60 = 1.0;
                          if ((uVar24 & 1) != 0) {
                            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar15 = FUN_026b8594(uVar15,0);
                            goto LAB_03549968;
                          }
                        }
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar24 = FUN_026b812c(uVar15,0);
                        fVar60 = 1.0;
                        if ((uVar24 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar15 = FUN_026b8410(uVar15,0);
LAB_03549968:
                          fVar60 = 1.0;
                          uVar15 = uVar15 & 0xffff;
                        }
                      }
                      iVar16 = *(int *)((long)unaff_x19 + 0x644);
                      if (iVar16 != 0) goto LAB_03549594;
LAB_03549978:
                      if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *puVar3 = *(ulong *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x30);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3);
                      if (*puVar3 == 0) goto LAB_03549564;
                      if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *unaff_x21 = *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x38);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21);
                      if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *in_stack_00000170 = *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x50);
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      uVar44 = *puVar2;
                      uVar17 = *(uint *)(lVar21 + 0x18);
                      if (uVar17 <= uVar44)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(undefined4 *)(unaff_x19 + 0x24) =
                           *(undefined4 *)(lVar21 + (long)(int)uVar44 * 0x178 + 0x58);
                      if (bVar9) {
                        lVar33 = unaff_x19[0x8f];
                        if (lVar33 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar33 + 0x18) <= uVar83)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if ((*(int *)(lVar33 + (long)(int)uVar83 * 0xc + 0x20) != 10) ||
                           (uVar44 == *(uint *)(unaff_x19 + 0x93))) goto LAB_03549a88;
                        if (uVar17 <= uVar44 - 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        fVar80 = *(float *)(lVar21 + (long)(int)(uVar44 - 1) * 0x178 + 0x60);
                        iVar16 = FUN_03776950(*unaff_x21 + 0x50,0);
                        lVar21 = *unaff_x21;
                      }
                      else {
LAB_03549a88:
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        fVar80 = *(float *)(unaff_x19 + 0x3d);
                        iVar16 = FUN_03776950(*unaff_x21 + 0x50,0);
                        lVar21 = unaff_x19[0x20];
                      }
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      fVar57 = (float)FUN_03776960(lVar21 + 0x50,0);
                      fVar52 = in_stack_00000098;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar52 = 1.0;
                      }
                      uVar78 = 0;
                      fStack0000000000000124 = 0.0;
                      if (!(bool)(bVar9 & uVar15 == 0x2026)) {
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        fStack0000000000000124 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        uVar78 = FUN_037769c0(*unaff_x21 + 0x50,0);
                      }
                      lVar21 = unaff_x19[0xc9];
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      _fStack0000000000000120 = CONCAT44(fStack0000000000000124,uVar78);
                      if (*(long *)(lVar21 + 0x20) == 0) goto LAB_0354fbf4;
                      fVar75 = *(float *)((long)unaff_x19 + 0x404);
                      fVar53 = *(float *)(lVar21 + 0x2c);
                      fVar69 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar55 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar76 = *(float *)((long)unaff_x19 + 0x404);
                      fVar56 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                      lVar21 = unaff_x19[0x6d];
                      if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar33 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar33 = lVar33 + (long)(int)*puVar2 * 0x178;
                      *(undefined4 *)(lVar33 + 0x2c) = 0;
                      fVar52 = ((fVar60 * fVar80) / (float)iVar16) * fVar57 * fVar52;
                      fVar69 = fVar52 * fVar75 * fVar53 * fVar69;
                      *(float *)(lVar33 + 0x160) = fVar69;
                      uVar17 = *(uint *)(unaff_x19 + 0x24);
                      fVar56 = fVar52 * fVar55 * fVar76 * fVar56;
                      if (uVar17 == 0) {
                        fStack000000000000016c = *(float *)(unaff_x19 + 0xc3);
                      }
                      else {
                        lVar33 = unaff_x19[0xe1];
                        if (lVar33 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar33 + 0x18) <= uVar17)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar33 = *(long *)(lVar33 + (long)(int)uVar17 * 8 + 0x20);
                        if (lVar33 == 0) goto LAB_0354fbf4;
                        fStack000000000000016c = *(float *)(lVar33 + 0x54);
                      }
LAB_03549e30:
                      fVar80 = 0.0;
                      if (uVar15 != 3 && uVar15 != 0xad) {
                        fVar80 = fVar69;
                      }
                    }
                    else {
                      fVar60 = 1.0;
                      if (iVar16 == 0) goto LAB_03549978;
LAB_03549594:
                      if (iVar16 == 1) {
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *in_stack_000000b8 = *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x40);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                             *(undefined4 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x48);
                        if ((unaff_x19[0xd3] == 0) ||
                           (lVar21 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0),
                           lVar21 == 0)) goto LAB_0354fbf4;
                        FUN_02215a88(lVar21,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                     &stack0x000008b0,*(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (uVar82 == 0) goto LAB_03549564;
                        if (uVar15 == 0x3c) {
                          uVar15 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                        }
                        else {
                          lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar21 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar21 = *(long *)puVar12;
                          }
                          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                               *(undefined4 *)(*(long *)(lVar21 + 0xb8) + 0x68);
                        }
                        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                        fVar69 = *(float *)(unaff_x19 + 0x3d);
                        memmove(&stack0x00001730,(void *)(unaff_x19[0x20] + 0x50),0x60);
                        iVar16 = FUN_03776950(&stack0x00001730,0);
                        if (*unaff_x21 == 0) goto LAB_0354fbf4;
                        memmove(&stack0x00001730,(void *)(*unaff_x21 + 0x50),0x60);
                        fVar52 = (float)FUN_03776960(&stack0x00001730,0);
                        fVar80 = in_stack_00000098;
                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                          fVar80 = 1.0;
                        }
                        if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                        fVar80 = (fVar69 / (float)iVar16) * fVar52 * fVar80;
                        iVar16 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                        fVar69 = *(float *)(unaff_x19 + 0x3d);
                        if (iVar16 < 1) {
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          iVar16 = FUN_03776950(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar57 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          fVar52 = in_stack_00000098;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar52 = 1.0;
                          }
                          if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                          fVar75 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                          if (*(long *)(uVar82 + 0x20) == 0) goto LAB_0354fbf4;
                          FUN_03776e6c(&stack0x000008b0,*(long *)(uVar82 + 0x20),0);
                          fVar53 = (float)FUN_03776c9c(&stack0x00001710,0);
                          if (*(long *)(uVar82 + 0x20) == 0) goto LAB_0354fbf4;
                          fVar76 = *(float *)(uVar82 + 0x2c);
                          fVar55 = (float)FUN_03776ea8(*(long *)(uVar82 + 0x20),0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar54 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar73 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_0354fbf4;
                          fVar81 = *(float *)((long)unaff_x19 + 0x404);
                          fVar56 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                          fVar56 = fVar80 * fVar73 * fVar81 * fVar56;
                          fVar52 = (fVar69 / (float)iVar16) * fVar57 * fVar52;
                          fVar69 = fVar52 * (fVar75 / fVar53) * fVar76 * fVar55;
                          fVar52 = fVar52 / fVar69;
                          fVar54 = fVar52 * fVar54;
                          fVar80 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                          fVar52 = fVar52 * fVar80;
                        }
                        else {
                          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                          iVar16 = FUN_03776950(*in_stack_000000b8 + 0x48,0);
                          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                          fVar52 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
                          if (*(long *)(uVar82 + 0x20) == 0) goto LAB_0354fbf4;
                          fVar75 = *(float *)(uVar82 + 0x2c);
                          fVar57 = in_stack_00000098;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar57 = 1.0;
                          }
                          fVar53 = (float)FUN_03776ea8(*(long *)(uVar82 + 0x20),0);
                          if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                          fVar54 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                          fVar55 = (float)FUN_037769b0(*in_stack_000000b8 + 0x48,0);
                          if (*in_stack_000000b8 == 0) goto LAB_0354fbf4;
                          fVar76 = *(float *)((long)unaff_x19 + 0x404);
                          fVar56 = (float)FUN_03776960(*in_stack_000000b8 + 0x48,0);
                          if (unaff_x19[0xd3] == 0) goto LAB_0354fbf4;
                          fVar56 = fVar80 * fVar55 * fVar76 * fVar56;
                          fVar69 = (fVar69 / (float)iVar16) * fVar52 * fVar57 * fVar75 * fVar53;
                          fVar52 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                        }
                        *puVar3 = uVar82;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (puVar3,uVar82);
                        if ((*plVar4 != 0) && (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 != 0)) {
                          if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                          *(undefined4 *)(lVar21 + 0x2c) = 1;
                          *(float *)(lVar21 + 0x160) = fVar69;
                          *(long *)(lVar21 + 0x40) = *in_stack_000000b8;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar4 != 0) && (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 != 0)) {
                            if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            *(long *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x38) = *unaff_x21;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            lVar21 = *plVar4;
                            if ((lVar21 != 0) && (lVar46 = *(long *)(lVar21 + 0x38), lVar46 != 0)) {
                              if (*puVar2 < *(uint *)(lVar46 + 0x18)) {
                                _fStack0000000000000120 = CONCAT44(fVar54,fVar52);
                                fStack000000000000016c = 0.0;
                                *(int *)(lVar46 + (long)(int)*puVar2 * 0x178 + 0x58) =
                                     (int)unaff_x19[0x24];
                                *(int *)(unaff_x19 + 0x24) = (int)lVar33;
                                goto LAB_03549e30;
                              }
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            }
                          }
                        }
                        goto LAB_0354fbf4;
                      }
                      lVar21 = *plVar4;
                      fVar56 = 0.0;
                      fVar80 = 0.0;
                      if (uVar15 != 3 && uVar15 != 0xad) {
                        fVar80 = fVar69;
                      }
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      _fStack0000000000000120 = 0;
                    }
                    lVar21 = *(long *)(lVar21 + 0x38);
                    if (lVar21 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                    *(short *)(lVar21 + 0x20) = (short)uVar15;
                    *(int *)(lVar21 + 0x60) = (int)unaff_x19[0x3d];
                    *(undefined4 *)(lVar21 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(int *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x168) = (int)unaff_x19[0x2b];
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(undefined4 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x170) =
                         *(undefined4 *)((long)unaff_x19 + 0x15c);
                    if ((unaff_x19[0x6d] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0)) goto LAB_0354fbf4;
                    uVar17 = *puVar2;
                    FUN_0209a6e0(in_stack_000000c8,&stack0x000008b0,
                                 *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                    if (*(uint *)(lVar21 + 0x18) <= uVar17)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar21 = lVar21 + (long)(int)uVar17 * 0x178;
                    *(undefined4 *)(lVar21 + 0x18c) = 0;
                    *(undefined8 *)(lVar21 + 0x184) = 0;
                    *(ulong *)(lVar21 + 0x17c) = uVar82;
                    if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(undefined4 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 400) =
                         *(undefined4 *)((long)unaff_x19 + 0x25c);
                    if ((unaff_x19[0xc9] == 0) ||
                       (lVar21 = *(long *)(unaff_x19[0xc9] + 0x20), lVar21 == 0)) goto LAB_0354fbf4;
                    FUN_03776e6c(&stack0x00000c28,lVar21,0);
                    if ((int)uVar15 < 0x10000) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar17 = FUN_026b63d8(uVar15,0);
                      uVar17 = uVar17 & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    fVar52 = *(float *)(unaff_x19 + 0x55);
                    *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                    if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                      fVar57 = 0.0;
                      fVar53 = 0.0;
                      fVar75 = 0.0;
                    }
                    else {
                      if (*puVar3 == 0) goto LAB_0354fbf4;
                      uVar30 = *puVar2;
                      uVar44 = *(uint *)(*puVar3 + 0x28);
                      if ((int)uVar30 < (int)uVar32) {
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= uVar30 + 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar21 = *(long *)(lVar21 + (long)(int)(uVar30 + 1) * 0x178 + 0x30);
                        if ((((lVar21 == 0) || (*unaff_x21 == 0)) ||
                            (lVar33 = *(long *)(*unaff_x21 + 0x128), lVar33 == 0)) ||
                           (lVar33 = *(long *)(lVar33 + 0x18), lVar33 == 0)) goto LAB_0354fbf4;
                        uVar82 = (ulong)(uVar44 | *(int *)(lVar21 + 0x28) << 0x10);
                        uVar26 = FUN_0219f8b8(lVar33,&stack0x000008b0,&stack0x00001708,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                        uVar78 = 0;
                        if ((uVar26 & 1) == 0) {
                          fVar57 = 0.0;
                          fVar53 = 0.0;
                          fVar75 = 0.0;
                        }
                        else {
                          if (in_stack_00001708 == 0) goto LAB_0354fbf4;
                          fVar57 = *(float *)(in_stack_00001708 + 0x1c);
                          uVar78 = *(undefined4 *)(in_stack_00001708 + 0x20);
                          fVar75 = *(float *)(in_stack_00001708 + 0x14);
                          fVar53 = *(float *)(in_stack_00001708 + 0x18);
                          if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                            fVar52 = 0.0;
                          }
                        }
                        uVar30 = *puVar2;
                      }
                      else {
                        uVar78 = 0;
                        fVar57 = 0.0;
                        fVar53 = 0.0;
                        fVar75 = 0.0;
                      }
                      if (0 < (int)uVar30) {
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= uVar30 - 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar21 = *(long *)(lVar21 + (ulong)(uVar30 - 1) * 0x178 + 0x30);
                        if (((lVar21 == 0) || (*unaff_x21 == 0)) ||
                           ((lVar33 = *(long *)(*unaff_x21 + 0x128), lVar33 == 0 ||
                            (lVar33 = *(long *)(lVar33 + 0x18), lVar33 == 0)))) goto LAB_0354fbf4;
                        uVar82 = (ulong)(*(uint *)(lVar21 + 0x28) | uVar44 << 0x10);
                        uVar26 = FUN_0219f8b8(lVar33,&stack0x000008b0,&stack0x00001708,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                        if ((uVar26 & 1) != 0) {
                          if ((in_stack_00001708 == 0) ||
                             (fVar75 = (float)FUN_03571cb4(fVar75,fVar53,fVar57,uVar78,
                                                           *(undefined4 *)(in_stack_00001708 + 0x28)
                                                           ,*(undefined4 *)
                                                             (in_stack_00001708 + 0x2c),
                                                           *(undefined4 *)(in_stack_00001708 + 0x30)
                                                           ,*(undefined4 *)
                                                             (in_stack_00001708 + 0x34),0),
                             in_stack_00001708 == 0)) goto LAB_0354fbf4;
                          if ((*(byte *)(in_stack_00001708 + 0x39) & 1) != 0) {
                            fVar52 = 0.0;
                          }
                        }
                      }
                      *(float *)((long)unaff_x19 + 0x2fc) = fVar57;
                    }
                    if ((char)unaff_x19[0x1e] != '\0') {
                      fVar76 = *(float *)(unaff_x19 + 200);
                      fVar55 = (float)FUN_03776cb4(&stack0x000017a0,0);
                      fVar76 = fVar76 - fVar80 * fVar55 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)
                                                          );
                      *(float *)(unaff_x19 + 200) = fVar76;
                      if ((uVar15 == 0x200b) || (uVar17 != 0)) {
                        *(float *)(unaff_x19 + 200) =
                             fVar76 - fVar49 * *(float *)((long)unaff_x19 + 0x2b4);
                      }
                    }
                    fVar76 = *(float *)(unaff_x19 + 0x56);
                    fVar55 = 0.0;
                    if (fVar76 != 0.0) {
                      fVar55 = (float)FUN_03776c94(&stack0x000017a0,0);
                      fVar54 = (float)FUN_03776ca4(&stack0x000017a0,0);
                      fVar55 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (fVar76 * 0.5 - fVar80 * (fVar55 * 0.5 + fVar54));
                      *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar55;
                    }
                    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar29 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                      lVar21 = *in_stack_00000170;
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar26 = FUN_036cee6c(lVar21,0,0);
                      fVar54 = 0.0;
                      if ((uVar26 & 1) != 0) {
                        lVar21 = *in_stack_00000170;
                        if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        plVar45 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                        if (lVar21 == 0) goto LAB_0354fbf4;
                        uVar26 = FUN_03699d3c(lVar21,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                        fVar54 = 0.0;
                        if ((uVar26 & 1) != 0) {
                          lVar21 = *in_stack_00000170;
                          if (*(int *)(*plVar45 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            plVar45 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                          }
                          if (lVar21 == 0) goto LAB_0354fbf4;
                          fVar76 = (float)FUN_0369e060(lVar21,*(undefined4 *)
                                                               (*(long *)(*plVar45 + 0xb8) + 0x54),0
                                                      );
                          if ((*unaff_x21 == 0) || (*in_stack_00000170 == 0)) goto LAB_0354fbf4;
                          fVar73 = *(float *)(*unaff_x21 + 0x1b0);
                          fVar54 = (float)FUN_0369e060(*in_stack_00000170,
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                          fVar54 = fVar54 * fVar76 * fVar73 * 0.25;
                          if (fVar76 < fStack000000000000016c + fVar54) {
                            fStack000000000000016c = fVar76 - fVar54;
                          }
                        }
                      }
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
                    }
                    else {
                      lVar21 = *in_stack_00000170;
                      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar26 = FUN_036cee6c(lVar21,0,0);
                      fStack00000000000000d0 = 0.0;
                      if ((uVar26 & 1) != 0) {
                        lVar21 = *in_stack_00000170;
                        if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        plVar45 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                        if (lVar21 == 0) goto LAB_0354fbf4;
                        uVar26 = FUN_03699d3c(lVar21,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0x54),0);
                        if ((uVar26 & 1) != 0) {
                          lVar21 = *in_stack_00000170;
                          if (*(int *)(*plVar45 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            plVar45 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                          }
                          if (lVar21 == 0) goto LAB_0354fbf4;
                          uVar26 = FUN_03699d3c(lVar21,*(undefined4 *)
                                                        (*(long *)(*plVar45 + 0xb8) + 0xcc),0);
                          if ((uVar26 & 1) != 0) {
                            lVar21 = *in_stack_00000170;
                            if (*(int *)(*plVar45 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              plVar45 = (long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                            }
                            if (lVar21 != 0) {
                              fVar76 = (float)FUN_0369e060(lVar21,*(undefined4 *)
                                                                   (*(long *)(*plVar45 + 0xb8) +
                                                                   0x54),0);
                              if ((*unaff_x21 != 0) && (*in_stack_00000170 != 0)) {
                                fVar73 = *(float *)(*unaff_x21 + 0x1a8);
                                fVar54 = (float)FUN_0369e060(*in_stack_00000170,
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)
                                                  OVRPlugin_InsightPassthroughColorMapType_TypeInfo
                                                  + 0xb8) + 0xcc),0);
                                fVar54 = fVar54 * fVar76 * fVar73 * 0.25;
                                if (fVar76 < fStack000000000000016c + fVar54) {
                                  fStack000000000000016c = fVar76 - fVar54;
                                }
                                goto LAB_0354a568;
                              }
                            }
                            goto LAB_0354fbf4;
                          }
                        }
                      }
                      fVar54 = 0.0;
                    }
LAB_0354a568:
                    fVar76 = *(float *)(unaff_x19 + 200);
                    fVar73 = (float)FUN_03776ca4(&stack0x000017a0,0);
                    fVar76 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      fVar80 * (fVar75 + ((fVar73 - fStack000000000000016c) - fVar54
                                                         ));
                    fVar75 = (float)FUN_03776cac(&stack0x000017a0,0);
                    fVar73 = *(float *)((long)unaff_x19 + 0x61c) +
                             ((fVar56 + fVar80 * (fVar53 + fStack000000000000016c + fVar75)) -
                             *(float *)(unaff_x19 + 0x9b));
                    fVar75 = (float)FUN_03776c9c(&stack0x000017a0,0);
                    fStack0000000000000134 =
                         fVar73 - fVar80 * (fStack000000000000016c + fStack000000000000016c + fVar75
                                           );
                    fVar75 = (float)FUN_03776c94(&stack0x000017a0,0);
                    fVar53 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      fVar80 * (fVar54 + fVar54 +
                                               fStack000000000000016c + fStack000000000000016c +
                                               fVar75);
                    fStack0000000000000104 = fVar76;
                    fVar75 = fVar53;
                    if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar29 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                      fVar58 = (float)(int)unaff_x19[0xbe] * fVar66;
                      fVar75 = (float)FUN_03776cac(&stack0x000017a0,0);
                      fVar59 = fVar58 * fVar80 * (fVar54 + fStack000000000000016c + fVar75);
                      fVar75 = (float)FUN_03776cac(&stack0x000017a0,0);
                      fVar81 = (float)FUN_03776c9c(&stack0x000017a0,0);
                      fVar73 = fVar73 + 0.0;
                      fStack0000000000000134 = fStack0000000000000134 + 0.0;
                      fVar58 = fVar58 * fVar80 * (((fVar75 - fVar81) - fStack000000000000016c) -
                                                 fVar54);
                      fVar81 = fVar76 + fVar59;
                      fVar75 = fVar53 + fVar58;
                      fVar72 = (fVar59 - fVar58) * 0.5;
                      fVar76 = (fVar76 + fVar58) - fVar72;
                      fVar53 = (fVar53 + fVar59) - fVar72;
                      fStack0000000000000104 = fVar81 - fVar72;
                      fVar75 = fVar75 - fVar72;
                    }
                    if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                      fVar58 = 0.0;
                      fVar59 = 0.0;
                      fVar70 = 0.0;
                      fStack0000000000000100 = 0.0;
                      fVar72 = fStack0000000000000134;
                      fVar81 = fVar73;
                    }
                    else {
                      thunk_FUN_036bc400(lVar22,0);
                      fVar74 = (fVar53 + fVar76) * 0.5;
                      fVar77 = (fStack0000000000000134 + fVar73) * 0.5;
                      fVar73 = fVar73 - fVar77;
                      fStack0000000000000100 = 0.0;
                      fVar81 = fVar73;
                      fStack0000000000000104 =
                           (float)FUN_036bdd2c(fStack0000000000000104 - fVar74,lVar22,0);
                      fStack0000000000000104 = fVar74 + fStack0000000000000104;
                      fStack0000000000000100 = fStack0000000000000100 + 0.0;
                      fVar72 = fStack0000000000000134 - fVar77;
                      fVar58 = 0.0;
                      fStack0000000000000134 = fVar72;
                      fVar76 = (float)FUN_036bdd2c(fVar76 - fVar74,lVar22,0);
                      fVar76 = fVar74 + fVar76;
                      fVar58 = fVar58 + 0.0;
                      fStack0000000000000134 = fVar77 + fStack0000000000000134;
                      fVar70 = 0.0;
                      fVar53 = (float)FUN_036bdd2c(fVar53 - fVar74,lVar22,0);
                      fVar53 = fVar74 + fVar53;
                      fVar73 = fVar77 + fVar73;
                      fVar70 = fVar70 + 0.0;
                      fVar59 = 0.0;
                      fVar75 = (float)FUN_036bdd2c(fVar75 - fVar74,lVar22,0);
                      fVar75 = fVar74 + fVar75;
                      fVar59 = fVar59 + 0.0;
                      fVar72 = fVar77 + fVar72;
                      fVar81 = fVar77 + fVar81;
                    }
                    if (*plVar4 == 0) goto LAB_0354fbf4;
                    lVar21 = *(long *)(*plVar4 + 0x38);
                    uVar26 = (ulong)(uint)fVar80;
                    if (lVar21 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar21 + 0x11c) = fVar76;
                    *(float *)(lVar21 + 0x120) = fStack0000000000000134;
                    *(float *)(lVar21 + 0x124) = fVar58;
                    if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar21 + 0x114) = fVar81;
                    *(float *)(lVar21 + 0x110) = fStack0000000000000104;
                    *(float *)(lVar21 + 0x118) = fStack0000000000000100;
                    if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar21 + 0x128) = fVar53;
                    *(float *)(lVar21 + 300) = fVar73;
                    *(float *)(lVar21 + 0x130) = fVar70;
                    if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                    goto LAB_0354fbf4;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar21 = lVar21 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar21 + 0x134) = fVar75;
                    *(float *)(lVar21 + 0x138) = fVar72;
                    *(float *)(lVar21 + 0x13c) = fVar59;
                    if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                    goto LAB_0354fbf4;
                    uVar44 = *puVar2;
                    lVar33 = (long)(int)uVar44;
                    if (*(uint *)(lVar21 + 0x18) <= uVar44)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar46 = lVar21 + lVar33 * 0x178;
                    *(int *)(lVar46 + 0x140) = (int)unaff_x19[200];
                    fVar73 = *(float *)(unaff_x19 + 0x9b);
                    uVar64 = (ulong)(uint)fVar73;
                    fVar75 = *(float *)((long)unaff_x19 + 0x61c);
                    *(float *)(lVar46 + 0x15c) =
                         (fVar53 - fVar76) / (fVar81 - fStack0000000000000134);
                    *(float *)(lVar46 + 0x14c) = (fVar56 - fVar73) + fVar75;
                    fVar53 = fStack0000000000000124 * fVar80;
                    if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                      fVar53 = fVar53 / fVar60;
                      fStack0000000000000120 = (fStack0000000000000120 * fVar80) / fVar60;
                    }
                    else {
                      fStack0000000000000120 = fStack0000000000000120 * fVar80;
                    }
                    uVar30 = *(uint *)(unaff_x19 + 0x93);
                    if ((uVar17 == 0) || (uVar44 == uVar30)) {
                      fStack0000000000000120 = fVar75 + fStack0000000000000120;
                      fVar53 = fVar75 + fVar53;
                      fVar56 = fStack0000000000000120;
                      fVar76 = fVar53;
                      if (fVar75 != 0.0) {
                        fVar76 = (fVar53 - fVar75) / *(float *)((long)unaff_x19 + 0x404);
                        fVar56 = (fStack0000000000000120 - fVar75) /
                                 *(float *)((long)unaff_x19 + 0x404);
                        if (fVar76 <= fVar53) {
                          fVar76 = fVar53;
                        }
                        if (fStack0000000000000120 <= fVar56) {
                          fVar56 = fStack0000000000000120;
                        }
                      }
                      lVar21 = lVar21 + lVar33 * 0x178;
                      fVar75 = fVar76;
                      if (fVar76 <= *(float *)(unaff_x19 + 0x99)) {
                        fVar75 = *(float *)(unaff_x19 + 0x99);
                      }
                      fVar81 = fVar56;
                      if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar56) {
                        fVar81 = *(float *)((long)unaff_x19 + 0x4cc);
                      }
                      *(float *)((long)unaff_x19 + 0x4cc) = fVar81;
                      *(float *)(unaff_x19 + 0x99) = fVar75;
                      *(float *)(lVar21 + 0x154) = fVar76;
                      *(float *)(lVar21 + 0x158) = fVar56;
                      *(float *)(lVar21 + 0x148) = fVar53 - fVar73;
                      *(float *)(unaff_x19 + 0x98) = fVar53 - fVar73;
                      *(float *)(lVar21 + 0x150) = fStack0000000000000120 - fVar73;
                      *(float *)((long)unaff_x19 + 0x4c4) = fStack0000000000000120 - fVar73;
                      if (((int)unaff_x19[0x95] == 0) ||
                         (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
                        *(float *)(unaff_x19 + 0x97) = fVar75;
                        if (unaff_x19[0x20] == 0) goto LAB_0354fbf4;
                        fVar75 = *(float *)((long)unaff_x19 + 0x4bc);
                        fVar76 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                        fVar60 = (fVar80 * fVar76) / fVar60;
                        uVar64 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                        if (fVar75 <= fVar60) {
                          fVar75 = fVar60;
                        }
                        *(float *)((long)unaff_x19 + 0x4bc) = fVar75;
                      }
                      if ((float)uVar64 == 0.0) {
                        fVar60 = *(float *)((long)unaff_x19 + 0x4b4);
                        if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar53) {
                          fVar60 = fVar53;
                        }
                        *(float *)((long)unaff_x19 + 0x4b4) = fVar60;
                      }
                    }
                    else {
                      fVar60 = *(float *)(unaff_x19 + 0x99);
                      lVar21 = lVar21 + lVar33 * 0x178;
                      *(float *)(lVar21 + 0x154) = fVar60;
                      fVar75 = *(float *)((long)unaff_x19 + 0x4cc);
                      fVar60 = fVar60 - fVar73;
                      *(float *)(lVar21 + 0x148) = fVar60;
                      *(float *)(lVar21 + 0x158) = fVar75;
                      *(float *)(unaff_x19 + 0x98) = fVar60;
                      fVar75 = fVar75 - fVar73;
                      *(float *)(lVar21 + 0x150) = fVar75;
                      *(float *)((long)unaff_x19 + 0x4c4) = fVar75;
                    }
                    lVar21 = *plVar4;
                    if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0))
                    goto LAB_0354fbf4;
                    uVar18 = *puVar2;
                    if (*(uint *)(lVar33 + 0x18) <= uVar18)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    lVar33 = lVar33 + (long)(int)uVar18 * 0x178;
                    *(undefined1 *)(lVar33 + 0x194) = 0;
                    uVar36 = *(uint *)(unaff_x19 + 0x4f);
                    if ((uVar15 == 9) ||
                       (((((uVar17 == 0 && (uVar15 != 3)) && (uVar15 != 0x200b)) && (uVar15 != 0xad)
                         ) || (((bool)(uVar15 == 0xad & (bVar14 ^ 1U)) ||
                               (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                      *(undefined1 *)(lVar33 + 0x194) = 1;
                      pfVar34 = (float *)((long)unaff_x19 + 0x354);
                      pfVar38 = (float *)(unaff_x19 + 0x6a);
                      if (bVar9) {
                        lVar21 = *(long *)(lVar21 + 0x50);
                        if (lVar21 == 0) goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        pfVar38 = (float *)(lVar21 + 0x60);
                        pfVar34 = (float *)(lVar21 + 100);
                      }
                      fVar75 = *pfVar38;
                      fVar53 = *pfVar34;
                      fVar60 = *(float *)(unaff_x19 + 0x6c);
                      fVar76 = *(float *)(unaff_x19 + 200);
                      fStack00000000000000fc = (fVar79 - fVar75) - fVar53;
                      bVar13 = true;
                      if ((fVar60 <= fStack00000000000000fc) && (bVar13 = false, !NAN(fVar60))) {
                        bVar13 = fVar60 == -1.0;
                      }
                      if (!bVar13) {
                        fStack00000000000000fc = fVar60;
                      }
                      fVar60 = 0.0;
                      if ((char)unaff_x19[0x1e] == '\0') {
                        fVar60 = (float)FUN_03776cb4(&stack0x000017a0,0);
                        uVar64 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                      }
                      fVar73 = *(float *)((long)unaff_x19 + 0x2d4);
                      fVar56 = *(float *)((long)unaff_x19 + 0x4cc);
                      if (uVar15 != 0xad) {
                        fVar69 = fVar80;
                      }
                      fVar58 = (float)uVar64;
                      fVar81 = 0.0;
                      if ((0.0 < fVar58) &&
                         (fVar81 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar81 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      uVar18 = *puVar2;
                      fVar81 = (*(float *)(unaff_x19 + 0x97) - (fVar56 - fVar58)) + fVar81;
                      if (fVar65 < fVar81) {
                        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
                        }
                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        uVar63 = DAT_00d37868;
                        if ((char)unaff_x19[0x47] != '\0') {
                          fVar72 = *(float *)(unaff_x19 + 0x59);
                          if (((fVar72 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar58)) &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar47 = *(float *)((long)unaff_x19 + 700) +
                                     ((fVar68 - fVar81) / (float)(int)unaff_x19[0x95]) / fVar48;
                            if (fVar47 <= fVar72) {
                              fVar47 = fVar72;
                            }
                            goto UnityEngine_AndroidJavaObject___ctor;
                          }
                          fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
                          fVar81 = *(float *)(unaff_x19 + 0x4a);
                          uVar64 = (ulong)(uint)fVar81;
                          if ((fVar81 < fVar58) &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar47 = (fVar58 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar47 <= DAT_00d38b84) {
                              fVar47 = DAT_00d38b84;
                            }
                            fVar48 = (fVar58 - fVar47) * 20.0 + 0.5;
                            *(float *)((long)unaff_x19 + 0x23c) = fVar58;
                            fVar47 = DAT_00d38e60;
                            if (fVar48 != INFINITY) {
                              fVar47 = (float)(int)fVar48 / 20.0;
                            }
                            if (fVar47 <= fVar81) {
                              fVar47 = fVar81;
                            }
                            goto LAB_0354d004;
                          }
                        }
                        switch((int)unaff_x19[0x5c]) {
                        case 1:
                          lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar21 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar21 = *(long *)puVar12;
                          }
                          lVar33 = *(long *)(lVar21 + 0xb8);
                          lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                          if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                            lVar21 = FUN_01a46ff8(lVar21);
                          }
                          piVar27 = (int *)thunk_FUN_01a59484(lVar33 + 0x11f0,
                                                              *(long *)(*(long *)(*(long *)(lVar21 +
                                                                                           0xc0) + 8
                                                                                 ) + 0x80) + 0xa0);
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*piVar27 == 0) {
LAB_0354cf2c:
                            in_stack_000017d8 = DAT_00d37868;
                            puVar2[0] = 0;
                            puVar2[1] = 0;
                            uVar83 = 0xffffffff;
                          }
                          else {
                            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar21 = *(long *)puVar12;
                            }
                            FUN_0209b778(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00001390,&stack0x000008b0,0x378);
LAB_0354b394:
                            iVar16 = FUN_0358c15c();
LAB_0354b3a0:
                            iVar19 = *(int *)((long)unaff_x19 + 0x494) + -1;
                            *(int *)((long)unaff_x19 + 0x494) = iVar19;
                            iVar37 = iVar37 + 1;
                            uVar83 = iVar16 - 1;
                            in_stack_000017d8 = CONCAT44(0x2026,iVar19);
                          }
                          goto LAB_03549564;
                        default:
                          goto switchD_0354ad3c_caseD_2;
                        case 3:
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
LAB_0354af20:
                          uVar83 = FUN_0358c15c();
                          break;
                        case 5:
                          if ((uVar18 == 0) || ((int)uVar83 < 0)) {
                            *puVar2 = 0;
                            uVar83 = 0xffffffff;
                            in_stack_000017d8 = uVar63;
                          }
                          else {
                            fVar69 = *(float *)(unaff_x19 + 0x99);
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar83 = FUN_0358c15c();
                            if (fVar65 < fVar69 - fVar56) break;
                            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                            *(undefined4 *)(unaff_x19 + 0x93) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                            uVar64 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                         0xb8) + 0x15a8);
                            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            lVar21 = NEON_rev64(uVar64,4);
                            unaff_x19[0x99] = lVar21;
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
                          uVar83 = FUN_0358c15c();
                          lVar21 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                          }
                          uVar24 = FUN_036cee6c(lVar21,0,0);
                          if ((uVar24 & 1) != 0) {
                            plVar45 = (long *)unaff_x19[0x5d];
                            uVar63 = (**(code **)(*unaff_x19 + 0x518))();
                            if (plVar45 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar45 + 0x528))
                                      (plVar45,uVar63,*(undefined8 *)(*plVar45 + 0x530));
                            lVar21 = unaff_x19[0x5d];
                            if (lVar21 == 0) goto LAB_0354fbf4;
                            *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                            FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                            plVar45 = (long *)unaff_x19[0x5d];
                            if (plVar45 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar45 + 0x7a8))
                                      (plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
                            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                          }
                        }
LAB_0354b0e0:
                        in_stack_000017d8 = CONCAT44(3,uVar18);
                        goto LAB_03549564;
                      }
switchD_0354ad3c_caseD_2:
                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      fVar60 = ABS(fVar76) + fVar60 * (1.0 - fVar73) * fVar69;
                      fVar69 = 1.0;
                      if ((uVar36 & 0x18) != 0) {
                        fVar69 = DAT_00d38acc;
                      }
                      fVar76 = fVar69 * fStack00000000000000fc;
                      if (fVar76 < fVar60) {
                        uVar64 = (ulong)(uint)fVar54;
                        if (((char)unaff_x19[0x5b] == '\0') ||
                           (uVar18 == *(uint *)(unaff_x19 + 0x93))) {
                          if (((char)unaff_x19[0x47] != '\0') &&
                             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                            fVar76 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                            if (fVar73 < fVar76) {
                              fVar47 = fVar60 / (1.0 - fVar73);
                              if (fVar73 <= 0.0) {
                                fVar47 = fVar60;
                              }
                              fVar73 = fVar73 + (fVar60 - fVar69 * (fStack00000000000000fc +
                                                                   DAT_00d38cc4)) / fVar47;
                              goto LAB_0354fc24;
                            }
                            fVar73 = *(float *)((long)unaff_x19 + 0x1e4);
                            fVar76 = *(float *)(unaff_x19 + 0x4a);
                            if (fVar76 < fVar73) {
                              fVar47 = (fVar73 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                              if (fVar47 <= DAT_00d38b84) {
                                fVar47 = DAT_00d38b84;
                              }
                              *(float *)((long)unaff_x19 + 0x23c) = fVar73;
                              fVar73 = fVar73 - fVar47;
LAB_0354fc60:
                              fVar48 = fVar73 * 20.0 + 0.5;
                              fVar47 = DAT_00d38e60;
                              if (fVar48 != INFINITY) {
                                fVar47 = (float)(int)fVar48 / 20.0;
                              }
                              if (fVar47 <= fVar76) {
                                fVar47 = fVar76;
                              }
                              goto LAB_0354d004;
                            }
                          }
                          iVar16 = (int)unaff_x19[0x5c];
                          if (iVar16 == 1) {
                            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar21 = *(long *)puVar12;
                            }
                            lVar33 = *(long *)(lVar21 + 0xb8);
                            lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                              lVar21 = FUN_01a46ff8(lVar21);
                            }
                            piVar27 = (int *)thunk_FUN_01a59484(lVar33 + 0x11f0,
                                                                *(long *)(*(long *)(*(long *)(lVar21
                                                                                             + 0xc0)
                                                                                   + 8) + 0x80) +
                                                                0xa0);
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*piVar27 == 0) goto LAB_0354cf2c;
                            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar21 = *(long *)puVar12;
                            }
                            FUN_0209b778(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00000ca0,&stack0x000008b0,0x378);
                            goto LAB_0354b394;
                          }
                          if (iVar16 != 6) {
                            if (iVar16 == 3) {
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
                          uVar83 = FUN_0358c15c();
                          lVar21 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                          }
                          uVar24 = FUN_036cee6c(lVar21,0,0);
                          if ((uVar24 & 1) != 0) {
                            plVar45 = (long *)unaff_x19[0x5d];
                            uVar63 = (**(code **)(*unaff_x19 + 0x518))();
                            if (plVar45 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar45 + 0x528))
                                      (plVar45,uVar63,*(undefined8 *)(*plVar45 + 0x530));
                            lVar21 = unaff_x19[0x5d];
                            if (lVar21 == 0) goto LAB_0354fbf4;
                            *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                            FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                            plVar45 = (long *)unaff_x19[0x5d];
                            if (plVar45 == (long *)0x0) goto LAB_0354fbf4;
                            (**(code **)(*plVar45 + 0x7a8))
                                      (plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
                            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                          }
LAB_0354b4b4:
                          in_stack_000017d8 = CONCAT44(3,*puVar2);
                          goto LAB_03549564;
                        }
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar83 = FUN_0358c15c();
                        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                          lVar21 = *plVar4;
                          if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar33 + 0x18) <= *puVar2)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          fVar76 = *(float *)(unaff_x19 + 0x9b);
                          fVar73 = 0.0;
                          if ((0.0 < fVar76) &&
                             (fVar73 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar73 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          fVar73 = fVar49 * *(float *)(unaff_x19 + 0x57) +
                                   *(float *)(lVar33 + (long)(int)*puVar2 * 0x178 + 0x154) +
                                   (fVar73 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                   fVar48 * (fVar47 + *(float *)((long)unaff_x19 + 700));
                        }
                        else {
                          lVar21 = unaff_x19[0x6d];
                          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                          if (lVar21 == 0) goto LAB_0354fbf4;
                          fVar76 = *(float *)(unaff_x19 + 0x9b);
                          fVar73 = *(float *)(unaff_x19 + 0x58) +
                                   fVar49 * *(float *)(unaff_x19 + 0x57);
                        }
                        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar21 = *(long *)(lVar21 + 0x38);
                        if (lVar21 == 0) goto LAB_0354fbf4;
                        uVar39 = *(uint *)((long)unaff_x19 + 0x494);
                        if ((*(uint *)(lVar21 + 0x18) <= uVar39) ||
                           (uVar8 = uVar39 - 1, *(uint *)(lVar21 + 0x18) <= uVar8))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        uVar64 = (ulong)(uint)(fVar73 + *(float *)(unaff_x19 + 0x97));
                        fVar56 = (fVar73 + *(float *)(unaff_x19 + 0x97) + fVar76) -
                                 *(float *)(lVar21 + (long)(int)uVar39 * 0x178 + 0x158);
                        if ((!bVar14 && *(short *)(lVar21 + (long)(int)uVar8 * 0x178 + 0x20) == 0xad
                            ) && ((fVar56 < fVar65 || ((int)unaff_x19[0x5c] == 0)))) {
                          bVar14 = false;
                          *puVar2 = uVar8;
                          uVar83 = uVar83 - 1;
                          in_stack_000017d8 = CONCAT44(0x2d,uVar8);
                          goto LAB_03549564;
                        }
                        if (*(short *)(lVar21 + (long)(int)uVar39 * 0x178 + 0x20) == 0xad) {
                          bVar14 = true;
                          goto LAB_03549564;
                        }
                        if ((bVar10 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                          fVar73 = *(float *)((long)unaff_x19 + 0x2d4);
                          fVar76 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                          if ((fVar76 <= fVar73) ||
                             ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                            fVar73 = *(float *)((long)unaff_x19 + 0x1e4);
                            uVar64 = (ulong)(uint)fVar73;
                            fVar76 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar73 <= fVar76) ||
                               ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                            goto LAB_0354b6dc;
LAB_0354fcd0:
                            fVar47 = (fVar73 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar47 <= DAT_00d38b84) {
                              fVar47 = DAT_00d38b84;
                            }
                            *(float *)((long)unaff_x19 + 0x23c) = fVar73;
                            fVar73 = fVar73 - fVar47;
                            goto LAB_0354fc60;
                          }
LAB_0354fc94:
                          fVar47 = fVar60;
                          if (0.0 < fVar73) {
                            fVar47 = fVar60 / (1.0 - fVar73);
                          }
                          fVar73 = fVar73 + (fVar60 - fVar69 * (fStack00000000000000fc +
                                                               DAT_00d38cc4)) / fVar47;
LAB_0354fc24:
                          if (fVar76 <= fVar73) {
                            fVar73 = fVar76;
                          }
                          *(float *)((long)unaff_x19 + 0x2d4) = fVar73;
                          return;
                        }
LAB_0354b6dc:
                        lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar21 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar21 = *(long *)puVar12;
                        }
                        iVar16 = *(int *)(*(long *)(lVar21 + 0xb8) + 0xe78);
                        if (((iVar16 != iStack000000000000002c) && (iVar16 != -1)) && (bVar10 == 1))
                        {
                          if (*(int *)(lVar21 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar83 = FUN_0358c15c();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar21 = *(long *)(unaff_x19[0x6d] + 0x38), lVar21 == 0))
                          goto LAB_0354fbf4;
                          uVar39 = *puVar2 - 1;
                          if (*(uint *)(lVar21 + 0x18) <= uVar39)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          iStack000000000000002c = iVar16;
                          if (*(short *)(lVar21 + (long)(int)uVar39 * 0x178 + 0x20) == 0xad) {
                            bVar14 = false;
                            *puVar2 = uVar39;
                            uVar83 = uVar83 - 1;
                            in_stack_000017d8 = CONCAT44(0x2d,uVar39);
                            goto LAB_03549564;
                          }
                        }
                        if (fVar56 <= fVar65) {
switchD_0354b88c_caseD_0:
                          FUN_0358cbd4(fVar48,uVar26,fVar49,*(undefined4 *)((long)unaff_x19 + 0x2fc)
                                       ,fStack00000000000000d0,fVar52,fStack00000000000000fc,fVar47)
                          ;
                        }
                        else {
                          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                            *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                          }
                          fVar76 = fVar65;
                          if ((char)unaff_x19[0x47] != '\0') {
                            fVar76 = *(float *)(unaff_x19 + 0x59);
                            if ((fVar76 < *(float *)((long)unaff_x19 + 700)) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                              fVar47 = *(float *)((long)unaff_x19 + 700) +
                                       ((fVar68 - fVar56) / (float)((int)unaff_x19[0x95] + 1)) /
                                       fVar48;
                              if (fVar47 <= fVar76) {
                                fVar47 = fVar76;
                              }
UnityEngine_AndroidJavaObject___ctor:
                              *(float *)((long)unaff_x19 + 700) = fVar47;
                              return;
                            }
                            fVar73 = *(float *)((long)unaff_x19 + 0x2d4);
                            fVar76 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                            if ((fVar73 < fVar76) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_0354fc94;
                            fVar73 = *(float *)((long)unaff_x19 + 0x1e4);
                            uVar64 = (ulong)(uint)fVar73;
                            fVar76 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar76 < fVar73) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_0354fcd0;
                          }
                          switch((int)unaff_x19[0x5c]) {
                          case 0:
                          case 2:
                          case 4:
                            goto switchD_0354b88c_caseD_0;
                          case 1:
                            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            }
                            lVar33 = *(long *)(lVar21 + 0xb8);
                            lVar21 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                            if ((*(byte *)(lVar21 + 0x135) & 1) == 0) {
                              lVar21 = FUN_01a46ff8(lVar21);
                            }
                            piVar27 = (int *)thunk_FUN_01a59484(lVar33 + 0x11f0,
                                                                *(long *)(*(long *)(*(long *)(lVar21
                                                                                             + 0xc0)
                                                                                   + 8) + 0x80) +
                                                                0xa0);
                            if (*piVar27 == 0) {
                              bVar14 = false;
                              goto LAB_0354cf2c;
                            }
                            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            }
                            FUN_0209b778(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00001018,&stack0x000008b0,0x378);
                            iVar16 = FUN_0358c15c();
                            bVar14 = false;
                            goto LAB_0354b3a0;
                          case 3:
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar83 = FUN_0358c15c();
                            bVar14 = false;
                            goto LAB_0354b0e0;
                          case 5:
                            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                            FUN_0358cbd4(fVar48,uVar26,fVar49,
                                         *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                         fStack00000000000000d0,fVar52,fStack00000000000000fc,fVar47
                                        );
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                            *(undefined8 *)((long)unaff_x19 + 0x4b4) = 0;
                            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                            break;
                          case 6:
                            lVar21 = unaff_x19[0x5d];
                            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            uVar24 = FUN_036cee6c(lVar21,0,0);
                            if ((uVar24 & 1) != 0) {
                              plVar45 = (long *)unaff_x19[0x5d];
                              uVar63 = (**(code **)(*unaff_x19 + 0x518))();
                              if (plVar45 == (long *)0x0) goto LAB_0354fbf4;
                              (**(code **)(*plVar45 + 0x528))
                                        (plVar45,uVar63,*(undefined8 *)(*plVar45 + 0x530));
                              lVar21 = unaff_x19[0x5d];
                              if (lVar21 == 0) goto LAB_0354fbf4;
                              *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                              FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                              plVar45 = (long *)unaff_x19[0x5d];
                              if (plVar45 == (long *)0x0) goto LAB_0354fbf4;
                              (**(code **)(*plVar45 + 0x7a8))
                                        (plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
                              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                            }
                            bVar14 = false;
                            goto LAB_0354b4b4;
                          default:
                            bVar14 = false;
                            goto LAB_0354b8e4;
                          }
                        }
                        bVar14 = false;
LAB_0354c6b4:
                        bVar10 = 1;
                        bVar11 = true;
                        uVar64 = uVar26;
                        uVar26 = (ulong)(uint)fVar80;
                        goto LAB_03549564;
                      }
LAB_0354b8e4:
                      if (uVar15 != 0xad) {
                        if (uVar15 == 9) {
                          lVar21 = *plVar4;
                          if ((lVar21 != 0) && (lVar33 = *(long *)(lVar21 + 0x38), lVar33 != 0)) {
                            uVar18 = *puVar2;
                            if (*(uint *)(lVar33 + 0x18) <= uVar18)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            *(undefined1 *)(lVar33 + (long)(int)uVar18 * 0x178 + 0x194) = 0;
                            *(uint *)((long)unaff_x19 + 0x4a4) = uVar18;
                            lVar33 = *(long *)(lVar21 + 0x50);
                            if (lVar33 != 0) {
                              if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar33 + 0x18)) {
                                lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                                *(int *)(lVar33 + 0x2c) = *(int *)(lVar33 + 0x2c) + 1;
                                goto LAB_0354b950;
                              }
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            }
                          }
                        }
                        else {
                          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                            (**(code **)(*unaff_x19 + 0x898))(fVar76,fVar54);
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
                             (lVar21 = *(long *)(unaff_x19[0x6d] + 0x50), lVar21 != 0)) {
                            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar21 + 0x18)) {
                              lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              bVar11 = false;
                              *(float *)(lVar21 + 0x60) = fVar75;
                              *(float *)(lVar21 + 100) = fVar53;
                              goto LAB_0354ba38;
                            }
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          }
                        }
                        goto LAB_0354fbf4;
                      }
                      if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar2)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(undefined1 *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x194) = 0;
                    }
                    else {
                      if (((uVar15 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                        fVar60 = (float)uVar64;
                        fVar69 = 0.0;
                        if ((0.0 < fVar60) &&
                           (fVar69 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                          fVar69 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                        }
                        uVar64 = (ulong)(uint)fVar65;
                        if (fVar65 < (*(float *)(unaff_x19 + 0x97) -
                                     (*(float *)((long)unaff_x19 + 0x4cc) - fVar60)) + fVar69) {
                          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                            *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
                          }
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar83 = FUN_0358c15c();
                          lVar21 = unaff_x19[0x5d];
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                          }
                          uVar24 = FUN_036cee6c(lVar21,0,0);
                          if ((uVar24 & 1) != 0) {
                            plVar45 = (long *)unaff_x19[0x5d];
                            uVar63 = (**(code **)(*unaff_x19 + 0x518))();
                            if (plVar45 != (long *)0x0) {
                              (**(code **)(*plVar45 + 0x528))
                                        (plVar45,uVar63,*(undefined8 *)(*plVar45 + 0x530));
                              lVar21 = unaff_x19[0x5d];
                              if (lVar21 != 0) {
                                *(int *)(lVar21 + 0x400) = (int)unaff_x19[0x80];
                                FUN_0357ee30(lVar21,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                plVar45 = (long *)unaff_x19[0x5d];
                                if (plVar45 != (long *)0x0) {
                                  (**(code **)(*plVar45 + 0x7a8))
                                            (plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7b0));
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
                      if ((((uVar15 - 0x2007 < 0x23) &&
                           ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                          (uVar15 - 10 < 2)) || (uVar15 == 0xa0)) {
LAB_0354b500:
                        if (((uVar15 != 0xad) && (uVar15 != 0x200b)) && (uVar15 != 0x2060)) {
                          lVar21 = *plVar4;
                          if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x50), lVar33 == 0))
                          goto LAB_0354fbf4;
                          if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                          *(int *)(lVar33 + 0x2c) = *(int *)(lVar33 + 0x2c) + 1;
                          *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
                        }
                      }
                      else {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar26 = FUN_026b97f8(uVar15,0);
                        if ((uVar26 & 1) != 0) goto LAB_0354b500;
                      }
                      if (uVar15 == 0xa0) {
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x50), lVar21 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_0354b950:
                        *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
                      }
                    }
LAB_0354ba38:
                    if (((int)unaff_x19[0x5c] == 1) && ((uVar15 == 0x2d || (!bVar9)))) {
                      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                      fVar69 = *(float *)(unaff_x19 + 0x3d);
                      iVar16 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                      if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                      fVar75 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                      lVar21 = unaff_x19[0xca];
                      fVar60 = in_stack_00000098;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar60 = 1.0;
                      }
                      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_0354fbf4;
                      fVar76 = *(float *)((long)unaff_x19 + 0x404);
                      fVar73 = *(float *)(lVar21 + 0x2c);
                      fVar53 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
                      fVar54 = *(float *)(unaff_x19 + 0x6a);
                      fVar53 = fVar76 * (fVar69 / (float)iVar16) * fVar75 * fVar60 * fVar73 * fVar53
                      ;
                      fVar69 = *(float *)((long)unaff_x19 + 0x354);
                      if ((uVar15 == 10) &&
                         (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x38), lVar21 == 0))
                        goto LAB_0354fbf4;
                        uVar18 = *(int *)((long)unaff_x19 + 0x494) - 1;
                        if (*(uint *)(lVar21 + 0x18) <= uVar18)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                        fVar60 = *(float *)(lVar21 + (long)(int)uVar18 * 0x178 + 0x60);
                        iVar16 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                        if (unaff_x19[0xcb] == 0) goto LAB_0354fbf4;
                        fVar76 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                        lVar21 = unaff_x19[0xca];
                        fVar75 = in_stack_00000098;
                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                          fVar75 = 1.0;
                        }
                        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_0354fbf4;
                        fVar73 = *(float *)((long)unaff_x19 + 0x404);
                        fVar56 = *(float *)(lVar21 + 0x2c);
                        fVar53 = (float)FUN_03776ea8(*(long *)(lVar21 + 0x20),0);
                        if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x50), lVar21 == 0))
                        goto LAB_0354fbf4;
                        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        fVar54 = *(float *)(lVar21 + 0x60);
                        fVar69 = *(float *)(lVar21 + 100);
                        fVar53 = fVar73 * (fVar60 / (float)iVar16) * fVar76 * fVar75 * fVar56 *
                                 fVar53;
                      }
                      fVar76 = *(float *)(unaff_x19 + 0x9b);
                      fVar60 = 0.0;
                      fVar75 = 0.0;
                      if ((0.0 < fVar76) &&
                         (fVar75 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar75 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      fVar56 = *(float *)(unaff_x19 + 0x97);
                      fVar81 = *(float *)((long)unaff_x19 + 0x4cc);
                      fVar73 = *(float *)(unaff_x19 + 200);
                      if ((char)unaff_x19[0x1e] == '\0') {
                        if ((unaff_x19[0xca] == 0) ||
                           (lVar21 = *(long *)(unaff_x19[0xca] + 0x20), lVar21 == 0))
                        goto LAB_0354fbf4;
                        FUN_03776e6c(&stack0x000008b0,lVar21,0);
                        fVar60 = (float)FUN_03776cb4(&stack0x00001710,0);
                      }
                      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      fVar58 = *(float *)(unaff_x19 + 0x6c);
                      fVar69 = (fVar79 - fVar54) - fVar69;
                      bVar13 = true;
                      if ((fVar58 <= fVar69) && (bVar13 = false, !NAN(fVar58))) {
                        bVar13 = fVar58 == -1.0;
                      }
                      if (!bVar13) {
                        fVar69 = fVar58;
                      }
                      fVar54 = 1.0;
                      if ((uVar36 & 0x18) != 0) {
                        fVar54 = DAT_00d38acc;
                      }
                      if (((fVar56 - (fVar81 - fVar76)) + fVar75 < fVar65) &&
                         (ABS(fVar73) +
                          fVar53 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                          fVar54 * fVar69)) {
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_0358c4f0();
                        lVar21 = *(long *)(*(long *)puVar12 + 0xb8);
                        memcpy(&stack0x00000538,(void *)(lVar21 + 0x788),0x378);
                        FUN_0209b210(lVar21 + 0x11f0,&stack0x00000538,
                                     *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                      }
                    }
                    lVar21 = *plVar4;
                    if (lVar21 == 0) goto LAB_0354fbf4;
                    lVar33 = *(long *)(lVar21 + 0x38);
                    if (lVar33 == 0) goto LAB_0354fbf4;
                    if (*(uint *)(lVar33 + 0x18) <= *puVar2)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    uVar18 = *(uint *)(unaff_x19 + 0x95);
                    lVar33 = lVar33 + (long)(int)*puVar2 * 0x178;
                    *(uint *)(lVar33 + 100) = uVar18;
                    *(int *)(lVar33 + 0x68) = (int)unaff_x19[0x96];
                    if ((bVar9) ||
                       ((uVar15 < 0xe && ((1 << (ulong)(uVar15 & 0x1f) & 0x2c00U) != 0)))) {
                      lVar21 = *(long *)(lVar21 + 0x50);
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= uVar18)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      if (*(int *)(lVar21 + (long)(int)uVar18 * 0x5c + 0x24) == 1)
                      goto LAB_0354bde0;
                    }
                    else {
                      lVar21 = *(long *)(lVar21 + 0x50);
                      if (lVar21 == 0) goto LAB_0354fbf4;
LAB_0354bde0:
                      if (*(uint *)(lVar21 + 0x18) <= uVar18)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      *(int *)(lVar21 + (long)(int)uVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                    }
                    if (uVar15 == 9) {
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar69 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar57 = *(float *)(unaff_x19 + 200);
                      fVar60 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
                      fVar69 = fVar80 * fVar69 * fVar60;
                      fVar60 = fVar69 * (float)(int)(fVar57 / fVar69);
                      uVar64 = (ulong)(uint)fVar60;
                      if (fVar60 <= fVar57) {
                        fVar60 = fVar57 + fVar69;
                      }
LAB_0354c000:
                      *(float *)(unaff_x19 + 200) = fVar60;
                    }
                    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                      if ((char)unaff_x19[0x1e] == '\0') {
                        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                          fVar75 = 1.0;
                        }
                        else {
                          fVar75 = (float)thunk_FUN_036bc400(lVar22,0);
                        }
                        fVar60 = *(float *)(unaff_x19 + 200);
                        fVar53 = (float)FUN_03776cb4(&stack0x000017a0,0);
                        if (unaff_x19[0x20] != 0) {
                          fVar69 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                          fVar60 = fVar60 + fVar69 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                     fVar80 * (fVar57 + fVar75 * fVar53) +
                                                     fVar49 * (fStack00000000000000d0 +
                                                              fVar52 + *(float *)(unaff_x19[0x20] +
                                                                                 0x1ac)));
                          *(float *)(unaff_x19 + 200) = fVar60;
                          goto joined_r0x0354bf48;
                        }
                        goto LAB_0354fbf4;
                      }
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (*(float *)((long)unaff_x19 + 0x2ac) +
                               fVar80 * fVar57 +
                               fVar49 * (fStack00000000000000d0 +
                                        fVar52 + *(float *)(*unaff_x21 + 0x1ac)));
                      uVar64 = (ulong)(uint)fVar60;
                      fVar60 = *(float *)(unaff_x19 + 200) - fVar60;
                      *(float *)(unaff_x19 + 200) = fVar60;
                      if ((uVar15 == 0x200b) || (uVar17 != 0)) {
                        fVar69 = fVar49 * *(float *)((long)unaff_x19 + 0x2b4);
                        uVar64 = (ulong)(uint)fVar69;
                        fVar60 = fVar60 - fVar69;
                        goto LAB_0354c000;
                      }
                    }
                    else {
                      if (*unaff_x21 == 0) goto LAB_0354fbf4;
                      fVar69 = *(float *)(unaff_x19 + 200);
                      fVar60 = fVar69 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                        (*(float *)((long)unaff_x19 + 0x2ac) +
                                        (*(float *)(unaff_x19 + 0x56) - fVar55) +
                                        fVar49 * (fVar52 + *(float *)(*unaff_x21 + 0x1ac)));
                      *(float *)(unaff_x19 + 200) = fVar60;
joined_r0x0354bf48:
                      if ((uVar15 == 0x200b) || (uVar64 = (ulong)(uint)fVar69, uVar17 != 0)) {
                        fVar69 = fVar49 * *(float *)((long)unaff_x19 + 0x2b4);
                        uVar64 = (ulong)(uint)fVar69;
                        fVar60 = fVar60 + fVar69;
                        goto LAB_0354c000;
                      }
                    }
                    lVar21 = *plVar4;
                    if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0))
                    goto LAB_0354fbf4;
                    uVar18 = *puVar2;
                    uVar36 = (uint)*(undefined8 *)(lVar33 + 0x18);
                    if (uVar36 <= uVar18)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    *(float *)(lVar33 + (long)(int)uVar18 * 0x178 + 0x144) = fVar60;
                    uVar39 = uVar15;
                    if ((int)uVar15 < 0xd) {
                      if ((uVar15 - 10 < 2) || (uVar15 == 3)) goto LAB_0354c060;
LAB_0354c6e8:
                      if (((bool)(bVar9 & uVar15 == 0x2d)) || (uVar18 == uVar32)) goto LAB_0354c060;
                    }
                    else {
                      if (1 < uVar15 - 0x2028) {
                        if (uVar15 != 0xd) goto LAB_0354c6e8;
                        uVar64 = 0;
                        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                        if (uVar18 != uVar32) goto LAB_0354c704;
                      }
LAB_0354c060:
                      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                        fVar69 = *(float *)(unaff_x19 + 0x99);
                        fVar60 = *(float *)(unaff_x19 + 0x9a);
                        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        fVar69 = fVar69 - fVar60;
                        if (((fVar66 < ABS(fVar69)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                          FUN_0358c860(fVar69);
                          *(float *)((long)unaff_x19 + 0x4c4) =
                               *(float *)((long)unaff_x19 + 0x4c4) - fVar69;
                          *(float *)(unaff_x19 + 0x9b) = fVar69 + *(float *)(unaff_x19 + 0x9b);
                          puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar21 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar21 = *(long *)puVar12;
                          }
                          lVar33 = *(long *)(lVar21 + 0xb8);
                          if (*(int *)(lVar33 + 0x7ac) == (int)unaff_x19[0x95]) {
                            if (*(int *)(lVar21 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar33 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                            }
                            FUN_0209b778(lVar33 + 0x11f0,&stack0x000008b0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            memcpy((void *)(*(long *)(lVar21 + 0xb8) + 0x788),&stack0x000008b0,0x378
                                  );
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (*(long *)(lVar21 + 0xb8) + 0x818,0);
                            lVar21 = *(long *)(*(long *)puVar12 + 0xb8);
                            *(float *)(lVar21 + 0x7bc) = fVar69 + *(float *)(lVar21 + 0x7bc);
                            *(float *)(lVar21 + 0x800) = fVar69 + *(float *)(lVar21 + 0x800);
                            memcpy(&stack0x000001c0,(void *)(lVar21 + 0x788),0x378);
                            FUN_0209b210(lVar21 + 0x11f0,&stack0x000001c0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                          }
                        }
                      }
                      fVar57 = *(float *)(unaff_x19 + 0x9b);
                      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                      fVar60 = *(float *)((long)unaff_x19 + 0x4cc) - fVar57;
                      fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
                      if (fVar60 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                        fVar69 = fVar60;
                      }
                      *(float *)((long)unaff_x19 + 0x4c4) = fVar69;
                      fVar75 = *(float *)(unaff_x19 + 0x99);
                      if (in_stack_000017e4 == '\0') {
                        fVar84 = fVar69;
                      }
                      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                        in_stack_000017e4 = '\x01';
                      }
                      lVar21 = *plVar4;
                      if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x50), lVar33 == 0))
                      goto LAB_0354fbf4;
                      uVar18 = *(uint *)(unaff_x19 + 0x95);
                      if (*(uint *)(lVar33 + 0x18) <= uVar18)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar46 = unaff_x19[0x93];
                      lVar25 = lVar33 + (long)(int)uVar18 * 0x5c;
                      *(int *)(lVar25 + 0x34) = (int)lVar46;
                      uVar36 = *(uint *)(unaff_x19 + 0x93);
                      if ((int)lVar46 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                        uVar36 = *(uint *)((long)unaff_x19 + 0x49c);
                      }
                      *(uint *)((long)unaff_x19 + 0x49c) = uVar36;
                      *(uint *)(lVar25 + 0x38) = uVar36;
                      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
                      *(undefined4 *)(lVar25 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                      iVar16 = *(int *)((long)unaff_x19 + 0x49c);
                      if ((int)uVar36 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                        iVar16 = *(int *)((long)unaff_x19 + 0x4a4);
                      }
                      *(int *)((long)unaff_x19 + 0x4a4) = iVar16;
                      *(int *)(lVar25 + 0x40) = iVar16;
                      *(int *)(lVar25 + 0x24) =
                           (*(int *)(lVar25 + 0x3c) - *(int *)(lVar25 + 0x34)) + 1;
                      *(undefined4 *)(lVar25 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                      lVar21 = *(long *)(lVar21 + 0x38);
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= uVar36)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      uVar78 = *(undefined4 *)(lVar21 + (long)(int)uVar36 * 0x178 + 0x11c);
                      lVar33 = lVar33 + (long)(int)uVar18 * 0x5c;
                      *(float *)(lVar33 + 0x70) = fVar60;
                      *(undefined4 *)(lVar33 + 0x6c) = uVar78;
                      lVar21 = *plVar4;
                      if ((lVar21 == 0) || (lVar33 = *(long *)(lVar21 + 0x50), lVar33 == 0))
                      goto LAB_0354fbf4;
                      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar21 = *(long *)(lVar21 + 0x38);
                      if (lVar21 == 0) goto LAB_0354fbf4;
                      if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      fVar75 = fVar75 - fVar57;
                      uVar64 = (ulong)(uint)fVar75;
                      lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      *(undefined4 *)(lVar33 + 0x74) =
                           *(undefined4 *)
                            (lVar21 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * 0x178 + 0x128)
                      ;
                      *(float *)(lVar33 + 0x78) = fVar75;
                      lVar21 = *plVar4;
                      if ((lVar21 == 0) || (lVar46 = *(long *)(lVar21 + 0x50), lVar46 == 0))
                      goto LAB_0354fbf4;
                      lVar25 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                      if (*(uint *)(lVar46 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar33 = lVar46 + lVar25 * 0x5c;
                      *(float *)(lVar33 + 0x44) =
                           *(float *)(lVar33 + 0x74) - fVar80 * fStack000000000000016c;
                      *(float *)(lVar33 + 0x5c) = fStack00000000000000fc;
                      if (*(int *)(lVar33 + 0x24) == 1) {
                        *(int *)(lVar46 + lVar25 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                      }
                      if ((*unaff_x21 == 0) || (lVar33 = *(long *)(lVar21 + 0x38), lVar33 == 0))
                      goto LAB_0354fbf4;
                      lVar41 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                      uVar36 = (uint)*(undefined8 *)(lVar33 + 0x18);
                      if (uVar36 <= *(uint *)((long)unaff_x19 + 0x4a4))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      if ((*(char *)(lVar33 + lVar41 * 0x178 + 0x194) == '\0') &&
                         (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                         uVar36 <= *(uint *)(unaff_x19 + 0x94)))
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar46 = lVar46 + lVar25 * 0x5c;
                      fVar52 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                               (fVar49 * (fStack00000000000000d0 +
                                         fVar52 + *(float *)(*unaff_x21 + 0x1ac)) -
                               *(float *)((long)unaff_x19 + 0x2ac));
                      fVar69 = -fVar52;
                      if ((char)unaff_x19[0x1e] != '\0') {
                        fVar69 = fVar52;
                      }
                      *(float *)(lVar46 + 0x58) =
                           *(float *)(lVar33 + lVar41 * 0x178 + 0x144) + fVar69;
                      *(float *)(lVar46 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                      *(float *)(lVar46 + 0x54) = fVar60;
                      *(float *)(lVar46 + 0x48) = fVar48 * fVar47 + (fVar75 - fVar60);
                      *(float *)(lVar46 + 0x4c) = fVar75;
                      if ((int)uVar15 < 0x2d) {
                        if (uVar15 - 10 < 2) {
LAB_0354c4a8:
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          FUN_0358c4f0();
                          lVar21 = unaff_x19[0x6d];
                          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                          iVar16 = (int)unaff_x19[0x95] + 1;
                          *(int *)(unaff_x19 + 0x95) = iVar16;
                          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                          if ((lVar21 != 0) && (*(long *)(lVar21 + 0x50) != 0)) {
                            if (*(int *)(*(long *)(lVar21 + 0x50) + 0x18) <= iVar16) {
                              FUN_0358ca18();
                              lVar21 = unaff_x19[0x6d];
                              if (lVar21 == 0) goto LAB_0354fbf4;
                            }
                            lVar21 = *(long *)(lVar21 + 0x38);
                            if (lVar21 != 0) {
                              if (*puVar2 < *(uint *)(lVar21 + 0x18)) {
                                fVar69 = *(float *)(lVar21 + (long)(int)*puVar2 * 0x178 + 0x154);
                                if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                  if ((uVar15 == 0x2029) || (fVar60 = 0.0, uVar15 == 10)) {
                                    fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
                                  }
                                  uVar28 = 0;
                                  fVar60 = fVar69 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                           fVar48 * (fVar47 + *(float *)((long)unaff_x19 + 700)) +
                                           fVar49 * (*(float *)(unaff_x19 + 0x57) + fVar60) +
                                           *(float *)(unaff_x19 + 0x9b);
                                }
                                else {
                                  if ((uVar15 == 0x2029) || (fVar60 = 0.0, uVar15 == 10)) {
                                    fVar60 = *(float *)((long)unaff_x19 + 0x2cc);
                                  }
                                  uVar28 = 1;
                                  fVar60 = *(float *)(unaff_x19 + 0x9b) +
                                           *(float *)(unaff_x19 + 0x58) +
                                           fVar49 * (*(float *)(unaff_x19 + 0x57) + fVar60);
                                }
                                *(float *)(unaff_x19 + 0x9b) = fVar60;
                                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar28;
                                puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                                lVar21 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar21 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar21 = *(long *)puVar12;
                                }
                                uVar63 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 0x9a) = fVar69;
                                uVar26 = NEON_rev64(uVar63,4);
                                unaff_x19[0x99] = uVar26;
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
                        if (uVar15 == 3) {
                          if (unaff_x19[0x8f] == 0) goto LAB_0354fbf4;
                          uVar83 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                          uVar39 = 3;
                        }
                      }
                      else if ((uVar15 - 0x2028 < 2) || (uVar15 == 0x2d)) goto LAB_0354c4a8;
                    }
LAB_0354c704:
                    uVar18 = *puVar2;
                    if (uVar36 <= uVar18)
                    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                    if (*(char *)(lVar33 + (long)(int)uVar18 * 0x178 + 0x194) != '\0') {
                      lVar33 = lVar33 + (long)(int)uVar18 * 0x178;
                      uVar64 = *(ulong *)(lVar33 + 0x11c);
                      uVar26 = *(ulong *)((long)unaff_x19 + 0x4dc);
                      *(ulong *)((long)unaff_x19 + 0x4dc) =
                           uVar26 ^ (uVar26 ^ uVar64) &
                                    ~CONCAT44(-(uint)((float)(uVar26 >> 0x20) <
                                                     (float)(uVar64 >> 0x20)),
                                              -(uint)((float)uVar26 < (float)uVar64));
                      uVar26 = *(ulong *)((long)unaff_x19 + 0x4e4);
                      uVar64 = *(ulong *)(lVar33 + 0x128);
                      *(ulong *)((long)unaff_x19 + 0x4e4) =
                           uVar26 ^ (uVar26 ^ uVar64) &
                                    ~CONCAT44(-(uint)((float)(uVar64 >> 0x20) <
                                                     (float)(uVar26 >> 0x20)),
                                              -(uint)((float)uVar64 < (float)uVar26));
                    }
                    if (((int)unaff_x19[0x5c] == 5) &&
                       ((0xd < uVar39 || ((1 << (ulong)(uVar39 & 0x1f) & 0x2c00U) == 0)))) {
                      lVar33 = *(long *)(lVar21 + 0x58);
                      if (lVar33 == 0) goto LAB_0354fbf4;
                      iVar16 = (int)unaff_x19[0x96] + 1;
                      if (*(int *)(lVar33 + 0x18) < iVar16) {
                        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_01ff02b8((long *)(lVar21 + 0x58),iVar16,1,
                                     *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                        lVar21 = *plVar4;
                        if (lVar21 == 0) goto LAB_0354fbf4;
                      }
                      lVar33 = *(long *)(lVar21 + 0x58);
                      if (lVar33 == 0) goto LAB_0354fbf4;
                      uVar36 = *(uint *)(unaff_x19 + 0x96);
                      lVar46 = (long)(int)uVar36;
                      uVar18 = *(uint *)(lVar33 + 0x18);
                      if (uVar18 <= uVar36)
                      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                      lVar25 = lVar33 + lVar46 * 0x14;
                      fVar60 = *(float *)(lVar25 + 0x30);
                      uVar64 = (ulong)(uint)fVar60;
                      *(undefined4 *)(lVar25 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                      fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
                      if (fVar60 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                        fVar69 = fVar60;
                      }
                      *(float *)(lVar25 + 0x30) = fVar69;
                      uVar39 = *(uint *)((long)unaff_x19 + 0x494);
                      if (uVar39 == 0 && uVar36 == 0) {
                        *(uint *)(lVar33 + (ulong)uVar36 * 0x14 + 0x20) = uVar39;
                      }
                      else {
                        uVar8 = uVar39 - 1;
                        if (0 < (int)uVar39) {
                          lVar21 = *(long *)(lVar21 + 0x38);
                          if (lVar21 == 0) goto LAB_0354fbf4;
                          if (*(uint *)(lVar21 + 0x18) <= uVar8)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          if (uVar36 != *(uint *)(lVar21 + (ulong)uVar8 * 0x178 + 0x68)) {
                            if (uVar36 - 1 < uVar18) {
                              *(uint *)(lVar33 + 0x20 + (long)(int)(uVar36 - 1) * 0x14 + 4) = uVar8;
                              *(uint *)(lVar33 + 0x20 + lVar46 * 0x14) = uVar39;
                              goto LAB_0354c780;
                            }
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          }
                        }
                        if (uVar39 == uVar32) {
                          *(uint *)(lVar33 + lVar46 * 0x14 + 0x24) = uVar32;
                        }
                      }
                    }
LAB_0354c780:
                    puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (((char)unaff_x19[0x5b] == '\0') &&
                       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                    goto LAB_0354cc90;
                    if ((uVar17 == 0) &&
                       (((uVar15 != 0x2d && (uVar15 != 0x200b)) && (uVar15 != 0xad)))) {
                      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_0354c87c:
                        if (((((0x2bfd < uVar15 - 0xac01) && (0xfd < uVar15 - 0x1101)) &&
                             (0x1d < uVar15 - 0xa961)) ||
                            (uVar26 = FUN_03597a54(0), (uVar26 & 1) != 0)) &&
                           ((((0xed < uVar15 - 0xff01 && (0x1d < uVar15 - 0xfe31)) &&
                             (0x717d < uVar15 - 0x2e81)) && (0x1fd < uVar15 - 0xf901))))
                        goto LAB_0354c904;
                        lVar21 = FUN_035978e8(0);
                        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_0354fbf4;
                        uVar82 = (ulong)uVar15;
                        uVar18 = FUN_0219c130(*(long *)(lVar21 + 0x10),&stack0x000008b0,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                        if ((int)uVar32 <= (int)*puVar2) {
                          if ((uVar18 & 1) == 0) {
LAB_0354cc08:
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            FUN_0358c4f0();
                            bVar10 = 0;
                            goto LAB_0354cc90;
                          }
LAB_0354cb6c:
                          if (uVar44 != uVar30 || ((bVar10 ^ 0xff) & 1) != 0) goto LAB_0354cc90;
                          if (uVar17 != 0) goto LAB_0354cb88;
                          goto LAB_0354cbc0;
                        }
                        lVar21 = FUN_035978e8(0);
                        if (((lVar21 == 0) || (*plVar4 == 0)) ||
                           (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
                        if (*(uint *)(lVar33 + 0x18) <= *puVar2 + 1)
                        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                        if (*(long *)(lVar21 + 0x18) == 0) goto LAB_0354fbf4;
                        uVar82 = (ulong)*(ushort *)
                                         (lVar33 + (long)(int)(*puVar2 + 1) * 0x178 + 0x20);
                        uVar26 = FUN_0219c130(*(long *)(lVar21 + 0x18),&stack0x000008b0,
                                              *(undefined8 *)
                                               OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                        if ((uVar18 & 1) != 0) goto LAB_0354cb6c;
                        if ((uVar26 & 1) == 0) goto LAB_0354cc08;
                        if (bVar10 == 0) goto LAB_0354cc88;
                        if (uVar17 != 0) {
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
                        if (!bVar14 && uVar15 == 0xad) goto LAB_0354cb88;
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
                        if (uVar17 == 0) goto LAB_0354c910;
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
                      if (((uVar15 - 0x2007 < 0x29) &&
                          ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                         ((uVar15 == 0xa0 || (uVar15 == 0x2060)))) goto LAB_0354c87c;
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
                    uVar26 = (ulong)(uint)fVar80;
                  }
                }
                else {
                  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
                  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                  uVar24 = FUN_03586568();
                  if (((uVar24 & 1) == 0) ||
                     (uVar83 = in_stack_0000179c, *(int *)((long)unaff_x19 + 0x644) != 0))
                  goto LAB_03549378;
                }
LAB_03549564:
                uVar83 = uVar83 + 1;
                lVar21 = unaff_x19[0x8f];
                in_stack_000017ec = uVar15;
                if (lVar21 == 0) goto LAB_0354fbf4;
                goto LAB_03549220;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0354fbf4;
LAB_0354d7c0:
  uVar83 = uVar15 - 1;
  if (*(uint *)(lVar21 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x50), lVar33 == 0)) goto LAB_0354fbf4;
  lVar25 = (long)(int)uVar83;
  lVar46 = lVar21 + lVar25 * 0x178;
  uVar17 = *(uint *)(lVar46 + 100);
  if (*(uint *)(lVar33 + 0x18) <= uVar17)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar41 = *(long *)(lVar46 + 0x38);
  lVar43 = (long)(int)uVar17;
  lVar33 = lVar33 + lVar43 * 0x5c;
  uVar44 = *(uint *)(lVar33 + 0x68);
  uVar36 = (uint)*(ushort *)(lVar46 + 0x20);
  uVar30 = *(uint *)(lVar33 + 0x3c);
  iVar6 = *(int *)(lVar33 + 0x20);
  iVar19 = *(int *)(lVar33 + 0x28);
  iVar20 = *(int *)(lVar33 + 0x2c);
  fVar66 = *(float *)(lVar33 + 0x4c);
  uVar18 = *(uint *)(lVar33 + 0x40);
  fVar65 = *(float *)(lVar33 + 0x54);
  fVar68 = *(float *)(lVar33 + 0x58);
  fVar60 = *(float *)(lVar33 + 0x5c);
  fVar80 = *(float *)(lVar33 + 0x60);
  fVar69 = *(float *)(lVar33 + 0x6c);
  fVar52 = *(float *)(lVar33 + 0x70);
  fVar71 = *(float *)(lVar33 + 0x74);
  fVar84 = *(float *)(lVar33 + 0x78);
  if ((int)uVar44 < 9) {
    switch(uVar44) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar80 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar68;
      }
      break;
    case 2:
LAB_0354d968:
      fStack00000000000000fc = (fVar80 + fVar60 * 0.5) - fVar68 * 0.5;
      break;
    default:
      goto switchD_0354d8a4_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar60 + fVar80) - fVar68;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar60 + fVar80;
      }
      break;
    case 8:
      goto switchD_0354d8a4_caseD_8;
    }
LAB_0354d9d8:
    uStack00000000000000f0 = 0;
  }
  else if (uVar44 == 0x10) {
switchD_0354d8a4_caseD_8:
    if (uVar36 < 0xad) {
      if ((uVar36 != 3) && (uVar36 != 10)) goto FUN_0354d8fc;
    }
    else if ((uVar36 != 0xad) && ((uVar36 != 0x200b && (uVar36 != 0x2060)))) {
FUN_0354d8fc:
      if (*(uint *)(lVar21 + 0x18) <= uVar30)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar7 = *(undefined2 *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar82 = FUN_026b8cc4(uVar7,0);
      if ((uVar82 & 1) == 0) {
        bVar1 = (int)uVar17 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar68 <= fVar60) && (!bVar1 && uVar44 >> 4 == 0)) {
        fStack00000000000000fc = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar60 + fVar80;
        }
        goto LAB_0354d9d8;
      }
      if (((uVar15 == 1) || (uVar17 != uVar32)) || (uVar83 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar80;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar60 + fVar80;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000030 = FUN_026b97f8(uVar36,0);
        uStack00000000000000f0 = 0;
      }
      else {
        cVar29 = (char)unaff_x19[0x1e];
        fVar80 = -fVar68;
        if (cVar29 != '\0') {
          fVar80 = fVar68;
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar30)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        iVar20 = (int)*(char *)(lVar21 + (long)(int)uVar30 * 0x178 + 0x194) +
                 (-iVar6 - (uStack0000000000000030 & 1)) + iVar20 + -1;
        if (iVar20 < 1) {
          fVar68 = 1.0;
          iVar20 = 1;
        }
        else {
          fVar68 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar36 == 9) {
LAB_0354f76c:
          fVar68 = 1.0 - fVar68;
        }
        else {
          if (uVar36 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar82 = FUN_026b97f8(uVar36,0);
            cVar29 = (char)unaff_x19[0x1e];
            if ((uVar82 & 1) != 0) goto LAB_0354f76c;
          }
          iVar20 = (iVar6 - (~uStack0000000000000030 & 1)) + iVar19;
        }
        fVar68 = ((fVar60 + fVar80) * fVar68) / (float)iVar20;
        if (cVar29 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar68;
          uStack00000000000000f0 =
               CONCAT44((float)((ulong)uStack00000000000000f0 >> 0x20) + 0.0,
                        (float)uStack00000000000000f0 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar68;
        }
      }
    }
  }
  else if (uVar44 == 0x20) {
    fVar68 = fVar69 + fVar71;
    goto LAB_0354d968;
  }
switchD_0354d8a4_caseD_3:
  uVar44 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = lVar21 + lVar25 * 0x178;
  fVar80 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar68 = SUB84(in_stack_000000b8,0) + (float)uStack00000000000000f0;
  fVar60 = (float)((ulong)in_stack_000000b8 >> 0x20) +
           (float)((ulong)uStack00000000000000f0 >> 0x20);
  if (*(char *)(lVar33 + 0x194) == '\0') goto LAB_0354e1d0;
  iVar19 = *(int *)(lVar21 + lVar25 * 0x178 + 0x2c);
  if (iVar19 != 0) goto LAB_0354e05c;
  fVar79 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar17,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar46 = lVar21 + lVar25 * 0x178;
    *(undefined4 *)(lVar46 + 0x84) = 0;
    *(undefined4 *)(lVar46 + 0xac) = 0;
    *(undefined4 *)(lVar46 + 0xd4) = 0x3f800000;
    fVar79 = 1.0;
    break;
  case 1:
    fVar84 = *(float *)(lVar21 + lVar25 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar46 = lVar21 + lVar25 * 0x178;
      fVar71 = (fStack00000000000000fc + fVar84) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar84 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_0354db24;
    }
    lVar46 = lVar21 + lVar25 * 0x178;
    fVar71 = fVar71 - fVar69;
    *(float *)(lVar46 + 0x84) = fVar79 + (fVar84 - fVar69) / fVar71;
    *(float *)(lVar46 + 0xac) = fVar79 + (*(float *)(lVar46 + 0x98) - fVar69) / fVar71;
    *(float *)(lVar46 + 0xd4) = fVar79 + (*(float *)(lVar46 + 0xc0) - fVar69) / fVar71;
    fVar79 = fVar79 + (*(float *)(lVar46 + 0xe8) - fVar69) / fVar71;
    break;
  case 2:
    lVar46 = lVar21 + lVar25 * 0x178;
    fVar84 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar71 = (fStack00000000000000fc + *(float *)(lVar46 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_0354db24:
    *(float *)(lVar46 + 0x84) = fVar79 + fVar71 / fVar84;
    *(float *)(lVar46 + 0xac) =
         fVar79 + ((fStack00000000000000fc + *(float *)(lVar46 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar46 + 0xd4) =
         fVar79 + ((fStack00000000000000fc + *(float *)(lVar46 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar79 = fVar79 + ((fStack00000000000000fc + *(float *)(lVar46 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar46 = lVar21 + lVar25 * 0x178;
      *(undefined4 *)(lVar46 + 0x88) = 0;
      *(undefined4 *)(lVar46 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar46 + 0xd8) = 0;
      *(undefined4 *)(lVar46 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar46 = lVar21 + lVar25 * 0x178;
      fVar84 = fVar84 - fVar52;
      fVar71 = fVar79 + (*(float *)(lVar46 + 0x74) - fVar52) / fVar84;
      fVar84 = fVar79 + (*(float *)(lVar46 + 0x9c) - fVar52) / fVar84;
      *(float *)(lVar46 + 0x88) = fVar71;
      *(float *)(lVar46 + 0xb0) = fVar84;
      *(float *)(lVar46 + 0xd8) = fVar71;
      *(float *)(lVar46 + 0x100) = fVar84;
      break;
    case 2:
      lVar46 = lVar21 + lVar25 * 0x178;
      fVar71 = fVar79 + (*(float *)(lVar46 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar46 + 0x88) = fVar71;
      fVar84 = *(float *)(unaff_x19 + 0x9c);
      fVar69 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar46 + 0xd8) = fVar71;
      fVar71 = fVar79 + (*(float *)(lVar46 + 0x9c) - fVar84) / (fVar69 - fVar84);
      *(float *)(lVar46 + 0xb0) = fVar71;
      *(float *)(lVar46 + 0x100) = fVar71;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar44 = (uint)*(undefined8 *)(lVar21 + 0x18);
    }
    if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar46 = lVar21 + lVar25 * 0x178;
    fVar71 = *(float *)(lVar46 + 0x15c);
    fVar84 = (1.0 - (*(float *)(lVar46 + 0x88) + *(float *)(lVar46 + 0xb0)) * fVar71) * 0.5;
    fVar69 = fVar79 + *(float *)(lVar46 + 0x88) * fVar71 + fVar84;
    fVar79 = fVar79 + fVar84 + *(float *)(lVar46 + 0xb0) * fVar71;
    *(float *)(lVar46 + 0x84) = fVar69;
    *(float *)(lVar46 + 0xac) = fVar69;
    *(float *)(lVar46 + 0xd4) = fVar79;
    break;
  default:
    goto switchD_0354da88_default;
  }
  *(float *)(lVar21 + lVar25 * 0x178 + 0xfc) = fVar79;
switchD_0354da88_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar46 = lVar21 + lVar25 * 0x178;
    *(undefined4 *)(lVar46 + 0x88) = 0;
    *(undefined4 *)(lVar46 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar46 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar46 + 0x100) = 0;
    break;
  case 1:
    if (uVar83 < uVar44) {
      lVar46 = lVar21 + lVar25 * 0x178;
      fVar66 = fVar66 - fVar65;
      fVar79 = (*(float *)(lVar46 + 0x74) - fVar65) / fVar66;
      fVar66 = (*(float *)(lVar46 + 0x9c) - fVar65) / fVar66;
      *(float *)(lVar46 + 0x88) = fVar79;
      goto LAB_0354de84;
    }
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  case 2:
    if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar46 = lVar21 + lVar25 * 0x178;
    fVar79 = (*(float *)(lVar46 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar46 + 0x88) = fVar79;
    fVar66 = (*(float *)(lVar46 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
    *(float *)(lVar46 + 0xb0) = fVar66;
    *(float *)(lVar46 + 0xd8) = fVar66;
    *(float *)(lVar46 + 0x100) = fVar79;
    break;
  case 3:
    if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar46 = lVar21 + lVar25 * 0x178;
    fVar66 = *(float *)(lVar46 + 0x15c);
    fVar71 = (1.0 - (*(float *)(lVar46 + 0x84) + *(float *)(lVar46 + 0xd4)) / fVar66) * 0.5;
    fVar79 = *(float *)(lVar46 + 0x84) / fVar66 + fVar71;
    fVar71 = fVar71 + *(float *)(lVar46 + 0xd4) / fVar66;
    *(float *)(lVar46 + 0x88) = fVar79;
    *(float *)(lVar46 + 0xb0) = fVar71;
    *(float *)(lVar46 + 0x100) = fVar79;
    *(float *)(lVar46 + 0xd8) = fVar71;
  }
  if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar46 = lVar21 + lVar25 * 0x178;
  fVar79 = ABS(fVar47) * *(float *)(lVar46 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar46 + 0x5c) == '\0') && ((*(byte *)(lVar21 + lVar25 * 0x178 + 400) & 1) != 0)) {
    fVar79 = -fVar79;
  }
  lVar46 = lVar21 + lVar25 * 0x178;
  fVar66 = *(float *)(lVar46 + 0x88);
  fVar84 = *(float *)(lVar46 + 0x84);
  fVar71 = -2.1474836e+09;
  if (fVar84 != INFINITY) {
    fVar71 = (float)(int)fVar84;
  }
  fVar69 = *(float *)(lVar46 + 0xd4);
  fVar52 = *(float *)(lVar46 + 0xd8);
  fVar65 = -2.1474836e+09;
  if (fVar66 != INFINITY) {
    fVar65 = (float)(int)fVar66;
  }
  uVar61 = FUN_03591d3c(fVar84 - fVar71,fVar66 - fVar65);
  *(undefined4 *)(lVar46 + 0x84) = uVar61;
  if (*(uint *)(lVar21 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar52 = fVar52 - fVar65;
  *(float *)(lVar46 + 0x88) = fVar79;
  uVar61 = FUN_03591d3c(fVar84 - fVar71,fVar52);
  *(undefined4 *)(lVar21 + lVar25 * 0x178 + 0xac) = uVar61;
  if (*(uint *)(lVar21 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  fVar69 = fVar69 - fVar71;
  *(float *)(lVar21 + lVar25 * 0x178 + 0xb0) = fVar79;
  fVar71 = (float)FUN_03591d3c(fVar69,fVar52);
  *(float *)(lVar46 + 0xd4) = fVar71;
  if (*(uint *)(lVar21 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar46 + 0xd8) = fVar79;
  uVar61 = FUN_03591d3c(fVar69,fVar66 - fVar65);
  *(undefined4 *)(lVar21 + lVar25 * 0x178 + 0xfc) = uVar61;
  uVar44 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  *(float *)(lVar21 + lVar25 * 0x178 + 0x100) = fVar79;
LAB_0354e05c:
  if (((int)uVar83 < (int)unaff_x19[0x65]) && (iVar16 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar17 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
LAB_0354f0d4:
      lVar33 = lVar21 + lVar25 * 0x178;
      *(ulong *)(lVar33 + 0x70) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar33 + 0x70) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar33 + 0x70));
      *(float *)(lVar33 + 0x78) = fVar60 + *(float *)(lVar33 + 0x78);
      *(ulong *)(lVar33 + 0x98) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar33 + 0x98) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar33 + 0x98));
      *(float *)(lVar33 + 0xa0) = fVar60 + *(float *)(lVar33 + 0xa0);
      *(ulong *)(lVar33 + 0xc0) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar33 + 0xc0) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar33 + 0xc0));
      *(float *)(lVar33 + 200) = fVar60 + *(float *)(lVar33 + 200);
      *(ulong *)(lVar33 + 0xe8) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar33 + 0xe8) >> 0x20),
                    fVar80 + (float)*(undefined8 *)(lVar33 + 0xe8));
      *(float *)(lVar33 + 0xf0) = fVar60 + *(float *)(lVar33 + 0xf0);
      goto LAB_0354e184;
    }
    if (((int)uVar17 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar83 < uVar44) {
        if (*(uint *)(lVar21 + lVar25 * 0x178 + 0x68) == uVar5) goto LAB_0354f0d4;
        goto LAB_0354e0cc;
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
LAB_0354e0cc:
  if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac();
    DAT_0411f172 = '\x01';
    uVar44 = *(uint *)(lVar21 + 0x18);
  }
  puVar12 = PTR_DAT_03cbded8;
  uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar46 = lVar21 + lVar25 * 0x178;
  *(undefined8 *)(lVar46 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar46 + 0x78) = uVar61;
  if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  lVar46 = lVar21 + lVar25 * 0x178;
  *(undefined8 *)(lVar46 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar46 + 0xa0) = uVar61;
  uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar46 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar46 + 200) = uVar61;
  uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar46 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar46 + 0xf0) = uVar61;
  *(undefined1 *)(lVar33 + 0x194) = 0;
LAB_0354e184:
  if (iVar19 == 0) {
    pcVar35 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
    (*pcVar35)();
  }
  else if (iVar19 == 1) {
    pcVar35 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0354e1b4;
  }
LAB_0354e1d0:
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar33 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = lVar33 + lVar25 * 0x178;
  uVar63 = *(undefined8 *)(lVar33 + 0x11c);
  *(undefined8 *)(lVar33 + 0x11c) =
       CONCAT44(fVar68 + (float)((ulong)uVar63 >> 0x20),fVar80 + (float)uVar63);
  *(float *)(lVar33 + 0x124) = fVar60 + *(float *)(lVar33 + 0x124);
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar33 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = lVar33 + lVar25 * 0x178;
  *(ulong *)(lVar33 + 0x110) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar33 + 0x110) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar33 + 0x110));
  *(float *)(lVar33 + 0x118) = fVar60 + *(float *)(lVar33 + 0x118);
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar33 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = lVar33 + lVar25 * 0x178;
  *(ulong *)(lVar33 + 0x128) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar33 + 0x128) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar33 + 0x128));
  *(float *)(lVar33 + 0x130) = fVar60 + *(float *)(lVar33 + 0x130);
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar33 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar33 = lVar33 + lVar25 * 0x178;
  *(float *)(lVar33 + 0x134) = fVar80 + *(float *)(lVar33 + 0x134);
  *(ulong *)(lVar33 + 0x138) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar33 + 0x138) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar33 + 0x138));
  lVar33 = *plVar4;
  if ((lVar33 == 0) || (lVar46 = *(long *)(lVar33 + 0x38), lVar46 == 0)) goto LAB_0354fbf4;
  uVar44 = *(uint *)(lVar46 + 0x18);
  if (uVar44 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  lVar40 = lVar46 + lVar25 * 0x178;
  *(float *)(lVar40 + 0x150) = fVar68 + *(float *)(lVar40 + 0x150);
  *(ulong *)(lVar40 + 0x140) =
       CONCAT44(fVar80 + (float)((ulong)*(undefined8 *)(lVar40 + 0x140) >> 0x20),
                fVar80 + (float)*(undefined8 *)(lVar40 + 0x140));
  *(ulong *)(lVar40 + 0x148) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar40 + 0x148) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar40 + 0x148));
  if (uVar17 == uVar32) {
    uVar32 = *puVar2 - 1;
    if (uVar83 == uVar32) goto LAB_0354e3ec;
  }
  else {
    lVar33 = *(long *)(lVar33 + 0x50);
    if (lVar33 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar33 + 0x18) <= uVar32)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar40 = (long)(int)uVar32;
    lVar42 = lVar33 + lVar40 * 0x5c;
    fVar71 = fVar68 + *(float *)(lVar42 + 0x54);
    *(ulong *)(lVar42 + 0x4c) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar42 + 0x4c));
    *(float *)(lVar42 + 0x54) = fVar71;
    *(float *)(lVar42 + 0x58) = fVar80 + *(float *)(lVar42 + 0x58);
    if (uVar44 <= *(uint *)(lVar42 + 0x34))
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar61 = *(undefined4 *)(lVar46 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
    lVar33 = lVar33 + lVar40 * 0x5c;
    *(float *)(lVar33 + 0x70) = fVar71;
    *(undefined4 *)(lVar33 + 0x6c) = uVar61;
    lVar33 = *plVar4;
    if ((lVar33 == 0) || (lVar46 = *(long *)(lVar33 + 0x50), lVar46 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar46 + 0x18) <= uVar32)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = *(long *)(lVar33 + 0x38);
    if (lVar33 == 0) goto LAB_0354fbf4;
    uVar32 = *(uint *)(lVar46 + lVar40 * 0x5c + 0x40);
    if (*(uint *)(lVar33 + 0x18) <= uVar32)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar46 = lVar46 + lVar40 * 0x5c;
    *(undefined4 *)(lVar46 + 0x74) = *(undefined4 *)(lVar33 + (long)(int)uVar32 * 0x178 + 0x128);
    *(undefined4 *)(lVar46 + 0x78) = *(undefined4 *)(lVar46 + 0x4c);
    uVar32 = *puVar2 - 1;
LAB_0354e3ec:
    if (uVar83 == uVar32) {
      lVar33 = *plVar4;
      if ((lVar33 == 0) || (lVar46 = *(long *)(lVar33 + 0x50), lVar46 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar46 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar40 = lVar46 + lVar43 * 0x5c;
      fVar71 = fVar68 + *(float *)(lVar40 + 0x54);
      *(ulong *)(lVar40 + 0x4c) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar40 + 0x4c));
      *(float *)(lVar40 + 0x54) = fVar71;
      *(float *)(lVar40 + 0x58) = fVar80 + *(float *)(lVar40 + 0x58);
      lVar33 = *(long *)(lVar33 + 0x38);
      if (lVar33 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(lVar40 + 0x34))
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar61 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
      lVar46 = lVar46 + lVar43 * 0x5c;
      *(float *)(lVar46 + 0x70) = fVar71;
      *(undefined4 *)(lVar46 + 0x6c) = uVar61;
      lVar33 = *plVar4;
      if ((lVar33 == 0) || (lVar46 = *(long *)(lVar33 + 0x50), lVar46 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar46 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = *(long *)(lVar33 + 0x38);
      if (lVar33 == 0) goto LAB_0354fbf4;
      uVar32 = *(uint *)(lVar46 + lVar43 * 0x5c + 0x40);
      if (*(uint *)(lVar33 + 0x18) <= uVar32)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar46 = lVar46 + lVar43 * 0x5c;
      *(undefined4 *)(lVar46 + 0x74) = *(undefined4 *)(lVar33 + (long)(int)uVar32 * 0x178 + 0x128);
      *(undefined4 *)(lVar46 + 0x78) = *(undefined4 *)(lVar46 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar82 = FUN_026b82c4(uVar36,0);
  if (((((uVar82 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
    if (bVar11) {
      if (((uVar15 != 1) && ((int)uVar83 < (int)(*(uint *)(lVar21 + 0x18) - 1))) &&
         (((int)uVar83 < (int)*puVar2 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
        if (*(uint *)(lVar21 + 0x18) <= uVar15 - 2)
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        uVar7 = *(undefined2 *)(lVar21 + lVar22 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar82 = FUN_026b82c4(uVar7,0);
        if ((uVar82 & 1) != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar15)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          uVar7 = *(undefined2 *)(lVar21 + lVar22 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar82 = FUN_026b82c4(uVar7,0);
          if ((uVar82 & 1) != 0) goto LAB_0354e610;
        }
      }
    }
    else {
      if (uVar15 != 1) {
LAB_0354f144:
        bVar11 = false;
        goto LAB_0354e618;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar82 = FUN_026b81f8(uVar36,0);
      if ((uVar82 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar82 = FUN_026b63d8(uVar36,0);
        if (((uVar36 != 0x200b) && ((uVar82 & 1) == 0)) && (*puVar2 != 1)) goto LAB_0354f144;
      }
    }
    if (uVar83 == *puVar2 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar82 = FUN_026b82c4(uVar36,0);
      iVar19 = (int)fStack0000000000000124;
      if ((uVar82 & 1) == 0) goto LAB_0354e93c;
    }
    else {
LAB_0354e93c:
      iVar19 = uVar15 - 2;
    }
    lVar33 = *plVar4;
    if (lVar33 == 0) goto LAB_0354fbf4;
    lVar46 = *(long *)(lVar33 + 0x40);
    if (lVar46 == 0) goto LAB_0354fbf4;
    uVar32 = *(uint *)(lVar33 + 0x24);
    iVar20 = *(int *)(lVar46 + 0x18);
    if (iVar20 < (int)(uVar32 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar33 + 0x40),iVar20 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar33 = *plVar4;
      if (lVar33 == 0) goto LAB_0354fbf4;
    }
    lVar33 = *(long *)(lVar33 + 0x40);
    if (lVar33 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar33 + 0x18) <= uVar32)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar33 = lVar33 + (long)(int)uVar32 * 0x18;
    *(long **)(lVar33 + 0x20) = unaff_x19;
    *(float *)(lVar33 + 0x28) = fStack000000000000016c;
    *(int *)(lVar33 + 0x2c) = iVar19;
    *(int *)(lVar33 + 0x30) = (iVar19 - (int)fStack000000000000016c) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar33 = unaff_x19[0x6d];
    if (lVar33 == 0) goto LAB_0354fbf4;
    lVar46 = *(long *)(lVar33 + 0x50);
    *(int *)(lVar33 + 0x24) = *(int *)(lVar33 + 0x24) + 1;
    if (lVar46 == 0) goto LAB_0354fbf4;
    if (*(uint *)(lVar46 + 0x18) <= uVar17)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    lVar46 = lVar46 + lVar43 * 0x5c;
    bVar11 = false;
    iVar16 = iVar16 + 1;
    *(int *)(lVar46 + 0x30) = *(int *)(lVar46 + 0x30) + 1;
  }
  else {
    if (!bVar11) {
      fStack000000000000016c = (float)uVar83;
    }
    if (uVar83 == *puVar2 - 1) {
      lVar33 = *plVar4;
      if (lVar33 == 0) goto LAB_0354fbf4;
      lVar46 = *(long *)(lVar33 + 0x40);
      if (lVar46 == 0) goto LAB_0354fbf4;
      uVar32 = *(uint *)(lVar33 + 0x24);
      iVar19 = *(int *)(lVar46 + 0x18);
      if (iVar19 < (int)(uVar32 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar33 + 0x40),iVar19 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar33 = *plVar4;
        if (lVar33 == 0) goto LAB_0354fbf4;
      }
      lVar33 = *(long *)(lVar33 + 0x40);
      if (lVar33 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar32)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = lVar33 + (long)(int)uVar32 * 0x18;
      *(long **)(lVar33 + 0x20) = unaff_x19;
      *(float *)(lVar33 + 0x28) = fStack000000000000016c;
      *(uint *)(lVar33 + 0x2c) = uVar83;
      *(uint *)(lVar33 + 0x30) = uVar15 - (int)fStack000000000000016c;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar33 = unaff_x19[0x6d];
      if (lVar33 == 0) goto LAB_0354fbf4;
      lVar46 = *(long *)(lVar33 + 0x50);
      *(int *)(lVar33 + 0x24) = *(int *)(lVar33 + 0x24) + 1;
      if (lVar46 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar46 + 0x18) <= uVar17)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar46 = lVar46 + lVar43 * 0x5c;
      iVar16 = iVar16 + 1;
      *(int *)(lVar46 + 0x30) = *(int *)(lVar46 + 0x30) + 1;
    }
LAB_0354e610:
    bVar11 = true;
  }
LAB_0354e618:
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  uVar32 = *(uint *)(lVar33 + 0x18);
  if (uVar32 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar33 + lVar25 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar14) {
LAB_0354e660:
      if (uVar32 <= uVar15 - 2) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar46 = *unaff_x19;
      uVar61 = *(undefined4 *)(lVar33 + lVar22 + -0x330);
      uVar67 = *(undefined4 *)(lVar33 + lVar22 + -0x2f8);
LAB_0354ebc0:
      pcVar35 = *(code **)(lVar46 + 0x8d8);
LAB_0354ebc8:
      (*pcVar35)(fVar50,fStack0000000000000068,uStack000000000000006c,uVar61,fStack0000000000000104,
                 0,fStack0000000000000084,uVar67);
      puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar33 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar33 = *(long *)puVar12;
      }
LAB_0354ec1c:
      fVar48 = 0.0;
      bVar14 = false;
      fStack0000000000000104 = *(float *)(*(long *)(lVar33 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_0354eb28:
      bVar14 = false;
    }
  }
  else {
    lVar33 = lVar33 + lVar25 * 0x178;
    iVar19 = *(int *)(lVar33 + 0x68);
    *(int *)(lVar33 + 0x16c) = iVar37;
    if ((((int)unaff_x19[0x65] < (int)uVar83) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar19 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar82 = FUN_026b63d8(uVar36,0);
    if ((uVar36 != 0x200b) && ((uVar82 & 1) == 0)) {
      lVar33 = *plVar4;
      if ((lVar33 == 0) || (lVar46 = *(long *)(lVar33 + 0x38), lVar46 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar46 + 0x18) <= uVar83)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      fVar71 = *(float *)(lVar46 + lVar25 * 0x178 + 0x160);
      if (fVar48 <= fVar71) {
        fVar48 = fVar71;
      }
      if (fStack0000000000000100 <= ABS(fVar79)) {
        fStack0000000000000100 = ABS(fVar79);
      }
      if (iVar19 != iStack000000000000005c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar33 = *plVar4;
          if (lVar33 == 0) goto LAB_0354fbf4;
          lVar46 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar46 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar46 + 0x15a8);
      }
      lVar33 = *(long *)(lVar33 + 0x38);
      if (lVar33 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar83)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
      fVar66 = *(float *)(lVar33 + lVar25 * 0x178 + 0x14c);
      fVar71 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar66 = fVar66 + fVar48 * fVar71;
      iStack000000000000005c = iVar19;
      if (fVar66 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar66;
      }
    }
    if (!bVar14) {
      bVar14 = false;
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar18 < (int)uVar83)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
      if (uVar83 == uVar18) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar82 = FUN_026b97f8(uVar36,0);
        if ((uVar82 & 1) != 0) goto LAB_0354eb28;
      }
      if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar83)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = lVar33 + lVar25 * 0x178;
      fStack0000000000000084 = *(float *)(lVar33 + 0x160);
      fVar50 = *(float *)(lVar33 + 0x11c);
      bVar14 = fVar48 != 0.0;
      fVar71 = fStack0000000000000084;
      if (bVar14) {
        fVar71 = fVar48;
      }
      fVar48 = fVar71;
      uVar78 = *(undefined4 *)(lVar33 + 0x168);
      uStack000000000000006c = 0;
      fVar71 = fVar79;
      if (bVar14) {
        fVar71 = fStack0000000000000100;
      }
      fStack0000000000000068 = fStack0000000000000104;
      fStack0000000000000100 = fVar71;
    }
    if (*puVar2 == 1) {
      if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
        if (uVar83 < *(uint *)(lVar33 + 0x18)) {
          lVar33 = lVar33 + lVar25 * 0x178;
          lVar46 = *unaff_x19;
          uVar61 = *(undefined4 *)(lVar33 + 0x128);
          uVar67 = *(undefined4 *)(lVar33 + 0x160);
          goto LAB_0354ebc0;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((uVar83 == uVar30) || ((int)uVar18 <= (int)uVar83)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar82 = FUN_026b63d8(uVar36,0);
      if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
        lVar46 = lVar25;
        uVar32 = uVar83;
        if (uVar36 == 0x200b || (uVar82 & 1) != 0) {
          lVar46 = (long)(int)uVar18;
          uVar32 = uVar18;
        }
        if (uVar32 < *(uint *)(lVar33 + 0x18)) {
          lVar33 = lVar33 + lVar46 * 0x178;
          uVar61 = *(undefined4 *)(lVar33 + 0x128);
          uVar67 = *(undefined4 *)(lVar33 + 0x160);
          pcVar35 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354ebc8;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (!bVar1) {
      if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
        uVar32 = *(uint *)(lVar33 + 0x18);
        goto LAB_0354e660;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar83 < (int)(*puVar2 - 1)) {
      if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar15)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar82 = FUN_03567ad8(uVar78,*(undefined4 *)(lVar33 + lVar22),0);
      if ((uVar82 & 1) == 0) {
        if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
          if (uVar83 < *(uint *)(lVar33 + 0x18)) {
            lVar33 = lVar33 + lVar25 * 0x178;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar50,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar33 + 0x128),fStack0000000000000104,0,
                       fStack0000000000000084,*(undefined4 *)(lVar33 + 0x160));
            puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar33 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar33 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar33 = *(long *)puVar12;
            }
            goto LAB_0354ec1c;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
    }
    bVar14 = true;
  }
LAB_0354ec38:
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  if (*(uint *)(lVar33 + 0x18) <= uVar83)
  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if (lVar41 == 0) goto LAB_0354fbf4;
  uVar32 = *(uint *)(lVar33 + lVar25 * 0x178 + 400);
  fVar71 = (float)FUN_03776a30(lVar41 + 0x50,0);
  if ((uVar32 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar15 - 2)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      uVar61 = *(undefined4 *)(lVar33 + lVar22 + -0x330);
      fVar68 = *(float *)(lVar33 + lVar22 + -0x30c);
      pcVar35 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f21c:
      (*pcVar35)(fVar49,fStack000000000000009c,in_stack_00000098,uVar61,fVar51 * fVar71 + fVar68,0,
                 fVar51,fVar51);
    }
LAB_0354f250:
    bVar9 = false;
  }
  else {
    lVar33 = *plVar4;
    if ((lVar33 == 0) || (lVar46 = *(long *)(lVar33 + 0x38), lVar46 == 0)) goto LAB_0354fbf4;
    if (*(uint *)(lVar46 + 0x18) <= uVar83)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    *(int *)(lVar46 + lVar25 * 0x178 + 0x174) = iVar37;
    if ((((int)unaff_x19[0x65] < (int)uVar83) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar46 + lVar25 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar18 < (int)uVar83)) ||
       (bVar9 || !bVar1)) {
LAB_0354ed84:
      if (!bVar9) goto LAB_0354f250;
    }
    else {
      if (uVar83 == uVar18) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar82 = FUN_026b97f8(uVar36,0);
        if ((uVar82 & 1) != 0) goto LAB_0354ed84;
        lVar33 = *plVar4;
        if (lVar33 == 0) goto LAB_0354fbf4;
      }
      lVar33 = *(long *)(lVar33 + 0x38);
      if (lVar33 == 0) goto LAB_0354fbf4;
      if (*(uint *)(lVar33 + 0x18) <= uVar83)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = lVar33 + lVar25 * 0x178;
      fStack000000000000004c = *(float *)(lVar33 + 0x60);
      fVar62 = *(float *)(lVar33 + 0x14c);
      fVar49 = *(float *)(lVar33 + 0x11c);
      fVar51 = *(float *)(lVar33 + 0x160);
      fStack000000000000009c = fVar71 * fVar51 + fVar62;
      in_stack_00000098 = 0.0;
    }
    uVar32 = *puVar2;
    if (uVar32 == 1) {
      if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
        uVar32 = *(uint *)(lVar33 + 0x18);
LAB_0354ef0c:
        if (uVar83 < uVar32) {
          lVar33 = lVar33 + lVar25 * 0x178;
          lVar46 = *unaff_x19;
          uVar61 = *(undefined4 *)(lVar33 + 0x128);
          fVar68 = *(float *)(lVar33 + 0x14c);
LAB_0354ef24:
          pcVar35 = *(code **)(lVar46 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if (uVar83 == uVar30) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar82 = FUN_026b63d8(uVar36,0);
      if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
        uVar32 = *(uint *)(lVar33 + 0x18);
        if (uVar36 == 0x200b || (uVar82 & 1) != 0) goto LAB_0354f1e0;
LAB_0354f1f0:
        lVar46 = lVar25;
        if (uVar83 < uVar32) {
LAB_0354f1f8:
          lVar33 = lVar33 + lVar46 * 0x178;
          fVar68 = *(float *)(lVar33 + 0x14c);
          uVar61 = *(undefined4 *)(lVar33 + 0x128);
          pcVar35 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_0354f21c;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    if ((int)uVar83 < (int)uVar32) {
      lVar33 = *plVar4;
      if ((lVar33 != 0) && (lVar46 = *(long *)(lVar33 + 0x38), lVar46 != 0)) {
        if (uVar15 < *(uint *)(lVar46 + 0x18)) {
          if (*(float *)(lVar46 + lVar22 + -0x108) == fStack000000000000004c) {
            fVar66 = *(float *)(lVar46 + lVar22 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar82 = FUN_03567bac(fVar68 + fVar66,fVar62,0);
            if ((uVar82 & 1) != 0) {
              uVar32 = *puVar2;
              goto LAB_0354f010;
            }
            lVar33 = *plVar4;
            if (lVar33 == 0) goto LAB_0354fbf4;
          }
          lVar33 = *(long *)(lVar33 + 0x38);
          if (lVar33 != 0) {
            uVar32 = *(uint *)(lVar33 + 0x18);
            if ((int)uVar83 <= (int)uVar18) goto LAB_0354f1f0;
LAB_0354f1e0:
            lVar46 = (long)(int)uVar18;
            if (uVar18 < uVar32) goto LAB_0354f1f8;
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          }
          goto LAB_0354fbf4;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
LAB_0354f010:
    if ((int)uVar83 < (int)uVar32) {
      iVar19 = FUN_036d3364(lVar41,0);
      if (*(uint *)(lVar21 + 0x18) <= uVar15)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = *(long *)(lVar21 + lVar22 + -0x130);
      if (lVar33 == 0) goto LAB_0354fbf4;
      iVar20 = FUN_036d3364(lVar33,0);
      if (iVar19 != iVar20) {
        if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
          uVar32 = *(uint *)(lVar33 + 0x18);
          goto LAB_0354ef0c;
        }
        goto LAB_0354fbf4;
      }
    }
    if (!bVar1) {
      if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
        if (uVar15 - 2 < *(uint *)(lVar33 + 0x18)) {
          lVar46 = *unaff_x19;
          uVar61 = *(undefined4 *)(lVar33 + lVar22 + -0x330);
          fVar68 = *(float *)(lVar33 + lVar22 + -0x30c);
          goto LAB_0354ef24;
        }
        goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      }
      goto LAB_0354fbf4;
    }
    bVar9 = true;
  }
  if ((*plVar4 == 0) || (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 == 0)) goto LAB_0354fbf4;
  uVar32 = (uint)*(undefined8 *)(lVar33 + 0x18);
  if (uVar32 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
  if ((*(byte *)(lVar33 + lVar25 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar13) {
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,
                 fStack00000000000000d0,fStack00000000000000d4,in_stack_000000c0);
    }
LAB_0354f604:
    bVar13 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar83) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar33 + lVar25 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar13) {
LAB_0354f400:
      if (uVar32 <= uVar83) goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar33 = lVar33 + lVar25 * 0x178;
      fVar71 = *(float *)(lVar33 + 0x128);
      fVar65 = *(float *)(lVar33 + 0x188);
      uVar23 = *(undefined8 *)(lVar33 + 0x17c);
      fVar60 = *(float *)(lVar33 + 0x184);
      uVar63 = *(undefined8 *)(lVar33 + 0x184);
      fVar69 = *(float *)(lVar33 + 0x18c);
      fVar68 = *(float *)(lVar33 + 0x11c);
      fVar66 = *(float *)(lVar33 + 0x148);
      fVar84 = *(float *)(lVar33 + 0x150);
      in_stack_00000188 = uVar23;
      fStack0000000000000190 = fVar60;
      fStack0000000000000194 = fVar65;
      in_stack_00000198 = fVar69;
      in_stack_000001a0 = in_stack_000017c0;
      in_stack_000001a8 = in_stack_000017c8;
      in_stack_000001b0 = in_stack_000017d0;
      uVar82 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
      lVar33 = *(long *)OVRPlugin_Mesh_TypeInfo;
      if ((uVar82 & 1) == 0) {
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar33);
        }
        fVar71 = fVar71 + (float)in_stack_000017c8;
        fVar68 = fVar68 - (float)((ulong)in_stack_000017c0 >> 0x20);
        fVar66 = fVar66 + (float)((ulong)in_stack_000017c8 >> 0x20);
        if (fVar68 <= fStack00000000000000e0) {
          fStack00000000000000e0 = fVar68;
        }
        if (fVar84 - in_stack_000017d0 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar84 - in_stack_000017d0;
        }
        if (fStack00000000000000d0 <= fVar71) {
          fStack00000000000000d0 = fVar71;
        }
        if (fStack00000000000000d4 <= fVar66) {
          fStack00000000000000d4 = fVar66;
        }
      }
      else {
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar33);
        }
        fVar68 = (fVar68 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
        if (fVar84 <= fStack00000000000000e4) {
          fStack00000000000000e4 = fVar84;
        }
        if (fStack00000000000000d4 <= fVar66) {
          fStack00000000000000d4 = fVar66;
        }
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,fVar68,
                   fStack00000000000000d4,in_stack_000000c0);
        fStack00000000000000e4 = fVar84 - fVar69;
        fStack00000000000000d0 = fVar71 + fVar60;
        in_stack_000000c0 = 0;
        fStack00000000000000d4 = fVar66 + fVar65;
        fStack00000000000000e0 = fVar68;
        in_stack_000017c0 = uVar23;
        in_stack_000017c8 = uVar63;
        in_stack_000017d0 = fVar69;
      }
      if (((*puVar2 == 1) || (uVar83 == uVar30)) || (((int)uVar18 <= (int)uVar83 || (!bVar1)))) {
        (**(code **)(*unaff_x19 + 0x8e8))
                  (fStack00000000000000e0,fStack00000000000000e4,in_stack_000000c0,
                   fStack00000000000000d0,fStack00000000000000d4,in_stack_000000c0);
        goto LAB_0354f604;
      }
      bVar13 = true;
    }
    else {
      if ((((uVar36 != 0xd) && ((uVar36 & 0xfffe) != 10)) && ((int)uVar83 <= (int)uVar18)) &&
         (bVar1)) {
        if (uVar83 == uVar18) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar82 = FUN_026b97f8(uVar36,0);
          if ((uVar82 & 1) != 0) goto LAB_0354f374;
        }
        puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
        lVar46 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if (*(int *)(lVar46 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar46 = *(long *)puVar12;
        }
        if ((*plVar4 != 0) && (lVar33 = *(long *)(*plVar4 + 0x38), lVar33 != 0)) {
          uVar32 = (uint)*(undefined8 *)(lVar33 + 0x18);
          if (uVar83 < uVar32) {
            lVar46 = *(long *)(lVar46 + 0xb8);
            lVar41 = lVar33 + lVar25 * 0x178;
            in_stack_000017c8 = *(undefined8 *)(lVar41 + 0x184);
            in_stack_000017c0 = *(undefined8 *)(lVar41 + 0x17c);
            fStack00000000000000e0 = *(float *)(lVar46 + 0x1598);
            fStack00000000000000e4 = *(float *)(lVar46 + 0x159c);
            in_stack_000017d0 = *(float *)(lVar41 + 0x18c);
            fStack00000000000000d0 = *(float *)(lVar46 + 0x15a0);
            fStack00000000000000d4 = *(float *)(lVar46 + 0x15a4);
            in_stack_000000c0 = 0;
            goto LAB_0354f400;
          }
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
        }
        goto LAB_0354fbf4;
      }
LAB_0354f374:
      bVar13 = false;
    }
  }
  uVar83 = *puVar2;
  fStack0000000000000124 = (float)((int)fStack0000000000000124 + 1);
  lVar22 = lVar22 + 0x178;
  bVar1 = (int)uVar83 <= (int)uVar15;
  uVar32 = uVar17;
  uVar15 = uVar15 + 1;
  if (bVar1) goto LAB_0354f7d0;
  goto LAB_0354d7c0;
LAB_0354f7d0:
  lVar21 = *plVar4;
  if (lVar21 == 0) goto LAB_0354fbf4;
  iVar37 = uVar17 + 1;
  plVar45 = (long *)OVRPlugin_Media_TypeInfo;
LAB_0354f7f4:
  *(uint *)(lVar21 + 0x18) = uVar83;
  lVar22 = unaff_x19[0xd4];
  *(int *)(lVar21 + 0x2c) = iVar37;
  if ((int)uVar83 < 1 || iVar16 == 0) {
    iVar16 = 1;
  }
  *(int *)(lVar21 + 0x1c) = (int)lVar22;
  *(int *)(lVar21 + 0x24) = iVar16;
  *(int *)(lVar21 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar82 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar82 & 1) == 0)) {
LAB_0354d0cc:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar21 = unaff_x19[0xdb];
  if (lVar21 != 0) {
    (**(code **)(lVar21 + 0x18))
              (*(undefined8 *)(lVar21 + 0x40),*plVar4,*(undefined8 *)(lVar21 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*plVar4 == 0) || (lVar21 = *(long *)(*plVar4 + 0x60), lVar21 == 0)) goto LAB_0354fbf4;
    if (*(int *)(*plVar45 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar21 + 0x18) == 0)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596b20(lVar21 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
      if (*(int *)(lVar21 + 0x18) == 0) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
          if (*(int *)(lVar21 + 0x18) == 0)
          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0))
            {
              if (*(int *)(lVar21 + 0x18) == 0)
              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar21 = *(long *)(unaff_x19[0x6d] + 0x60), lVar21 != 0)) {
                  if (*(int *)(lVar21 + 0x18) == 0)
                  goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      lVar21 = *plVar4;
                      if (lVar21 != 0) {
                        lVar33 = 0;
                        lVar22 = 0;
                        do {
                          uVar82 = lVar22 + 1;
                          if ((long)*(int *)(lVar21 + 0x34) <= (long)uVar82) goto LAB_0354d0cc;
                          lVar21 = *(long *)(lVar21 + 0x60);
                          if (lVar21 == 0) break;
                          if (*(int *)(*plVar45 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (*(uint *)(lVar21 + 0x18) <= uVar82)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          FUN_03596a20(lVar21 + lVar33 + 0x70,0);
                          lVar21 = unaff_x19[0xe1];
                          if (lVar21 == 0) break;
                          if (*(uint *)(lVar21 + 0x18) <= uVar82)
                          goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                          uVar63 = *(undefined8 *)(lVar21 + lVar22 * 8 + 0x28);
                          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar26 = FUN_036d35a8(uVar63,0,0);
                          if ((uVar26 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                              if ((*plVar4 == 0) ||
                                 (lVar21 = *(long *)(*plVar4 + 0x60), lVar21 == 0)) break;
                              if (*(int *)(*plVar45 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              if (*(uint *)(lVar21 + 0x18) <= uVar82)
                              goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                              FUN_03596b20(lVar21 + lVar33 + 0x70,1,0);
                            }
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_0359d5ac(lVar21,0);
                            if ((*plVar4 == 0) || (lVar46 = *(long *)(*plVar4 + 0x60), lVar46 == 0))
                            break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar21 == 0) break;
                            FUN_036a460c(lVar21,*(undefined8 *)(lVar46 + lVar33 + 0x80),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_0359d5ac(lVar21,0);
                            if ((*plVar4 == 0) || (lVar46 = *(long *)(*plVar4 + 0x60), lVar46 == 0))
                            break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar21 == 0) break;
                            FUN_036a4810(lVar21,*(undefined8 *)(lVar46 + lVar33 + 0x98),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_0359d5ac(lVar21,0);
                            if ((*plVar4 == 0) || (lVar46 = *(long *)(*plVar4 + 0x60), lVar46 == 0))
                            break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar21 == 0) break;
                            FUN_036a48bc(lVar21,*(undefined8 *)(lVar46 + lVar33 + 0xa0),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if (lVar21 == 0) break;
                            lVar21 = FUN_0359d5ac(lVar21,0);
                            if ((*plVar4 == 0) || (lVar46 = *(long *)(*plVar4 + 0x60), lVar46 == 0))
                            break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            if (lVar21 == 0) break;
                            FUN_036a4e24(lVar21,*(undefined8 *)(lVar46 + lVar33 + 0xa8),0);
                            lVar21 = unaff_x19[0xe1];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar82)
                            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
                            lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
                            if ((lVar21 == 0) || (lVar21 = FUN_0359d5ac(lVar21,0), lVar21 == 0))
                            break;
                            FUN_036aa280(lVar21,0);
                          }
                          lVar21 = *plVar4;
                          lVar22 = lVar22 + 1;
                          lVar33 = lVar33 + 0x50;
                        } while (lVar21 != 0);
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


