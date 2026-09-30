/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$UnsafeElementAt
ENTRY_POINT: 03f3b3b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__UnsafeElementAt(long param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  
  (**(code **)(param_1 + 0x278))();
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar1 = *(int *)(unaff_x19 + 0x58);
    FUN_048831e4(&stack0x00000070,*(long *)(unaff_x19 + 0x10),unaff_w21,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x128));
    memcpy((void *)(*(long *)(unaff_x19 + 0x38) + (long)iVar1 * 0x70),&stack0x00000070,0x70);
    if (unaff_x20 != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + (long)*(int *)(unaff_x19 + 0x58) * 4) =
           *(undefined4 *)(unaff_x20 + 0x38);
      *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


