/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 0509329c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x23;
  long *plVar8;
  long *unaff_x24;
  
  plVar8 = *(long **)(unaff_x23 + 0x260);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02f6670c(param_1);
    param_1 = *unaff_x24;
  }
  lVar3 = *plVar8;
  lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *plVar8;
  }
  puVar2 = PTR_DAT_067c9bb0;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar4[3];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar4 = *(undefined8 **)(*plVar8 + 0xb8);
    }
    uVar7 = *puVar4;
    lVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cda90);
    FUN_0476105c(lVar6,uVar7,*(undefined8 *)PTR_DAT_067de2b8,0);
    *(long *)(*(long *)(*plVar8 + 0xb8) + 0x18) = lVar6;
  }
  puVar1 = PTR_DAT_067c99b8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
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
  if (lVar5 != 0) {
    FUN_05151a98(lVar5,lVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


