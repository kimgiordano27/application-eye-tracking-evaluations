/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 041e7974
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
System_Array__IndexOfImpl<ProbeVolumeBakingSet_SerializedPerSceneCellList>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong in_x9;
  undefined8 *in_x11;
  undefined8 *puVar3;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auVar4 [16];
  long in_stack_00000008;
  
  iVar1 = (**(code **)(unaff_x21 + 0x18))
                    (*(undefined8 *)(unaff_x21 + 0x40),*in_x11,
                     param_4 & 0xffff000000000000 | param_4 & 0xffffffff | (in_x9 & 0xffff) << 0x20,
                     *param_1,(ulong)*(uint6 *)(param_1 + 1),*(undefined8 *)(unaff_x21 + 0x28));
  if (iVar1 < 0) {
    if (*(int *)(*(long *)PTR_DAT_07d97b00 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_041e67f8(unaff_w22,unaff_w19,&stack0x00000008);
  }
  if (in_stack_00000008 != 0) {
    if ((unaff_w20 < *(uint *)(in_stack_00000008 + 0x18)) &&
       (unaff_w19 < *(uint *)(in_stack_00000008 + 0x18))) {
      puVar3 = (undefined8 *)(in_stack_00000008 + 0x20 + unaff_x23 * 0xe);
      puVar2 = (undefined8 *)(in_stack_00000008 + 0x20 + unaff_x24 * 0xe);
      iVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),*puVar3,(ulong)*(uint6 *)(puVar3 + 1),
                         *puVar2,(ulong)*(uint6 *)(puVar2 + 1),*(undefined8 *)(unaff_x21 + 0x28));
      if (iVar1 < 0) {
        if (*(int *)(*(long *)PTR_DAT_07d97b00 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_041e67f8(unaff_w19,unaff_w20,&stack0x00000008);
      }
      if (in_stack_00000008 == 0) goto LAB_041e7a98;
      if (unaff_w19 < *(uint *)(in_stack_00000008 + 0x18)) {
        auVar4._14_2_ = 0;
        auVar4._0_14_ = *(undefined1 (*) [14])(in_stack_00000008 + unaff_x24 * 0xe + 0x20);
        return auVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_041e7a98:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


