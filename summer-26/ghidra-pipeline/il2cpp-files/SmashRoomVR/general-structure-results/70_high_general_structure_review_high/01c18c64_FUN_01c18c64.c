/*
FUNCTION_NAME: FUN_01c18c64
ENTRY_POINT: 01c18c64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_10;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_01c18c64(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_03fed438 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_<_cctor>b__285_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_7__);
    thunk_FUN_01ad9084(Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed438 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x18) != 0) {
      lVar6 = FUN_01e8b468(param_1,*(undefined8 *)
                                    Method_System_Threading_Tasks_Task_<>c_<Delay>b__247_0__);
      plVar3 = (long *)(param_1 + 0x60);
      *plVar3 = lVar6;
LAB_01c18e28:
      thunk_FUN_01b4f09c(plVar3,lVar6);
      uVar2 = DAT_00b552fc;
      uVar1 = DAT_00b55290;
      uVar8 = FUN_0391a0e8(DAT_00b55290,DAT_00b552fc,0);
      uVar9 = FUN_0391a0e8(uVar1,uVar2,0);
      uVar10 = FUN_0391a0e8(uVar1,uVar2,0);
      *(int *)(param_1 + 0x50) = (int)uVar8;
      *(int *)(param_1 + 0x54) = (int)uVar9;
      *(int *)(param_1 + 0x58) = (int)uVar10;
      *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
      FUN_01c18b38(uVar8,uVar9,uVar10,0x3f800000,param_1);
      return;
    }
    lVar6 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                        );
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_03922f24(lVar6,0,0);
                    /* try { // try from 01c18d54 to 01d18d77 has its CatchHandler @ 01c18d54
                       catch() { ... } // from try @ 01c18d54 with catch @ 01c18d54
                       catch() { ... } // from try @ 01c18d84 with catch @ 01c18d54 */
    if ((uVar4 & 1) != 0) {
      thunk_FUN_01ad9084(
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                        );
      uVar8 = thunk_FUN_01afaadc();
                    /* try { // try from 01c18ee0 to 01d18ee7 has its CatchHandler @ 01c19014 */
      uVar9 = thunk_FUN_01ad9084(
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_System_Collections_IEnumerator_Reset__
                                );
                    /* try { // try from 01c18eec to 01d18f33 has its CatchHandler @ 01c19018 */
      FUN_02fd7c54(uVar8,uVar9,0);
      uVar9 = thunk_FUN_01ad9084(
                                Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_cctor>b__228_0__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar8,uVar9);
    }
    plVar3 = (long *)FUN_01b47fd0(*(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_<>c_<_cctor>b__285_0__
                                  ,1);
    if (plVar3 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_01c18eb8:
        uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar8,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar6;
        thunk_FUN_01b4f09c(plVar3 + 4,lVar6);
        *(long **)(param_1 + 0x30) = plVar3;
        thunk_FUN_01b4f09c((long *)(param_1 + 0x30),plVar3);
        uVar8 = FUN_01b47fd0(*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                             ,1);
        puVar7 = (undefined8 *)(param_1 + 0x60);
        *puVar7 = uVar8;
        thunk_FUN_01b4f09c(puVar7,uVar8);
        plVar3 = (long *)*puVar7;
        lVar6 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                      Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_7__
                            );
        if (plVar3 == (long *)0x0) goto LAB_01c18eb0;
        if ((lVar6 != 0) &&
           (lVar5 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_01c18eb8;
        if ((int)plVar3[3] != 0) {
          plVar3 = plVar3 + 4;
          *plVar3 = lVar6;
          goto LAB_01c18e28;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
LAB_01c18eb0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


