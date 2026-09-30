/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<AvatarMetadata>
ENTRY_POINT: 0397a43c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<AvatarMetadata>(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  if ((*(byte *)(*param_1 + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  lVar1 = thunk_FUN_032a56a0();
  FUN_03c54cf0(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_0333a630();
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_0333a630();
    if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_032934b8();
    }
    uVar2 = thunk_FUN_032a56a0();
    FUN_055c8264(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


