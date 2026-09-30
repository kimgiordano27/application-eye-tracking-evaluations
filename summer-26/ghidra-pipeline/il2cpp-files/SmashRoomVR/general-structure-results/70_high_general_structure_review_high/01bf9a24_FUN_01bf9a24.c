/*
FUNCTION_NAME: FUN_01bf9a24
ENTRY_POINT: 01bf9a24
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_01bf9a24(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_03fed331 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed331 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
LAB_01bf9aac:
      FUN_01bf97a4(lVar6);
      return 0;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
      uVar3 = FUN_03900e0c(*(long *)(lVar6 + 0x20),0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_03922f24(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(lVar6 + 0x20) == 0) goto LAB_01bf9bb8;
        uVar7 = *(undefined8 *)(lVar6 + 0x28);
        uVar3 = FUN_03900e0c(*(long *)(lVar6 + 0x20),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar4 = FUN_03922f24(uVar7,uVar3,0);
        if ((uVar4 & 1) == 0) {
          if ((*(long *)(lVar6 + 0x20) == 0) ||
             (lVar5 = FUN_03900e0c(*(long *)(lVar6 + 0x20),0), lVar5 == 0)) goto LAB_01bf9bb8;
          iVar2 = FUN_03901b0c(lVar5,0);
          if (iVar2 != 0) goto LAB_01bf9aac;
        }
      }
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(0x3f800000,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
LAB_01bf9bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


