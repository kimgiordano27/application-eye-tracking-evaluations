/*
FUNCTION_NAME: FUN_0385bddc
ENTRY_POINT: 0385bddc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;telemetry_or_network_hits_3
*/


void FUN_0385bddc(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long *local_68;
  
  puVar5 = PTR_DAT_03da76b0;
  puVar2 = PTR_DAT_03da5788;
  if ((DAT_03ff865a & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da76a0);
    thunk_FUN_01ad9084(PTR_DAT_03da6ca8);
    thunk_FUN_01ad9084(StringLiteral_4192);
    thunk_FUN_01ad9084(PTR_DAT_03da76c0);
    thunk_FUN_01ad9084(StringLiteral_4804);
    thunk_FUN_01ad9084(StringLiteral_4803);
    thunk_FUN_01ad9084(PTR_DAT_03da5cf8);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da5788);
    thunk_FUN_01ad9084(PTR_DAT_03da76b0);
    DAT_03ff865a = 1;
  }
  local_68 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x38);
  uVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02d7dbc4(uVar7,0,*(undefined8 *)puVar5,0);
  if (lVar12 != 0) {
    FUN_02909648(lVar12,uVar7,*(undefined8 *)PTR_DAT_03da76c0);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(long *)(param_1 + 0x38) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x38) + 0x20) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_03922f24(uVar7,0,0);
        puVar5 = PTR_DAT_03da5cf8;
        if ((uVar8 & 1) == 0) {
          if (param_2 != (long *)0x0) {
            lVar12 = *param_2;
            uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03da5cf8) {
                  puVar9 = (undefined8 *)(lVar12 + (long)(*piVar10 + 5) * 0x10 + 0x138);
                  goto LAB_0385bf90;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)PTR_DAT_03da5cf8,5);
LAB_0385bf90:
            lVar12 = (*(code *)*puVar9)(param_2,puVar9[1]);
            puVar6 = PTR_DAT_03da6ca8;
            puVar4 = StringLiteral_4192;
            puVar3 = 
            Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
            ;
            if (lVar12 != 0) {
              iVar1 = *(int *)(lVar12 + 0x18);
              if (iVar1 < 1) {
                return;
              }
              iVar11 = 0;
              do {
                lVar12 = *param_2;
                uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar8 != 0) {
                  piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
                      puVar9 = (undefined8 *)(lVar12 + (long)(*piVar10 + 5) * 0x10 + 0x138);
                      goto LAB_0385c01c;
                    }
                    uVar8 = uVar8 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar8 != 0);
                }
                puVar9 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)puVar5,5);
LAB_0385c01c:
                lVar12 = (*(code *)*puVar9)(param_2,puVar9[1]);
                if (lVar12 == 0) break;
                uVar7 = FUN_02b59714(lVar12,iVar11,*(undefined8 *)puVar3);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)puVar2);
                }
                uVar8 = FUN_03922f24(uVar7,0,0);
                if ((uVar8 & 1) == 0) {
                  if (*(long *)(param_1 + 0x38) == 0) break;
                  uVar8 = FUN_029072e4(*(long *)(param_1 + 0x38),uVar7,*(undefined8 *)puVar4);
                  if ((uVar8 & 1) != 0) {
                    if (*(long *)(param_1 + 0x20) == 0) break;
                    uVar8 = FUN_03843b30(*(long *)(param_1 + 0x20),uVar7,&local_68,0);
                    if (((uVar8 & 1) != 0) && (local_68 == param_2)) {
                      if (*(long *)(param_1 + 0x38) == 0) break;
                      FUN_029074b0(*(long *)(param_1 + 0x38),uVar7,*(undefined8 *)StringLiteral_4804
                                  );
                      if (*(long *)(param_1 + 0x28) == 0) break;
                      FUN_025bc5b0(*(long *)(param_1 + 0x28),uVar7,param_2,
                                   *(undefined8 *)PTR_DAT_03da76a0);
                      if (*(long *)(param_1 + 0x30) == 0) break;
                      uVar8 = FUN_02907dd4(*(long *)(param_1 + 0x30),param_2,*(undefined8 *)puVar6);
                      if (((uVar8 & 1) != 0) && (lVar12 = *(long *)(param_1 + 0x10), lVar12 != 0)) {
                        if (lVar12 == 0) break;
                        (**(code **)(lVar12 + 0x18))
                                  (*(undefined8 *)(lVar12 + 0x40),param_2,
                                   *(undefined8 *)(lVar12 + 0x28));
                      }
                    }
                  }
                }
                iVar11 = iVar11 + 1;
                if (iVar11 == iVar1) {
                  return;
                }
              } while( true );
            }
          }
          goto LAB_0385c150;
        }
      }
      return;
    }
  }
LAB_0385c150:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


