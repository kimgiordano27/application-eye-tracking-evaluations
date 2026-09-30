/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$Dispose
ENTRY_POINT: 04611010
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_3
*/


void Unity_Collections_NativeArray<RequestSceneHeader>__Dispose(void)

{
  int iVar1;
  long lVar2;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  do {
    lVar2 = *(long *)(unaff_x23 + 0x20);
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
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    iVar1 = FUN_046112d8();
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4(*(long *)(unaff_x23 + 0x20));
    }
    Unity_Collections_NativeArray<RequestSceneHeader>__set_Item();
    unaff_w24 = unaff_w24 + -1;
    if (iVar1 + -1 <= unaff_w22) {
      return;
    }
    iVar1 = (iVar1 + -1) - unaff_w22;
    if (iVar1 + 1 < 0x11) {
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 == 2) {
        lVar2 = *(long *)(unaff_x23 + 0x20);
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
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        FUN_04610d00();
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        FUN_04610d00();
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
      }
      else {
        if (iVar1 != 1) {
          lVar2 = *(long *)(unaff_x23 + 0x20);
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
          if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          FUN_046118c4();
          return;
        }
        lVar2 = *(long *)(unaff_x23 + 0x20);
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
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
      }
      FUN_04610d00();
      return;
    }
  } while (unaff_w24 != -1);
  lVar2 = *(long *)(unaff_x23 + 0x20);
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
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_0461158c();
  return;
}


