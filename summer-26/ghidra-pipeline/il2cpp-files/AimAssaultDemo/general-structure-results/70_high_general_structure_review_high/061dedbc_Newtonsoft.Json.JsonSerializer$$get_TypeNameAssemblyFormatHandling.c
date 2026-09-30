/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 061dedbc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_TypeNameAssemblyFormatHandling(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int in_w9;
  long unaff_x19;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062519f8(uVar4,0);
  plVar2 = (long *)FUN_06147170();
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_07da51d8;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
      *(long **)(unaff_x19 + 0x10) = plVar2;
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) goto LAB_061dee58;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(plVar2);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
LAB_061dee58:
  thunk_FUN_037aeb94(unaff_x19 + 0x10,plVar2);
  return;
}


