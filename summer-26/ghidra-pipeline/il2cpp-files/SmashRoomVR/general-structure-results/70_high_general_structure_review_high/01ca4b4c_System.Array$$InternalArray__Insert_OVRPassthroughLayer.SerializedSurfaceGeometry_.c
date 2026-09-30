/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 01ca4b4c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__Insert<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  long unaff_x28;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined8 **)(unaff_x28 + 0x40);
  uVar2 = FUN_023a910c(param_1,*(undefined4 *)(unaff_x26 + 4),*puVar4);
  *unaff_x25 = uVar2;
  uVar2 = FUN_023a910c(param_1,*(int *)(unaff_x26 + 4) + 1,*puVar4);
  *unaff_x23 = uVar2;
                    /* try { // try from 01ca4b80 to 01da4b87 has its CatchHandler @ 01ca4bf4 */
                    /* try { // try from 01ca4b88 to 01da4c07 has its CatchHandler @ 01ca4b40 */
  uVar2 = FUN_023a910c(param_1,*(int *)(unaff_x26 + 4) + 2,*puVar4);
  *unaff_x20 = uVar2;
  puVar1 = StringLiteral_809;
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    puVar4 = (undefined8 *)
             FUN_023c7860(*(long *)(unaff_x22 + 0x20),*unaff_x25,*(undefined8 *)StringLiteral_809);
    uVar5 = *puVar4;
    uVar3 = puVar4[2];
    unaff_x24[1] = puVar4[1];
    *unaff_x24 = uVar5;
    unaff_x24[2] = uVar3;
    if (*(long *)(unaff_x22 + 0x20) != 0) {
      puVar4 = (undefined8 *)
               FUN_023c7860(*(long *)(unaff_x22 + 0x20),*unaff_x23,*(undefined8 *)puVar1);
      uVar5 = *puVar4;
      uVar3 = puVar4[2];
      unaff_x21[1] = puVar4[1];
      *unaff_x21 = uVar5;
      unaff_x21[2] = uVar3;
      if (*(long *)(unaff_x22 + 0x20) != 0) {
        puVar4 = (undefined8 *)
                 FUN_023c7860(*(long *)(unaff_x22 + 0x20),*unaff_x20,*(undefined8 *)puVar1);
        uVar5 = *puVar4;
        uVar3 = puVar4[2];
        unaff_x19[1] = puVar4[1];
        *unaff_x19 = uVar5;
        unaff_x19[2] = uVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


