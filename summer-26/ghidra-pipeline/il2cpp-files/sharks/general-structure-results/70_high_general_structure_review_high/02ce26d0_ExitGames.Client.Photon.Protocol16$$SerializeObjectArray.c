/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeObjectArray
ENTRY_POINT: 02ce26d0
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__SerializeObjectArray(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02ce26e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


