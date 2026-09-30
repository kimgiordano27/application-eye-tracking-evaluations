/*
FUNCTION_NAME: FUN_065c8b9c
ENTRY_POINT: 065c8b9c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long FUN_065c8b9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((DAT_073a0721 & 1) == 0) {
    FUN_02fe925c(Unity_Entities_IComponentData_var);
    FUN_02fe925c(MeshCombineStudio_MeshColliderAdd_var);
    FUN_02fe925c(
                Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_PostfixBurstDelegate_var
                );
    FUN_02fe925c(
                Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnCreate_0000001A_PostfixBurstDelegate_var
                );
    FUN_02fe925c(UnityEngine_Mesh_var);
    FUN_02fe925c(PTR_DAT_06f7c220);
    FUN_02fe925c(PTR_DAT_06fd5298);
    DAT_073a0721 = 1;
  }
  piVar6 = (int *)(param_1 + 0x98);
  if (0 < *piVar6) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0xa0);
      if (lVar5 == 0) {
LAB_065c8e40:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_065c8e40;
      uVar2 = *(undefined8 *)(lVar5 + 0xf8);
      uVar1 = *(undefined8 *)(lVar5 + 0x100);
      uVar3 = *(undefined8 *)(lVar5 + 0x108);
      uVar8 = *(undefined8 *)(lVar5 + 0x110);
      uVar9 = *(undefined8 *)(lVar5 + 0x120);
      FUN_06553528(&local_78,*(undefined8 *)(lVar5 + 0xf0),0);
      uStack_88 = uStack_70;
      local_90 = local_78;
      local_80 = local_68;
      uVar4 = FUN_06547718(*(undefined8 *)PTR_DAT_06fd5298,&local_90,param_2,0);
      if ((uVar4 & 1) != 0) {
        FUN_06553528(&local_78,uVar3,0);
        uStack_a8 = uStack_70;
        local_b0 = local_78;
        local_a0 = local_68;
        uVar4 = FUN_06547718(*(undefined8 *)MeshCombineStudio_MeshColliderAdd_var,&local_b0,param_2,
                             0);
        if ((uVar4 & 1) != 0) {
          FUN_06553528(&local_78,uVar1,0);
          uStack_c8 = uStack_70;
          local_d0 = local_78;
          local_c0 = local_68;
          uVar4 = FUN_06547718(*(undefined8 *)UnityEngine_Mesh_var,&local_d0,param_2,0);
          if ((uVar4 & 1) != 0) {
            FUN_06553528(&local_78,uVar2,0);
            uStack_e8 = uStack_70;
            local_f0 = local_78;
            local_e0 = local_68;
            uVar4 = FUN_06547718(*(undefined8 *)PTR_DAT_06f7c220,&local_f0,param_2,0);
            if ((uVar4 & 1) != 0) {
              FUN_065c8e48(&local_78,uVar4,uVar9);
              uStack_108 = uStack_70;
              local_110 = local_78;
              local_100 = local_68;
              uVar4 = FUN_06547718(*(undefined8 *)
                                    Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnCreate_0000001A_PostfixBurstDelegate_var
                                   ,&local_110,param_2,0);
              if ((uVar4 & 1) != 0) {
                FUN_06553528(&local_78,uVar8,0);
                uStack_128 = uStack_70;
                local_130 = local_78;
                local_120 = local_68;
                uVar4 = FUN_06547718(*(undefined8 *)
                                      Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_PostfixBurstDelegate_var
                                     ,&local_130,param_2,0);
                if ((uVar4 & 1) != 0) {
                  FUN_03b63ea4(*(undefined8 *)(param_1 + 0xa0),piVar6,uVar7,
                               *(undefined8 *)Unity_Entities_IComponentData_var);
                  return lVar5;
                }
              }
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *piVar6);
  }
  return 0;
}


