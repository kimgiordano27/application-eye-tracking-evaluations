/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 03cb53e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Implicit(long param_1)

{
  int in_w8;
  long unaff_x19;
  void *unaff_x20;
  uint unaff_w21;
  
  if (param_1 != 0) {
    if (in_w8 == *(int *)(param_1 + 0x18)) {
      FUN_03cb4b24();
      in_w8 = *(int *)(unaff_x19 + 0x18);
      param_1 = *(long *)(unaff_x19 + 0x10);
    }
    if (in_w8 - unaff_w21 != 0 && (int)unaff_w21 <= in_w8) {
      FUN_050f7d68(param_1,unaff_w21,param_1,unaff_w21 + 1,in_w8 - unaff_w21,0);
      param_1 = *(long *)(unaff_x19 + 0x10);
    }
    if (param_1 != 0) {
      if (unaff_w21 < *(uint *)(param_1 + 0x18)) {
        memmove((void *)(param_1 + (long)(int)unaff_w21 * 0x48 + 0x20),unaff_x20,0x48);
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


