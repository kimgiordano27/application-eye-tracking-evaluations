/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046d9b90
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
               (uint param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  long unaff_x23;
  int iVar5;
  long unaff_x25;
  
  uVar1 = *(uint *)(unaff_x25 + 0x18);
  param_1 = param_1 & 0x7fffffff;
  iVar5 = 0;
  if (uVar1 != 0) {
    iVar5 = (int)param_1 / (int)uVar1;
  }
  uVar4 = param_1 - iVar5 * uVar1;
  if (uVar1 <= uVar4) {
LAB_046d9db0:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  iVar5 = *(int *)(unaff_x25 + (ulong)uVar4 * 4 + 0x20);
  plVar2 = (long *)FUN_02eb80f0(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  if (unaff_x23 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar4 = iVar5 - 1;
    if (uVar4 < uVar1) {
      iVar5 = 0;
      do {
        if (*(uint *)(unaff_x23 + (long)(int)uVar4 * 0x28 + 0x20) == param_1) {
          if (plVar2 == (long *)0x0) goto LAB_046d9db4;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined8 *)(unaff_x23 + (long)(int)uVar4 * 0x28 + 0x28));
          if ((uVar3 & 1) != 0) {
            return uVar4;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar4) goto LAB_046d9db0;
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


