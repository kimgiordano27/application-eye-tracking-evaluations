/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Context
ENTRY_POINT: 05dee810
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Context(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  iVar3 = FUN_05d4fb94();
  if (iVar3 == 0) {
    uVar1 = *(int *)(unaff_x20 + 0x10) + (int)unaff_x19[2];
    if ((int)uVar1 < (int)*(uint *)(unaff_x19 + 1)) {
      if (*(uint *)(unaff_x19 + 1) <= uVar1) goto LAB_05dee8e0;
      uVar2 = *(undefined2 *)(*unaff_x19 + (long)(int)uVar1 * 2);
      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = FUN_05d7bb84(uVar2,0);
      if ((uVar5 & 1) != 0) goto LAB_05dee82c;
    }
    *(uint *)(unaff_x19 + 2) = uVar1;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar3 = FUN_05df7844();
    if ((int)uVar1 < iVar3) {
      if (*(uint *)(unaff_x19 + 1) <= *(uint *)(unaff_x19 + 2)) {
LAB_05dee8e0:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined2 *)((long)unaff_x19 + 0x14) =
           *(undefined2 *)(*unaff_x19 + (long)(int)*(uint *)(unaff_x19 + 2) * 2);
    }
    uVar4 = 1;
  }
  else {
LAB_05dee82c:
    uVar4 = 0;
  }
  return uVar4;
}


