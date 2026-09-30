/*
FUNCTION_NAME: System.Collections.Generic.List<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$ToArray
ENTRY_POINT: 04a61098
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>__ToArray(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  FUN_062638b4(0x17,0);
  if (0 < unaff_w21) {
    iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w21;
    *(int *)(unaff_x19 + 0x18) = iVar1;
    if (iVar1 - unaff_w20 != 0 && unaff_w20 <= iVar1) {
      FUN_06265b84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21 + unaff_w20,
                   *(undefined8 *)(unaff_x19 + 0x10),unaff_w20,iVar1 - unaff_w20,0);
    }
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  return;
}


