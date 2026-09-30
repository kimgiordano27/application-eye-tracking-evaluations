/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 061d6820
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeXNode(long param_1)

{
  long lVar1;
  long *unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar3;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    param_1 = *unaff_x21;
  }
  if (**(char **)(param_1 + 0xb8) == '\0') {
    lVar3 = unaff_x19[0x18];
    uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
    lVar1 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07daa500);
    FUN_0618f720(lVar1,lVar3,uVar2,0);
  }
  else {
    lVar1 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07daa500);
    FUN_0618f4b0(lVar1,0);
  }
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x140) = (char)unaff_x19[2];
    thunk_FUN_03749f34(0);
    thunk_FUN_03749f34();
    unaff_x19[7] = lVar1;
    thunk_FUN_037aeb94();
    uVar2 = *unaff_x20;
    thunk_FUN_03749f34();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


