/*
FUNCTION_NAME: OVRPermissionsRequester$$IsPermissionGranted
ENTRY_POINT: 0367bd68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
OVRPermissionsRequester__IsPermissionGranted(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long in_x9;
  int *in_x10;
  float extraout_s0;
  float fVar3;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined8 extraout_var_00;
  undefined8 uVar6;
  undefined1 auVar4 [16];
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0367bf10:
      iVar1 = (*(code *)*puVar2)();
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                          );
      }
      FUN_0407bb40();
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
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0367bf10;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


