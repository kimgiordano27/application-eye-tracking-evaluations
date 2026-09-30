/*
FUNCTION_NAME: FUN_030912cc
ENTRY_POINT: 030912cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;telemetry_or_network_hits_20;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_030912cc(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_54;
  
  puVar2 = 
  Unity_Entities_ChunkIterationUtility_GatherEntitiesWithoutFilter_00000A32_PostfixBurstDelegate_var
  ;
  puVar4 = 
  Unity_Entities_ChunkIterationUtility_GatherEntitiesWithFilter_00000A31_PostfixBurstDelegate_var;
  puVar3 = 
  Unity_Entities_ChunkIterationUtility_GatherComponentDataWithoutFilter_00000A37_PostfixBurstDelegate_var
  ;
  puVar1 = 
  Unity_Entities_ChunkIterationUtility_GatherComponentDataWithFilter_00000A36_PostfixBurstDelegate_var
  ;
                    /* try { // try from 03091314 to 0319131b has its CatchHandler @ 03091414 */
  if ((DAT_0412b517 & 1) == 0) {
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_GatherEntitiesWithFilter_00000A31_PostfixBurstDelegate_var
                );
                    /* try { // try from 03091330 to 0319133b has its CatchHandler @ 03091438 */
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_GatherEntitiesWithoutFilter_00000A32_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_GetEnabledMask_00000A49_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Unity_Entities_ChunkIterationUtility_IsEmpty_00000A41_PostfixBurstDelegate_var);
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_SetEnabledBitsOnAllChunks_00000A4B_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Uri_var);
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_ToArchetypeChunkList_00000A2F_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_GatherComponentDataWithFilter_00000A36_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A30_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cecee0);
    FUN_01ab69ac(Cinemachine_CinemachineImpulseDefinition_ImpulseShapes_var);
    FUN_01ab69ac(PTR_DAT_03cc6580);
    FUN_01ab69ac(PTR_DAT_03cbdf20);
    FUN_01ab69ac(
                Unity_Physics_Systems_ColliderBlobCleanupSystem___codegen__OnCreate_00000A99_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cd8108);
    FUN_01ab69ac(PTR_DAT_03cce9f8);
    FUN_01ab69ac(PTR_DAT_03cc1828);
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_GatherComponentDataWithoutFilter_00000A37_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Runtime_Remoting_Channels_IClientChannelSinkProvider_var);
    FUN_01ab69ac(Unity_Entities_ICleanupSharedComponentData_var);
    DAT_0412b517 = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_021de1ac(uVar9,param_1,*(undefined8 *)puVar3,0);
  uVar9 = FUN_01f6d39c(param_4,uVar9,*(undefined8 *)puVar4);
  uVar9 = FUN_01f70920(uVar9,*(undefined8 *)puVar2);
  if (param_2 != 0) {
    uVar5 = FUN_01f73ff4(param_2,uVar9,0x8893,
                         *(undefined8 *)
                          Unity_Entities_ChunkIterationUtility_GetEnabledMask_00000A49_PostfixBurstDelegate_var
                        );
    puVar3 = System_Uri_var;
    puVar1 = PTR_DAT_03cc6580;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar9 = FUN_022195a8(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_03cc6580);
      uVar6 = FUN_01f73ff4(param_2,uVar9,0x8892,*(undefined8 *)puVar3);
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar10 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
        if (lVar10 != 0) {
          FUN_02215a88(lVar10,uVar6,&local_68,*(undefined8 *)PTR_DAT_03cd8108);
          FUN_030929e0(CONCAT44(uStack_64,local_68),uVar9);
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar9 = FUN_022195a8(*(long *)(param_1 + 0x20),*(undefined8 *)puVar1);
            uVar7 = FUN_01f73ff4(param_2,uVar9,0x8892,*(undefined8 *)puVar3);
            puVar3 = 
            Unity_Entities_ChunkIterationUtility_SetEnabledBitsOnAllChunks_00000A4B_PostfixBurstDelegate_var
            ;
            puVar1 = PTR_DAT_03cc1828;
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar9 = FUN_022195a8(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_03cecee0);
              uVar8 = FUN_01f73ff4(param_2,uVar9,0x8892,*(undefined8 *)puVar3);
              puVar3 = 
              Unity_Entities_ChunkIterationUtility_IsEmpty_00000A41_PostfixBurstDelegate_var;
              local_70 = 0;
              if (*(long *)(param_1 + 0x40) != 0) {
                uVar9 = FUN_022195a8(*(long *)(param_1 + 0x40),
                                     *(undefined8 *)
                                      Cinemachine_CinemachineImpulseDefinition_ImpulseShapes_var);
                local_68 = FUN_01f73ff4(param_2,uVar9,0x8892,*(undefined8 *)puVar3);
                FUN_02241190(&local_70,&local_68,*(undefined8 *)puVar1);
              }
              puVar4 = 
              Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A30_PostfixBurstDelegate_var
              ;
              puVar3 = 
              Unity_Entities_ChunkIterationUtility_ToArchetypeChunkList_00000A2F_PostfixBurstDelegate_var
              ;
              local_78 = 0;
              if (*(long *)(param_1 + 0x48) != 0) {
                uVar9 = FUN_022195a8(*(long *)(param_1 + 0x48),
                                     *(undefined8 *)
                                      Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A30_PostfixBurstDelegate_var
                                    );
                local_68 = FUN_01f73ff4(param_2,uVar9,0x8892,*(undefined8 *)puVar3);
                FUN_02241190(&local_78,&local_68,*(undefined8 *)puVar1);
              }
              puVar2 = Unity_Entities_ICleanupSharedComponentData_var;
              local_80 = 0;
              lVar10 = *(long *)(param_1 + 0x30);
              if ((lVar10 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
                if (*(int *)(lVar10 + 0x18) == *(int *)(*(long *)(param_1 + 0x18) + 0x18)) {
                  uVar9 = FUN_022195a8(lVar10,*(undefined8 *)puVar4);
                  local_68 = FUN_01f73ff4(param_2,uVar9,0x8892,*(undefined8 *)puVar3);
                  FUN_02241190(&local_80,&local_68,*(undefined8 *)puVar1);
                }
                lVar10 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                FUN_0306b47c(lVar10,0);
                puVar1 = System_Runtime_Remoting_Channels_IClientChannelSinkProvider_var;
                if (lVar10 != 0) {
                  *(undefined4 *)(lVar10 + 0x14) = uVar5;
                  lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                  FUN_0306b454(lVar11,0);
                  puVar1 = PTR_DAT_03cce9f8;
                  if (lVar11 != 0) {
                    *(undefined4 *)(lVar11 + 0x10) = uVar6;
                    *(undefined4 *)(lVar11 + 0x14) = uVar7;
                    *(undefined4 *)(lVar11 + 0x1c) = uVar8;
                    local_68 = 0xffffffff;
                    FUN_022414f4(&local_70,&local_68,&local_54,*(undefined8 *)puVar1);
                    *(undefined4 *)(lVar11 + 0x28) = local_54;
                    local_68 = 0xffffffff;
                    FUN_022414f4(&local_78,&local_68,&local_54,*(undefined8 *)puVar1);
                    *(undefined4 *)(lVar11 + 0x2c) = local_54;
                    local_68 = 0xffffffff;
                    FUN_022414f4(&local_80,&local_68,&local_54,*(undefined8 *)puVar1);
                    *(undefined4 *)(lVar11 + 0x24) = local_54;
                    *(long *)(lVar10 + 0x18) = lVar11;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((long *)(lVar10 + 0x18),lVar11);
                    *(undefined4 *)(lVar10 + 0x20) = param_3;
                    *(undefined4 *)(lVar10 + 0x10) = 4;
                    return lVar10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


