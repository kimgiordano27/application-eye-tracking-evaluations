/*
FUNCTION_NAME: FUN_02154cf4
ENTRY_POINT: 02154cf4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02154f80) */

undefined8 FUN_02154cf4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_24 [4];
  
  if ((DAT_03fee0c7 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fee0c7 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  local_24[0] = '\0';
  FUN_030a2d7c(uVar3,local_24,0);
  if (*(int *)(*(long *)
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((uVar2 & 1) == 0) {
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar4 = FUN_021550c0(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x40));
  }
  else {
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03922f24(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar1 = *(long *)(param_1 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      FUN_021550c0(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x40));
    }
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18);
  }
  if (local_24[0] != '\0') {
    thunk_FUN_01b18c7c(uVar3,0);
  }
  return uVar4;
}


