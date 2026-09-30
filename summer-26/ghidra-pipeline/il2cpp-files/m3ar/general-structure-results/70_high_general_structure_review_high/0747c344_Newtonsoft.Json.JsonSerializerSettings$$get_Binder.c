/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Binder
ENTRY_POINT: 0747c344
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Binder(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w26;
  int unaff_w27;
  int unaff_w28;
  int iStack000000000000000c;
  
  while( true ) {
    iVar3 = 1;
    while( true ) {
      unaff_w26 = unaff_w26 + 1;
      uVar1 = FUN_07363804();
      uVar1 = uVar1 & 0xffff;
      if (uVar1 < 0x3a) {
        iVar2 = uVar1 - 0x16;
      }
      else if (uVar1 < 0x5b) {
        iVar2 = uVar1 - 0x41;
      }
      else if (uVar1 < 0x7b) {
        iVar2 = uVar1 - 0x61;
      }
      else {
        iVar2 = *(int *)(unaff_x21 + 0x14);
      }
      iVar6 = *(int *)(unaff_x21 + 0x18);
      if (*(int *)(unaff_x21 + 0x18) + unaff_w24 < unaff_w28) {
        iVar6 = unaff_w28 - unaff_w24;
        if (*(int *)(unaff_x21 + 0x1c) + unaff_w24 <= unaff_w28) {
          iVar6 = *(int *)(unaff_x21 + 0x1c);
        }
      }
      unaff_w27 = unaff_w27 + iVar2 * iVar3;
      if (iVar2 < iVar6) break;
      unaff_w28 = *(int *)(unaff_x21 + 0x14) + unaff_w28;
      iVar3 = (*(int *)(unaff_x21 + 0x14) - iVar6) * iVar3;
    }
    FUN_073719f8();
    unaff_w24 = FUN_0747c5b8();
    iVar2 = FUN_073719f8();
    iVar3 = 0;
    if (iVar2 + 1 != 0) {
      iVar3 = unaff_w27 / (iVar2 + 1);
    }
    unaff_w22 = iVar3 + unaff_w22;
    iVar3 = FUN_073719f8();
    if (unaff_w22 < 0x80) break;
    iVar3 = iVar3 + 1;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = unaff_w27 / iVar3;
    }
    FUN_07379b34();
    unaff_w27 = (unaff_w27 - iVar2 * iVar3) + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w26) {
                    /* WARNING: Could not recover jumptable at 0x0747c48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x23 + 0x168))();
      return;
    }
    unaff_w28 = *(int *)(unaff_x21 + 0x14);
  }
  iStack000000000000000c = unaff_w19 + unaff_w26;
  uVar4 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),&stack0x0000000c);
  uVar5 = thunk_FUN_04097b88(PTR_DAT_08fa1258);
  uVar4 = FUN_0735fe18(uVar5,uVar4,0);
  thunk_FUN_04097b88(PTR_DAT_08f66298);
  uVar5 = thunk_FUN_0406deb8();
  FUN_0744a62c(uVar5,uVar4,0);
  uVar4 = thunk_FUN_04097b88(PTR_DAT_08fa1260);
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar5,uVar4);
}


