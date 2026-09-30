/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ResolveIsReference
ENTRY_POINT: 05debe2c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  int unaff_w20;
  undefined8 uVar5;
  long *unaff_x25;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x25;
  }
  uVar5 = **(undefined8 **)(lVar3 + 0xb8);
  lVar3 = *unaff_x25;
                    /* try { // try from 05debeb8 to 05eebec3 has its CatchHandler @ 05dec080 */
  in_stack_00000010 = uVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x25;
  }
                    /* try { // try from 05debecc to 05eebf3f has its CatchHandler @ 05dec0a8 */
  uVar4 = FUN_05e192e0(uVar5,**(undefined8 **)(lVar3 + 0xb8),0);
  puVar2 = PTR_DAT_0759d328;
  if (unaff_x19 != 0) {
    if ((uVar4 & 1) == 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


