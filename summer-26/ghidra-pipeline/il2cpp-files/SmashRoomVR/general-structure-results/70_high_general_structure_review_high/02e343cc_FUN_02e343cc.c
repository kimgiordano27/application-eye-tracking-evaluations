/*
FUNCTION_NAME: FUN_02e343cc
ENTRY_POINT: 02e343cc
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


byte FUN_02e343cc(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff0209 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4412);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0209 = 1;
  }
  if ((param_2 == 0) || (lVar2 = FUN_0391c2b8(param_2,0), lVar2 == 0)) goto LAB_02e344e0;
  uVar3 = FUN_0391fbf0(lVar2,0);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0391b750(param_2,0), (uVar3 & 1) != 0)) {
    uVar3 = FUN_02de0060(param_2,0);
    if ((uVar3 & 1) == 0) {
LAB_02e344a0:
      bVar1 = 0;
      if (*(char *)(param_2 + 0x1bb) != '\0') {
        if (*(long *)(param_1 + 0x78) == 0) {
LAB_02e344e0:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        bVar1 = FUN_029072e4(*(long *)(param_1 + 0x78),param_2,*(undefined8 *)StringLiteral_4412);
        bVar1 = bVar1 ^ 1;
      }
      goto LAB_02e344d0;
    }
    uVar4 = FUN_02ddffe4(param_2,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03923030(uVar4,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = FUN_02ddffe4(param_2,0);
      if (lVar2 == 0) goto LAB_02e344e0;
      uVar3 = FUN_02ddfc74(lVar2,0);
      if ((uVar3 & 1) != 0) goto LAB_02e344a0;
    }
  }
  bVar1 = 0;
LAB_02e344d0:
  return bVar1 & 1;
}


