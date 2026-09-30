/*
FUNCTION_NAME: FUN_03099f9c
ENTRY_POINT: 03099f9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


void FUN_03099f9c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_03cc1608;
  if ((DAT_0412b541 & 1) == 0) {
    FUN_01ab69ac(
                Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnDestroy_000001C9_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnUpdate_000001C8_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc1608);
    FUN_01ab69ac(
                Unity_Entities_StructuralChange_AddComponentChunks_00000F8A_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_StructuralChange_AddComponentEntitiesBatch_00000F86_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_StructuralChange_AddComponentEntity_00000F88_PostfixBurstDelegate_var
                );
    DAT_0412b541 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = FUN_026e65b8(uVar4,0);
  puVar1 = 
  Unity_Entities_StructuralChange_AddComponentEntitiesBatch_00000F86_PostfixBurstDelegate_var;
  if (lVar2 != 0) {
    uVar4 = System_IO_TextReader_<>c___cctor(lVar2,0);
    uVar3 = thunk_FUN_025bd1c0(uVar4,*(undefined8 *)puVar1,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = thunk_FUN_025bd1c0(uVar4,*(undefined8 *)
                                        Unity_Entities_StructuralChange_AddComponentEntity_00000F88_PostfixBurstDelegate_var
                                 ,0);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      if ((uVar3 & 1) == 0) {
        lVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                    Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnDestroy_000001C9_PostfixBurstDelegate_var
                                  );
        FUN_027b3d9c(lVar2,0);
        *(undefined8 *)(lVar2 + 0x10) = uVar4;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar2 + 0x10),uVar4);
        FUN_0309a5b8(lVar2);
        return;
      }
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Unity_Entities_StructuralChange_AddComponentChunks_00000F8A_PostfixBurstDelegate_var
                                );
      FUN_0309a2a0(lVar2,uVar4);
      if (lVar2 != 0) {
        FUN_0309a334(lVar2);
        return;
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)
                                  Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnUpdate_000001C8_PostfixBurstDelegate_var
                                );
      uVar4 = FUN_026cb178(uVar5,0);
                    /* try { // try from 0309a084 to 0319a143 has its CatchHandler @ 0309a084
                       catch() { ... } // from try @ 0309a084 with catch @ 0309a084
                       catch() { ... } // from try @ 0309a264 with catch @ 0309a084
                       catch() { ... } // from try @ 0309a2d8 with catch @ 0309a084
                       catch() { ... } // from try @ 0309a334 with catch @ 0309a084
                       catch() { ... } // from try @ 0309a3a8 with catch @ 0309a084 */
      FUN_0309c120(lVar2,uVar5,uVar4);
      if (lVar2 != 0) {
        FUN_0309a160(lVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


