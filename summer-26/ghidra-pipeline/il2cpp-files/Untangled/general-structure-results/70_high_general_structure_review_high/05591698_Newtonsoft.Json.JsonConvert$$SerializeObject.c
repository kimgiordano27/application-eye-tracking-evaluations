/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 05591698
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(ulong param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d06660);
    FUN_02f07e70(PTR_DAT_06d4f088);
    *(undefined1 *)(unaff_x19 + 0x8a9) = 1;
  }
  lVar3 = FUN_056497d0(0);
  puVar1 = PTR_DAT_06d4f088;
  if (lVar3 != 0) {
    uVar4 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d06660,*(undefined4 *)(lVar3 + 0x10));
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
    thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
    lVar3 = FUN_056497d0(0);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x10) == 1) {
        uVar2 = FUN_05460528(lVar3,0,0);
        *(undefined2 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar2;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


