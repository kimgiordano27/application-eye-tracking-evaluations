/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 05092744
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long *unaff_x23;
  long *unaff_x24;
  
  if (unaff_x21 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      param_1 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar4 = *param_1;
    uVar2 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cda90);
    FUN_0476105c(uVar2,uVar4,*(undefined8 *)PTR_DAT_067de258,0);
    *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8) = uVar2;
  }
  puVar1 = PTR_DAT_067c99b8;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05135c14(0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar3);
  }
  if (DAT_06bb4355 == '\0') {
    FUN_02f08768(PTR_DAT_067c99b8);
    DAT_06bb4355 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (unaff_x20 != 0) {
    FUN_05151a98();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


