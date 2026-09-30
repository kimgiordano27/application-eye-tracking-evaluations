/*
FUNCTION_NAME: FUN_01cb4f18
ENTRY_POINT: 01cb4f18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01cb4f18(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03feda18 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_1039);
    thunk_FUN_01ad9084(StringLiteral_1040);
    DAT_03feda18 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_1,0,0);
  puVar1 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    local_34 = FUN_03922ce0(param_1,0);
    puVar1 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    uVar3 = thunk_FUN_01afa70c(*(undefined8 *)
                                Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               ,&local_34);
    local_38 = param_2;
    uVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_38);
    local_3c = param_3;
    uVar5 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_3c);
    FUN_02ee7164(*(undefined8 *)StringLiteral_1039,uVar3,uVar4,uVar5,0);
  }
  else {
    local_34 = param_2;
    uVar3 = thunk_FUN_01afa70c(*(undefined8 *)
                                Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               ,&local_34);
    local_38 = param_3;
    uVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_38);
    FUN_02ee7120(*(undefined8 *)StringLiteral_1040,uVar3,uVar4,0);
  }
  return;
}


