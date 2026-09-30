/*
FUNCTION_NAME: FUN_032b2a6c
ENTRY_POINT: 032b2a6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_032b2a6c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  long *local_f0;
  ulong uStack_e8;
  long local_e0;
  long *local_d8;
  ulong uStack_d0;
  uint5 local_c8;
  undefined3 uStack_c3;
  ulong local_c0;
  undefined4 local_b8;
  long *local_b0;
  ulong uStack_a8;
  long local_a0;
  long *local_90;
  ulong uStack_88;
  long local_80;
  
  puVar2 = PTR_DAT_03d86c00;
  if ((DAT_03ff587b & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d86c08);
    thunk_FUN_01ad9084(PTR_DAT_03d86c00);
    thunk_FUN_01ad9084(PTR_DAT_03d86c10);
    thunk_FUN_01ad9084(PTR_DAT_03d86c18);
    thunk_FUN_01ad9084(PTR_DAT_03d86c20);
    thunk_FUN_01ad9084(PTR_DAT_03d86be0);
    thunk_FUN_01ad9084(PTR_DAT_03d86c28);
    thunk_FUN_01ad9084(PTR_DAT_03d86be8);
    thunk_FUN_01ad9084(PTR_DAT_03d86bf0);
    thunk_FUN_01ad9084(PTR_DAT_03d86c30);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d86c38);
    thunk_FUN_01ad9084(PTR_DAT_03d86c40);
    DAT_03ff587b = 1;
  }
  puVar4 = PTR_DAT_03d86c30;
  local_b8 = 0;
  _local_c8 = 0;
  local_c0 = 0;
  local_d8 = (long *)0x0;
  uStack_d0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar7 = (long *)FUN_039b1db8(param_2,0);
  lVar12 = *(long *)puVar4;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar12);
    lVar12 = *(long *)puVar4;
  }
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    iVar16 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar16) {
      FUN_03062488(*(undefined8 *)(lVar12 + 0x10),0,iVar16,0);
    }
    puVar3 = PTR_DAT_03d86c18;
    puVar2 = PTR_DAT_03d86c10;
    if (plVar7 != (long *)0x0) {
      iVar16 = 0;
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_032b2c40;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar2,0);
LAB_032b2c40:
        iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (iVar6 <= iVar16) {
          lVar12 = *(long *)puVar4;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar12);
            lVar12 = *(long *)puVar4;
          }
          puVar5 = PTR_DAT_03d86c40;
          puVar3 = PTR_DAT_03d86c20;
          puVar2 = PTR_DAT_03d86bf0;
          lVar11 = *(long *)PTR_DAT_03d86c40;
          lVar12 = **(long **)(lVar12 + 0xb8);
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar11 = *(long *)puVar5;
          }
          lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar15 == 0) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *(long *)puVar5;
            }
            uVar10 = **(undefined8 **)(lVar11 + 0xb8);
            lVar15 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d86c08);
            FUN_024c8d48(lVar15,uVar10,*(undefined8 *)PTR_DAT_03d86c38,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
            *plVar7 = lVar15;
            thunk_FUN_01b4f09c(plVar7,lVar15);
          }
          if (lVar12 != 0) {
            FUN_02c350a0(lVar12,lVar15,*(undefined8 *)PTR_DAT_03d86c28);
            iVar16 = 0;
            goto LAB_032b2f94;
          }
          break;
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_032b2ca0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar3,0);
LAB_032b2ca0:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,iVar16,puVar8[1]);
        if (plVar9 == (long *)0x0) break;
        iVar6 = FUN_039add10(plVar9,0);
        if (iVar6 != -1) {
          lVar12 = param_1[9];
          uVar10 = FUN_0391c2b8(plVar9,0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar13 = FUN_03922f24(lVar12,uVar10,0);
          if ((uVar13 & 1) == 0) {
            uVar10 = FUN_039ad440(plVar9,0);
            local_80 = param_3[2];
            uStack_88 = param_3[1];
            local_90 = (long *)*param_3;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar4);
            }
            uStack_e8 = uStack_88;
            local_f0 = local_90;
            local_e0 = local_80;
            uVar13 = FUN_032b33f0(uVar10,&local_f0,&local_c0);
            if ((uVar13 & 1) != 0) {
              lVar12 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
              if (lVar12 == 0) break;
              uVar13 = local_c0 >> 0x20;
              uVar17 = FUN_038f13a0(local_c0 & 0xffffffff,uVar13,local_b8,lVar12,0);
              uVar10 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
              uVar13 = (**(code **)(*plVar9 + 0x418))
                                 (uVar17,uVar13,plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x420));
              if ((uVar13 & 1) != 0) {
                local_d8 = plVar9;
                thunk_FUN_01b4f09c(&local_d8,plVar9);
                lVar11 = *(long *)puVar4;
                    /* WARNING: Ignoring partial resolution of indirect */
                local_c8._0_4_ = local_b8;
                lVar12 = _local_c8;
                uStack_d0 = local_c0;
                uStack_c3 = SUB83(lVar12,5);
                local_c8._0_4_ = (uint)lVar12;
                local_c8 = (uint5)(uint)local_c8;
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar11 = *(long *)puVar4;
                }
                lVar12 = **(long **)(lVar11 + 0xb8);
                if (lVar12 == 0) break;
                uStack_a8 = uStack_d0;
                local_b0 = local_d8;
                local_a0 = _local_c8;
                lVar11 = *(long *)(lVar12 + 0x10);
                lVar15 = *(long *)PTR_DAT_03d86c20;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar11 == 0) break;
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  lVar11 = lVar11 + (long)(int)uVar1 * 0x18;
                  *(long *)(lVar11 + 0x30) = _local_c8;
                  *(ulong *)(lVar11 + 0x28) = uStack_d0;
                  *(long **)(lVar11 + 0x20) = local_d8;
                  thunk_FUN_01b4f09c(lVar11 + 0x20,0);
                }
                else {
                  uStack_88 = uStack_d0;
                  local_90 = local_d8;
                  local_80 = _local_c8;
                  System_Collections_Generic_ObjectEqualityComparer<ValueTuple<object,_object>>__GetHashCode
                            (lVar12,&local_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
        iVar16 = iVar16 + 1;
      } while( true );
    }
  }
