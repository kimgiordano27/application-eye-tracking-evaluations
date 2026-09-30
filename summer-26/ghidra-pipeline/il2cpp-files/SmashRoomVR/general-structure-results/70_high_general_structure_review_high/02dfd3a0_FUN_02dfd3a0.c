/*
FUNCTION_NAME: FUN_02dfd3a0
ENTRY_POINT: 02dfd3a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


bool FUN_02dfd3a0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong local_28;
  
  if ((DAT_03ff0089 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4472);
    thunk_FUN_01ad9084(StringLiteral_2212);
    thunk_FUN_01ad9084(StringLiteral_4433);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0089 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_28 = *(ulong *)(param_1 + 0x28);
  if ((local_28 & 0xff) != 0) {
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03923030(param_2,0);
    if ((uVar5 & 1) != 0) {
      if (param_2 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_4472 + 0x130);
        if (*(byte *)(*param_2 + 0x130) < bVar1) {
          param_2 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)StringLiteral_4472) {
          param_2 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03923030(param_2,0);
      puVar2 = StringLiteral_4433;
      if ((uVar5 & 1) != 0) {
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if ((char)param_2[0x10] != '\0') {
          local_28 = *(ulong *)(param_1 + 0x28);
          iVar3 = FUN_02d06444(&local_28,*(undefined8 *)StringLiteral_4433);
          local_28 = param_2[0x10];
          iVar4 = FUN_02d06444(&local_28,*(undefined8 *)puVar2);
          return iVar3 == iVar4;
        }
      }
    }
  }
  return false;
}


