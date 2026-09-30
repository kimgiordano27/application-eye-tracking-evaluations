/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$set_Item
ENTRY_POINT: 04610fc8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3
*/


void Unity_Collections_NativeArray<RequestSceneHeader>__set_Item
               (undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    param_4 = param_4 + -1;
    iVar1 = param_3 - param_2;
    if (iVar1 + 1 < 0x11) break;
    if (param_4 == -1) {
      lVar2 = *(long *)(param_6 + 0x20);
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
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      FUN_0461158c(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
      return;
    }
    lVar2 = *(long *)(param_6 + 0x20);
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
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    iVar1 = FUN_046112d8(param_1,param_2,param_3,param_5,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x88));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
    }
    Unity_Collections_NativeArray<RequestSceneHeader>__set_Item
              (param_1,iVar1 + 1,param_3,param_4,param_5,
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
    param_3 = iVar1 + -1;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 2) {
    lVar2 = *(long *)(param_6 + 0x20);
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
    lVar2 = *(long *)(param_6 + 0x20);
    iVar1 = param_3 + -1;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    FUN_04610d00(param_1,param_5,param_2,iVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    FUN_04610d00(param_1,param_5,param_2,param_3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
  }
  else {
    if (iVar1 != 1) {
      lVar2 = *(long *)(param_6 + 0x20);
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
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4();
      }
      FUN_046118c4(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
      return;
    }
    lVar2 = *(long *)(param_6 + 0x20);
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
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    iVar1 = param_2;
  }
  FUN_04610d00(param_1,param_5,iVar1,param_3,*(undefined8 *)(lVar2 + 0x70));
  return;
}


