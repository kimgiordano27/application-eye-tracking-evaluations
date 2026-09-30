/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 0620cac8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  if (param_1 == unaff_x20) {
    if (*(char *)(param_1 + 0x54) != '\0') {
                    /* try { // try from 0620cadc to 0630ccbb has its CatchHandler @ 0620c7b0 */
      in_stack_00000008 = FUN_0540a454(param_1,*(undefined8 *)PTR_DAT_07d995f8);
      uVar1 = FUN_053dd918(&stack0x00000008,*(undefined8 *)PTR_DAT_07d995d8);
      FUN_0620d5d0();
      return uVar1;
    }
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar2 = thunk_FUN_037788cc();
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daddb0);
    FUN_061a843c(uVar2,uVar3,0);
  }
  else {
    thunk_FUN_037a15ac(PTR_DAT_07d8e248);
    uVar2 = thunk_FUN_037788cc();
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daddb0);
    FUN_06242c7c(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_037a15ac(PTR_DAT_07daddb8);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar2,uVar3);
}


