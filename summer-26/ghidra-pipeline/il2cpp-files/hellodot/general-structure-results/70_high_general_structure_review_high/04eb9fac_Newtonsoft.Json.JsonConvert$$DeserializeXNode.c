/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 04eb9fac
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  long *plVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar5 = FUN_034757a8();
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_065e2370 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar9 = *(long *)PTR_DAT_065e2358;
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978();
    }
    puVar1 = PTR_DAT_065e1b98;
    plVar10 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    uVar4 = FUN_03bad054(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1b98);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar7 = (**(code **)(*plVar10 + 0x178))(plVar10,uVar4,*(undefined8 *)(*plVar10 + 0x180));
    FUN_03bad054(&stack0x00000010,*(undefined8 *)puVar1);
    uVar8 = (**(code **)(*unaff_x20 + 0x2e8))();
    uVar3 = in_stack_00000018;
    uVar2 = in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065e5f48 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)PTR_DAT_065e5f48);
    }
    lVar6 = FUN_04eba148(uVar8,uVar7,uVar2,uVar3);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_065c8b20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar6 = (**(code **)(*unaff_x20 + 0x2e8))();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04f428ec(0x26,0);
    }
  }
  return lVar6;
}


