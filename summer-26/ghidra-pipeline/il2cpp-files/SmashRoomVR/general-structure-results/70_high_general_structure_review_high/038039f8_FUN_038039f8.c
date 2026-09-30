/*
FUNCTION_NAME: FUN_038039f8
ENTRY_POINT: 038039f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_038039f8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_03ff832b & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5560);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da5568);
    DAT_03ff832b = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(param_1 + 0x90);
  lVar6 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar6,0,0);
  if ((uVar2 & 1) == 0) {
    if (*plVar5 == 0) goto LAB_03803bb8;
    uVar4 = FUN_0391c2b8(*plVar5,0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_03803bb8;
    uVar3 = FUN_0391c2b8(*(long *)(param_1 + 0x38),0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
    }
    uVar2 = FUN_0391f968(uVar4,uVar3,0);
    if ((uVar2 & 1) != 0) goto LAB_03803b04;
  }
  else {
LAB_03803b04:
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_03803bb8;
    uVar2 = FUN_01e8b8bc(*(long *)(param_1 + 0x38),plVar5,*(undefined8 *)PTR_DAT_03da5560);
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x98) != '\0') {
        return;
      }
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f3474(*(undefined8 *)PTR_DAT_03da5568,param_1,0);
      *(undefined1 *)(param_1 + 0x98) = 1;
      return;
    }
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    if (*(char *)(param_1 + 0x62) == '\0') {
      return;
    }
    lVar6 = *plVar5;
    if (lVar6 == 0) goto LAB_03803bb8;
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    lVar6 = *plVar5;
    if (lVar6 == 0) {
LAB_03803bb8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
  }
  FUN_038e69c0(lVar6,uVar4,0);
  return;
}


