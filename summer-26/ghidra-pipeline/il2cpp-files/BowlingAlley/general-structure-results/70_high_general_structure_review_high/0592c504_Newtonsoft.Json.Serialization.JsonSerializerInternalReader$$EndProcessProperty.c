/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 0592c504
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0592c5b4) */
/* WARNING: Removing unreachable block (ram,0x0592c5cc) */
/* WARNING: Removing unreachable block (ram,0x0592c5dc) */
/* WARNING: Removing unreachable block (ram,0x0592c5e4) */
/* WARNING: Removing unreachable block (ram,0x0592c5f0) */
/* WARNING: Removing unreachable block (ram,0x0592c61c) */
/* WARNING: Removing unreachable block (ram,0x0592c600) */
/* WARNING: Removing unreachable block (ram,0x0592c608) */
/* WARNING: Removing unreachable block (ram,0x0592c62c) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined1 unaff_w19;
  int unaff_w20;
  long unaff_x21;
  short *unaff_x23;
  long lVar6;
  long unaff_x26;
  int unaff_w28;
  long lVar7;
  short unaff_w29;
  long in_stack_00000008;
  
  while (unaff_w28 = unaff_w28 + -1, 1 < unaff_w28) {
    sVar1 = *unaff_x23;
    sVar3 = unaff_w29;
    if (sVar1 != 0) {
      unaff_x23 = unaff_x23 + 1;
      sVar3 = sVar1;
    }
    if (*(char *)(unaff_x26 + 0x7fe) == '\0') {
      thunk_FUN_032e1da0();
      *(undefined1 *)(unaff_x26 + 0x7fe) = unaff_w19;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0592c730;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar3;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_057c5d34();
    }
  }
  if (*unaff_x23 == 0) goto LAB_0592c6a0;
  if (in_stack_00000008 == 0) {
LAB_0592c734:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar6 = *(long *)(in_stack_00000008 + 0x38);
  if (DAT_076d53fa == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07291038);
    DAT_076d53fa = '\x01';
  }
  if (lVar6 == 0) goto LAB_0592c734;
  if (*(int *)(lVar6 + 0x10) == 1) {
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar2) goto LAB_0592c5b8;
    if (*(uint *)(unaff_x21 + 0x10) <= uVar2) {
LAB_0592c730:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar7 = *(long *)(unaff_x21 + 8);
    uVar5 = FUN_057a62b4(lVar6,0,0);
    *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2) = uVar5;
    *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
  }
  else {
LAB_0592c5b8:
    FUN_057c5e60();
  }
  puVar4 = PTR_DAT_07291038;
  sVar1 = *unaff_x23;
  while (sVar1 != 0) {
    if (*(char *)(unaff_x26 + 0x7fe) == '\0') {
      thunk_FUN_032e1da0(puVar4);
      *(undefined1 *)(unaff_x26 + 0x7fe) = 1;
    }
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar2 < (int)*(uint *)(unaff_x21 + 0x10)) {
      if (*(uint *)(unaff_x21 + 0x10) <= uVar2) goto LAB_0592c730;
      *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar2 * 2) = sVar1;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
    }
    else {
      FUN_057c5d34();
    }
    unaff_x23 = unaff_x23 + 1;
    sVar1 = *unaff_x23;
  }
LAB_0592c6a0:
  if (unaff_w20 != 0) {
    if (*(int *)(*(long *)PTR_DAT_072969e0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0592caec();
    return;
  }
  return;
}


