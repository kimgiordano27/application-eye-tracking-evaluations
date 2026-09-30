/*
FUNCTION_NAME: System.ByReference<OVRPlugin.SpaceDiscoveryResult>$$get_Value
ENTRY_POINT: 041de9c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_SpaceDiscoveryResult>__get_Value(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (unaff_x22 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000000;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000008;
      }
      else {
        FUN_039c5aa4();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


