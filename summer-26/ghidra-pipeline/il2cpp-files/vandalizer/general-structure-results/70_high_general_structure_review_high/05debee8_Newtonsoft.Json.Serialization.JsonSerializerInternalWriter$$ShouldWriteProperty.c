/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 05debee8
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty(ulong param_1)

{
  undefined *puVar1;
  int unaff_w20;
  long *unaff_x22;
  long *unaff_x25;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  
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
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 05debf44 to 05eebf8b has its CatchHandler @ 05dec078 */
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
                    /* try { // try from 05debf8c to 05eec01f has its CatchHandler @ 05deb9b4 */
    thunk_FUN_0322ed78(*(undefined8 *)(PTR_DAT_0759b388 + 0x48),&stack0x0000000c);
    FUN_05c96cc4();
    if (unaff_w20 == 2) {
      return;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
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


