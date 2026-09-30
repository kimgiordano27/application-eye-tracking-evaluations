/*
FUNCTION_NAME: FUN_064eb1c0
ENTRY_POINT: 064eb1c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_3
*/


void FUN_064eb1c0(long param_1,undefined8 param_2,uint param_3)

{
  if ((DAT_06dcd5d9 & 1) == 0) {
    FUN_02d965b8(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    DAT_06dcd5d9 = 1;
  }
  if ((param_3 & 0x8010) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    if ((param_3 >> 4 & 1) != 0) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_064eb28c;
        FUN_064eb290(*(long *)(param_1 + 0x48),param_2,param_3);
      }
      else {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_064eb28c;
        FUN_03c23c0c(*(long *)(param_1 + 0x28),param_2,
                     *(undefined8 *)
                      Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
      }
    }
    if ((param_3 >> 0xf & 1) != 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_03c23c0c(*(long *)(param_1 + 0x30),param_2,
                     *(undefined8 *)
                      Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
        return;
      }
LAB_064eb28c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  return;
}


