/*
FUNCTION_NAME: FUN_01c82b38
ENTRY_POINT: 01c82b38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


void FUN_01c82b38(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_03fed7de & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_401);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed7de = 1;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      lVar3 = FUN_01e8ae7c(param_1,0,*(undefined8 *)StringLiteral_401);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_0391f968(lVar3,0,0);
                    /* try { // try from 01c82bf0 to 01d82c07 has its CatchHandler @ 01c83af4 */
      if ((uVar4 & 1) != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar5 = FUN_0391c2b8(lVar3,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        FUN_03923a90(uVar5,0);
      }
    }
    else {
                    /* try { // try from 01c82b80 to 01d82b87 has its CatchHandler @ 01c839f0 */
      if (iVar1 == 2) {
        *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + -1.0;
      }
    }
    FUN_01c81728(param_1);
    return;
  }
  return;
}


