/*
FUNCTION_NAME: FUN_02dd6238
ENTRY_POINT: 02dd6238
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_02dd6238(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  if ((DAT_03feff29 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03feff29 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x3f800000,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
LAB_02dd6410:
      uVar3 = 0;
    }
    return uVar3;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  puVar2 = 
  Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
  ;
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
  if ((lVar9 != 0) && (lVar6 = *(long *)(lVar9 + 0x30), lVar6 != 0)) {
    iVar7 = 0;
    while (lVar6 = *(long *)(lVar6 + 0x1c0), lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) <= iVar7) {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03923030(uVar3,0);
        if ((uVar5 & 1) == 0) goto LAB_02dd6410;
        if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x120), lVar9 != 0)) {
          FUN_02de7918(lVar9,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1c0),0,0);
          goto LAB_02dd6410;
        }
        break;
      }
      uVar3 = FUN_02b59714(lVar6,iVar7,*(undefined8 *)puVar2);
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) break;
      iVar8 = 0;
      while( true ) {
        lVar6 = *(long *)(lVar6 + 0x1c0);
        if (lVar6 == 0) goto LAB_02dd642c;
        if (*(int *)(lVar6 + 0x18) <= iVar8) break;
        uVar4 = FUN_02b59714(lVar6,iVar8,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        FUN_039551e8(uVar3,uVar4,0,0);
        lVar6 = *(long *)(param_1 + 0x28);
        iVar8 = iVar8 + 1;
        if (lVar6 == 0) goto LAB_02dd642c;
      }
      lVar6 = *(long *)(lVar9 + 0x30);
      iVar7 = iVar7 + 1;
      if (lVar6 == 0) break;
    }
  }
LAB_02dd642c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


