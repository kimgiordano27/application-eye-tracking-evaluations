/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector3>
ENTRY_POINT: 05080804
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector3>(void)

{
  long lVar1;
  uint uVar2;
  byte in_stack_00000020;
  
  uVar2 = 0;
  do {
    FUN_04f890ec();
    lVar1 = FUN_0803ba9c();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_0504a724();
    uVar2 = uVar2 + 1;
  } while (uVar2 < in_stack_00000020);
  return;
}


