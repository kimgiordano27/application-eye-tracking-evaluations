/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 032a6034
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(void)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 uVar2;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  
  while (!(bool)in_CY) {
    lVar3 = *(long *)(in_x9 + (long)(int)in_w8 * 8 + 0x20);
    if ((lVar3 != 0) &&
       (lVar1 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0)) {
      uVar2 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar2,0);
    }
    if ((ulong)*(uint *)(unaff_x22 + 3) <= (ulong)(unaff_x23 + unaff_x21)) break;
    *(long *)((long)unaff_x22 + (unaff_x25 >> 0x1d) + 0x20) = lVar3;
    unaff_x21 = unaff_x21 + 1;
    unaff_w24 = unaff_w24 + -1;
    unaff_x25 = unaff_x25 + unaff_x26;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_x21) {
      return;
    }
    in_x9 = *(long *)(unaff_x19 + 0x10);
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    in_w8 = *(int *)(unaff_x19 + 0x18) + unaff_w24;
    in_CY = *(uint *)(in_x9 + 0x18) <= in_w8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


