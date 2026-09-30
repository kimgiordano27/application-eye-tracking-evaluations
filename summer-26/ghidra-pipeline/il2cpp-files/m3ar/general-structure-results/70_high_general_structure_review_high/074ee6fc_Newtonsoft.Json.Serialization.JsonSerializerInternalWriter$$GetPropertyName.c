/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 074ee6fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long in_x9;
  short *psVar4;
  short *psVar5;
  int iVar6;
  ulong unaff_x20;
  ulong uVar7;
  int unaff_w21;
  long unaff_x22;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined4 *)(in_x9 + -0x10) = 0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  if ((-1 < unaff_w21 + -1) || ((int)unaff_x20 != 0)) {
    psVar4 = (short *)(unaff_x22 + 0x12);
    iVar6 = unaff_w21 + -2;
    do {
      do {
        uVar3 = (uint)unaff_x20;
        uVar7 = (unaff_x20 & 0xffffffff) / 10;
        psVar5 = psVar4 + -1;
        *psVar4 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        psVar4 = psVar5;
        unaff_x20 = uVar7;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  FUN_07387080();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


