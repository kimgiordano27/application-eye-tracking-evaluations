/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 039482b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_SpaceDiscoveryResult>(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
                    /* try { // try from 03948314 to 03a4835b has its CatchHandler @ 03948314
                       catch() { ... } // from try @ 03948314 with catch @ 03948314
                       catch() { ... } // from try @ 03948364 with catch @ 03948314
                       catch() { ... } // from try @ 039483c8 with catch @ 03948314
                       catch() { ... } // from try @ 03948400 with catch @ 03948314 */
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_042c3454(&stack0x00000010);
    uVar1 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  }
  return uVar1;
}


