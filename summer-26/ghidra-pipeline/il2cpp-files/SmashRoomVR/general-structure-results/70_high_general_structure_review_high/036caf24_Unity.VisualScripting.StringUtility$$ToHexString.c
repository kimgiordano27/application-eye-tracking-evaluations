/*
FUNCTION_NAME: Unity.VisualScripting.StringUtility$$ToHexString
ENTRY_POINT: 036caf24
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


undefined4 Unity_VisualScripting_StringUtility__ToHexString(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  int iVar10;
  long *unaff_x25;
  
  FUN_028f7840(param_2,**(undefined8 **)(param_1 + 0xfa8));
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *unaff_x25;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x40);
  *puVar6 = param_2;
  thunk_FUN_01b4f09c(puVar6,param_2);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
  uVar4 = FUN_03922ce0();
  puVar2 = StringLiteral_669;
  if (lVar5 == 0) goto LAB_036cb27c;
  FUN_028f8a44(lVar5,uVar4,*(undefined8 *)StringLiteral_669);
  puVar3 = PTR_DAT_03d9d0d0;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar5 = *(long *)(unaff_x21 + 0x138);
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
    iVar10 = 0;
    do {
      uVar7 = FUN_02b59714(lVar5,iVar10,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar8 = FUN_0391f968(uVar7,0,0);
      if ((uVar8 & 1) == 0) break;
      if ((*(long *)(unaff_x21 + 0x138) == 0) ||
         (lVar5 = FUN_02b59714(*(long *)(unaff_x21 + 0x138),iVar10,*(undefined8 *)puVar3),
         lVar5 == 0)) goto LAB_036cb27c;
      uVar4 = FUN_03922ce0(lVar5,0);
      lVar9 = *unaff_x25;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar9);
        lVar9 = *unaff_x25;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
      if (lVar9 == 0) goto LAB_036cb27c;
      uVar8 = FUN_028f8a44(lVar9,uVar4,*(undefined8 *)puVar2);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = FUN_036cbb68(lVar5,unaff_w20,1,unaff_w19 & 1), (uVar8 & 1) != 0)) {
        return 1;
      }
      lVar5 = *(long *)(unaff_x21 + 0x138);
      if (lVar5 == 0) goto LAB_036cb27c;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar5 + 0x18));
  }
  lVar5 = FUN_036fba04(0);
  if (lVar5 != 0) {
    lVar5 = FUN_036fba04(0);
    if (lVar5 == 0) goto LAB_036cb27c;
    if (0 < *(int *)(lVar5 + 0x18)) {
      lVar5 = FUN_036fba04(0);
      puVar3 = PTR_DAT_03d9d0d0;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (lVar5 != 0) {
        iVar10 = 0;
        while( true ) {
          if (*(int *)(lVar5 + 0x18) <= iVar10)
          goto 
          Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
          ;
          lVar5 = FUN_036fba04(0);
          if (lVar5 == 0) break;
          uVar7 = FUN_02b59714(lVar5,iVar10,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar8 = FUN_0391f968(uVar7,0,0);
          if ((uVar8 & 1) == 0)
          goto 
          Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
          ;
          lVar5 = FUN_036fba04(0);
          if ((lVar5 == 0) || (lVar5 = FUN_02b59714(lVar5,iVar10,*(undefined8 *)puVar3), lVar5 == 0)
             ) break;
          uVar4 = FUN_03922ce0(lVar5,0);
          lVar9 = *unaff_x25;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar9);
            lVar9 = *unaff_x25;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
          if (lVar9 == 0) break;
          uVar8 = FUN_028f8a44(lVar9,uVar4,*(undefined8 *)puVar2);
          if (((uVar8 & 1) != 0) &&
             (uVar8 = FUN_036cbb68(lVar5,unaff_w20,1,unaff_w19 & 1), (uVar8 & 1) != 0)) {
            return 1;
          }
          iVar10 = iVar10 + 1;
          lVar5 = FUN_036fba04(0);
          if (lVar5 == 0) break;
        }
      }
      goto LAB_036cb27c;
    }
  }

  Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
  :
  uVar7 = FUN_036fb8e4(0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar8 = FUN_0391f968(uVar7,0,0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  lVar5 = FUN_036fb8e4(0);
  if (lVar5 != 0) {
    uVar4 = FUN_03922ce0(lVar5,0);
    lVar9 = *unaff_x25;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar9);
      lVar9 = *unaff_x25;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x40);
    if (lVar9 != 0) {
      uVar8 = FUN_028f8a44(lVar9,uVar4,*(undefined8 *)puVar2);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      uVar8 = FUN_036cbb68(lVar5,unaff_w20,1,unaff_w19 & 1);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
LAB_036cb27c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


