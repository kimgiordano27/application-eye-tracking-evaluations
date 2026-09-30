/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 0367bc98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1  [16] OVRPlugin__get_eyeTrackingSupported(void)

{
  int iVar1;
  undefined8 *puVar2;
  float extraout_s0;
  float fVar3;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined8 extraout_var_00;
  undefined8 uVar6;
  undefined1 auVar4 [16];
  
  puVar2 = (undefined8 *)FUN_01ecb238();
  iVar1 = (*(code *)*puVar2)();
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
  }
  FUN_0407bc20();
  fVar3 = extraout_s0;
  uVar5 = extraout_var;
  uVar6 = extraout_var_00;
  if (iVar1 != 0) {
    fVar3 = -extraout_s0;
    uVar5 = 0;
    uVar6 = 0;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = fVar3;
  auVar4._8_8_ = uVar6;
  return auVar4;
}


