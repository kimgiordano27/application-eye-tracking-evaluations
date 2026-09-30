/*
FUNCTION_NAME: FUN_05e39180
ENTRY_POINT: 05e39180
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] FUN_05e39180(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(8);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_05e39234;
                    /* try { // try from 05e391c4 to 05f391d3 has its CatchHandler @ 05e391d4 */
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_05e39238:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (param_2 == 0) {
LAB_05e39234:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
                    /* catch() { ... } // from try @ 05e39144 with catch @ 05e391d4
                       catch() { ... } // from try @ 05e391c4 with catch @ 05e391d4 */
                    /* try { // try from 05e391d8 to 05f391db has its CatchHandler @ 05e391e4 */
                    /* try { // try from 05e391dc to 05f391e7 has its CatchHandler @ 05e39060 */
      uVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar4 + lVar5 + 0x20),
                         *(undefined8 *)(lVar4 + lVar5 + 0x28),*(undefined8 *)(param_2 + 0x28));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e391d8 with catch @ 05e391e4
                        */
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_05e39234;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_05e39238;
        uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        goto 
        Sirenix_Serialization_MinimalBaseFormatter<Vector2>__Sirenix_Serialization_IFormatter_Deserialize
        ;
      }
                    /* try { // try from 05e391e8 to 05f394eb has its CatchHandler @ 05e391e8
                       catch() { ... } // from try @ 05e391e8 with catch @ 05e391e8
                       catch() { ... } // from try @ 05e395c4 with catch @ 05e391e8
                       catch() { ... } // from try @ 05e3968c with catch @ 05e391e8
                       catch() { ... } // from try @ 05e39738 with catch @ 05e391e8 */
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x18));
  }
  uVar2 = 0;
  uVar3 = 0;
Sirenix_Serialization_MinimalBaseFormatter<Vector2>__Sirenix_Serialization_IFormatter_Deserialize:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


