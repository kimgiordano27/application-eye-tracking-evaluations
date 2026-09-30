/*
FUNCTION_NAME: Unity.Entities.EntityQueryManager$$Destroy
ENTRY_POINT: 03091350
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;telemetry_or_network_hits_8
*/


long Unity_Entities_EntityQueryManager__Destroy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 03091350 to 031913fb has its CatchHandler @ 03091440 */
  FUN_01ab69ac();
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
  *(undefined1 *)(unaff_x27 + 0x517) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  thunk_FUN_01a89e68(*unaff_x26);
  FUN_021de1ac();
  uVar7 = FUN_01f6d39c();
  FUN_01f70920(uVar7,*unaff_x24);
  if (unaff_x20 != 0) {
    uVar3 = FUN_01f73ff4();
    puVar1 = PTR_DAT_03cc6580;
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      uVar7 = FUN_022195a8(*(long *)(unaff_x21 + 0x18),*(undefined8 *)PTR_DAT_03cc6580);
      uVar4 = FUN_01f73ff4();
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
        if (lVar8 != 0) {
          FUN_02215a88(lVar8,uVar4,&stack0x00000018,*(undefined8 *)PTR_DAT_03cd8108);
          FUN_030929e0(CONCAT44(uStack000000000000001c,uStack0000000000000018),uVar7);
          if (*(long *)(unaff_x21 + 0x20) != 0) {
            FUN_022195a8(*(long *)(unaff_x21 + 0x20),*(undefined8 *)puVar1);
            uVar5 = FUN_01f73ff4();
            puVar1 = PTR_DAT_03cc1828;
            if (*(long *)(unaff_x21 + 0x28) != 0) {
              FUN_022195a8(*(long *)(unaff_x21 + 0x28),*(undefined8 *)PTR_DAT_03cecee0);
              uVar6 = FUN_01f73ff4();
              in_stack_00000010 = 0;
              if (*(long *)(unaff_x21 + 0x40) != 0) {
                FUN_022195a8(*(long *)(unaff_x21 + 0x40),
                             *(undefined8 *)
                              Cinemachine_CinemachineImpulseDefinition_ImpulseShapes_var);
                uStack0000000000000018 = FUN_01f73ff4();
                FUN_02241190(&stack0x00000010,&stack0x00000018,*(undefined8 *)puVar1);
              }
              puVar2 = 
              Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A30_PostfixBurstDelegate_var
              ;
              in_stack_00000008 = 0;
              if (*(long *)(unaff_x21 + 0x48) != 0) {
                FUN_022195a8(*(long *)(unaff_x21 + 0x48),
                             *(undefined8 *)
                              Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A30_PostfixBurstDelegate_var
                            );
                uStack0000000000000018 = FUN_01f73ff4();
                FUN_02241190(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar1);
              }
              puVar1 = Unity_Entities_ICleanupSharedComponentData_var;
              lVar8 = *(long *)(unaff_x21 + 0x30);
              if ((lVar8 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
                if (*(int *)(lVar8 + 0x18) == *(int *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
                  FUN_022195a8(lVar8,*(undefined8 *)puVar2);
                  uStack0000000000000018 = FUN_01f73ff4();
                  FUN_02241190();
                }
                lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                FUN_0306b47c(lVar8,0);
                puVar1 = System_Runtime_Remoting_Channels_IClientChannelSinkProvider_var;
                if (lVar8 != 0) {
                  *(undefined4 *)(lVar8 + 0x14) = uVar3;
                  lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                  FUN_0306b454(lVar9,0);
                  puVar1 = PTR_DAT_03cce9f8;
                  if (lVar9 != 0) {
                    *(undefined4 *)(lVar9 + 0x10) = uVar4;
                    *(undefined4 *)(lVar9 + 0x14) = uVar5;
                    *(undefined4 *)(lVar9 + 0x1c) = uVar6;
                    uStack0000000000000018 = 0xffffffff;
                    FUN_022414f4(&stack0x00000010,&stack0x00000018,(long)&stack0x00000028 + 4,
                                 *(undefined8 *)puVar1);
                    *(undefined4 *)(lVar9 + 0x28) = in_stack_00000028._4_4_;
                    uStack0000000000000018 = 0xffffffff;
                    FUN_022414f4(&stack0x00000008,&stack0x00000018,(long)&stack0x00000028 + 4,
                                 *(undefined8 *)puVar1);
                    *(undefined4 *)(lVar9 + 0x2c) = in_stack_00000028._4_4_;
                    uStack0000000000000018 = 0xffffffff;
                    FUN_022414f4();
                    *(undefined4 *)(lVar9 + 0x24) = in_stack_00000028._4_4_;
                    *(long *)(lVar8 + 0x18) = lVar9;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((long *)(lVar8 + 0x18),lVar9);
                    *(undefined4 *)(lVar8 + 0x20) = unaff_w19;
                    *(undefined4 *)(lVar8 + 0x10) = 4;
                    return lVar8;
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


