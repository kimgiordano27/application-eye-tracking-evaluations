/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializeUtility$$ReadTypeArray
ENTRY_POINT: 0640a454
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long Unity_Entities_Serialization_SerializeUtility__ReadTypeArray(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_0739f627 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fd6328);
    DAT_0739f627 = 1;
  }
  plVar2 = (long *)(param_1 + 0xd0);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fd6328);
    FUN_0640efac(lVar1,0);
    *plVar2 = lVar1;
    thunk_FUN_03048534(plVar2,lVar1);
    lVar1 = *plVar2;
  }
  return lVar1;
}


