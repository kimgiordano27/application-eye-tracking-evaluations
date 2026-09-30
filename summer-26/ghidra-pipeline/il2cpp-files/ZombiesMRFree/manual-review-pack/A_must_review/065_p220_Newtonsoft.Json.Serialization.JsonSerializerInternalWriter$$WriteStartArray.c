/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 05ac8cd8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(undefined8 param_1)

{
  undefined1 in_NG;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  
  do {
    if ((bool)in_NG) {
      return;
    }
    while( true ) {
      if ((uint)param_1 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar1 = *(long *)(unaff_x22 + (ulong)unaff_w23 * (unaff_x24 & 0xffffffff) + 0x20);
      if ((lVar1 == 0) || (lVar1 == *(long *)(unaff_x20 + 0x10))) break;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_05b11c68();
      unaff_w23 = unaff_w23 - 1;
      if ((int)unaff_w23 < 0) {
        return;
      }
      param_1 = *(undefined8 *)(unaff_x22 + 0x18);
    }
    unaff_w23 = unaff_w23 - 1;
    in_NG = (int)unaff_w23 < 0;
  } while( true );
}


