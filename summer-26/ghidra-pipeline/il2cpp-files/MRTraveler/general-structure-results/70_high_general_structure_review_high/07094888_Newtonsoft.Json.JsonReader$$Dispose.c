/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 07094888
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_JsonReader__Dispose(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int in_w8;
  int unaff_w19;
  
                    /* try { // try from 0709488c to 0719489f has its CatchHandler @ 0709461c */
  if (param_2 < in_w8 + -1) {
                    /* try { // try from 070948a0 to 071948a3 has its CatchHandler @ 07094ab4 */
                    /* try { // try from 070948a4 to 071948a7 has its CatchHandler @ 07094980 */
    uVar1 = FUN_06f6fafc(param_1,unaff_w19,0);
                    /* catch() { ... } // from try @ 07094788 with catch @ 070948a8
                       try { // try from 070948a8 to 071948c7 has its CatchHandler @ 0709461c */
    uVar1 = (uVar1 & 0xffff) - 0xd800;
    if (uVar1 < 0x400) {
      uVar2 = FUN_06f6fafc(param_1,unaff_w19 + 1,0);
      uVar2 = (uVar2 & 0xffff) - 0xdc00;
      if (uVar2 < 0x400) {
        return uVar2 + uVar1 * 0x400 + 0x10000;
      }
    }
  }
  uVar1 = FUN_06f6fafc(param_1,unaff_w19,0);
  return uVar1 & 0xffff;
}


