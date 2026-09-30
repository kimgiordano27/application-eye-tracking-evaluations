/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.PassthroughMeshInstance>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02f15410
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f15754) */

void System_Array_InternalEnumerator<OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IEnumerator_Reset
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined4 unaff_w24;
  long unaff_x26;
  long unaff_x29;
  
  uVar4 = FUN_01d7d9bc(*param_1);
  lVar5 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3093);
  FUN_03604b0c(lVar5,uVar4,unaff_w24,0);
  if (unaff_x23 != (long *)0x0) {
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8(lVar9);
    }
    lVar10 = *unaff_x23;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02f15508;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01dde8fc();
LAB_02f15508:
    puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
    plVar7 = (long *)(*(code *)*puVar6)();
    puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02f15578;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)puVar2,0);
LAB_02f15578:
      uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_02f15690;
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_02f15668;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_02f15650;
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8(lVar9);
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02f155f0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01dde8fc(plVar7,lVar9,0);
LAB_02f155f0:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar3 = FUN_02f15810();
      if (-1 < iVar3) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48(lVar5,iVar3,0);
      }
    } while( true );
  }
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_02f15650:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose;
    }
  }
LAB_02f15668:
  puVar6 = (undefined8 *)FUN_01dde8fc(plVar7,*(long *)puVar1,0);
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_02f15690:
  if (0 < (int)unaff_x21) {
    uVar11 = 0;
    lVar9 = 0x20;
    do {
      lVar10 = *(long *)(unaff_x20 + 0x18);
      if (lVar10 == 0) goto LAB_02f15744;
      if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar10 + lVar9)) {
        if (lVar5 == 0) goto LAB_02f15744;
        uVar8 = FUN_03604bc4(lVar5,uVar11 & 0xffffffff,0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15744;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar11) goto LAB_02f15748;
          FUN_02f123d0();
        }
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 0x10;
    } while (unaff_x21 != uVar11);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


