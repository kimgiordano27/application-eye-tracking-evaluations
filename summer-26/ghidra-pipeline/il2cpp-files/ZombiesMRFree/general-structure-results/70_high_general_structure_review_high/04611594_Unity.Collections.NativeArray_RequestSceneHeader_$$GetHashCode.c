/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$GetHashCode
ENTRY_POINT: 04611594
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


void Unity_Collections_NativeArray<RequestSceneHeader>__GetHashCode
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = (param_3 - param_2) + 1;
  if (1 < (int)uVar2) {
    uVar5 = uVar2 >> 1;
    do {
      lVar4 = *(long *)(param_5 + 0x20);
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
      lVar4 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4();
      }
      FUN_046116e0(param_1,uVar5,uVar2,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98));
      uVar3 = uVar5 - 1;
      bVar1 = 0 < (int)uVar5;
      uVar5 = uVar3;
    } while (uVar3 != 0 && bVar1);
    if (1 < (int)uVar2) {
      do {
        lVar4 = *(long *)(param_5 + 0x20);
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
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        FUN_04610e4c(param_1,param_2,param_3);
        lVar4 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4();
        }
        FUN_046116e0(param_1,1,-param_2 + param_3,param_2,param_4,
                     *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98));
        param_3 = param_3 + -1;
      } while (2 < -param_2 + param_3 + 2);
    }
  }
  return;
}


