/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache$$StartCachingLogs
ENTRY_POINT: 0518bccc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache__StartCachingLogs(long param_1)

{
  undefined4 uVar1;
  long *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  
  if (unaff_x22 != 0) {
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
      param_1 = *unaff_x19;
      *(int *)((long)unaff_x19 + 0x1c) = *(int *)(unaff_x22 + 0x18) + -1;
      if (param_1 == 0) goto LAB_0518bcc0;
    }
    else {
      *(int *)((long)unaff_x19 + 0x1c) = *(int *)(unaff_x22 + 0x18) + -1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(unaff_x19 + 3) = unaff_w20;
    *(undefined4 *)(unaff_x19 + 4) = uVar1;
    lVar2 = *(long *)(param_1 + 0x20);
    unaff_x19[2] = *(long *)(param_1 + 0x28);
    unaff_x19[1] = lVar2;
    return;
  }
LAB_0518bcc0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


