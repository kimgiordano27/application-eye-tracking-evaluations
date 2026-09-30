/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 05e9209c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05e921c4) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 *puStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 *in_stack_00000028;
  
  uStack0000000000000018 = *unaff_x20;
  puStack0000000000000008 = &stack0x00000028;
  *unaff_x20 = unaff_x19;
  uStack0000000000000000 = 0;
  puStack0000000000000010 = (undefined1 *)&stack0x00000018;
  thunk_FUN_036b7ad0();
  lVar2 = FUN_05e90454();
  puVar1 = PTR_DAT_079f5558;
  if (lVar2 == 0) {
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject();
  }
  else {
    lVar3 = *(long *)PTR_DAT_079f5558;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a0f160);
      FUN_05e7efc8(lVar3,0,*(undefined8 *)PTR_DAT_07a17c10,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar4 = *(long *)puVar1;
      }
      plVar5 = (long *)(*(long *)(lVar4 + 0xb8) + 0x40);
      *plVar5 = lVar3;
      thunk_FUN_036b7ad0(plVar5,lVar3);
    }
    if (*(int *)(*(long *)PTR_DAT_079fd118 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e82aa4(lVar2,lVar3);
  }
  FUN_05e8f420();
  *in_stack_00000028 = uStack0000000000000018;
  thunk_FUN_036b7ad0();
  return;
}


