/*
FUNCTION_NAME: FUN_03903ad8
ENTRY_POINT: 03903ad8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03903ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_40 = param_1;
  uStack_38 = param_2;
  if ((DAT_03ffa49e & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffa49e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_3,0,0);
  if ((uVar2 & 1) == 0) {
    local_44 = (int)param_2;
    if (local_44 == 1) {
      FUN_03903c54(&local_40,param_3,param_4);
      return;
    }
    uVar3 = thunk_FUN_01ad9084(
                              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                              );
    uVar3 = thunk_FUN_01afa70c(uVar3,&local_44);
    uVar4 = thunk_FUN_01ad9084(PTR_DAT_03daad20);
    uVar5 = thunk_FUN_01ad9084(PTR_DAT_03daad28);
    uVar3 = FUN_02ee7120(uVar4,uVar5,uVar3,0);
    thunk_FUN_01ad9084(StringLiteral_2234);
    uVar4 = thunk_FUN_01afaadc();
    FUN_030406c4(uVar4,uVar3,0);
    uVar3 = thunk_FUN_01ad9084(PTR_DAT_03daad18);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,uVar3);
  }
  thunk_FUN_01ad9084(StringLiteral_2191);
  uVar3 = thunk_FUN_01afaadc();
  uVar4 = thunk_FUN_01ad9084(PTR_DAT_03d83a18);
  uVar5 = thunk_FUN_01ad9084(PTR_DAT_03daad10);
  FUN_02fd915c(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_01ad9084(PTR_DAT_03daad18);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar3,uVar4);
}


