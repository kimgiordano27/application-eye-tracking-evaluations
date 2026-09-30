/*
FUNCTION_NAME: FUN_0374f5b8
ENTRY_POINT: 0374f5b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


void FUN_0374f5b8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_04538bb2 & 1) == 0) {
    FUN_01c5d288(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    DAT_04538bb2 = 1;
  }
  puVar1 = Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    uVar3 = *(undefined8 *)Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__;
    lVar2 = thunk_FUN_01c495e4(param_2,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_2,uVar3);
    }
    *(long *)(param_1 + 0x50) = lVar2;
    uVar3 = *(undefined8 *)puVar1;
    lVar2 = thunk_FUN_01c495e4(param_2,uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_2,uVar3);
    }
  }
  return;
}


