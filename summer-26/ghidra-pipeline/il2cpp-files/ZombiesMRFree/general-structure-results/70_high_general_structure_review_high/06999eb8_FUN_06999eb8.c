/*
FUNCTION_NAME: FUN_06999eb8
ENTRY_POINT: 06999eb8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0699a0f0) */
/* WARNING: Removing unreachable block (ram,0x0699a0f4) */
/* WARNING: Removing unreachable block (ram,0x0699a198) */

void FUN_06999eb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long local_78;
  undefined8 local_70;
  
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06999eac with catch @ 06999ec8
                        */
  if ((DAT_073aa0fd & 1) == 0) {
                    /* try { // try from 06999ee0 to 06a99ee3 has its CatchHandler @ 06999efc */
                    /* try { // try from 06999ee4 to 06a99eff has its CatchHandler @ 06999ea4 */
    FUN_02fe925c(System_Runtime_Serialization_PositiveIntegerDataContract_TypeInfo);
    FUN_02fe925c(Unity_Entities_PostLoadCommandBuffer_TypeInfo);
                    /* catch() { ... } // from try @ 06999ee0 with catch @ 06999efc */
                    /* try { // try from 06999f00 to 06a99f03 has its CatchHandler @ 06999f18 */
    FUN_02fe925c(UnityEngine_Rendering_Universal_PostProcessPass_TypeInfo);
                    /* try { // try from 06999f04 to 06a99f0f has its CatchHandler @ 06999ea4 */
    FUN_02fe925c(Unity_Transforms_PostTransformMatrix_TypeInfo);
                    /* try { // try from 06999f10 to 06a99f17 has its CatchHandler @ 06999f18 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06999f00 with catch @ 06999f18
                       catch(type#2 @ 00000000) { ... } // from try @ 06999f10 with catch @ 06999f18
                        */
    FUN_02fe925c(UnityEngine_Rendering_PowerOfTwoTextureAtlas_TypeInfo);
                    /* catch() { ... } // from try @ 06999f28 with catch @ 06999f1c
                       catch() { ... } // from try @ 06999f5c with catch @ 06999f1c
                       catch() { ... } // from try @ 06999f7c with catch @ 06999f1c */
                    /* try { // try from 06999f24 to 06a99f27 has its CatchHandler @ 06999f40 */
    FUN_02fe925c(PrebakeFracture_TypeInfo);
                    /* try { // try from 06999f28 to 06a99f57 has its CatchHandler @ 06999f1c */
    FUN_02fe925c(PrebakeMeshPhysics_TypeInfo);
    FUN_02fe925c(Unity_Entities_Prefab_TypeInfo);
    FUN_02fe925c(Unity_Scenes_PrefabAssetReference_TypeInfo);
    FUN_02fe925c(PrefabDatabase_TypeInfo);
    DAT_073aa0fd = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  lStack_a8 = 0;
  local_b0 = 0;
  uVar5 = FUN_06999a34();
  if ((uVar5 & 1) != 0) {
    FUN_06999a9c();
    lVar6 = FUN_06999b94(1);
    if (lVar6 != 0) {
      FUN_05223e7c(&local_e8,lVar6,*(undefined8 *)Unity_Entities_PostLoadCommandBuffer_TypeInfo);
      puVar2 = PrebakeFracture_TypeInfo;
      puVar1 = UnityEngine_Rendering_PowerOfTwoTextureAtlas_TypeInfo;
      uStack_88 = uStack_e0;
      local_90 = local_e8;
      local_78 = lStack_d0;
      uStack_80 = local_d8;
      local_70 = local_c8;
      while (uVar5 = FUN_055ae5d8(&local_90,*(undefined8 *)puVar2), lVar6 = local_78,
            (uVar5 & 1) != 0) {
        if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(long *)(local_78 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_05338680(&local_e8,*(long *)(local_78 + 0x20),
                     *(undefined8 *)
                      System_Runtime_Serialization_PositiveIntegerDataContract_TypeInfo);
        uStack_b8 = uStack_e0;
        local_c0 = local_e8;
        lStack_a8 = lStack_d0;
        local_b0 = local_d8;
        local_a0 = local_c8;
        while (uVar7 = FUN_055d705c(&local_c0,*(undefined8 *)puVar1), uVar5 = local_b0,
              (uVar7 & 1) != 0) {
          iVar3 = (int)local_b0;
          iVar4 = local_b0._4_4_;
          lVar8 = FUN_06998718(lVar6,local_b0 & 0xffffffff,local_b0._4_4_);
          uVar9 = FUN_06998718(lVar6,iVar3 + -1,iVar4);
          uVar10 = FUN_06998718(lVar6,iVar3 + 1,iVar4);
          uVar11 = FUN_06998718(lVar6,uVar5 & 0xffffffff,iVar4 + 1);
          uVar12 = FUN_06998718(lVar6,uVar5 & 0xffffffff,iVar4 + -1);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (DAT_073a9f20 == (code *)0x0) {
            DAT_073a9f20 = (code *)FUN_02fe9220(
                                               "UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)"
                                               );
          }
          (*DAT_073a9f20)(lVar8,uVar9,uVar11,uVar10,uVar12);
        }
        FUN_055d717c(&local_c0,*(undefined8 *)Unity_Transforms_PostTransformMatrix_TypeInfo);
      }
      FUN_055ae6fc(&local_90,*(undefined8 *)UnityEngine_Rendering_Universal_PostProcessPass_TypeInfo
                  );
    }
  }
  return;
}


