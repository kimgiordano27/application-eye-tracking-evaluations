/*
FUNCTION_NAME: FUN_01c1a7cc
ENTRY_POINT: 01c1a7cc
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


long FUN_01c1a7cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed440 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__97_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed440 = 1;
  }
  uVar2 = FUN_03959ba8(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar3 = FUN_0391f968(uVar2,0,0);
  lVar4 = 0;
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_03959ba8(param_1,0);
    if ((lVar4 == 0) || (lVar5 = FUN_0391c2b8(lVar4,0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = FUN_01ed712c(lVar5,*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__97_System_Collections_IEnumerator_Reset__
                        );
    if (lVar4 == 0) {
      lVar4 = FUN_01ed770c(lVar5,*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                          );
      return lVar4;
    }
  }
  return lVar4;
}


