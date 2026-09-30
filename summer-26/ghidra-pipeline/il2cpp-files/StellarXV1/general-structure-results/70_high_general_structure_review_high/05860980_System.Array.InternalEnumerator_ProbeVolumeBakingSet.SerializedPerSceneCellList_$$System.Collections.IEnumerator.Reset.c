/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05860980
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_040b1acc();
  iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  if (iVar3 < 1) {
    return;
  }
  if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
    uVar1 = *(undefined4 *)(unaff_x27 + 1);
    uVar4 = *unaff_x28;
    *unaff_x28 = *unaff_x27;
    uVar2 = *(undefined4 *)(unaff_x28 + 1);
    *(undefined4 *)(unaff_x28 + 1) = uVar1;
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      *unaff_x27 = uVar4;
      *(undefined4 *)(unaff_x27 + 1) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


