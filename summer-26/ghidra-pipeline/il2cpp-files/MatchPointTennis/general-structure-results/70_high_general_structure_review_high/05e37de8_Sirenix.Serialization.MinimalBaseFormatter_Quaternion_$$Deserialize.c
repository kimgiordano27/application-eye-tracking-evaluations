/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Quaternion>$$Deserialize
ENTRY_POINT: 05e37de8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint Sirenix_Serialization_MinimalBaseFormatter<Quaternion>__Deserialize
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(8);
  }
  if (*(int *)(unaff_x20 + 0x18) < 1) {
    uVar1 = 1;
  }
  else {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 == 0) {
LAB_05e37e60:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (unaff_x19 == 0) goto LAB_05e37e60;
      uVar1 = (**(code **)(unaff_x19 + 0x18))
                        (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20)
                         ,*(undefined8 *)(unaff_x19 + 0x28));
    } while (((uVar1 & 1) != 0) &&
            (uVar3 = uVar3 + 1, (long)uVar3 < (long)*(int *)(unaff_x20 + 0x18)));
  }
  return uVar1 & 1;
}


