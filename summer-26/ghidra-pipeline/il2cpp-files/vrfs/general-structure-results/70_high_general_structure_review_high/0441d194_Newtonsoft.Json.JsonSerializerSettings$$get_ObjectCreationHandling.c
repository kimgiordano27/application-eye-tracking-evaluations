/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ObjectCreationHandling
ENTRY_POINT: 0441d194
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ObjectCreationHandling
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x21;
  
  if ((*(byte *)(param_2 + 0x132) & 1) == 0) {
    param_2 = FUN_015c2790(param_2);
  }
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_2) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_0441d31c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_015c2a80();
LAB_0441d31c:
                    /* WARNING: Could not recover jumptable at 0x0441d340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


