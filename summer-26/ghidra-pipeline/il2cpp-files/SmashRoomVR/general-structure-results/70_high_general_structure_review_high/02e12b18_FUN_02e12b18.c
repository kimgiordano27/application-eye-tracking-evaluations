/*
FUNCTION_NAME: FUN_02e12b18
ENTRY_POINT: 02e12b18
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void FUN_02e12b18(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0122 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4565);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0122 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar4,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_01e8a9f8(param_1,*(undefined8 *)StringLiteral_4565);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x30),uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0))
    goto System_Security_Cryptography_KeyedHashAlgorithm___ctor;
    lVar1 = 0x28;
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x20) != '\0') {
      lVar1 = 0x20;
    }
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar1);
    thunk_FUN_01b4f09c();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x40) == 0)) {
System_Security_Cryptography_KeyedHashAlgorithm___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar1 = 0x28;
    if (*(char *)(*(long *)(param_1 + 0x30) + 0x20) != '\0') {
      lVar1 = 0x20;
    }
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar1);
    thunk_FUN_01b4f09c();
  }
  FUN_02e12c70(param_1);
  return;
}


