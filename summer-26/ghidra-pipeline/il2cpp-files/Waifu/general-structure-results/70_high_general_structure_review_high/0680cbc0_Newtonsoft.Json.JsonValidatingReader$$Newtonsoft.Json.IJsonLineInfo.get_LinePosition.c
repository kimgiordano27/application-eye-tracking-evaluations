/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 0680cbc0
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong unaff_x22;
  undefined8 in_stack_00000018;
  
  if (*(int *)(DAT_083d2018 + 0xe0) == 0) {
    FUN_033b9870(DAT_083d2018);
  }
  uVar1 = param_1 + unaff_x19;
  if ((long)uVar1 < 0) {
    uVar1 = uVar1 + 864000000000;
  }
  if (uVar1 < unaff_x22) {
    in_stack_00000018 = 0;
    FUN_0680ace8(&stack0x00000018);
    return in_stack_00000018;
  }
  FUN_033d1ba8(&DAT_083c8a08);
  uVar2 = thunk_FUN_03398a84();
  uVar3 = FUN_033d1ba8(&DAT_08448308);
  uVar4 = FUN_033d1ba8(&DAT_08451858);
  FUN_0677f1f8(uVar2,uVar3,uVar4,0);
  uVar3 = FUN_033d1ba8(&DAT_08407750);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar2,uVar3);
}


