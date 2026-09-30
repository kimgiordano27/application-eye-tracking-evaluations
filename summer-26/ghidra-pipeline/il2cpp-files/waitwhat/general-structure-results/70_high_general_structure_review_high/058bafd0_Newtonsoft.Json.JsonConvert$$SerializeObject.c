/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 058bafd0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_070c2058;
  if ((DAT_0754c5d3 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2058);
    DAT_0754c5d3 = 1;
  }
  lVar4 = *(long *)puVar2;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar1 = *(int *)(lVar4 + 0xe4);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  plVar5 = (long *)FUN_058c7d24(uVar6,0);
  if (plVar5 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


