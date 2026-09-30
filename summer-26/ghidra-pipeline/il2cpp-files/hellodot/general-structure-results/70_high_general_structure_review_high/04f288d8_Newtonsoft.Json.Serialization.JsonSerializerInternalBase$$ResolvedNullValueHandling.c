/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ResolvedNullValueHandling
ENTRY_POINT: 04f288d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling(void)

{
  undefined8 uVar1;
  undefined1 (*unaff_x19) [16];
  uint unaff_w22;
  undefined2 unaff_w23;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,unaff_w22 + 1);
  auVar3 = FUN_03fc240c(uVar1,*(undefined8 *)PTR_DAT_065f1aa0);
  if (unaff_w22 < auVar3._8_4_) {
    *(undefined2 *)(auVar3._0_8_ + (ulong)unaff_w22 * 2) = unaff_w23;
    lVar2 = *(long *)PTR_DAT_065f6940;
    if (*(uint *)(*unaff_x19 + 8) < unaff_w22) {
      FUN_04f51680(0);
    }
    if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    FUN_03f4bc78();
    auVar3 = FUN_03fc1fe8(auVar3._0_8_,auVar3._8_8_,*(undefined8 *)PTR_DAT_065f0fd0);
    *unaff_x19 = auVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


