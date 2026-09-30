/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01e89068
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_03d480a0(0);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_03d7eda4(*(long *)(unaff_x19 + 0x40),0);
    FUN_03d4800c(0);
    if (*(char *)(unaff_x19 + 0x51) != '\0') {
      FUN_03d480a0(*(undefined4 *)(unaff_x19 + 0x60),*(undefined4 *)(unaff_x19 + 100),
                   *(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x20 + 0xc90),0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01e89134;
      FUN_03d7eda4(*(long *)(unaff_x19 + 0x48),0);
      FUN_03d4800c(0);
    }
    FUN_03d483cc(0,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_03d7eda4(*(long *)(unaff_x19 + 0x40),0);
      FUN_03d480a0(0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_03d7eda4(*(long *)(unaff_x19 + 0x48),0);
        FUN_03d480a0(0);
        return;
      }
    }
  }
LAB_01e89134:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


