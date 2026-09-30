/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor
ENTRY_POINT: 046d9bb0
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___cctor
               (long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long in_x9;
  int unaff_w21;
  uint uVar4;
  long unaff_x23;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x20);
  plVar2 = (long *)FUN_02eb80f0(*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x18));
  if (unaff_x23 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar4 = iVar5 - 1;
    if (uVar4 < uVar1) {
      iVar5 = 0;
      do {
        if (*(int *)(unaff_x23 + (long)(int)uVar4 * 0x28 + 0x20) == unaff_w21) {
          if (plVar2 == (long *)0x0) goto LAB_046d9db4;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined8 *)(unaff_x23 + (long)(int)uVar4 * 0x28 + 0x28));
          if ((uVar3 & 1) != 0) {
            return uVar4;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar4 = *(uint *)(unaff_x23 + (long)(int)uVar4 * 0x28 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_04f52508(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar4 < uVar1);
    }
    return uVar4;
  }
LAB_046d9db4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


