/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 061e1348
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Serialize(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *in_x9;
  int unaff_w19;
  long unaff_x20;
  
  iVar1 = (*in_x9)();
  if (iVar1 <= unaff_w19) {
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar3 = thunk_FUN_037788cc();
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d95d78);
    FUN_061a5334(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07dacf70);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar3,uVar4);
  }
  plVar2 = *(long **)(unaff_x20 + 0x10);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x061e1374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2e8))(plVar2,unaff_w19,*(undefined8 *)(*plVar2 + 0x2f0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


