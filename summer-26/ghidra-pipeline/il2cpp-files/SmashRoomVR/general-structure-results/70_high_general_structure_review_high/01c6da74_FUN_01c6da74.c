/*
FUNCTION_NAME: FUN_01c6da74
ENTRY_POINT: 01c6da74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_01c6da74(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((DAT_03fed71d & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
                    /* try { // try from 01c6daa4 to 01d6db43 has its CatchHandler @ 01c6daa4
                       catch() { ... } // from try @ 01c6daa4 with catch @ 01c6daa4
                       catch() { ... } // from try @ 01c6ddec with catch @ 01c6daa4 */
    thunk_FUN_01ad9084(Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
    thunk_FUN_01ad9084(
                      Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed71d = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_01c6dc78;
    uVar3 = 0;
    *(undefined1 *)(lVar4 + 0x9a) = 0;
    *(undefined1 *)(lVar4 + 0x38) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_01c6dc78;
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar4 + 0x48) == 0) goto LAB_01c6dc78;
      FUN_038ea808(*(long *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50),0);
      if (*(long *)(lVar4 + 0x48) == 0) goto LAB_01c6dc78;
      FUN_038eae88(*(long *)(lVar4 + 0x48),1,0);
      if (*(long *)(lVar4 + 0x48) == 0) goto LAB_01c6dc78;
      FUN_038ea890(*(long *)(lVar4 + 0x48),0);
    }
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_UpdateDriverGroup_<>c_<Awake>b__10_0__);
    FUN_03924d58(uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 2;
    uVar3 = 1;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_01c6dc78;
    *(undefined1 *)(lVar4 + 0x9a) = 1;
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0391f968(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar4 + 0x48) == 0) {
LAB_01c6dc78:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_038ea808(*(long *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x58),0);
      if (*(long *)(lVar4 + 0x48) == 0) goto LAB_01c6dc78;
      FUN_038eae88(*(long *)(lVar4 + 0x48),0,0);
      if (*(long *)(lVar4 + 0x48) == 0) goto LAB_01c6dc78;
      FUN_038ea890(*(long *)(lVar4 + 0x48),0);
    }
    uVar5 = *(undefined4 *)(lVar4 + 0x3c);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                              );
    FUN_03924d70(uVar5,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x18),uVar3);
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return uVar3;
}


