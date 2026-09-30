/*
FUNCTION_NAME: FUN_01c0282c
ENTRY_POINT: 01c0282c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined4 FUN_01c0282c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  long local_48;
  
                    /* catch() { ... } // from try @ 01c02804 with catch @ 01c02838 */
  if ((DAT_03fed38e & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed38e = 1;
  }
  local_48 = 0;
  if (3 < *(uint *)(param_4 + 0x10)) {
    return 0;
  }
  lVar10 = *(long *)(param_4 + 0x20);
  switch(*(uint *)(param_4 + 0x10)) {
  case 0:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      *(undefined1 *)(lVar10 + 0x70) = 1;
      uVar2 = *(undefined4 *)(lVar10 + 0x58);
      uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar2,uVar7,0);
      *(undefined8 *)(param_4 + 0x18) = uVar7;
      thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar7);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x28) != 0)) {
      uVar7 = FUN_03928d34(*(long *)(lVar10 + 0x28),0);
      uVar13 = *(undefined4 *)(lVar10 + 0x20);
      uVar2 = FUN_03920150(*(undefined4 *)(lVar10 + 0x30),0);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
      }
      local_48 = FUN_03957ffc(uVar7,param_2,param_3,uVar13,uVar2,0);
      FUN_01e11028(&local_48,*(undefined4 *)(lVar10 + 0x88),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_1__);
      if ((*(long *)(lVar10 + 0x38) != 0) && (*(long *)(lVar10 + 0x50) != 0)) {
        FUN_038ea93c(*(undefined4 *)(*(long *)(lVar10 + 0x38) + 0x20),*(long *)(lVar10 + 0x50),
                     *(undefined8 *)(lVar10 + 0x40),0);
        if (*(long *)(lVar10 + 0x68) != 0) {
          FUN_038fe3fc(*(long *)(lVar10 + 0x68),0,0);
          puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
          uVar7 = *(undefined8 *)(lVar10 + 0x60);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar4 = FUN_01f25754(uVar7,*(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
          if (lVar4 != 0) {
            lVar4 = FUN_0391fab4(lVar4,0);
            lVar5 = FUN_0391c27c(lVar10,0);
            if (((lVar5 != 0) && (FUN_03928d34(lVar5,0), lVar4 != 0)) &&
               (FUN_03928dd4(lVar4,0), lVar4 = local_48, local_48 != 0)) {
              if (0 < (int)*(ulong *)(local_48 + 0x18)) {
                uVar12 = 0;
                uVar8 = *(ulong *)(local_48 + 0x18) & 0xffffffff;
                lVar5 = local_48 + 0x20;
                do {
                  if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48180();
                  }
                  lVar11 = *(long *)(lVar5 + uVar12 * 8);
                  uVar7 = param_2;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    uVar7 = param_2;
                  }
                  uVar8 = FUN_03922f24(lVar11,0,0);
                  param_2 = uVar7;
                  if ((uVar8 & 1) == 0) {
                    if (lVar11 == 0) goto LAB_01c02cc8;
                    uVar3 = FUN_03959e14(lVar11,0);
                    lVar9 = *(long *)puVar1;
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(lVar9);
                    }
                    uVar8 = FUN_0391f968(uVar3,0,0);
                    param_2 = uVar7;
                    if ((uVar8 & 1) != 0) {
                      lVar9 = FUN_03959e14(lVar11,0);
                      if (lVar9 == 0) goto LAB_01c02cc8;
                      FUN_0395a360(lVar9,0,0);
                      lVar9 = FUN_03959e14(lVar11,0);
                      if (lVar9 == 0) goto LAB_01c02cc8;
                      FUN_0395a294(lVar9,1,0);
                      lVar11 = FUN_03959e14(lVar11,0);
                      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_01c02cc8;
                      uVar2 = *(undefined4 *)(lVar10 + 0x24);
                      param_2 = FUN_03928d34(*(long *)(lVar10 + 0x28),0);
                      if (lVar11 == 0) goto LAB_01c02cc8;
                      FUN_0395b33c(uVar2,param_2,uVar7,param_3,*(undefined4 *)(lVar10 + 0x20),lVar11
                                   ,0);
                      param_3 = uVar7;
                    }
                  }
                  uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
                  uVar12 = uVar12 + 1;
                } while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18));
              }
              uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                          Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                        );
              FUN_03924d70(DAT_00b553b4,uVar7,0);
              *(undefined8 *)(param_4 + 0x18) = uVar7;
              thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar7);
              *(undefined4 *)(param_4 + 0x10) = 2;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 2:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x68) != 0)) {
      FUN_038fe3fc(*(long *)(lVar10 + 0x68),1,0);
      lVar4 = FUN_0391c27c(lVar10,0);
      if ((*(long *)(lVar10 + 0x78) != 0) &&
         (((lVar5 = FUN_0391c2b8(*(long *)(lVar10 + 0x78),0), lVar5 != 0 &&
           (lVar5 = FUN_0391fab4(lVar5,0), lVar5 != 0)) && (FUN_03928d34(lVar5,0), lVar4 != 0)))) {
        FUN_03928dd4(lVar4,0);
        plVar6 = *(long **)(lVar10 + 0x78);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x628))
                    (plVar6,*(undefined8 *)(lVar10 + 0x80),1,1,*(undefined8 *)(*plVar6 + 0x630));
          uVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                    );
          FUN_03924d70(DAT_00b55290,uVar7,0);
          *(undefined8 *)(param_4 + 0x18) = uVar7;
          thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar7);
          *(undefined4 *)(param_4 + 0x10) = 3;
          return 1;
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      *(undefined1 *)(lVar10 + 0x70) = 0;
      return 0;
    }
  }
LAB_01c02cc8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


