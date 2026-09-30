/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$.ctor
ENTRY_POINT: 05ddb610
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


int Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer___ctor
              (ulong param_1,ulong param_2)

{
  ulong uVar1;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  int iVar2;
  
  do {
    uVar1 = FUN_05ddb7c8(param_1,param_2);
    if ((uVar1 & 1) != 0) {
      return unaff_w25;
    }
    while( true ) {
      iVar2 = unaff_w25;
      if (unaff_w20 == iVar2) {
        return unaff_w20;
      }
      param_1 = FUN_05dbceec();
      if ((int)(uint)param_1 < 0) {
        return iVar2;
      }
      unaff_w25 = iVar2 + 1;
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)(unaff_w21 + iVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(short *)(unaff_x22 + (long)(unaff_w21 + iVar2) * 2 + 0x20) = (short)param_1;
      if (unaff_w24 == 0) break;
      if (unaff_w24 == ((uint)param_1 & 0xffff)) {
        return iVar2 + 1;
      }
    }
    param_2 = param_1 & 0xffffffff;
  } while( true );
}


