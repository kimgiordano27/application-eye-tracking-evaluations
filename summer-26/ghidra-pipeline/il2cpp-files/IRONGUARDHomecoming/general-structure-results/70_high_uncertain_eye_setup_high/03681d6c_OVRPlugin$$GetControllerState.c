/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 03681d6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin__GetControllerState
          (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  
  if ((DAT_04833e55 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    DAT_04833e55 = 1;
  }
  in_stack_00000028 = 0.0;
  in_stack_00000020 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  switch(param_4) {
  case 0:
  case 3:
  case 6:
    uVar1 = 1;
    break;
  case 1:
  case 2:
  case 7:
    uVar1 = 0;
    break;
  case 4:
  case 8:
    param_2 = (float)*(undefined8 *)(param_5 + 0xc);
    uStack0000000000000014 = (undefined4)*(undefined8 *)(param_5 + 0x14);
    uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar2 = (float)FUN_0407bb40();
    fVar2 = -fVar2;
    param_2 = -param_2;
    param_3 = -param_3;
    goto LAB_03681eb4;
  case 5:
    param_2 = (float)*(undefined8 *)(param_5 + 0xc);
    uStack0000000000000014 = (undefined4)*(undefined8 *)(param_5 + 0x14);
    uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar2 = (float)FUN_0407bb40();
    goto LAB_03681eb4;
  default:
    return ZEXT416(**(uint **)(*(long *)
                                Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                              0xb8));
  }
  fVar2 = (float)FUN_03681ee0(param_5,param_5 + 0x3c,uVar1,param_6);
LAB_03681eb4:
  in_stack_00000020 = CONCAT44(param_2,fVar2);
  in_stack_00000028 = param_3;
  auVar3 = FUN_03682044(param_5,&stack0x00000020,param_6);
  return auVar3;
}


