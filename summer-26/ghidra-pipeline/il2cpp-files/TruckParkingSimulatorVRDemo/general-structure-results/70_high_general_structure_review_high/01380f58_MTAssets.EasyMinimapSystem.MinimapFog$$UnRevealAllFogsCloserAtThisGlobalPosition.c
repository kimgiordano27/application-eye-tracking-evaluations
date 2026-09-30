/*
FUNCTION_NAME: MTAssets.EasyMinimapSystem.MinimapFog$$UnRevealAllFogsCloserAtThisGlobalPosition
ENTRY_POINT: 01380f58
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void MTAssets_EasyMinimapSystem_MinimapFog__UnRevealAllFogsCloserAtThisGlobalPosition(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar10;
  uint uVar11;
  
  thunk_FUN_011f4b58(*(undefined8 *)(param_1 + 4000));
  thunk_FUN_011f4b58(PTR_DAT_02abb250);
  thunk_FUN_011f4b58(PTR_DAT_02abbfb0);
  *(undefined1 *)(unaff_x20 + 0x246) = 1;
  lVar3 = FUN_017c1bf0(*unaff_x21);
  puVar2 = PTR_DAT_02abbfb0;
  puVar1 = PTR_DAT_02ab7ee0;
  if (lVar3 != 0) {
    uVar7 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar7) {
      uVar11 = 0;
      do {
        if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012196e0();
        }
        lVar10 = *(long *)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_013810a0;
        uVar4 = FUN_0275b01c(lVar10,*(undefined8 *)puVar2,0);
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_0275d3a4(lVar10,0), (uVar4 & 1) == 0)) {
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if (lVar5 == 0) goto LAB_013810a0;
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar1;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_013810a0;
          uVar7 = *(uint *)(lVar5 + 0x18);
          if (uVar7 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar7 + 1;
            *(long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20) = lVar10;
          }
          else {
            FUN_01cdb11c(lVar5,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar7 = *(uint *)(lVar3 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar7);
    }
    puVar1 = PTR_DAT_02abb250;
    uVar6 = FUN_0275a948();
    *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
    lVar3 = FUN_0275d7e0(*(undefined8 *)puVar1,0);
    if (lVar3 != 0) {
      uVar6 = FUN_01792500(lVar3,*(undefined8 *)PTR_DAT_02abb248);
      *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
      return;
    }
  }
LAB_013810a0:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


