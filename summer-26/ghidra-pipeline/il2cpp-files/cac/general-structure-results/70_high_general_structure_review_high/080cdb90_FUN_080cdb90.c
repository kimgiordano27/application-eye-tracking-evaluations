/*
FUNCTION_NAME: FUN_080cdb90
ENTRY_POINT: 080cdb90
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_080cdb90(long param_1)

{
  if ((DAT_096984bf & 1) == 0) {
    FUN_03f13384(PTR_DAT_09176eb8);
    FUN_03f13384(PTR_DAT_09176ec0);
    DAT_096984bf = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_080d39e0();
    if (*(long *)(param_1 + 0x30) != 0) {
      DA_Assets_FCU_RequestSender_<TryParseResponse>d__16<FigmaImageRequest>__System_IDisposable_Dispose
                (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_09176ec0);
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_06f23d04(*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_09176eb8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


