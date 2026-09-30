/*
FUNCTION_NAME: FUN_03a06a9c
ENTRY_POINT: 03a06a9c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_03a06a9c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,long param_12,byte param_13,
                 undefined8 param_14)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined8 uVar24;
  int iVar25;
  long lVar26;
  long *plVar27;
  undefined1 auStack_41a0 [16392];
  undefined8 local_198;
  undefined8 *local_190;
  long local_188;
  long local_180;
  uint local_174;
  undefined1 *local_170;
  int local_164;
  int local_160;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  int local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  local_180 = tpidr_el0;
  local_80 = *(long *)(local_180 + 0x28);
  local_a0 = param_10;
  uStack_98 = param_11;
  local_158 = param_5;
  local_90 = param_8;
  uStack_88 = param_9;
  if ((DAT_03ffce38 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__);
    thunk_FUN_01ad9084(PTR_DAT_03db07c8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a990);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a438);
    thunk_FUN_01ad9084(PTR_DAT_03db07d0);
    thunk_FUN_01ad9084(PTR_DAT_03db07d8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2275);
    thunk_FUN_01ad9084(PTR_DAT_03db07e0);
    thunk_FUN_01ad9084(PTR_DAT_03dafef8);
    thunk_FUN_01ad9084(PTR_DAT_03db07e8);
    thunk_FUN_01ad9084(PTR_DAT_03db07f0);
    thunk_FUN_01ad9084(StringLiteral_2776);
    DAT_03ffce38 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  uStack_f0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_039f3970(0);
  lVar19 = *(long *)(param_2 + 0x98);
  if (lVar19 != 0) {
    local_15c = (uint)*(byte *)(param_2 + 0xac);
    FUN_03a07658(lVar19);
    lVar26 = *(long *)(lVar19 + 0x20);
    uVar13 = FUN_0390acec(0);
    if (lVar26 != 0) {
      lVar16 = *(long *)(lVar26 + 0x10);
      lVar18 = *(long *)PTR_DAT_03db07c8;
      *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
      local_188 = lVar19;
      if (lVar16 != 0) {
        uVar11 = *(uint *)(lVar26 + 0x18);
        if (uVar11 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar26 + 0x18) = uVar11 + 1;
          *(undefined8 *)(lVar16 + (long)(int)uVar11 * 8 + 0x20) = uVar13;
          thunk_FUN_01b4f09c();
        }
        else {
          FUN_02b599e4(lVar26,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        if ((param_12 != 0) &&
           (FUN_038fd774(param_12,0),
           plVar27 = (long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__,
           *(long *)(param_2 + 0xa0) != 0)) {
          FUN_039fdbc0();
          if (*(long *)(param_2 + 0x50) != 0) {
            if (*(int *)(*plVar27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar14 = FUN_0391f968(param_6,0,0);
            puVar6 = PTR_DAT_03dafef8;
            if ((uVar14 & 1) != 0) {
              lVar19 = *(long *)(param_2 + 0x58);
              if (*(int *)(*(long *)PTR_DAT_03dafef8 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              if (lVar19 == 0) goto LAB_03a07650;
              FUN_038fddb0(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),param_6,
                           0);
              plVar27 = (long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            }
            if (*(int *)(*plVar27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar14 = FUN_0391f968(param_7,0,0);
            puVar6 = PTR_DAT_03dafef8;
            if ((uVar14 & 1) != 0) {
              lVar19 = *(long *)(param_2 + 0x58);
              if (*(int *)(*(long *)PTR_DAT_03dafef8 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              if (lVar19 == 0) goto LAB_03a07650;
              FUN_038fddb0(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14),param_7,
                           0);
            }
            puVar7 = PTR_DAT_03db07d8;
            iVar10 = FUN_02cfa298(&local_90,*(undefined8 *)PTR_DAT_03db07d0);
            puVar6 = PTR_DAT_03dafef8;
            if (0 < iVar10) {
              uVar13 = *(undefined8 *)(param_2 + 0x58);
              lVar19 = *(long *)PTR_DAT_03dafef8;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar19 = *(long *)puVar6;
              }
              uVar8 = uStack_88;
              uVar24 = local_90;
              uVar3 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0x18);
              if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f5f9d4(uVar13,uVar3,uVar24,uVar8,*(undefined8 *)PTR_DAT_03db07e8);
              plVar27 = (long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            }
            iVar10 = FUN_02cfaf5c(&local_a0,*(undefined8 *)puVar7);
            puVar6 = PTR_DAT_03dafef8;
            if (0 < iVar10) {
              uVar13 = *(undefined8 *)(param_2 + 0x58);
              lVar19 = *(long *)PTR_DAT_03dafef8;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar19 = *(long *)puVar6;
              }
              uVar8 = uStack_98;
              uVar24 = local_a0;
              uVar3 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0x1c);
              if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f5faa0(uVar13,uVar3,uVar24,uVar8,*(undefined8 *)PTR_DAT_03db07f0);
              plVar27 = (long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            }
            uVar13 = *(undefined8 *)(param_2 + 0x58);
            if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_039f359c(uVar13,0);
          }
          local_170 = auStack_41a0;
          local_174 = (uint)param_13;
          memset(local_170,0,0x4000);
          local_a8 = 0;
          local_110 = 0;
          uStack_118 = 0;
          local_100 = 0;
          uStack_108 = 0;
          uStack_f0 = 0;
          lStack_f8 = 0;
          local_120 = param_12;
          thunk_FUN_01b4f09c(&local_120,param_12);
          uStack_118 = local_158;
          thunk_FUN_01b4f09c((ulong)&local_120 | 8);
          uStack_130 = 0;
          local_128 = 0;
          local_138 = param_4;
          thunk_FUN_01b4f09c(&local_138,param_4);
          uStack_108 = uStack_130;
          local_110 = local_138;
          local_100 = local_128;
          thunk_FUN_01b4f09c(&local_110,0);
          uVar13 = uStack_f0;
          uStack_f0._4_4_ = SUB84(uVar13,4);
          uStack_f0._0_4_ = CONCAT13(1,CONCAT21(0x101,(undefined1)uStack_f0));
          uStack_d8 = uStack_118;
          local_e0 = local_120;
          uStack_c8 = uStack_108;
          local_d0 = local_110;
          lStack_b8 = lStack_f8;
          local_c0 = local_100;
          local_b0 = uStack_f0;
          if (param_3 != 0) {
            local_164 = 0;
            iVar10 = 0;
            iVar25 = 0;
            local_198 = param_14;
            iVar22 = 0;
            local_190 = &local_d0;
            iVar20 = -1;
            local_160 = 0;
            do {
              while( true ) {
                iVar12 = *(int *)(param_2 + 0x74);
                *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
                if (*(int *)(param_3 + 0x34) == 0) {
                  iVar12 = iVar12 + 1;
                }
                *(int *)(param_2 + 0x74) = iVar12;
                local_13c = iVar20;
                if (*(int *)(param_3 + 0x34) == 0) break;
                bVar5 = false;
                local_148 = 0;
                local_14c = 0;
                iVar12 = -1;
                bVar9 = true;
LAB_03a07290:
                bVar4 = local_15c != 0 | bVar9;
                if (0 < iVar22) {
                  iVar20 = local_164 + 1;
                  local_a8 = CONCAT44(local_a8._4_4_,iVar20);
                  piVar1 = (int *)(local_170 +
                                  ((ulong)(uint)((local_164 + local_a8._4_4_) * 0x10) & 0x3ff0));
                  piVar1[2] = iVar25;
                  piVar1[3] = iVar10;
                  *piVar1 = local_160;
                  piVar1[1] = iVar22;
                  if (*(int *)(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  local_164 = iVar20;
                  UnityEngine_UIElements_UIR_Utility__HasMappedBufferRange(bVar4 | iVar20 < 0x400,0)
                  ;
                  iVar22 = 0;
                  iVar25 = 0;
                  iVar10 = 0;
                  local_160 = 0;
                  *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + 1;
                }
                iVar20 = local_13c;
                if (*(int *)(param_3 + 0x34) == 0) {
                  lVar19 = *(long *)(param_3 + 0x50);
                  if (lVar19 == 0) goto LAB_03a07650;
                  iVar22 = *(int *)(param_3 + 0x5c);
                  iVar25 = *(int *)(lVar19 + 0x18);
                  iVar10 = *(int *)(lVar19 + 0x1c);
                  local_160 = *(int *)(param_3 + 0x58) + *(int *)(lVar19 + 0x30);
                  *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + iVar22;
                  iVar20 = iVar22 + local_160;
                }
                local_13c = iVar20;
                if (bVar4 != 0) {
                  if (0 < local_164) {
                    FUN_03a0690c(param_2,&local_e0,local_174 & 1);
                    FUN_03a07820(param_2,local_170,&local_a8,(long)&local_a8 + 4,0x400,lStack_b8);
                  }
                  iVar20 = local_13c;
                  uVar11 = *(uint *)(param_3 + 0x34);
                  if (uVar11 != 0) {
                    if (*(char *)(param_2 + 0x10) == '\0') {
                      FUN_03a07a68(param_1,param_3,local_188,local_198);
                      uVar11 = *(uint *)(param_3 + 0x34);
                    }
                    if ((uVar11 < 0xc) && ((1 << (ulong)(uVar11 & 0x1f) & 0xe86U) != 0)) {
                      local_d0 = 0;
                      thunk_FUN_01b4f09c(local_190,0);
                      lVar19 = local_188;
                      local_b0 = local_b0 & 0xffffffffffffff00;
                      *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
                      iVar15 = *(int *)(param_3 + 0x34);
                      if (iVar15 == 0xb) {
                        lVar26 = *(long *)(local_188 + 0x28);
                        if (lVar26 == 0) goto LAB_03a07650;
                        iVar20 = *(int *)(lVar26 + 0x18) + -1;
                        local_158 = FUN_02b59714(lVar26,iVar20,*(undefined8 *)PTR_DAT_03d9a438);
                        if (*(long *)(lVar19 + 0x28) == 0) goto LAB_03a07650;
                        FUN_02b5b0dc(*(long *)(lVar19 + 0x28),iVar20,*(undefined8 *)PTR_DAT_03d9a990
                                    );
                        iVar15 = *(int *)(param_3 + 0x34);
                        iVar20 = local_13c;
                      }
                      if (iVar15 == 10) {
                        lVar19 = *(long *)(local_188 + 0x28);
                        if (lVar19 == 0) goto LAB_03a07650;
                        lVar26 = *(long *)(lVar19 + 0x10);
                        lVar16 = *(long *)
                                  Method_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_get_type__
                        ;
                        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
                        if (lVar26 == 0) goto LAB_03a07650;
                        uVar11 = *(uint *)(lVar19 + 0x18);
                        if (uVar11 < *(uint *)(lVar26 + 0x18)) {
                          *(uint *)(lVar19 + 0x18) = uVar11 + 1;
                          puVar17 = (undefined8 *)(lVar26 + (long)(int)uVar11 * 8 + 0x20);
                          *puVar17 = local_158;
                          thunk_FUN_01b4f09c(puVar17);
                        }
                        else {
                          FUN_02b599e4(lVar19,local_158,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        local_158 = *(undefined8 *)(param_3 + 0x38);
                      }
                    }
                  }
                }
                if (!(bool)(bVar5 ^ 1U | *(int *)(param_3 + 0x34) != 0)) {
                  FUN_03a0d2c8(param_2,param_3,iVar12,local_148,local_14c & 1,&local_e0,0);
                }
                param_3 = *(long *)(param_3 + 0x28);
                if (param_3 == 0) goto LAB_03a07570;
                local_164 = (int)local_a8;
              }
              uVar13 = *(undefined8 *)(param_3 + 0x38);
              if (*(int *)(*plVar27 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar14 = FUN_0391f968(uVar13,0,0);
              uVar13 = local_d0;
              uVar24 = local_158;
              if ((uVar14 & 1) != 0) {
                uVar24 = *(undefined8 *)(param_3 + 0x38);
              }
              if (*(int *)(*plVar27 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar11 = FUN_0391f968(uVar24,uVar13,0);
              puVar6 = StringLiteral_2275;
              lVar19 = *(long *)(param_3 + 0x50);
              if (lVar19 == 0) goto LAB_03a07650;
              if (*(long *)(lVar19 + 0x50) == lStack_b8) {
                uVar23 = uVar11 & 1;
                uVar21 = uVar23;
                if ((long)*(int *)(param_3 + 0x58) + (ulong)*(uint *)(lVar19 + 0x30) != (long)iVar20
                   ) {
                  uVar21 = 1;
                }
              }
              else {
                uVar23 = 1;
                uVar21 = 1;
              }
              lVar19 = *(long *)StringLiteral_2275;
              iVar20 = *(int *)(param_3 + 0x40);
              local_14c = uVar11;
              local_148 = uVar24;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar19 = *(long *)puVar6;
              }
              puVar6 = StringLiteral_2275;
              iVar12 = **(int **)(lVar19 + 0xb8);
              if (DAT_03ffce6e == '\0') {
                thunk_FUN_01ad9084(StringLiteral_2275);
                lVar19 = *(long *)puVar6;
                DAT_03ffce6e = '\x01';
              }
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              plVar27 = (long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
              uVar11 = uVar23;
              if (iVar20 == iVar12) {
                iVar12 = -1;
              }
              else {
                if (*(long *)(param_2 + 0xa0) == 0) goto LAB_03a07650;
                iVar12 = FUN_039fde74(*(long *)(param_2 + 0xa0),*(undefined4 *)(param_3 + 0x40));
                if (iVar12 < 0) {
                  if (*(long *)(param_2 + 0xa0) == 0) goto LAB_03a07650;
                  bVar9 = *(int *)(*(long *)(param_2 + 0xa0) + 0x30) < 1;
                }
                else {
                  bVar9 = false;
                }
                if (bVar9) {
                  uVar11 = 1;
                  uVar21 = 1;
                }
                uVar23 = 1;
              }
              bVar9 = *(int *)(param_3 + 0x44) != uStack_c8._4_4_;
              if (bVar9) {
                uVar21 = 1;
              }
              bVar5 = uVar23 != 0 || bVar9;
              if (local_15c != 0 || uVar21 != 0) {
                bVar9 = (uVar11 != 0 || bVar9) || (uVar21 & (0 < iVar22 && local_164 == 0x3ff)) != 0
                ;
                goto LAB_03a07290;
              }
              lVar19 = *(long *)(param_3 + 0x50);
              if (iVar22 == 0) {
                if (lVar19 == 0) goto LAB_03a07650;
                local_160 = *(int *)(param_3 + 0x58) + *(int *)(lVar19 + 0x30);
                local_13c = local_160;
              }
              else if (lVar19 == 0) goto LAB_03a07650;
              iVar2 = *(int *)(lVar19 + 0x18);
              iVar20 = *(int *)(param_3 + 0x5c);
              iVar10 = iVar10 + iVar25;
              iVar15 = *(int *)(lVar19 + 0x1c) + iVar2;
              if (iVar2 <= iVar25) {
                iVar25 = iVar2;
              }
              if (iVar10 <= iVar15) {
                iVar10 = iVar15;
              }
              iVar10 = iVar10 - iVar25;
              *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + iVar20;
              if (uVar23 != 0 || bVar9) {
                FUN_03a0d2c8(param_2,param_3,iVar12,local_148,local_14c & 1,&local_e0,0);
              }
              param_3 = *(long *)(param_3 + 0x28);
              iVar22 = iVar20 + iVar22;
              iVar20 = iVar20 + local_13c;
            } while (param_3 != 0);
LAB_03a07570:
            if (0 < iVar22) {
              iVar20 = (int)local_a8 + local_a8._4_4_;
              local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
              piVar1 = (int *)(local_170 + ((ulong)(uint)(iVar20 * 0x10) & 0x3ff0));
              piVar1[2] = iVar25;
              piVar1[3] = iVar10;
              *piVar1 = local_160;
              piVar1[1] = iVar22;
            }
          }
          if (0 < (int)local_a8) {
            FUN_03a0690c(param_2,&local_e0,local_174 & 1);
            FUN_03a07820(param_2,local_170,&local_a8,(long)&local_a8 + 4,0x400,lStack_b8);
          }
          FUN_03a08548(param_2);
          if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_039f3998(0);
          if (*(long *)(local_180 + 0x28) == local_80) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
LAB_03a07650:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


