/*
FUNCTION_NAME: FUN_03820bb4
ENTRY_POINT: 03820bb4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_17;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


bool FUN_03820bb4(long param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_03ff842c & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff842c = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x99) != '\0') {
    if (*(char *)(param_1 + 0x9a) != '\0') {
      return true;
    }
    switch(*(undefined4 *)(param_1 + 0x1a8)) {
    case 0:
      uVar4 = *(undefined8 *)(param_1 + 0x260);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x260) == 0) {
UnityEngine_MonoBehaviour__StartCoroutineManaged2:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        cVar1 = *(char *)(*(long *)(param_1 + 0x260) + 0x60);
LAB_03820c58:
        return cVar1 != '\0';
      }
      break;
    case 1:
      uVar4 = *(undefined8 *)(param_1 + 0x260);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x260) == 0) goto UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (*(char *)(*(long *)(param_1 + 0x260) + 0x61) != '\0') {
          return true;
        }
      }
      uVar3 = FUN_0381f328(param_1);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x260);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0x260) != 0) {
            cVar1 = *(char *)(*(long *)(param_1 + 0x260) + 0x62);
LAB_03820d34:
            return cVar1 == '\0';
          }
          goto UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        }
      }
      break;
    case 2:
      if (*(char *)(param_1 + 0x278) != '\0') {
        return true;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x260);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x260) == 0) goto UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (*(char *)(*(long *)(param_1 + 0x260) + 0x61) != '\0') {
          cVar1 = *(char *)(param_1 + 0x279);
          goto LAB_03820d34;
        }
      }
      break;
    case 3:
      if (*(char *)(param_1 + 0x278) != '\0') {
        return true;
      }
      if (*(char *)(param_1 + 0x27a) != '\0') {
        return true;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x260);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x260) == 0) goto UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        cVar1 = *(char *)(*(long *)(param_1 + 0x260) + 0x61);
        goto LAB_03820c58;
      }
    }
  }
  return false;
}


