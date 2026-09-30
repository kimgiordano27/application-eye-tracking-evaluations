/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03a4754c
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  long *in_x10;
  int *piVar3;
  undefined4 *unaff_x19;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_03a47590;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_03a47590:
  (*(code *)*puVar1)();
  if (unaff_x22 == 0) {
    if ((unaff_w24 == 3) || (unaff_w24 == 0)) {
      *unaff_x19 = 0;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
      lVar2 = *(long *)(lVar4 + 0x38);
      if (lVar2 == 0) {
        FUN_02eea7c4(lVar4);
        lVar2 = *(long *)(lVar4 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      unaff_x23 = **(undefined8 **)(lVar2 + 0xb8);
    }
    return unaff_x23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ecbb70();
}


