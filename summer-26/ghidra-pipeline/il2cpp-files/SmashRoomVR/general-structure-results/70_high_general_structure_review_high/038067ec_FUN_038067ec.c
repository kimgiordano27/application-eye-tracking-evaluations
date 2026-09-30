/*
FUNCTION_NAME: FUN_038067ec
ENTRY_POINT: 038067ec
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


bool FUN_038067ec(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff8343 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_414);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff8343 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x188) != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x198);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar5,0,0);
    if (((uVar3 & 1) != 0) || (uVar3 = FUN_03806f4c(param_1), (uVar3 & 1) != 0)) {
      if (*(long *)(param_1 + 0x198) != 0) {
        lVar4 = UnityEngine_Terrain__get_groupingID(*(long *)(param_1 + 0x198),0xffffffff,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar3 = FUN_03922f24(lVar4,0,0);
        if ((uVar3 & 1) != 0) {
          return false;
        }
        if ((lVar4 != 0) &&
           (lVar4 = FUN_01ed770c(lVar4,*(undefined8 *)StringLiteral_414), lVar4 != 0)) {
          uVar2 = FUN_03afa68c(lVar4,0);
          return uVar2 < 2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return false;
}


