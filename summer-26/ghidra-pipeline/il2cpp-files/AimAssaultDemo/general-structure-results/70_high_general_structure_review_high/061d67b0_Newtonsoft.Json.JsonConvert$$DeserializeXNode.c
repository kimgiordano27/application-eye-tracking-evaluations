/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 061d67b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *(undefined1 *)(unaff_x20 + 0x5ac) = 1;
  plVar3 = unaff_x19 + 7;
  lVar4 = *plVar3;
  thunk_FUN_03749f34();
  if (lVar4 == 0) {
    if ((char)unaff_x19[0x16] == '\0') {
      FUN_03741828();
      *(undefined1 *)(unaff_x19 + 0x16) = 1;
    }
    puVar1 = PTR_DAT_07daa388;
    if (*(int *)(*(long *)PTR_DAT_07daa388 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (DAT_0825b386 == '\0') {
      FUN_0373b518(PTR_DAT_07daa388);
      DAT_0825b386 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar4 = *(long *)puVar1;
    }
    if (**(char **)(lVar4 + 0xb8) == '\0') {
      lVar5 = unaff_x19[0x18];
      uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
      lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07daa500);
      FUN_0618f720(lVar4,lVar5,uVar2,0);
    }
    else {
      lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07daa500);
      FUN_0618f4b0(lVar4,0);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(char *)(lVar4 + 0x140) = (char)unaff_x19[2];
    thunk_FUN_03749f34(0);
    thunk_FUN_03749f34();
    unaff_x19[7] = lVar4;
    thunk_FUN_037aeb94(plVar3,lVar4);
  }
  lVar4 = *plVar3;
  thunk_FUN_03749f34();
  return lVar4;
}


