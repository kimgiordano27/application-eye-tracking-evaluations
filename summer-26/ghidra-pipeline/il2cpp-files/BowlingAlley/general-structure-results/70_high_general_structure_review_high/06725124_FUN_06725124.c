/*
FUNCTION_NAME: FUN_06725124
ENTRY_POINT: 06725124
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06725124(double param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double local_210;
  double dStack_208;
  undefined8 local_200;
  double dStack_1f8;
  double dStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  double dStack_198;
  double dStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  double dStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  double dStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar6 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_MoveNext__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_Dispose__;
  if ((DAT_076e0665 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_MoveNext__)
    ;
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarSkinnedRenderable>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_MoveNext__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet_Enumerator<ParameterExpression>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_MoveNext__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarPrimitive>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_Dispose__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    DAT_076e0665 = 1;
  }
  local_108 = 0;
  local_10c = 0;
  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(lVar10,*(undefined8 *)puVar6);
  plVar21 = (long *)(param_2 + 0x10);
  *plVar21 = lVar10;
  thunk_FUN_0333a630(plVar21,lVar10);
  *(double *)(param_2 + 0x30) = param_1;
  uVar11 = FUN_067184b4(param_1,0);
  puVar5 = PTR_DAT_07279c00;
  if ((uVar11 & 1) == 0) {
    dVar26 = *(double *)(param_2 + 0x90);
    dVar25 = 0.25;
    if (0.0 < dVar26) {
      if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      dVar25 = ABS(param_1) * 0.25;
      if (dVar26 <= dVar25) {
        dVar25 = *(double *)(param_2 + 0x90);
      }
      else if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    dVar26 = acos(1.0 - dVar25 / ABS(param_1));
    dVar25 = DAT_0139fb30;
    dVar26 = DAT_0139dba0 / dVar26;
    sincos(DAT_0139fb30 / dVar26,&dStack_208,&local_210);
    *(double *)(param_2 + 0x50) = dVar26 / dVar25;
    *(double *)(param_2 + 0x40) = dStack_208;
    *(double *)(param_2 + 0x48) = local_210;
    if (param_1 < 0.0) {
      *(double *)(param_2 + 0x40) = -dStack_208;
    }
    if (*(long *)(param_2 + 0x88) != 0) {
      lVar10 = *(long *)(param_2 + 0x10);
      iVar9 = FUN_06717ce0(*(long *)(param_2 + 0x88),0);
      if (lVar10 != 0) {
        FUN_041e27fc(lVar10,iVar9 << 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_MoveNext__
                    );
        puVar5 = Method_System_Collections_Generic_HashSet_Enumerator<ParameterExpression>_Dispose__
        ;
        lVar10 = *(long *)(param_2 + 0x88);
        if (lVar10 != 0) {
          plVar1 = (long *)(param_2 + 0x20);
          iVar9 = 0;
          plVar2 = (long *)(param_2 + 0x18);
          puVar14 = (undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
          ;
          do {
            iVar8 = FUN_06717ce0(lVar10,0);
            if (iVar8 <= iVar9) {
              return;
            }
            if (((*(long *)(param_2 + 0x88) == 0) ||
                (lVar10 = *(long *)(*(long *)(param_2 + 0x88) + 0x30), lVar10 == 0)) ||
               (lVar10 = FUN_041e29a8(lVar10,iVar9,*puVar14), lVar10 == 0)) break;
            *plVar2 = *(long *)(lVar10 + 0x18);
            thunk_FUN_0333a630(plVar2);
            if (*plVar2 == 0) break;
            iVar8 = *(int *)(*plVar2 + 0x18);
            if ((iVar8 != 0) && ((0.0 < param_1 || ((2 < iVar8 && (*(int *)(lVar10 + 0x28) == 0)))))
               ) {
              lVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<OvrAvatarPrimitive>_get_Current__
                                         );
              FUN_04194d8c(lVar12,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<OvrAvatarSkinnedRenderable>_Dispose__
                          );
              *plVar1 = lVar12;
              thunk_FUN_0333a630(plVar1,lVar12);
              iVar19 = iVar8 + -1;
              if (iVar19 == 0) {
                if (*(int *)(lVar10 + 0x24) == 0) {
                  if (1.0 <= dVar26) {
                    dVar25 = 0.0;
                    dVar24 = 1.0;
                    iVar8 = 2;
                    do {
                      if (*plVar2 == 0) goto LAB_06725f04;
                      lVar10 = *plVar1;
                      FUN_041952f0(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                      if (*plVar2 == 0) goto LAB_06725f04;
                      dVar22 = dVar24 * param_1 + (double)(long)dStack_c8;
                      dVar23 = dVar22 + -0.5;
                      if (0.0 <= dVar22) {
                        dVar23 = dVar22 + 0.5;
                      }
                      lVar12 = -0x8000000000000000;
                      if (dVar23 != INFINITY) {
                        lVar12 = (long)dVar23;
                      }
                      FUN_041952f0(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                      dVar22 = dVar25 * param_1 + (double)(long)local_c0;
                      dVar23 = dVar22 + -0.5;
                      if (0.0 <= dVar22) {
                        dVar23 = dVar22 + 0.5;
                      }
                      lVar16 = -0x8000000000000000;
                      if (dVar23 != INFINITY) {
                        lVar16 = (long)dVar23;
                      }
                      uStack_128 = 0;
                      local_130 = 0.0;
                      uStack_118 = 0;
                      local_120 = 0;
                      dStack_138 = 0.0;
                      local_140 = 0;
                      FUN_06718238(&local_140,lVar12,lVar16,0);
                      if (lVar10 == 0) goto LAB_06725f04;
                      dStack_f8 = dStack_138;
                      local_100 = local_140;
                      uStack_e8 = uStack_128;
                      local_f0 = local_130;
                      uStack_d8 = uStack_118;
                      local_e0 = local_120;
                      lVar12 = *(long *)(lVar10 + 0x10);
                      lVar16 = *(long *)
                                Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__
                      ;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_06725f04;
                      uVar3 = *(uint *)(lVar10 + 0x18);
                      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                        lVar12 = lVar12 + (long)(int)uVar3 * 0x30;
                        *(undefined8 *)(lVar12 + 0x38) = uStack_128;
                        *(double *)(lVar12 + 0x30) = local_130;
                        *(undefined8 *)(lVar12 + 0x48) = uStack_118;
                        *(undefined8 *)(lVar12 + 0x40) = local_120;
                        *(double *)(lVar12 + 0x28) = dStack_138;
                        *(undefined8 *)(lVar12 + 0x20) = local_140;
                      }
                      else {
                        dStack_c8 = dStack_138;
                        local_d0 = local_140;
                        uStack_b8 = uStack_128;
                        local_c0 = local_130;
                        uStack_a8 = uStack_118;
                        local_b0 = local_120;
                        FUN_0419568c(lVar10,&local_d0,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      dVar22 = (double)iVar8;
                      iVar8 = iVar8 + 1;
                      dVar23 = dVar24 * *(double *)(param_2 + 0x40);
                      dVar24 = dVar24 * *(double *)(param_2 + 0x48) -
                               dVar25 * *(double *)(param_2 + 0x40);
                      dVar25 = dVar25 * *(double *)(param_2 + 0x48) + dVar23;
                    } while (dVar22 <= dVar26);
                  }
                }
                else {
                  dVar24 = -1.0;
                  iVar8 = 4;
                  dVar25 = -1.0;
                  do {
                    if (*plVar2 == 0) goto LAB_06725f04;
                    lVar10 = *plVar1;
                    FUN_041952f0(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                    if (*plVar2 == 0) goto LAB_06725f04;
                    dVar22 = dVar24 * param_1 + (double)(long)dStack_c8;
                    dVar23 = dVar22 + -0.5;
                    if (0.0 <= dVar22) {
                      dVar23 = dVar22 + 0.5;
                    }
                    lVar12 = -0x8000000000000000;
                    if (dVar23 != INFINITY) {
                      lVar12 = (long)dVar23;
                    }
                    FUN_041952f0(&local_d0,*plVar2,0,*(undefined8 *)puVar5);
                    dVar22 = dVar25 * param_1 + (double)(long)local_c0;
                    dVar23 = dVar22 + -0.5;
                    if (0.0 <= dVar22) {
                      dVar23 = dVar22 + 0.5;
                    }
                    lVar16 = -0x8000000000000000;
                    if (dVar23 != INFINITY) {
                      lVar16 = (long)dVar23;
                    }
                    uStack_128 = 0;
                    local_130 = 0.0;
                    uStack_118 = 0;
                    local_120 = 0;
                    dStack_138 = 0.0;
                    local_140 = 0;
                    FUN_06718238(&local_140,lVar12,lVar16,0);
                    if (lVar10 == 0) goto LAB_06725f04;
                    dStack_f8 = dStack_138;
                    local_100 = local_140;
                    uStack_e8 = uStack_128;
                    local_f0 = local_130;
                    uStack_d8 = uStack_118;
                    local_e0 = local_120;
                    lVar12 = *(long *)(lVar10 + 0x10);
                    lVar16 = *(long *)
                              Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__
                    ;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_06725f04;
                    uVar3 = *(uint *)(lVar10 + 0x18);
                    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                      lVar12 = lVar12 + (long)(int)uVar3 * 0x30;
                      *(undefined8 *)(lVar12 + 0x38) = uStack_128;
                      *(double *)(lVar12 + 0x30) = local_130;
                      *(undefined8 *)(lVar12 + 0x48) = uStack_118;
                      *(undefined8 *)(lVar12 + 0x40) = local_120;
                      *(double *)(lVar12 + 0x28) = dStack_138;
                      *(undefined8 *)(lVar12 + 0x20) = local_140;
                    }
                    else {
                      dStack_c8 = dStack_138;
                      local_d0 = local_140;
                      uStack_b8 = uStack_128;
                      local_c0 = local_130;
                      uStack_a8 = uStack_118;
                      local_b0 = local_120;
                      FUN_0419568c(lVar10,&local_d0,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    if (0.0 <= dVar24) {
                      dVar23 = 1.0;
                      if (0.0 <= dVar25) {
                        dVar24 = -1.0;
                        dVar23 = dVar25;
                      }
                    }
                    else {
                      dVar24 = 1.0;
                      dVar23 = dVar25;
                    }
                    iVar8 = iVar8 + -1;
                    dVar25 = dVar23;
                  } while (iVar8 != 0);
                }
LAB_06725aa8:
                lVar10 = *plVar21;
                if (lVar10 == 0) break;
LAB_06725ab0:
                lVar12 = *plVar1;
              }
              else {
                lVar12 = *(long *)(param_2 + 0x28);
                if (lVar12 == 0) break;
                *(undefined4 *)(lVar12 + 0x18) = 0;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                FUN_041329bc(lVar12,iVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<Rigidbody>_Dispose__
                            );
                if (0 < iVar19) {
                  iVar20 = 1;
                  do {
                    if (*(long *)(param_2 + 0x18) == 0) goto LAB_06725f04;
                    lVar12 = *(long *)(param_2 + 0x28);
                    FUN_041952f0(&local_100,*(long *)(param_2 + 0x18),iVar20 + -1,
                                 *(undefined8 *)puVar5);
                    dStack_c8 = dStack_f8;
                    local_d0 = local_100;
                    uStack_b8 = uStack_e8;
                    local_c0 = local_f0;
                    uStack_a8 = uStack_d8;
                    local_b0 = local_e0;
                    if (*plVar2 == 0) goto LAB_06725f04;
                    FUN_041952f0(&local_100,*plVar2,iVar20,*(undefined8 *)puVar5);
                    dStack_198 = dStack_f8;
                    local_1a0 = local_100;
                    uStack_188 = uStack_e8;
                    dStack_190 = local_f0;
                    uStack_178 = uStack_d8;
                    local_180 = local_e0;
                    dStack_168 = dStack_c8;
                    uStack_170 = local_d0;
                    uStack_158 = uStack_b8;
                    local_160 = local_c0;
                    uStack_148 = uStack_a8;
                    uStack_150 = local_b0;
                    dVar25 = local_f0;
                    uVar13 = FUN_06725060(&uStack_170,&local_1a0);
                    if (lVar12 == 0) goto LAB_06725f04;
                    lVar16 = *(long *)(lVar12 + 0x10);
                    lVar17 = *(long *)
                              Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__
                    ;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar16 == 0) goto LAB_06725f04;
                    uVar3 = *(uint *)(lVar12 + 0x18);
                    if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                      lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
                      *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                      *(undefined8 *)(lVar16 + 0x20) = uVar13;
                      *(double *)(lVar16 + 0x28) = dVar25;
                    }
                    else {
                      FUN_04132e6c(lVar12,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar20 = iVar20 + 1;
                  } while (iVar8 != iVar20);
                }
                lVar12 = *(long *)(param_2 + 0x28);
                if (*(uint *)(lVar10 + 0x28) < 2) {
                  if (*plVar2 == 0) break;
                  FUN_041952f0(&local_100,*plVar2,iVar19,*(undefined8 *)puVar5);
                  dStack_c8 = dStack_f8;
                  local_d0 = local_100;
                  uStack_b8 = uStack_e8;
                  local_c0 = local_f0;
                  uStack_a8 = uStack_d8;
                  local_b0 = local_e0;
                  if (*plVar2 == 0) break;
                  FUN_041952f0(&local_100,*plVar2,0,*(undefined8 *)puVar5);
                  dStack_1f8 = dStack_f8;
                  local_200 = local_100;
                  uStack_1e8 = uStack_e8;
                  dStack_1f0 = local_f0;
                  uStack_1d8 = uStack_d8;
                  local_1e0 = local_e0;
                  dStack_1c8 = dStack_c8;
                  uStack_1d0 = local_d0;
                  uStack_1b8 = uStack_b8;
                  local_1c0 = local_c0;
                  uStack_1a8 = uStack_a8;
                  uStack_1b0 = local_b0;
                  dVar25 = local_f0;
                  uVar13 = FUN_06725060(&uStack_1d0,&local_200);
                  if (lVar12 == 0) break;
                }
                else {
                  if (lVar12 == 0) break;
                  FUN_04132b68(lVar12,iVar8 + -2,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                              );
                  local_d0 = 0;
                  dStack_c8 = 0.0;
                  FUN_06717934(&local_d0,0);
                  uVar13 = local_d0;
                  dVar25 = dStack_c8;
                }
                lVar16 = *(long *)(lVar12 + 0x10);
                lVar17 = *(long *)
                          Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_Dispose__
                ;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar16 == 0) break;
                uVar3 = *(uint *)(lVar12 + 0x18);
                if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
                  *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                  *(undefined8 *)(lVar16 + 0x20) = uVar13;
                  *(double *)(lVar16 + 0x28) = dVar25;
                }
                else {
                  FUN_04132e6c(lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                puVar14 = (undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                ;
                if (*(int *)(lVar10 + 0x28) == 1) {
                  local_108 = CONCAT44(local_108._4_4_,iVar19);
                  if (0 < iVar8) {
                    iVar20 = 0;
                    do {
                      FUN_06725f38(param_2,iVar20,&local_108,*(undefined4 *)(lVar10 + 0x24));
                      iVar20 = iVar20 + 1;
                    } while (iVar8 != iVar20);
                  }
                  lVar12 = *plVar21;
                  if (lVar12 != 0) {
                    lVar16 = *plVar1;
                    lVar17 = *(long *)(lVar12 + 0x10);
                    lVar18 = *(long *)
                              Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar17 != 0) {
                      uVar3 = *(uint *)(lVar12 + 0x18);
                      if (uVar3 < *(uint *)(lVar17 + 0x18)) {
                        *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                        plVar15 = (long *)(lVar17 + (long)(int)uVar3 * 8 + 0x20);
                        *plVar15 = lVar16;
                        thunk_FUN_0333a630(plVar15);
                      }
                      else {
                        FUN_041e2c78(lVar12,lVar16,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_List_Enumerator<OvrAvatarPrimitive>_get_Current__
                                                 );
                      FUN_04194d8c(uVar13,*(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<OvrAvatarSkinnedRenderable>_Dispose__
                                  );
                      *(undefined8 *)(param_2 + 0x20) = uVar13;
                      thunk_FUN_0333a630(plVar1,uVar13);
                      puVar6 = 
                      Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                      ;
                      if (*(long *)(param_2 + 0x28) != 0) {
                        dVar23 = (double)FUN_04132b68(*(long *)(param_2 + 0x28),iVar19,
                                                      *(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                                                  );
                        lVar12 = *(long *)(param_2 + 0x28);
                        dVar24 = dVar25;
                        iVar20 = iVar8;
                        if (0 < iVar19) {
                          do {
                            if (lVar12 == 0) goto LAB_06725f04;
                            dVar22 = (double)FUN_04132b68(lVar12,iVar20 + -2,*(undefined8 *)puVar6);
                            if (*(long *)(param_2 + 0x28) == 0) goto LAB_06725f04;
                            iVar4 = iVar20 + -1;
                            FUN_04132b68(*(long *)(param_2 + 0x28),iVar20 + -2,*(undefined8 *)puVar6
                                        );
                            local_d0 = 0;
                            dStack_c8 = 0.0;
                            FUN_0671792c(-dVar22,-dVar24,&local_d0,0);
                            dVar24 = dStack_c8;
                            FUN_04132bc0(local_d0,lVar12,iVar4,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__
                                        );
                            lVar12 = *(long *)(param_2 + 0x28);
                            iVar20 = iVar4;
                          } while (1 < iVar4);
                        }
                        local_d0 = 0;
                        dStack_c8 = 0.0;
                        FUN_0671792c(-dVar23,-dVar25,&local_d0,0);
                        if (lVar12 != 0) {
                          FUN_04132bc0(local_d0,dStack_c8,lVar12,0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__
                                      );
                          local_108 = local_108 & 0xffffffff00000000;
                          if (-1 < iVar19) {
                            do {
                              iVar8 = iVar8 + -1;
                              FUN_06725f38(param_2,iVar8,&local_108,*(undefined4 *)(lVar10 + 0x24));
                            } while (0 < iVar8);
                          }
                          lVar10 = *plVar21;
                          puVar14 = (undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                          ;
                          if (lVar10 != 0) goto LAB_06725ab0;
                        }
                      }
                    }
                  }
                  break;
                }
                if (*(int *)(lVar10 + 0x28) == 0) {
                  local_108 = CONCAT44(iVar19,(undefined4)local_108);
                  if (0 < iVar8) {
                    iVar19 = 0;
                    do {
                      FUN_06725f38(param_2,iVar19,(long)&local_108 + 4,
                                   *(undefined4 *)(lVar10 + 0x24));
                      iVar19 = iVar19 + 1;
                    } while (iVar8 != iVar19);
                  }
                  goto LAB_06725aa8;
                }
                local_10c = 0;
                if (1 < iVar19) {
                  iVar20 = 2;
                  do {
                    FUN_06725f38(param_2,iVar20 + -1,&local_10c,*(undefined4 *)(lVar10 + 0x24));
                    iVar20 = iVar20 + 1;
                  } while (iVar8 != iVar20);
                }
                lVar12 = *(long *)(param_2 + 0x28);
                *(undefined8 *)(param_2 + 0x38) = 0;
                puVar6 = 
                Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__;
                if (lVar12 == 0) break;
                dVar24 = (double)FUN_04132b68(lVar12,iVar19,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                                             );
                if (*(long *)(param_2 + 0x28) == 0) break;
                FUN_04132b68(*(long *)(param_2 + 0x28),iVar19,*(undefined8 *)puVar6);
                local_d0 = 0;
                dStack_c8 = 0.0;
                FUN_0671792c(-dVar24,-dVar25,&local_d0,0);
                dVar25 = dStack_c8;
                FUN_04132bc0(local_d0,dStack_c8,lVar12,iVar19,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__
                            );
                FUN_067267cc(param_2,iVar19,iVar8 + -2);
                lVar12 = *(long *)(param_2 + 0x28);
                iVar20 = iVar19;
                puVar14 = (undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                ;
                while( true ) {
                  Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__ =
                       (undefined *)puVar14;
                  if (lVar12 == 0) goto LAB_06725f04;
                  if (iVar20 < 1) break;
                  iVar4 = iVar20 + -1;
                  dVar24 = (double)FUN_04132b68(lVar12,iVar4,*puVar14);
                  if (*(long *)(param_2 + 0x28) == 0) goto LAB_06725f04;
                  FUN_04132b68(*(long *)(param_2 + 0x28),iVar4,*puVar14);
                  local_d0 = 0;
                  dStack_c8 = 0.0;
                  FUN_0671792c(-dVar24,-dVar25,&local_d0,0);
                  dVar25 = dStack_c8;
                  FUN_04132bc0(local_d0,lVar12,iVar20,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__
                              );
                  lVar12 = *(long *)(param_2 + 0x28);
                  iVar20 = iVar4;
                  puVar14 = (undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<ResourceHandle>_get_Current__
                  ;
                }
                dVar24 = (double)FUN_04132b68(lVar12,1,*puVar14);
                if (*(long *)(param_2 + 0x28) == 0) break;
                FUN_04132b68(*(long *)(param_2 + 0x28),1,*puVar14);
                local_d0 = 0;
                dStack_c8 = 0.0;
                FUN_0671792c(-dVar24,-dVar25,&local_d0,0);
                FUN_04132bc0(local_d0,dStack_c8,lVar12,0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<Rigidbody>_MoveNext__
                            );
                local_10c = iVar19;
                if (0 < iVar8 + -2) {
                  do {
                    iVar19 = iVar19 + -1;
                    FUN_06725f38(param_2,iVar19,&local_10c,*(undefined4 *)(lVar10 + 0x24));
                  } while (1 < iVar19);
                }
                local_10c = 1;
                *(undefined8 *)(param_2 + 0x38) = 0;
                FUN_067267cc(param_2,0,1);
                lVar10 = *(long *)(param_2 + 0x10);
                if (lVar10 == 0) break;
                lVar12 = *(long *)(param_2 + 0x20);
                puVar14 = (undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                ;
              }
              lVar16 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar16 == 0) break;
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                plVar15 = (long *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *plVar15 = lVar12;
                thunk_FUN_0333a630(plVar15);
              }
              else {
                FUN_041e2c78(lVar10,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar10 = *(long *)(param_2 + 0x88);
            iVar9 = iVar9 + 1;
          } while (lVar10 != 0);
        }
      }
    }
  }
  else if (*(long *)(param_2 + 0x88) != 0) {
    lVar10 = *(long *)(param_2 + 0x10);
    uVar7 = FUN_06717ce0(*(long *)(param_2 + 0x88),0);
    if (lVar10 != 0) {
      FUN_041e27fc(lVar10,uVar7,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_MoveNext__)
      ;
      puVar6 = Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__;
      puVar5 = Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__;
      lVar10 = *(long *)(param_2 + 0x88);
      if (lVar10 != 0) {
        iVar9 = 0;
        do {
          iVar8 = FUN_06717ce0(lVar10,0);
          if (iVar8 <= iVar9) {
            return;
          }
          if (((*(long *)(param_2 + 0x88) == 0) ||
              (lVar10 = *(long *)(*(long *)(param_2 + 0x88) + 0x30), lVar10 == 0)) ||
             (lVar10 = FUN_041e29a8(lVar10,iVar9,*(undefined8 *)puVar5), lVar10 == 0)) break;
          if (*(int *)(lVar10 + 0x28) == 0) {
            lVar12 = *plVar21;
            if (lVar12 == 0) break;
            uVar13 = *(undefined8 *)(lVar10 + 0x18);
            lVar10 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)puVar6;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar3 = *(uint *)(lVar12 + 0x18);
            if (uVar3 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar3 + 1;
              puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
              *puVar14 = uVar13;
              thunk_FUN_0333a630(puVar14);
            }
            else {
              FUN_041e2c78(lVar12,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar10 = *(long *)(param_2 + 0x88);
          iVar9 = iVar9 + 1;
        } while (lVar10 != 0);
      }
    }
  }
LAB_06725f04:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


