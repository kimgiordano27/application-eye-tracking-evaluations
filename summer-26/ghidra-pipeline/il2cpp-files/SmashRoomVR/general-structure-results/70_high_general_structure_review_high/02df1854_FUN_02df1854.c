/*
FUNCTION_NAME: FUN_02df1854
ENTRY_POINT: 02df1854
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_02df1854(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  
  if ((DAT_03ff0022 & 1) == 0) {
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
    DAT_03ff0022 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar3 = 
    Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
    ;
    puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar6 != 0) {
      uVar9 = 0;
      do {
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar9) {
          return 0;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_02df1b20;
        uVar7 = *(undefined8 *)(lVar6 + uVar9 * 8 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar7,0);
        if ((uVar4 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 == 0) break;
          iVar8 = 0;
          while (iVar8 < *(int *)(lVar6 + 0x18)) {
            uVar5 = FUN_02b59714(lVar6,iVar8,*(undefined8 *)puVar3);
            lVar6 = *(long *)puVar1;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar6);
            }
            uVar4 = FUN_03923030(uVar5,0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_039551e8(uVar7,uVar5,0,0);
            }
            lVar6 = *(long *)(param_1 + 0x28);
            iVar8 = iVar8 + 1;
            if (lVar6 == 0) goto LAB_02df1abc;
          }
        }
        lVar6 = *(long *)(param_1 + 0x20);
        uVar9 = uVar9 + 1;
      } while (lVar6 != 0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar3 = 
    Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
    ;
    puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar6 != 0) {
      uVar9 = 0;
      do {
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar9) {
          uVar10 = *(undefined4 *)(param_1 + 0x30);
          uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(uVar10,uVar7,0);
          *(undefined8 *)(param_1 + 0x18) = uVar7;
          thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar7);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_02df1b20:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar7 = *(undefined8 *)(lVar6 + uVar9 * 8 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar7,0);
        if ((uVar4 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 == 0) break;
          iVar8 = 0;
          while (iVar8 < *(int *)(lVar6 + 0x18)) {
            uVar5 = FUN_02b59714(lVar6,iVar8,*(undefined8 *)puVar3);
            lVar6 = *(long *)puVar1;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar6);
            }
            uVar4 = FUN_03923030(uVar5,0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_039551e8(uVar7,uVar5,1,0);
            }
            lVar6 = *(long *)(param_1 + 0x28);
            iVar8 = iVar8 + 1;
            if (lVar6 == 0) goto LAB_02df1abc;
          }
        }
        lVar6 = *(long *)(param_1 + 0x20);
        uVar9 = uVar9 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_02df1abc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


