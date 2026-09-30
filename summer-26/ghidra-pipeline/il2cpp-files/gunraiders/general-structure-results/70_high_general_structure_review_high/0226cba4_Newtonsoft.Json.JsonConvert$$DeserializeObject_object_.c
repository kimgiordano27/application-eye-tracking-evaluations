/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 0226cba4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_JsonConvert__DeserializeObject<object>(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  uint unaff_w21;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uVar2 = FUN_032e9d44();
  if (unaff_w21 < uVar2) {
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x20 +
                   (ulong)*(uint *)(*unaff_x20 + 0x104) * (long)(int)unaff_w21 + 0x20),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    auVar1._8_8_ = uStack0000000000000008;
    auVar1._0_8_ = uStack0000000000000000;
    return auVar1;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar3 = thunk_FUN_01c496e0();
  uVar4 = thunk_FUN_01c273e8(PTR_DAT_04238118);
  FUN_03247e00(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3);
}


