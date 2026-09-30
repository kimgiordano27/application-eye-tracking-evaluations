/*
FUNCTION_NAME: System.Array$$LastIndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 02d53c04
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__LastIndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  while (!(bool)in_CY) {
    if (*(long *)(unaff_x19 + 0xe8) == 0) {
LAB_02d53cf8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(uint *)(*(long *)(unaff_x19 + 0xe8) + 0x18) <= unaff_x24) break;
    lVar1 = FUN_02d52578();
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_02d53cf8;
    if (*(uint *)(*(long *)(unaff_x19 + 0xe0) + 0x18) <= unaff_x24) break;
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_02d53cf8;
    if (*(uint *)(*(long *)(unaff_x19 + 0xe8) + 0x18) <= unaff_x24) break;
    lVar2 = FUN_02d52578();
    if (lVar2 == 0) goto LAB_02d53cf8;
    uVar9 = *(undefined8 *)(lVar2 + 0x1c);
    fVar11 = *(float *)(lVar2 + 0x24);
    lVar2 = FUN_02d52578();
    if ((lVar2 == 0) || (lVar3 = *(long *)(unaff_x19 + 0x90), lVar3 == 0)) goto LAB_02d53cf8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) break;
    fVar4 = *(float *)(unaff_x19 + 0x88);
    fVar5 = fVar4;
    if (unaff_s8 < fVar4) {
      fVar5 = unaff_s8;
    }
    if (fVar4 < 0.0) {
      fVar5 = unaff_s9;
    }
    if (lVar1 == 0) goto LAB_02d53cf8;
    fVar4 = *(float *)(lVar2 + 0x24);
    uVar6 = *(undefined8 *)(lVar3 + unaff_x22 + 0x20);
    fVar7 = *(float *)(lVar3 + unaff_x22 + 0x28);
    unaff_x22 = unaff_x22 + 0xc;
    fVar8 = (float)uVar9;
    fVar10 = (float)((ulong)uVar9 >> 0x20);
    *(ulong *)(lVar1 + 0x1c) =
         CONCAT44(fVar10 + (((float)((ulong)*(undefined8 *)(lVar2 + 0x1c) >> 0x20) +
                            (float)((ulong)uVar6 >> 0x20)) - fVar10) * fVar5,
                  fVar8 + (((float)*(undefined8 *)(lVar2 + 0x1c) + (float)uVar6) - fVar8) * fVar5);
    *(float *)(lVar1 + 0x24) = fVar11 + fVar5 * ((fVar4 + fVar7) - fVar11);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_02d53cf8;
    unaff_x24 = unaff_x23 - 7;
    if ((long)*(int *)(*(long *)(unaff_x19 + 0x58) + 0x18) <= (long)unaff_x24) {
      return;
    }
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_02d53cf8;
    unaff_x23 = unaff_x23 + 1;
    in_CY = *(uint *)(*(long *)(unaff_x19 + 0xe0) + 0x18) <= unaff_x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


