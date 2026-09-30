/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 0909b724
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateNodePhysicsPoses(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x22;
  
  while( true ) {
    if (unaff_x22 == 0xd) {
      return;
    }
    if (*unaff_x19 == 0) break;
    lVar1 = FUN_090a2e68();
    lVar2 = FUN_090a2e68();
    if (lVar2 == 0) break;
    if ((ulong)*(uint *)(lVar2 + 0x18) <= unaff_x22 - 8U) {
LAB_0909b750:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (lVar1 == 0) break;
    if ((ulong)*(uint *)(lVar1 + 0x18) <= unaff_x22 - 8U) goto LAB_0909b750;
    *(undefined4 *)(lVar1 + unaff_x22 * 4) = *(undefined4 *)(lVar2 + unaff_x22 * 4);
    unaff_x22 = unaff_x22 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


