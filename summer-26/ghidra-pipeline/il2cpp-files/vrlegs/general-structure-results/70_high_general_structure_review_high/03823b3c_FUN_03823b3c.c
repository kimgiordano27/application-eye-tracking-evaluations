/*
FUNCTION_NAME: FUN_03823b3c
ENTRY_POINT: 03823b3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_12
*/


void FUN_03823b3c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_04137dd4 & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_Add__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>__ctor__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__);
    DAT_04137dd4 = 1;
  }
  if ((*(int *)(param_2 + 2) != 0) && (*(int *)((long)param_2 + 0x14) != 0)) {
    uVar4 = FUN_027bdc44(*param_2,0);
    uVar1 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)
                          Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__);
    }
    local_40 = FUN_01fffc80(uVar4,uVar1,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                           );
    uVar4 = FUN_027bdc44(param_2[1],0);
    local_50 = FUN_01fffc80(uVar4,*(undefined4 *)((long)param_2 + 0x14),
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                           );
    iVar3 = FUN_022337d8(local_40,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                        );
    if (iVar3 != 0) {
      iVar3 = FUN_022337d8(local_50,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                          );
      if (iVar3 != 0) {
        if (*(long *)(param_1 + 0xd0) != 0) {
          auVar5 = FUN_020a358c(*(long *)(param_1 + 0xd0),*(undefined4 *)(param_2 + 2),
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                               );
          *(undefined1 (*) [16])(param_1 + 0x30) = auVar5;
          if (*(long *)(param_1 + 0xd8) != 0) {
            auVar5 = FUN_020a358c(*(long *)(param_1 + 0xd8),*(undefined4 *)((long)param_2 + 0x14),
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>__ctor__
                                 );
            *(undefined8 *)(param_1 + 0x40) = auVar5._0_8_;
            puVar2 = 
            Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_Add__
            ;
            *(long *)(param_1 + 0x48) = auVar5._8_8_;
            FUN_022335a4(param_1 + 0x30,local_40._0_8_,local_40._8_8_,*(undefined8 *)puVar2);
            FUN_022335a4((undefined8 *)(param_1 + 0x40),local_50._0_8_,local_50._8_8_,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                        );
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
  }
  return;
}


