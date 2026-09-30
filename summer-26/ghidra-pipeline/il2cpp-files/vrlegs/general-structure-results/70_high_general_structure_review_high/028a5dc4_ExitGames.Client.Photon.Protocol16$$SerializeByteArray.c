/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeByteArray
ENTRY_POINT: 028a5dc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__SerializeByteArray(void)

{
  long unaff_x19;
  
  if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0367a90c(*(undefined8 *)PTR_DAT_03d01bc8);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_036644e4(*(long *)(unaff_x19 + 0x28),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


