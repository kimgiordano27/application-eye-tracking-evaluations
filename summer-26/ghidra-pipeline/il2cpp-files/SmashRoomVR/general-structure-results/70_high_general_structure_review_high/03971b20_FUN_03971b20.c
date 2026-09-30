/*
FUNCTION_NAME: FUN_03971b20
ENTRY_POINT: 03971b20
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


undefined8 FUN_03971b20(long param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 local_68;
  
  if ((DAT_03ffc5c6 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03daca18);
    thunk_FUN_01ad9084(PTR_DAT_03daca28);
    thunk_FUN_01ad9084(StringLiteral_669);
    thunk_FUN_01ad9084(StringLiteral_3528);
    thunk_FUN_01ad9084(StringLiteral_679);
    thunk_FUN_01ad9084(StringLiteral_678);
    thunk_FUN_01ad9084(PTR_DAT_03d97158);
    thunk_FUN_01ad9084(PTR_DAT_03d97068);
    thunk_FUN_01ad9084(PTR_DAT_03d97038);
    thunk_FUN_01ad9084(PTR_DAT_03dacc80);
    thunk_FUN_01ad9084(PTR_DAT_03d9cd30);
    thunk_FUN_01ad9084(PTR_DAT_03dacc88);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffc5c6 = 1;
  }
  local_68 = 0;
  *param_3 = 0;
  thunk_FUN_01b4f09c(param_3,0);
  if ((*(long *)(param_1 + 0x130) == 0) && (FUN_0396d9c4(param_1), *(long *)(param_1 + 0x130) == 0))
  {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x1e0);
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    puVar4 = PTR_DAT_03dacc88;
    puVar3 = PTR_DAT_03daca28;
    puVar2 = StringLiteral_669;
    if (param_2 != 0) {
      if (0 < *(int *)(param_2 + 0x10)) {
        iVar13 = 0;
        do {
          uVar5 = FUN_02ee1ff0(param_2,iVar13,0);
          if (*(long *)(param_1 + 0x130) == 0) goto LAB_03971f68;
          uVar5 = uVar5 & 0xffff;
          uVar7 = FUN_0262f638(*(long *)(param_1 + 0x130),uVar5,*(undefined8 *)PTR_DAT_03daca18);
          if (((uVar7 & 1) == 0) &&
             ((((param_5 & 1) == 0 || (1 < *(int *)(param_1 + 0xa8) - 1U)) ||
              (uVar7 = FUN_03970e38(param_1,uVar5,&local_68,0), (uVar7 & 1) == 0)))) {
            if ((param_4 & 1) != 0) {
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar10 = *(long *)puVar3;
              }
              lVar11 = *(long *)(lVar10 + 0xb8);
              if (*(long *)(lVar11 + 0x50) == 0) {
                uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_678);
                FUN_028f7840(uVar9,*(undefined8 *)StringLiteral_679);
                lVar10 = *(long *)puVar3;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar10 = *(long *)puVar3;
                }
                puVar8 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x50);
                *puVar8 = uVar9;
                thunk_FUN_01b4f09c(puVar8,uVar9);
              }
              else {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                if (*(long *)(lVar11 + 0x50) == 0) goto LAB_03971f68;
                FUN_028f7ed4(*(long *)(lVar11 + 0x50),*(undefined8 *)StringLiteral_3528);
              }
              lVar10 = *(long *)puVar3;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar10 = *(long *)puVar3;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
              uVar6 = FUN_03922ce0(param_1,0);
              if (lVar10 == 0) goto LAB_03971f68;
              FUN_028f8a44(lVar10,uVar6,*(undefined8 *)puVar2);
              lVar10 = *(long *)(param_1 + 0x178);
              if ((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x18))) {
                iVar14 = 0;
                do {
                  uVar9 = FUN_02b59714(lVar10,iVar14,*(undefined8 *)puVar4);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)
                                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                      );
                  }
                  uVar7 = FUN_0391f968(uVar9,0,0);
                  if ((uVar7 & 1) == 0) break;
                  if ((*(long *)(param_1 + 0x178) == 0) ||
                     (lVar10 = FUN_02b59714(*(long *)(param_1 + 0x178),iVar14,*(undefined8 *)puVar4)
                     , lVar10 == 0)) goto LAB_03971f68;
                  uVar6 = FUN_03922ce0(lVar10,0);
                  lVar11 = *(long *)puVar3;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(lVar11);
                    lVar11 = *(long *)puVar3;
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x50);
                  if (lVar11 == 0) goto LAB_03971f68;
                  uVar7 = FUN_028f8a44(lVar11,uVar6,*(undefined8 *)puVar2);
                  if (((uVar7 & 1) != 0) &&
                     (uVar7 = UnityEngine_UIElements_EventDispatchUtilities__PropagateToIMGUIContainer
                                        (lVar10,uVar5,1,param_5 & 1), (uVar7 & 1) != 0))
                  goto UnityEngine_UIElements_ExecuteCommandEvent___cctor;
                  lVar10 = *(long *)(param_1 + 0x178);
                  if (lVar10 == 0) goto LAB_03971f68;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < *(int *)(lVar10 + 0x18));
              }
            }
            lVar10 = *(long *)(param_1 + 0x1e0);
            if (lVar10 == 0) goto LAB_03971f68;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)PTR_DAT_03d97158;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_03971f68;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(uint *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
            }
            else {
              FUN_02bccf6c(lVar10,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
UnityEngine_UIElements_ExecuteCommandEvent___cctor:
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(param_2 + 0x10));
      }
      lVar10 = *(long *)(param_1 + 0x1e0);
      if (lVar10 != 0) {
        if (0 < *(int *)(lVar10 + 0x18)) {
          uVar9 = FUN_02bce948(lVar10,*(undefined8 *)PTR_DAT_03d97038);
          *param_3 = uVar9;
          thunk_FUN_01b4f09c(param_3,uVar9);
          return 0;
        }
        return 1;
      }
    }
  }
LAB_03971f68:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


