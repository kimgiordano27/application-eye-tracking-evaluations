/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatFormatHandling
ENTRY_POINT: 08e0a6c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_FloatFormatHandling(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong unaff_x19;
  long unaff_x20;
  undefined4 uVar5;
  
  puVar2 = (undefined8 *)FUN_04980e68(param_1,param_2,7);
  uVar3 = (*(code *)*puVar2)();
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (plVar4 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x40), plVar4 != (long *)0x0)) {
    uVar5 = 0;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0x3f800000;
    }
    uVar1 = uVar5;
    if ((unaff_x19 & 1) != 0) {
      uVar5 = 0x3f800000;
      uVar1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x08e0a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x2a8))
              (uVar1,0x3f800000,uVar5,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


