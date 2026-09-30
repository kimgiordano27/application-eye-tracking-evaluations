/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ApplySerializerSettings
ENTRY_POINT: 07111cc4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__ApplySerializerSettings(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a2770);
    *(undefined1 *)(unaff_x20 + 0xc11) = 1;
  }
  lVar1 = *(long *)(param_2 + 0xa8);
  if ((lVar1 == 0) && (lVar1 = FUN_0711011c(param_2), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar1 = FUN_0719be54(lVar1,0);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_091a2770;
    lVar2 = thunk_FUN_03d2ee44(lVar1,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(lVar1,uVar3);
    }
  }
  return;
}


