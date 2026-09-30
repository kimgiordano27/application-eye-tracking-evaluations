/*
FUNCTION_NAME: FUN_032a46fc
ENTRY_POINT: 032a46fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_032a46fc(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_03d86728;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff581f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86730);
    thunk_FUN_01ad9084(PTR_DAT_03d86728);
    thunk_FUN_01ad9084(PTR_DAT_03d86738);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86740);
    thunk_FUN_01ad9084(PTR_DAT_03d86748);
    DAT_03ff581f = 1;
  }
  uVar7 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    local_24 = 0;
    uVar7 = thunk_FUN_01afa70c(*(undefined8 *)
                                Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               ,&local_24);
    uVar7 = FUN_02ede300(*(undefined8 *)PTR_DAT_03d86740,uVar7,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        );
    }
    FUN_038f2acc(uVar7,0);
    uVar7 = *(undefined8 *)PTR_DAT_03d86730;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0304eec0(uVar7,0);
    plVar5 = (long *)FUN_0391a670(*(undefined8 *)PTR_DAT_03d86748,uVar7,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
    }
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar5);
      }
    }
    uVar7 = FUN_01f25754(plVar5,*(undefined8 *)PTR_DAT_03d86738);
    **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar7;
    thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar7);
  }
  return **(undefined8 **)(*(long *)puVar3 + 0xb8);
}


