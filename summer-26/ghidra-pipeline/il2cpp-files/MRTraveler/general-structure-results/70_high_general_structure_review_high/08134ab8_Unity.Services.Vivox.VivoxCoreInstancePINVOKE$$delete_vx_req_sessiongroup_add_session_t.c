/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_add_session_t
ENTRY_POINT: 08134ab8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_add_session_t
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xdbb) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e81208);
    *(undefined1 *)(unaff_x22 + 0xdbb) = 1;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e81208);
    FUN_0718cfa8(lVar1,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(long *)(lVar1 + 0xd8) = param_3;
    thunk_FUN_03d233cc((long *)(lVar1 + 0xd8),param_3);
  }
  FUN_08134894(param_1,param_2,lVar1);
  return;
}


