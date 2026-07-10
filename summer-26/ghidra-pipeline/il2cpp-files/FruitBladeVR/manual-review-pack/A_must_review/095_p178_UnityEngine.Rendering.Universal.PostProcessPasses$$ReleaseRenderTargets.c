/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPasses$$ReleaseRenderTargets
ENTRY_POINT: 034db710
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void UnityEngine_Rendering_Universal_PostProcessPasses__ReleaseRenderTargets(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    UnityEngine_Rendering_RTHandle__Release(*(long *)(param_1 + 0x18),0);
  }
  if (*(long *)(param_1 + 8) != 0) {
    UnityEngine_Rendering_Universal_PostProcessPass__Dispose(*(long *)(param_1 + 8),0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    UnityEngine_Rendering_Universal_PostProcessPass__Dispose(*(long *)(param_1 + 0x10),0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_Rendering_RTHandle__Release(*(long *)(param_1 + 0x20),0);
    return;
  }
  return;
}


