/*
FUNCTION_NAME: System.Collections.Generic.List<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$ToArray
ENTRY_POINT: 03af3414
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


int System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>__ToArray
              (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int in_w10;
  long unaff_x19;
  
  *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = param_3;
    }
    else {
                    /* try { // try from 03af344c to 03bf344f has its CatchHandler @ 03af3478 */
                    /* try { // try from 03af3450 to 03bf3453 has its CatchHandler @ 03af3470 */
                    /* try { // try from 03af3454 to 03bf3457 has its CatchHandler @ 03af3478 */
                    /* try { // try from 03af3458 to 03bf345b has its CatchHandler @ 03af316c */
      FUN_03af3328();
    }
                    /* try { // try from 03af345c to 03bf345f has its CatchHandler @ 03af3468 */
                    /* try { // try from 03af3460 to 03bf3493 has its CatchHandler @ 03af316c */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03af345c with catch @ 03af3468
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03af336c with catch @ 03af346c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 03af3450 with catch @ 03af3470
                        */
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


