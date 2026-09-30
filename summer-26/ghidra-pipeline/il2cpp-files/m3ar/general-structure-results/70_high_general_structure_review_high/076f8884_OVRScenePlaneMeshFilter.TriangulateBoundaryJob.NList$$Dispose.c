/*
FUNCTION_NAME: OVRScenePlaneMeshFilter.TriangulateBoundaryJob.NList$$Dispose
ENTRY_POINT: 076f8884
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


bool OVRScenePlaneMeshFilter_TriangulateBoundaryJob_NList__Dispose(long param_1)

{
  bool bVar1;
  int iVar2;
  long unaff_x19;
  
  if (param_1 != 0) {
    iVar2 = FUN_076f85a0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(unaff_x19 + 0x8c),10);
    if (iVar2 == 0) {
      if (*(long *)(unaff_x19 + 0x80) == 0)
      goto OVRScenePrefabOverride__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
                    /* try { // try from 076f88c0 to 077f88cb has its CatchHandler @ 076f906c */
      iVar2 = FUN_076f85a0(*(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x3c),
                           *(undefined4 *)(unaff_x19 + 0x8c),7);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
OVRScenePrefabOverride__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


