/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$AsReadOnlySpan
ENTRY_POINT: 03f3b548
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__AsReadOnlySpan(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_0488358c();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0485548c(*(long *)(unaff_x19 + 0x28),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148));
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_03d9c7dc((long *)(unaff_x19 + 0x38),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158));
    }
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_03d18804((long *)(unaff_x19 + 0x48),*(undefined8 *)PTR_DAT_067cc4c8);
    }
    puVar1 = PTR_DAT_067c9288;
    if (*(char *)(unaff_x19 + 0x20) != '\0') {
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8f38);
      FUN_06105b34();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a23e4(uVar2,0);
      *(undefined1 *)(unaff_x19 + 0x20) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


