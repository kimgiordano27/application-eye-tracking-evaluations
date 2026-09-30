/*
FUNCTION_NAME: Unity.VisualScripting.StringUtility.<>c$$<ToSeparatedString>b__4_0
ENTRY_POINT: 036cb0a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_3
*/


undefined4 Unity_VisualScripting_StringUtility_<>c__<ToSeparatedString>b__4_0(long param_1)

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
  int iVar8;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  if (*(int *)(param_1 + 0x18) < 1) {

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
  }
  else {
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


