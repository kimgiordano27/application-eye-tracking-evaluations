/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteEndArray
ENTRY_POINT: 05a8a6c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__WriteEndArray(ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d620);
    *(undefined1 *)(unaff_x20 + 0xf1b) = 1;
  }
  lVar1 = *(long *)(unaff_x19 + 0xb0);
  if ((lVar1 == 0) && (lVar1 = FUN_05a88bd8(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar1 = FUN_05b126c0(lVar1,0);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_06f6d620;
    lVar2 = thunk_FUN_03010710(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar1,uVar3);
    }
  }
  return;
}


