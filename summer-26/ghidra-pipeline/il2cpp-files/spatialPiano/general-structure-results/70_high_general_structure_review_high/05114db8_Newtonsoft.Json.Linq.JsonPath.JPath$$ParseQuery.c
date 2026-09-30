/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.JPath$$ParseQuery
ENTRY_POINT: 05114db8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Linq_JsonPath_JPath__ParseQuery
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,uint param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cStack000000000000000c;
  
  cStack000000000000000c = '\0';
  FUN_05114eec(param_1,param_2,&stack0x0000000c);
  if (cStack000000000000000c == '\0') {
    return;
  }
  if (((param_5 >> 0x10 & 1) == 0) && (param_3 != (long *)0x0)) {
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar1 = (long *)FUN_050f01d8(0);
    if (plVar1 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x05114e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x198))
                (param_3,param_2,param_1,param_4,*(undefined8 *)(*param_3 + 0x1a0));
      return;
    }
  }
  thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
  FUN_02a7d698();
  uVar2 = FUN_0506e4c0(0);
  uVar3 = thunk_FUN_02f6ef30(Unity_AppUI_UI_ColorPicker_UxmlSerializedData_var);
  uVar3 = FUN_05116b30(uVar3,0);
  FUN_02a7da48(param_2);
  uVar4 = thunk_FUN_02f1863c(param_2,0);
  uVar2 = FUN_04f7019c(uVar2,uVar3,uVar4,param_1,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar3 = thunk_FUN_02f45270();
  FUN_05055664(uVar3,uVar2,0);
  uVar2 = thunk_FUN_02f6ef30(Unity_AppUI_UI_ColorSlider_UxmlSerializedData_var);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar3,uVar2);
}


