/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 05de4fa8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
          (long param_1)

{
  ulong uVar1;
  bool in_CY;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  undefined4 unaff_w26;
  ulong unaff_x28;
  undefined8 in_stack_00000008;
  
  if (!in_CY) {
    uVar2 = 0;
    if ((((unaff_w20 < 1000) && (unaff_w21 < 0x3c)) && (unaff_w22 < 0x3c)) &&
       ((unaff_w23 < 0x18 &&
        (unaff_w24 <=
         *(int *)(in_x9 + 0x20 + (ulong)unaff_w25 * 4) -
         *(int *)(in_x9 + 0x20 + (unaff_x28 & 0xffffffff) * 4))))) {
      if (*(int *)(param_1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(param_1);
      }
      lVar3 = FUN_05de05c4(unaff_w26,unaff_w25,unaff_w24);
      lVar4 = FUN_05de0828(unaff_w23,unaff_w22,unaff_w21);
      uVar1 = lVar3 + (ulong)unaff_w20 * 10000 + lVar4;
      if (uVar1 < 0x2bca2875f4374000) {
        in_stack_00000008 = 0;
        FUN_05ddf838(&stack0x00000008,uVar1,0);
        uVar2 = 1;
        *unaff_x19 = in_stack_00000008;
      }
      else {
        uVar2 = 0;
      }
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


