/*
FUNCTION_NAME: FUN_03505c60
ENTRY_POINT: 03505c60
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


long FUN_03505c60(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_28;
  
  puVar1 = StringLiteral_977;
  if ((DAT_03ff6da6 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_977);
    thunk_FUN_01ad9084(PTR_DAT_03d95c40);
    thunk_FUN_01ad9084(PTR_DAT_03d95c48);
    thunk_FUN_01ad9084(PTR_DAT_03d95c50);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff6da6 = 1;
  }
  lVar3 = FUN_01e8b0b4(param_1,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_03d95c48;
  if (lVar3 != 0) {
    uVar2 = FUN_03afa68c(lVar3,0);
    local_28 = 0;
    FUN_02d067e8(&local_28,uVar2,*(undefined8 *)puVar1);
    if (((local_28 & 0xff) != 0) && (local_28._4_4_ == 0)) {
      return 0;
    }
    if (((local_28 & 0xff) != 0) && (local_28._4_4_ == 1)) {
      uVar4 = FUN_03afb088(lVar3,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03922f24(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
    }
    lVar3 = FUN_03afb088(lVar3,0);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  lVar3 = FUN_038f1768(0);
  return lVar3;
}


