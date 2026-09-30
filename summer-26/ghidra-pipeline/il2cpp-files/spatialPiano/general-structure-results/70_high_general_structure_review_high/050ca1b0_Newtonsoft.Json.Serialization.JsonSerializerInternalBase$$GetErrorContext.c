/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 050ca1b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  short sVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  int iVar9;
  long *unaff_x28;
  undefined8 in_stack_00000048;
  
  uVar1 = *unaff_x22;
  uVar2 = unaff_x22[1];
  uVar3 = *(undefined4 *)(unaff_x22 + 2);
  if (*(int *)(**(long **)(param_1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(**(long **)(param_1 + 0xe0));
  }
  uVar6 = FUN_050cae0c(uVar1,uVar2,uVar3);
  if ((uVar6 & 1) == 0) {
    thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x88),&stack0x00000004);
    FUN_050cd75c();
    FUN_04f7beac();
    return 0;
  }
  *(int *)(unaff_x22 + 2) = *(int *)(unaff_x22 + 2) + in_stack_00000048._4_4_ + -1;
  lVar7 = FUN_04f7bf2c();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(lVar7 + 0x10)) {
    iVar9 = 0;
    do {
      sVar5 = FUN_04f69818(lVar7,iVar9,0);
      if ((sVar5 == 0x20) && (*(char *)(unaff_x21 + 0x12) != '\0')) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050ccbd4();
      }
      else {
        FUN_04f69818(lVar7,iVar9,0);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*unaff_x28);
        }
        uVar6 = FUN_050cc800();
        if ((uVar6 & 1) == 0) {
          FUN_050cd700();
          return 0;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar7 + 0x10));
  }
  uVar8 = *(uint *)(unaff_x19 + 0x24);
  if ((uVar8 >> 0xb & 1) == 0) {
    return 1;
  }
  if ((uVar8 >> 0xd & 1) != 0) {
    uVar6 = thunk_FUN_04f6d944(lVar7,*(undefined8 *)PTR_DAT_067daf78,0);
    uVar8 = *(uint *)(unaff_x19 + 0x24);
    if ((uVar6 & 1) != 0) goto LAB_050ca304;
  }
  if ((uVar8 >> 0xe & 1) == 0) {
    return 1;
  }
  uVar6 = thunk_FUN_04f6d944(lVar7,*(undefined8 *)PTR_DAT_067daf50,0);
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  uVar8 = *(uint *)(unaff_x19 + 0x24);
LAB_050ca304:
  puVar4 = PTR_DAT_067c93a8;
  *(uint *)(unaff_x19 + 0x24) = uVar8 | 0x100;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar4;
  }
  *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar7 + 0xb8);
  return 1;
}


