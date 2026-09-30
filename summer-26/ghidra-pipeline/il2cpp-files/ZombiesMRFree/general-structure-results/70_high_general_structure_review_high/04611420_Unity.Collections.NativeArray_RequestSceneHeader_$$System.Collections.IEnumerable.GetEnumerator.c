/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04611420
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint Unity_Collections_NativeArray<RequestSceneHeader>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_CY;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w26;
  
  while (!(bool)in_CY) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar4 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
    uVar1 = *(undefined8 *)(lVar4 + 0x20);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar2);
    if (-1 < iVar3) {
      do {
        unaff_w26 = unaff_w26 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w26) goto LAB_04611584;
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
      } while (iVar3 < 0);
      if ((int)unaff_w26 <= (int)unaff_w19) {
        lVar4 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        FUN_04610e4c();
        return unaff_w19;
      }
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      FUN_04610e4c();
    }
    unaff_w19 = unaff_w19 + 1;
    in_CY = *(uint *)(unaff_x20 + 0x18) <= unaff_w19;
  }
LAB_04611584:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


