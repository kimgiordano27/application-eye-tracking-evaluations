/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 071810d8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071811e8) */
/* WARNING: Removing unreachable block (ram,0x07181200) */
/* WARNING: Removing unreachable block (ram,0x07181210) */
/* WARNING: Removing unreachable block (ram,0x07181218) */
/* WARNING: Removing unreachable block (ram,0x07181224) */
/* WARNING: Removing unreachable block (ram,0x07181250) */
/* WARNING: Removing unreachable block (ram,0x07181234) */
/* WARNING: Removing unreachable block (ram,0x0718123c) */
/* WARNING: Removing unreachable block (ram,0x07181260) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  int unaff_w20;
  long unaff_x21;
  short *unaff_x23;
  long unaff_x24;
  undefined8 uVar6;
  long lVar7;
  int unaff_w25;
  long unaff_x26;
  int iVar8;
  long lVar9;
  long in_stack_00000008;
  
  uVar6 = *(undefined8 *)(unaff_x24 + 0x408);
  iVar8 = unaff_w25 + 1;
  do {
    sVar1 = *unaff_x23;
    sVar3 = 0x30;
    if (sVar1 != 0) {
      unaff_x23 = unaff_x23 + 1;
      sVar3 = sVar1;
    }
    if (*(char *)(unaff_x26 + 0x200) == '\0') {
      FUN_03d2d2b0(uVar6);
      *(undefined1 *)(unaff_x26 + 0x200) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_07181364;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_06ff15f4();
    }
    iVar8 = iVar8 + -1;
  } while (1 < iVar8);
  if (*unaff_x23 == 0) goto LAB_071812d4;
  if (in_stack_00000008 == 0) {
LAB_07181368:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar7 = *(long *)(in_stack_00000008 + 0x38);
  if (DAT_09843015 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091fa408);
    DAT_09843015 = '\x01';
  }
  if (lVar7 == 0) goto LAB_07181368;
  if (*(int *)(lVar7 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar2) goto LAB_071811ec;
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_07181364:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar9 = *(long *)(unaff_x21 + 8);
    uVar5 = FUN_06fcd2c8(lVar7,0,0);
    *(undefined2 *)(lVar9 + (long)(int)uVar2 * 2) = uVar5;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
  }
  else {
LAB_071811ec:
    FUN_06ff1720();
  }
  puVar4 = PTR_DAT_091fa408;
  sVar1 = *unaff_x23;
  while (sVar1 != 0) {
    if (*(char *)(unaff_x26 + 0x200) == '\0') {
      FUN_03d2d2b0(puVar4);
      *(undefined1 *)(unaff_x26 + 0x200) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_07181364;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_06ff15f4();
    }
    unaff_x23 = unaff_x23 + 1;
    sVar1 = *unaff_x23;
  }
LAB_071812d4:
  if (unaff_w20 == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07181720();
  return;
}


