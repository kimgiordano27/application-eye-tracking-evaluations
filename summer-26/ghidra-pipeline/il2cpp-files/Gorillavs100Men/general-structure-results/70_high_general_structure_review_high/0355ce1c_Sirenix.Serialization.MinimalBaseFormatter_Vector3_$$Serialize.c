/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$Serialize
ENTRY_POINT: 0355ce1c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_7;telemetry_or_network_hits_7
*/


long Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Serialize(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  
  FUN_0355bde0(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      if (lVar6 == 0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
      ;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
LAB_0355cf28:
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      if (unaff_x20 == 0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
      ;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar6 + lVar8 + 0x20),
                         *(undefined8 *)(lVar6 + lVar8 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(unaff_x21 + 0x10);
        if (lVar6 == 0)
        goto 
        Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
        ;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0355cf28;
        if (param_2 == 0) {
Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize:
                    /* WARNING: Subroutine does not return */
          FUN_0206154c();
        }
        uVar1 = *(undefined8 *)(lVar6 + lVar8 + 0x20);
        uVar2 = *(undefined8 *)(lVar6 + lVar8 + 0x28);
        lVar6 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar6 == 0)
        goto 
        Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
        ;
        uVar3 = *(uint *)(param_2 + 0x18);
        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
          *(uint *)(param_2 + 0x18) = uVar3 + 1;
          puVar5 = (undefined8 *)(lVar6 + 0x28);
          *puVar5 = uVar2;
          *(undefined8 *)(lVar6 + 0x20) = uVar1;
          thunk_FUN_020ccb58(puVar5,0);
        }
        else {
          FUN_0355c698(param_2,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar9 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return param_2;
}