LAB_032b30c0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_032b2f94:
  lVar12 = *(long *)puVar4;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *(long *)puVar4;
  }
  lVar11 = **(long **)(lVar12 + 0xb8);
  if (lVar11 == 0) goto LAB_032b30c0;
  if (*(int *)(lVar11 + 0x18) <= iVar16) {
    return;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar11 == 0) goto LAB_032b30c0;
  }
  FUN_02c32ea0(&local_90,lVar11,iVar16,*(undefined8 *)puVar2);
  if (param_4 == 0) goto LAB_032b30c0;
  lVar11 = *(long *)puVar3;
  uStack_a8 = uStack_88;
  local_b0 = local_90;
  local_a0 = local_80;
  lVar12 = *(long *)(param_4 + 0x10);
  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_032b30c0;
  uVar1 = *(uint *)(param_4 + 0x18);
  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(param_4 + 0x18) = uVar1 + 1;
    lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
    *(long *)(lVar12 + 0x30) = local_80;
    *(ulong *)(lVar12 + 0x28) = uStack_88;
    *(long **)(lVar12 + 0x20) = local_90;
    thunk_FUN_01b4f09c(lVar12 + 0x20,0);
  }
  else {
    System_Collections_Generic_ObjectEqualityComparer<ValueTuple<object,_object>>__GetHashCode
              (param_4,&local_90,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
    ;
  }
  iVar16 = iVar16 + 1;
  goto LAB_032b2f94;
}


