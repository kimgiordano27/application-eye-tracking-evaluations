/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ReconstructNormal
ENTRY_POINT: 014644c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__ReconstructNormal(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xab6) = in_w8;
  puVar2 = StringLiteral_302;
  if (*(int *)(unaff_x19 + 0x10) == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    uVar3 = FUN_0269e56c(0);
    puVar1 = Method_System_Nullable<StringEscapeHandling>__ctor__;
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026610e4(*(undefined8 *)puVar1,0);
    }
    puVar1 = Method_TrashSwarmPuzzle_SwarmCompleted__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar1,0);
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x10) = 1;
  }
  return 0;
}


