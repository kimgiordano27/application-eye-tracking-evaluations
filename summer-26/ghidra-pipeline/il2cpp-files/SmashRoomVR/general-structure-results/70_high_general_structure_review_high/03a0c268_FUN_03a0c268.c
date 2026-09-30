/*
FUNCTION_NAME: FUN_03a0c268
ENTRY_POINT: 03a0c268
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_14;telemetry_or_network_hits_7
*/


undefined8 FUN_03a0c268(int param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int local_14;
  
  if ((DAT_03ffce60 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03db08f8);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db0968);
    thunk_FUN_01ad9084(PTR_DAT_03db0970);
    DAT_03ffce60 = 1;
  }
  puVar1 = PTR_DAT_03db08f8;
  if (param_1 == 1) {
    lVar2 = *(long *)PTR_DAT_03db08f8;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03a0c66c(0);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      *puVar4 = uVar5;
      thunk_FUN_01b4f09c(puVar4,uVar5);
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x40);
  }
  else if (param_1 == 2) {
    lVar2 = *(long *)PTR_DAT_03db08f8;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03a0c66c(0x3f800000);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *puVar4 = uVar5;
      thunk_FUN_01b4f09c(puVar4,uVar5);
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
  }
  else if (param_1 == 3) {
    lVar2 = *(long *)PTR_DAT_03db08f8;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x38);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03a0c66c(0xbf800000);
      puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      *puVar4 = uVar5;
      thunk_FUN_01b4f09c(puVar4,uVar5);
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x38);
  }
  else {
    local_14 = param_1;
    uVar5 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03db0968,&local_14);
    uVar5 = FUN_02ede300(*(undefined8 *)PTR_DAT_03db0970,uVar5,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        );
    }
    FUN_038f2e04(uVar5,0);
    uVar5 = 0;
  }
  return uVar5;
}


