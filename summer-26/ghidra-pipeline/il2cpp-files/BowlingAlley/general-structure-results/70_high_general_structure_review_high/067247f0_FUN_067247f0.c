/*
FUNCTION_NAME: FUN_067247f0
ENTRY_POINT: 067247f0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_067247f0(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_076e0661 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_HashSet_Enumerator<ParameterExpression>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<PostProcessEffectSettings>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<PostProcessEffectSettings>_MoveNext__
                      );
    DAT_076e0661 = 1;
  }
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x18);
    iVar12 = iVar4 + -1;
    if (iVar12 < 0) {
      return;
    }
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<PostProcessEffectSettings>_MoveNext__
                              );
    FUN_06717be8(lVar5,0);
    puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<ParameterExpression>_Dispose__;
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x24) = param_3;
      *(uint *)(lVar5 + 0x28) = param_4;
      if ((param_4 < 2) && (0 < iVar12)) {
        do {
          iVar4 = iVar4 + -1;
          FUN_041952f0(&local_c0,param_2,0,*(undefined8 *)puVar2);
          lStack_88 = lStack_b8;
          local_90 = local_c0;
          uStack_78 = uStack_a8;
          local_80 = local_b0;
          uStack_68 = uStack_98;
          local_70 = local_a0;
          FUN_041952f0(&local_c0,param_2,iVar4,*(undefined8 *)puVar2);
          lStack_118 = lStack_b8;
          local_120 = local_c0;
          uStack_108 = uStack_a8;
          lStack_110 = local_b0;
          uStack_f8 = uStack_98;
          local_100 = local_a0;
          lStack_e8 = lStack_88;
          uStack_f0 = local_90;
          uStack_d8 = uStack_78;
          local_e0 = local_80;
          uStack_c8 = uStack_68;
          uStack_d0 = local_70;
          uVar6 = FUN_067182b8(&uStack_f0,&local_120,0);
          iVar12 = iVar4;
          if ((uVar6 & 1) == 0) goto LAB_06724940;
        } while (1 < iVar4);
        iVar12 = 0;
      }
LAB_06724940:
      if (*(long *)(lVar5 + 0x18) != 0) {
        FUN_04195144(*(long *)(lVar5 + 0x18),iVar12 + 1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<PostProcessEffectSettings>_Dispose__
                    );
        lVar10 = *(long *)(lVar5 + 0x18);
        FUN_041952f0(&local_90,param_2,0,*(undefined8 *)puVar2);
        puVar3 = Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__;
        lStack_148 = lStack_88;
        local_150 = local_90;
        uStack_138 = uStack_78;
        lStack_140 = local_80;
        uStack_128 = uStack_68;
        local_130 = local_70;
        if (lVar10 != 0) {
          lStack_b8 = lStack_88;
          local_c0 = local_90;
          uStack_a8 = uStack_78;
          local_b0 = local_80;
          uStack_98 = uStack_68;
          local_a0 = local_70;
          lVar7 = *(long *)(lVar10 + 0x10);
          lVar8 = *(long *)Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
              *(undefined8 *)(lVar7 + 0x38) = uStack_78;
              *(long *)(lVar7 + 0x30) = local_80;
              *(undefined8 *)(lVar7 + 0x48) = uStack_68;
              *(undefined8 *)(lVar7 + 0x40) = local_70;
              *(long *)(lVar7 + 0x28) = lStack_88;
              *(undefined8 *)(lVar7 + 0x20) = local_90;
            }
            else {
              FUN_0419568c(lVar10,&local_90,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            if (iVar12 < 1) {
              iVar9 = 0;
              iVar4 = 0;
            }
            else {
              iVar4 = 0;
              iVar9 = 0;
              iVar11 = 1;
              do {
                if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06724d7c;
                FUN_041952f0(&local_c0,*(long *)(lVar5 + 0x18),iVar4,*(undefined8 *)puVar2);
                lStack_88 = lStack_b8;
                local_90 = local_c0;
                uStack_78 = uStack_a8;
                local_80 = local_b0;
                uStack_68 = uStack_98;
                local_70 = local_a0;
                FUN_041952f0(&local_c0,param_2,iVar11,*(undefined8 *)puVar2);
                lStack_1a8 = lStack_b8;
                local_1b0 = local_c0;
                uStack_198 = uStack_a8;
                lStack_1a0 = local_b0;
                uStack_188 = uStack_98;
                local_190 = local_a0;
                lStack_178 = lStack_88;
                uStack_180 = local_90;
                uStack_168 = uStack_78;
                local_170 = local_80;
                uStack_158 = uStack_68;
                uStack_160 = local_70;
                uVar6 = FUN_067182e4(&uStack_180,&local_1b0,0);
                if ((uVar6 & 1) != 0) {
                  lVar10 = *(long *)(lVar5 + 0x18);
                  FUN_041952f0(&local_90,param_2,iVar11,*(undefined8 *)puVar2);
                  lStack_148 = lStack_88;
                  local_150 = local_90;
                  uStack_138 = uStack_78;
                  lStack_140 = local_80;
                  uStack_128 = uStack_68;
                  local_130 = local_70;
                  if (lVar10 == 0) goto LAB_06724d7c;
                  lVar8 = *(long *)puVar3;
                  lStack_b8 = lStack_88;
                  local_c0 = local_90;
                  uStack_a8 = uStack_78;
                  local_b0 = local_80;
                  uStack_98 = uStack_68;
                  local_a0 = local_70;
                  lVar7 = *(long *)(lVar10 + 0x10);
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar7 == 0) goto LAB_06724d7c;
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
                    *(undefined8 *)(lVar7 + 0x38) = uStack_78;
                    *(long *)(lVar7 + 0x30) = local_80;
                    *(undefined8 *)(lVar7 + 0x48) = uStack_68;
                    *(undefined8 *)(lVar7 + 0x40) = local_70;
                    *(long *)(lVar7 + 0x28) = lStack_88;
                    *(undefined8 *)(lVar7 + 0x20) = local_90;
                  }
                  else {
                    FUN_0419568c(lVar10,&local_90,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  FUN_041952f0(&local_90,param_2,iVar11,*(undefined8 *)puVar2);
                  lVar10 = local_80;
                  if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06724d7c;
                  iVar4 = iVar4 + 1;
                  FUN_041952f0(&local_90,*(long *)(lVar5 + 0x18),iVar9,*(undefined8 *)puVar2);
                  if (local_80 < lVar10) {
LAB_06724b88:
                    iVar9 = iVar4;
                  }
                  else {
                    FUN_041952f0(&local_90,param_2,iVar11,*(undefined8 *)puVar2);
                    lVar10 = local_80;
                    if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06724d7c;
                    FUN_041952f0(&local_90,*(long *)(lVar5 + 0x18),iVar9,*(undefined8 *)puVar2);
                    if (lVar10 == local_80) {
                      FUN_041952f0(&local_90,param_2,iVar11,*(undefined8 *)puVar2);
                      lVar10 = lStack_88;
                      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06724d7c;
                      FUN_041952f0(&local_90,*(long *)(lVar5 + 0x18),iVar9,*(undefined8 *)puVar2);
                      if (lVar10 < lStack_88) goto LAB_06724b88;
                    }
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 <= iVar12);
            }
            if ((iVar4 < 2) && (param_4 == 0)) {
              return;
            }
            if (*(long *)(param_1 + 0x88) != 0) {
              FUN_06717d30(*(long *)(param_1 + 0x88),lVar5,0);
              if (param_4 != 0) {
                return;
              }
              lVar10 = *(long *)(param_1 + 0x88);
              if (lVar10 != 0) {
                if (*(long *)(param_1 + 0x60) < 0) {
                  iVar4 = FUN_06717ce0(lVar10,0);
LAB_06724ce4:
                  uStack_78 = 0;
                  local_80 = 0;
                  uStack_68 = 0;
                  local_70 = 0;
                  lStack_88 = 0;
                  local_90 = 0;
                  FUN_06718238(&local_90,(long)(iVar4 + -1),(long)iVar9,0);
                  *(undefined8 *)(param_1 + 0x70) = uStack_78;
                  *(long *)(param_1 + 0x68) = local_80;
                  *(undefined8 *)(param_1 + 0x80) = uStack_68;
                  *(undefined8 *)(param_1 + 0x78) = local_70;
                  *(long *)(param_1 + 0x60) = lStack_88;
                  *(undefined8 *)(param_1 + 0x58) = local_90;
                  return;
                }
                if (((*(long *)(lVar10 + 0x30) != 0) &&
                    (lVar10 = FUN_041e29a8(*(long *)(lVar10 + 0x30),*(long *)(param_1 + 0x60),
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                                          ), lVar10 != 0)) && (*(long *)(lVar10 + 0x18) != 0)) {
                  FUN_041952f0(&local_90,*(long *)(lVar10 + 0x18),*(undefined4 *)(param_1 + 0x68),
                               *(undefined8 *)puVar2);
                  lVar7 = local_80;
                  lVar10 = lStack_88;
                  if (*(long *)(lVar5 + 0x18) != 0) {
                    FUN_041952f0(&local_90,*(long *)(lVar5 + 0x18),iVar9,*(undefined8 *)puVar2);
                    if (local_80 <= lVar7) {
                      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06724d7c;
                      FUN_041952f0(&local_90,*(long *)(lVar5 + 0x18),iVar9,*(undefined8 *)puVar2);
                      if (local_80 != lVar7) {
                        return;
                      }
                      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_06724d7c;
                      FUN_041952f0(&local_90,*(long *)(lVar5 + 0x18),iVar9,*(undefined8 *)puVar2);
                      if (lVar10 <= lStack_88) {
                        return;
                      }
                    }
                    if (*(long *)(param_1 + 0x88) != 0) {
                      iVar4 = FUN_06717ce0(*(long *)(param_1 + 0x88),0);
                      goto LAB_06724ce4;
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
LAB_06724d7c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


