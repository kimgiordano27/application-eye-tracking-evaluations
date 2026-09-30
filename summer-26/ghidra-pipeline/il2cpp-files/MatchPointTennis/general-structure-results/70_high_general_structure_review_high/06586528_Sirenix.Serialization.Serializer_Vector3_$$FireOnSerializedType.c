/*
FUNCTION_NAME: Sirenix.Serialization.Serializer<Vector3>$$FireOnSerializedType
ENTRY_POINT: 06586528
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 Sirenix_Serialization_Serializer<Vector3>__FireOnSerializedType(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  
  if (param_1 == (long *)0x0) {
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f286d8);
    FUN_07a80df4(uVar2,0);
    FUN_044819d0();
  }
  else {
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_065865b0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(param_1,*unaff_x21,2);
LAB_065865b0:
    uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    *unaff_x19 = uVar2;
    thunk_FUN_044bb4b4();
  }
  return *unaff_x19;
}


