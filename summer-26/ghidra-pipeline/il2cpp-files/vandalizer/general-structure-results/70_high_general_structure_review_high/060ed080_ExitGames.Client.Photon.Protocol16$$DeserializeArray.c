/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeArray
ENTRY_POINT: 060ed080
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ExitGames_Client_Photon_Protocol16__DeserializeArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_014bfc08;
  uVar1 = _DAT_014bfc00;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


