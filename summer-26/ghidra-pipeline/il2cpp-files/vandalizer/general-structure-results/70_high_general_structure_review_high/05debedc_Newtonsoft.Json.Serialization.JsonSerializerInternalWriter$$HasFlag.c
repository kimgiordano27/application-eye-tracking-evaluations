/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 05debedc
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x25;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  
  puVar2 = PTR_DAT_0759d328;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05debc88 with catch @ 05dec074 */
    FUN_031f2390();
  }
  if ((param_1 & 1) == 0) {
    FUN_05c95a6c();
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    in_stack_00000010 = FUN_05e18bc4(&stack0x00000010,0);
  }
  else {
    FUN_05c95a6c();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05d860e8(0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x25);
  }
  uStack000000000000000c = FUN_05e1859c(&stack0x00000010,0);
  puVar1 = PTR_DAT_0759b388;
  if (unaff_w20 < 2) {
    thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&stack0x0000000c);
  }
  else {
    thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&stack0x0000000c);
    FUN_05c96cc4();
    if (unaff_w20 == 2) {
      return;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_05d860e8(0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x25);
    }
    uStack000000000000000c = FUN_05e1862c(&stack0x00000010,0);
    thunk_FUN_0322ed78(*(undefined8 *)(puVar1 + 0x48),&stack0x0000000c);
  }
  FUN_05c96cc4();
  return;
}


