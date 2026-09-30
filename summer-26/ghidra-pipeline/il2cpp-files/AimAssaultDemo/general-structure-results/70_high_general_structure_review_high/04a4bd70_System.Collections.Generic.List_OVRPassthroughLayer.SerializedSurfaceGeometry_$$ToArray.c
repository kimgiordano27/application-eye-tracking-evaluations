/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 04a4bd70
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000038;
  
  FUN_04a4b35c();
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
  if (iVar1 != 0 && (int)unaff_w20 <= *(int *)(unaff_x19 + 0x18)) {
    FUN_06265b84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20 + 1,iVar1,0);
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uVar4 = unaff_x21[1];
  uVar3 = *unaff_x21;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  lVar2 = lVar2 + (long)(int)unaff_w20 * 0x18;
  *(undefined8 *)(lVar2 + 0x30) = unaff_x21[2];
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(ulong *)(unaff_x19 + 0x18) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


