/*
FUNCTION_NAME: FUN_03851870
ENTRY_POINT: 03851870
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_6;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_03851870(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_28;
  float local_24;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff860b & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03da72a0);
    DAT_03ff860b = 1;
  }
  FUN_0384c258(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar4,0,0);
  puVar1 = 
  Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__;
  if (((uVar2 & 1) != 0) && (fVar5 = *(float *)(param_1 + 0x54), 0.0 < fVar5)) {
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_038519b4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(float *)(*(long *)(param_1 + 0x30) + 0x2c) < fVar5) {
      local_24 = fVar5;
      uVar4 = thunk_FUN_01afa70c(*(undefined8 *)
                                  Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                                 ,&local_24);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_038519b4;
      local_28 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c);
      uVar3 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_28);
      uVar4 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03da72a0,uVar4,uVar3,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f3474(uVar4,param_1,0);
    }
  }
  return;
}


