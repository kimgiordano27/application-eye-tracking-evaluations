/*
FUNCTION_NAME: FUN_02154a88
ENTRY_POINT: 02154a88
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02154c78) */

byte FUN_02154a88(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_24 [4];
  
  if ((DAT_03fee0c6 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fee0c6 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ae9e74();
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  local_24[0] = '\0';
  FUN_030a2d7c(uVar4,local_24,0);
  if (*(int *)(*(long *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((uVar3 & 1) == 0) {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = FUN_02155068(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    bVar1 = *(int *)(lVar2 + 0x18) == 1;
  }
  else {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    bVar1 = FUN_0391f968(uVar5,0,0);
  }
  if (local_24[0] != '\0') {
    thunk_FUN_01b18c7c(uVar4,0);
  }
  return bVar1 & 1;
}


