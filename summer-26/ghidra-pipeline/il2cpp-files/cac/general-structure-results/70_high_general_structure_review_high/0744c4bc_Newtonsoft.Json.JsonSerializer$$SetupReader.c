/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 0744c4bc
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__SetupReader(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  int iStack000000000000000c;
  
  while( true ) {
    while( true ) {
      uVar1 = FUN_073213d0();
      uVar1 = uVar1 & 0xffff;
      if (uVar1 < 0x3a) {
        iVar3 = uVar1 - 0x16;
      }
      else if (uVar1 < 0x5b) {
        iVar3 = uVar1 - 0x41;
      }
      else if (uVar1 < 0x7b) {
        iVar3 = uVar1 - 0x61;
      }
      else {
        iVar3 = *(int *)(unaff_x21 + 0x14);
      }
      iVar2 = *(int *)(unaff_x21 + 0x18);
      if (*(int *)(unaff_x21 + 0x18) + unaff_w24 < unaff_w28) {
        iVar2 = unaff_w28 - unaff_w24;
        if (*(int *)(unaff_x21 + 0x1c) + unaff_w24 <= unaff_w28) {
          iVar2 = *(int *)(unaff_x21 + 0x1c);
        }
      }
      unaff_w27 = unaff_w27 + iVar3 * unaff_w29;
      if (iVar3 < iVar2) break;
      unaff_w26 = unaff_w26 + 1;
      unaff_w28 = *(int *)(unaff_x21 + 0x14) + unaff_w28;
      unaff_w29 = (*(int *)(unaff_x21 + 0x14) - iVar2) * unaff_w29;
    }
    FUN_07331f94();
    unaff_w24 = FUN_0744c728();
    iVar2 = FUN_07331f94();
    iVar3 = 0;
    if (iVar2 + 1 != 0) {
      iVar3 = unaff_w27 / (iVar2 + 1);
    }
    unaff_w22 = iVar3 + unaff_w22;
    iVar3 = FUN_07331f94();
    if (unaff_w22 < 0x80) break;
    iVar3 = iVar3 + 1;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = unaff_w27 / iVar3;
    }
    FUN_0733a0a4();
    unaff_w27 = (unaff_w27 - iVar2 * iVar3) + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w26) {
                    /* WARNING: Could not recover jumptable at 0x0744c5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x23 + 0x168))();
      return;
    }
    unaff_w28 = *(int *)(unaff_x21 + 0x14);
    unaff_w26 = unaff_w26 + 1;
    unaff_w29 = 1;
  }
  iStack000000000000000c = unaff_w19 + unaff_w26;
  uVar4 = thunk_FUN_03f4e2c4(*(undefined8 *)(PTR_DAT_0910b550 + 0x48),&stack0x0000000c);
  uVar5 = thunk_FUN_03f786f8(PTR_DAT_09131150);
  uVar4 = FUN_0731d5f8(uVar5,uVar4,0);
  thunk_FUN_03f786f8(PTR_DAT_0910e988);
  uVar5 = thunk_FUN_03f4e68c();
  FUN_07419a00(uVar5,uVar4,0);
  uVar4 = thunk_FUN_03f786f8(PTR_DAT_09131158);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar5,uVar4);
}


