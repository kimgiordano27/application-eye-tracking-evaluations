/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameAssemblyFormat
ENTRY_POINT: 061e1eb8
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


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameAssemblyFormat
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *piVar4;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
code_r0x061e1eb8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_061e1ea8;
LAB_061e1ec0:
  puVar1 = (undefined8 *)FUN_0377596c();
  do {
    (*(code *)*puVar1)();
    (**(code **)(*unaff_x19 + 0x228))();
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_061e1e80;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_061e1e80:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      return;
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_061e1ec0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_061e1ea8:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x061e1eb8;
    }
    puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  } while( true );
}


