/*
FUNCTION_NAME: OVRPermissionsRequester$$BuildPermissionCallbacks
ENTRY_POINT: 0367c274
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


undefined1  [16]
OVRPermissionsRequester__BuildPermissionCallbacks(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  undefined4 unaff_w19;
  float extraout_s0;
  float fVar3;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 uVar6;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar4 [16];
  
  piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
      goto LAB_0367c2b0;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0367c2b0:
  (*(code *)*puVar1)();
  switch(unaff_w19) {
  case 0:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0407bb40();
    fVar3 = extraout_s0;
    uVar5 = extraout_var;
    uVar6 = extraout_var_02;
    break;
  case 1:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar3 = (float)FUN_0407bb40();
    goto LAB_0367c3e4;
  case 2:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0407bc20();
    fVar3 = extraout_s0_00;
    uVar5 = extraout_var_00;
    uVar6 = extraout_var_03;
    break;
  case 3:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar3 = (float)FUN_0407bc20();
    goto LAB_0367c3e4;
  case 4:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar3 = (float)FUN_0407bbb0();
LAB_0367c3e4:
    fVar3 = -fVar3;
    uVar5 = 0;
    uVar6 = 0;
    break;
  case 5:
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0407bbb0();
    fVar3 = extraout_s0_01;
    uVar5 = extraout_var_01;
    uVar6 = extraout_var_04;
    break;
  default:
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    fVar3 = **(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    uVar5 = 0;
    uVar6 = 0;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = fVar3;
  auVar4._8_8_ = uVar6;
  return auVar4;
}


