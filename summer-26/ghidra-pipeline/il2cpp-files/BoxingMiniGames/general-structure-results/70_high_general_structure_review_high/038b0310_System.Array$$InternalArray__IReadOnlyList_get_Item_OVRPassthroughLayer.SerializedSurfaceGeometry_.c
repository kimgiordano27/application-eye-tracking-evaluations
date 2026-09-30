/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 038b0310
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long unaff_x20;
  void *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  size_t unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  memcpy(param_1,param_2,param_3);
  iVar1 = *(int *)(unaff_x28 + 0x28);
  if (-1 < iVar1) {
    unaff_x21 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(unaff_x23,unaff_x21,unaff_x25);
  puVar3 = *(undefined8 **)(unaff_x27 + 0x10);
  uVar2 = *puVar3;
  if (-1 < unaff_w26) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  if (-1 < iVar1) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  pcVar4 = (code *)puVar3[2];
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x22;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
  (*pcVar4)(uVar2,puVar3,0,unaff_x29 + -0x20,unaff_x29 + -0x10);
  if (unaff_x20 == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x29 + -0x10);
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x20 + 0x20));
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


