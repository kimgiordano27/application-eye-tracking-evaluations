/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Formatting
ENTRY_POINT: 05dee858
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting(void)

{
  undefined2 uVar1;
  char in_NG;
  bool in_CY;
  char in_OV;
  int iVar2;
  ulong uVar3;
  long *unaff_x19;
  int unaff_w21;
  long *unaff_x22;
  
  if (in_NG != in_OV) {
    if (in_CY) goto LAB_05dee8e0;
                    /* try { // try from 05dee86c to 05eee8a3 has its CatchHandler @ 05dee984 */
    uVar1 = *(undefined2 *)(*unaff_x19 + (long)unaff_w21 * 2);
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x88) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar3 = FUN_05d7bb84(uVar1,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
  }
  *(int *)(unaff_x19 + 2) = unaff_w21;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  iVar2 = FUN_05df7844();
  if (unaff_w21 < iVar2) {
    if (*(uint *)(unaff_x19 + 1) <= *(uint *)(unaff_x19 + 2)) {
LAB_05dee8e0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined2 *)((long)unaff_x19 + 0x14) =
         *(undefined2 *)(*unaff_x19 + (long)(int)*(uint *)(unaff_x19 + 2) * 2);
  }
  return 1;
}


