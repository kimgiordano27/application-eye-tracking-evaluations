/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.ctor
ENTRY_POINT: 02f1549c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f15754) */

void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  if (unaff_x23 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8(lVar7);
    }
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02f15508;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc();
LAB_02f15508:
    puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02f15578;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)puVar2,0);
LAB_02f15578:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_02f15690;
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_02f15668;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02f15650;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8(lVar7);
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02f155f0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,lVar7,0);
LAB_02f155f0:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      iVar3 = FUN_02f15810();
      if (-1 < iVar3) {
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48();
      }
    } while( true );
  }
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_02f15650:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose;
    }
  }
LAB_02f15668:
  puVar4 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)puVar1,0);
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02f15690:
  if (0 < (int)unaff_x21) {
    uVar9 = 0;
    lVar7 = 0x20;
    do {
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 == 0) goto LAB_02f15744;
      if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar8 + lVar7)) {
        if (unaff_x22 == 0) goto LAB_02f15744;
        uVar6 = FUN_03604bc4();
        if ((uVar6 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15744;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar9) goto LAB_02f15748;
          FUN_02f123d0();
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x10;
    } while (unaff_x21 != uVar9);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


