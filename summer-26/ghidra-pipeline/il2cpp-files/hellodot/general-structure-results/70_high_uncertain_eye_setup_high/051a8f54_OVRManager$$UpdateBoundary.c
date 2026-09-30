/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 051a8f54
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  FUN_051a8fb8();
  puVar1 = PTR_DAT_06608718;
  if (*(long *)(unaff_x19 + 200) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x130);
    uVar2 = FUN_05ef2cb4(*(long *)(unaff_x19 + 200),0);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_051a9038(uVar3,uVar4,uVar2);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
    FUN_050e6ba0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


