/*
FUNCTION_NAME: FUN_02dd5d84
ENTRY_POINT: 02dd5d84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_02dd5d84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  if ((DAT_03feff28 & 1) == 0) {
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
    DAT_03feff28 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar3 = 
    Field_<PrivateImplementationDetails>_2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
    ;
    puVar2 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar6 != 0) {
      if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
        return 0;
      }
      uVar12 = 0;
      uVar4 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      while (uVar12 < uVar4) {
        lVar7 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(lVar7,0);
        if ((uVar4 & 1) != 0) {
          if (lVar7 == 0) goto LAB_02dd60c0;
          uVar4 = FUN_0395b350(lVar7,0);
          if ((uVar4 & 1) != 0) {
            if ((lVar11 == 0) || (lVar8 = *(long *)(lVar11 + 0x30), lVar8 == 0)) goto LAB_02dd60c0;
            iVar10 = 0;
            while( true ) {
              lVar8 = *(long *)(lVar8 + 0x1c0);
              if (lVar8 == 0) goto LAB_02dd60c0;
              if (*(int *)(lVar8 + 0x18) <= iVar10) break;
              lVar8 = FUN_02b59714(lVar8,iVar10,*(undefined8 *)puVar3);
              lVar9 = *(long *)puVar1;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar9);
              }
              uVar4 = FUN_03923030(lVar8,0);
              if ((uVar4 & 1) != 0) {
                if (lVar8 == 0) goto LAB_02dd60c0;
                uVar4 = FUN_0395b350(lVar8,0);
                if ((uVar4 & 1) != 0) {
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_039551e8(lVar7,lVar8,0,0);
                }
              }
              lVar8 = *(long *)(lVar11 + 0x30);
              iVar10 = iVar10 + 1;
              if (lVar8 == 0) goto LAB_02dd60c0;
            }
          }
        }
        uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar12 = uVar12 + 1;
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar12) {
          return 0;
        }
      }
LAB_02dd60c4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
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
      uVar12 = 0;
      do {
        if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar12) {
          uVar13 = *(undefined4 *)(param_1 + 0x30);
          uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(uVar13,uVar5,0);
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar5);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_02dd60c4;
        lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(lVar6,0);
        if ((uVar4 & 1) != 0) {
          if (lVar6 == 0) break;
          uVar4 = FUN_0395b350(lVar6,0);
          if ((uVar4 & 1) != 0) {
            if ((lVar11 == 0) || (lVar7 = *(long *)(lVar11 + 0x30), lVar7 == 0)) break;
            iVar10 = 0;
            while( true ) {
              lVar7 = *(long *)(lVar7 + 0x1c0);
              if (lVar7 == 0) goto LAB_02dd60c0;
              if (*(int *)(lVar7 + 0x18) <= iVar10) break;
              lVar7 = FUN_02b59714(lVar7,iVar10,*(undefined8 *)puVar3);
              lVar8 = *(long *)puVar1;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar8);
              }
              uVar4 = FUN_03923030(lVar7,0);
              if ((uVar4 & 1) != 0) {
                if (lVar7 == 0) goto LAB_02dd60c0;
                uVar4 = FUN_0395b350(lVar7,0);
                if ((uVar4 & 1) != 0) {
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_039551e8(lVar6,lVar7,1,0);
                }
              }
              lVar7 = *(long *)(lVar11 + 0x30);
              iVar10 = iVar10 + 1;
              if (lVar7 == 0) goto LAB_02dd60c0;
            }
          }
        }
        lVar6 = *(long *)(param_1 + 0x20);
        uVar12 = uVar12 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_02dd60c0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


