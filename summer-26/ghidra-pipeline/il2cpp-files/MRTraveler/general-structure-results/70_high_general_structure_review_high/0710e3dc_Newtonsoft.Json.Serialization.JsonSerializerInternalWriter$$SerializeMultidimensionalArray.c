/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 0710e3dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined6 uStack000000000000006a;
  undefined8 uStack0000000000000072;
  long in_stack_00000088;
  
  FUN_03c8f898(PTR_DAT_08ea1b30);
  *(undefined1 *)(unaff_x26 + 0x214) = 1;
  uStack0000000000000072 = 0;
  uStack000000000000006a = 0;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_0710d388();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar1 = FUN_0710d958();
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000088) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


