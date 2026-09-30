/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03f3b264
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x4b8));
  FUN_02f08768(PTR_DAT_067cc4a8);
  *(undefined1 *)(unaff_x22 + 0x2ee) = 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0604cb30(unaff_w19,0);
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    FUN_048848a0(*(long *)(unaff_x21 + 0x10),unaff_w19,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x108));
    if (*(long *)(unaff_x21 + 0x30) != 0) {
      FUN_04887bb4(*(long *)(unaff_x21 + 0x30),unaff_w19,*(undefined8 *)PTR_DAT_067cc4b8);
      if (*(long *)(unaff_x21 + 0x28) != 0) {
        FUN_04856718(*(long *)(unaff_x21 + 0x28),unaff_w19,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x110));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


