/*
FUNCTION_NAME: Firebase.AppUtilPINVOKE$$FutureString_GetResult
ENTRY_POINT: 037353c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Firebase_AppUtilPINVOKE__FutureString_GetResult(long *param_1,ulong param_2,byte *param_3)

{
  byte bVar1;
  undefined *puVar2;
  long in_x9;
  byte *pbVar3;
  long in_x10;
  int in_w11;
  
  puVar2 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
  param_2 = param_2 | in_x10 << 0x31;
  pbVar3 = (byte *)(in_x9 + 8);
  if (in_w11 < 0) {
    if (pbVar3 != param_3) {
      param_2 = param_2 | (ulong)((int)*(char *)(in_x9 + 8) & 0x7f) << 0x38;
      pbVar3 = (byte *)(in_x9 + 9);
      if (-1 < *(char *)(in_x9 + 8)) goto LAB_037352f4;
      if (pbVar3 != param_3) {
        bVar1 = *pbVar3;
        if ((bVar1 & 0x7e) == 0) {
          if (-1 < (char)bVar1) {
            *param_1 = in_x9 + 10;
            return param_2 | (ulong)bVar1 << 0x3f;
          }
          if ((byte *)(in_x9 + 10) == param_3) goto LAB_03735424;
        }
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getULEB128","malformed uleb128 expression");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
LAB_03735424:
    fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
            "libunwind: %s - %s\n","getULEB128","truncated uleb128 expression");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_037352f4:
  *param_1 = (long)pbVar3;
  return param_2;
}


