/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 04d51894
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x21 + 0x6fb) = 1;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar3 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b68);
    FUN_04cee07c(uVar3,uVar4,0);
  }
  else {
    if (*(char *)(unaff_x20 + 0x55) == '\0') {
      FUN_04d470dc();
      return;
    }
    lVar6 = *unaff_x19;
    bVar1 = *(byte *)(*(long *)PTR_DAT_06332a40 + 0x130);
    if ((((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06332a40))
        && (plVar2 = (long *)(**(code **)(lVar6 + 0x238))(), plVar2 != (long *)0x0)) &&
       (*plVar2 == *(long *)PTR_DAT_06332a70)) {
      thunk_FUN_02b9dcd8();
      return;
    }
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar3 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06332a48);
    uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322b68);
    FUN_04cee0f4(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_02ba3594(PTR_DAT_06332a98);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar3,uVar4);
}


