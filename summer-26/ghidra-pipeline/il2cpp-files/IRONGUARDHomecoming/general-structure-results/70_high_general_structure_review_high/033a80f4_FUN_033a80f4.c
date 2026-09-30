/*
FUNCTION_NAME: FUN_033a80f4
ENTRY_POINT: 033a80f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6
*/


undefined8 FUN_033a80f4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_38;
  int local_34;
  
  puVar1 = Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<EnableDeviceCommand>__;
  if ((DAT_04832334 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<EnableIMECompositionCommand>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<GetHapticCapabilitiesCommand>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<EnableDeviceCommand>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryCanRunInBackground>__
                      );
    DAT_04832334 = 1;
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_01f51358((long *)(lVar2 + 0x10),param_1);
    *(undefined8 *)(lVar2 + 0x18) = param_2;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x18),param_2);
    plVar7 = (long *)(lVar2 + 0x20);
    *plVar7 = param_3;
    thunk_FUN_01f51358(plVar7,param_3);
    uVar3 = FUN_0340eec4(*(undefined8 *)(param_1 + 0x68),0);
    puVar1 = Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__;
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x7c) != '\0') {
        if (*(int *)(param_1 + 0x78) != 0) {
          local_34 = *(int *)(param_1 + 0x78);
          uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__,
                                     &local_34);
          local_38 = 0;
          uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_38);
          uVar4 = FUN_0340f2f0(*(undefined8 *)
                                Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<InitiateUserAccountPairingCommand>__
                               ,uVar4,uVar5,0);
          FUN_033a2c1c(1,0,uVar4);
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<EnableIMECompositionCommand>__
                                );
      System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                (uVar6,lVar2,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<GetHapticCapabilitiesCommand>__
                 ,0);
      FUN_033a82e0(param_1,uVar4,uVar5,uVar6);
      uVar4 = 1;
    }
    else {
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),0,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<QueryCanRunInBackground>__
                   ,*(undefined8 *)(lVar2 + 0x28));
      }
      uVar4 = 0;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


