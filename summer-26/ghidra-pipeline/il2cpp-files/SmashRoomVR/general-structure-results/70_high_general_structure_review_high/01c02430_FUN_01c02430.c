/*
FUNCTION_NAME: FUN_01c02430
ENTRY_POINT: 01c02430
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined4 FUN_01c02430(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_28;
  
  if ((DAT_03fed38d & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed38d = 1;
  }
  local_28 = 0;
  iVar1 = *(int *)(param_4 + 0x10);
  lVar8 = *(long *)(param_4 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    uVar7 = *(int *)(param_4 + 0x30) + 1;
    *(uint *)(param_4 + 0x30) = uVar7;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x70) = 1;
        uVar9 = *(undefined4 *)(lVar8 + 0x58);
        uVar2 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                  );
        FUN_03924d70(uVar9,uVar2,0);
        *(undefined8 *)(param_4 + 0x18) = uVar2;
        thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar2);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
      goto LAB_01c027d8;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) goto LAB_01c027d8;
    uVar2 = FUN_03928d34(*(long *)(lVar8 + 0x28),0);
    uVar10 = *(undefined4 *)(lVar8 + 0x20);
    uVar9 = FUN_03920150(*(undefined4 *)(lVar8 + 0x30),0);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    }
    local_28 = FUN_03957ffc(uVar2,param_2,param_3,uVar10,uVar9,0);
    FUN_01e11028(&local_28,0x4b,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_1__);
    if ((*(long *)(lVar8 + 0x38) == 0) || (*(long *)(lVar8 + 0x50) == 0)) goto LAB_01c027d8;
    FUN_038ea93c(*(undefined4 *)(*(long *)(lVar8 + 0x38) + 0x20),*(long *)(lVar8 + 0x50),
                 *(undefined8 *)(lVar8 + 0x40),0);
    if (*(long *)(lVar8 + 0x68) == 0) goto LAB_01c027d8;
    FUN_038fe3fc(*(long *)(lVar8 + 0x68),0,0);
    uVar2 = *(undefined8 *)(lVar8 + 0x60);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar3 = FUN_01f25754(uVar2,*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    if (lVar3 == 0) goto LAB_01c027d8;
    lVar3 = FUN_0391fab4(lVar3,0);
    lVar4 = FUN_0391c27c(lVar8,0);
    if ((lVar4 == 0) || (FUN_03928d34(lVar4,0), lVar3 == 0)) goto LAB_01c027d8;
    FUN_03928dd4(lVar3,0);
    *(undefined8 *)(param_4 + 0x28) = local_28;
    thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x28));
    uVar7 = 0;
    *(undefined4 *)(param_4 + 0x30) = 0;
  }
  plVar5 = (long *)(param_4 + 0x28);
  lVar3 = *plVar5;
  if (lVar3 != 0) {
    if ((int)uVar7 < (int)*(uint *)(lVar3 + 0x18)) {
      if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar3 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
      if (lVar3 != 0) {
        uVar2 = FUN_03959e14(lVar3,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar6 = FUN_0391f968(uVar2,0,0);
        if ((uVar6 & 1) == 0) {
LAB_01c02728:
          uVar2 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(DAT_00b555a8,uVar2,0);
          *(undefined8 *)(param_4 + 0x18) = uVar2;
          thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar2);
          *(undefined4 *)(param_4 + 0x10) = 2;
          return 1;
        }
        lVar3 = FUN_03959e14(lVar3,0);
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
          uVar9 = *(undefined4 *)(lVar8 + 0x24);
          uVar2 = FUN_03928d34(*(long *)(lVar8 + 0x28),0);
          if (lVar3 != 0) {
            FUN_0395b33c(uVar9,uVar2,param_2,param_3,*(undefined4 *)(lVar8 + 0x20),lVar3,0);
            goto LAB_01c02728;
          }
        }
      }
    }
    else {
      *plVar5 = 0;
      thunk_FUN_01b4f09c(plVar5,0);
      if (lVar8 != 0) {
        uVar2 = FUN_0391c2b8(lVar8,0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        FUN_03923a44(0x40400000,uVar2,0);
        return 0;
      }
    }
  }
LAB_01c027d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


