/*
FUNCTION_NAME: GameManager.<DoServerRequests>d__174$$System.IDisposable.Dispose
ENTRY_POINT: 01dfd118
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void GameManager_<DoServerRequests>d__174__System_IDisposable_Dispose(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04232b40;
  puVar2 = PTR_DAT_04232b38;
  if ((DAT_0452ded2 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04232b20);
    FUN_01c5d288(PTR_DAT_04230bf0);
    FUN_01c5d288(PTR_DAT_042361a8);
    FUN_01c5d288(PTR_DAT_04232b38);
    FUN_01c5d288(PTR_DAT_04230be0);
    FUN_01c5d288(PTR_DAT_04232b40);
    FUN_01c5d288(PTR_DAT_042361b0);
    FUN_01c5d288(PTR_DAT_04230bd8);
    FUN_01c5d288(PTR_DAT_0422fc38);
    FUN_01c5d288(PTR_DAT_04234568);
    DAT_0452ded2 = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02d26600(lVar5,*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)PTR_DAT_04232b20;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    puVar3 = PTR_DAT_04230be0;
    puVar2 = PTR_DAT_04230bd8;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0;
      }
      else {
        FUN_02d26df8(lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(param_1 + 0x18) = lVar5;
      lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_02d4f880(lVar5,*(undefined8 *)puVar3);
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)PTR_DAT_04234568;
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)PTR_DAT_04230bf0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        puVar4 = PTR_DAT_042361b0;
        puVar3 = PTR_DAT_042361a8;
        puVar2 = PTR_DAT_0422fc38;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          }
          else {
            FUN_02d5004c(lVar5,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(param_1 + 0x20) = lVar5;
          uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
          *(undefined8 *)(param_1 + 0x30) = uVar6;
          *(undefined8 *)(param_1 + 0x40) = uVar6;
          uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_02d4f880(uVar6,*(undefined8 *)puVar3);
          *(undefined8 *)(param_1 + 0x50) = uVar6;
          *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
          *(undefined8 *)(param_1 + 0x6c) = 0xc2c80000ffffff9c;
          *(undefined1 *)(param_1 + 0x78) = 1;
          FUN_03313b6c(param_1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


