/*
FUNCTION_NAME: Unity.Entities.EntityQueryBuilder$$TransferArray
ENTRY_POINT: 03090d6c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


void Unity_Entities_EntityQueryBuilder__TransferArray(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x23;
  undefined8 *puVar6;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *puVar7;
  long unaff_x26;
  undefined8 *puVar8;
  long unaff_x27;
  undefined8 *puVar9;
  long unaff_x28;
  undefined8 *puVar10;
  long unaff_x29;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0x560);
  puVar10 = *(undefined8 **)(unaff_x28 + 0x628);
  puVar9 = *(undefined8 **)(unaff_x27 + 0x960);
  puVar8 = *(undefined8 **)(unaff_x26 + 0xb98);
  puVar7 = *(undefined8 **)(unaff_x25 + 0xba0);
  puVar6 = *(undefined8 **)(unaff_x23 + 0x5a8);
  if ((*(byte *)(unaff_x29 + 0x513) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc3560);
    FUN_01ab69ac(PTR_DAT_03cc3568);
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_CalculateEntityCount_00000A44_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_CalculateFilteredChunkIndexArray_00000A42_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc15b0);
    FUN_01ab69ac(PTR_DAT_03cde960);
    FUN_01ab69ac(PTR_DAT_03cbeba0);
    FUN_01ab69ac(PTR_DAT_03cc0628);
    FUN_01ab69ac(PTR_DAT_03cbeb98);
                    /* try { // try from 03090e0c to 03190e0f has its CatchHandler @ 03090f64 */
    FUN_01ab69ac(
                Unity_Entities_ChunkIterationUtility_CopyComponentArrayToChunksWithFilter_00000A3B_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc15a8);
    *(undefined1 *)(unaff_x29 + 0x513) = 1;
  }
                    /* try { // try from 03090e24 to 03190e27 has its CatchHandler @ 03090f74 */
  uVar3 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_0219a4f0(uVar3,*puVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x10),uVar3);
  FUN_027b3d9c(param_1,0);
  uVar3 = thunk_FUN_01a89e68(*puVar10);
  FUN_02215594(uVar3,param_2,*puVar9);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x18),uVar3);
  uVar3 = thunk_FUN_01a89e68(*puVar10);
  FUN_02215594(uVar3,param_2,*puVar9);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x20),uVar3);
  uVar3 = thunk_FUN_01a89e68(*puVar8);
  Animancer_AnimancerState__OnSetIsPlaying(uVar3,*puVar7);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x28),uVar3);
  uVar3 = thunk_FUN_01a89e68(*puVar6);
  Animancer_AnimancerState__OnSetIsPlaying(uVar3,*(undefined8 *)PTR_DAT_03cc15b0);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x30),uVar3);
  plVar5 = (long *)(param_1 + 0x38);
  *plVar5 = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,param_3);
  puVar2 = 
  Unity_Entities_ChunkIterationUtility_CalculateFilteredChunkIndexArray_00000A42_PostfixBurstDelegate_var
  ;
  puVar1 = 
  Unity_Entities_ChunkIterationUtility_CalculateEntityCount_00000A44_PostfixBurstDelegate_var;
  if (*plVar5 != 0) {
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                Unity_Entities_ChunkIterationUtility_CopyComponentArrayToChunksWithFilter_00000A3B_PostfixBurstDelegate_var
                              );
    FUN_02215594(uVar3,param_2,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x40),uVar3);
    uVar3 = thunk_FUN_01a89e68(*puVar6);
    FUN_02215594(uVar3,param_2,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x48),uVar3);
    return;
  }
  return;
}


