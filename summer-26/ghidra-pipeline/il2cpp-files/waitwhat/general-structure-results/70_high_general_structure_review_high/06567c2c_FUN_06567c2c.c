/*
FUNCTION_NAME: FUN_06567c2c
ENTRY_POINT: 06567c2c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06568150) */

void FUN_06567c2c(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *plVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 local_1c0;
  undefined8 *puStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long local_178;
  undefined8 *local_170;
  long local_168;
  undefined8 *local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  puVar2 = System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo;
  if ((DAT_07557388 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(System_Collections_Generic_ICollection<CertificateStatusRequestItemV2>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<UxmlObjectAsset>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<Value>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_ICollection<char>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<SentryThread>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<Vector2>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1380);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(System_Collections_Generic_List<SelectorMatchRecord>_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_EventBase<ContextClickEvent>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<UserInputActionSet>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_07557388 = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_58 = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_d8 = 0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  puStack_148 = (undefined8 *)0x0;
  local_150 = 0;
  local_154 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar7 = FUN_0656322c();
  if (((uVar7 & 1) != 0) && (*(char *)(param_1 + 0x60) == '\0')) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    local_90 = FUN_0656319c();
    lVar8 = FUN_04884e1c(local_90,0,
                         *(undefined8 *)System_Collections_Generic_List<UserInputActionSet>_TypeInfo
                        );
    puVar2 = PTR_DAT_070c1b68;
    if (lVar8 == 0) {
LAB_06568140:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar16 = *(undefined8 *)(lVar8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar7 = FUN_069d8404(uVar16,0,0);
    if ((uVar7 & 1) == 0) {
      if (param_2 == 0) goto LAB_06568140;
      uVar16 = *(undefined8 *)(param_2 + 0x78);
      local_58 = FUN_064c2810(0);
      puVar3 = PTR_DAT_070f1380;
      local_160 = &local_58;
      local_168 = 0;
      if (*(int *)(*(long *)PTR_DAT_070f1380 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06565770(&local_80);
      local_170 = &local_b0;
      local_178 = 0;
      puStack_a8 = puStack_78;
      local_b0 = local_80;
      uVar9 = local_b0;
      uStack_98 = uStack_68;
      uStack_a0 = local_70;
      local_b0._0_4_ = (int)local_80;
      bVar1 = 1 < (int)local_b0;
      local_b0 = uVar9;
      if (bVar1) {
        uVar6 = FUN_03f5d778(&local_b0,uVar16,
                             *(undefined8 *)
                              System_Collections_Generic_List<UxmlObjectAsset>_TypeInfo);
        FUN_03f5da24(&local_b0,0,uVar6,
                     *(undefined8 *)System_Collections_Generic_List<Value>_TypeInfo);
      }
      local_c0 = FUN_06562f3c(lVar8);
      puVar5 = System_Collections_Generic_ICollection<CertificateStatusRequestItemV2>_TypeInfo;
      puVar4 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
      if (0 < local_c0._12_4_) {
        iVar15 = 0;
        do {
          uVar9 = FUN_04884e1c(local_c0,iVar15,*(undefined8 *)puVar4);
          FUN_03f5d018(&local_b0,uVar9,*(undefined8 *)puVar5);
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_c0._12_4_);
      }
      puStack_198 = puStack_a8;
      local_1a0 = local_b0;
      uStack_188 = uStack_98;
      uStack_190 = uStack_a0;
      if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      auVar17 = FUN_064bd17c(*(long *)(lVar8 + 0x28),0);
      puStack_78 = puStack_198;
      local_80 = local_1a0;
      uStack_68 = uStack_188;
      local_70 = uStack_190;
      uVar7 = FUN_03ae784c(&local_80,auVar17._0_8_,auVar17._8_8_,&local_d8,&uStack_130,uVar16,0,
                           *(undefined8 *)System_Collections_Generic_List<Vector2>_TypeInfo);
      if ((uVar7 & 1) != 0) {
        puStack_198 = &uStack_130;
        puVar14 = (undefined4 *)(lVar8 + 0xa8);
        local_154 = *puVar14;
        local_1a0 = 0;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar7 = FUN_0656220c(&local_154);
        if ((uVar7 & 1) != 0) {
          local_154 = *puVar14;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_06565020(&local_154);
        }
        FUN_064f6730(&local_80,&uStack_130,0);
        puVar4 = System_Collections_Generic_List<SentryThread>_TypeInfo;
        puStack_148 = puStack_78;
        local_150 = local_80;
        uVar16 = local_150;
        uStack_138 = uStack_68;
        local_140 = local_70;
        local_150._0_4_ = (int)local_80;
        bVar1 = 0 < (int)local_150;
        local_150 = uVar16;
        if (bVar1) {
          iVar15 = 0;
          do {
            uVar16 = FUN_03f5c7d0(&local_150,iVar15,*(undefined8 *)puVar4);
            uVar6 = *puVar14;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar6 = FUN_065652b0(uVar16,uVar6,0);
            *puVar14 = uVar6;
            if ((uVar7 & 1) == 0) {
              uVar16 = FUN_06560e4c(lVar8);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar10 = FUN_069d69b8(uVar16,0,0);
              if ((uVar10 & 1) != 0) {
                uVar16 = FUN_06560e4c(lVar8);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                FUN_06565918(puVar14,uVar16);
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)local_150);
        }
        local_154 = *puVar14;
        puStack_78 = puStack_d0;
        local_80 = local_d8;
        local_70 = local_c8;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        puStack_1b8 = puStack_78;
        local_1c0 = local_80;
        local_1b0 = local_70;
        FUN_06565e84(&local_154,&local_1c0);
        FUN_064f695c(&uStack_130,0);
      }
      FUN_03f5dcc8(local_170,
                   *(undefined8 *)
                    System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo);
      if (local_178 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd0();
      }
      plVar13 = (long *)*local_160;
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_070c2e88) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0656810c;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_031c0d08(plVar13,*(long *)PTR_DAT_070c2e88,0);
LAB_0656810c:
        (*(code *)*puVar11)(plVar13,puVar11[1]);
      }
      if (local_168 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd0();
      }
    }
  }
  return;
}


