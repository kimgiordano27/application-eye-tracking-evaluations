/*
FUNCTION_NAME: FUN_033a8038
ENTRY_POINT: 033a8038
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 FUN_033a8038(int param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  if ((DAT_04832339 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<DisableDeviceCommand>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<DualMotorRumbleCommand>__
                      );
    DAT_04832339 = 1;
  }
  if (param_1 == 0) {
    uVar3 = *(undefined8 *)
             Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<DisableDeviceCommand>__;
  }
  else {
    local_38 = *(undefined8 *)Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__;
    uStack_30 = 0xffffffffffffffff;
    local_28 = param_1;
    lVar2 = FUN_0359ff90(&local_38,0);
    puVar1 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<DualMotorRumbleCommand>__;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_034127bc(lVar2,0);
    uVar3 = FUN_03405678(*(undefined8 *)puVar1,uVar3,0);
  }
  return uVar3;
}


