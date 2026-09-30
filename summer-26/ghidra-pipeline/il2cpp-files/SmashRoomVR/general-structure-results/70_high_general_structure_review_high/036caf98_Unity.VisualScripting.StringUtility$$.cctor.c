/*
FUNCTION_NAME: Unity.VisualScripting.StringUtility$$.cctor
ENTRY_POINT: 036caf98
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


undefined4 Unity_VisualScripting_StringUtility___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  int iVar8;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_028f8a44();
  puVar2 = PTR_DAT_03d9d0d0;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar4 = *(long *)(unaff_x21 + 0x138);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) {
    iVar8 = 0;
    do {
      uVar5 = FUN_02b59714(lVar4,iVar8,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      uVar6 = FUN_0391f968(uVar5,0,0);
      if ((uVar6 & 1) == 0) break;
      if ((*(long *)(unaff_x21 + 0x138) == 0) ||
         (lVar4 = FUN_02b59714(*(long *)(unaff_x21 + 0x138),iVar8,*(undefined8 *)puVar2), lVar4 == 0
         )) goto LAB_036cb27c;
      uVar3 = FUN_03922ce0(lVar4,0);
      lVar7 = *unaff_x25;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar7);
        lVar7 = *unaff_x25;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
      if (lVar7 == 0) goto LAB_036cb27c;
      uVar6 = FUN_028f8a44(lVar7,uVar3,*unaff_x26);
      if (((uVar6 & 1) != 0) &&
         (uVar6 = FUN_036cbb68(lVar4,unaff_w20,1,unaff_w19 & 1), (uVar6 & 1) != 0)) {
        return 1;
      }
      lVar4 = *(long *)(unaff_x21 + 0x138);
      if (lVar4 == 0) goto LAB_036cb27c;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar4 + 0x18));
  }
  lVar4 = FUN_036fba04(0);
  if (lVar4 != 0) {
    lVar4 = FUN_036fba04(0);
    if (lVar4 == 0) goto LAB_036cb27c;
    if (0 < *(int *)(lVar4 + 0x18)) {
      lVar4 = FUN_036fba04(0);
      puVar2 = PTR_DAT_03d9d0d0;
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (lVar4 != 0) {
        iVar8 = 0;
        while( true ) {
          if (*(int *)(lVar4 + 0x18) <= iVar8)
          goto 
          Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
          ;
          lVar4 = FUN_036fba04(0);
          if (lVar4 == 0) break;
          uVar5 = FUN_02b59714(lVar4,iVar8,*(undefined8 *)puVar2);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar6 = FUN_0391f968(uVar5,0,0);
          if ((uVar6 & 1) == 0)
          goto 
          Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
          ;
          lVar4 = FUN_036fba04(0);
          if ((lVar4 == 0) || (lVar4 = FUN_02b59714(lVar4,iVar8,*(undefined8 *)puVar2), lVar4 == 0))
          break;
          uVar3 = FUN_03922ce0(lVar4,0);
          lVar7 = *unaff_x25;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar7);
            lVar7 = *unaff_x25;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
          if (lVar7 == 0) break;
          uVar6 = FUN_028f8a44(lVar7,uVar3,*unaff_x26);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = FUN_036cbb68(lVar4,unaff_w20,1,unaff_w19 & 1), (uVar6 & 1) != 0)) {
            return 1;
          }
          iVar8 = iVar8 + 1;
          lVar4 = FUN_036fba04(0);
          if (lVar4 == 0) break;
        }
      }
      goto LAB_036cb27c;
    }
  }

  Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
  :
  uVar5 = FUN_036fb8e4(0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar6 = FUN_0391f968(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar4 = FUN_036fb8e4(0);
  if (lVar4 != 0) {
    uVar3 = FUN_03922ce0(lVar4,0);
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar7);
      lVar7 = *unaff_x25;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
    if (lVar7 != 0) {
      uVar6 = FUN_028f8a44(lVar7,uVar3,*unaff_x26);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      uVar6 = FUN_036cbb68(lVar4,unaff_w20,1,unaff_w19 & 1);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
LAB_036cb27c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


