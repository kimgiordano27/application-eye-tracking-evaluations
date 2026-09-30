/*
FUNCTION_NAME: OVRPlugin$$GetBodyState
ENTRY_POINT: 01a223a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputBindingComposite_GetValueType__);
  *(undefined1 *)(unaff_x20 + 0xa1f) = 1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x22;
  }
  puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 == 0) goto LAB_01a22474;
    FUN_016f27fc(lVar3,uVar4,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlal_lane_s16__,
                 0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar3;
  }
  puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_XRInteractableSnapVolume_OnLastSelectExited__;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x70) = lVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01282224();
    return;
  }
LAB_01a22474:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


