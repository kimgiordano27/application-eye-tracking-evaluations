/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 04f9d490
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Deserialize(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(unaff_x20 + 0x38);
  lVar4 = *plVar3;
  thunk_FUN_02d6f164();
  if (lVar4 == 0) {
    if ((char)unaff_x19[0x16] == '\0') {
      FUN_02d66b58();
      *(undefined1 *)(unaff_x19 + 0x16) = 1;
    }
    puVar1 = PTR_DAT_06775f20;
    if (*(int *)(*(long *)PTR_DAT_06775f20 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b78ba0 == '\0') {
      FUN_02d6084c(PTR_DAT_06775f20);
      DAT_06b78ba0 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar1;
    }
    if (**(char **)(lVar4 + 0xb8) == '\0') {
      lVar5 = unaff_x19[0x18];
      uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06776098);
      FUN_04f56158(lVar4,lVar5,uVar2,0);
    }
    else {
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06776098);
      FUN_04f55ee8(lVar4,0);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *(char *)(lVar4 + 0x140) = (char)unaff_x19[2];
    thunk_FUN_02d6f164(0);
    thunk_FUN_02d6f164();
    unaff_x19[7] = lVar4;
    thunk_FUN_02dd37b4(plVar3,lVar4);
  }
  lVar4 = *plVar3;
  thunk_FUN_02d6f164();
  return lVar4;
}


