/*
FUNCTION_NAME: FUN_036cada4
ENTRY_POINT: 036cada4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


undefined4 FUN_036cada4(long param_1,undefined2 param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 local_58;
  
  if ((DAT_03ff7571 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9d110);
    thunk_FUN_01ad9084(StringLiteral_669);
    thunk_FUN_01ad9084(StringLiteral_3528);
    thunk_FUN_01ad9084(StringLiteral_679);
    thunk_FUN_01ad9084(StringLiteral_678);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb10);
    thunk_FUN_01ad9084(PTR_DAT_03d9d0d0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_444);
    DAT_03ff7571 = 1;
  }
  local_58 = 0;
  lVar6 = *(long *)(param_1 + 200);
  if (lVar6 == 0) {
    FUN_036c8114(param_1);
    lVar6 = *(long *)(param_1 + 200);
    if (lVar6 == 0) {
      return 0;
    }
  }
  uVar7 = FUN_0262f638(lVar6,param_2,*(undefined8 *)PTR_DAT_03d9d110);
  if (((uVar7 & 1) != 0) ||
     ((((param_4 & 1) != 0 && (*(int *)(param_1 + 0x48) == 1)) &&
      (uVar7 = FUN_036cb280(param_1,param_2,&local_58), (uVar7 & 1) != 0)))) {
    return 1;
  }
  puVar2 = StringLiteral_444;
  if ((param_3 & 1) != 0) {
    lVar6 = *(long *)StringLiteral_444;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar2;
    }
    lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    if (lVar10 == 0) {
      uVar9 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_678);
      FUN_028f7840(uVar9,*(undefined8 *)StringLiteral_679);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar2;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40);
      *puVar8 = uVar9;
      thunk_FUN_01b4f09c(puVar8,uVar9);
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
        if (lVar10 == 0) goto LAB_036cb27c;
      }
      FUN_028f7ed4(lVar10,*(undefined8 *)StringLiteral_3528);
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    uVar5 = FUN_03922ce0(param_1,0);
    puVar3 = StringLiteral_669;
    if (lVar6 == 0) goto LAB_036cb27c;
    FUN_028f8a44(lVar6,uVar5,*(undefined8 *)StringLiteral_669);
    puVar4 = PTR_DAT_03d9d0d0;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    lVar6 = *(long *)(param_1 + 0x138);
    if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x18))) {
      iVar11 = 0;
      do {
        uVar9 = FUN_02b59714(lVar6,iVar11,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar7 = FUN_0391f968(uVar9,0,0);
        if ((uVar7 & 1) == 0) break;
        if ((*(long *)(param_1 + 0x138) == 0) ||
           (lVar6 = FUN_02b59714(*(long *)(param_1 + 0x138),iVar11,*(undefined8 *)puVar4),
           lVar6 == 0)) goto LAB_036cb27c;
        uVar5 = FUN_03922ce0(lVar6,0);
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar10);
          lVar10 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
        if (lVar10 == 0) goto LAB_036cb27c;
        uVar7 = FUN_028f8a44(lVar10,uVar5,*(undefined8 *)puVar3);
        if (((uVar7 & 1) != 0) &&
           (uVar7 = FUN_036cbb68(lVar6,param_2,1,param_4 & 1), (uVar7 & 1) != 0)) {
          return 1;
        }
        lVar6 = *(long *)(param_1 + 0x138);
        if (lVar6 == 0) goto LAB_036cb27c;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar6 + 0x18));
    }
    lVar6 = FUN_036fba04(0);
    if (lVar6 != 0) {
      lVar6 = FUN_036fba04(0);
      if (lVar6 == 0) goto LAB_036cb27c;
      if (0 < *(int *)(lVar6 + 0x18)) {
        lVar6 = FUN_036fba04(0);
        puVar4 = PTR_DAT_03d9d0d0;
        puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (lVar6 != 0) {
          iVar11 = 0;
          while( true ) {
            if (*(int *)(lVar6 + 0x18) <= iVar11)
            goto 
            Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
            ;
            lVar6 = FUN_036fba04(0);
            if (lVar6 == 0) break;
            uVar9 = FUN_02b59714(lVar6,iVar11,*(undefined8 *)puVar4);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar1);
            }
            uVar7 = FUN_0391f968(uVar9,0,0);
            if ((uVar7 & 1) == 0)
            goto 
            Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
            ;
            lVar6 = FUN_036fba04(0);
            if ((lVar6 == 0) ||
               (lVar6 = FUN_02b59714(lVar6,iVar11,*(undefined8 *)puVar4), lVar6 == 0)) break;
            uVar5 = FUN_03922ce0(lVar6,0);
            lVar10 = *(long *)puVar2;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar10);
              lVar10 = *(long *)puVar2;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
            if (lVar10 == 0) break;
            uVar7 = FUN_028f8a44(lVar10,uVar5,*(undefined8 *)puVar3);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = FUN_036cbb68(lVar6,param_2,1,param_4 & 1), (uVar7 & 1) != 0)) {
              return 1;
            }
            iVar11 = iVar11 + 1;
            lVar6 = FUN_036fba04(0);
            if (lVar6 == 0) break;
          }
        }
        goto LAB_036cb27c;
      }
    }

    Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
    :
    uVar9 = FUN_036fb8e4(0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar7 = FUN_0391f968(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      lVar6 = FUN_036fb8e4(0);
      if (lVar6 != 0) {
        uVar5 = FUN_03922ce0(lVar6,0);
        lVar10 = *(long *)puVar2;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar10);
          lVar10 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
        if (lVar10 != 0) {
          uVar7 = FUN_028f8a44(lVar10,uVar5,*(undefined8 *)puVar3);
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          uVar7 = FUN_036cbb68(lVar6,param_2,1,param_4 & 1);
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
LAB_036cb27c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return 0;
}


