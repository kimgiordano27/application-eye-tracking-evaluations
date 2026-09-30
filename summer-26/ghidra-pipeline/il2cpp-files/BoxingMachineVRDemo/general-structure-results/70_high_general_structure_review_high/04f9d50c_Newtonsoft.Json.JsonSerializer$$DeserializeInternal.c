/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 04f9d50c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializer__DeserializeInternal(void)

{
  long lVar1;
  int in_w8;
  long *unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (in_w8 == 0) {
    lVar3 = unaff_x19[0x18];
    uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06776098);
    FUN_04f56158(lVar1,lVar3,uVar2,0);
  }
  else {
    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06776098);
    FUN_04f55ee8(lVar1,0);
  }
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x140) = (char)unaff_x19[2];
    thunk_FUN_02d6f164(0);
    thunk_FUN_02d6f164();
    unaff_x19[7] = lVar1;
    thunk_FUN_02dd37b4();
    uVar2 = *unaff_x20;
    thunk_FUN_02d6f164();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


