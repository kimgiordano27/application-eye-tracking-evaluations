/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 04d41c80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d41ef8) */

undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if ((param_1 != 0) && (lVar2 = FUN_04de265c(param_1,0), lVar2 != 0)) {
    uVar3 = FUN_04df2a40(lVar2,0);
    if ((uVar3 & 1) == 0) {
      iVar1 = 0;
    }
    else {
      in_stack_00000038._4_1_ = 1;
      in_stack_00000008 = 0;
      iVar1 = FUN_04d4163c();
      lVar2 = in_stack_00000030;
      in_stack_00000038._4_1_ = iVar1 == unaff_w21 || in_stack_00000030 != 0;
      if (iVar1 == unaff_w21 || in_stack_00000030 != 0) {
        if (in_stack_00000030 == 0) {
          uVar4 = FUN_04d41a98();
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_06312bb0 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar4 = FUN_03337a58(lVar2,*(undefined8 *)PTR_DAT_06332098);
        }
        if (in_stack_00000038._4_1_ == '\0') {
          return uVar4;
        }
        if (in_stack_00000040 != 0) {
          FUN_04de299c(in_stack_00000040,0);
          return uVar4;
        }
        goto LAB_04d41dfc;
      }
    }
    in_stack_00000008 = 0;
    if ((*(uint *)(unaff_x20 + 0x18) < (uint)(iVar1 + unaff_w22)) ||
       (*(uint *)(unaff_x20 + 0x18) - (iVar1 + unaff_w22) < (uint)(unaff_w21 - iVar1))) {
      FUN_04d9bcc4(0);
    }
    thunk_FUN_02bb0e9c(&stack0x00000008);
    _in_stack_00000020 = FUN_04d41f5c();
    uVar4 = FUN_0415e818(&stack0x00000020,*(undefined8 *)PTR_DAT_06332450);
    return uVar4;
  }
LAB_04d41dfc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


