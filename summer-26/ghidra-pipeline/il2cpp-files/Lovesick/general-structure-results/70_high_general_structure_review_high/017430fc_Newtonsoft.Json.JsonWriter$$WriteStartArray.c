/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteStartArray
ENTRY_POINT: 017430fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonWriter__WriteStartArray(undefined8 param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int in_w8;
  int in_w9;
  undefined4 unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  
  if (in_w8 - in_w9 < 1) {
    lVar2 = *unaff_x22;
  }
  else {
    lVar2 = *unaff_x22;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar2 + 0x18) <= (uint)((long)param_2 + -1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar1 = lVar2 + ((long)param_2 + -1) * 4;
    *(uint *)(lVar1 + 0x20) =
         *(uint *)(lVar1 + 0x20) & (-1 << (ulong)(in_w8 - in_w9 & 0x1f) ^ 0xffffffffU);
  }
  FUN_0179519c(lVar2,param_2,unaff_w21 - param_2,0);
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w19;
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  return;
}


