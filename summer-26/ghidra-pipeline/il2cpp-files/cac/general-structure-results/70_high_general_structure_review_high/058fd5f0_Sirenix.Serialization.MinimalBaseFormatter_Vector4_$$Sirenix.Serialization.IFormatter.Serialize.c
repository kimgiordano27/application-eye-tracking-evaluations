/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$Sirenix.Serialization.IFormatter.Serialize
ENTRY_POINT: 058fd5f0
PROGRAM: cac-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector4>__Sirenix_Serialization_IFormatter_Serialize
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 08b42af8) { ... } // from try @ 058fd590 with catch @ 058fd608
                       catch(type#1 @ 08b42af8) { ... } // from try @ 058fd5d8 with catch @ 058fd608
                       try { // try from 058fd608 to 059fd61f has its CatchHandler @ 058fd540 */
    FUN_074c7ccc(8);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar3;
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      param_1[4] = 0;
                    /* catch() { ... } // from try @ 058fd620 with catch @ 058fd6b0
                       catch() { ... } // from try @ 058fd6a0 with catch @ 058fd6b0 */
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return;
    }
                    /* try { // try from 058fd620 to 059fd637 has its CatchHandler @ 058fd6b0 */
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) goto LAB_058fd6cc;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_058fd6d0;
    if (param_3 == 0) goto LAB_058fd6cc;
                    /* try { // try from 058fd638 to 059fd69f has its CatchHandler @ 058fd540 */
    lVar2 = lVar2 + (ulong)uVar4 * 0x28;
    in_stack_00000038 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000048 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar2 + 0x30);
    in_stack_00000050 = *(undefined8 *)(lVar2 + 0x40);
    uVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&stack0x00000030,
                       *(undefined8 *)(param_3 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (ulong)uVar4 * 0x28;
      uVar6 = *(undefined8 *)(lVar2 + 0x28);
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar8 = *(undefined8 *)(lVar2 + 0x38);
      uVar7 = *(undefined8 *)(lVar2 + 0x30);
      param_1[4] = *(undefined8 *)(lVar2 + 0x40);
                    /* try { // try from 058fd6a0 to 059fd6af has its CatchHandler @ 058fd6b0 */
      param_1[1] = uVar6;
      *param_1 = uVar5;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
                    /* try { // try from 058fd6b4 to 059fd6b7 has its CatchHandler @ 058fd6c0 */
                    /* try { // try from 058fd6b8 to 059fd6c3 has its CatchHandler @ 058fd540 */
      return;
    }
LAB_058fd6d0:
                    /* WARNING: Subroutine does not return */
    FUN_03f13634();
  }
LAB_058fd6cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


