/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 050d70b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor
                (ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  int unaff_w20;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(PTR_DAT_067dacb8);
    FUN_02f08768(PTR_DAT_067d5bb0);
    FUN_02f08768(PTR_DAT_067d60d8);
    *(undefined1 *)(unaff_x23 + 0xbc2) = 1;
  }
  puVar2 = PTR_DAT_067dacb8;
  if (unaff_w20 < (int)param_3) {
    param_3 = 0xffffffff;
LAB_050d71ec:
    return param_3 & 0xffffffff;
  }
  if (*(int *)(*(long *)PTR_DAT_067dacb8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bb9597 == '\0') {
    FUN_02f08768(PTR_DAT_067dacb8);
    DAT_06bb9597 = '\x01';
  }
  puVar1 = PTR_DAT_067c9fd8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar4 = (long *)FUN_050656a0(0);
    if (plVar4 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      if (lVar3 != 0) {
        FUN_050482e4(lVar3,param_2,param_3);
        goto LAB_050d71ec;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar4 = (long *)FUN_050656a0(0);
    if (plVar4 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      if (lVar3 != 0) {
        FUN_0504825c(lVar3,param_2,param_3);
        goto LAB_050d71ec;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


