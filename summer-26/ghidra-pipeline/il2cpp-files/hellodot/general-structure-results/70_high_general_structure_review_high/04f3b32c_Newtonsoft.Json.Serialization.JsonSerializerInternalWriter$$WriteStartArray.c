/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 04f3b32c
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *unaff_x19;
  undefined1 *unaff_x20;
  uint unaff_w21;
  ushort *unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined4 unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  
  while (unaff_w28 == 0x20) {
    do {
      unaff_w24 = unaff_w24 + 1;
      unaff_x23 = unaff_x23 + 1;
      if (unaff_w21 == unaff_w24) goto LAB_04f3b33c;
      if (unaff_w21 <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      uVar1 = *unaff_x23;
      unaff_w28 = (uint)uVar1;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
    } while (uVar1 - 9 < 5);
  }
  if (unaff_w24 < unaff_w21) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar2 = FUN_04f3d628();
    if ((uVar2 & 1) == 0) {
      unaff_w26 = 0;
    }
    if ((unaff_w27 & uVar2 & 1) == 0) goto LAB_04f3b2b4;
  }
  else {
LAB_04f3b33c:
    if (unaff_w27 == 0) {
      uVar2 = 1;
      goto LAB_04f3b2b4;
    }
  }
  unaff_w26 = 0;
  uVar2 = 0;
  *unaff_x20 = 1;
LAB_04f3b2b4:
  *unaff_x19 = unaff_w26;
  return uVar2 & 1;
}


