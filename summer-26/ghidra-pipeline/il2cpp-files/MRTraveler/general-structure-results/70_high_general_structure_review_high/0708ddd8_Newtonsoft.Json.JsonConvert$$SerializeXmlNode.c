/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 0708ddd8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeXmlNode(void)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x22;
  
  uVar2 = FUN_06f6fafc();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x22);
  }
  uVar3 = FUN_0708eaa8(uVar2);
  if ((uVar3 & 1) == 0) {
    sVar1 = FUN_06f6fafc();
    lVar4 = *unaff_x22;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar4);
      lVar4 = *unaff_x22;
    }
    if (*(short *)(*(long *)(lVar4 + 0xb8) + 0x18) == sVar1) {
      if (2 < *(int *)(unaff_x19 + 0x10)) {
        uVar2 = FUN_06f6fafc();
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x22);
        }
        FUN_0708eaa8(uVar2);
      }
    }
    else {
      lVar4 = FUN_07053a58(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
    }
    uVar5 = FUN_06f764fc();
    return uVar5;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *unaff_x22;
  }
  return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
}


