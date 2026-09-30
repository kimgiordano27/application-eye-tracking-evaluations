/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 04e7a0d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
               (ulong param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6baa0);
    *(undefined1 *)(unaff_x22 + 0x6b4) = 1;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x118);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03cf1244();
  }
  puVar5 = PTR_DAT_08e6baa0;
  lVar6 = FUN_03c8f97c(lVar6,param_3);
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    FUN_0712485c(lVar8,0,lVar6,0,*(undefined4 *)(param_2 + 0x24),0);
  }
  lVar8 = FUN_03c8f97c(*(undefined8 *)puVar5,param_3);
  if (0 < *(int *)(param_2 + 0x24)) {
    if (lVar6 == 0) {
LAB_04e7a1f0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(uint *)(lVar6 + 0x18);
    uVar7 = 0;
    piVar9 = (int *)(lVar6 + 0x24);
    do {
      if (uVar2 <= uVar7) {
LAB_04e7a1ec:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (lVar8 == 0) goto LAB_04e7a1f0;
      iVar4 = 0;
      if (param_3 != 0) {
        iVar4 = piVar9[-1] / param_3;
      }
      uVar3 = piVar9[-1] - iVar4 * param_3;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_04e7a1ec;
      lVar1 = lVar8 + (long)(int)uVar3 * 4;
      uVar7 = uVar7 + 1;
      *piVar9 = *(int *)(lVar1 + 0x20) + -1;
      *(uint *)(lVar1 + 0x20) = uVar7;
      piVar9 = piVar9 + 6;
    } while ((int)uVar7 < *(int *)(param_2 + 0x24));
  }
  *(long *)(param_2 + 0x18) = lVar6;
  thunk_FUN_03d233cc((long *)(param_2 + 0x18),lVar6);
  *(long *)(param_2 + 0x10) = lVar8;
  thunk_FUN_03d233cc((long *)(param_2 + 0x10),lVar8);
  return;
}


