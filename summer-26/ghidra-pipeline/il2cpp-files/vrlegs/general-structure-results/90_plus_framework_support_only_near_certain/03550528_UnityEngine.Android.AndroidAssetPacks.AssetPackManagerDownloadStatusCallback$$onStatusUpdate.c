/*
FUNCTION_NAME: UnityEngine.Android.AndroidAssetPacks.AssetPackManagerDownloadStatusCallback$$onStatusUpdate
ENTRY_POINT: 03550528
PROGRAM: vrlegs-libil2cpp.so
SCORE: 195
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_Android_AndroidAssetPacks_AssetPackManagerDownloadStatusCallback__onStatusUpdate
               (float param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  ulong uVar30;
  undefined1 uVar31;
  char cVar32;
  uint uVar33;
  undefined4 *puVar34;
  long lVar35;
  long lVar36;
  float *pfVar37;
  code *pcVar38;
  uint uVar39;
  float *pfVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar46;
  int unaff_w23;
  long *unaff_x24;
  int unaff_w25;
  long *plVar47;
  long *plVar48;
  long *unaff_x28;
  long lVar49;
  uint uVar50;
  undefined8 *unaff_x29;
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
  ulong uVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  ulong uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float unaff_s12;
  float fVar77;
  float unaff_s13;
  float fVar78;
  float fVar79;
  float unaff_s14;
  undefined4 uVar80;
  float unaff_s15;
  float fVar81;
  float fVar82;
  float fVar83;
  uint uStack0000000000000028;
  int iStack0000000000000034;
  ulong uStack0000000000000038;
  int iStack000000000000006c;
  float fStack0000000000000070;
  uint uStack0000000000000074;
  float fStack000000000000008c;
  float in_stack_00000098;
  float fStack000000000000009c;
  uint in_stack_000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
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
  long *in_stack_00000160;
  int iStack000000000000016c;
  undefined8 in_stack_00000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001a0;
  uint in_stack_000008a0;
  undefined4 in_stack_000008a4;
  undefined4 in_stack_000008b0;
  undefined4 uVar84;
  undefined4 in_stack_00000c1c;
  undefined8 in_stack_00000c20;
  long in_stack_000016f8;
  uint in_stack_0000178c;
  uint uVar85;
  undefined8 in_stack_000017b0;
  undefined8 in_stack_000017b8;
  float in_stack_000017c0;
  undefined8 in_stack_000017c8;
  char in_stack_000017d4;
  float fVar86;
  uint in_stack_000017dc;
  
  if (*unaff_x21 != 0) {
    fVar51 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
    if (*unaff_x21 != 0) {
      fVar52 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
      *(undefined8 *)((long)unaff_x19 + 0x2ac) = 0;
      *(undefined4 *)(unaff_x19 + 200) = 0;
      unaff_x19[0x81] = 0;
      uVar84 = 0;
      FUN_0209aa94(unaff_x19 + 0x82,&stack0x00000c18,*unaff_x20);
      *(undefined1 *)(unaff_x19 + 0x86) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x494) = 0;
      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x324);
      *(undefined8 *)((long)unaff_x19 + 0x49c) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
      lVar23 = *unaff_x24;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar23 = *unaff_x24;
      }
      lVar24 = unaff_x19[0x6d];
      uVar67 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
      unaff_x19[0x95] = 0;
      unaff_x19[0x9a] = 0;
      *(undefined1 *)((long)unaff_x19 + 0x2c4) = 0;
      lVar23 = NEON_rev64(uVar67,4);
      *(undefined4 *)((long)unaff_x19 + 0x2e4) = 0xffffffff;
      unaff_x19[0x99] = lVar23;
      *(undefined4 *)(unaff_x19 + 0x96) = 0;
      if ((lVar24 != 0) && (*(long *)(lVar24 + 0x58) != 0)) {
        uVar22 = (int)unaff_x19[0x67] - 1;
        uVar85 = *(int *)(*(long *)(lVar24 + 0x58) + 0x18) - 1;
        if ((int)uVar22 <= (int)uVar85) {
          uVar85 = uVar22;
        }
        uVar3 = 0;
        if (-1 < (int)uVar22) {
          uVar3 = uVar85;
        }
        FUN_035a02f4(lVar24,0);
        fVar53 = *(float *)(unaff_x19 + 0x68);
        *(undefined4 *)(unaff_x19 + 0x6c) = 0xbf800000;
        fVar66 = *(float *)((long)unaff_x19 + 0x344);
        unaff_x19[0x6a] = 0;
        lVar23 = *unaff_x24;
        fVar54 = *(float *)((long)unaff_x19 + 0x34c);
        fVar81 = *(float *)(unaff_x19 + 0x6b);
        fVar71 = *(float *)((long)unaff_x19 + 0x35c);
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *unaff_x24;
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
          fVar86 = 0.0;
          *(undefined1 *)((long)unaff_x29 + 0xf34) = 0;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
          *(undefined1 *)((long)unaff_x19 + 0x2da) = 0;
          FUN_0359f73c(&stack0x000017c8,0xffffffff,0,0);
          FUN_0358c4f0();
          FUN_0358c4f0();
          FUN_0358c4f0();
          FUN_0358c4f0();
          FUN_0358c4f0();
          FUN_0209aa1c(*(long *)(*unaff_x24 + 0xb8) + 0x11f0,
                       *(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
          fVar63 = DAT_00d38d28;
          fVar64 = DAT_00d38938;
          uVar85 = 0;
          lVar23 = unaff_x19[0x8f];
          if (lVar23 != 0) {
            puVar1 = (uint *)((long)unaff_x19 + 0x494);
            plVar48 = unaff_x19 + 0xc9;
            uVar22 = unaff_w23 - 1;
            lVar24 = (long)unaff_x19 + 0x434;
            param_1 = param_1 - (fVar51 - fVar52);
            fStack000000000000015c = 0.0;
            if (fVar81 <= 0.0) {
              fVar81 = 0.0;
            }
            if (fVar71 <= 0.0) {
              fVar71 = 0.0;
            }
            fVar51 = (unaff_s14 / (float)unaff_w25) * unaff_s15 * unaff_s13;
            uVar28 = (ulong)(uint)fVar51;
            plVar2 = unaff_x19 + 0x6d;
            fVar81 = fVar81 + DAT_00d3879c;
            uVar65 = (ulong)(uint)fVar81;
            fVar68 = fVar71 + DAT_00d3879c;
            fVar52 = unaff_s12 * DAT_00d38d28 * unaff_s13;
            iStack0000000000000034 = 0;
            bVar9 = false;
            iStack000000000000016c = 0;
            bVar8 = true;
            bVar10 = 1;
            fStack00000000000000fc = fVar81;
LAB_0355087c:
            fVar72 = (float)uVar28;
            if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar85) {
LAB_0355459c:
              fVar51 = (float)uVar65;
              if (((char)unaff_x19[0x47] != '\0') &&
                 (fVar51 = DAT_00d389f8,
                 DAT_00d389f8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48)))
              {
                fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
                fVar52 = *(float *)((long)unaff_x19 + 0x254);
                if ((fVar51 < fVar52) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                {
                  if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
                    *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                  }
                  fVar53 = (*(float *)((long)unaff_x19 + 0x23c) - fVar51) * 0.5;
                  if (fVar53 <= DAT_00d38b84) {
                    fVar53 = DAT_00d38b84;
                  }
                  *(float *)(unaff_x19 + 0x48) = fVar51;
                  fVar53 = (fVar51 + fVar53) * 20.0 + 0.5;
                  fVar51 = DAT_00d38e60;
                  if (fVar53 != INFINITY) {
                    fVar51 = (float)(int)fVar53 / 20.0;
                  }
                  if (fVar52 <= fVar51) {
                    fVar51 = fVar52;
                  }
LAB_03554658:
                  *(float *)((long)unaff_x19 + 0x1e4) = fVar51;
                  return;
                }
              }
              *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
              puVar11 = PTR_DAT_03cbdf88;
              if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                uVar67 = FUN_0276793c((long)unaff_x19 + 0x244,0);
                uVar25 = FUN_0277fa90((long)unaff_x19 + 0x1e4,0);
                uVar67 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar67,
                                      *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar25,0);
                if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
                }
                FUN_0367a6ec(uVar67,0);
              }
              puVar12 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              if ((*puVar1 == 0) || ((*puVar1 == 1 && (in_stack_000017dc == 3)))) {
                (**(code **)(*unaff_x19 + 0x918))();
                goto LAB_03554724;
              }
              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar23 = *(long *)puVar12;
              }
              plVar48 = (long *)OVRPlugin_Media_TypeInfo;
              lVar23 = **(long **)(lVar23 + 0xb8);
              if (lVar23 == 0) goto LAB_035574b8;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_035575f4;
              iVar16 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
              if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0))
              goto LAB_035574b8;
              if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
              FUN_035968e8(lVar23 + 0x20,0,0);
              if (DAT_0411f172 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbded8);
                DAT_0411f172 = '\x01';
              }
              iVar19 = (int)unaff_x19[0x4e];
              fStack00000000000000fc = **(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
              uStack00000000000000e8 =
                   *(undefined8 *)(*(float **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
              lVar23 = unaff_x19[0xe3];
              uVar67 = uStack00000000000000e8;
              fStack00000000000000c4 = fStack00000000000000fc;
              if (iVar19 < 0x401) {
                if (iVar19 == 0x100) {
                  if (lVar23 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_035575f4;
                  uVar67 = *(undefined8 *)(lVar23 + 0x30);
                  if ((int)unaff_x19[0x5c] == 5) {
                    if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x58), lVar24 == 0))
                    goto LAB_035574b8;
                    if (*(uint *)(lVar24 + 0x18) <= uVar3) goto LAB_035575f4;
                    fVar51 = *(float *)(lVar24 + (long)(int)uVar3 * 0x14 + 0x28);
                  }
                  else {
                    fVar51 = *(float *)(unaff_x19 + 0x97);
                  }
                  fStack00000000000000c4 = fVar53 + 0.0 + *(float *)(lVar23 + 0x2c);
                  fVar51 = (0.0 - fVar51) - fVar66;
                }
                else if (iVar19 == 0x200) {
                  if (lVar23 == 0) goto LAB_035574b8;
                  if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                  goto LAB_035575f4;
                  fStack00000000000000c4 =
                       (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                  uVar67 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar23 + 0x24) +
                                    (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                  if ((int)unaff_x19[0x5c] == 5) {
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                    goto LAB_035574b8;
                    if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_035575f4;
                    lVar23 = lVar23 + (long)(int)uVar3 * 0x14;
                    fStack00000000000000c4 = fVar53 + 0.0 + fStack00000000000000c4;
                    fVar51 = ((fVar66 + *(float *)(lVar23 + 0x28) + *(float *)(lVar23 + 0x30)) -
                             fVar54) * -0.5 + 0.0;
                  }
                  else {
                    fStack00000000000000c4 = fVar53 + 0.0 + fStack00000000000000c4;
                    fVar51 = ((fVar66 + *(float *)(unaff_x19 + 0x97) + fVar86) - fVar54) * -0.5 +
                             0.0;
                  }
                }
                else {
                  if (iVar19 != 0x400) goto LAB_03554c4c;
                  if (lVar23 == 0) goto LAB_035574b8;
                  if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
                  uVar67 = *(undefined8 *)(lVar23 + 0x24);
                  if ((int)unaff_x19[0x5c] == 5) {
                    if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x58), lVar24 == 0))
                    goto LAB_035574b8;
                    if (*(uint *)(lVar24 + 0x18) <= uVar3) goto LAB_035575f4;
                    fVar86 = *(float *)(lVar24 + (long)(int)uVar3 * 0x14 + 0x30);
                  }
                  fStack00000000000000c4 = fVar53 + 0.0 + *(float *)(lVar23 + 0x20);
                  fVar51 = fVar54 + (0.0 - fVar86);
                }
LAB_03554c3c:
                uVar67 = CONCAT44((float)((ulong)uVar67 >> 0x20) + 0.0,(float)uVar67 + fVar51);
              }
              else if (iVar19 == 0x800) {
                if (lVar23 == 0) goto LAB_035574b8;
                if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                goto LAB_035575f4;
                fVar51 = fVar53 + 0.0 +
                         (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                uVar67 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,((float)*(undefined8 *)(lVar23 + 0x24) +
                                      (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + 0.0);
                fStack00000000000000c4 = fVar51;
              }
              else {
                if (iVar19 == 0x1000) {
                  if (lVar23 != 0) {
                    if ((*(int *)(lVar23 + 0x18) != 1) && (*(int *)(lVar23 + 0x18) != 0)) {
                      uVar67 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar23 + 0x24) +
                                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                      fStack00000000000000c4 =
                           fVar53 + 0.0 +
                           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                      fVar51 = 0.0 - ((fVar66 + *(float *)(unaff_x19 + 0x9d) +
                                      *(float *)(unaff_x19 + 0x9c)) - fVar54) * 0.5;
                      goto LAB_03554c3c;
                    }
                    goto LAB_035575f4;
                  }
                  goto LAB_035574b8;
                }
                if (iVar19 == 0x2000) {
                  if (lVar23 == 0) goto LAB_035574b8;
                  if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                  goto LAB_035575f4;
                  fVar51 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fVar66) - fVar54) * 0.5;
                  uVar67 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar23 + 0x24) +
                                        (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + fVar51);
                  fStack00000000000000c4 =
                       fVar53 + 0.0 + (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                }
              }
LAB_03554c4c:
              if (unaff_x19[0xe5] != 0) {
                uVar25 = FUN_03912334(unaff_x19[0xe5],0);
                if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)puVar11);
                }
                uVar28 = FUN_036d35a8(uVar25,0,0);
                lVar23 = FUN_0357f060();
                if (lVar23 != 0) {
                  FUN_036df824(lVar23,0);
                  *(float *)(unaff_x19 + 0xe2) = fVar51;
                  if (unaff_x19[0xe5] != 0) {
                    iVar19 = FUN_039117fc(unaff_x19[0xe5],0);
                    if (unaff_x19[0xe5] != 0) {
                      fVar52 = (float)FUN_03911954(unaff_x19[0xe5],0);
                      uVar84 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                      FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                      if (*(int *)(*(long *)OVRPlugin_Mesh_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78(*(long *)OVRPlugin_Mesh_TypeInfo);
                      }
                      if (DAT_0412df1c == '\0') {
                        FUN_01ab69ac(OVRPlugin_Mesh_TypeInfo);
                        DAT_0412df1c = '\x01';
                      }
                      puVar11 = OVRPlugin_Mesh_TypeInfo;
                      lVar23 = *(long *)OVRPlugin_Mesh_TypeInfo;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar23 = *(long *)puVar11;
                      }
                      puVar34 = *(undefined4 **)(lVar23 + 0xb8);
                      uVar65 = (ulong)(uint)puVar34[1];
                      uVar26 = (ulong)(uint)puVar34[2];
                      uVar69 = (ulong)(uint)puVar34[3];
                      FUN_035683a4(*puVar34,uVar65,uVar26,uVar69,&stack0x000017b0,0x4000ffff,0);
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      lVar23 = *plVar2;
                      if (lVar23 != 0) {
                        uVar85 = *puVar1;
                        if ((int)uVar85 < 1) {
                          iStack00000000000000d4 = 0;
                          iVar16 = 0;
                          goto LAB_03556f00;
                        }
                        lVar23 = *(long *)(lVar23 + 0x38);
                        fVar51 = ABS(fVar51);
                        fVar53 = 1.0;
                        if ((uVar28 & 1) == 0) {
                          fVar53 = fVar51;
                        }
                        if (lVar23 != 0) {
                          bVar14 = false;
                          bVar9 = false;
                          _iStack0000000000000128 = 0;
                          bVar8 = false;
                          iStack00000000000000d4 = 0;
                          uStack0000000000000028 = 0;
                          fStack0000000000000158 = 0.0;
                          iStack000000000000006c = 0;
                          lVar24 = 0x2e0;
                          fVar63 = 0.0;
                          fVar54 = 0.0;
                          fStack00000000000000c8 = fStack00000000000000d8;
                          fStack0000000000000104 =
                               *(float *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8)
                                         + 0x15a8);
                          fStack00000000000000d0 = fStack00000000000000dc;
                          fStack0000000000000070 = fStack00000000000000dc;
                          fStack000000000000009c = fStack00000000000000dc;
                          fStack0000000000000100 = 0.0;
                          fStack000000000000008c = 0.0;
                          fVar64 = 0.0;
                          fVar71 = 0.0;
                          uStack0000000000000038 = 0;
                          uStack0000000000000074 = in_stack_000000c0;
                          in_stack_00000098 = (float)in_stack_000000c0;
                          uVar22 = 1;
                          fVar66 = fStack00000000000000d8;
                          fVar81 = fStack00000000000000d8;
                          uVar15 = 0;
                          goto LAB_03554e78;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_035574b8;
            }
            if (*(uint *)(lVar23 + 0x18) <= uVar85) goto LAB_035575f4;
            uVar15 = *(uint *)(lVar23 + (long)(int)uVar85 * 0xc + 0x20);
            if (uVar15 == 0) goto LAB_0355459c;
            if (5 < iStack000000000000016c) {
              uVar67 = FUN_0276793c(&stack0x000017dc,0);
              uVar25 = FUN_0276793c(&stack0x000017a8,0);
              uVar67 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar67,
                                    *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar25,0);
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
              }
              FUN_0367ae18(uVar67,0);
              in_stack_000017c8 = CONCAT44(3,*puVar1);
            }
            if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (uVar15 != 0x3c)) {
              if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
              goto LAB_035574b8;
              if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
              lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
              *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar23 + 0x2c);
              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar23 + 0x58);
              unaff_x19[0x20] = *(long *)(lVar23 + 0x38);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
LAB_035509d4:
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_035574b8;
              uVar17 = *puVar1;
              if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_035575f4;
              lVar49 = (long)(int)uVar17;
              cVar32 = *(char *)(lVar23 + lVar49 * 0x178 + 0x5c);
              *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
              lVar36 = unaff_x19[0x24];
              if ((uint)in_stack_000017c8 == uVar17) {
                uVar15 = (uint)((ulong)in_stack_000017c8 >> 0x20);
                *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                if (uVar15 == 0x2026) {
                  *(long *)(lVar23 + lVar49 * 0x178 + 0x30) = unaff_x19[0xca];
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)(lVar23 + 0x2c) = 0;
                  *(long *)(lVar23 + 0x38) = unaff_x19[0xcb];
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *(long *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x50) = unaff_x19[0xcc];
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  uVar17 = *puVar1;
                  if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_035575f4;
                  bVar14 = true;
                  *(int *)(lVar23 + (long)(int)uVar17 * 0x178 + 0x58) = (int)unaff_x19[0xcd];
                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                  in_stack_000017c8 = CONCAT44(3,uVar17 + 1);
                }
                else if (uVar15 == 3) {
                  if ((*unaff_x21 == 0) || (lVar27 = FUN_03568ac0(*unaff_x21,0), lVar27 == 0))
                  goto LAB_035574b8;
                  uVar84 = 3;
                  FUN_0219b634(lVar27,&stack0x00000c18,&stack0x000008a0,
                               *(undefined8 *)OVRPlugin_Hand_TypeInfo);
                  if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_035575f4;
                  *(ulong *)(lVar23 + lVar49 * 0x178 + 0x30) =
                       CONCAT44(in_stack_000008a4,in_stack_000008a0);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  uVar17 = *(uint *)((long)unaff_x19 + 0x494);
                  bVar14 = true;
                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                }
                else {
                  bVar14 = true;
                }
              }
              else {
                bVar14 = false;
              }
              if (((int)uVar17 < *(int *)((long)unaff_x19 + 0x324)) && (uVar15 != 3)) {
                if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                goto LAB_035574b8;
                if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_035575f4;
                lVar23 = lVar23 + (long)(int)uVar17 * 0x178;
                *(undefined1 *)(lVar23 + 0x194) = 0;
                *(undefined2 *)(lVar23 + 0x20) = 0x200b;
                *(undefined4 *)(lVar23 + 100) = 0;
                *puVar1 = uVar17 + 1;
              }
              else {
                iVar16 = *(int *)((long)unaff_x19 + 0x644);
                if (iVar16 == 0) {
                  uVar17 = *(uint *)((long)unaff_x19 + 0x25c);
                  if ((uVar17 >> 4 & 1) == 0) {
                    if ((uVar17 >> 3 & 1) == 0) {
                      fStack0000000000000158 = 1.0;
                      if ((uVar17 >> 5 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar26 = FUN_026b812c(uVar15,0);
                        if ((uVar26 & 1) != 0) {
                          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar15 = FUN_026b8410(uVar15,0);
                          uVar15 = uVar15 & 0xffff;
                          fStack0000000000000158 = fVar64;
                        }
                      }
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar26 = FUN_026b8070(uVar15,0);
                      fStack0000000000000158 = 1.0;
                      if ((uVar26 & 1) != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar15 = FUN_026b8594(uVar15,0);
                        goto LAB_03550fdc;
                      }
                    }
                  }
                  else {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar26 = FUN_026b812c(uVar15,0);
                    fStack0000000000000158 = 1.0;
                    if ((uVar26 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar15 = FUN_026b8410(uVar15,0);
LAB_03550fdc:
                      fStack0000000000000158 = 1.0;
                      uVar15 = uVar15 & 0xffff;
                    }
                  }
                  iVar16 = *(int *)((long)unaff_x19 + 0x644);
                  if (iVar16 != 0) goto LAB_03550c00;
LAB_03550fec:
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *plVar48 = *(long *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x30);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar48);
                  if (*plVar48 == 0) goto LAB_03550bd0;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *unaff_x21 = *(long *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x38);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *in_stack_00000160 = *(long *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x50);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  uVar50 = *puVar1;
                  uVar17 = *(uint *)(lVar23 + 0x18);
                  if (uVar17 <= uVar50) goto LAB_035575f4;
                  *(undefined4 *)(unaff_x19 + 0x24) =
                       *(undefined4 *)(lVar23 + (long)(int)uVar50 * 0x178 + 0x58);
                  if (bVar14) {
                    lVar36 = unaff_x19[0x8f];
                    if (lVar36 == 0) goto LAB_035574b8;
                    if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
                    if ((*(int *)(lVar36 + (long)(int)uVar85 * 0xc + 0x20) != 10) ||
                       (uVar50 == *(uint *)(unaff_x19 + 0x93))) goto LAB_035510fc;
                    if (uVar17 <= uVar50 - 1) goto LAB_035575f4;
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar82 = *(float *)(lVar23 + (long)(int)(uVar50 - 1) * 0x178 + 0x60);
                    iVar16 = FUN_03776950(*unaff_x21 + 0x50,0);
                    lVar23 = *unaff_x21;
                  }
                  else {
LAB_035510fc:
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar82 = *(float *)(unaff_x19 + 0x3d);
                    iVar16 = FUN_03776950(*unaff_x21 + 0x50,0);
                    lVar23 = unaff_x19[0x20];
                  }
                  if (lVar23 == 0) goto LAB_035574b8;
                  fVar77 = (float)FUN_03776960(lVar23 + 0x50,0);
                  fVar60 = in_stack_00000098;
                  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                    fVar60 = 1.0;
                  }
                  fVar56 = 0.0;
                  fVar58 = 0.0;
                  if (!(bool)(bVar14 & uVar15 == 0x2026)) {
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar58 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar56 = (float)FUN_037769c0(*unaff_x21 + 0x50,0);
                  }
                  lVar23 = unaff_x19[0xc9];
                  if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_035574b8;
                  fVar57 = *(float *)((long)unaff_x19 + 0x404);
                  fVar59 = *(float *)(lVar23 + 0x2c);
                  fVar72 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                  if (*unaff_x21 == 0) goto LAB_035574b8;
                  fVar78 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                  if (*unaff_x21 == 0) goto LAB_035574b8;
                  fVar61 = *(float *)((long)unaff_x19 + 0x404);
                  fVar55 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                  lVar23 = unaff_x19[0x6d];
                  if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar36 + 0x18) <= *puVar1) goto LAB_035575f4;
                  lVar36 = lVar36 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)(lVar36 + 0x2c) = 0;
                  fVar60 = ((fStack0000000000000158 * fVar82) / (float)iVar16) * fVar77 * fVar60;
                  fVar72 = fVar60 * fVar57 * fVar59 * fVar72;
                  *(float *)(lVar36 + 0x160) = fVar72;
                  uVar17 = *(uint *)(unaff_x19 + 0x24);
                  fVar55 = fVar60 * fVar78 * fVar61 * fVar55;
                  if (uVar17 == 0) {
                    fStack000000000000015c = *(float *)(unaff_x19 + 0xc3);
                  }
                  else {
                    lVar36 = unaff_x19[0xe1];
                    if (lVar36 == 0) goto LAB_035574b8;
                    if (*(uint *)(lVar36 + 0x18) <= uVar17) goto LAB_035575f4;
                    lVar36 = *(long *)(lVar36 + (long)(int)uVar17 * 8 + 0x20);
                    if (lVar36 == 0) goto LAB_035574b8;
                    fStack000000000000015c = *(float *)(lVar36 + 0x10c);
                  }
LAB_035514b0:
                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                  fVar82 = 0.0;
                  if (uVar15 != 3 && uVar15 != 0xad) {
                    fVar82 = fVar72;
                  }
LAB_035514cc:
                  lVar23 = *(long *)(lVar23 + 0x38);
                  if (lVar23 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                  *(short *)(lVar23 + 0x20) = (short)uVar15;
                  *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3d];
                  *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *(int *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x168) = (int)unaff_x19[0x2b];
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *(undefined4 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x170) =
                       *(undefined4 *)((long)unaff_x19 + 0x15c);
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_035574b8;
                  uVar17 = *puVar1;
                  FUN_0209a6e0(_fStack00000000000000c8,&stack0x000008a0,
                               *(undefined8 *)OVRPlugin_OVRP_1_30_0_TypeInfo);
                  if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_035575f4;
                  uVar25 = unaff_x29[1];
                  uVar67 = *unaff_x29;
                  lVar23 = lVar23 + (long)(int)uVar17 * 0x178;
                  *(undefined4 *)(lVar23 + 0x18c) = in_stack_000008b0;
                  *(undefined8 *)(lVar23 + 0x184) = uVar25;
                  *(undefined8 *)(lVar23 + 0x17c) = uVar67;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *(undefined4 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 400) =
                       *(undefined4 *)((long)unaff_x19 + 0x25c);
                  if ((unaff_x19[0xc9] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0)) goto LAB_035574b8;
                  FUN_03776e6c(&stack0x00000c18,lVar23,0);
                  puVar11 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                  unaff_x29[0x1df] = in_stack_00000c20;
                  unaff_x29[0x1de] = CONCAT44(in_stack_00000c1c,uVar84);
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
                  fVar60 = *(float *)(unaff_x19 + 0x55);
                  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                    fStack000000000000012c = 0.0;
                    fVar57 = 0.0;
                    fVar77 = 0.0;
                  }
                  else {
                    if (*plVar48 == 0) goto LAB_035574b8;
                    uVar33 = *puVar1;
                    uVar50 = *(uint *)(*plVar48 + 0x28);
                    if ((int)uVar33 < (int)uVar22) {
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                      goto LAB_035574b8;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33 + 1) goto LAB_035575f4;
                      lVar23 = *(long *)(lVar23 + (long)(int)(uVar33 + 1) * 0x178 + 0x30);
                      if ((((lVar23 == 0) || (*unaff_x21 == 0)) ||
                          (lVar36 = *(long *)(*unaff_x21 + 0x128), lVar36 == 0)) ||
                         (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)) goto LAB_035574b8;
                      in_stack_000008a0 = uVar50 | *(int *)(lVar23 + 0x28) << 0x10;
                      uVar28 = FUN_0219f8b8(lVar36,&stack0x000008a0,&stack0x000016f8,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                      uVar80 = 0;
                      if ((uVar28 & 1) == 0) {
                        fStack000000000000012c = 0.0;
                        fVar57 = 0.0;
                        fVar77 = 0.0;
                      }
                      else {
                        if (in_stack_000016f8 == 0) goto LAB_035574b8;
                        fStack000000000000012c = *(float *)(in_stack_000016f8 + 0x1c);
                        uVar80 = *(undefined4 *)(in_stack_000016f8 + 0x20);
                        fVar77 = *(float *)(in_stack_000016f8 + 0x14);
                        fVar57 = *(float *)(in_stack_000016f8 + 0x18);
                        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                          fVar60 = 0.0;
                        }
                      }
                      uVar33 = *puVar1;
                    }
                    else {
                      uVar80 = 0;
                      fStack000000000000012c = 0.0;
                      fVar57 = 0.0;
                      fVar77 = 0.0;
                    }
                    if (0 < (int)uVar33) {
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                      goto LAB_035574b8;
                      if (*(uint *)(lVar23 + 0x18) <= uVar33 - 1) goto LAB_035575f4;
                      lVar23 = *(long *)(lVar23 + (ulong)(uVar33 - 1) * 0x178 + 0x30);
                      if (((lVar23 == 0) || (*unaff_x21 == 0)) ||
                         ((lVar36 = *(long *)(*unaff_x21 + 0x128), lVar36 == 0 ||
                          (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)))) goto LAB_035574b8;
                      in_stack_000008a0 = *(uint *)(lVar23 + 0x28) | uVar50 << 0x10;
                      uVar28 = FUN_0219f8b8(lVar36,&stack0x000008a0,&stack0x000016f8,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                      if ((uVar28 & 1) != 0) {
                        if ((in_stack_000016f8 == 0) ||
                           (fVar77 = (float)FUN_03571cb4(fVar77,fVar57,fStack000000000000012c,uVar80
                                                         ,*(undefined4 *)(in_stack_000016f8 + 0x28),
                                                         *(undefined4 *)(in_stack_000016f8 + 0x2c),
                                                         *(undefined4 *)(in_stack_000016f8 + 0x30),
                                                         *(undefined4 *)(in_stack_000016f8 + 0x34),0
                                                        ), in_stack_000016f8 == 0))
                        goto LAB_035574b8;
                        if ((*(byte *)(in_stack_000016f8 + 0x39) & 1) != 0) {
                          fVar60 = 0.0;
                        }
                      }
                    }
                    *(float *)((long)unaff_x19 + 0x2fc) = fStack000000000000012c;
                  }
                  if ((char)unaff_x19[0x1e] != '\0') {
                    fVar78 = *(float *)(unaff_x19 + 200);
                    fVar59 = (float)FUN_03776cb4(&stack0x00001790,0);
                    fVar78 = fVar78 - fVar82 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
                    *(float *)(unaff_x19 + 200) = fVar78;
                    if ((uVar15 == 0x200b) || (uVar17 != 0)) {
                      *(float *)(unaff_x19 + 200) =
                           fVar78 - fVar52 * *(float *)((long)unaff_x19 + 0x2b4);
                    }
                  }
                  fVar78 = *(float *)(unaff_x19 + 0x56);
                  fVar59 = 0.0;
                  if (fVar78 != 0.0) {
                    fVar59 = (float)FUN_03776c94(&stack0x00001790,0);
                    fVar61 = (float)FUN_03776ca4(&stack0x00001790,0);
                    fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (fVar78 * 0.5 - fVar82 * (fVar59 * 0.5 + fVar61));
                    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar59;
                  }
                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar32 == '\0')) &&
                     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                    lVar23 = *in_stack_00000160;
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar28 = FUN_036cee6c(lVar23,0,0);
                    fVar61 = 0.0;
                    if ((uVar28 & 1) != 0) {
                      lVar23 = *in_stack_00000160;
                      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      if (lVar23 == 0) goto LAB_035574b8;
                      uVar28 = FUN_03699d3c(lVar23,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar11 + 0xb8) + 0x54),0);
                      fVar61 = 0.0;
                      if ((uVar28 & 1) != 0) {
                        lVar23 = *in_stack_00000160;
                        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        if (lVar23 == 0) goto LAB_035574b8;
                        fVar78 = (float)FUN_0369e060(lVar23,*(undefined4 *)
                                                             (*(long *)(*(long *)puVar11 + 0xb8) +
                                                             0x54),0);
                        if ((*unaff_x21 == 0) || (*in_stack_00000160 == 0)) goto LAB_035574b8;
                        fVar75 = *(float *)(*unaff_x21 + 0x1b0);
                        fVar61 = (float)FUN_0369e060(*in_stack_00000160,
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)puVar11 + 0xb8) + 0xcc),0)
                        ;
                        fVar61 = fVar61 * fVar78 * fVar75 * 0.25;
                        if (fVar78 < fStack000000000000015c + fVar61) {
                          fStack000000000000015c = fVar78 - fVar61;
                        }
                      }
                    }
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fStack00000000000000d0 = *(float *)(*unaff_x21 + 0x1b4);
                  }
                  else {
                    lVar23 = *in_stack_00000160;
                    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar28 = FUN_036cee6c(lVar23,0,0);
                    fStack00000000000000d0 = 0.0;
                    if ((uVar28 & 1) != 0) {
                      lVar23 = *in_stack_00000160;
                      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      if (lVar23 == 0) goto LAB_035574b8;
                      uVar28 = FUN_03699d3c(lVar23,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar11 + 0xb8) + 0x54),0);
                      if ((uVar28 & 1) != 0) {
                        lVar23 = *in_stack_00000160;
                        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        if (lVar23 == 0) goto LAB_035574b8;
                        uVar28 = FUN_03699d3c(lVar23,*(undefined4 *)
                                                      (*(long *)(*(long *)puVar11 + 0xb8) + 0xcc),0)
                        ;
                        if ((uVar28 & 1) != 0) {
                          lVar23 = *in_stack_00000160;
                          if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          if (lVar23 != 0) {
                            fVar78 = (float)FUN_0369e060(lVar23,*(undefined4 *)
                                                                 (*(long *)(*(long *)puVar11 + 0xb8)
                                                                 + 0x54),0);
                            if ((*unaff_x21 != 0) && (*in_stack_00000160 != 0)) {
                              fVar75 = *(float *)(*unaff_x21 + 0x1a8);
                              fVar61 = (float)FUN_0369e060(*in_stack_00000160,
                                                           *(undefined4 *)
                                                            (*(long *)(*(long *)puVar11 + 0xb8) +
                                                            0xcc),0);
                              fVar61 = fVar61 * fVar78 * fVar75 * 0.25;
                              if (fVar78 < fStack000000000000015c + fVar61) {
                                fStack000000000000015c = fVar78 - fVar61;
                              }
                              goto FUN_03551b84;
                            }
                          }
                          goto LAB_035574b8;
                        }
                      }
                    }
                    fVar61 = 0.0;
                  }
FUN_03551b84:
                  fVar78 = *(float *)(unaff_x19 + 200);
                  fVar75 = (float)FUN_03776ca4(&stack0x00001790,0);
                  fVar78 = fVar78 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                    fVar82 * (fVar77 + ((fVar75 - fStack000000000000015c) - fVar61))
                  ;
                  fVar77 = (float)FUN_03776cac(&stack0x00001790,0);
                  fVar83 = *(float *)((long)unaff_x19 + 0x61c) +
                           ((fVar55 + fVar82 * (fVar57 + fStack000000000000015c + fVar77)) -
                           *(float *)(unaff_x19 + 0x9b));
                  fVar77 = (float)FUN_03776c9c(&stack0x00001790,0);
                  fVar77 = fVar83 - fVar82 * (fStack000000000000015c + fStack000000000000015c +
                                             fVar77);
                  fVar57 = (float)FUN_03776c94(&stack0x00001790,0);
                  fVar75 = fVar78 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                    fVar82 * (fVar61 + fVar61 +
                                             fStack000000000000015c + fStack000000000000015c +
                                             fVar57);
                  fStack0000000000000104 = fVar78;
                  fVar57 = fVar75;
                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar32 == '\0')) &&
                     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                    fVar74 = (float)(int)unaff_x19[0xbe] * fVar63;
                    fVar57 = (float)FUN_03776cac(&stack0x00001790,0);
                    fVar73 = fVar74 * fVar82 * (fVar61 + fStack000000000000015c + fVar57);
                    fVar57 = (float)FUN_03776cac(&stack0x00001790,0);
                    fVar70 = (float)FUN_03776c9c(&stack0x00001790,0);
                    fVar83 = fVar83 + 0.0;
                    fVar77 = fVar77 + 0.0;
                    fVar74 = fVar74 * fVar82 * (((fVar57 - fVar70) - fStack000000000000015c) -
                                               fVar61);
                    fVar70 = fVar78 + fVar73;
                    fVar57 = fVar75 + fVar74;
                    fVar62 = (fVar73 - fVar74) * 0.5;
                    fVar78 = (fVar78 + fVar74) - fVar62;
                    fVar75 = (fVar75 + fVar73) - fVar62;
                    fStack0000000000000104 = fVar70 - fVar62;
                    fVar57 = fVar57 - fVar62;
                  }
                  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                    fStack0000000000000114 = 0.0;
                    fVar62 = 0.0;
                    fVar73 = 0.0;
                    fStack0000000000000100 = 0.0;
                    fVar74 = fVar77;
                    fVar70 = fVar83;
                  }
                  else {
                    thunk_FUN_036bc400(lVar24,0);
                    fVar76 = (fVar75 + fVar78) * 0.5;
                    fVar79 = (fVar77 + fVar83) * 0.5;
                    fVar83 = fVar83 - fVar79;
                    fStack0000000000000100 = 0.0;
                    fVar70 = fVar83;
                    fStack0000000000000104 =
                         (float)FUN_036bdd2c(fStack0000000000000104 - fVar76,lVar24,0);
                    fStack0000000000000104 = fVar76 + fStack0000000000000104;
                    fStack0000000000000100 = fStack0000000000000100 + 0.0;
                    fVar74 = fVar77 - fVar79;
                    fStack0000000000000114 = 0.0;
                    fVar77 = fVar74;
                    fVar78 = (float)FUN_036bdd2c(fVar78 - fVar76,lVar24,0);
                    fVar78 = fVar76 + fVar78;
                    fStack0000000000000114 = fStack0000000000000114 + 0.0;
                    fVar77 = fVar79 + fVar77;
                    fVar73 = 0.0;
                    fVar75 = (float)FUN_036bdd2c(fVar75 - fVar76,lVar24,0);
                    fVar75 = fVar76 + fVar75;
                    fVar83 = fVar79 + fVar83;
                    fVar73 = fVar73 + 0.0;
                    fVar62 = 0.0;
                    fVar57 = (float)FUN_036bdd2c(fVar57 - fVar76,lVar24,0);
                    fVar57 = fVar76 + fVar57;
                    fVar62 = fVar62 + 0.0;
                    fVar74 = fVar79 + fVar74;
                    fVar70 = fVar79 + fVar70;
                  }
                  if (*plVar2 == 0) goto LAB_035574b8;
                  lVar23 = *(long *)(*plVar2 + 0x38);
                  uVar28 = (ulong)(uint)fVar82;
                  if (lVar23 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                  *(float *)(lVar23 + 0x11c) = fVar78;
                  *(float *)(lVar23 + 0x120) = fVar77;
                  *(float *)(lVar23 + 0x124) = fStack0000000000000114;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                  *(float *)(lVar23 + 0x114) = fVar70;
                  *(float *)(lVar23 + 0x110) = fStack0000000000000104;
                  *(float *)(lVar23 + 0x118) = fStack0000000000000100;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                  *(float *)(lVar23 + 0x128) = fVar75;
                  *(float *)(lVar23 + 300) = fVar83;
                  *(float *)(lVar23 + 0x130) = fVar73;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                  *(float *)(lVar23 + 0x134) = fVar57;
                  *(float *)(lVar23 + 0x138) = fVar74;
                  *(float *)(lVar23 + 0x13c) = fVar62;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  uVar50 = *puVar1;
                  lVar36 = (long)(int)uVar50;
                  if (*(uint *)(lVar23 + 0x18) <= uVar50) goto LAB_035575f4;
                  lVar49 = lVar23 + lVar36 * 0x178;
                  *(int *)(lVar49 + 0x140) = (int)unaff_x19[200];
                  fVar83 = *(float *)(unaff_x19 + 0x9b);
                  uVar65 = (ulong)(uint)fVar83;
                  fVar57 = *(float *)((long)unaff_x19 + 0x61c);
                  *(float *)(lVar49 + 0x15c) = (fVar75 - fVar78) / (fVar70 - fVar77);
                  *(float *)(lVar49 + 0x14c) = (fVar55 - fVar83) + fVar57;
                  fVar58 = fVar58 * fVar82;
                  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                    fVar58 = fVar58 / fStack0000000000000158;
                    fVar56 = (fVar56 * fVar82) / fStack0000000000000158;
                  }
                  else {
                    fVar56 = fVar56 * fVar82;
                  }
                  uVar33 = *(uint *)(unaff_x19 + 0x93);
                  if ((uVar17 == 0) || (uVar50 == uVar33)) {
                    fVar56 = fVar57 + fVar56;
                    fVar58 = fVar57 + fVar58;
                    fVar77 = fVar56;
                    fVar55 = fVar58;
                    if (fVar57 != 0.0) {
                      fVar55 = (fVar58 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
                      fVar77 = (fVar56 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
                      if (fVar55 <= fVar58) {
                        fVar55 = fVar58;
                      }
                      if (fVar56 <= fVar77) {
                        fVar77 = fVar56;
                      }
                    }
                    lVar23 = lVar23 + lVar36 * 0x178;
                    fVar57 = fVar55;
                    if (fVar55 <= *(float *)(unaff_x19 + 0x99)) {
                      fVar57 = *(float *)(unaff_x19 + 0x99);
                    }
                    fVar78 = fVar77;
                    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar77) {
                      fVar78 = *(float *)((long)unaff_x19 + 0x4cc);
                    }
                    *(float *)((long)unaff_x19 + 0x4cc) = fVar78;
                    *(float *)(unaff_x19 + 0x99) = fVar57;
                    *(float *)(lVar23 + 0x154) = fVar55;
                    *(float *)(lVar23 + 0x158) = fVar77;
                    *(float *)(lVar23 + 0x148) = fVar58 - fVar83;
                    *(float *)(unaff_x19 + 0x98) = fVar58 - fVar83;
                    *(float *)(lVar23 + 0x150) = fVar56 - fVar83;
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar56 - fVar83;
                    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0'))
                    {
                      *(float *)(unaff_x19 + 0x97) = fVar57;
                      if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                      fVar55 = *(float *)((long)unaff_x19 + 0x4bc);
                      fVar56 = (float)FUN_03776990(unaff_x19[0x20] + 0x50,0);
                      fStack0000000000000158 = (fVar82 * fVar56) / fStack0000000000000158;
                      uVar65 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                      if (fVar55 <= fStack0000000000000158) {
                        fVar55 = fStack0000000000000158;
                      }
                      *(float *)((long)unaff_x19 + 0x4bc) = fVar55;
                    }
                    if ((float)uVar65 == 0.0) {
                      fVar55 = *(float *)((long)unaff_x19 + 0x4b4);
                      if (*(float *)((long)unaff_x19 + 0x4b4) <= fVar58) {
                        fVar55 = fVar58;
                      }
                      *(float *)((long)unaff_x19 + 0x4b4) = fVar55;
                    }
                  }
                  else {
                    fVar55 = *(float *)(unaff_x19 + 0x99);
                    lVar23 = lVar23 + lVar36 * 0x178;
                    *(float *)(lVar23 + 0x154) = fVar55;
                    fVar58 = *(float *)((long)unaff_x19 + 0x4cc);
                    fVar55 = fVar55 - fVar83;
                    *(float *)(lVar23 + 0x148) = fVar55;
                    *(float *)(lVar23 + 0x158) = fVar58;
                    *(float *)(unaff_x19 + 0x98) = fVar55;
                    fVar58 = fVar58 - fVar83;
                    *(float *)(lVar23 + 0x150) = fVar58;
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar58;
                  }
                  lVar23 = *plVar2;
                  if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                  goto LAB_035574b8;
                  uVar18 = *puVar1;
                  if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_035575f4;
                  lVar36 = lVar36 + (long)(int)uVar18 * 0x178;
                  *(undefined1 *)(lVar36 + 0x194) = 0;
                  uVar39 = *(uint *)(unaff_x19 + 0x4f);
                  if ((uVar15 == 9) ||
                     (((((uVar17 == 0 && (uVar15 != 3)) && (uVar15 != 0x200b)) && (uVar15 != 0xad))
                      || (((bool)(uVar15 == 0xad & (bVar9 ^ 1U)) ||
                          (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                    *(undefined1 *)(lVar36 + 0x194) = 1;
                    pfVar37 = (float *)((long)unaff_x19 + 0x354);
                    pfVar40 = (float *)(unaff_x19 + 0x6a);
                    if (bVar14) {
                      lVar23 = *(long *)(lVar23 + 0x50);
                      if (lVar23 == 0) goto LAB_035574b8;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_035575f4;
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      pfVar40 = (float *)(lVar23 + 0x60);
                      pfVar37 = (float *)(lVar23 + 100);
                    }
                    fVar58 = *pfVar40;
                    fVar56 = *pfVar37;
                    fVar55 = *(float *)(unaff_x19 + 0x6c);
                    fVar77 = *(float *)(unaff_x19 + 200);
                    fStack00000000000000fc = (fVar81 - fVar58) - fVar56;
                    bVar13 = true;
                    if ((fVar55 <= fStack00000000000000fc) && (bVar13 = false, !NAN(fVar55))) {
                      bVar13 = fVar55 == -1.0;
                    }
                    if (!bVar13) {
                      fStack00000000000000fc = fVar55;
                    }
                    fVar55 = 0.0;
                    if ((char)unaff_x19[0x1e] == '\0') {
                      fVar55 = (float)FUN_03776cb4(&stack0x00001790,0);
                      uVar65 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                    }
                    fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
                    fVar78 = *(float *)((long)unaff_x19 + 0x4cc);
                    if (uVar15 != 0xad) {
                      fVar72 = fVar82;
                    }
                    fVar83 = (float)uVar65;
                    fVar75 = 0.0;
                    if ((0.0 < fVar83) && (fVar75 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')
                       ) {
                      fVar75 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                    }
                    uVar18 = *puVar1;
                    fVar75 = (*(float *)(unaff_x19 + 0x97) - (fVar78 - fVar83)) + fVar75;
                    if (fVar68 < fVar75) {
                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                        *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
                      }
                      puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                      uVar67 = DAT_00d37868;
                      if ((char)unaff_x19[0x47] != '\0') {
                        fVar70 = *(float *)(unaff_x19 + 0x59);
                        if (((fVar70 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar83)) &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar51 = *(float *)((long)unaff_x19 + 700) +
                                   ((fVar71 - fVar75) / (float)(int)unaff_x19[0x95]) / fVar51;
                          if (fVar51 <= fVar70) {
                            fVar51 = fVar70;
                          }
                          goto LAB_03554b48;
                        }
                        fVar83 = *(float *)((long)unaff_x19 + 0x1e4);
                        fVar75 = *(float *)(unaff_x19 + 0x4a);
                        uVar65 = (ulong)(uint)fVar75;
                        if ((fVar75 < fVar83) &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar51 = (fVar83 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                          if (fVar51 <= DAT_00d38b84) {
                            fVar51 = DAT_00d38b84;
                          }
                          fVar52 = (fVar83 - fVar51) * 20.0 + 0.5;
                          *(float *)((long)unaff_x19 + 0x23c) = fVar83;
                          fVar51 = DAT_00d38e60;
                          if (fVar52 != INFINITY) {
                            fVar51 = (float)(int)fVar52 / 20.0;
                          }
                          if (fVar51 <= fVar75) {
                            fVar51 = fVar75;
                          }
                          goto LAB_03554658;
                        }
                      }
                      switch((int)unaff_x19[0x5c]) {
                      case 1:
                        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar23 = *(long *)puVar11;
                        }
                        lVar36 = *(long *)(lVar23 + 0xb8);
                        lVar23 = *(long *)(*(long *)OVRPlugin_OVRP_1_2_0_TypeInfo + 0x20);
                        if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
                          lVar23 = FUN_01a46ff8(lVar23);
                        }
                        piVar29 = (int *)thunk_FUN_01a59484(lVar36 + 0x11f0,
                                                            *(long *)(*(long *)(*(long *)(lVar23 + 
                                                  0xc0) + 8) + 0x80) + 0xa0);
                        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*piVar29 == 0) {
LAB_03554580:
                          in_stack_000017c8 = DAT_00d37868;
                          unaff_x29 = (undefined8 *)&stack0x000008a0;
                          puVar1[0] = 0;
                          puVar1[1] = 0;
                          uVar85 = 0xffffffff;
                        }
                        else {
                          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar23 = *(long *)puVar11;
                          }
                          FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008a0,
                                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                          memcpy(&stack0x00001380,&stack0x000008a0,0x378);
LAB_035529dc:
                          iVar16 = FUN_0358c15c();
LAB_035529e8:
                          unaff_x29 = (undefined8 *)&stack0x000008a0;
                          iVar19 = *(int *)((long)unaff_x19 + 0x494) + -1;
                          *(int *)((long)unaff_x19 + 0x494) = iVar19;
                          in_stack_000017c8 = CONCAT44(0x2026,iVar19);
                          iStack000000000000016c = iStack000000000000016c + 1;
                          uVar85 = iVar16 - 1;
                        }
                        goto LAB_03550bd0;
                      default:
                        goto UnityEngine_AnimationClip__set_wrapMode;
                      case 3:
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
LAB_03552550:
                        uVar85 = FUN_0358c15c();
                        break;
                      case 5:
                        if ((uVar18 == 0) || ((int)uVar85 < 0)) {
                          uVar85 = 0xffffffff;
                          *puVar1 = 0;
                          in_stack_000017c8 = uVar67;
                          goto UnityEngine_AnimatorStateInfo__get_fullPathHash;
                        }
                        fVar72 = *(float *)(unaff_x19 + 0x99);
                        unaff_x29 = (undefined8 *)&stack0x000008a0;
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar85 = FUN_0358c15c();
                        if (fVar72 - fVar78 <= fVar68) {
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                          *(undefined4 *)(unaff_x19 + 0x93) =
                               *(undefined4 *)((long)unaff_x19 + 0x494);
                          uVar65 = *(ulong *)(*(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo +
                                                       0xb8) + 0x15a8);
                          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                          lVar23 = NEON_rev64(uVar65,4);
                          unaff_x19[0x99] = lVar23;
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
                        uVar85 = FUN_0358c15c();
                        lVar23 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar26 = FUN_036cee6c(lVar23,0,0);
                        if ((uVar26 & 1) != 0) {
                          plVar47 = (long *)unaff_x19[0x5d];
                          uVar67 = (**(code **)(*unaff_x19 + 0x518))();
                          if (plVar47 == (long *)0x0) goto LAB_035574b8;
                          (**(code **)(*plVar47 + 0x528))
                                    (plVar47,uVar67,*(undefined8 *)(*plVar47 + 0x530));
                          lVar23 = unaff_x19[0x5d];
                          if (lVar23 == 0) goto LAB_035574b8;
                          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                          FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                          plVar47 = (long *)unaff_x19[0x5d];
                          if (plVar47 == (long *)0x0) goto LAB_035574b8;
                          (**(code **)(*plVar47 + 0x7a8))
                                    (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7b0));
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                        }
                      }
UnityEngine_AnimationClip__get_hasMotionCurves:
                      unaff_x29 = (undefined8 *)&stack0x000008a0;
                      in_stack_000017c8 = CONCAT44(3,uVar18);
                      goto LAB_03550bd0;
                    }
UnityEngine_AnimationClip__set_wrapMode:
                    puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    fVar55 = ABS(fVar77) + fVar55 * (1.0 - fVar57) * fVar72;
                    fVar72 = 1.0;
                    if ((uVar39 & 0x18) != 0) {
                      fVar72 = DAT_00d38acc;
                    }
                    fVar77 = fVar72 * fStack00000000000000fc;
                    if (fVar77 < fVar55) {
                      uVar65 = (ulong)(uint)fVar61;
                      if (((char)unaff_x19[0x5b] == '\0') || (uVar18 == *(uint *)(unaff_x19 + 0x93))
                         ) {
                        if (((char)unaff_x19[0x47] != '\0') &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar77 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                          if (fVar57 < fVar77) {
                            fVar51 = fVar55 / (1.0 - fVar57);
                            if (fVar57 <= 0.0) {
                              fVar51 = fVar55;
                            }
                            fVar57 = fVar57 + (fVar55 - fVar72 * (fStack00000000000000fc +
                                                                 DAT_00d38cc4)) / fVar51;
                            goto LAB_035574e8;
                          }
                          fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
                          fVar77 = *(float *)(unaff_x19 + 0x4a);
                          if (fVar77 < fVar57) {
                            fVar51 = (fVar57 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                            if (fVar51 <= DAT_00d38b84) {
                              fVar51 = DAT_00d38b84;
                            }
                            *(float *)((long)unaff_x19 + 0x23c) = fVar57;
                            fVar57 = fVar57 - fVar51;
LAB_03557524:
                            fVar52 = fVar57 * 20.0 + 0.5;
                            fVar51 = DAT_00d38e60;
                            if (fVar52 != INFINITY) {
                              fVar51 = (float)(int)fVar52 / 20.0;
                            }
                            if (fVar51 <= fVar77) {
                              fVar51 = fVar77;
                            }
                            goto LAB_03554658;
                          }
                        }
                        iVar16 = (int)unaff_x19[0x5c];
                        if (iVar16 == 1) {
                          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar23 = *(long *)puVar11;
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
                          puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          if (*piVar29 != 0) {
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar23 = *(long *)puVar11;
                            }
                            FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008a0,
                                         *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                            memcpy(&stack0x00000c90,&stack0x000008a0,0x378);
                            goto LAB_035529dc;
                          }
                          goto LAB_03554580;
                        }
                        if (iVar16 != 6) {
                          if (iVar16 == 3) {
                            if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                            }
                            goto LAB_03552550;
                          }
                          goto LAB_03552f54;
                        }
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar85 = FUN_0358c15c();
                        lVar23 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar26 = FUN_036cee6c(lVar23,0,0);
                        if ((uVar26 & 1) != 0) {
                          plVar47 = (long *)unaff_x19[0x5d];
                          uVar67 = (**(code **)(*unaff_x19 + 0x518))();
                          if (plVar47 == (long *)0x0) goto LAB_035574b8;
                          (**(code **)(*plVar47 + 0x528))
                                    (plVar47,uVar67,*(undefined8 *)(*plVar47 + 0x530));
                          lVar23 = unaff_x19[0x5d];
                          if (lVar23 == 0) goto LAB_035574b8;
                          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                          FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                          plVar47 = (long *)unaff_x19[0x5d];
                          if (plVar47 == (long *)0x0) goto LAB_035574b8;
                          (**(code **)(*plVar47 + 0x7a8))
                                    (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7b0));
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
                        uVar85 = FUN_0358c15c();
                        if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                          lVar23 = *plVar2;
                          if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                          goto LAB_035574b8;
                          if (*(uint *)(lVar36 + 0x18) <= *puVar1) goto LAB_035575f4;
                          fVar77 = *(float *)(unaff_x19 + 0x9b);
                          fVar57 = 0.0;
                          if ((0.0 < fVar77) &&
                             (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                            fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                          }
                          fVar57 = fVar52 * *(float *)(unaff_x19 + 0x57) +
                                   *(float *)(lVar36 + (long)(int)*puVar1 * 0x178 + 0x154) +
                                   (fVar57 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                   fVar51 * (param_1 + *(float *)((long)unaff_x19 + 700));
                        }
                        else {
                          lVar23 = unaff_x19[0x6d];
                          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                          if (lVar23 == 0) goto LAB_035574b8;
                          fVar77 = *(float *)(unaff_x19 + 0x9b);
                          fVar57 = *(float *)(unaff_x19 + 0x58) +
                                   fVar52 * *(float *)(unaff_x19 + 0x57);
                        }
                        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar23 = *(long *)(lVar23 + 0x38);
                        if (lVar23 == 0) goto LAB_035574b8;
                        uVar41 = *(uint *)((long)unaff_x19 + 0x494);
                        if ((*(uint *)(lVar23 + 0x18) <= uVar41) ||
                           (uVar7 = uVar41 - 1, *(uint *)(lVar23 + 0x18) <= uVar7))
                        goto LAB_035575f4;
                        uVar65 = (ulong)(uint)(fVar57 + *(float *)(unaff_x19 + 0x97));
                        fVar78 = (fVar57 + *(float *)(unaff_x19 + 0x97) + fVar77) -
                                 *(float *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x158);
                        if ((bVar9 || *(short *)(lVar23 + (long)(int)uVar7 * 0x178 + 0x20) != 0xad)
                           || ((fVar68 <= fVar78 && ((int)unaff_x19[0x5c] != 0)))) {
                          if (*(short *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x20) == 0xad) {
                            bVar9 = true;
                          }
                          else {
                            if ((bVar10 & *(byte *)(unaff_x19 + 0x47)) != 0) {
                              fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
                              fVar77 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                              if ((fVar77 <= fVar57) ||
                                 ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                                fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
                                uVar65 = (ulong)(uint)fVar57;
                                fVar77 = *(float *)(unaff_x19 + 0x4a);
                                if ((fVar57 <= fVar77) ||
                                   ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)))
                                goto LAB_03552d44;
LAB_03557594:
                                fVar51 = (fVar57 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                                if (fVar51 <= DAT_00d38b84) {
                                  fVar51 = DAT_00d38b84;
                                }
                                *(float *)((long)unaff_x19 + 0x23c) = fVar57;
                                fVar57 = fVar57 - fVar51;
                                goto LAB_03557524;
                              }
LAB_03557558:
                              fVar51 = fVar55;
                              if (0.0 < fVar57) {
                                fVar51 = fVar55 / (1.0 - fVar57);
                              }
                              fVar57 = fVar57 + (fVar55 - fVar72 * (fStack00000000000000fc +
                                                                   DAT_00d38cc4)) / fVar51;
LAB_035574e8:
                              if (fVar77 <= fVar57) {
                                fVar57 = fVar77;
                              }
                              *(float *)((long)unaff_x19 + 0x2d4) = fVar57;
                              return;
                            }
LAB_03552d44:
                            lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01a58e78();
                              lVar23 = *(long *)puVar11;
                            }
                            iVar16 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
                            if (((iVar16 != iStack0000000000000034) && (iVar16 != -1)) &&
                               (bVar10 == 1)) {
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                              }
                              uVar85 = FUN_0358c15c();
                              if ((unaff_x19[0x6d] == 0) ||
                                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
                              goto LAB_035574b8;
                              uVar41 = *puVar1 - 1;
                              if (*(uint *)(lVar23 + 0x18) <= uVar41) goto LAB_035575f4;
                              iStack0000000000000034 = iVar16;
                              if (*(short *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x20) == 0xad) {
                                bVar9 = false;
                                in_stack_000017c8 = CONCAT44(0x2d,uVar41);
                                *puVar1 = uVar41;
                                uVar85 = uVar85 - 1;
                                goto LAB_03550bd0;
                              }
                            }
                            if (fVar78 <= fVar68) {
switchD_03552ef4_caseD_0:
                              uVar65 = uVar28;
                              FUN_0358cbd4(fVar51,uVar28,fVar52,
                                           *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                           fStack00000000000000d0,fVar60,fStack00000000000000fc,
                                           param_1);
                            }
                            else {
                              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                                *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                     *(undefined4 *)((long)unaff_x19 + 0x494);
                              }
                              fVar77 = fVar68;
                              if ((char)unaff_x19[0x47] != '\0') {
                                fVar77 = *(float *)(unaff_x19 + 0x59);
                                if ((fVar77 < *(float *)((long)unaff_x19 + 700)) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                                  fVar51 = *(float *)((long)unaff_x19 + 700) +
                                           ((fVar71 - fVar78) / (float)((int)unaff_x19[0x95] + 1)) /
                                           fVar51;
                                  if (fVar51 <= fVar77) {
                                    fVar51 = fVar77;
                                  }
LAB_03554b48:
                                  *(float *)((long)unaff_x19 + 700) = fVar51;
                                  return;
                                }
                                fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
                                fVar77 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                                if ((fVar57 < fVar77) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                goto LAB_03557558;
                                fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
                                uVar65 = (ulong)(uint)fVar57;
                                fVar77 = *(float *)(unaff_x19 + 0x4a);
                                if ((fVar77 < fVar57) &&
                                   (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                                goto LAB_03557594;
                              }
                              switch((int)unaff_x19[0x5c]) {
                              case 0:
                              case 2:
                              case 4:
                                goto switchD_03552ef4_caseD_0;
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
                                                                    *(long *)(*(long *)(*(long *)(
                                                  lVar23 + 0xc0) + 8) + 0x80) + 0xa0);
                                if (*piVar29 == 0) {
                                  bVar9 = false;
                                  goto LAB_03554580;
                                }
                                lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                if (*(int *)(lVar23 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                                }
                                FUN_0209b778(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x000008a0,
                                             *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                                memcpy(&stack0x00001008,&stack0x000008a0,0x378);
                                iVar16 = FUN_0358c15c();
                                bVar9 = false;
                                goto LAB_035529e8;
                              case 3:
                                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar85 = FUN_0358c15c();
                                bVar9 = false;
                                goto UnityEngine_AnimationClip__get_hasMotionCurves;
                              case 5:
                                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                                uVar65 = uVar28;
                                FUN_0358cbd4(fVar51,uVar28,fVar52,
                                             *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                             fStack00000000000000d0,fVar60,fStack00000000000000fc,
                                             param_1);
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
                                  plVar47 = (long *)unaff_x19[0x5d];
                                  uVar67 = (**(code **)(*unaff_x19 + 0x518))();
                                  if (plVar47 == (long *)0x0) goto LAB_035574b8;
                                  (**(code **)(*plVar47 + 0x528))
                                            (plVar47,uVar67,*(undefined8 *)(*plVar47 + 0x530));
                                  lVar23 = unaff_x19[0x5d];
                                  if (lVar23 == 0) goto LAB_035574b8;
                                  *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                                  FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                                  plVar47 = (long *)unaff_x19[0x5d];
                                  if (plVar47 == (long *)0x0) goto LAB_035574b8;
                                  (**(code **)(*plVar47 + 0x7a8))
                                            (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7b0));
                                  *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                }
                                bVar9 = false;
                                goto LAB_03552b00;
                              default:
                                bVar9 = false;
                                goto LAB_03552f54;
                              }
                            }
                            bVar10 = 1;
                            bVar9 = false;
                            bVar8 = true;
                          }
                        }
                        else {
                          bVar9 = false;
                          in_stack_000017c8 = CONCAT44(0x2d,uVar7);
                          *puVar1 = uVar7;
                          uVar85 = uVar85 - 1;
                        }
                      }
                      goto LAB_03550bd0;
                    }
LAB_03552f54:
                    if (uVar15 != 0xad) {
                      if (uVar15 == 9) {
                        lVar23 = *plVar2;
                        if ((lVar23 != 0) && (lVar36 = *(long *)(lVar23 + 0x38), lVar36 != 0)) {
                          uVar18 = *puVar1;
                          if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_035575f4;
                          *(undefined1 *)(lVar36 + (long)(int)uVar18 * 0x178 + 0x194) = 0;
                          *(uint *)((long)unaff_x19 + 0x4a4) = uVar18;
                          lVar36 = *(long *)(lVar23 + 0x50);
                          if (lVar36 != 0) {
                            if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar36 + 0x18)) {
                              lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                              *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
                              goto LAB_03552fcc;
                            }
                            goto LAB_035575f4;
                          }
                        }
                      }
                      else {
                        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                          (**(code **)(*unaff_x19 + 0x898))(fVar77,fVar61);
                        }
                        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                          (**(code **)(*unaff_x19 + 0x888))(fStack000000000000015c);
                        }
                        if (bVar8) {
                          *(uint *)((long)unaff_x19 + 0x49c) = *puVar1;
                        }
                        *(uint *)((long)unaff_x19 + 0x4a4) = *puVar1;
                        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
                        if ((unaff_x19[0x6d] != 0) &&
                           (lVar23 = *(long *)(unaff_x19[0x6d] + 0x50), lVar23 != 0)) {
                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar23 + 0x18)) {
                            lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            bVar8 = false;
                            *(float *)(lVar23 + 0x60) = fVar58;
                            *(float *)(lVar23 + 100) = fVar56;
                            goto LAB_035530c4;
                          }
                          goto LAB_035575f4;
                        }
                      }
                      goto LAB_035574b8;
                    }
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_035574b8;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                    *(undefined1 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                  }
                  else {
                    if (((uVar15 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                      fVar55 = (float)uVar65;
                      fVar72 = 0.0;
                      if ((0.0 < fVar55) &&
                         (fVar72 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar72 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      uVar65 = (ulong)(uint)fVar68;
                      if (fVar68 < (*(float *)(unaff_x19 + 0x97) -
                                   (*(float *)((long)unaff_x19 + 0x4cc) - fVar55)) + fVar72) {
                        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2e4) = uVar18;
                        }
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar85 = FUN_0358c15c();
                        lVar23 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
                        }
                        uVar26 = FUN_036cee6c(lVar23,0,0);
                        if ((uVar26 & 1) != 0) {
                          plVar47 = (long *)unaff_x19[0x5d];
                          uVar67 = (**(code **)(*unaff_x19 + 0x518))();
                          if (plVar47 != (long *)0x0) {
                            (**(code **)(*plVar47 + 0x528))
                                      (plVar47,uVar67,*(undefined8 *)(*plVar47 + 0x530));
                            lVar23 = unaff_x19[0x5d];
                            if (lVar23 != 0) {
                              *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                              FUN_0357ee30(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                              plVar47 = (long *)unaff_x19[0x5d];
                              if (plVar47 != (long *)0x0) {
                                (**(code **)(*plVar47 + 0x7a8))
                                          (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7b0));
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
                    if ((((uVar15 - 0x2007 < 0x23) &&
                         ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                        (uVar15 - 10 < 2)) || (uVar15 == 0xa0)) {
LAB_03552b54:
                      if (((uVar15 != 0xad) && (uVar15 != 0x200b)) && (uVar15 != 0x2060)) {
                        lVar23 = *plVar2;
                        if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x50), lVar36 == 0))
                        goto LAB_035574b8;
                        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto LAB_035575f4;
                        lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
                        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                      }
                    }
                    else {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar28 = FUN_026b97f8(uVar15,0);
                      if ((uVar28 & 1) != 0) goto LAB_03552b54;
                    }
                    if (uVar15 == 0xa0) {
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x50), lVar23 == 0))
                      goto LAB_035574b8;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_035575f4;
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_03552fcc:
                      *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                    }
                  }
LAB_035530c4:
                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                  if (((int)unaff_x19[0x5c] == 1) && ((uVar15 == 0x2d || (!bVar14)))) {
                    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                    fVar72 = *(float *)(unaff_x19 + 0x3d);
                    iVar16 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                    if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                    fVar58 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                    lVar23 = unaff_x19[0xca];
                    fVar55 = in_stack_00000098;
                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                      fVar55 = 1.0;
                    }
                    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_035574b8;
                    fVar77 = *(float *)((long)unaff_x19 + 0x404);
                    fVar78 = *(float *)(lVar23 + 0x2c);
                    fVar56 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                    fVar57 = *(float *)(unaff_x19 + 0x6a);
                    fVar56 = fVar77 * (fVar72 / (float)iVar16) * fVar58 * fVar55 * fVar78 * fVar56;
                    fVar72 = *(float *)((long)unaff_x19 + 0x354);
                    if ((uVar15 == 10) &&
                       (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                      goto LAB_035574b8;
                      uVar18 = *(int *)((long)unaff_x19 + 0x494) - 1;
                      if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_035575f4;
                      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                      fVar55 = *(float *)(lVar23 + (long)(int)uVar18 * 0x178 + 0x60);
                      iVar16 = FUN_03776950(unaff_x19[0xcb] + 0x50,0);
                      if (unaff_x19[0xcb] == 0) goto LAB_035574b8;
                      fVar77 = (float)FUN_03776960(unaff_x19[0xcb] + 0x50,0);
                      lVar23 = unaff_x19[0xca];
                      fVar58 = in_stack_00000098;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar58 = 1.0;
                      }
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_035574b8;
                      fVar78 = *(float *)((long)unaff_x19 + 0x404);
                      fVar61 = *(float *)(lVar23 + 0x2c);
                      fVar56 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x50), lVar23 == 0))
                      goto LAB_035574b8;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_035575f4;
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      fVar57 = *(float *)(lVar23 + 0x60);
                      fVar72 = *(float *)(lVar23 + 100);
                      fVar56 = fVar78 * (fVar55 / (float)iVar16) * fVar77 * fVar58 * fVar61 * fVar56
                      ;
                    }
                    fVar77 = *(float *)(unaff_x19 + 0x9b);
                    fVar55 = 0.0;
                    fVar58 = 0.0;
                    if ((0.0 < fVar77) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')
                       ) {
                      fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                    }
                    fVar61 = *(float *)(unaff_x19 + 0x97);
                    fVar75 = *(float *)((long)unaff_x19 + 0x4cc);
                    fVar78 = *(float *)(unaff_x19 + 200);
                    if ((char)unaff_x19[0x1e] == '\0') {
                      if ((unaff_x19[0xca] == 0) ||
                         (lVar23 = *(long *)(unaff_x19[0xca] + 0x20), lVar23 == 0))
                      goto LAB_035574b8;
                      FUN_03776e6c(&stack0x000008a0,lVar23,0);
                      fVar55 = (float)FUN_03776cb4(&stack0x00001700,0);
                    }
                    puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    fVar83 = *(float *)(unaff_x19 + 0x6c);
                    fVar72 = (fVar81 - fVar57) - fVar72;
                    bVar13 = true;
                    if ((fVar83 <= fVar72) && (bVar13 = false, !NAN(fVar83))) {
                      bVar13 = fVar83 == -1.0;
                    }
                    if (!bVar13) {
                      fVar72 = fVar83;
                    }
                    fVar57 = 1.0;
                    if ((uVar39 & 0x18) != 0) {
                      fVar57 = DAT_00d38acc;
                    }
                    if (((fVar61 - (fVar75 - fVar77)) + fVar58 < fVar68) &&
                       (ABS(fVar78) + fVar56 * fVar55 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
                        < fVar57 * fVar72)) {
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0358c4f0();
                      lVar23 = *(long *)(*(long *)puVar11 + 0xb8);
                      memcpy(&stack0x00000528,(void *)(lVar23 + 0x788),0x378);
                      FUN_0209b210(lVar23 + 0x11f0,&stack0x00000528,
                                   *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                    }
                  }
                  lVar23 = *plVar2;
                  if (lVar23 == 0) goto LAB_035574b8;
                  lVar36 = *(long *)(lVar23 + 0x38);
                  uVar28 = (ulong)(uint)fVar82;
                  if (lVar36 == 0) goto LAB_035574b8;
                  if (*(uint *)(lVar36 + 0x18) <= *puVar1) goto LAB_035575f4;
                  uVar18 = *(uint *)(unaff_x19 + 0x95);
                  lVar36 = lVar36 + (long)(int)*puVar1 * 0x178;
                  *(uint *)(lVar36 + 100) = uVar18;
                  *(int *)(lVar36 + 0x68) = (int)unaff_x19[0x96];
                  if ((bVar14) || ((uVar15 < 0xe && ((1 << (ulong)(uVar15 & 0x1f) & 0x2c00U) != 0)))
                     ) {
                    lVar23 = *(long *)(lVar23 + 0x50);
                    if (lVar23 == 0) goto LAB_035574b8;
                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_035575f4;
                    if (*(int *)(lVar23 + (long)(int)uVar18 * 0x5c + 0x24) == 1) goto LAB_0355346c;
                  }
                  else {
                    lVar23 = *(long *)(lVar23 + 0x50);
                    if (lVar23 == 0) goto LAB_035574b8;
LAB_0355346c:
                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_035575f4;
                    *(int *)(lVar23 + (long)(int)uVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                  }
                  if (uVar15 == 9) {
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar72 = (float)FUN_03776a48(*unaff_x21 + 0x50,0);
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar58 = *(float *)(unaff_x19 + 200);
                    fVar55 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x21 + 0x1b9));
                    fVar72 = fVar82 * fVar72 * fVar55;
                    fVar55 = fVar72 * (float)(int)(fVar58 / fVar72);
                    uVar65 = (ulong)(uint)fVar55;
                    if (fVar55 <= fVar58) {
                      fVar55 = fVar58 + fVar72;
                    }
LAB_03553678:
                    *(float *)(unaff_x19 + 200) = fVar55;
                  }
                  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                    if ((char)unaff_x19[0x1e] == '\0') {
                      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                        fVar58 = 1.0;
                      }
                      else {
                        fVar58 = (float)thunk_FUN_036bc400(lVar24,0);
                      }
                      fVar55 = *(float *)(unaff_x19 + 200);
                      fVar56 = (float)FUN_03776cb4(&stack0x00001790,0);
                      if (unaff_x19[0x20] != 0) {
                        fVar72 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                        fVar55 = fVar55 + fVar72 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                   fVar82 * (fStack000000000000012c +
                                                            fVar58 * fVar56) +
                                                   fVar52 * (fStack00000000000000d0 +
                                                            fVar60 + *(float *)(unaff_x19[0x20] +
                                                                               0x1ac)));
                        *(float *)(unaff_x19 + 200) = fVar55;
                        goto joined_r0x035535c0;
                      }
                      goto LAB_035574b8;
                    }
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar55 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (*(float *)((long)unaff_x19 + 0x2ac) +
                             fVar82 * fStack000000000000012c +
                             fVar52 * (fStack00000000000000d0 +
                                      fVar60 + *(float *)(*unaff_x21 + 0x1ac)));
                    uVar65 = (ulong)(uint)fVar55;
                    fVar55 = *(float *)(unaff_x19 + 200) - fVar55;
                    *(float *)(unaff_x19 + 200) = fVar55;
                    if ((uVar15 == 0x200b) || (uVar17 != 0)) {
                      fVar72 = fVar52 * *(float *)((long)unaff_x19 + 0x2b4);
                      uVar65 = (ulong)(uint)fVar72;
                      fVar55 = fVar55 - fVar72;
                      goto LAB_03553678;
                    }
                  }
                  else {
                    if (*unaff_x21 == 0) goto LAB_035574b8;
                    fVar72 = *(float *)(unaff_x19 + 200);
                    fVar55 = fVar72 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      (*(float *)((long)unaff_x19 + 0x2ac) +
                                      (*(float *)(unaff_x19 + 0x56) - fVar59) +
                                      fVar52 * (fVar60 + *(float *)(*unaff_x21 + 0x1ac)));
                    *(float *)(unaff_x19 + 200) = fVar55;
joined_r0x035535c0:
                    if ((uVar15 == 0x200b) || (uVar65 = (ulong)(uint)fVar72, uVar17 != 0)) {
                      fVar72 = fVar52 * *(float *)((long)unaff_x19 + 0x2b4);
                      uVar65 = (ulong)(uint)fVar72;
                      fVar55 = fVar55 + fVar72;
                      goto LAB_03553678;
                    }
                  }
                  lVar23 = *plVar2;
                  if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                  goto LAB_035574b8;
                  uVar18 = *puVar1;
                  uVar39 = (uint)*(undefined8 *)(lVar36 + 0x18);
                  if (uVar39 <= uVar18) goto LAB_035575f4;
                  *(float *)(lVar36 + (long)(int)uVar18 * 0x178 + 0x144) = fVar55;
                  uVar41 = uVar15;
                  if ((int)uVar15 < 0xd) {
                    if ((uVar15 - 10 < 2) || (uVar15 == 3)) goto LAB_0355371c;
LAB_03553700:
                    if (((bool)(bVar14 & uVar15 == 0x2d)) || (uVar18 == uVar22)) goto LAB_0355371c;
                  }
                  else {
                    if (1 < uVar15 - 0x2028) {
                      if (uVar15 != 0xd) goto LAB_03553700;
                      uVar65 = 0;
                      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                      if (uVar18 != uVar22) goto LAB_03553c8c;
                    }
LAB_0355371c:
                    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                      fVar72 = *(float *)(unaff_x19 + 0x99);
                      fVar55 = *(float *)(unaff_x19 + 0x9a);
                      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      fVar72 = fVar72 - fVar55;
                      if (((fVar63 < ABS(fVar72)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
                         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                        FUN_0358c860(fVar72);
                        *(float *)((long)unaff_x19 + 0x4c4) =
                             *(float *)((long)unaff_x19 + 0x4c4) - fVar72;
                        *(float *)(unaff_x19 + 0x9b) = fVar72 + *(float *)(unaff_x19 + 0x9b);
                        puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                        lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                          lVar23 = *(long *)puVar11;
                        }
                        lVar36 = *(long *)(lVar23 + 0xb8);
                        if (*(int *)(lVar36 + 0x7ac) == (int)unaff_x19[0x95]) {
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                            lVar36 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                          }
                          FUN_0209b778(lVar36 + 0x11f0,&stack0x000008a0,
                                       *(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
                          puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                          lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                          memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x000008a0,0x378);
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (*(long *)(lVar23 + 0xb8) + 0x818,0);
                          lVar23 = *(long *)(*(long *)puVar11 + 0xb8);
                          *(float *)(lVar23 + 0x7bc) = fVar72 + *(float *)(lVar23 + 0x7bc);
                          *(float *)(lVar23 + 0x800) = fVar72 + *(float *)(lVar23 + 0x800);
                          memcpy(&stack0x000001b0,(void *)(lVar23 + 0x788),0x378);
                          FUN_0209b210(lVar23 + 0x11f0,&stack0x000001b0,
                                       *(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo);
                        }
                      }
                    }
                    fVar58 = *(float *)(unaff_x19 + 0x9b);
                    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                    fVar55 = *(float *)((long)unaff_x19 + 0x4cc) - fVar58;
                    fVar72 = *(float *)((long)unaff_x19 + 0x4c4);
                    if (fVar55 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                      fVar72 = fVar55;
                    }
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar72;
                    fVar56 = *(float *)(unaff_x19 + 0x99);
                    if (in_stack_000017d4 == '\0') {
                      fVar86 = fVar72;
                    }
                    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                      in_stack_000017d4 = '\x01';
                    }
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x50), lVar36 == 0))
                    goto LAB_035574b8;
                    uVar18 = *(uint *)(unaff_x19 + 0x95);
                    if (*(uint *)(lVar36 + 0x18) <= uVar18) goto LAB_035575f4;
                    lVar49 = unaff_x19[0x93];
                    lVar27 = lVar36 + (long)(int)uVar18 * 0x5c;
                    *(int *)(lVar27 + 0x34) = (int)lVar49;
                    uVar39 = *(uint *)(unaff_x19 + 0x93);
                    if ((int)lVar49 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                      uVar39 = *(uint *)((long)unaff_x19 + 0x49c);
                    }
                    *(uint *)((long)unaff_x19 + 0x49c) = uVar39;
                    *(uint *)(lVar27 + 0x38) = uVar39;
                    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
                    *(undefined4 *)(lVar27 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                    iVar16 = *(int *)((long)unaff_x19 + 0x49c);
                    if ((int)uVar39 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                      iVar16 = *(int *)((long)unaff_x19 + 0x4a4);
                    }
                    *(int *)((long)unaff_x19 + 0x4a4) = iVar16;
                    *(int *)(lVar27 + 0x40) = iVar16;
                    *(int *)(lVar27 + 0x24) =
                         (*(int *)(lVar27 + 0x3c) - *(int *)(lVar27 + 0x34)) + 1;
                    *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_035574b8;
                    if (*(uint *)(lVar23 + 0x18) <= uVar39) goto LAB_035575f4;
                    uVar80 = *(undefined4 *)(lVar23 + (long)(int)uVar39 * 0x178 + 0x11c);
                    lVar36 = lVar36 + (long)(int)uVar18 * 0x5c;
                    *(float *)(lVar36 + 0x70) = fVar55;
                    *(undefined4 *)(lVar36 + 0x6c) = uVar80;
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar36 = *(long *)(lVar23 + 0x50), lVar36 == 0))
                    goto LAB_035574b8;
                    if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_035574b8;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                    goto LAB_035575f4;
                    fVar56 = fVar56 - fVar58;
                    uVar65 = (ulong)(uint)fVar56;
                    lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                    *(undefined4 *)(lVar36 + 0x74) =
                         *(undefined4 *)
                          (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * 0x178 + 0x128);
                    *(float *)(lVar36 + 0x78) = fVar56;
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar49 = *(long *)(lVar23 + 0x50), lVar49 == 0))
                    goto LAB_035574b8;
                    lVar27 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                    if (*(uint *)(lVar49 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_035575f4;
                    lVar36 = lVar49 + lVar27 * 0x5c;
                    *(float *)(lVar36 + 0x44) =
                         *(float *)(lVar36 + 0x74) - fVar82 * fStack000000000000015c;
                    *(float *)(lVar36 + 0x5c) = fStack00000000000000fc;
                    if (*(int *)(lVar36 + 0x24) == 1) {
                      *(int *)(lVar49 + lVar27 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                    }
                    if ((*unaff_x21 == 0) || (lVar36 = *(long *)(lVar23 + 0x38), lVar36 == 0))
                    goto LAB_035574b8;
                    lVar43 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                    uVar39 = (uint)*(undefined8 *)(lVar36 + 0x18);
                    if (uVar39 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_035575f4;
                    if ((*(char *)(lVar36 + lVar43 * 0x178 + 0x194) == '\0') &&
                       (lVar43 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                       uVar39 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_035575f4;
                    lVar49 = lVar49 + lVar27 * 0x5c;
                    fVar82 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (fVar52 * (fStack00000000000000d0 +
                                       fVar60 + *(float *)(*unaff_x21 + 0x1ac)) -
                             *(float *)((long)unaff_x19 + 0x2ac));
                    fVar72 = -fVar82;
                    if ((char)unaff_x19[0x1e] != '\0') {
                      fVar72 = fVar82;
                    }
                    *(float *)(lVar49 + 0x58) = *(float *)(lVar36 + lVar43 * 0x178 + 0x144) + fVar72
                    ;
                    *(float *)(lVar49 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                    *(float *)(lVar49 + 0x54) = fVar55;
                    *(float *)(lVar49 + 0x48) = fVar51 * param_1 + (fVar56 - fVar55);
                    *(float *)(lVar49 + 0x4c) = fVar56;
                    if ((int)uVar15 < 0x2d) {
                      if (uVar15 - 10 < 2) {
LAB_03553b60:
                        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        FUN_0358c4f0();
                        lVar23 = unaff_x19[0x6d];
                        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                        iVar16 = (int)unaff_x19[0x95] + 1;
                        *(int *)(unaff_x19 + 0x95) = iVar16;
                        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                        if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                          if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar16) {
                            FUN_0358ca18();
                            lVar23 = unaff_x19[0x6d];
                            if (lVar23 == 0) goto LAB_035574b8;
                          }
                          lVar23 = *(long *)(lVar23 + 0x38);
                          if (lVar23 != 0) {
                            if (*puVar1 < *(uint *)(lVar23 + 0x18)) {
                              fVar72 = *(float *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x154);
                              if (*(float *)(unaff_x19 + 0x58) == DAT_00d38ba4) {
                                if ((uVar15 == 0x2029) || (fVar82 = 0.0, uVar15 == 10)) {
                                  fVar82 = *(float *)((long)unaff_x19 + 0x2cc);
                                }
                                uVar31 = 0;
                                fVar82 = fVar72 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                         fVar51 * (param_1 + *(float *)((long)unaff_x19 + 700)) +
                                         fVar52 * (*(float *)(unaff_x19 + 0x57) + fVar82) +
                                         *(float *)(unaff_x19 + 0x9b);
                              }
                              else {
                                if ((uVar15 == 0x2029) || (fVar82 = 0.0, uVar15 == 10)) {
                                  fVar82 = *(float *)((long)unaff_x19 + 0x2cc);
                                }
                                uVar31 = 1;
                                fVar82 = *(float *)(unaff_x19 + 0x9b) +
                                         *(float *)(unaff_x19 + 0x58) +
                                         fVar52 * (*(float *)(unaff_x19 + 0x57) + fVar82);
                              }
                              *(float *)(unaff_x19 + 0x9b) = fVar82;
                              *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar31;
                              puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                              lVar23 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_01a58e78();
                                lVar23 = *(long *)puVar11;
                              }
                              uVar67 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                              *(float *)(unaff_x19 + 0x9a) = fVar72;
                              uVar65 = NEON_rev64(uVar67,4);
                              unaff_x19[0x99] = uVar65;
                              *(float *)(unaff_x19 + 200) =
                                   *(float *)(unaff_x19 + 0x81) + 0.0 +
                                   *(float *)((long)unaff_x19 + 0x40c);
                              FUN_0358c4f0();
                              FUN_0358c4f0();
                              *(int *)((long)unaff_x19 + 0x494) =
                                   *(int *)((long)unaff_x19 + 0x494) + 1;
                              bVar8 = true;
                              bVar10 = 1;
                              goto LAB_03550bd0;
                            }
                            goto LAB_035575f4;
                          }
                        }
                        goto LAB_035574b8;
                      }
                      if (uVar15 == 3) {
                        if (unaff_x19[0x8f] == 0) goto LAB_035574b8;
                        uVar85 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                        uVar41 = 3;
                      }
                    }
                    else if ((uVar15 - 0x2028 < 2) || (uVar15 == 0x2d)) goto LAB_03553b60;
                  }
LAB_03553c8c:
                  uVar18 = *puVar1;
                  if (uVar39 <= uVar18) goto LAB_035575f4;
                  if (*(char *)(lVar36 + (long)(int)uVar18 * 0x178 + 0x194) != '\0') {
                    lVar36 = lVar36 + (long)(int)uVar18 * 0x178;
                    uVar26 = *(ulong *)(lVar36 + 0x11c);
                    uVar65 = *(ulong *)((long)unaff_x19 + 0x4dc);
                    *(ulong *)((long)unaff_x19 + 0x4dc) =
                         uVar65 ^ (uVar65 ^ uVar26) &
                                  ~CONCAT44(-(uint)((float)(uVar65 >> 0x20) <
                                                   (float)(uVar26 >> 0x20)),
                                            -(uint)((float)uVar65 < (float)uVar26));
                    uVar26 = *(ulong *)((long)unaff_x19 + 0x4e4);
                    uVar65 = *(ulong *)(lVar36 + 0x128);
                    *(ulong *)((long)unaff_x19 + 0x4e4) =
                         uVar26 ^ (uVar26 ^ uVar65) &
                                  ~CONCAT44(-(uint)((float)(uVar65 >> 0x20) <
                                                   (float)(uVar26 >> 0x20)),
                                            -(uint)((float)uVar65 < (float)uVar26));
                  }
                  if (((int)unaff_x19[0x5c] == 5) &&
                     ((0xd < uVar41 || ((1 << (ulong)(uVar41 & 0x1f) & 0x2c00U) == 0)))) {
                    lVar36 = *(long *)(lVar23 + 0x58);
                    if (lVar36 == 0) goto LAB_035574b8;
                    iVar16 = (int)unaff_x19[0x96] + 1;
                    if (*(int *)(lVar36 + 0x18) < iVar16) {
                      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_01ff02b8((long *)(lVar23 + 0x58),iVar16,1,
                                   *(undefined8 *)OVRPlugin_MeshType_TypeInfo);
                      lVar23 = *plVar2;
                      if (lVar23 == 0) goto LAB_035574b8;
                    }
                    lVar36 = *(long *)(lVar23 + 0x58);
                    if (lVar36 == 0) goto LAB_035574b8;
                    uVar39 = *(uint *)(unaff_x19 + 0x96);
                    lVar49 = (long)(int)uVar39;
                    uVar18 = *(uint *)(lVar36 + 0x18);
                    if (uVar18 <= uVar39) goto LAB_035575f4;
                    lVar27 = lVar36 + lVar49 * 0x14;
                    fVar82 = *(float *)(lVar27 + 0x30);
                    uVar65 = (ulong)(uint)fVar82;
                    *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                    fVar72 = *(float *)((long)unaff_x19 + 0x4c4);
                    if (fVar82 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                      fVar72 = fVar82;
                    }
                    *(float *)(lVar27 + 0x30) = fVar72;
                    uVar41 = *(uint *)((long)unaff_x19 + 0x494);
                    if (uVar41 == 0 && uVar39 == 0) {
                      *(uint *)(lVar36 + (ulong)uVar39 * 0x14 + 0x20) = uVar41;
                    }
                    else {
                      uVar7 = uVar41 - 1;
                      if (0 < (int)uVar41) {
                        lVar23 = *(long *)(lVar23 + 0x38);
                        if (lVar23 == 0) goto LAB_035574b8;
                        if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_035575f4;
                        if (uVar39 != *(uint *)(lVar23 + (ulong)uVar7 * 0x178 + 0x68)) {
                          if (uVar39 - 1 < uVar18) {
                            *(uint *)(lVar36 + 0x20 + (long)(int)(uVar39 - 1) * 0x14 + 4) = uVar7;
                            *(uint *)(lVar36 + 0x20 + lVar49 * 0x14) = uVar41;
                            goto LAB_03553d10;
                          }
                          goto LAB_035575f4;
                        }
                      }
                      if (uVar41 == uVar22) {
                        *(uint *)(lVar36 + lVar49 * 0x14 + 0x24) = uVar22;
                      }
                    }
                  }
LAB_03553d10:
                  puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  unaff_x29 = (undefined8 *)&stack0x000008a0;
                  if (((char)unaff_x19[0x5b] == '\0') &&
                     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                  goto LAB_035542ac;
                  if ((uVar17 == 0) &&
                     (((uVar15 != 0x2d && (uVar15 != 0x200b)) && (uVar15 != 0xad)))) {
                    if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_03553ef0:
                      if (((((0x2bfd < uVar15 - 0xac01) && (0xfd < uVar15 - 0x1101)) &&
                           (0x1d < uVar15 - 0xa961)) ||
                          (uVar26 = FUN_03597a54(0), (uVar26 & 1) != 0)) &&
                         ((((0xed < uVar15 - 0xff01 && (0x1d < uVar15 - 0xfe31)) &&
                           (0x717d < uVar15 - 0x2e81)) && (0x1fd < uVar15 - 0xf901))))
                      goto LAB_03553f78;
                      lVar23 = FUN_035978e8(0);
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_035574b8;
                      uVar18 = FUN_0219c130(*(long *)(lVar23 + 0x10),&stack0x000008a0,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                      if ((int)uVar22 <= (int)*puVar1) {
                        in_stack_000008a0 = uVar15;
                        if ((uVar18 & 1) == 0) {
LAB_03554270:
                          if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          FUN_0358c4f0();
                          goto LAB_035542a8;
                        }
LAB_035541dc:
                        if (uVar50 != uVar33 || ((bVar10 ^ 0xff) & 1) != 0) goto LAB_035542ac;
                        if (uVar17 != 0) goto UnityEngine_Animator__get_bodyPositionInternal;
                        goto LAB_0355422c;
                      }
                      lVar23 = FUN_035978e8(0);
                      if (((lVar23 == 0) || (*plVar2 == 0)) ||
                         (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
                      if (*(uint *)(lVar36 + 0x18) <= *puVar1 + 1) goto LAB_035575f4;
                      if (*(long *)(lVar23 + 0x18) == 0) goto LAB_035574b8;
                      in_stack_000008a0 =
                           (uint)*(ushort *)(lVar36 + (long)(int)(*puVar1 + 1) * 0x178 + 0x20);
                      uVar26 = FUN_0219c130(*(long *)(lVar23 + 0x18),&stack0x000008a0,
                                            *(undefined8 *)
                                             OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                      if ((uVar18 & 1) != 0) goto LAB_035541dc;
                      if ((uVar26 & 1) == 0) goto LAB_03554270;
                      if (bVar10 == 0) goto LAB_035542a8;
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
                      if (bVar10 == 0) goto LAB_035542a8;
UnityEngine_Animator__set_animatePhysics:
                      if (!bVar9 && uVar15 == 0xad)
                      goto UnityEngine_Animator__get_bodyPositionInternal;
LAB_0355422c:
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0358c4f0();
                    }
                    bVar10 = 1;
                  }
                  else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_03553f78:
                    if (bVar10 != 0) {
                      if (uVar17 == 0) goto UnityEngine_Animator__set_animatePhysics;
UnityEngine_Animator__get_bodyPositionInternal:
                      if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      FUN_0358c4f0();
                      goto LAB_0355422c;
                    }
LAB_035542a8:
                    bVar10 = 0;
                  }
                  else {
                    if (((uVar15 - 0x2007 < 0x29) &&
                        ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                       ((uVar15 == 0xa0 || (uVar15 == 0x2060)))) goto LAB_03553ef0;
                    if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    FUN_0358c4f0();
                    bVar10 = 0;
                    *(undefined4 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0xe78) = 0xffffffff;
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
                  if (iVar16 == 0) goto LAB_03550fec;
LAB_03550c00:
                  if (iVar16 != 1) {
                    lVar23 = *plVar2;
                    fVar55 = 0.0;
                    fVar82 = 0.0;
                    if (uVar15 != 3 && uVar15 != 0xad) {
                      fVar82 = fVar72;
                    }
                    if (lVar23 != 0) {
                      fVar58 = 0.0;
                      fVar56 = 0.0;
                      goto LAB_035514cc;
                    }
                    goto LAB_035574b8;
                  }
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *unaff_x28 = *(long *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x40);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_035574b8;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                  *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                       *(undefined4 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x48);
                  if ((unaff_x19[0xd3] == 0) ||
                     (lVar23 = UnityEngine_Material__DisableKeyword(unaff_x19[0xd3],0), lVar23 == 0)
                     ) goto LAB_035574b8;
                  FUN_02215a88(lVar23,*(undefined4 *)((long)unaff_x19 + 0x6a4),&stack0x000008a0,
                               *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
                  puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  lVar23 = CONCAT44(in_stack_000008a4,in_stack_000008a0);
                  if (lVar23 != 0) {
                    if (uVar15 == 0x3c) {
                      uVar15 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
                    }
                    else {
                      lVar49 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                      if (*(int *)(lVar49 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar49 = *(long *)puVar11;
                      }
                      *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                           *(undefined4 *)(*(long *)(lVar49 + 0xb8) + 0x68);
                    }
                    if (unaff_x19[0x20] != 0) {
                      fVar72 = *(float *)(unaff_x19 + 0x3d);
                      memmove(&stack0x00001720,(void *)(unaff_x19[0x20] + 0x50),0x60);
                      iVar16 = FUN_03776950(&stack0x00001720,0);
                      if (*unaff_x21 != 0) {
                        memmove(&stack0x00001720,(void *)(*unaff_x21 + 0x50),0x60);
                        fVar55 = (float)FUN_03776960(&stack0x00001720,0);
                        fVar82 = in_stack_00000098;
                        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                          fVar82 = 1.0;
                        }
                        if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                        fVar82 = (fVar72 / (float)iVar16) * fVar55 * fVar82;
                        iVar16 = FUN_03776950(unaff_x19[0xd3] + 0x48,0);
                        fVar72 = *(float *)(unaff_x19 + 0x3d);
                        if (iVar16 < 1) {
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          iVar16 = FUN_03776950(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar60 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          fVar56 = in_stack_00000098;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar56 = 1.0;
                          }
                          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                          fVar77 = (float)FUN_03776980(unaff_x19[0x20] + 0x50,0);
                          if (*(long *)(lVar23 + 0x20) == 0) goto LAB_035574b8;
                          FUN_03776e6c(&stack0x000008a0,*(long *)(lVar23 + 0x20),0);
                          fVar57 = (float)FUN_03776c9c(&stack0x00001700,0);
                          if (*(long *)(lVar23 + 0x20) == 0) goto LAB_035574b8;
                          fVar78 = *(float *)(lVar23 + 0x2c);
                          fVar59 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar58 = (float)FUN_03776980(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar61 = (float)FUN_037769b0(*unaff_x21 + 0x50,0);
                          if (*unaff_x21 == 0) goto LAB_035574b8;
                          fVar75 = *(float *)((long)unaff_x19 + 0x404);
                          fVar55 = (float)FUN_03776960(*unaff_x21 + 0x50,0);
                          if (unaff_x19[0x20] == 0) goto LAB_035574b8;
                          fVar55 = fVar82 * fVar61 * fVar75 * fVar55;
                          fVar56 = (fVar72 / (float)iVar16) * fVar60 * fVar56;
                          fVar72 = fVar56 * (fVar77 / fVar57) * fVar78 * fVar59;
                          fVar56 = fVar56 / fVar72;
                          fVar58 = fVar56 * fVar58;
                          fVar82 = (float)FUN_037769c0(unaff_x19[0x20] + 0x50,0);
                          fVar56 = fVar56 * fVar82;
                        }
                        else {
                          if (*unaff_x28 == 0) goto LAB_035574b8;
                          iVar16 = FUN_03776950(*unaff_x28 + 0x48,0);
                          if (*unaff_x28 == 0) goto LAB_035574b8;
                          fVar56 = (float)FUN_03776960(*unaff_x28 + 0x48,0);
                          if (*(long *)(lVar23 + 0x20) == 0) goto LAB_035574b8;
                          fVar77 = *(float *)(lVar23 + 0x2c);
                          fVar60 = in_stack_00000098;
                          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                            fVar60 = 1.0;
                          }
                          fVar57 = (float)FUN_03776ea8(*(long *)(lVar23 + 0x20),0);
                          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                          fVar58 = (float)FUN_03776980(unaff_x19[0xd3] + 0x48,0);
                          if (*unaff_x28 == 0) goto LAB_035574b8;
                          fVar59 = (float)FUN_037769b0(*unaff_x28 + 0x48,0);
                          if (*unaff_x28 == 0) goto LAB_035574b8;
                          fVar78 = *(float *)((long)unaff_x19 + 0x404);
                          fVar55 = (float)FUN_03776960(*unaff_x28 + 0x48,0);
                          if (unaff_x19[0xd3] == 0) goto LAB_035574b8;
                          fVar55 = fVar82 * fVar59 * fVar78 * fVar55;
                          fVar72 = (fVar72 / (float)iVar16) * fVar56 * fVar60 * fVar77 * fVar57;
                          fVar56 = (float)FUN_037769c0(unaff_x19[0xd3] + 0x48,0);
                        }
                        *plVar48 = lVar23;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (plVar48,lVar23);
                        if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
                          if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                          lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                          *(undefined4 *)(lVar23 + 0x2c) = 1;
                          *(float *)(lVar23 + 0x160) = fVar72;
                          *(long *)(lVar23 + 0x40) = *unaff_x28;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
                            if (*(uint *)(lVar23 + 0x18) <= *puVar1) goto LAB_035575f4;
                            *(long *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x38) = *unaff_x21;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            lVar23 = *plVar2;
                            if ((lVar23 != 0) && (lVar49 = *(long *)(lVar23 + 0x38), lVar49 != 0)) {
                              if (*puVar1 < *(uint *)(lVar49 + 0x18)) {
                                fStack000000000000015c = 0.0;
                                *(int *)(lVar49 + (long)(int)*puVar1 * 0x178 + 0x58) =
                                     (int)unaff_x19[0x24];
                                *(int *)(unaff_x19 + 0x24) = (int)lVar36;
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
              uVar26 = FUN_03586568();
              if (((uVar26 & 1) == 0) ||
                 (uVar85 = in_stack_0000178c, *(int *)((long)unaff_x19 + 0x644) != 0))
              goto LAB_035509d4;
            }
LAB_03550bd0:
            uVar85 = uVar85 + 1;
            lVar23 = unaff_x19[0x8f];
            in_stack_000017dc = uVar15;
            if (lVar23 == 0) goto LAB_035574b8;
            goto LAB_0355087c;
          }
        }
      }
    }
  }
  goto LAB_035574b8;
LAB_03554e78:
  uVar85 = uVar22 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar85) goto LAB_035575f4;
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x50), lVar36 == 0)) goto LAB_035574b8;
  lVar27 = (long)(int)uVar85;
  lVar49 = lVar23 + lVar27 * 0x178;
  uVar17 = *(uint *)(lVar49 + 100);
  if (*(uint *)(lVar36 + 0x18) <= uVar17) goto LAB_035575f4;
  lVar45 = (long)(int)uVar17;
  lVar36 = lVar36 + lVar45 * 0x5c;
  lVar43 = *(long *)(lVar49 + 0x38);
  uVar5 = *(ushort *)(lVar49 + 0x20);
  uVar33 = *(uint *)(lVar36 + 0x3c);
  uVar50 = *(uint *)(lVar36 + 0x68);
  iVar4 = *(int *)(lVar36 + 0x20);
  iVar20 = *(int *)(lVar36 + 0x28);
  iVar21 = *(int *)(lVar36 + 0x2c);
  uVar18 = *(uint *)(lVar36 + 0x40);
  lVar49 = (long)(int)uVar18;
  fVar72 = *(float *)(lVar36 + 0x4c);
  fVar55 = *(float *)(lVar36 + 0x54);
  fVar86 = *(float *)(lVar36 + 0x58);
  fVar60 = *(float *)(lVar36 + 0x5c);
  fVar58 = *(float *)(lVar36 + 0x60);
  fVar56 = *(float *)(lVar36 + 0x6c);
  fVar77 = *(float *)(lVar36 + 0x70);
  fVar68 = *(float *)(lVar36 + 0x74);
  fVar82 = *(float *)(lVar36 + 0x78);
  uVar39 = (uint)uVar5;
  if ((int)uVar50 < 9) {
    switch(uVar50) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack00000000000000fc = fVar58 + 0.0;
      }
      else {
        fStack00000000000000fc = 0.0 - fVar86;
      }
      break;
    case 2:
LAB_03555018:
      fStack00000000000000fc = (fVar58 + fVar60 * 0.5) - fVar86 * 0.5;
      break;
    default:
      goto switchD_03554f58_caseD_3;
    case 4:
      fStack00000000000000fc = (fVar60 + fVar58) - fVar86;
      if ((char)unaff_x19[0x1e] != '\0') {
        fStack00000000000000fc = fVar60 + fVar58;
      }
      break;
    case 8:
      goto switchD_03554f58_caseD_8;
    }
LAB_03555088:
    uStack00000000000000e8 = 0;
  }
  else if (uVar50 == 0x10) {
switchD_03554f58_caseD_8:
    if (uVar5 < 0xad) {
      if ((uVar5 != 3) && (uVar5 != 10)) goto LAB_03554fac;
    }
    else if ((uVar5 != 0xad) && ((uVar5 != 0x200b && (uVar5 != 0x2060)))) {
LAB_03554fac:
      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035575f4;
      uVar6 = *(undefined2 *)(lVar23 + (long)(int)uVar33 * 0x178 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar28 = FUN_026b8cc4(uVar6,0);
      if ((uVar28 & 1) == 0) {
        bVar13 = (int)uVar17 < (int)unaff_x19[0x95];
      }
      else {
        bVar13 = false;
      }
      if ((fVar86 <= fVar60) && (!bVar13 && uVar50 >> 4 == 0)) {
        fStack00000000000000fc = fVar58;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar60 + fVar58;
        }
        goto LAB_03555088;
      }
      if (((uVar22 == 1) || (uVar17 != uVar15)) || (uVar85 == *(uint *)((long)unaff_x19 + 0x324))) {
        fStack00000000000000fc = fVar58;
        if ((char)unaff_x19[0x1e] != '\0') {
          fStack00000000000000fc = fVar60 + fVar58;
        }
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000028 = FUN_026b97f8(uVar39,0);
        uStack00000000000000e8 = 0;
      }
      else {
        cVar32 = (char)unaff_x19[0x1e];
        fVar58 = -fVar86;
        if (cVar32 != '\0') {
          fVar58 = fVar86;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_035575f4;
        iVar21 = (int)*(char *)(lVar23 + (long)(int)uVar33 * 0x178 + 0x194) +
                 (-iVar4 - (uStack0000000000000028 & 1)) + iVar21 + -1;
        if (iVar21 < 1) {
          fVar86 = 1.0;
          iVar21 = 1;
        }
        else {
          fVar86 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar39 == 9) {
LAB_03556e74:
          fVar86 = 1.0 - fVar86;
        }
        else {
          if (uVar39 != 0xa0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar28 = FUN_026b97f8(uVar39,0);
            cVar32 = (char)unaff_x19[0x1e];
            if ((uVar28 & 1) != 0) goto LAB_03556e74;
          }
          iVar21 = (iVar4 - (~uStack0000000000000028 & 1)) + iVar20;
        }
        fVar86 = ((fVar60 + fVar58) * fVar86) / (float)iVar21;
        if (cVar32 == '\0') {
          fStack00000000000000fc = fStack00000000000000fc + fVar86;
          uStack00000000000000e8 =
               CONCAT44((float)((ulong)uStack00000000000000e8 >> 0x20) + 0.0,
                        (float)uStack00000000000000e8 + 0.0);
        }
        else {
          fStack00000000000000fc = fStack00000000000000fc - fVar86;
        }
      }
    }
  }
  else if (uVar50 == 0x20) {
    fVar86 = fVar56 + fVar68;
    goto LAB_03555018;
  }
switchD_03554f58_caseD_3:
  uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar50 <= uVar85) goto LAB_035575f4;
  lVar36 = lVar23 + lVar27 * 0x178;
  fVar60 = fStack00000000000000c4 + fStack00000000000000fc;
  fVar86 = (float)uVar67 + (float)uStack00000000000000e8;
  fVar58 = (float)((ulong)uVar67 >> 0x20) + (float)((ulong)uStack00000000000000e8 >> 0x20);
  if (*(char *)(lVar36 + 0x194) == '\0') goto LAB_03555938;
  iVar20 = *(int *)(lVar23 + lVar27 * 0x178 + 0x2c);
  if (iVar20 != 0) goto LAB_0355574c;
  fVar63 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar17,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar35 = lVar23 + lVar27 * 0x178;
    *(undefined4 *)(lVar35 + 0x84) = 0;
    *(undefined4 *)(lVar35 + 0xac) = 0;
    *(undefined4 *)(lVar35 + 0xd4) = 0x3f800000;
    fVar63 = 1.0;
    break;
  case 1:
    fVar82 = *(float *)(lVar23 + lVar27 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar35 = lVar23 + lVar27 * 0x178;
      fVar68 = (fStack00000000000000fc + fVar82) - *(float *)((long)unaff_x19 + 0x4dc);
      fVar82 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
      goto LAB_035551cc;
    }
    lVar35 = lVar23 + lVar27 * 0x178;
    fVar68 = fVar68 - fVar56;
    *(float *)(lVar35 + 0x84) = fVar63 + (fVar82 - fVar56) / fVar68;
    *(float *)(lVar35 + 0xac) = fVar63 + (*(float *)(lVar35 + 0x98) - fVar56) / fVar68;
    *(float *)(lVar35 + 0xd4) = fVar63 + (*(float *)(lVar35 + 0xc0) - fVar56) / fVar68;
    fVar63 = fVar63 + (*(float *)(lVar35 + 0xe8) - fVar56) / fVar68;
    break;
  case 2:
    lVar35 = lVar23 + lVar27 * 0x178;
    fVar82 = *(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc);
    fVar68 = (fStack00000000000000fc + *(float *)(lVar35 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4dc);
LAB_035551cc:
    *(float *)(lVar35 + 0x84) = fVar63 + fVar68 / fVar82;
    *(float *)(lVar35 + 0xac) =
         fVar63 + ((fStack00000000000000fc + *(float *)(lVar35 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    *(float *)(lVar35 + 0xd4) =
         fVar63 + ((fStack00000000000000fc + *(float *)(lVar35 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4dc)) /
                  (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    fVar63 = fVar63 + ((fStack00000000000000fc + *(float *)(lVar35 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4dc)) /
                      (*(float *)((long)unaff_x19 + 0x4e4) - *(float *)((long)unaff_x19 + 0x4dc));
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar35 = lVar23 + lVar27 * 0x178;
      *(undefined4 *)(lVar35 + 0x88) = 0;
      *(undefined4 *)(lVar35 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar35 + 0xd8) = 0;
      *(undefined4 *)(lVar35 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar35 = lVar23 + lVar27 * 0x178;
      fVar82 = fVar82 - fVar77;
      fVar68 = fVar63 + (*(float *)(lVar35 + 0x74) - fVar77) / fVar82;
      fVar82 = fVar63 + (*(float *)(lVar35 + 0x9c) - fVar77) / fVar82;
      *(float *)(lVar35 + 0x88) = fVar68;
      *(float *)(lVar35 + 0xb0) = fVar82;
      *(float *)(lVar35 + 0xd8) = fVar68;
      *(float *)(lVar35 + 0x100) = fVar82;
      break;
    case 2:
      lVar35 = lVar23 + lVar27 * 0x178;
      fVar68 = fVar63 + (*(float *)(lVar35 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar35 + 0x88) = fVar68;
      fVar82 = *(float *)(unaff_x19 + 0x9c);
      fVar56 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar35 + 0xd8) = fVar68;
      fVar68 = fVar63 + (*(float *)(lVar35 + 0x9c) - fVar82) / (fVar56 - fVar82);
      *(float *)(lVar35 + 0xb0) = fVar68;
      *(float *)(lVar35 + 0x100) = fVar68;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
      uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar50 <= uVar85) goto LAB_035575f4;
    lVar35 = lVar23 + lVar27 * 0x178;
    fVar68 = *(float *)(lVar35 + 0x15c);
    fVar82 = (1.0 - (*(float *)(lVar35 + 0x88) + *(float *)(lVar35 + 0xb0)) * fVar68) * 0.5;
    fVar56 = fVar63 + *(float *)(lVar35 + 0x88) * fVar68 + fVar82;
    fVar63 = fVar63 + fVar82 + *(float *)(lVar35 + 0xb0) * fVar68;
    *(float *)(lVar35 + 0x84) = fVar56;
    *(float *)(lVar35 + 0xac) = fVar56;
    *(float *)(lVar35 + 0xd4) = fVar63;
    break;
  default:
    goto switchD_0355512c_default;
  }
  *(float *)(lVar23 + lVar27 * 0x178 + 0xfc) = fVar63;
switchD_0355512c_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar50 <= uVar85) goto LAB_035575f4;
    lVar35 = lVar23 + lVar27 * 0x178;
    *(undefined4 *)(lVar35 + 0x88) = 0;
    *(undefined4 *)(lVar35 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar35 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar35 + 0x100) = 0;
    break;
  case 1:
    if (uVar85 < uVar50) {
      lVar35 = lVar23 + lVar27 * 0x178;
      fVar72 = fVar72 - fVar55;
      fVar63 = (*(float *)(lVar35 + 0x74) - fVar55) / fVar72;
      fVar72 = (*(float *)(lVar35 + 0x9c) - fVar55) / fVar72;
      *(float *)(lVar35 + 0x88) = fVar63;
      goto UnityEngine_Animator__set_stabilizeFeet;
    }
    goto LAB_035575f4;
  case 2:
    if (uVar50 <= uVar85) goto LAB_035575f4;
    lVar35 = lVar23 + lVar27 * 0x178;
    fVar63 = (*(float *)(lVar35 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar35 + 0x88) = fVar63;
    fVar72 = (*(float *)(lVar35 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
UnityEngine_Animator__set_stabilizeFeet:
    *(float *)(lVar35 + 0xb0) = fVar72;
    *(float *)(lVar35 + 0xd8) = fVar72;
    *(float *)(lVar35 + 0x100) = fVar63;
    break;
  case 3:
    if (uVar50 <= uVar85) goto LAB_035575f4;
    lVar35 = lVar23 + lVar27 * 0x178;
    fVar72 = *(float *)(lVar35 + 0x15c);
    fVar68 = (1.0 - (*(float *)(lVar35 + 0x84) + *(float *)(lVar35 + 0xd4)) / fVar72) * 0.5;
    fVar63 = *(float *)(lVar35 + 0x84) / fVar72 + fVar68;
    fVar68 = fVar68 + *(float *)(lVar35 + 0xd4) / fVar72;
    *(float *)(lVar35 + 0x88) = fVar63;
    *(float *)(lVar35 + 0xb0) = fVar68;
    *(float *)(lVar35 + 0x100) = fVar63;
    *(float *)(lVar35 + 0xd8) = fVar68;
  }
  if (uVar50 <= uVar85) goto LAB_035575f4;
  lVar35 = lVar23 + lVar27 * 0x178;
  fVar63 = *(float *)(lVar35 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar35 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar27 * 0x178 + 400) & 1) != 0)) {
    fVar63 = -fVar63;
  }
  fVar68 = fVar51;
  if (((iVar19 == 2) || (fVar68 = fVar53, iVar19 == 1)) || (fVar68 = fVar51 / fVar52, iVar19 == 0))
  {
    fVar63 = fVar68 * fVar63;
  }
  lVar35 = lVar23 + lVar27 * 0x178;
  fVar72 = *(float *)(lVar35 + 0x88);
  fVar82 = *(float *)(lVar35 + 0x84);
  fVar68 = -2.1474836e+09;
  if (fVar82 != INFINITY) {
    fVar68 = (float)(int)fVar82;
  }
  fVar56 = *(float *)(lVar35 + 0xd4);
  fVar77 = *(float *)(lVar35 + 0xd8);
  fVar55 = -2.1474836e+09;
  if (fVar72 != INFINITY) {
    fVar55 = (float)(int)fVar72;
  }
  uVar80 = FUN_03591d3c(fVar82 - fVar68,fVar72 - fVar55);
  *(undefined4 *)(lVar35 + 0x84) = uVar80;
  if (*(uint *)(lVar23 + 0x18) <= uVar85) goto LAB_035575f4;
  fVar77 = fVar77 - fVar55;
  *(float *)(lVar35 + 0x88) = fVar63;
  uVar80 = FUN_03591d3c(fVar82 - fVar68,fVar77);
  *(undefined4 *)(lVar23 + lVar27 * 0x178 + 0xac) = uVar80;
  if (*(uint *)(lVar23 + 0x18) <= uVar85) goto LAB_035575f4;
  fVar56 = fVar56 - fVar68;
  *(float *)(lVar23 + lVar27 * 0x178 + 0xb0) = fVar63;
  fVar68 = (float)FUN_03591d3c(fVar56,fVar77);
  *(float *)(lVar35 + 0xd4) = fVar68;
  if (*(uint *)(lVar23 + 0x18) <= uVar85) goto LAB_035575f4;
  *(float *)(lVar35 + 0xd8) = fVar63;
  uVar80 = FUN_03591d3c(fVar56,fVar72 - fVar55);
  *(undefined4 *)(lVar23 + lVar27 * 0x178 + 0xfc) = uVar80;
  uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar50 <= uVar85) goto LAB_035575f4;
  *(float *)(lVar23 + lVar27 * 0x178 + 0x100) = fVar63;
LAB_0355574c:
  if (((int)uVar85 < (int)unaff_x19[0x65]) &&
     (iStack00000000000000d4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar17 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar50 <= uVar85) goto LAB_035575f4;
      lVar36 = lVar23 + lVar27 * 0x178;
      *(ulong *)(lVar36 + 0x70) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar36 + 0x70));
      *(float *)(lVar36 + 0x78) = fVar58 + *(float *)(lVar36 + 0x78);
      *(ulong *)(lVar36 + 0x98) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar36 + 0x98));
      *(float *)(lVar36 + 0xa0) = fVar58 + *(float *)(lVar36 + 0xa0);
      *(ulong *)(lVar36 + 0xc0) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar36 + 0xc0));
      *(float *)(lVar36 + 200) = fVar58 + *(float *)(lVar36 + 200);
      *(ulong *)(lVar36 + 0xe8) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar36 + 0xe8));
      *(float *)(lVar36 + 0xf0) = fVar58 + *(float *)(lVar36 + 0xf0);
      goto UnityEngine_Animator__GetAnimatorClipInfoCount;
    }
    if (((int)uVar17 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar85 < uVar50) {
        if (*(uint *)(lVar23 + lVar27 * 0x178 + 0x68) == uVar3) {
          lVar36 = lVar23 + lVar27 * 0x178;
          *(ulong *)(lVar36 + 0x70) =
               CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar36 + 0x70));
          *(float *)(lVar36 + 0x78) = fVar58 + *(float *)(lVar36 + 0x78);
          *(ulong *)(lVar36 + 0x98) =
               CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar36 + 0x98));
          *(float *)(lVar36 + 0xa0) = fVar58 + *(float *)(lVar36 + 0xa0);
          *(ulong *)(lVar36 + 0xc0) =
               CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar36 + 0xc0));
          *(float *)(lVar36 + 200) = fVar58 + *(float *)(lVar36 + 200);
          *(ulong *)(lVar36 + 0xe8) =
               CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar36 + 0xe8));
          *(float *)(lVar36 + 0xf0) = fVar58 + *(float *)(lVar36 + 0xf0);
          goto UnityEngine_Animator__GetAnimatorClipInfoCount;
        }
        goto UnityEngine_Animator__GetAnimatorTransitionInfo;
      }
      goto LAB_035575f4;
    }
  }
UnityEngine_Animator__GetAnimatorTransitionInfo:
  if (uVar50 <= uVar85) goto LAB_035575f4;
  if (DAT_0411f172 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbded8);
    DAT_0411f172 = '\x01';
    uVar50 = *(uint *)(lVar23 + 0x18);
  }
  puVar11 = PTR_DAT_03cbded8;
  uVar80 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
  lVar35 = lVar23 + lVar27 * 0x178;
  *(undefined8 *)(lVar35 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
  *(undefined4 *)(lVar35 + 0x78) = uVar80;
  if (uVar50 <= uVar85) goto LAB_035575f4;
  uVar80 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  lVar35 = lVar23 + lVar27 * 0x178;
  *(undefined8 *)(lVar35 + 0x98) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar35 + 0xa0) = uVar80;
  uVar80 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar35 + 0xc0) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar35 + 200) = uVar80;
  uVar80 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
  *(undefined8 *)(lVar35 + 0xe8) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
  *(undefined4 *)(lVar35 + 0xf0) = uVar80;
  *(undefined1 *)(lVar36 + 0x194) = 0;
UnityEngine_Animator__GetAnimatorClipInfoCount:
  if (iVar20 == 0) {
    pcVar38 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0355591c:
    (*pcVar38)();
  }
  else if (iVar20 == 1) {
    pcVar38 = *(code **)(*unaff_x19 + 0x8c8);
    goto LAB_0355591c;
  }
LAB_03555938:
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
  lVar36 = lVar36 + lVar27 * 0x178;
  uVar25 = *(undefined8 *)(lVar36 + 0x11c);
  *(undefined8 *)(lVar36 + 0x11c) =
       CONCAT44(fVar86 + (float)((ulong)uVar25 >> 0x20),fVar60 + (float)uVar25);
  *(float *)(lVar36 + 0x124) = fVar58 + *(float *)(lVar36 + 0x124);
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
  lVar36 = lVar36 + lVar27 * 0x178;
  *(ulong *)(lVar36 + 0x110) =
       CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0x110) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar36 + 0x110));
  *(float *)(lVar36 + 0x118) = fVar58 + *(float *)(lVar36 + 0x118);
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
  lVar36 = lVar36 + lVar27 * 0x178;
  *(ulong *)(lVar36 + 0x128) =
       CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar36 + 0x128) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar36 + 0x128));
  *(float *)(lVar36 + 0x130) = fVar58 + *(float *)(lVar36 + 0x130);
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
  lVar36 = lVar36 + lVar27 * 0x178;
  *(float *)(lVar36 + 0x134) = fVar60 + *(float *)(lVar36 + 0x134);
  *(ulong *)(lVar36 + 0x138) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20),
                fVar86 + (float)*(undefined8 *)(lVar36 + 0x138));
  lVar36 = *plVar2;
  if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x38), lVar35 == 0)) goto LAB_035574b8;
  uVar50 = *(uint *)(lVar35 + 0x18);
  if (uVar50 <= uVar85) goto LAB_035575f4;
  lVar42 = lVar35 + lVar27 * 0x178;
  uVar65 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar42 + 0x140) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar42 + 0x140));
  fVar68 = fVar86 + *(float *)(lVar42 + 0x150);
  uVar26 = (ulong)(uint)fVar68;
  uVar69 = CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar42 + 0x148) >> 0x20),
                    fVar86 + (float)*(undefined8 *)(lVar42 + 0x148));
  *(float *)(lVar42 + 0x150) = fVar68;
  *(ulong *)(lVar42 + 0x140) = uVar65;
  *(ulong *)(lVar42 + 0x148) = uVar69;
  if (uVar17 == uVar15) {
    uVar15 = *puVar1 - 1;
    if (uVar85 == uVar15) goto LAB_03555b44;
  }
  else {
    lVar36 = *(long *)(lVar36 + 0x50);
    if (lVar36 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto LAB_035575f4;
    lVar42 = (long)(int)uVar15;
    lVar44 = lVar36 + lVar42 * 0x5c;
    uVar69 = (ulong)(uint)*(float *)(lVar44 + 0x58);
    fVar68 = fVar86 + *(float *)(lVar44 + 0x54);
    uVar65 = (ulong)(uint)fVar68;
    fVar72 = fVar60 + *(float *)(lVar44 + 0x58);
    uVar26 = (ulong)(uint)fVar72;
    *(ulong *)(lVar44 + 0x4c) =
         CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar44 + 0x4c) >> 0x20),
                  fVar86 + (float)*(undefined8 *)(lVar44 + 0x4c));
    *(float *)(lVar44 + 0x54) = fVar68;
    *(float *)(lVar44 + 0x58) = fVar72;
    if (uVar50 <= *(uint *)(lVar44 + 0x34)) goto LAB_035575f4;
    uVar80 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar44 + 0x34) * 0x178 + 0x11c);
    lVar36 = lVar36 + lVar42 * 0x5c;
    *(float *)(lVar36 + 0x70) = fVar68;
    *(undefined4 *)(lVar36 + 0x6c) = uVar80;
    lVar36 = *plVar2;
    if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x50), lVar35 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar35 + 0x18) <= uVar15) goto LAB_035575f4;
    lVar36 = *(long *)(lVar36 + 0x38);
    if (lVar36 == 0) goto LAB_035574b8;
    uVar15 = *(uint *)(lVar35 + lVar42 * 0x5c + 0x40);
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto LAB_035575f4;
    lVar35 = lVar35 + lVar42 * 0x5c;
    *(undefined4 *)(lVar35 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar15 * 0x178 + 0x128);
    *(undefined4 *)(lVar35 + 0x78) = *(undefined4 *)(lVar35 + 0x4c);
    uVar15 = *puVar1 - 1;
LAB_03555b44:
    if (uVar85 == uVar15) {
      lVar36 = *plVar2;
      if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x50), lVar35 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar42 = lVar35 + lVar45 * 0x5c;
      uVar69 = (ulong)(uint)*(float *)(lVar42 + 0x58);
      uVar65 = CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                        fVar86 + (float)*(undefined8 *)(lVar42 + 0x4c));
      fVar68 = fVar86 + *(float *)(lVar42 + 0x54);
      fVar60 = fVar60 + *(float *)(lVar42 + 0x58);
      uVar26 = (ulong)(uint)fVar60;
      *(ulong *)(lVar42 + 0x4c) = uVar65;
      *(float *)(lVar42 + 0x54) = fVar68;
      *(float *)(lVar42 + 0x58) = fVar60;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar42 + 0x34)) goto LAB_035575f4;
      uVar80 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
      lVar35 = lVar35 + lVar45 * 0x5c;
      *(float *)(lVar35 + 0x70) = fVar68;
      *(undefined4 *)(lVar35 + 0x6c) = uVar80;
      lVar36 = *plVar2;
      if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x50), lVar35 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      uVar15 = *(uint *)(lVar35 + lVar45 * 0x5c + 0x40);
      if (*(uint *)(lVar36 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar35 = lVar35 + lVar45 * 0x5c;
      *(undefined4 *)(lVar35 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar15 * 0x178 + 0x128);
      *(undefined4 *)(lVar35 + 0x78) = *(undefined4 *)(lVar35 + 0x4c);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar28 = FUN_026b82c4(uVar39,0);
  if (((((uVar28 & 1) == 0) && (1 < uVar39 - 0x2010)) && (uVar39 != 0xad)) && (uVar39 != 0x2d)) {
    if (bVar9) {
      if (((uVar22 != 1) && ((int)uVar85 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar85 < (int)*puVar1 && ((uVar39 == 0x2019 || (uVar39 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar22 - 2) goto LAB_035575f4;
        uVar6 = *(undefined2 *)(lVar23 + lVar24 + -0x438);
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar28 = FUN_026b82c4(uVar6,0);
        if ((uVar28 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_035575f4;
          uVar6 = *(undefined2 *)(lVar23 + lVar24 + -0x148);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar28 = FUN_026b82c4(uVar6,0);
          if ((uVar28 & 1) != 0) goto LAB_03555d68;
        }
      }
    }
    else {
      if (uVar22 != 1) {
LAB_0355686c:
        bVar9 = false;
        goto LAB_03555d70;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar28 = FUN_026b81f8(uVar39,0);
      if ((uVar28 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar28 = FUN_026b63d8(uVar39,0);
        if (((uVar39 != 0x200b) && ((uVar28 & 1) == 0)) && (*puVar1 != 1)) goto LAB_0355686c;
      }
    }
    if (uVar85 == *puVar1 - 1) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar28 = FUN_026b82c4(uVar39,0);
      iVar20 = iStack0000000000000128;
      if ((uVar28 & 1) == 0) goto LAB_03556070;
    }
    else {
LAB_03556070:
      iVar20 = uVar22 - 2;
    }
    lVar36 = *plVar2;
    if (lVar36 == 0) goto LAB_035574b8;
    lVar35 = *(long *)(lVar36 + 0x40);
    if (lVar35 == 0) goto LAB_035574b8;
    uVar15 = *(uint *)(lVar36 + 0x24);
    iVar21 = *(int *)(lVar35 + 0x18);
    if (iVar21 < (int)(uVar15 + 1)) {
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff025c((long *)(lVar36 + 0x40),iVar21 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
      lVar36 = *plVar2;
      if (lVar36 == 0) goto LAB_035574b8;
    }
    lVar36 = *(long *)(lVar36 + 0x40);
    if (lVar36 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto LAB_035575f4;
    lVar36 = lVar36 + (long)(int)uVar15 * 0x18;
    *(long **)(lVar36 + 0x20) = unaff_x19;
    *(float *)(lVar36 + 0x28) = fStack0000000000000158;
    *(int *)(lVar36 + 0x2c) = iVar20;
    *(int *)(lVar36 + 0x30) = (iVar20 - (int)fStack0000000000000158) + 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar36 = unaff_x19[0x6d];
    if (lVar36 == 0) goto LAB_035574b8;
    lVar35 = *(long *)(lVar36 + 0x50);
    *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
    if (lVar35 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar35 + 0x18) <= uVar17) goto LAB_035575f4;
    lVar35 = lVar35 + lVar45 * 0x5c;
    bVar9 = false;
    iStack00000000000000d4 = iStack00000000000000d4 + 1;
    *(int *)(lVar35 + 0x30) = *(int *)(lVar35 + 0x30) + 1;
  }
  else {
    if (!bVar9) {
      fStack0000000000000158 = (float)uVar85;
    }
    if (uVar85 == *puVar1 - 1) {
      lVar36 = *plVar2;
      if (lVar36 == 0) goto LAB_035574b8;
      lVar35 = *(long *)(lVar36 + 0x40);
      if (lVar35 == 0) goto LAB_035574b8;
      uVar15 = *(uint *)(lVar36 + 0x24);
      iVar20 = *(int *)(lVar35 + 0x18);
      if (iVar20 < (int)(uVar15 + 1)) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff025c((long *)(lVar36 + 0x40),iVar20 + 1,*(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo
                    );
        lVar36 = *plVar2;
        if (lVar36 == 0) goto LAB_035574b8;
      }
      lVar36 = *(long *)(lVar36 + 0x40);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar15) goto LAB_035575f4;
      lVar36 = lVar36 + (long)(int)uVar15 * 0x18;
      *(long **)(lVar36 + 0x20) = unaff_x19;
      *(float *)(lVar36 + 0x28) = fStack0000000000000158;
      *(uint *)(lVar36 + 0x2c) = uVar85;
      *(uint *)(lVar36 + 0x30) = uVar22 - (int)fStack0000000000000158;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar36 = unaff_x19[0x6d];
      if (lVar36 == 0) goto LAB_035574b8;
      lVar35 = *(long *)(lVar36 + 0x50);
      *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
      if (lVar35 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar35 + 0x18) <= uVar17) goto LAB_035575f4;
      lVar35 = lVar35 + lVar45 * 0x5c;
      iStack00000000000000d4 = iStack00000000000000d4 + 1;
      *(int *)(lVar35 + 0x30) = *(int *)(lVar35 + 0x30) + 1;
    }
LAB_03555d68:
    bVar9 = true;
  }
LAB_03555d70:
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  uVar15 = *(uint *)(lVar36 + 0x18);
  if (uVar15 <= uVar85) goto LAB_035575f4;
  if ((*(byte *)(lVar36 + lVar27 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar14) {
LAB_03555da0:
      if (uVar15 <= uVar22 - 2) goto LAB_035575f4;
      lVar45 = *unaff_x19;
      uVar15 = *(uint *)(lVar36 + lVar24 + -0x330);
      uVar80 = *(undefined4 *)(lVar36 + lVar24 + -0x2f8);
LAB_035562ec:
      pcVar38 = *(code **)(lVar45 + 0x8d8);
LAB_035562f4:
      uVar69 = (ulong)uVar15;
      uVar65 = (ulong)(uint)fStack0000000000000070;
      uVar26 = (ulong)uStack0000000000000074;
      (*pcVar38)(fVar81,uVar65,uVar26,uVar69,fStack0000000000000104,0,fStack000000000000008c,uVar80)
      ;
      puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar36 = *(long *)puVar11;
      }
LAB_03556348:
      bVar14 = false;
      fVar54 = 0.0;
      fStack0000000000000104 = *(float *)(*(long *)(lVar36 + 0xb8) + 0x15a8);
      fStack0000000000000100 = 0.0;
    }
    else {
LAB_03556254:
      bVar14 = false;
    }
  }
  else {
    lVar36 = lVar36 + lVar27 * 0x178;
    iVar20 = *(int *)(lVar36 + 0x68);
    *(int *)(lVar36 + 0x16c) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar85) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar20 + 1 != (int)unaff_x19[0x67])))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar28 = FUN_026b63d8(uVar39,0);
    if ((uVar39 != 0x200b) && ((uVar28 & 1) == 0)) {
      lVar36 = *plVar2;
      if ((lVar36 == 0) || (lVar45 = *(long *)(lVar36 + 0x38), lVar45 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar45 + 0x18) <= uVar85) goto LAB_035575f4;
      fVar68 = *(float *)(lVar45 + lVar27 * 0x178 + 0x160);
      if (fVar54 <= fVar68) {
        fVar54 = fVar68;
      }
      if (fStack0000000000000100 <= ABS(fVar63)) {
        fStack0000000000000100 = ABS(fVar63);
      }
      if (iVar20 != iStack000000000000006c) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar36 = *plVar2;
          if (lVar36 == 0) goto LAB_035574b8;
          lVar45 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        else {
          lVar45 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        }
        fStack0000000000000104 = *(float *)(lVar45 + 0x15a8);
      }
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
      if (unaff_x19[0x1f] == 0) goto LAB_035574b8;
      fVar72 = *(float *)(lVar36 + lVar27 * 0x178 + 0x14c);
      fVar68 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
      fVar72 = fVar72 + fVar54 * fVar68;
      if (fVar72 <= fStack0000000000000104) {
        fStack0000000000000104 = fVar72;
      }
      uVar65 = (ulong)(uint)fStack0000000000000104;
      iStack000000000000006c = iVar20;
    }
    if (!bVar14) {
      bVar14 = false;
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar18 < (int)uVar85)) ||
         ((bool)(bVar13 ^ 1))) goto LAB_03556364;
      if (uVar85 == uVar18) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar28 = FUN_026b97f8(uVar39,0);
        if ((uVar28 & 1) != 0) goto LAB_03556254;
      }
      if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
      lVar36 = lVar36 + lVar27 * 0x178;
      fStack000000000000008c = *(float *)(lVar36 + 0x160);
      fVar81 = *(float *)(lVar36 + 0x11c);
      uVar26 = (ulong)(uint)fVar81;
      bVar14 = fVar54 != 0.0;
      fVar68 = fStack000000000000008c;
      if (bVar14) {
        fVar68 = fVar54;
      }
      fVar54 = fVar68;
      uVar84 = *(undefined4 *)(lVar36 + 0x168);
      uStack0000000000000074 = 0;
      fVar68 = fVar63;
      if (bVar14) {
        fVar68 = fStack0000000000000100;
      }
      uVar65 = (ulong)(uint)fVar68;
      fStack0000000000000070 = fStack0000000000000104;
      fStack0000000000000100 = fVar68;
    }
    if (*puVar1 == 1) {
      if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
        if (uVar85 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar27 * 0x178;
          lVar45 = *unaff_x19;
          uVar15 = *(uint *)(lVar36 + 0x128);
          uVar80 = *(undefined4 *)(lVar36 + 0x160);
          goto LAB_035562ec;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if ((uVar85 == uVar33) || ((int)uVar18 <= (int)uVar85)) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar28 = FUN_026b63d8(uVar39,0);
      if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
        lVar45 = lVar27;
        uVar15 = uVar85;
        if (uVar39 == 0x200b || (uVar28 & 1) != 0) {
          lVar45 = lVar49;
          uVar15 = uVar18;
        }
        if (uVar15 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar45 * 0x178;
          uVar15 = *(uint *)(lVar36 + 0x128);
          uVar80 = *(undefined4 *)(lVar36 + 0x160);
          pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
          goto LAB_035562f4;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (!bVar13) {
      if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
        uVar15 = *(uint *)(lVar36 + 0x18);
        goto LAB_03555da0;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar85 < (int)(*puVar1 - 1)) {
      if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar22) goto LAB_035575f4;
      uVar28 = FUN_03567ad8(uVar84,*(undefined4 *)(lVar36 + lVar24),0);
      if ((uVar28 & 1) == 0) {
        if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
          if (uVar85 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar27 * 0x178;
            uVar69 = (ulong)*(uint *)(lVar36 + 0x128);
            uVar26 = (ulong)uStack0000000000000074;
            uVar65 = (ulong)(uint)fStack0000000000000070;
            (**(code **)(*unaff_x19 + 0x8d8))
                      (fVar81,uVar65,uVar26,uVar69,fStack0000000000000104,0,fStack000000000000008c,
                       *(undefined4 *)(lVar36 + 0x160));
            puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
            lVar36 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
            if (*(int *)(lVar36 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar36 = *(long *)puVar11;
            }
            goto LAB_03556348;
          }
          goto LAB_035575f4;
        }
        goto LAB_035574b8;
      }
    }
    bVar14 = true;
  }
LAB_03556364:
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
  if (lVar43 == 0) goto LAB_035574b8;
  uVar15 = *(uint *)(lVar36 + lVar27 * 0x178 + 400);
  fVar68 = (float)FUN_03776a30(lVar43 + 0x50,0);
  if ((uVar15 >> 6 & 1) == 0) {
    if ((_iStack0000000000000128 & 0x100000000) != 0) {
      if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar22 - 2) goto LAB_035575f4;
      uVar15 = *(uint *)(lVar36 + lVar24 + -0x330);
      fVar86 = *(float *)(lVar36 + lVar24 + -0x30c);
      pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
LAB_03556914:
      uVar69 = (ulong)uVar15;
      uVar65 = (ulong)(uint)fStack000000000000009c;
      uVar26 = (ulong)(uint)in_stack_00000098;
      (*pcVar38)(fVar66,uVar65,uVar26,uVar69,fVar71 * fVar68 + fVar86,0,fVar71,fVar71);
    }
LAB_03556948:
    _iStack0000000000000128 = _iStack0000000000000128 & 0xffffffff;
  }
  else {
    lVar36 = *plVar2;
    if ((lVar36 == 0) || (lVar45 = *(long *)(lVar36 + 0x38), lVar45 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar45 + 0x18) <= uVar85) goto LAB_035575f4;
    *(int *)(lVar45 + lVar27 * 0x178 + 0x174) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar85) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar45 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar18 < (int)uVar85)) ||
       ((_iStack0000000000000128 & 0x100000000) != 0 || !bVar13)) {
LAB_035564e8:
      if ((_iStack0000000000000128 & 0x100000000) == 0) goto LAB_03556948;
    }
    else {
      if (uVar85 == uVar18) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar28 = FUN_026b97f8(uVar39,0);
        if ((uVar28 & 1) != 0) goto LAB_035564e8;
        lVar36 = *plVar2;
        if (lVar36 == 0) goto LAB_035574b8;
      }
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar36 + 0x18) <= uVar85) goto LAB_035575f4;
      lVar36 = lVar36 + lVar27 * 0x178;
      fVar64 = *(float *)(lVar36 + 0x60);
      fStack000000000000009c = *(float *)(lVar36 + 0x14c);
      uVar65 = (ulong)(uint)fStack000000000000009c;
      fVar66 = *(float *)(lVar36 + 0x11c);
      uVar26 = (ulong)(uint)fVar66;
      fVar71 = *(float *)(lVar36 + 0x160);
      uStack0000000000000038 = (ulong)(uint)fStack000000000000009c;
      fStack000000000000009c = fVar68 * fVar71 + fStack000000000000009c;
      in_stack_00000098 = 0.0;
    }
    uVar15 = *puVar1;
    if (uVar15 == 1) {
LAB_03556628:
      if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
        if (uVar85 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + lVar27 * 0x178;
          lVar49 = *unaff_x19;
          uVar15 = *(uint *)(lVar36 + 0x128);
          fVar86 = *(float *)(lVar36 + 0x14c);
LAB_03556654:
          pcVar38 = *(code **)(lVar49 + 0x8d8);
          goto LAB_03556914;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    if (uVar85 == uVar33) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar28 = FUN_026b63d8(uVar39,0);
      if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
        uVar15 = *(uint *)(lVar36 + 0x18);
        if (uVar39 == 0x200b || (uVar28 & 1) != 0) {
          if (uVar15 <= uVar18) goto LAB_035575f4;
        }
        else {
FUN_035568e8:
          lVar49 = lVar27;
          if (uVar15 <= uVar85) goto LAB_035575f4;
        }
LAB_035568f0:
        lVar36 = lVar36 + lVar49 * 0x178;
        fVar86 = *(float *)(lVar36 + 0x14c);
        uVar15 = *(uint *)(lVar36 + 0x128);
        pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
        goto LAB_03556914;
      }
      goto LAB_035574b8;
    }
    if ((int)uVar85 < (int)uVar15) {
      lVar36 = *plVar2;
      if ((lVar36 != 0) && (lVar45 = *(long *)(lVar36 + 0x38), lVar45 != 0)) {
        if (uVar22 < *(uint *)(lVar45 + 0x18)) {
          if (*(float *)(lVar45 + lVar24 + -0x108) == fVar64) {
            fVar72 = *(float *)(lVar45 + lVar24 + -0x1c);
            if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar65 = uStack0000000000000038;
            uVar28 = FUN_03567bac(fVar86 + fVar72,uStack0000000000000038,0);
            if ((uVar28 & 1) != 0) {
              uVar15 = *puVar1;
              goto LAB_03556744;
            }
            lVar36 = *plVar2;
            if (lVar36 == 0) goto LAB_035574b8;
          }
          lVar36 = *(long *)(lVar36 + 0x38);
          if (lVar36 != 0) {
            uVar15 = *(uint *)(lVar36 + 0x18);
            if ((int)uVar85 <= (int)uVar18) goto FUN_035568e8;
            if (uVar18 < uVar15) goto LAB_035568f0;
            goto LAB_035575f4;
          }
          goto LAB_035574b8;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
LAB_03556744:
    if ((int)uVar85 < (int)uVar15) {
      iVar20 = FUN_036d3364(lVar43,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_035575f4;
      lVar36 = *(long *)(lVar23 + lVar24 + -0x130);
      if (lVar36 == 0) goto LAB_035574b8;
      iVar21 = FUN_036d3364(lVar36,0);
      if (iVar20 != iVar21) goto LAB_03556628;
    }
    if (!bVar13) {
      if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
        if (uVar22 - 2 < *(uint *)(lVar36 + 0x18)) {
          lVar49 = *unaff_x19;
          uVar15 = *(uint *)(lVar36 + lVar24 + -0x330);
          fVar86 = *(float *)(lVar36 + lVar24 + -0x30c);
          goto LAB_03556654;
        }
        goto LAB_035575f4;
      }
      goto LAB_035574b8;
    }
    _iStack0000000000000128 = CONCAT44(1,iStack0000000000000128);
  }
  if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
  uVar15 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar15 <= uVar85) goto LAB_035575f4;
  if ((*(byte *)(lVar36 + lVar27 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      uVar26 = (ulong)in_stack_000000c0;
      uVar65 = (ulong)(uint)fStack00000000000000dc;
      uVar69 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar65,uVar26,uVar69,fStack00000000000000d0,uVar26);
    }
LAB_035569b4:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar85) || ((int)unaff_x19[0x66] < (int)uVar17)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar36 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar8) {
      if ((((uVar39 == 0xd) || ((uVar39 & 0xfffe) == 10)) || ((int)uVar18 < (int)uVar85)) ||
         (!bVar13)) goto LAB_035569b4;
      if (uVar85 == uVar18) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar28 = FUN_026b97f8(uVar39,0);
        if ((uVar28 & 1) != 0) goto LAB_035569b4;
      }
      puVar11 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      lVar49 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar49 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar49 = *(long *)puVar11;
      }
      if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_035574b8;
      uVar15 = (uint)*(undefined8 *)(lVar36 + 0x18);
      if (uVar15 <= uVar85) goto LAB_035575f4;
      lVar49 = *(long *)(lVar49 + 0xb8);
      lVar43 = lVar36 + lVar27 * 0x178;
      in_stack_000017b8 = *(undefined8 *)(lVar43 + 0x184);
      in_stack_000017b0 = *(undefined8 *)(lVar43 + 0x17c);
      fStack00000000000000d8 = *(float *)(lVar49 + 0x1598);
      fStack00000000000000dc = *(float *)(lVar49 + 0x159c);
      in_stack_000017c0 = *(float *)(lVar43 + 0x18c);
      fStack00000000000000c8 = *(float *)(lVar49 + 0x15a0);
      fStack00000000000000d0 = *(float *)(lVar49 + 0x15a4);
      in_stack_000000c0 = 0;
    }
    if (uVar15 <= uVar85) goto LAB_035575f4;
    lVar36 = lVar36 + lVar27 * 0x178;
    fVar68 = *(float *)(lVar36 + 0x128);
    fVar55 = *(float *)(lVar36 + 0x188);
    uVar46 = *(undefined8 *)(lVar36 + 0x17c);
    fVar56 = *(float *)(lVar36 + 0x184);
    uVar25 = *(undefined8 *)(lVar36 + 0x184);
    fVar58 = *(float *)(lVar36 + 0x18c);
    fVar86 = *(float *)(lVar36 + 0x11c);
    fVar82 = *(float *)(lVar36 + 0x148);
    fVar72 = *(float *)(lVar36 + 0x150);
    in_stack_00000178 = uVar46;
    fStack0000000000000180 = fVar56;
    fStack0000000000000184 = fVar55;
    in_stack_00000188 = fVar58;
    in_stack_00000190 = in_stack_000017b0;
    in_stack_00000198 = in_stack_000017b8;
    in_stack_000001a0 = in_stack_000017c0;
    uVar28 = FUN_03568490(&stack0x00000190,&stack0x00000178,0);
    lVar36 = *(long *)OVRPlugin_Mesh_TypeInfo;
    if ((uVar28 & 1) == 0) {
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar36);
      }
      fVar68 = fVar68 + (float)in_stack_000017b8;
      uVar26 = (ulong)(uint)fVar68;
      fVar86 = fVar86 - (float)((ulong)in_stack_000017b0 >> 0x20);
      fVar72 = fVar72 - in_stack_000017c0;
      uVar65 = (ulong)(uint)fVar72;
      fVar82 = fVar82 + (float)((ulong)in_stack_000017b8 >> 0x20);
      uVar69 = (ulong)(uint)fVar82;
      if (fVar86 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar86;
      }
      if (fVar72 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar72;
      }
      if (fStack00000000000000c8 <= fVar68) {
        fStack00000000000000c8 = fVar68;
      }
      if (fStack00000000000000d0 <= fVar82) {
        fStack00000000000000d0 = fVar82;
      }
    }
    else {
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar36);
      }
      fVar86 = (fVar86 + (fStack00000000000000c8 - (float)in_stack_000017b8)) * 0.5;
      uVar69 = (ulong)(uint)fVar86;
      if (fVar72 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar72;
      }
      uVar65 = (ulong)(uint)fStack00000000000000dc;
      uVar26 = (ulong)in_stack_000000c0;
      if (fStack00000000000000d0 <= fVar82) {
        fStack00000000000000d0 = fVar82;
      }
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar65,uVar26,uVar69,fStack00000000000000d0,uVar26);
      fStack00000000000000dc = fVar72 - fVar58;
      fStack00000000000000c8 = fVar68 + fVar56;
      in_stack_000000c0 = 0;
      fStack00000000000000d0 = fVar82 + fVar55;
      fStack00000000000000d8 = fVar86;
      in_stack_000017b0 = uVar46;
      in_stack_000017b8 = uVar25;
      in_stack_000017c0 = fVar58;
    }
    if (((*puVar1 == 1) || (uVar85 == uVar33)) || (((int)uVar18 <= (int)uVar85 || (!bVar13)))) {
      uVar26 = (ulong)in_stack_000000c0;
      uVar65 = (ulong)(uint)fStack00000000000000dc;
      uVar69 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x8e8))
                (fStack00000000000000d8,uVar65,uVar26,uVar69,fStack00000000000000d0,uVar26);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar85 = *puVar1;
  lVar24 = lVar24 + 0x178;
  _iStack0000000000000128 = CONCAT44(fStack000000000000012c,iStack0000000000000128 + 1);
  bVar13 = (int)uVar85 <= (int)uVar22;
  uVar22 = uVar22 + 1;
  uVar15 = uVar17;
  if (bVar13) goto FUN_03556ed8;
  goto LAB_03554e78;
FUN_03556ed8:
  lVar23 = *plVar2;
  if (lVar23 == 0) goto LAB_035574b8;
  iVar16 = uVar17 + 1;
  plVar48 = (long *)OVRPlugin_Media_TypeInfo;
LAB_03556f00:
  *(uint *)(lVar23 + 0x18) = uVar85;
  lVar24 = unaff_x19[0xd4];
  *(int *)(lVar23 + 0x2c) = iVar16;
  if ((int)uVar85 < 1 || iStack00000000000000d4 == 0) {
    iStack00000000000000d4 = 1;
  }
  *(int *)(lVar23 + 0x1c) = (int)lVar24;
  *(int *)(lVar23 + 0x24) = iStack00000000000000d4;
  *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar28 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar28 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar23 = unaff_x19[0xdf];
  if (lVar23 != 0) {
    (**(code **)(lVar23 + 0x18))
              (*(undefined8 *)(lVar23 + 0x40),*plVar2,*(undefined8 *)(lVar23 + 0x28));
  }
  if (unaff_x19[0xe5] == 0) goto LAB_035574b8;
  iVar16 = FUN_03911ee4(unaff_x19[0xe5],0);
  if (iVar16 != 0x19) {
    lVar23 = unaff_x19[0xe5];
    if (lVar23 == 0) goto LAB_035574b8;
    uVar85 = FUN_03911ee4(lVar23,0);
    FUN_03911f20(lVar23,uVar85 | 0x19,0);
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0)) goto LAB_035574b8;
    if (*(int *)(*plVar48 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
    FUN_03596b20(lVar23 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_036aa790(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
      if (*(int *)(lVar23 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
          if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
          if (unaff_x19[0x74] != 0) {
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0))
            {
              if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
              if (unaff_x19[0x74] != 0) {
                FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                  if (*(int *)(lVar23 + 0x18) == 0) goto LAB_035575f4;
                  if (unaff_x19[0x74] != 0) {
                    FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_036aa280(unaff_x19[0x74],0);
                      if (unaff_x19[0xe4] != 0) {
                        FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          uVar67 = FUN_0390ef60(unaff_x19[0xe4],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar85 = FUN_0390ed3c(unaff_x19[0xe4],0);
                            lVar23 = *plVar2;
                            if (lVar23 != 0) {
                              lVar36 = 0;
                              lVar24 = 0;
                              do {
                                uVar28 = lVar24 + 1;
                                if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar28)
                                goto LAB_03554724;
                                lVar23 = *(long *)(lVar23 + 0x60);
                                if (lVar23 == 0) break;
                                if (*(int *)(*plVar48 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                FUN_03596a20(lVar23 + lVar36 + 0x70,0);
                                lVar23 = unaff_x19[0xe1];
                                if (lVar23 == 0) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                uVar25 = *(undefined8 *)(lVar23 + lVar24 * 8 + 0x28);
                                if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                }
                                uVar30 = FUN_036d35a8(uVar25,0,0);
                                if ((uVar30 & 1) == 0) {
                                  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                    if ((*plVar2 == 0) ||
                                       (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0)) break;
                                    if (*(int *)(*plVar48 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                    FUN_03596b20(lVar23 + lVar36 + 0x70,1,0);
                                  }
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if (lVar23 == 0) break;
                                  lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar28) goto LAB_035575f4;
                                  if (lVar23 == 0) break;
                                  FUN_036a460c(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0x80),0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if (lVar23 == 0) break;
                                  lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar28) goto LAB_035575f4;
                                  if (lVar23 == 0) break;
                                  FUN_036a4810(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0x98),0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if (lVar23 == 0) break;
                                  lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar28) goto LAB_035575f4;
                                  if (lVar23 == 0) break;
                                  FUN_036a48bc(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0xa0),0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if (lVar23 == 0) break;
                                  lVar23 = UnityEngine_Material__GetColorArray(lVar23,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar28) goto LAB_035575f4;
                                  if (lVar23 == 0) break;
                                  FUN_036a4e24(lVar23,*(undefined8 *)(lVar49 + lVar36 + 0xa8),0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if ((lVar23 == 0) ||
                                     (lVar23 = UnityEngine_Material__GetColorArray(lVar23,0),
                                     lVar23 == 0)) break;
                                  FUN_036aa280(lVar23,0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if (lVar23 == 0) break;
                                  lVar23 = FUN_037b514c(lVar23,0);
                                  lVar49 = unaff_x19[0xe1];
                                  if (lVar49 == 0) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar49 = *(long *)(lVar49 + lVar24 * 8 + 0x28);
                                  if ((lVar49 == 0) ||
                                     (uVar25 = UnityEngine_Material__GetColorArray(lVar49,0),
                                     lVar23 == 0)) break;
                                  FUN_0390f3a4(lVar23,uVar25,0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if ((lVar23 == 0) ||
                                     (lVar23 = FUN_037b514c(lVar23,0), lVar23 == 0)) break;
                                  FUN_0390eec8(uVar67,uVar65,uVar26,uVar69,lVar23,0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                  if ((lVar23 == 0) ||
                                     (lVar23 = FUN_037b514c(lVar23,0), lVar23 == 0)) break;
                                  FUN_0390ed78(lVar23,uVar85 & 1,0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28) goto LAB_035575f4;
                                  plVar47 = *(long **)(lVar23 + lVar24 * 8 + 0x28);
                                  uVar22 = (**(code **)(*unaff_x19 + 0x2b8))();
                                  if (plVar47 == (long *)0x0) break;
                                  (**(code **)(*plVar47 + 0x2c8))
                                            (plVar47,uVar22 & 1,*(undefined8 *)(*plVar47 + 0x2d0));
                                }
                                lVar23 = *plVar2;
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
      }
    }
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


