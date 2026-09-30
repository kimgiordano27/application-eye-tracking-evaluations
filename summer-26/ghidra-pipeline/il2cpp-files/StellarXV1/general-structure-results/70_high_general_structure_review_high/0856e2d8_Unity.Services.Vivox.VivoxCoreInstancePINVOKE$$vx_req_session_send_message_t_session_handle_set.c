/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_send_message_t_session_handle_set
ENTRY_POINT: 0856e2d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_send_message_t_session_handle_set
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  
  lVar1 = FUN_05c26ab8(param_2,param_3,*param_1);
  lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
  if ((lVar2 != 0) && (FUN_05c28444(lVar2,unaff_w20,*(undefined8 *)PTR_DAT_0932eda8), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x22) != '\0') {
      FUN_0856e62c();
    }
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_092bc528 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar1 = FUN_083f9008(0);
    if (lVar1 != 0) {
      FUN_0840e368(lVar1,0);
      FUN_0856e62c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


