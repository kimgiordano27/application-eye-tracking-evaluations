/*
FUNCTION_NAME: FUN_038237a4
ENTRY_POINT: 038237a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_12
*/


void FUN_038237a4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar6;
  undefined4 uVar5;
  undefined8 uVar7;
  long lVar8;
  undefined1 (*__src) [16];
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [80];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_04137dd3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>_Add__)
    ;
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
    DAT_04137dd3 = 1;
  }
  auVar12._8_8_ = local_78._8_8_;
  auVar12._0_8_ = local_78._0_8_;
  auVar11._8_8_ = local_88._8_8_;
  auVar11._0_8_ = local_88._0_8_;
  if ((*(int *)(param_2 + 2) != 0) &&
     (local_88 = auVar11, local_78 = auVar12, *(int *)((long)param_2 + 0x14) != 0)) {
    uVar7 = FUN_027bdc44(*param_2,0);
    uVar5 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)
                          Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__);
    }
    local_78 = FUN_01fffc80(uVar7,uVar5,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                           );
    uVar7 = FUN_027bdc44(param_2[1],0);
    local_88 = FUN_01fffc80(uVar7,*(undefined4 *)((long)param_2 + 0x14),
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                           );
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
    ;
    iVar4 = FUN_022337d8(local_78,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                        );
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
    ;
    if (iVar4 != 0) {
      iVar4 = FUN_022337d8(local_88,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                          );
      if (iVar4 != 0) {
        local_60 = 0;
        local_68 = 0;
        lVar8 = *(long *)(param_1 + 0xd0);
        uVar5 = FUN_022337d8(local_78,*(undefined8 *)puVar3);
        if (lVar8 != 0) {
          auVar11 = FUN_020a358c(lVar8,uVar5,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                                );
          lVar8 = *(long *)(param_1 + 0xd8);
          uVar5 = FUN_022337d8(local_88,*(undefined8 *)puVar2);
          if (lVar8 != 0) {
            auVar12 = FUN_020a358c(lVar8,uVar5,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>__ctor__
                                  );
            __src = (undefined1 (*) [16])(param_1 + 0x30);
            *__src = auVar11;
            pauVar9 = (undefined1 (*) [16])(param_1 + 0x40);
            *pauVar9 = auVar12;
            uVar7 = DAT_00d36da8;
            *(undefined8 *)(param_1 + 0x50) = local_68;
            uVar10 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
            *(undefined4 *)(param_1 + 0x58) = local_60;
            *(undefined4 *)(param_1 + 0x5c) = param_3;
            *(undefined8 *)(param_1 + 0x60) = 0;
            *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xc0);
            *(undefined8 *)(param_1 + 0x70) = uVar7;
            *(undefined8 *)(param_1 + 0x78) = uVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(param_1 + 0x50),0);
            iVar4 = FUN_022337d8(__src,*(undefined8 *)puVar3);
            iVar6 = FUN_022337d8(local_78,*(undefined8 *)puVar3);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
            }
            FUN_0367b7bc(iVar4 == iVar6,0);
            iVar4 = FUN_022337d8(pauVar9,*(undefined8 *)puVar2);
            iVar6 = FUN_022337d8(local_88,*(undefined8 *)puVar2);
            FUN_0367b7bc(iVar4 == iVar6,0);
            FUN_022335a4(__src,local_78._0_8_,local_78._8_8_,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_Add__
                        );
            FUN_022335a4(pauVar9,local_88._0_8_,local_88._8_8_,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                        );
            lVar8 = *(long *)(param_1 + 0x18);
            memcpy(auStack_d8,__src,0x50);
            if (lVar8 != 0) {
              memcpy(auStack_128,auStack_d8,0x50);
              FUN_01b5f01c(lVar8,auStack_128,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>_Add__
                          );
              iVar4 = *(int *)(param_1 + 0x118);
              iVar6 = FUN_022337d8(__src,*(undefined8 *)puVar3);
              *(int *)(param_1 + 0x118) = iVar6 + iVar4;
              iVar4 = *(int *)(param_1 + 0x11c);
              iVar6 = FUN_022337d8(pauVar9,*(undefined8 *)puVar2);
              *(int *)(param_1 + 0x11c) = iVar6 + iVar4;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined8 *)*__src = 0;
              *(undefined8 *)(param_1 + 0x48) = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined8 *)(param_1 + 0x58) = 0;
              *(undefined8 *)(param_1 + 0x50) = 0;
              *(undefined8 *)(param_1 + 0x68) = 0;
              *(undefined8 *)(param_1 + 0x60) = 0;
              *(undefined8 *)(param_1 + 0x78) = 0;
              *(undefined8 *)(param_1 + 0x70) = 0;
              goto LAB_03823b08;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
  }
LAB_03823b08:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


