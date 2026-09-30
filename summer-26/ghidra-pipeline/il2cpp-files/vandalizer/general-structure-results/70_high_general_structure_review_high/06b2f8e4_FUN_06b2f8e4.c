/*
FUNCTION_NAME: FUN_06b2f8e4
ENTRY_POINT: 06b2f8e4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


undefined4 FUN_06b2f8e4(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  void *__dest;
  long *plVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  uint *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  int local_220;
  undefined1 auStack_210 [80];
  undefined1 auStack_1c0 [80];
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  uint local_78;
  undefined1 local_74 [4];
  
  if ((DAT_07a4f93c & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(PTR_DAT_0762b510);
    FUN_031f20f4(PTR_DAT_07636080);
    FUN_031f20f4(PTR_DAT_07608398);
    FUN_031f20f4(PTR_DAT_07635fd8);
    FUN_031f20f4(PTR_DAT_075d7b70);
    FUN_031f20f4(PTR_DAT_07635dc8);
    FUN_031f20f4(PTR_DAT_07636088);
    FUN_031f20f4(PTR_DAT_07636090);
    FUN_031f20f4(PTR_DAT_07636098);
    FUN_031f20f4(PTR_DAT_076360a0);
    FUN_031f20f4(PTR_DAT_076360a8);
    FUN_031f20f4(PTR_DAT_075d5f10);
    FUN_031f20f4(PTR_DAT_0759c0d8);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(PTR_DAT_076360b0);
    FUN_031f20f4(PTR_DAT_07636008);
    FUN_031f20f4(PTR_DAT_076360b8);
    FUN_031f20f4(PTR_DAT_07635de0);
    FUN_031f20f4(PTR_DAT_07635df0);
    FUN_031f20f4(PTR_DAT_07635df8);
    FUN_031f20f4(PTR_DAT_076360c0);
    FUN_031f20f4(PTR_DAT_076360c8);
    FUN_031f20f4(PTR_DAT_07636208);
    FUN_031f20f4(PTR_DAT_07635e18);
    FUN_031f20f4(PTR_DAT_07635e20);
    FUN_031f20f4(PTR_DAT_07635e68);
    FUN_031f20f4(PTR_DAT_07635e80);
    FUN_031f20f4(PTR_DAT_07635e98);
    FUN_031f20f4(PTR_DAT_076360d8);
    FUN_031f20f4(PTR_DAT_076360e0);
    FUN_031f20f4(PTR_DAT_076360e8);
    FUN_031f20f4(PTR_DAT_076360f0);
    DAT_07a4f93c = 1;
  }
  puVar7 = PTR_DAT_07635e98;
  puVar5 = PTR_DAT_07635e80;
  local_74[0] = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x292) = 0;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  *(int *)((long)param_1 + 0x284) = (int)param_1[0x50];
  FUN_06b8c7c4(param_1 + 0x51,0);
  if ((*(byte *)((long)param_1 + 0x284) & 1) == 0) {
    uVar14 = (undefined4)param_1[0x47];
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)((long)param_1 + 0x23c) = uVar14;
  puVar6 = PTR_DAT_07635e68;
  FUN_050ad0f0(param_1 + 0x48,uVar14,*(undefined8 *)puVar5);
  plVar26 = param_1 + 0x20;
  param_1[0x20] = param_1[0x1f];
  thunk_FUN_0329bf60(plVar26);
  plVar29 = param_1 + 0x23;
  param_1[0x23] = param_1[0x22];
  thunk_FUN_0329bf60(plVar29);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar14 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar7,0);
    uVar14 = (undefined4)param_1[0x24];
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  FUN_06b2317c((int)param_1[0xc6],&local_e0,uVar14,param_1[0x20],0,param_1[0x23]);
  uStack_168 = uStack_d8;
  local_170 = local_e0;
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  local_140 = local_b0;
  uVar18 = local_d0;
  FUN_050ad724(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,&local_170,*(undefined8 *)puVar6);
  plVar22 = (long *)PTR_DAT_07635e18;
  lVar15 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_06b31e5c;
  FUN_0572b6fc(lVar15,*(undefined8 *)PTR_DAT_0762b510);
  FUN_06b23334(param_1[0x23],param_1[0x20],*(long *)(*(long *)puVar7 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8));
  plVar1 = param_1 + 0x74;
  if (param_1[0x74] == 0) {
    lVar15 = param_1[0x92];
    lVar28 = thunk_FUN_0322f148(*plVar22);
    FUN_06b8ac84(lVar28,(int)lVar15,0);
    param_1[0x74] = lVar28;
    thunk_FUN_0329bf60(plVar1,lVar28);
  }
  else {
    plVar30 = (long *)(param_1[0x74] + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_06b31e5c;
    lVar28 = param_1[0x92];
    if (*(int *)(lVar15 + 0x18) < (int)lVar28) {
      if (*(int *)(*plVar22 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_03f70724(plVar30,(int)lVar28,0,*(undefined8 *)PTR_DAT_076360c0);
    }
  }
  *(undefined4 *)((long)param_1 + 0x65c) = 0;
  plVar30 = (long *)PTR_DAT_07635e98;
  if ((int)param_1[0x62] == 1) {
    FUN_06b6b918(param_1,param_1[0x20],0);
    if (param_1[0xcd] == 0) {
      *(undefined4 *)(param_1 + 0x62) = 3;
      if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar16 = FUN_06b8176c(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar26 == 0) goto LAB_06b31e5c;
        uVar17 = thunk_FUN_06e5f718(*plVar26,0);
        uVar17 = FUN_05c88a70(*(undefined8 *)PTR_DAT_076360e8,uVar17,*(undefined8 *)PTR_DAT_076360f0
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_0759b238);
        }
        FUN_06def178(uVar17,param_1,0);
      }
    }
    else {
      if (param_1[0xce] == 0) goto LAB_06b31e5c;
      iVar9 = FUN_06e5f380(param_1[0xce],0);
      if (*plVar26 == 0) goto LAB_06b31e5c;
      iVar10 = FUN_06e5f380(*plVar26,0);
      if (iVar9 != iVar10) {
        if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar16 = UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider__get_leftHandMovementDirection
                           (0);
        if ((uVar16 & 1) == 0) {
LAB_06b2fd3c:
          if (param_1[0xce] == 0) goto LAB_06b31e5c;
          param_1[0xcf] = *(long *)(param_1[0xce] + 0x88);
        }
        else {
          if (*plVar29 == 0) goto LAB_06b31e5c;
          iVar9 = FUN_06e5f380(*plVar29,0);
          if ((param_1[0xce] == 0) || (lVar15 = *(long *)(param_1[0xce] + 0x88), lVar15 == 0))
          goto LAB_06b31e5c;
          iVar10 = FUN_06e5f380(lVar15,0);
          if (iVar9 == iVar10) goto LAB_06b2fd3c;
          if (param_1[0xce] == 0) goto LAB_06b31e5c;
          lVar15 = param_1[0x23];
          uVar17 = *(undefined8 *)(param_1[0xce] + 0x88);
          if (*(int *)(*(long *)PTR_DAT_076360b8 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          lVar15 = FUN_06b7cbec(lVar15,uVar17,0);
          param_1[0xcf] = lVar15;
          plVar30 = (long *)PTR_DAT_07635e98;
        }
        thunk_FUN_0329bf60(param_1 + 0xcf);
        lVar15 = *plVar30;
        lVar28 = param_1[0xcf];
        lVar31 = param_1[0xce];
        if (*(int *)(lVar15 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar15 = *plVar30;
        }
        uVar11 = FUN_06b23334(lVar28,lVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        *(uint *)(param_1 + 0xd0) = uVar11;
        lVar15 = **(long **)(*plVar30 + 0xb8);
        if (lVar15 == 0) goto LAB_06b31e5c;
        if (*(uint *)(lVar15 + 0x18) <= uVar11) {
LAB_06b31f08:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (param_1[0x66] == 0) {
LAB_06b31e5c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar11 = FUN_0486eb60(param_1[0x66],0x6c696761,*(undefined8 *)PTR_DAT_07635dc8);
  if ((int)param_1[0x62] == 6) {
    lVar15 = param_1[99];
    if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar16 = FUN_06e587d8(lVar15,0,0);
    puVar5 = PTR_DAT_0759b388;
    if (((uVar16 & 1) != 0) && (plVar30 = param_1, *(char *)((long)param_1 + 0x42d) == '\0')) {
      while( true ) {
        plVar30 = (long *)plVar30[99];
        if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar16 = FUN_06e587d8(plVar30,0,0);
        if ((uVar16 & 1) == 0) goto LAB_06b2ff00;
        if (plVar30 == (long *)0x0) break;
        (**(code **)(*plVar30 + 0x558))
                  (plVar30,**(undefined8 **)(*(long *)(puVar5 + 0x90) + 0xb8),
                   *(undefined8 *)(*plVar30 + 0x560));
        (**(code **)(*plVar30 + 0x948))(plVar30,*(undefined8 *)(*plVar30 + 0x950));
        lVar15 = FUN_06b59de8(plVar30,0);
        if (lVar15 == 0) break;
        FUN_06b8afc4(lVar15,0);
      }
      goto LAB_06b31e5c;
    }
  }
LAB_06b2ff00:
  if (param_2 == 0) goto LAB_06b31e5c;
  uVar12 = *(uint *)(param_2 + 0x18);
  plVar30 = (long *)PTR_DAT_07635e98;
  if ((int)uVar12 < 1) {
    local_220 = 0;
LAB_06b31504:
    if (*(char *)((long)param_1 + 0x42d) != '\0') {
      *(undefined1 *)((long)param_1 + 0x42d) = 0;
LAB_06b31510:
      return (int)param_1[0x94];
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      *(int *)(lVar15 + 0x1c) = local_220;
      lVar28 = *plVar30;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar28 = *plVar30;
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 8);
      if (lVar28 != 0) {
        uVar11 = FUN_0572b230(lVar28,*(undefined8 *)PTR_DAT_07635fd8);
        *(uint *)(lVar15 + 0x34) = uVar11;
        if (*plVar1 != 0) {
          plVar26 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar26;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar11;
            if (*(int *)(lVar15 + 0x18) < (int)uVar11) {
              if (*(int *)(*plVar22 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_03f707d0(plVar26,uVar16,0,*(undefined8 *)PTR_DAT_076360c8);
            }
            if (param_1[0xe4] != 0) {
              plVar26 = param_1 + 0xe4;
              if (*(int *)(param_1[0xe4] + 0x18) < (int)uVar11) {
                uVar12 = uVar11 | (int)uVar11 >> 0x10;
                uVar12 = uVar12 | (int)uVar12 >> 8;
                uVar12 = uVar12 | (int)uVar12 >> 4;
                uVar12 = uVar12 | (int)uVar12 >> 2;
                if (*(int *)(*plVar22 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                FUN_03f704d4(plVar26,(uVar12 | (int)uVar12 >> 1) + 1,*(undefined8 *)PTR_DAT_07636208
                            );
              }
              if (*(char *)((long)param_1 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_06b31e5c;
                plVar29 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar29;
                if (lVar15 == 0) goto LAB_06b31e5c;
                iVar9 = (int)param_1[0x94];
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar9) {
                  iVar10 = 0x100;
                  if (0x100 < iVar9 + 1) {
                    iVar10 = iVar9 + 1;
                  }
                  if (*(int *)(*plVar22 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  }
                  FUN_03f70724(plVar29,iVar10,1,*(undefined8 *)PTR_DAT_076360c0);
                  plVar30 = (long *)PTR_DAT_07635e98;
                }
              }
              puVar5 = PTR_DAT_07635de0;
              fVar4 = DAT_014ba560;
              if (0 < (int)uVar11) {
                lVar15 = 0;
                uVar35 = 0;
                lVar28 = 0x54;
                lVar31 = 0x20;
                do {
                  fVar40 = (float)uVar18;
                  if (uVar35 != 0) {
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_06b31e5c;
                    if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                    uVar17 = *(undefined8 *)(lVar23 + uVar35 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    }
                    uVar18 = FUN_06e5ba28(uVar17,0,0);
                    if ((uVar18 & 1) != 0) {
                      lVar23 = *plVar30;
                      plVar29 = (long *)*plVar26;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        lVar23 = *plVar30;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = lVar23 + lVar28;
                      local_f0 = *(undefined8 *)(lVar23 + -4);
                      uStack_f8 = *(undefined8 *)(lVar23 + -0xc);
                      uStack_100 = *(undefined8 *)(lVar23 + -0x14);
                      uStack_108 = *(undefined8 *)(lVar23 + -0x1c);
                      uVar17 = *(undefined8 *)(lVar23 + -0x24);
                      uStack_118 = *(undefined8 *)(lVar23 + -0x2c);
                      local_120 = *(undefined8 *)(lVar23 + -0x34);
                      local_110 = uVar17;
                      lVar23 = FUN_06b89968(param_1,&local_120,0);
                      fVar40 = (float)uVar17;
                      if (plVar29 == (long *)0x0) goto LAB_06b31e5c;
                      if ((lVar23 != 0) &&
                         (lVar19 = thunk_FUN_0322f04c(lVar23,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar19 == 0)) {
UnityEngine_XR_ARSubsystems_XRCpuImage__get_width:
                        uVar17 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
                        FUN_031f225c(uVar17,0);
                      }
                      if (*(uint *)(plVar29 + 3) <= uVar35) goto LAB_06b31f08;
                      plVar29[uVar35 + 4] = lVar23;
                      thunk_FUN_0329bf60((long)plVar29 + lVar31,lVar23);
                      plVar30 = (long *)PTR_DAT_07635e98;
                      if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                      goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      puVar20 = (undefined8 *)(lVar23 + lVar15 + 0x30);
                      *puVar20 = 0;
                      thunk_FUN_0329bf60(puVar20,0);
                    }
                    if (param_1[0x77] == 0) goto LAB_06b31e5c;
                    fVar37 = (float)FUN_06e693b0(param_1[0x77],0);
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_06b31e5c;
                    if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                    lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                    if ((lVar23 == 0) ||
                       (fVar39 = fVar40, lVar23 = FUN_06f74078(lVar23,0), lVar23 == 0))
                    goto LAB_06b31e5c;
                    fVar38 = (float)FUN_06e693b0(lVar23,0);
                    fVar40 = (fVar40 - fVar39) * (fVar40 - fVar39);
                    uVar18 = (ulong)(uint)fVar40;
                    if (fVar4 <= (fVar37 - fVar38) * (fVar37 - fVar38) + fVar40) {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      lVar23 = FUN_06f74078(lVar23,0);
                      if ((param_1[0x77] == 0) || (FUN_06e693b0(param_1[0x77],0), lVar23 == 0))
                      goto LAB_06b31e5c;
                      FUN_06e69478(lVar23,0);
                    }
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_06b31e5c;
                    if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                    lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                    if (lVar23 == 0) goto LAB_06b31e5c;
                    uVar17 = *(undefined8 *)(lVar23 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    }
                    uVar21 = FUN_06e5ba28(uVar17,0,0);
                    if ((uVar21 & 1) == 0) {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0xf0), lVar23 == 0))
                      goto LAB_06b31e5c;
                      iVar9 = FUN_06e5f380(lVar23,0);
                      lVar23 = *plVar30;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar23);
                        lVar23 = *plVar30;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = *(long *)(lVar23 + lVar28 + -0x1c);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      iVar10 = FUN_06e5f380(lVar23,0);
                      if (iVar9 != iVar10) goto LAB_06b31970;
                    }
                    else {
LAB_06b31970:
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar19 = *plVar30;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        lVar19 = *plVar30;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      thunk_FUN_06b895bc(lVar23,*(undefined8 *)(lVar19 + lVar28 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar19 = **(long **)(*plVar30 + 0xb8);
                      if (lVar19 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      *(undefined8 *)(lVar23 + 0xd8) = *(undefined8 *)(lVar19 + lVar28 + -0x2c);
                      thunk_FUN_0329bf60();
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar19 = **(long **)(*plVar30 + 0xb8);
                      if (lVar19 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      *(undefined8 *)(lVar23 + 0xe0) = *(undefined8 *)(lVar19 + lVar28 + -0x24);
                      thunk_FUN_0329bf60();
                    }
                    lVar23 = *plVar30;
                    if (*(int *)(lVar23 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      lVar23 = *plVar30;
                    }
                    lVar19 = **(long **)(lVar23 + 0xb8);
                    if (lVar19 == 0) goto LAB_06b31e5c;
                    if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                    if (*(char *)(lVar19 + lVar28 + -0x13) != '\0') {
                      lVar24 = *plVar26;
                      if (lVar24 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar24 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar24 = *(long *)(lVar24 + uVar35 * 8 + 0x20);
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                        lVar19 = **(long **)(*plVar30 + 0xb8);
                        if (lVar19 == 0) goto LAB_06b31e5c;
                      }
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                      if (lVar24 == 0) goto LAB_06b31e5c;
                      FUN_06b89618(lVar24,*(undefined8 *)(lVar19 + lVar28 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar19 = **(long **)(*plVar30 + 0xb8);
                      if (lVar19 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      *(undefined8 *)(lVar23 + 0x100) = *(undefined8 *)(lVar19 + lVar28 + -0xc);
                      thunk_FUN_0329bf60(lVar23 + 0x100);
                    }
                  }
                  lVar23 = *plVar30;
                  if (*(int *)(lVar23 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    lVar23 = *plVar30;
                  }
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_06b31e5c;
                  if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x60), lVar19 == 0))
                  goto LAB_06b31e5c;
                  if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                  lVar24 = *(long *)(lVar19 + lVar15 + 0x30);
                  uVar12 = *(uint *)(lVar23 + lVar28);
                  if (lVar24 == 0) {
                    if (uVar35 == 0) {
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_06b7d71c(&local_170,param_1[0x7b],uVar12 + 1,0);
                      memcpy(auStack_1c0,&local_170,0x50);
                      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_06b31f08;
                      memcpy((void *)(lVar19 + lVar15 + 0x20),auStack_1c0,0x50);
                      __dest = (void *)(lVar19 + 0x20);
                    }
                    else {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_06b31f08;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_06b31e5c;
                      uVar17 = FUN_06b897f8(lVar23,0);
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_06b7d71c(&local_170,uVar17,uVar12 + 1,0);
                      memcpy(auStack_210,&local_170,0x50);
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_06b31f08;
                      __dest = (void *)(lVar19 + lVar15 + 0x20);
                      memcpy(__dest,auStack_210,0x50);
                    }
                    thunk_FUN_0329bf60(__dest,0);
                  }
                  else {
                    iVar9 = *(int *)(lVar24 + 0x18);
                    if (iVar9 < (int)(uVar12 * 4)) {
                      if ((int)uVar12 < 0x401) {
                        uVar25 = (int)uVar12 >> 0x10;
LAB_06b31c94:
                        uVar12 = uVar12 | uVar25 | (int)(uVar12 | uVar25) >> 8;
                        uVar12 = uVar12 | (int)uVar12 >> 4;
                        uVar12 = uVar12 | (int)uVar12 >> 2;
                        iVar9 = (uVar12 | (int)uVar12 >> 1) + 1;
                      }
                      else {
LAB_06b31bc0:
                        iVar9 = uVar12 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      FUN_06b7e534(lVar19 + lVar15 + 0x20,iVar9,0);
                    }
                    else if ((0 < (int)uVar12) && (*(char *)((long)param_1 + 0x359) != '\0')) {
                      iVar10 = iVar9 + 3;
                      if (-1 < iVar9) {
                        iVar10 = iVar9;
                      }
                      if (0x100 < (int)((iVar10 >> 2) - uVar12)) {
                        if ((int)uVar12 < 0x401) {
                          uVar25 = uVar12 >> 0x10;
                          goto LAB_06b31c94;
                        }
                        goto LAB_06b31bc0;
                      }
                    }
                  }
                  plVar30 = (long *)PTR_DAT_07635e98;
                  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                  goto LAB_06b31e5c;
                  lVar19 = *(long *)PTR_DAT_07635e98;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    lVar19 = *plVar30;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_06b31e5c;
                  if ((*(uint *)(lVar19 + 0x18) <= uVar35) || (*(uint *)(lVar23 + 0x18) <= uVar35))
                  goto LAB_06b31f08;
                  *(undefined8 *)(lVar23 + lVar15 + 0x68) = *(undefined8 *)(lVar19 + lVar28 + -0x1c)
                  ;
                  thunk_FUN_0329bf60();
                  uVar35 = uVar35 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar28 = lVar28 + 0x38;
                  lVar31 = lVar31 + 8;
                } while (uVar16 != uVar35);
              }
              lVar15 = *plVar26;
              if (lVar15 != 0) {
                lVar28 = (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
                do {
                  uVar11 = (uint)uVar16;
                  if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar11) goto LAB_06b31510;
                  if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_06b31f08;
                  uVar17 = *(undefined8 *)(lVar15 + lVar28);
                  if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  }
                  uVar18 = FUN_06e587d8(uVar17,0,0);
                  if ((uVar18 & 1) == 0) goto LAB_06b31510;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  if ((int)uVar11 < *(int *)(lVar15 + 0x18)) {
                    lVar15 = *plVar26;
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_06b31f08;
                    if ((*(long *)(lVar15 + lVar28) == 0) ||
                       (lVar15 = FUN_06f74964(*(long *)(lVar15 + lVar28),0), lVar15 == 0)) break;
                    FUN_0713a1ac(lVar15,0,0);
                  }
                  lVar15 = *plVar26;
                  uVar16 = (ulong)(uVar11 + 1);
                  lVar28 = lVar28 + 8;
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_06b31e5c;
  }
  uVar25 = 0;
  local_220 = 0;
LAB_06b2ff24:
  if (uVar12 <= uVar25) goto LAB_06b31f08;
  puVar36 = (uint *)(param_2 + (long)(int)uVar25 * 0x10 + 0x24);
  if (*puVar36 == 0) goto LAB_06b31504;
  if (*plVar1 == 0) goto LAB_06b31e5c;
  plVar30 = (long *)(*plVar1 + 0x38);
  lVar28 = *plVar30;
  lVar15 = param_1[0x94];
  if ((lVar28 == 0) || (*(int *)(lVar28 + 0x18) <= (int)lVar15)) {
    if (*(int *)(*plVar22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_03f70724(plVar30,(int)lVar15 + 1,1,*(undefined8 *)PTR_DAT_076360c0);
    uVar12 = *(uint *)(param_2 + 0x18);
  }
  if (uVar12 <= uVar25) goto LAB_06b31f08;
  uVar12 = *puVar36;
  if ((uVar12 == 0x3c) && (*(char *)((long)param_1 + 0x33a) != '\0')) {
    lVar15 = param_1[0x24];
    uVar16 = FUN_06b61054(param_1,param_2,uVar25 + 1,&local_78,0);
    uVar33 = local_78;
    if ((uVar16 & 1) == 0) goto LAB_06b30188;
    if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_06b31f08;
    iVar9 = *(int *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28);
    if ((*(byte *)((long)param_1 + 0x284) & 1) != 0) {
      *(undefined1 *)((long)param_1 + 0x292) = 1;
    }
    puVar5 = PTR_DAT_07635e98;
    plVar30 = (long *)PTR_DAT_07635e98;
    uVar25 = local_78;
    if (*(int *)((long)param_1 + 0x65c) != 1)
    goto UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider__GetAvailabilityAsync;
    lVar28 = *(long *)PTR_DAT_07635e98;
    if (*(int *)(lVar28 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar28 = *(long *)puVar5;
    }
    lVar28 = **(long **)(lVar28 + 0xb8);
    if (lVar28 != 0) {
      if (*(uint *)(param_1 + 0x24) < *(uint *)(lVar28 + 0x18)) {
        lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38;
        *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
        if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
          if (*(uint *)(param_1 + 0x94) < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178;
            *(short *)(lVar28 + 0x24) = *(short *)((long)param_1 + 0x6bc) + -0x2000;
            *(long *)(lVar28 + 0x40) = param_1[0x20];
            thunk_FUN_0329bf60();
            if ((param_1[0x74] != 0) && (lVar28 = *(long *)(param_1[0x74] + 0x38), lVar28 != 0)) {
              uVar12 = *(uint *)(param_1 + 0x94);
              if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x50) = (int)param_1[0x24];
                if ((param_1[0xd6] != 0) && (lVar31 = FUN_06b85738(param_1[0xd6],0), lVar31 != 0)) {
                  uVar17 = FUN_047af170(lVar31,*(undefined4 *)((long)param_1 + 0x6bc),
                                        *(undefined8 *)PTR_DAT_076360a0);
                  if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                    *(undefined8 *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x30) = uVar17;
                    thunk_FUN_0329bf60();
                    if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                      uVar12 = *(uint *)(param_1 + 0x94);
                      if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                        uVar14 = *(undefined4 *)((long)param_1 + 0x65c);
                        lVar31 = lVar28 + (long)(int)uVar12 * 0x178;
                        *(int *)(lVar31 + 0x28) = iVar9;
                        *(undefined4 *)(lVar31 + 0x20) = uVar14;
                        if (uVar33 < *(uint *)(param_2 + 0x18)) {
                          *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x2c) =
                               (*(int *)(param_2 + (long)(int)uVar33 * 0x10 + 0x28) - iVar9) + 1;
                          *(undefined4 *)((long)param_1 + 0x65c) = 0;
                          *(int *)(param_1 + 0x24) = (int)lVar15;
                          local_220 = local_220 + 1;
                          plVar30 = (long *)PTR_DAT_07635e98;
                          uVar25 = uVar33;
                          goto 
                          UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider__OnApplicationPause
                          ;
                        }
                      }
                      goto LAB_06b31f08;
                    }
                    goto LAB_06b31e5c;
                  }
                  goto LAB_06b31f08;
                }
                goto LAB_06b31e5c;
              }
              goto LAB_06b31f08;
            }
            goto LAB_06b31e5c;
          }
          goto LAB_06b31f08;
        }
        goto LAB_06b31e5c;
      }
      goto LAB_06b31f08;
    }
    goto LAB_06b31e5c;
  }
LAB_06b30188:
  local_74[0] = 0;
  lVar31 = param_1[0x20];
  lVar28 = param_1[0x23];
  lVar15 = param_1[0x24];
  if (*(int *)((long)param_1 + 0x65c) != 0) goto LAB_06b3025c;
  uVar33 = *(uint *)((long)param_1 + 0x284);
  if ((uVar33 >> 4 & 1) == 0) {
    if ((uVar33 >> 3 & 1) == 0) {
      if ((uVar33 >> 5 & 1) != 0) goto LAB_06b301b0;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar16 = FUN_05d7bc7c(uVar12,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar12 = FUN_05d7c120(uVar12,0);
        goto LAB_06b30258;
      }
    }
  }
  else {
LAB_06b301b0:
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar16 = FUN_05d7bd1c(uVar12,0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar12 = FUN_05d7bfa8(uVar12,0);
LAB_06b30258:
      uVar12 = uVar12 & 0xffff;
    }
  }
LAB_06b3025c:
  uVar33 = uVar25 + 1;
  if ((int)uVar33 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar33) goto LAB_06b31f08;
    uVar27 = *(uint *)(param_2 + (long)(int)uVar33 * 0x10 + 0x24);
  }
  else {
    uVar27 = 0;
  }
  uVar13 = uVar12;
  if (*(char *)((long)param_1 + 0x33b) == '\0') {
LAB_06b303d8:
    lVar23 = FUN_06b6bcb8(param_1,uVar12,param_1[0x20],*(undefined4 *)((long)param_1 + 0x284),
                          *(undefined4 *)((long)param_1 + 0x23c),local_74,0);
    if (lVar23 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_06b31f08;
      FUN_06b6c248(param_1,uVar12,*(undefined4 *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28),
                   param_1[0x20],0);
      if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iVar9 = FUN_06b81654(0);
      if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_06b31f08;
      if (iVar9 == 0) {
        uVar13 = 0x25a1;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar13 = FUN_06b81654(0);
      }
      *puVar36 = uVar13;
      lVar23 = param_1[0x20];
      uVar14 = *(undefined4 *)((long)param_1 + 0x284);
      uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
      if (*(int *)(*(long *)PTR_DAT_076360b0 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar23 = FUN_06b49500(uVar13,lVar23,1,uVar14,uVar2,local_74,0);
      if (lVar23 == 0) {
        if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        lVar23 = FUN_06b81bcc(0);
        if (lVar23 != 0) {
          if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          lVar23 = FUN_06b81bcc(0);
          if (lVar23 == 0) goto LAB_06b31e5c;
          if (0 < *(int *)(lVar23 + 0x18)) {
            lVar23 = *plVar26;
            if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            uVar17 = FUN_06b81bcc(0);
            uVar14 = *(undefined4 *)((long)param_1 + 0x284);
            uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
            if (*(int *)(*(long *)PTR_DAT_076360b0 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                        (*(long *)PTR_DAT_076360b0);
            }
            lVar23 = FUN_06b49aa8(uVar13,lVar23,uVar17,1,uVar14,uVar2,local_74,0);
            if (lVar23 != 0) goto LAB_06b304ec;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar17 = FUN_06b817c8(0);
        if (*(int *)(*(long *)PTR_DAT_0759b2a8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_0759b2a8);
        }
        uVar16 = FUN_06e587d8(uVar17,0,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar17 = FUN_06b817c8(0);
          uVar14 = *(undefined4 *)((long)param_1 + 0x284);
          uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
          if (*(int *)(*(long *)PTR_DAT_076360b0 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)PTR_DAT_076360b0);
          }
          lVar23 = FUN_06b49500(uVar13,uVar17,1,uVar14,uVar2,local_74,0);
          if (lVar23 != 0) goto LAB_06b304ec;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_06b31f08;
        *puVar36 = 0x20;
        lVar23 = param_1[0x20];
        uVar14 = *(undefined4 *)((long)param_1 + 0x284);
        uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
        if (*(int *)(*(long *)PTR_DAT_076360b0 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar13 = 0x20;
        lVar23 = FUN_06b49500(0x20,lVar23,1,uVar14,uVar2,local_74,0);
        if (lVar23 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_06b31f08;
          *puVar36 = 3;
          lVar23 = param_1[0x20];
          uVar14 = *(undefined4 *)((long)param_1 + 0x284);
          uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
          if (*(int *)(*(long *)PTR_DAT_076360b0 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar13 = 3;
          lVar23 = FUN_06b49500(3,lVar23,1,uVar14,uVar2,local_74,0);
        }
      }
LAB_06b304ec:
      if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar16 = FUN_06b8176c(0);
      if ((uVar16 & 1) == 0) {
        plVar22 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759c0d8,4);
        if (uVar12 >> 0x10 == 0) {
          local_170 = CONCAT44(local_170._4_4_,uVar12);
          lVar19 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x50),&local_170);
          if (plVar22 == (long *)0x0) goto LAB_06b31e5c;
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if ((int)plVar22[3] == 0) goto LAB_06b31f08;
          plVar22[4] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 4,lVar19);
          if (param_1[0x1f] == 0) goto LAB_06b31e5c;
          lVar19 = thunk_FUN_06e5f718(param_1[0x1f],0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if (*(uint *)(plVar22 + 3) < 2) goto LAB_06b31f08;
          plVar22[5] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 5,lVar19);
          if (lVar23 == 0) goto LAB_06b31e5c;
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar23 + 0x14));
          lVar19 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x50),&local_e0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if (*(uint *)(plVar22 + 3) < 3) goto LAB_06b31f08;
          plVar22[6] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 6,lVar19);
          lVar19 = thunk_FUN_06e5f718(param_1,0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if (*(uint *)(plVar22 + 3) < 4) goto LAB_06b31f08;
          plVar22[7] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 7,lVar19);
          puVar20 = (undefined8 *)PTR_DAT_076360e0;
        }
        else {
          local_170 = CONCAT44(local_170._4_4_,uVar12);
          lVar19 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x50),&local_170);
          if (plVar22 == (long *)0x0) goto LAB_06b31e5c;
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if ((int)plVar22[3] == 0) goto LAB_06b31f08;
          plVar22[4] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 4,lVar19);
          if (param_1[0x1f] == 0) goto LAB_06b31e5c;
          lVar19 = thunk_FUN_06e5f718(param_1[0x1f],0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if (*(uint *)(plVar22 + 3) < 2) goto LAB_06b31f08;
          plVar22[5] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 5,lVar19);
          if (lVar23 == 0) goto LAB_06b31e5c;
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar23 + 0x14));
          lVar19 = thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x50),&local_e0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if (*(uint *)(plVar22 + 3) < 3) goto LAB_06b31f08;
          plVar22[6] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 6,lVar19);
          lVar19 = thunk_FUN_06e5f718(param_1,0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_0322f04c(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto UnityEngine_XR_ARSubsystems_XRCpuImage__get_width;
          if (*(uint *)(plVar22 + 3) < 4) goto LAB_06b31f08;
          plVar22[7] = lVar19;
          thunk_FUN_0329bf60(plVar22 + 7,lVar19);
          puVar20 = (undefined8 *)PTR_DAT_076360d8;
        }
        uVar17 = FUN_05c8969c(*puVar20,plVar22,0);
        if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06def178(uVar17,param_1,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_07635e20 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar16 = FUN_06b8c008(uVar12,0);
    if ((uVar27 == 0xfe0e) || ((uVar16 & 1) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_07635e20 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar16 = FUN_06b8bf88(uVar12,0);
      if ((uVar27 != 0xfe0f) || ((uVar16 & 1) == 0)) goto LAB_06b303d8;
    }
    if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar23 = FUN_06b81fdc(0);
    if (lVar23 == 0) goto LAB_06b303d8;
    if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar23 = FUN_06b81fdc(0);
    if (lVar23 == 0) goto LAB_06b31e5c;
    if (*(int *)(lVar23 + 0x18) < 1) goto LAB_06b303d8;
    lVar23 = *plVar26;
    if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar17 = FUN_06b81fdc(0);
    lVar19 = param_1[0x50];
    lVar24 = param_1[0x47];
    if (*(int *)(*(long *)PTR_DAT_076360b0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_076360b0);
    }
    lVar23 = UnityEngine_XR_Hands_XRHandMeshController__get_showMeshWhenTrackingIsAcquired
                       (uVar12,lVar23,uVar17,1,(int)lVar19,(int)lVar24,local_74,0);
    if (lVar23 == 0) goto LAB_06b303d8;
  }
  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0)) goto LAB_06b31e5c;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_06b31f08;
  puVar20 = (undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38);
  *puVar20 = 0;
  thunk_FUN_0329bf60(puVar20,0);
  if (lVar23 == 0) goto LAB_06b31e5c;
  if (*(char *)(lVar23 + 0x10) == '\x01') {
    if (*(long *)(lVar23 + 0x18) == 0) goto LAB_06b31e5c;
    iVar9 = FUN_06b35234(*(long *)(lVar23 + 0x18),0);
    if (*plVar26 == 0) goto LAB_06b31e5c;
    iVar10 = FUN_06b35234(*plVar26,0);
    if (iVar9 != iVar10) {
      plVar22 = *(long **)(lVar23 + 0x18);
      if (plVar22 == (long *)0x0) {
        plVar22 = (long *)0x0;
        *plVar26 = 0;
      }
      else {
        lVar19 = *(long *)PTR_DAT_07636008;
        bVar3 = *(byte *)(lVar19 + 0x130);
        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
          plVar30 = (long *)0x0;
        }
        else {
          plVar30 = plVar22;
          if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
            plVar30 = (long *)0x0;
          }
        }
        *plVar26 = (long)plVar30;
        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
          plVar22 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
          plVar22 = (long *)0x0;
        }
      }
      thunk_FUN_0329bf60(plVar26,plVar22);
    }
    bVar8 = iVar9 != iVar10;
    if ((uVar27 >> 4 == 0xfe0) || (uVar27 - 0xe0100 < 0xf0)) {
      if (*plVar26 == 0) goto LAB_06b31e5c;
      iVar9 = Unity_XR_CoreUtils_XROrigin__RotateAroundCameraUsingOriginUp(*plVar26,uVar13,uVar27,0)
      ;
      if (iVar9 != 0) {
        if (*plVar26 == 0) goto LAB_06b31e5c;
        uVar16 = FUN_06b44d70(*plVar26,iVar9,&local_90,0);
        if ((uVar16 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0))
          goto LAB_06b31e5c;
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_06b31f08;
          *(undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_90;
          thunk_FUN_0329bf60();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar33) goto LAB_06b31f08;
      *(undefined4 *)(param_2 + (long)(int)uVar33 * 0x10 + 0x24) = 0x1a;
      uVar25 = uVar33;
    }
    if ((uVar11 & 1) != 0) {
      if (((*plVar26 == 0) || (lVar19 = *(long *)(*plVar26 + 0x178), lVar19 == 0)) ||
         (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_06b31e5c;
      uVar16 = FUN_058ccd6c(lVar19,*(undefined4 *)(lVar23 + 0x28),&local_88,
                            *(undefined8 *)PTR_DAT_07636080);
      if ((uVar16 & 1) == 0) goto LAB_06b30de0;
      plVar30 = (long *)PTR_DAT_07635e98;
      plVar22 = (long *)PTR_DAT_07635e18;
      if (local_88 == 0) goto LAB_06b31504;
      iVar9 = 0;
      while (iVar9 < *(int *)(local_88 + 0x18)) {
        auVar41 = FUN_0476cfb0(local_88,iVar9,*(undefined8 *)PTR_DAT_076360a8);
        lVar19 = auVar41._0_8_;
        if (lVar19 == 0) goto LAB_06b31e5c;
        uVar16 = *(ulong *)(lVar19 + 0x18);
        uVar12 = (uint)uVar16;
        if (1 < (int)uVar12) {
          uVar33 = 1;
          do {
            if (*(uint *)(param_2 + 0x18) <= uVar25 + uVar33) goto LAB_06b31f08;
            if (*plVar26 == 0) goto LAB_06b31e5c;
            iVar10 = FUN_06b42808(*plVar26,*(undefined4 *)
                                            (param_2 + (long)(int)(uVar25 + uVar33) * 0x10 + 0x24),0
                                 );
            if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_06b31f08;
            if (iVar10 != *(int *)(lVar19 + (long)(int)uVar33 * 4 + 0x20)) goto LAB_06b30d24;
            uVar33 = uVar33 + 1;
          } while (uVar12 != uVar33);
        }
        if (auVar41._8_4_ != 0) {
          if (*plVar26 == 0) goto LAB_06b31e5c;
          uVar35 = FUN_06b44d70(*plVar26,auVar41._8_8_ & 0xffffffff,&local_98,0);
          if ((uVar35 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0))
            goto LAB_06b31e5c;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_06b31f08;
            *(undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_98
            ;
            thunk_FUN_0329bf60();
            if ((int)uVar12 < 1) goto LAB_06b30dd8;
            uVar35 = 0;
            uVar33 = 0;
            if (uVar25 <= *(uint *)(param_2 + 0x18)) {
              uVar33 = *(uint *)(param_2 + 0x18) - uVar25;
            }
            goto LAB_06b30da4;
          }
        }
LAB_06b30d24:
        iVar9 = iVar9 + 1;
        if (local_88 == 0) goto LAB_06b31e5c;
      }
    }
  }
  else {
    bVar8 = false;
  }
  goto LAB_06b30de0;
  while( true ) {
    lVar19 = param_2 + (long)(int)(uVar25 + (int)uVar35) * 0x10;
    if (uVar35 == 0) {
      *(uint *)(lVar19 + 0x2c) = uVar12;
    }
    else {
      *(undefined4 *)(lVar19 + 0x24) = 0x1a;
    }
    uVar35 = uVar35 + 1;
    if ((uVar16 & 0xffffffff) == uVar35) break;
LAB_06b30da4:
    if (uVar33 == uVar35) goto LAB_06b31f08;
  }
LAB_06b30dd8:
  uVar25 = (uVar25 + uVar12) - 1;
LAB_06b30de0:
  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0)) goto LAB_06b31e5c;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_06b31f08;
  lVar19 = lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178;
  plVar22 = (long *)(lVar19 + 0x30);
  *plVar22 = lVar23;
  *(undefined4 *)(lVar19 + 0x20) = 0;
  thunk_FUN_0329bf60(plVar22,lVar23);
  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0)) goto LAB_06b31e5c;
  uVar12 = *(uint *)(param_1 + 0x94);
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_06b31f08;
  lVar24 = lVar19 + (long)(int)uVar12 * 0x178;
  *(short *)(lVar24 + 0x24) = (short)uVar13;
  *(undefined1 *)(lVar24 + 0x54) = local_74[0];
  if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_06b31f08;
  lVar19 = lVar19 + (long)(int)uVar12 * 0x178;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28);
  *(long *)(lVar19 + 0x40) = *plVar26;
  thunk_FUN_0329bf60();
  plVar30 = (long *)PTR_DAT_07635e98;
  plVar22 = (long *)PTR_DAT_07635e18;
  if (*(char *)(lVar23 + 0x10) == '\x02') {
    plVar32 = *(long **)(lVar23 + 0x18);
    if (plVar32 == (long *)0x0) goto LAB_06b31e5c;
    bVar3 = *(byte *)(*(long *)PTR_DAT_07635df8 + 0x130);
    if ((*(byte *)(*plVar32 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar32 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_07635df8))
    goto LAB_06b31e5c;
    lVar31 = plVar32[0x11];
    lVar28 = *(long *)PTR_DAT_07635e98;
    if (*(int *)(lVar28 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar28 = *plVar30;
    }
    uVar12 = FUN_06b2356c(lVar31,plVar32,*(long *)(lVar28 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 8));
    *(uint *)(param_1 + 0x24) = uVar12;
    lVar28 = **(long **)(*plVar30 + 0xb8);
    if (lVar28 == 0) goto LAB_06b31e5c;
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_06b31f08;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x38;
    *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
    if ((*plVar1 == 0) || (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 == 0)) goto LAB_06b31e5c;
    uVar12 = *(uint *)(param_1 + 0x94);
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_06b31f08;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x178;
    *(undefined4 *)(lVar28 + 0x20) = 1;
    *(int *)(lVar28 + 0x50) = (int)param_1[0x24];
    *(undefined4 *)((long)param_1 + 0x65c) = 0;
    *(int *)(param_1 + 0x24) = (int)lVar15;
    local_220 = local_220 + 1;
    goto UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider__OnApplicationPause;
  }
  if (bVar8) {
    if (*plVar26 == 0) goto LAB_06b31e5c;
    iVar9 = FUN_06b35234(*plVar26,0);
    if (param_1[0x1f] == 0) goto LAB_06b31e5c;
    iVar10 = FUN_06b35234(param_1[0x1f],0);
    if (iVar9 != iVar10) {
      if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar16 = UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider__get_leftHandMovementDirection
                         (0);
      if ((uVar16 & 1) == 0) {
        if (*plVar26 == 0) goto LAB_06b31e5c;
        lVar19 = *(long *)(*plVar26 + 0x88);
      }
      else {
        if (*plVar26 == 0) goto LAB_06b31e5c;
        uVar17 = *(undefined8 *)(*plVar26 + 0x88);
        lVar19 = *plVar29;
        if (*(int *)(*(long *)PTR_DAT_076360b8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        lVar19 = FUN_06b7cbec(lVar19,uVar17,0);
      }
      *plVar29 = lVar19;
      thunk_FUN_0329bf60(plVar29);
      puVar5 = PTR_DAT_07635e98;
      lVar24 = *plVar29;
      lVar34 = *plVar26;
      lVar19 = *(long *)PTR_DAT_07635e98;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar19 = *(long *)puVar5;
      }
      uVar14 = FUN_06b23334(lVar24,lVar34,*(long *)(lVar19 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
      *(undefined4 *)(param_1 + 0x24) = uVar14;
    }
  }
  if (*(long *)(lVar23 + 0x20) == 0) goto LAB_06b31e5c;
  iVar9 = FUN_06f0fcf4(*(long *)(lVar23 + 0x20),0);
  if (0 < iVar9) {
    if (*(long *)(lVar23 + 0x20) == 0) goto LAB_06b31e5c;
    lVar19 = *plVar26;
    lVar24 = *plVar29;
    uVar14 = FUN_06f0fcf4(*(long *)(lVar23 + 0x20),0);
    if (*(int *)(*(long *)PTR_DAT_076360b8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_076360b8);
    }
    lVar23 = FUN_06b7c66c(lVar19,lVar24,uVar14,0);
    *plVar29 = lVar23;
    thunk_FUN_0329bf60(plVar29,lVar23);
    puVar5 = PTR_DAT_07635e98;
    lVar19 = *plVar29;
    lVar24 = *plVar26;
    lVar23 = *(long *)PTR_DAT_07635e98;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar23 = *(long *)puVar5;
    }
    uVar14 = FUN_06b23334(lVar19,lVar24,*(long *)(lVar23 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
    bVar8 = true;
    *(undefined4 *)(param_1 + 0x24) = uVar14;
  }
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar16 = FUN_05d79414(uVar13,0);
  puVar5 = PTR_DAT_07635e98;
  plVar22 = (long *)PTR_DAT_07635e18;
  if ((uVar13 != 0x200b) && ((uVar16 & 1) == 0)) {
    lVar23 = *(long *)PTR_DAT_07635e98;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar23 = *(long *)puVar5;
    }
    lVar19 = **(long **)(lVar23 + 0xb8);
    if (lVar19 == 0) goto LAB_06b31e5c;
    uVar12 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_06b31f08;
    if (*(int *)(lVar19 + (long)(int)uVar12 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar23 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar19 = **(long **)(*(long *)PTR_DAT_07635e98 + 0xb8);
        if (lVar19 == 0) goto LAB_06b31e5c;
        uVar12 = *(uint *)(param_1 + 0x24);
      }
    }
    else {
      if (bVar8) {
        if (param_1[0xf7] == 0) goto LAB_06b31e5c;
        uVar16 = FUN_0572cef4(param_1[0xf7],uVar12,&local_9c,*(undefined8 *)PTR_DAT_07608398);
        puVar5 = PTR_DAT_07635e98;
        if ((uVar16 & 1) == 0) {
LAB_06b31244:
          lVar23 = *plVar29;
          uVar17 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d5f10);
          FUN_06e0c224(uVar17,lVar23,0);
          puVar5 = PTR_DAT_07635e98;
          lVar19 = *plVar26;
          lVar23 = *(long *)PTR_DAT_07635e98;
          if (*(int *)(lVar23 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar23 = *(long *)puVar5;
          }
          uVar12 = FUN_06b23334(uVar17,lVar19,*(long *)(lVar23 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
          if (param_1[0xf7] == 0) goto LAB_06b31e5c;
          FUN_0572b568(param_1[0xf7],(int)param_1[0x24],uVar12,*(undefined8 *)PTR_DAT_075d7b70);
          lVar23 = *(long *)PTR_DAT_07635e98;
        }
        else {
          lVar23 = *(long *)PTR_DAT_07635e98;
          if (*(int *)(lVar23 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar23 = *(long *)puVar5;
          }
          lVar19 = **(long **)(lVar23 + 0xb8);
          if (lVar19 == 0) goto LAB_06b31e5c;
          if (*(uint *)(lVar19 + 0x18) <= local_9c) goto LAB_06b31f08;
          uVar12 = local_9c;
          if (0x3ffe < *(int *)(lVar19 + (long)(int)local_9c * 0x38 + 0x54)) goto LAB_06b31244;
        }
        *(uint *)(param_1 + 0x24) = uVar12;
        if (*(int *)(lVar23 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          uVar12 = *(uint *)(param_1 + 0x24);
          lVar23 = *(long *)PTR_DAT_07635e98;
        }
        lVar19 = **(long **)(lVar23 + 0xb8);
      }
      else {
        lVar23 = *plVar29;
        uVar17 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d5f10);
        FUN_06e0c224(uVar17,lVar23,0);
        puVar5 = PTR_DAT_07635e98;
        lVar19 = *plVar26;
        lVar23 = *(long *)PTR_DAT_07635e98;
        if (*(int *)(lVar23 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar23 = *(long *)puVar5;
        }
        uVar12 = FUN_06b23334(uVar17,lVar19,*(long *)(lVar23 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
        *(uint *)(param_1 + 0x24) = uVar12;
        lVar19 = **(long **)(*(long *)puVar5 + 0xb8);
      }
      if (lVar19 == 0) goto LAB_06b31e5c;
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_06b31f08;
    lVar19 = lVar19 + (long)(int)uVar12 * 0x38;
    *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
  }
  plVar30 = (long *)PTR_DAT_07635e98;
  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 == 0)) goto LAB_06b31e5c;
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_06b31f08;
  *(long *)(lVar23 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x48) = *plVar29;
  thunk_FUN_0329bf60();
  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 == 0)) goto LAB_06b31e5c;
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_06b31f08;
  uVar12 = *(uint *)(param_1 + 0x24);
  *(uint *)(lVar23 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x50) = uVar12;
  lVar23 = *plVar30;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar23 = *plVar30;
    uVar12 = *(uint *)(param_1 + 0x24);
  }
  lVar19 = **(long **)(lVar23 + 0xb8);
  if (lVar19 == 0) goto LAB_06b31e5c;
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_06b31f08;
  *(bool *)(lVar19 + (long)(int)uVar12 * 0x38 + 0x41) = bVar8;
  if (bVar8) {
    if (*(int *)(lVar23 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar19 = **(long **)(*plVar30 + 0xb8);
      if (lVar19 == 0) goto LAB_06b31e5c;
      uVar12 = *(uint *)(param_1 + 0x24);
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_06b31f08;
    plVar32 = (long *)(lVar19 + (long)(int)uVar12 * 0x38 + 0x48);
    *plVar32 = lVar28;
    thunk_FUN_0329bf60(plVar32,lVar28);
    param_1[0x20] = lVar31;
    thunk_FUN_0329bf60(plVar26);
    param_1[0x23] = lVar28;
    thunk_FUN_0329bf60(plVar29,lVar28);
    *(int *)(param_1 + 0x24) = (int)lVar15;
  }
  uVar12 = *(uint *)(param_1 + 0x94);
UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider__OnApplicationPause:
  *(uint *)(param_1 + 0x94) = uVar12 + 1;
UnityEngine_XR_ARSubsystems_XRSessionSubsystem_Provider__GetAvailabilityAsync:
  uVar12 = *(uint *)(param_2 + 0x18);
  uVar25 = uVar25 + 1;
  if ((int)uVar12 <= (int)uVar25) goto LAB_06b31504;
  goto LAB_06b2ff24;
}


