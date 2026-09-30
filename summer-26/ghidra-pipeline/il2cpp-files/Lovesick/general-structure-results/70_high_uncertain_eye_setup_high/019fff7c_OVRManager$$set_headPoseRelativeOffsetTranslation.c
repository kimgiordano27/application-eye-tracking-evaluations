/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 019fff7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetTranslation(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x6c0));
  *(undefined1 *)(unaff_x21 + 0x8b5) = 1;
  lVar2 = FUN_017b76bc(*(undefined8 *)(unaff_x19 + 0x60));
  puVar1 = Method_System_Threading_Tasks_Task_System_IAsyncResult_get_AsyncWaitHandle__;
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
  }
  else {
    uVar4 = *(undefined8 *)
             Method_System_Threading_Tasks_Task_System_IAsyncResult_get_AsyncWaitHandle__;
    lVar3 = thunk_FUN_00d6225c(lVar2,uVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar2,uVar4);
    }
    *(long *)(unaff_x19 + 0x60) = lVar3;
    uVar4 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_00d6225c(lVar2,uVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(lVar2,uVar4);
    }
  }
  return;
}


