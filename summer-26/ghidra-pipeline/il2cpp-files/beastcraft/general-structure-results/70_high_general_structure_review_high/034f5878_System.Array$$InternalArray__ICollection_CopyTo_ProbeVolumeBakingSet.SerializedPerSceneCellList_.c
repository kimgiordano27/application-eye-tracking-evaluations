/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 034f5878
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int System_Array__InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet_SerializedPerSceneCellList>
              (float param_1,float param_2,float param_3)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  while( true ) {
    if (param_2 + param_1 < unaff_s11) {
      unaff_w21 = unaff_w21 + 1;
    }
    if (in_w8 <= unaff_w20) break;
    lVar1 = FUN_03f2b33c();
    if ((lVar1 == 0) || (lVar1 = FUN_06264d40(lVar1,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    fVar2 = (float)FUN_06276fd8(lVar1,0);
    in_w8 = *(int *)(unaff_x19 + 0x18);
    param_3 = param_3 - unaff_s8;
    unaff_w20 = unaff_w20 + 1;
    param_1 = (fVar2 - unaff_s10) * (fVar2 - unaff_s10) +
              (param_2 - unaff_s9) * (param_2 - unaff_s9);
    param_2 = param_3 * param_3;
  }
  return unaff_w21;
}


