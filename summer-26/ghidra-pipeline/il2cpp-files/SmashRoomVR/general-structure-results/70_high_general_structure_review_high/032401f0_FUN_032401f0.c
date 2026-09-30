/*
FUNCTION_NAME: FUN_032401f0
ENTRY_POINT: 032401f0
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


undefined8 FUN_032401f0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff479c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff479c = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar4 = *(long *)(param_1 + 0xf8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 2) {
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0xf8);
        if (lVar4 == 0) goto LAB_032402b4;
        if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        uVar1 = *(undefined8 *)(lVar4 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar1,uVar5,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
      }
    }
    return 1;
  }
LAB_032402b4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


