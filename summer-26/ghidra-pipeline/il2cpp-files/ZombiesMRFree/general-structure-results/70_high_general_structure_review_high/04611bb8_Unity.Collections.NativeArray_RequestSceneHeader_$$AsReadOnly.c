/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$AsReadOnly
ENTRY_POINT: 04611bb8
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


void Unity_Collections_NativeArray<RequestSceneHeader>__AsReadOnly(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar1 = **(long **)(param_1 + 0xc0);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4(lVar1);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar2 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar2 != 0) {
    lVar3 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar3 + -8) == lVar1) goto LAB_04611c24;
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 != 0);
  }
  FUN_02feb5b8();
LAB_04611c24:
  FUN_050c30c4(param_2);
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_04612530();
  return;
}


