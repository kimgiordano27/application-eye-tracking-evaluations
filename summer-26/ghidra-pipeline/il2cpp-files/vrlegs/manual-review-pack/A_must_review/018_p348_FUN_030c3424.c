/*
FUNCTION_NAME: FUN_030c3424
ENTRY_POINT: 030c3424
PROGRAM: vrlegs-libil2cpp.so
SCORE: 194
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_4
*/


long FUN_030c3424(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                 undefined2 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_03cc9e10;
  local_48 = param_3;
  if ((DAT_0412b6dc & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdabc0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cc44b8);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentQueue<TaskReplicator_Replica>_TypeInfo);
    FUN_01ab69ac(
                System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                );
    FUN_01ab69ac(
                System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
                );
    FUN_01ab69ac(UnityEngine_UIElements_BaseField<Bounds>_TypeInfo);
    FUN_01ab69ac(System_Collections_Concurrent_ConcurrentQueue<ILog>_TypeInfo);
    DAT_0412b6dc = 1;
  }
  local_50 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_027d75b4(&local_48,0);
  uVar4 = local_48;
  puVar3 = System_Collections_Concurrent_ConcurrentQueue<TaskReplicator_Replica>_TypeInfo;
  puVar2 = System_Collections_Concurrent_ConcurrentQueue<ILog>_TypeInfo;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = FUN_030bcccc(uVar4,param_5);
    return lVar6;
  }
  lVar6 = *(long *)System_Collections_Concurrent_ConcurrentQueue<ILog>_TypeInfo;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar2;
  }
  uVar5 = FUN_020b2864(*(undefined8 *)(lVar6 + 0xb8),&local_50,*(undefined8 *)puVar3);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_027b3d9c(lVar6,0);
    local_50 = lVar6;
  }
  if (local_50 != 0) {
    *(undefined8 *)(local_50 + 0x18) = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(local_50 + 0x18),param_1);
    if (local_50 != 0) {
      *(undefined8 *)(local_50 + 0x20) = local_48;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(local_50 + 0x20),0);
      if ((param_4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = OVRManager__SetFoveatedRenderingLevel(&local_48,0);
        uVar4 = local_48;
        lVar6 = local_50;
        puVar1 = 
        System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
        ;
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)
                   System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
          ;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *(long *)puVar1;
          }
          lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          if (lVar10 == 0) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = *(long *)puVar1;
            }
            uVar11 = **(undefined8 **)(lVar7 + 0xb8);
            lVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
            FUN_02060754(lVar10,uVar11,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar8 = lVar10;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar10);
          }
          lVar7 = local_50;
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(&local_68,uVar4,lVar10,lVar7);
          if (lVar6 == 0) goto LAB_030c3738;
          *(undefined8 *)(lVar6 + 0x38) = local_58;
          *(undefined8 *)(lVar6 + 0x30) = uStack_60;
          *(undefined8 *)(lVar6 + 0x28) = local_68;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x28,0);
        }
      }
      lVar6 = local_50;
      if (*(int *)(*(long *)PTR_DAT_03cc44b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(param_2,lVar6);
      if (local_50 != 0) {
        lVar6 = local_50 + 0x48;
        lVar7 = *(long *)(*(long *)UnityEngine_UIElements_BaseField<Bounds>_TypeInfo + 0x20);
                    /* try { // try from 030c36f0 to 031c37b3 has its CatchHandler @ 030c36f0
                       catch() { ... } // from try @ 030c36f0 with catch @ 030c36f0
                       catch() { ... } // from try @ 030c3838 with catch @ 030c36f0
                       catch() { ... } // from try @ 030c3a44 with catch @ 030c36f0
                       catch() { ... } // from try @ 030c3a7c with catch @ 030c36f0
                       catch() { ... } // from try @ 030c3af0 with catch @ 030c36f0
                       catch() { ... } // from try @ 030c3b20 with catch @ 030c36f0
                       catch() { ... } // from try @ 030c3b58 with catch @ 030c36f0
                       catch() { ... } // from try @ 030c3c10 with catch @ 030c36f0 */
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01a46ff8();
        }
        puVar9 = (undefined2 *)
                 thunk_FUN_01a59484(lVar6,*(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80
                                                   ) + 0x40);
        *param_5 = *puVar9;
        return local_50;
      }
    }
  }
LAB_030c3738:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


