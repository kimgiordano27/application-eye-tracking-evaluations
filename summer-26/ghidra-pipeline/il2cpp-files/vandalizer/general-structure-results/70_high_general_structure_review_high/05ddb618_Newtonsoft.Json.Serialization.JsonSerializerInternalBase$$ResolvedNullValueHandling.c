/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ResolvedNullValueHandling
ENTRY_POINT: 05ddb618
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling(void)

{
  ulong uVar1;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  int iVar2;
  
  while( true ) {
    iVar2 = unaff_w25;
    if (unaff_w20 == iVar2) {
      return unaff_w20;
    }
    uVar1 = FUN_05dbceec();
    if ((int)(uint)uVar1 < 0) break;
    unaff_w25 = iVar2 + 1;
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)(unaff_w21 + iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(short *)(unaff_x22 + (long)(unaff_w21 + iVar2) * 2 + 0x20) = (short)uVar1;
    if (unaff_w24 == 0) {
      uVar1 = FUN_05ddb7c8(uVar1,uVar1 & 0xffffffff);
      if ((uVar1 & 1) != 0) {
        return unaff_w25;
      }
    }
    else if (unaff_w24 == ((uint)uVar1 & 0xffff)) {
      return iVar2 + 1;
    }
  }
  return iVar2;
}


