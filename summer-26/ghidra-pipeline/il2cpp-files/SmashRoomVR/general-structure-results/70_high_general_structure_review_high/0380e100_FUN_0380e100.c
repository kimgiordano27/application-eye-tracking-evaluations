/*
FUNCTION_NAME: FUN_0380e100
ENTRY_POINT: 0380e100
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


void FUN_0380e100(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar3 = PTR_DAT_03da5ac8;
  puVar2 = PTR_DAT_03da5ac0;
  puVar1 = PTR_DAT_03da5ab8;
  if ((DAT_03ff8391 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5ac0);
    thunk_FUN_01ad9084(PTR_DAT_03da5ab0);
    thunk_FUN_01ad9084(PTR_DAT_03da5ad0);
    thunk_FUN_01ad9084(StringLiteral_1042);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da5ad8);
    thunk_FUN_01ad9084(PTR_DAT_03da5ae0);
    thunk_FUN_01ad9084(PTR_DAT_03da5ae8);
    thunk_FUN_01ad9084(PTR_DAT_03da5af0);
    thunk_FUN_01ad9084(PTR_DAT_03da5af8);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da5ab8);
    thunk_FUN_01ad9084(PTR_DAT_03da5b00);
    thunk_FUN_01ad9084(PTR_DAT_03da5ac8);
    thunk_FUN_01ad9084(PTR_DAT_03da5b08);
    DAT_03ff8391 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_03809d90(param_1);
  uVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_0385af0c(uVar5,0);
  *(undefined8 *)(param_1 + 0x360) = uVar5;
  thunk_FUN_01b4f09c(param_1 + 0x360,uVar5);
  lVar7 = *(long *)(param_1 + 0x360);
  uVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02518910(uVar5,param_1,*(undefined8 *)puVar3,0);
  puVar1 = StringLiteral_1042;
  if (lVar7 != 0) {
    FUN_03859f78(lVar7,uVar5,0);
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 0x1ec);
    uVar6 = FUN_01e8b8bc(param_1,(undefined8 *)(param_1 + 800),*(undefined8 *)puVar1);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2f0c(*(undefined8 *)PTR_DAT_03da5b08,param_1,0);
    }
    if (*(long *)(param_1 + 800) != 0) {
      FUN_01e8b614(*(long *)(param_1 + 800),1,*(undefined8 *)(param_1 + 0x348),
                   *(undefined8 *)PTR_DAT_03da5ad0);
      puVar3 = PTR_DAT_03da5af8;
      puVar2 = 
      Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
      ;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      lVar7 = *(long *)(param_1 + 0x348);
      if (lVar7 != 0) {
        iVar4 = *(int *)(lVar7 + 0x18) + -1;
        if (iVar4 < 0) {
LAB_0380e390:
          uVar5 = FUN_0391c27c(param_1,0);
          FUN_0380e868(param_1,uVar5);
          puVar1 = PTR_DAT_03da5ab0;
          if (*(int *)(param_1 + 0x244) == 1) {
            lVar7 = FUN_01f66724(param_1,*(undefined8 *)PTR_DAT_03da5b00);
            if (lVar7 != 0) {
              FUN_0391b78c(lVar7,1,0);
              return;
            }
          }
          else if (*(long *)(param_1 + 0x260) != 0) {
            iVar4 = FUN_02353a38(*(long *)(param_1 + 0x260),*(undefined8 *)PTR_DAT_03da5ab0);
            if (iVar4 < 1) {
              if (*(long *)(param_1 + 0x248) == 0) goto UnityEngine_Logger__set_filterLogType;
              FUN_02b5a400(&local_88,*(long *)(param_1 + 0x248),*(undefined8 *)PTR_DAT_03da5af0);
              puVar3 = PTR_DAT_03da5ae0;
              puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
              uStack_68 = uStack_80;
              local_70 = local_88;
              local_60 = local_78;
              while (uVar6 = FUN_02739b98(&local_70,*(undefined8 *)puVar3), uVar5 = local_60,
                    (uVar6 & 1) != 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar6 = FUN_0391f968(uVar5,0,0);
                if ((uVar6 & 1) != 0) {
                  FUN_0380fa50(param_1,uVar5,*(undefined8 *)(param_1 + 0x260));
                }
              }
            }
            else {
              if (*(long *)(param_1 + 0x248) == 0) goto UnityEngine_Logger__set_filterLogType;
              FUN_02b5a400(&local_88,*(long *)(param_1 + 0x248),*(undefined8 *)PTR_DAT_03da5af0);
              puVar3 = PTR_DAT_03da5ae0;
              puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
              uStack_68 = uStack_80;
              local_70 = local_88;
              local_60 = local_78;
              iVar4 = 0;
              while (uVar6 = FUN_02739b98(&local_70,*(undefined8 *)puVar3), uVar5 = local_60,
                    (uVar6 & 1) != 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar6 = FUN_0391f968(uVar5,0,0);
                if ((uVar6 & 1) != 0) {
                  FUN_0380fdf8(param_1,uVar5,iVar4,*(undefined8 *)(param_1 + 0x260));
                  iVar4 = iVar4 + 1;
                }
              }
            }
            FUN_02739b94(&local_70,*(undefined8 *)PTR_DAT_03da5ad8);
            if (*(long *)(param_1 + 0x268) != 0) {
              iVar4 = FUN_02353a38(*(long *)(param_1 + 0x268),*(undefined8 *)puVar1);
              if (iVar4 < 1) {
                if (*(long *)(param_1 + 0x250) != 0) {
                  FUN_02b5a400(&local_88,*(long *)(param_1 + 0x250),*(undefined8 *)PTR_DAT_03da5af0)
                  ;
                  puVar2 = PTR_DAT_03da5ae0;
                  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                  uStack_68 = uStack_80;
                  local_70 = local_88;
                  local_60 = local_78;
                  while (uVar6 = FUN_02739b98(&local_70,*(undefined8 *)puVar2), uVar5 = local_60,
                        (uVar6 & 1) != 0) {
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar6 = FUN_0391f968(uVar5,0,0);
                    if ((uVar6 & 1) != 0) {
                      FUN_0380fa50(param_1,uVar5,*(undefined8 *)(param_1 + 0x268));
                    }
                  }
                  goto LAB_0380e784;
                }
              }
              else if (*(long *)(param_1 + 0x250) != 0) {
                FUN_02b5a400(&local_88,*(long *)(param_1 + 0x250),*(undefined8 *)PTR_DAT_03da5af0);
                puVar2 = PTR_DAT_03da5ae0;
                puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                uStack_68 = uStack_80;
                local_70 = local_88;
                local_60 = local_78;
                iVar4 = 0;
                while (uVar6 = FUN_02739b98(&local_70,*(undefined8 *)puVar2), uVar5 = local_60,
                      (uVar6 & 1) != 0) {
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar6 = FUN_0391f968(uVar5,0,0);
                  if ((uVar6 & 1) != 0) {
                    FUN_0380fdf8(param_1,uVar5,iVar4,*(undefined8 *)(param_1 + 0x268));
                    iVar4 = iVar4 + 1;
                  }
                }
LAB_0380e784:
                FUN_02739b94(&local_70,*(undefined8 *)PTR_DAT_03da5ad8);
                FUN_0380e918(param_1);
                return;
              }
            }
          }
        }
        else {
          do {
            lVar7 = FUN_02b59714(lVar7,iVar4,*(undefined8 *)puVar2);
            if (lVar7 == 0) break;
            uVar5 = FUN_03959e14(lVar7,0);
            uVar8 = *(undefined8 *)(param_1 + 800);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar1);
            }
            uVar6 = FUN_0391f968(uVar5,uVar8,0);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0x348) == 0) break;
              FUN_02b5b0dc(*(long *)(param_1 + 0x348),iVar4,*(undefined8 *)puVar3);
            }
            iVar4 = iVar4 + -1;
            if (iVar4 < 0) goto LAB_0380e390;
            lVar7 = *(long *)(param_1 + 0x348);
          } while (lVar7 != 0);
        }
      }
    }
  }
UnityEngine_Logger__set_filterLogType:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


