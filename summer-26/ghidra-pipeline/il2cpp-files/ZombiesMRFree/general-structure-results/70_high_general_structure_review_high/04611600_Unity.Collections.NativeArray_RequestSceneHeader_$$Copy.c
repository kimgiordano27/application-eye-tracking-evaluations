/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$Copy
ENTRY_POINT: 04611600
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


void Unity_Collections_NativeArray<RequestSceneHeader>__Copy(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  int iVar2;
  
  do {
    FUN_02feb2c4();
    iVar2 = unaff_w25;
    do {
      FUN_046116e0();
      unaff_w25 = iVar2 + -1;
      if (unaff_w25 == 0 || iVar2 < 1) {
        if (1 < unaff_w24) {
          do {
            lVar1 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02feb2c4();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
            if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_02feb2c4();
            }
            if (*(int *)(lVar1 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
              FUN_02feb2c4();
            }
            FUN_04610e4c();
            if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
              FUN_02feb2c4();
            }
            FUN_046116e0();
            unaff_w21 = unaff_w21 + -1;
          } while (2 < (unaff_w21 - unaff_w22) + 2);
        }
        return;
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02feb2c4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar2 = unaff_w25;
    } while ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) != 0);
  } while( true );
}


