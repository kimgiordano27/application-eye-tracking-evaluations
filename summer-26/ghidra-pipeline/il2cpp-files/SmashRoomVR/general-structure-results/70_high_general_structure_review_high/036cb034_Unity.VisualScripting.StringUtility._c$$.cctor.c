/*
FUNCTION_NAME: Unity.VisualScripting.StringUtility.<>c$$.cctor
ENTRY_POINT: 036cb034
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


undefined4 Unity_VisualScripting_StringUtility_<>c___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint unaff_w19;
  undefined4 unaff_w20;
  int iVar8;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined4 unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  do {
    thunk_FUN_01ac7298(param_1);
    param_1 = *unaff_x25;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x40);
      if (lVar4 == 0) goto LAB_036cb27c;
      uVar5 = FUN_028f8a44(lVar4,unaff_w24,*unaff_x26);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = FUN_036cbb68(unaff_x23,unaff_w20,1,unaff_w19 & 1), (uVar5 & 1) != 0)) {
        return 1;
      }
      lVar4 = *(long *)(unaff_x21 + 0x138);
      if (lVar4 == 0) goto LAB_036cb27c;
      unaff_w22 = unaff_w22 + 1;
      if (*(int *)(lVar4 + 0x18) <= unaff_w22) {
LAB_036cb08c:
        lVar4 = FUN_036fba04(0);
        if (lVar4 == 0)
        goto 
        Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
        ;
        lVar4 = FUN_036fba04(0);
        if (lVar4 == 0) goto LAB_036cb27c;
        if (*(int *)(lVar4 + 0x18) < 1)
        goto 
        Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
        ;
        lVar4 = FUN_036fba04(0);
        puVar2 = PTR_DAT_03d9d0d0;
        puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (lVar4 == 0) goto LAB_036cb27c;
        iVar8 = 0;
        goto LAB_036cb0d4;
      }
      uVar6 = FUN_02b59714(lVar4,unaff_w22,*unaff_x27);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*unaff_x28);
      }
      uVar5 = FUN_0391f968(uVar6,0,0);
      if ((uVar5 & 1) == 0) goto LAB_036cb08c;
      if ((*(long *)(unaff_x21 + 0x138) == 0) ||
         (unaff_x23 = FUN_02b59714(*(long *)(unaff_x21 + 0x138),unaff_w22,*unaff_x27),
         unaff_x23 == 0)) goto LAB_036cb27c;
      unaff_w24 = FUN_03922ce0(unaff_x23,0);
      param_1 = *unaff_x25;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
LAB_036cb0d4:
  if (*(int *)(lVar4 + 0x18) <= iVar8)
  goto 
  Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
  ;
  lVar4 = FUN_036fba04(0);
  if (lVar4 == 0) goto LAB_036cb27c;
  uVar6 = FUN_02b59714(lVar4,iVar8,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar5 = FUN_0391f968(uVar6,0,0);
  if ((uVar5 & 1) == 0)
  goto 
  Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
  ;
  lVar4 = FUN_036fba04(0);
  if ((lVar4 == 0) || (lVar4 = FUN_02b59714(lVar4,iVar8,*(undefined8 *)puVar2), lVar4 == 0))
  goto LAB_036cb27c;
  uVar3 = FUN_03922ce0(lVar4,0);
  lVar7 = *unaff_x25;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
    lVar7 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x40);
  if (lVar7 == 0) goto LAB_036cb27c;
  uVar5 = FUN_028f8a44(lVar7,uVar3,*unaff_x26);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = FUN_036cbb68(lVar4,unaff_w20,1,unaff_w19 & 1), (uVar5 & 1) != 0)) {
    return 1;
  }
  iVar8 = iVar8 + 1;
  lVar4 = FUN_036fba04(0);
  if (lVar4 == 0) goto LAB_036cb27c;
  goto LAB_036cb0d4;

  Unity_VisualScripting_StringUtility_<AllIndexesOf>d__8__System_Collections_Generic_IEnumerator<System_Int32>_get_Current
  :
  uVar6 = FUN_036fb8e4(0);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar5 = FUN_0391f968(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
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
      uVar5 = FUN_028f8a44(lVar7,uVar3,*unaff_x26);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_036cbb68(lVar4,unaff_w20,1,unaff_w19 & 1);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
LAB_036cb27c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


