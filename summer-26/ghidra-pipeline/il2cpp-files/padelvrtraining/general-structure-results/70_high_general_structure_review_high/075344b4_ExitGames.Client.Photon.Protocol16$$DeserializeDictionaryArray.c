/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeDictionaryArray
ENTRY_POINT: 075344b4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined4 ExitGames_Client_Photon_Protocol16__DeserializeDictionaryArray(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = thunk_FUN_03db9260(param_1,&stack0x00000008);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)thunk_FUN_03d2f094();
                    /* try { // try from 075344cc to 076344f3 has its CatchHandler @ 07534770 */
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


