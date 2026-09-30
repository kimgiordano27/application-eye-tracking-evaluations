/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose
ENTRY_POINT: 07094818
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure
*/


void Newtonsoft_Json_JsonReader__System_IDisposable_Dispose(void)

{
  long lVar1;
  long *unaff_x20;
  undefined8 *unaff_x21;
  
  thunk_FUN_03d233cc();
  lVar1 = FUN_03c8f97c(*unaff_x21,2);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* try { // try from 07094830 to 07194853 has its CatchHandler @ 0709497c */
  if ((*(int *)(lVar1 + 0x18) != 0) &&
     (*(undefined2 *)(lVar1 + 0x20) = 0x2a, *(int *)(lVar1 + 0x18) != 1)) {
    *(undefined2 *)(lVar1 + 0x22) = 0x3f;
    *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8) = lVar1;
                    /* try { // try from 07094868 to 0719488b has its CatchHandler @ 070948ac */
    thunk_FUN_03d233cc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


