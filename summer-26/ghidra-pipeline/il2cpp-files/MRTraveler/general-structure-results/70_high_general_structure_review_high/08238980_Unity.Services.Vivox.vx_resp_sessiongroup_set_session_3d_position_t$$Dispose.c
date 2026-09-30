/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_sessiongroup_set_session_3d_position_t$$Dispose
ENTRY_POINT: 08238980
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_vx_resp_sessiongroup_set_session_3d_position_t__Dispose(long param_1)

{
  undefined8 uVar1;
  long unaff_x21;
  
  if (param_1 == 0) {
    uVar1 = thunk_FUN_03cf54f0();
    *(undefined8 *)(unaff_x21 + 0x980) = uVar1;
  }
  uVar1 = thunk_FUN_03cf5810();
                    /* try { // try from 082389dc to 08338b4f has its CatchHandler @ 082389dc
                       catch() { ... } // from try @ 082389dc with catch @ 082389dc
                       catch() { ... } // from try @ 08238f3c with catch @ 082389dc
                       catch() { ... } // from try @ 082390b0 with catch @ 082389dc
                       catch() { ... } // from try @ 08239170 with catch @ 082389dc
                       catch() { ... } // from try @ 082391e4 with catch @ 082389dc */
  (**(code **)(unaff_x21 + 0x980))();
  thunk_FUN_03cf5804(uVar1);
  return;
}


