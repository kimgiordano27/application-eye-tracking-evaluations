/*
FUNCTION_NAME: FUN_038cce80
ENTRY_POINT: 038cce80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_038cce80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68 [2];
  
  if ((DAT_04138452 & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_AnimancerState>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_AnimancerState>_MoveNext__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_AnimancerState>_get_Current__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary_Enumerator<object,_object>_MoveNext__)
    ;
    FUN_01ab69ac(
                Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_Enumerator<object,_object>_System_Collections_IEnumerator_Reset__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_MoveNext__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_Enumerator<object,_object>_get_Current__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>_MoveNext__
                );
    DAT_04138452 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_f8 = 0;
  lVar10 = FUN_038b38a0(param_1,0);
  puVar8 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>_MoveNext__;
  puVar7 = Method_System_Collections_Generic_Dictionary_Enumerator<object,_object>_get_Current__;
  puVar6 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<object,_object>_System_Collections_IEnumerator_Reset__
  ;
  puVar5 = Method_System_Collections_Generic_Dictionary_Enumerator<object,_object>_MoveNext__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_AnimancerState>_get_Current__
  ;
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_AnimancerState>_MoveNext__
  ;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_MoveNext__
  ;
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<MultiColumnCollectionHeader_SortedColumnState>_Dispose__
  ;
  if (lVar10 != 0) {
    Animancer_FadeGroup__get_TargetWeight
              (lVar10,&local_128,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>_MoveNext__
              );
    uVar12 = 0;
    uStack_88 = uStack_120;
    local_90 = local_128;
    local_80 = local_118;
    while (uVar11 = FUN_021b51c8(&local_90,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
      FUN_01b7a454(&local_90,&local_78,*(undefined8 *)puVar7);
      local_98 = local_78;
      uVar9 = FUN_038eb31c(&local_98,0);
      uVar12 = uVar9 ^ uVar12 * 0x18d;
    }
    FUN_021b51c4(&local_90,*(undefined8 *)puVar3);
    lVar10 = FUN_038b38f0(param_1,0);
    if (lVar10 != 0) {
      Animancer_FadeGroup__get_TargetWeight(lVar10,&local_128,*(undefined8 *)puVar8);
      uStack_a8 = uStack_120;
      local_b0 = local_128;
      local_a0 = local_118;
      while (uVar11 = FUN_021b51c8(&local_b0,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
        FUN_01b7a454(&local_b0,&local_70,*(undefined8 *)puVar7);
        local_b8 = local_70;
        uVar9 = FUN_038eb31c(&local_b8,0);
        uVar12 = uVar9 ^ uVar12 * 0x18d;
      }
      FUN_021b51c4(&local_b0,*(undefined8 *)puVar3);
      lVar10 = FUN_038b3940(param_1,0);
      if (lVar10 != 0) {
        Animancer_FadeGroup__get_TargetWeight
                  (lVar10,&local_128,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<MonoChunkParser_Chunk>_MoveNext__
                  );
        uStack_d8 = uStack_120;
        local_e0 = local_128;
        uStack_c8 = uStack_110;
        uStack_d0 = local_118;
        while (uVar11 = FUN_021b51c8(&local_e0,*(undefined8 *)puVar1), (uVar11 & 1) != 0) {
          FUN_01b7a454(&local_e0,&local_128,*(undefined8 *)puVar2);
          local_f0 = local_128;
          uStack_e8 = uStack_120;
          uVar9 = FUN_038f0684(&local_f0,0);
          uVar12 = uVar9 ^ uVar12 * 0x18d;
        }
        FUN_021b51c4(&local_e0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                    );
        lVar10 = FUN_038b3990(param_1,0);
        if (lVar10 != 0) {
          Animancer_FadeGroup__get_TargetWeight
                    (lVar10,&local_108,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>_Dispose__
                    );
          while (uVar11 = FUN_021b51c8(&local_108,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
            FUN_01b7a454(&local_108,local_68,*(undefined8 *)puVar6);
            uVar12 = local_68[0] ^ uVar12 * 0x18d;
          }
          FUN_021b51c4(&local_108,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_AnimancerState>_Dispose__
                      );
          return uVar12;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


