/*
FUNCTION_NAME: FUN_0355cdd0
ENTRY_POINT: 0355cdd0
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_5
*/


long FUN_0355cdd0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0383e6fc(8);
  }
  if ((*(ushort *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02091334();
  }
  lVar4 = thunk_FUN_02094760();
  FUN_0355bde0(lVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
      ;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_0355cf28:
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      if (param_2 == 0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
      ;
      uVar5 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar7 + lVar9 + 0x20),
                         *(undefined8 *)(lVar7 + lVar9 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0)
        goto 
        Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
        ;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0355cf28;
        if (lVar4 == 0) {
Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize:
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        uVar1 = *(undefined8 *)(lVar7 + lVar9 + 0x20);
        uVar2 = *(undefined8 *)(lVar7 + lVar9 + 0x28);
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 == 0)
        goto 
        Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
        ;
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar3 + 1;
          puVar6 = (undefined8 *)(lVar7 + 0x28);
          *puVar6 = uVar2;
          *(undefined8 *)(lVar7 + 0x20) = uVar1;
          thunk_FUN_020ccb58(puVar6,0);
        }
        else {
          FUN_0355c698(lVar4,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((long)uVar10 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar4;
}


