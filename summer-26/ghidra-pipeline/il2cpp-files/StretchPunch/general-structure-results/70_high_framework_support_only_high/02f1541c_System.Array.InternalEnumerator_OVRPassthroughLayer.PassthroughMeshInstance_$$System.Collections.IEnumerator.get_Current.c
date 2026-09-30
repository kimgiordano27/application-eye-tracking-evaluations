/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.PassthroughMeshInstance>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02f1541c
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

void System_Array_InternalEnumerator<OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined4 unaff_w24;
  long unaff_x26;
  long unaff_x29;
  
  lVar4 = thunk_FUN_01de27b8(**(undefined8 **)(param_1 + 0xf48));
  FUN_03604b0c(lVar4,param_2,unaff_w24,0);
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01dde7f8(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02f15508;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc();
LAB_02f15508:
    puVar1 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f15578;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)puVar2,0);
LAB_02f15578:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_02f15690;
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_02f15668;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_02f15650;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01dde7f8(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f155f0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,lVar8,0);
LAB_02f155f0:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      iVar3 = FUN_02f15810();
      if (-1 < iVar3) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48(lVar4,iVar3,0);
      }
    } while( true );
  }
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02f15650:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose;
    }
  }
LAB_02f15668:
  puVar5 = (undefined8 *)FUN_01dde8fc(plVar6,*(long *)puVar1,0);
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_02f15690:
  if (0 < (int)unaff_x21) {
    uVar10 = 0;
    lVar8 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x18);
      if (lVar9 == 0) goto LAB_02f15744;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar9 + lVar8)) {
        if (lVar4 == 0) goto LAB_02f15744;
        uVar7 = FUN_03604bc4(lVar4,uVar10 & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15744;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10) goto LAB_02f15748;
          FUN_02f123d0();
        }
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x10;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


