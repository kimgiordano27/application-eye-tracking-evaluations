/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 04fc5394
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x24;
  undefined2 uStack000000000000000c;
  undefined1 uStack000000000000000e;
  undefined1 uStack000000000000000f;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98(param_1);
    param_1 = *unaff_x24;
  }
  puVar2 = PTR_DAT_0664a320;
  puVar5 = *(undefined8 **)(param_1 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dabd98(param_1);
      puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066595a8);
    FUN_04c52934(lVar6,uVar7,*(undefined8 *)PTR_DAT_066595b8,0);
    plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *plVar3 = lVar6;
    thunk_FUN_02dc1ef0(plVar3,lVar6);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a49884 == '\0') {
    FUN_02d4dc40(PTR_DAT_0664a320);
    DAT_06a49884 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (param_2 != 0) {
    uVar4 = FUN_03d12994(param_2,lVar6);
    uStack000000000000000c = 0;
    uStack000000000000000e = 0;
    uStack000000000000000f = 0;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05014e28(0x26,0);
    }
    thunk_FUN_02dc1ef0();
    auVar1._8_6_ = 0;
    auVar1._0_8_ = uVar4;
    auVar1[0xe] = 1;
    auVar1[0xf] = uStack000000000000000f;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


