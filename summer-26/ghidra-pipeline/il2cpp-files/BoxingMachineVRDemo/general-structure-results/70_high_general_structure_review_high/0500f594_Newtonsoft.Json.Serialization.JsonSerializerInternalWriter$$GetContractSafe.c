/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContractSafe
ENTRY_POINT: 0500f594
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContractSafe(long param_1)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  long unaff_x19;
  short *unaff_x20;
  int iVar5;
  int unaff_w26;
  int unaff_w27;
  
  if (*(int *)(**(long **)(param_1 + 0x6d8) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  iVar5 = unaff_w27;
  if (-unaff_w26 <= unaff_w27) {
    iVar5 = -unaff_w26;
  }
  FUN_04ea5ce8();
  puVar4 = PTR_DAT_067714a8;
  if (0 < unaff_w27 - iVar5) {
    iVar5 = (unaff_w27 - iVar5) + 1;
    do {
      sVar1 = *unaff_x20;
      sVar3 = 0x30;
      if (sVar1 != 0) {
        unaff_x20 = unaff_x20 + 1;
        sVar3 = sVar1;
      }
      if (DAT_06b78666 == '\0') {
        FUN_02d6084c(puVar4);
        DAT_06b78666 = '\x01';
      }
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
        if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_04ea5848();
      }
      iVar5 = iVar5 + -1;
    } while (1 < iVar5);
  }
  return;
}


