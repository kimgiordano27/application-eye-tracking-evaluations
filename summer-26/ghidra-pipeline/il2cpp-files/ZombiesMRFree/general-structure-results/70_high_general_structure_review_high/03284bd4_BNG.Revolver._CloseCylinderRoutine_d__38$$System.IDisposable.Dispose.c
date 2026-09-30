/*
FUNCTION_NAME: BNG.Revolver.<CloseCylinderRoutine>d__38$$System.IDisposable.Dispose
ENTRY_POINT: 03284bd4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void BNG_Revolver_<CloseCylinderRoutine>d__38__System_IDisposable_Dispose(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float unaff_s8;
  
  uVar1 = FUN_068fc830();
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_031ed074(*(long *)(unaff_x19 + 0x40),0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_068fa498();
  }
  if (0.0 < unaff_s8) {
    FUN_03284c58();
    uVar2 = FUN_068fa22c();
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    thunk_FUN_03048534((long *)(unaff_x19 + 0x48),uVar2);
    return;
  }
  return;
}


