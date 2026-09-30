/*
FUNCTION_NAME: FUN_032b4a5c
ENTRY_POINT: 032b4a5c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_032b4a5c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if ((DAT_03ff588b & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86ce0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff588b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar2 = FUN_038f032c(0);
  if ((uVar2 & 1) == 0) {
    FUN_0390e27c(0,0);
    FUN_0390e2e0(1,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_0391c2b8(param_1,0);
    if (lVar3 != 0) {
      lVar3 = FUN_01ed7044(lVar3,*(undefined8 *)PTR_DAT_03d86ce0);
      plVar5 = (long *)(param_1 + 0x58);
      *plVar5 = lVar3;
      thunk_FUN_01b4f09c(plVar5,lVar3);
      if (*plVar5 != 0) {
        *(undefined8 *)(*plVar5 + 0x48) = *(undefined8 *)(param_1 + 0x40);
        thunk_FUN_01b4f09c();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


