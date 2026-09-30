/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 053ae4e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
          (undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int iVar10;
  char cStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 053ae4e8 to 054ae4f3 has its CatchHandler @ 053ae5b0 */
  iVar10 = 0;
  do {
    uVar9 = (uint)param_1;
    if (*(int *)(unaff_x26 + (long)(int)unaff_w24 * 0x14 + 0x20) == unaff_w27) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4(lVar5);
      }
      lVar6 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_053ae57c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_053ae57c:
      uVar7 = (*(code *)*puVar3)();
      if ((uVar7 & 1) != 0) {
        if (cStack0000000000000008 == '\x02') {
          in_stack_00000010 = in_stack_00000018;
          uVar4 = thunk_FUN_0301043c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000010);
          FUN_05b107f0(uVar4,0);
        }
        else if (cStack0000000000000008 == '\x01') {
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + (long)(int)unaff_w24 * 0x14 + 0x30) = uStack000000000000000c
            ;
            return 1;
          }
          goto LAB_053ae804;
        }
        return 0;
      }
      uVar9 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar9 <= unaff_w24) goto LAB_053ae804;
    unaff_w24 = *(uint *)(unaff_x26 + (long)(int)unaff_w24 * 0x14 + 0x24);
    if ((int)uVar9 <= iVar10) {
      FUN_05b108f4(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    iVar10 = iVar10 + 1;
  } while (unaff_w24 < (uint)param_1);
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar9 = *(uint *)(unaff_x20 + 0x20);
    if (uVar9 == (uint)param_1) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
      if (lVar5 == 0) goto LAB_053ae808;
      uVar1 = *(uint *)(lVar5 + 0x18);
      iVar10 = 0;
      if (uVar1 != 0) {
        iVar10 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar10 * uVar1;
      if (uVar1 <= uVar2) goto LAB_053ae804;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
    }
    if (unaff_x26 == 0) {
LAB_053ae808:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_053ae804;
    lVar5 = (long)(int)uVar9;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar9 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) {
LAB_053ae804:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar5 = (long)(int)uVar9;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x14 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x14;
  *(int *)(lVar5 + 0x20) = unaff_w27;
  *(int *)(lVar5 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar5 + 0x30) = uStack000000000000000c;
  *(undefined8 *)(lVar5 + 0x28) = in_stack_00000018;
  *unaff_x28 = uVar9 + 1;
  return 1;
}


