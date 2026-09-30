/*
FUNCTION_NAME: System.Array.InternalEnumerator<RequestSceneHeader>$$Dispose
ENTRY_POINT: 03ff96f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<RequestSceneHeader>__Dispose
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  
  while( true ) {
    if (-1 < param_3) {
      FUN_03ffc11c();
      unaff_w21 = unaff_w21 + 1;
    }
    unaff_x24 = unaff_x24 + 1;
    if (unaff_x22 == unaff_x24) break;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    param_3 = *(int *)(unaff_x25 + 8);
    unaff_x25 = unaff_x25 + 0x18;
  }
  *(int *)(unaff_x19 + 0x24) = unaff_w21;
  *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
  return;
}


