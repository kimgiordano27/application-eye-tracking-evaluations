/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 02dda91c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    FUN_05c8cb28(param_1,0,0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_05c8cb28(*(long *)(unaff_x19 + 0x50),0,0);
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        FUN_05c8cb28(*(long *)(unaff_x19 + 0x58),0,0);
        puVar1 = PTR_DAT_06312520;
        if (*(long *)(unaff_x19 + 0x60) != 0) {
          FUN_05c8cb28(*(long *)(unaff_x19 + 0x60),0,0);
          uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar2 = FUN_05c8c45c(uVar3,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            FUN_05c8cb28(*(long *)(unaff_x19 + 0x68),0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


