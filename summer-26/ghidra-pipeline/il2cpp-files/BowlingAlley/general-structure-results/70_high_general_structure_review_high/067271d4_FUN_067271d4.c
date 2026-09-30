/*
FUNCTION_NAME: FUN_067271d4
ENTRY_POINT: 067271d4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_067271d4(double param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_076e0667 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_get_Current__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_Dispose__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarPrimitive>_get_Current__
                      );
    DAT_076e0667 = 1;
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_get_Current__;
  if (*param_3 != 0) {
    FUN_06717958(*param_3,0);
    FUN_06724ed4(param_2);
    FUN_06725124(param_1,param_2);
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
    FUN_0671ad44(lVar6,0,0);
    if (lVar6 != 0) {
      FUN_0671a0c0(lVar6,*(undefined8 *)(param_2 + 0x10),0,1,0);
      if (0.0 < param_1) {
        FUN_0671b274(lVar6,1,*param_3,2,2,0);
        return;
      }
      FUN_0671a3f4(&local_90,*(undefined8 *)(param_2 + 0x10),0);
      lVar10 = lStack_78;
      lVar11 = local_80;
      lVar14 = lStack_88;
      lVar12 = local_90;
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<OvrAvatarPrimitive>_get_Current__
                                );
      FUN_04194dfc(lVar7,4,*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_Dispose__
                  );
      lStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      lStack_e8 = 0;
      local_f0 = 0;
      FUN_06718238(&local_f0,lVar12 + -10,lVar10 + 10,0);
      puVar2 = Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__;
      if (lVar7 != 0) {
        lStack_b8 = lStack_e8;
        local_c0 = local_f0;
        lStack_a8 = lStack_d8;
        local_b0 = local_e0;
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar13 = *(long *)Method_System_Collections_Generic_List_Enumerator<Popup>_get_Current__;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            lVar9 = lVar9 + (long)(int)uVar1 * 0x30;
            *(long *)(lVar9 + 0x38) = lStack_d8;
            *(long *)(lVar9 + 0x30) = local_e0;
            *(undefined8 *)(lVar9 + 0x48) = uStack_c8;
            *(undefined8 *)(lVar9 + 0x40) = local_d0;
            *(long *)(lVar9 + 0x28) = lStack_e8;
            *(long *)(lVar9 + 0x20) = local_f0;
          }
          else {
            lStack_88 = lStack_e8;
            local_90 = local_f0;
            lStack_78 = lStack_d8;
            local_80 = local_e0;
            uStack_68 = uStack_c8;
            local_70 = local_d0;
            FUN_0419568c(lVar7,&local_90,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lStack_108 = 0;
          local_110 = 0;
          uStack_f8 = 0;
          local_100 = 0;
          lStack_118 = 0;
          local_120 = 0;
          FUN_06718238(&local_120,lVar11 + 10,lVar10 + 10,0);
          lVar9 = *(long *)puVar2;
          lStack_b8 = lStack_118;
          local_c0 = local_120;
          lStack_a8 = lStack_108;
          local_b0 = local_110;
          uStack_98 = uStack_f8;
          local_a0 = local_100;
          lVar10 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              lVar10 = lVar10 + (long)(int)uVar1 * 0x30;
              *(long *)(lVar10 + 0x38) = lStack_108;
              *(long *)(lVar10 + 0x30) = local_110;
              *(undefined8 *)(lVar10 + 0x48) = uStack_f8;
              *(undefined8 *)(lVar10 + 0x40) = local_100;
              *(long *)(lVar10 + 0x28) = lStack_118;
              *(long *)(lVar10 + 0x20) = local_120;
            }
            else {
              lStack_88 = lStack_118;
              local_90 = local_120;
              lStack_78 = lStack_108;
              local_80 = local_110;
              uStack_68 = uStack_f8;
              local_70 = local_100;
              FUN_0419568c(lVar7,&local_90,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lStack_138 = 0;
            local_140 = 0;
            uStack_128 = 0;
            local_130 = 0;
            lStack_148 = 0;
            local_150 = 0;
            FUN_06718238(&local_150,lVar11 + 10,lVar14 + -10,0);
            lVar10 = *(long *)puVar2;
            lStack_b8 = lStack_148;
            local_c0 = local_150;
            lStack_a8 = lStack_138;
            local_b0 = local_140;
            uStack_98 = uStack_128;
            local_a0 = local_130;
            lVar11 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                lVar11 = lVar11 + (long)(int)uVar1 * 0x30;
                *(long *)(lVar11 + 0x38) = lStack_138;
                *(long *)(lVar11 + 0x30) = local_140;
                *(undefined8 *)(lVar11 + 0x48) = uStack_128;
                *(undefined8 *)(lVar11 + 0x40) = local_130;
                *(long *)(lVar11 + 0x28) = lStack_148;
                *(long *)(lVar11 + 0x20) = local_150;
              }
              else {
                lStack_88 = lStack_148;
                local_90 = local_150;
                lStack_78 = lStack_138;
                local_80 = local_140;
                uStack_68 = uStack_128;
                local_70 = local_130;
                FUN_0419568c(lVar7,&local_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              lStack_168 = 0;
              local_170 = 0;
              uStack_158 = 0;
              local_160 = 0;
              lStack_178 = 0;
              local_180 = 0;
              FUN_06718238(&local_180,lVar12 + -10,lVar14 + -10,0);
              lVar14 = *(long *)puVar2;
              lStack_b8 = lStack_178;
              local_c0 = local_180;
              lStack_a8 = lStack_168;
              local_b0 = local_170;
              uStack_98 = uStack_158;
              local_a0 = local_160;
              lVar12 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  lVar12 = lVar12 + (long)(int)uVar1 * 0x30;
                  *(long *)(lVar12 + 0x38) = lStack_168;
                  *(long *)(lVar12 + 0x30) = local_170;
                  *(undefined8 *)(lVar12 + 0x48) = uStack_158;
                  *(undefined8 *)(lVar12 + 0x40) = local_160;
                  *(long *)(lVar12 + 0x28) = lStack_178;
                  *(long *)(lVar12 + 0x20) = local_180;
                }
                else {
                  lStack_88 = lStack_178;
                  local_90 = local_180;
                  lStack_78 = lStack_168;
                  local_80 = local_170;
                  uStack_68 = uStack_158;
                  local_70 = local_160;
                  FUN_0419568c(lVar7,&local_90,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                FUN_06719428(lVar6,lVar7,0,1,0);
                *(undefined1 *)(lVar6 + 0x90) = 1;
                FUN_0671b274(lVar6,1,*param_3,3,3,0);
                if (*param_3 != 0) {
                  iVar3 = FUN_06717ce0(*param_3,0);
                  puVar2 = 
                  Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                  ;
                  if (iVar3 == 1) {
                    if (((*param_3 == 0) || (lVar6 = *(long *)(*param_3 + 0x30), lVar6 == 0)) ||
                       (lVar6 = FUN_041e29a8(lVar6,0,*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                                            ), lVar6 == 0)) goto LAB_067277d0;
                    iVar3 = FUN_06717ce0(lVar6,0);
                    if (0 < iVar3) {
                      if ((*param_3 != 0) && (lVar6 = *(long *)(*param_3 + 0x30), lVar6 != 0)) {
                        lVar6 = FUN_041e29a8(lVar6,0,*(undefined8 *)puVar2);
                        if ((*param_3 != 0) && (lVar6 != 0)) {
                          lVar12 = *(long *)(*param_3 + 0x30);
                          uVar4 = FUN_06717ce0(lVar6,0);
                          if (lVar12 != 0) {
                            FUN_041e27fc(lVar12,uVar4,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_get_Current__
                                        );
                            if ((*param_3 != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
                              lVar12 = *(long *)(*param_3 + 0x30);
                              uVar8 = FUN_041e29a8(*(long *)(lVar6 + 0x30),0,*(undefined8 *)puVar2);
                              if (lVar12 != 0) {
                                FUN_041e29fc(lVar12,0,uVar8,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_MoveNext__
                                            );
                                if (((*param_3 != 0) &&
                                    (lVar12 = *(long *)(*param_3 + 0x30), lVar12 != 0)) &&
                                   (lVar12 = FUN_041e29a8(lVar12,0,*(undefined8 *)puVar2),
                                   lVar12 != 0)) {
                                  *(long *)(lVar12 + 0x10) = *param_3;
                                  thunk_FUN_0333a630();
                                  iVar3 = FUN_06717ce0(lVar6,0);
                                  if (iVar3 < 2) {
                                    return;
                                  }
                                  iVar3 = 1;
                                  while (*(long *)(lVar6 + 0x30) != 0) {
                                    lVar12 = *param_3;
                                    uVar8 = FUN_041e29a8(*(long *)(lVar6 + 0x30),iVar3,
                                                         *(undefined8 *)puVar2);
                                    if (lVar12 == 0) break;
                                    FUN_06717d30(lVar12,uVar8,0);
                                    iVar3 = iVar3 + 1;
                                    iVar5 = FUN_06717ce0(lVar6,0);
                                    if (iVar5 <= iVar3) {
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_067277d0;
                    }
                  }
                  if (*param_3 != 0) {
                    FUN_06717958(*param_3,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_067277d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


