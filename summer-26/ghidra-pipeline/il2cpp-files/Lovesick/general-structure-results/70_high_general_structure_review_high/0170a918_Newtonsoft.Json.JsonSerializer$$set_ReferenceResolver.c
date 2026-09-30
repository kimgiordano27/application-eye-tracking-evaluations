/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 0170a918
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ReferenceResolver(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  undefined4 unaff_w19;
  long unaff_x21;
  ulong unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
    param_1 = *unaff_x25;
  }
  if (**(char **)(param_1 + 0xb8) == '\0') {
    FUN_0170abd0();
    return;
  }
  if (DAT_037780a3 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_037780a3 = '\x01';
  }
  uVar3 = FUN_015fd038();
  uVar1 = *(undefined4 *)(unaff_x21 + 0x10);
  if ((unaff_x22 & 1) == 0) {
    if (DAT_03778a40 == '\0') {
      thunk_FUN_00d48444(Method_System_Configuration_IgnoreSection_IsModified__);
      thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
      DAT_03778a40 = '\x01';
    }
    puVar2 = Method_System_Configuration_IgnoreSection_IsModified__;
    uVar4 = FUN_01120480();
    uVar3 = FUN_01120480(uVar3,uVar1,*(undefined8 *)puVar2);
    FUN_01785574(uVar4,unaff_w19,uVar3,uVar1,0);
    return;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0170a540();
  return;
}


