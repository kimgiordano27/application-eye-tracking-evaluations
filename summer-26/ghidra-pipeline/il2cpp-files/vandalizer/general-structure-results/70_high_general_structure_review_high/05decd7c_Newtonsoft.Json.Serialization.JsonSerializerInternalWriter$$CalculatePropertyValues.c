/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
ENTRY_POINT: 05decd7c
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
          (undefined8 param_1)

{
  short sVar1;
  ulong uVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined2 unaff_w22;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_1;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar2 = FUN_05e1862c(&stack0x00000008,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x25);
  }
  if (0x20 < unaff_w20) {
    sVar1 = (short)((uVar2 & 0xffffffff) / 10);
    *(short *)(unaff_x19 + 0x3e) = sVar1 + 0x30;
    *(short *)(unaff_x19 + 0x40) = (short)uVar2 + sVar1 * -10 + 0x30;
    *(undefined2 *)(unaff_x19 + 0x3c) = 0x3a;
    uVar2 = FUN_05e1859c(&stack0x00000008,0);
    sVar1 = (short)((uVar2 & 0xffffffff) / 10);
    *(undefined2 *)(unaff_x19 + 0x36) = unaff_w22;
    *(short *)(unaff_x19 + 0x38) = sVar1 + 0x30;
    *(short *)(unaff_x19 + 0x3a) = (short)uVar2 + sVar1 * -10 + 0x30;
                    /* try { // try from 05dece38 to 05eecf43 has its CatchHandler @ 05dece38
                       catch() { ... } // from try @ 05dece38 with catch @ 05dece38
                       catch() { ... } // from try @ 05ded010 with catch @ 05dece38
                       catch() { ... } // from try @ 05ded070 with catch @ 05dece38
                       catch() { ... } // from try @ 05ded1a8 with catch @ 05dece38
                       catch() { ... } // from try @ 05ded1e4 with catch @ 05dece38
                       catch() { ... } // from try @ 05ded254 with catch @ 05dece38 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


