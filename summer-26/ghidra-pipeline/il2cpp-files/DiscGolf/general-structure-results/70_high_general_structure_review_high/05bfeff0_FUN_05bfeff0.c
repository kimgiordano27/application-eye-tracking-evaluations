/*
FUNCTION_NAME: FUN_05bfeff0
ENTRY_POINT: 05bfeff0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_05bfeff0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long local_48;
  
  if ((DAT_06dc265b & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QuerySessionsResults>_SetStateMachine__
                );
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__);
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_GetValue__
                );
    DAT_06dc265b = 1;
  }
  puVar1 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
  local_48 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_05ae2158(param_1,0);
    uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05bca640(uVar3,param_2,0);
    if (lVar2 != 0) {
      uVar4 = FUN_04e95158(lVar2,uVar3,&local_48,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QuerySessionsResults>_SetStateMachine__
                          );
      puVar5 = (undefined8 *)
               Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>__ctor__
      ;
      if ((uVar4 & 1) != 0) {
        if ((local_48 == 0) || (*(long *)(local_48 + 0x30) == 0)) goto LAB_05bff194;
        uVar4 = FUN_05bca8a4(*(long *)(local_48 + 0x30),0);
        puVar5 = (undefined8 *)
                 Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_GetValue__
        ;
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
      lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                                );
      FUN_05b022d8(lVar2,*puVar5,param_2,param_5,param_6,param_7,0);
      if (lVar2 != 0) {
        if (param_4 == 0) {
          uVar3 = thunk_FUN_02dfd288(
                                    Method_System_Collections_Generic_Dictionary<string,_int>__ctor__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(lVar2,uVar3);
        }
        uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseSlider<int>_set_direction__);
        FUN_05afc4dc(uVar3,lVar2,0);
        (**(code **)(param_4 + 0x18))
                  (*(undefined8 *)(param_4 + 0x40),param_3,uVar3,*(undefined8 *)(param_4 + 0x28));
      }
      return;
    }
  }
LAB_05bff194:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


