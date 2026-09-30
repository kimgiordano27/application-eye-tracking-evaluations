/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 054afc74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x21;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a01478);
    FUN_02d965b8(PTR_DAT_06a0d2f0);
    FUN_02d965b8(PTR_DAT_069fd9c8);
    FUN_02d965b8(PTR_DAT_06a21548);
    FUN_02d965b8(PTR_DAT_06a21508);
    *(undefined1 *)(unaff_x22 + 0xc9d) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06db59d4 == '\0') {
    FUN_02d965b8(PTR_DAT_069fd9c8);
    DAT_06db59d4 = '\x01';
  }
  puVar2 = PTR_DAT_06a21508;
  lVar5 = *unaff_x21;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
    lVar5 = *unaff_x21;
  }
  lVar3 = *(long *)puVar2;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_06a0d2f0;
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a01478);
    FUN_04be213c(lVar7,uVar8,*(undefined8 *)PTR_DAT_06a21548,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar7;
    LeanTween__value(plVar4,lVar7);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06db59d5 == '\0') {
    FUN_02d965b8(PTR_DAT_06a0d2f0);
    DAT_06db59d5 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (lVar5 != 0) {
    FUN_05567d68(lVar5,lVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


