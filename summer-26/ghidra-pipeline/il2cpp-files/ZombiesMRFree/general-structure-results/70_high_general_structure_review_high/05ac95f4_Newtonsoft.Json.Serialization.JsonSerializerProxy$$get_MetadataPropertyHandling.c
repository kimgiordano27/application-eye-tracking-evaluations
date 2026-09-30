/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 05ac95f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(void)

{
  undefined4 uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_03048534();
                    /* try { // try from 05ac95f8 to 05bc960f has its CatchHandler @ 05ac9688 */
  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
    *(int *)(unaff_x20 + 0x18) = (int)*(undefined8 *)(*(long *)(unaff_x21 + 0x10) + 0x18);
    uVar1 = *(undefined4 *)(unaff_x21 + 0x28);
                    /* try { // try from 05ac9610 to 05bc9677 has its CatchHandler @ 05ac92c8 */
    thunk_FUN_02fc2c1c();
    *(undefined4 *)(unaff_x20 + 0x1c) = uVar1;
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
    *(undefined4 *)(unaff_x20 + 0x24) = unaff_w19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


