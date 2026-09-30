/*
FUNCTION_NAME: FUN_0382339c
ENTRY_POINT: 0382339c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_12
*/


void FUN_0382339c(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 *__dest;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_170 [80];
  undefined1 auStack_120 [80];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 local_58 [2];
  
  local_58[0] = param_4;
  if ((DAT_04137dd2 & 1) == 0) {
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
                Method_System_Collections_Generic_Dictionary<PlayerRef,_List<NetworkObject>>_get_Item__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__);
    DAT_04137dd2 = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_c0._8_8_ = 0;
  local_c0._0_8_ = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_d0._8_8_ = 0;
  local_d0._0_8_ = 0;
  if ((*(int *)(param_2 + 2) != 0) && (*(int *)((long)param_2 + 0x14) != 0)) {
    uVar6 = FUN_027bdc44(*param_2,0);
    uVar4 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)
                          Method_System_Collections_Generic_Dictionary<Type,_OrderNode>__ctor__);
    }
    local_70 = FUN_01fffc80(uVar6,uVar4,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Clear__
                           );
    uVar6 = FUN_027bdc44(param_2[1],0);
    local_80 = FUN_01fffc80(uVar6,*(undefined4 *)((long)param_2 + 0x14),
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_Add__
                           );
    puVar2 = 
    Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
    ;
    iVar3 = FUN_022337d8(local_70,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                        );
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
    ;
    if (iVar3 != 0) {
      iVar3 = FUN_022337d8(local_80,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_TryGetValue__
                          );
      if (iVar3 != 0) {
        uStack_98 = 0;
        local_a0 = 0;
        local_88 = 0;
        local_90 = 0;
        local_c0._8_8_ = 0;
        local_c0._0_8_ = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        local_d0._8_8_ = 0;
        local_d0._0_8_ = 0;
        lVar8 = *(long *)(param_1 + 0xd0);
        uVar4 = FUN_022337d8(local_70,*(undefined8 *)puVar2);
        if (lVar8 != 0) {
          local_d0 = FUN_020a358c(lVar8,uVar4,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TryGetValue__
                                 );
          lVar8 = *(long *)(param_1 + 0xd8);
          uVar4 = FUN_022337d8(local_80,*(undefined8 *)puVar1);
          if (lVar8 != 0) {
            local_c0 = FUN_020a358c(lVar8,uVar4,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>__ctor__
                                   );
            local_b0 = param_6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&local_b0,param_6);
            uStack_98 = *(undefined8 *)(param_1 + 0xc0);
            __dest = (undefined8 *)(param_1 + 0x30);
            local_90 = ((ulong)CONCAT31(local_90._5_3_,param_7) & 0xffffff01) << 0x20;
            local_88 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
            memcpy(__dest,local_d0,0x50);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x50,0);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<PlayerRef,_List<NetworkObject>>_get_Item__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar3 = FUN_038c9b80(local_58,0);
            if (-1 < iVar3) {
              *(undefined4 *)(param_1 + 0x70) = param_8;
              *(undefined4 *)(param_1 + 0x5c) = local_58[0];
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_038237a0;
              FUN_0380caa8(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),param_3,
                           local_58[0],param_5 & 1,0);
            }
            iVar3 = FUN_022337d8(__dest,*(undefined8 *)puVar2);
            iVar5 = FUN_022337d8(local_70,*(undefined8 *)puVar2);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
            }
            FUN_0367b7bc(iVar3 == iVar5,0);
            lVar8 = param_1 + 0x40;
            iVar3 = FUN_022337d8(lVar8,*(undefined8 *)puVar1);
            iVar5 = FUN_022337d8(local_80,*(undefined8 *)puVar1);
            FUN_0367b7bc(iVar3 == iVar5,0);
            FUN_022335a4(__dest,local_70._0_8_,local_70._8_8_,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<ArrayContainer_TypeRankPair,_ArrayContainer>_Add__
                        );
            FUN_022335a4(lVar8,local_80._0_8_,local_80._8_8_,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__ctor__
                        );
            lVar7 = *(long *)(param_1 + 0x18);
            memcpy(auStack_120,__dest,0x50);
            if (lVar7 != 0) {
              memcpy(auStack_170,auStack_120,0x50);
              FUN_01b5f01c(lVar7,auStack_170,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<TimeReporter_TimerType,_string>_Add__
                          );
              iVar3 = *(int *)(param_1 + 0x118);
              iVar5 = FUN_022337d8(__dest,*(undefined8 *)puVar2);
              *(int *)(param_1 + 0x118) = iVar5 + iVar3;
              iVar3 = *(int *)(param_1 + 0x11c);
              iVar5 = FUN_022337d8(lVar8,*(undefined8 *)puVar1);
              *(int *)(param_1 + 0x11c) = iVar5 + iVar3;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *__dest = 0;
              *(undefined8 *)(param_1 + 0x48) = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined8 *)(param_1 + 0x58) = 0;
              *(undefined8 *)(param_1 + 0x50) = 0;
              *(undefined8 *)(param_1 + 0x68) = 0;
              *(undefined8 *)(param_1 + 0x60) = 0;
              *(undefined8 *)(param_1 + 0x78) = 0;
              *(undefined8 *)(param_1 + 0x70) = 0;
              return;
            }
          }
        }
LAB_038237a0:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
  }
  return;
}


