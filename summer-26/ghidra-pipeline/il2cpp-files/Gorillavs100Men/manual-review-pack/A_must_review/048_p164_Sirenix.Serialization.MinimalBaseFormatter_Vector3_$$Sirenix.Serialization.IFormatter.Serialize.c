/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$Sirenix.Serialization.IFormatter.Serialize
ENTRY_POINT: 0355ce4c
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_7;telemetry_or_network_hits_7
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Serialize
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
  while (unaff_x24 < in_x9) {
    if (unaff_x20 == 0)
    goto 
    Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
    ;
    uVar4 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + unaff_x23 + 0x20)
                       ,*(undefined8 *)(param_1 + unaff_x23 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      if (lVar6 == 0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
      ;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x24) break;
      if (unaff_x22 == 0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
      ;
      uVar1 = *(undefined8 *)(lVar6 + unaff_x23 + 0x20);
      uVar2 = *(undefined8 *)(lVar6 + unaff_x23 + 0x28);
      lVar6 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar6 == 0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize
      ;
      uVar3 = *(uint *)(unaff_x22 + 0x18);
      if (uVar3 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
        *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
        puVar5 = (undefined8 *)(lVar6 + 0x28);
        *puVar5 = uVar2;
        *(undefined8 *)(lVar6 + 0x20) = uVar1;
        thunk_FUN_020ccb58(puVar5,0);
      }
      else {
        FUN_0355c698();
      }
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x23 = unaff_x23 + 0x10;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      return;
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Sirenix_Serialization_IFormatter_Deserialize:
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02061554();
}


