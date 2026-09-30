/*
FUNCTION_NAME: Unity.Entities.EntityQueryManager$$Dispose
ENTRY_POINT: 03091354
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_8;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_Entities_EntityQueryManager__Dispose(void)

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
                    /* try { // try from 030913fc to 03191413 has its CatchHandler @ 03091438 */
  FUN_01ab69ac(System_Runtime_Remoting_Channels_IClientChannelSinkProvider_var);
  FUN_01ab69ac(Unity_Entities_ICleanupSharedComponentData_var);
                    /* catch() { ... } // from try @ 03091314 with catch @ 03091414
                       try { // try from 03091414 to 03191463 has its CatchHandler @ 03091158 */
                    /* catch() { ... } // from try @ 03091270 with catch @ 03091418 */
  *(undefined1 *)(unaff_x27 + 0x517) = 1;
                    /* catch() { ... } // from try @ 03091254 with catch @ 0309141c */
                    /* catch() { ... } // from try @ 03091234 with catch @ 03091420 */
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
                    /* catch() { ... } // from try @ 03091218 with catch @ 03091424 */
                    /* catch() { ... } // from try @ 03091290 with catch @ 03091428 */
  thunk_FUN_01a89e68(*unaff_x26);
                    /* catch() { ... } // from try @ 030911cc with catch @ 0309142c */
                    /* catch() { ... } // from try @ 030911e4 with catch @ 03091430 */
                    /* catch() { ... } // from try @ 030911ac with catch @ 03091434 */
                    /* catch() { ... } // from try @ 030912a0 with catch @ 03091438
                       catch() { ... } // from try @ 03091330 with catch @ 03091438
                       catch() { ... } // from try @ 030913fc with catch @ 03091438 */
  FUN_021de1ac();
                    /* catch() { ... } // from try @ 03091350 with catch @ 03091440 */
  uVar7 = FUN_01f6d39c();
  FUN_01f70920(uVar7,*unaff_x24);
  if (unaff_x20 != 0) {
                    /* try { // try from 03091464 to 03191467 has its CatchHandler @ 030914f4 */
                    /* try { // try from 03091468 to 0319147f has its CatchHandler @ 03091158 */
    uVar3 = FUN_01f73ff4();
    puVar1 = PTR_DAT_03cc6580;
    if (*(long *)(unaff_x21 + 0x18) != 0) {
                    /* try { // try from 03091480 to 03191497 has its CatchHandler @ 030914e0 */
      uVar7 = FUN_022195a8(*(long *)(unaff_x21 + 0x18),*(undefined8 *)PTR_DAT_03cc6580);
                    /* try { // try from 030914a0 to 031914a3 has its CatchHandler @ 030914d8 */
                    /* try { // try from 030914a4 to 031914b3 has its CatchHandler @ 030914d4 */
                    /* try { // try from 030914b4 to 031914c3 has its CatchHandler @ 03091158 */
      uVar4 = FUN_01f73ff4();
      if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* try { // try from 030914c4 to 031914d3 has its CatchHandler @ 030914e0 */
        lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
        if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 030914a4 with catch @ 030914d4 */
                    /* catch() { ... } // from try @ 030914a0 with catch @ 030914d8 */
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


