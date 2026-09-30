/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_updated_t$$set_speaker_position
ENTRY_POINT: 085eb090
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_session_updated_t__set_speaker_position(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  uVar1 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_093322c0);
  if (unaff_x20 != 0) {
    FUN_085e8568();
    lVar2 = *unaff_x21;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830(uVar1,uVar1);
}


