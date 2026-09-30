/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormat
ENTRY_POINT: 061e1e7c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormat(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
code_r0x061e1e7c:
  puVar2 = (undefined8 *)(param_1 + 0x138);
  do {
    uVar1 = (*(code *)*puVar2)();
    if ((uVar1 & 1) == 0) {
      return;
    }
    lVar3 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_061e1ee0;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_061e1ee0:
    (*(code *)*puVar2)();
    (**(code **)(*unaff_x19 + 0x228))();
    param_1 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          param_1 = param_1 + (long)*piVar4 * 0x10;
          goto code_r0x061e1e7c;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
  } while( true );
}


