/*
FUNCTION_NAME: FUN_0383830c
ENTRY_POINT: 0383830c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_19;telemetry_or_network_hits_4
*/


void FUN_0383830c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  undefined8 local_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_03ff8500 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da68c0);
    thunk_FUN_01ad9084(PTR_DAT_03da5dd0);
    thunk_FUN_01ad9084(PTR_DAT_03da5dd8);
    thunk_FUN_01ad9084(PTR_DAT_03da5de0);
    thunk_FUN_01ad9084(StringLiteral_13666);
    thunk_FUN_01ad9084(PTR_DAT_03da5de8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8500 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  if (((char)param_1[0x35] != '\0') && (0.0 < *(float *)((long)param_1 + 0x1c4))) {
    uVar7 = FUN_038f1768(0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar8 = FUN_03922f24(uVar7,0,0);
    if ((uVar8 & 1) == 0) {
      lVar9 = FUN_038214ec(param_1,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_02b5a400(&local_110,lVar9,*(undefined8 *)PTR_DAT_03da5de8);
      puVar2 = PTR_DAT_03da5dd8;
      puVar1 = StringLiteral_13666;
      uStack_78 = uStack_108;
      local_80 = local_110;
      local_70 = local_100;
      while (uVar8 = FUN_02739b98(&local_80,*(undefined8 *)puVar2), lVar9 = local_70,
            (uVar8 & 1) != 0) {
        if ((local_70 != 0) && (uVar8 = FUN_03821f98(param_1,local_70,0), (uVar8 & 1) == 0)) {
          if (param_1[0x42] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = FUN_025bddd0(param_1[0x42],lVar9,&local_88,*(undefined8 *)PTR_DAT_03da68c0);
          if (((local_88 != 0) && (((uVar4 ^ 1) & 1) == 0)) && (*(long *)(local_88 + 0x18) != 0)) {
            uVar10 = (**(code **)(*param_1 + 0x788))
                               (param_1,lVar9,*(undefined8 *)(*param_1 + 0x790));
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar8 = FUN_03922f24(uVar10,0,0);
            lVar3 = local_88;
            if ((uVar8 & 1) == 0) {
              if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              if (0 < (int)*(ulong *)(local_88 + 0x18)) {
                uVar8 = 0;
                uVar13 = *(ulong *)(local_88 + 0x18) & 0xffffffff;
                do {
                  if (uVar13 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48180();
                  }
                  lVar11 = lVar3 + uVar8 * 0x10;
                  lVar12 = *(long *)(lVar11 + 0x20);
                  uVar13 = (**(code **)(*param_1 + 0x798))
                                     (param_1,lVar12,*(undefined8 *)(lVar11 + 0x28),uVar7,
                                      *(undefined8 *)(*param_1 + 0x7a0));
                  if ((uVar13 & 1) != 0) {
                    FUN_03837ab8(&local_110,*(undefined4 *)((long)param_1 + 0x1c4),param_1,lVar9,
                                 lVar12);
                    uStack_c8 = uStack_108;
                    local_d0 = local_110;
                    uStack_b8 = uStack_f8;
                    lStack_c0 = local_100;
                    uStack_a8 = uStack_e8;
                    local_b0 = local_f0;
                    uStack_98 = uStack_d8;
                    uStack_a0 = uStack_e0;
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    lVar11 = FUN_03900d8c(lVar12,0);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    for (iVar14 = 0; iVar5 = FUN_038fb9d8(lVar11,0), iVar14 < iVar5;
                        iVar14 = iVar14 + 1) {
                      uStack_108 = uStack_c8;
                      local_110 = local_d0;
                      uStack_f8 = uStack_b8;
                      local_100 = lStack_c0;
                      uStack_e8 = uStack_a8;
                      local_f0 = local_b0;
                      uStack_d8 = uStack_98;
                      uStack_e0 = uStack_a0;
                      lVar12 = FUN_0391c2b8(param_1,0);
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      uVar6 = FUN_0391faf0(lVar12,0);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uStack_148 = uStack_108;
                      local_150 = local_110;
                      uStack_138 = uStack_f8;
                      lStack_140 = local_100;
                      uStack_128 = uStack_e8;
                      local_130 = local_f0;
                      uStack_118 = uStack_d8;
                      uStack_120 = uStack_e0;
                      FUN_038fbba8(lVar11,&local_150,uVar10,uVar6,0,iVar14,0);
                    }
                  }
                  uVar4 = *(uint *)(lVar3 + 0x18);
                  uVar13 = (ulong)uVar4;
                  uVar8 = uVar8 + 1;
                } while ((long)uVar8 < (long)(int)uVar4);
              }
            }
          }
        }
      }
      FUN_02739b94(&local_80,*(undefined8 *)PTR_DAT_03da5dd0);
    }
  }
  return;
}


