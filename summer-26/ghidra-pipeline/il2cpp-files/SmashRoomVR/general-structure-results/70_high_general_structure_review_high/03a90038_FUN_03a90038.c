/*
FUNCTION_NAME: FUN_03a90038
ENTRY_POINT: 03a90038
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


void FUN_03a90038(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_03ffd3dc & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2351);
    thunk_FUN_01ad9084(PTR_DAT_03daf4c0);
    DAT_03ffd3dc = 1;
  }
  if ((char)param_1[0xd] == '\0') {
    if ((param_2 & 1) != 0) {
      uVar2 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar3 = FUN_0391f968(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar1 = FUN_03922ce0(lVar4,0);
        if (*(int *)(*(long *)PTR_DAT_03daf4c0 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03daf4c0);
        }
        FUN_03aeaf70(uVar1,0);
      }
      if (*(int *)(*(long *)StringLiteral_2351 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03a7dae4(param_1,0);
    }
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),param_1,*(undefined8 *)(lVar4 + 0x28));
    }
    param_1[5] = 0;
    thunk_FUN_01b4f09c(param_1 + 5,0);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}


