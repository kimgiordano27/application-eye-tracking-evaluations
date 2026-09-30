/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized
ENTRY_POINT: 08e6e7dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  long *unaff_x27;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = param_1;
  uVar3 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = uStack0000000000000028;
    thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_0548c890(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    uVar4 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
    uVar4 = FUN_05c7e4a8(uVar4,*(undefined8 *)PTR_DAT_0ac6d760);
    puVar2 = PTR_DAT_0ac6d758;
    iVar1 = *(int *)(*unaff_x27 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


