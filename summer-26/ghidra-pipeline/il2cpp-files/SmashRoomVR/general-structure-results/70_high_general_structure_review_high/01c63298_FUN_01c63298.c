/*
FUNCTION_NAME: FUN_01c63298
ENTRY_POINT: 01c63298
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c63298(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((DAT_03fed6bf & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed6bf = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar5 != 0) {
                    /* try { // try from 01c63348 to 01d633f3 has its CatchHandler @ 01c63348
                       catch() { ... } // from try @ 01c63348 with catch @ 01c63348
                       catch() { ... } // from try @ 01c63404 with catch @ 01c63348 */
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar5 + 0x28) == 0) goto LAB_01c63408;
        if (*(char *)(*(long *)(lVar5 + 0x28) + 0x20) == '\0') {
          lVar4 = FUN_0391c27c(lVar5,0);
          if (lVar4 == 0) goto LAB_01c63408;
          uVar2 = FUN_03928c2c(lVar4,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar4);
          }
          uVar3 = FUN_03922f24(uVar2,0,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = FUN_0391c2b8(lVar5,0);
            lVar5 = *(long *)puVar1;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar5);
            }
            FUN_03923a90(uVar2,0);
          }
        }
      }
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 != 0) {
      uVar6 = *(undefined4 *)(lVar5 + 0x4c);
      uVar2 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar6,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar2);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_01c63408:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


