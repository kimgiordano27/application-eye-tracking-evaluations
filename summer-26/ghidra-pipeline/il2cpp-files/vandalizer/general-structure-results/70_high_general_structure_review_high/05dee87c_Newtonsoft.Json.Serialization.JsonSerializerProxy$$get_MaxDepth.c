/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MaxDepth
ENTRY_POINT: 05dee87c
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MaxDepth(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  uVar2 = FUN_05d7bb84(unaff_w20,0);
  if ((uVar2 & 1) == 0) {
    *(int *)(unaff_x19 + 2) = unaff_w21;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar1 = FUN_05df7844();
    if (unaff_w21 < iVar1) {
      if (*(uint *)(unaff_x19 + 1) <= *(uint *)(unaff_x19 + 2)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined2 *)((long)unaff_x19 + 0x14) =
           *(undefined2 *)(*unaff_x19 + (long)(int)*(uint *)(unaff_x19 + 2) * 2);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


