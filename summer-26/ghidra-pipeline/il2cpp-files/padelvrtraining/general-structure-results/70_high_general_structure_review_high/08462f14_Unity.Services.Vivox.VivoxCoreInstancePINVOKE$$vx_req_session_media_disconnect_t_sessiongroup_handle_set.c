/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_disconnect_t_sessiongroup_handle_set
ENTRY_POINT: 08462f14
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_disconnect_t_sessiongroup_handle_set
               (void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x23;
  
  uVar1 = FUN_051bdc50();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_03d2d394(*unaff_x23,2);
                    /* try { // try from 08462f28 to 085630b3 has its CatchHandler @ 08462f28
                       catch() { ... } // from try @ 08462f28 with catch @ 08462f28
                       catch() { ... } // from try @ 08463310 with catch @ 08462f28
                       catch() { ... } // from try @ 0846333c with catch @ 08462f28
                       catch() { ... } // from try @ 084633bc with catch @ 08462f28
                       catch() { ... } // from try @ 0846342c with catch @ 08462f28
                       catch() { ... } // from try @ 0846346c with catch @ 08462f28 */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_03d2ee44(), lVar3 == 0)) {
      uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar4,0);
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(long *)(lVar2 + 0x20) = unaff_x21;
    thunk_FUN_03d1023c();
    if ((unaff_x19 != 0) && (lVar3 = thunk_FUN_03d2ee44(), lVar3 == 0)) {
      uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar4,0);
    }
    if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(long *)(lVar2 + 0x28) = unaff_x19;
    thunk_FUN_03d1023c();
    unaff_x19 = FUN_051bde30();
  }
  return unaff_x19;
}


