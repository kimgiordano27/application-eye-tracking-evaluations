/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatString
ENTRY_POINT: 08e0a7d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_DateFormatString
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_04980e68();
      goto LAB_08e0a804;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_08e0a804:
  (*(code *)*puVar1)();
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  thunk_FUN_049ee3d8();
  puVar1 = (undefined8 *)(unaff_x19 + 0x30);
  plVar6 = (long *)*puVar1;
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_08e0a874;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x22,0);
LAB_08e0a874:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  *puVar1 = 0;
  thunk_FUN_049ee3d8(puVar1,0);
  return;
}


