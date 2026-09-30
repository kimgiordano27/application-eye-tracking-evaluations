/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$op_Equality
ENTRY_POINT: 046115ac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Collections_NativeArray<RequestSceneHeader>__op_Equality
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong unaff_x24;
  int iVar3;
  ulong uVar4;
  
  uVar4 = unaff_x24 >> 1 & 0x7fffffff;
  do {
    lVar2 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar2 = *(long *)(param_5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    FUN_046116e0(param_1,uVar4,unaff_x24 & 0xffffffff,param_2,param_4,
                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
    iVar3 = (int)uVar4;
    uVar1 = iVar3 - 1;
    uVar4 = (ulong)uVar1;
  } while (uVar1 != 0 && 0 < iVar3);
  if (1 < (int)unaff_x24) {
    do {
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      FUN_04610e4c(param_1,param_2,param_3);
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      FUN_046116e0(param_1,1,-param_2 + param_3,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
      param_3 = param_3 + -1;
    } while (2 < -param_2 + param_3 + 2);
  }
  return;
}


