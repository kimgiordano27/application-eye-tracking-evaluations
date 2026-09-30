/*
FUNCTION_NAME: FUN_02dd865c
ENTRY_POINT: 02dd865c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_02dd865c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_03feff3b & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4049);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feff3b = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_02dd876c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar2 = FUN_02dd8770();
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar3 = FUN_01f25754(uVar4,*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
      if (lVar3 != 0) {
        lVar3 = FUN_01ed712c(lVar3,*(undefined8 *)StringLiteral_4049);
        if (((*(long *)(param_1 + 0x30) != 0) &&
            (FUN_02dd87cc(*(long *)(param_1 + 0x30),lVar3), lVar3 != 0)) && (param_2 != 0)) {
          FUN_02e1cdc4(param_2,*(undefined8 *)(lVar3 + 0x40),0);
          return;
        }
      }
      goto LAB_02dd876c;
    }
  }
  return;
}


