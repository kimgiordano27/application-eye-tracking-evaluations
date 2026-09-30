/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$SerializeArray
ENTRY_POINT: 028a61f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__SerializeArray(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = thunk_FUN_01a89d6c();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar2,0);
  }
  if (1 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_0367b588(*(undefined8 *)PTR_DAT_03d01bd8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


