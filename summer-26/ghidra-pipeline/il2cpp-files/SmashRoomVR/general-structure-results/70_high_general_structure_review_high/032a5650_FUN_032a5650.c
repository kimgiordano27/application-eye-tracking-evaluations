/*
FUNCTION_NAME: FUN_032a5650
ENTRY_POINT: 032a5650
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_032a5650(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_03ff5829 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_<_cctor>b__285_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5829 = 1;
  }
  plVar7 = (long *)(param_1 + 0x30);
  if (*plVar7 != 0) {
    if (*(long *)(*plVar7 + 0x18) != 0) {
      return;
    }
    lVar1 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                        );
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03922f24(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_01ad9084(
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                        );
      uVar6 = thunk_FUN_01afaadc();
      uVar5 = thunk_FUN_01ad9084(
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_System_Collections_IEnumerator_Reset__
                                );
      FUN_02fd7c54(uVar6,uVar5,0);
      uVar5 = thunk_FUN_01ad9084(PTR_DAT_03d86760);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar6,uVar5);
    }
    plVar3 = (long *)FUN_01b47fd0(*(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_<_cctor>b__285_0__
                                  ,1);
    if (plVar3 != (long *)0x0) {
      if ((lVar1 != 0) &&
         (lVar4 = thunk_FUN_01afa9e0(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar6,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar1;
        thunk_FUN_01b4f09c(plVar3 + 4,lVar1);
        *plVar7 = (long)plVar3;
        thunk_FUN_01b4f09c(plVar7,plVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


