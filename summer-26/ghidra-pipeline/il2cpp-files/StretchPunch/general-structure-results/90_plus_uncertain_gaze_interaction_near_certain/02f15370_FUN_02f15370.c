/*
FUNCTION_NAME: FUN_02f15370
ENTRY_POINT: 02f15370
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 152
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f15754) */

void FUN_02f15370(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined1 *__s;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_044a5651 & 1) == 0) {
    FUN_01d7d918(StringLiteral_3093);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial);
    FUN_01d7d918(StringLiteral_151);
    DAT_044a5651 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar5 = FUN_03604c48((ulong)uVar1,0);
  uVar15 = (ulong)uVar5;
  if ((int)uVar5 < 0x65) {
    uVar15 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
    if (uVar5 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = auStack_60 + -(uVar15 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar15);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3093);
    FUN_03604ad4(lVar8,__s,uVar5,0);
  }
  else {
    uVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar15);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3093);
    FUN_03604b0c(lVar8,uVar7,uVar15,0);
  }
  if (param_2 != (long *)0x0) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01dde7f8(lVar12);
    }
    lVar13 = *param_2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02f15508;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01dde8fc(param_2,lVar12,0);
LAB_02f15508:
    puVar3 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
    plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
    puVar4 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      lVar12 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02f15578;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01dde8fc(plVar10,*(long *)puVar4,0);
LAB_02f15578:
      uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_02f15690;
        lVar12 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 == 0) goto LAB_02f15668;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_02f15650;
      }
      lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01dde7f8(lVar12);
      }
      lVar13 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02f155f0;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01dde8fc(plVar10,lVar12,0);
LAB_02f155f0:
      uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      iVar6 = FUN_02f15810(param_1,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar6) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48(lVar8,iVar6,0);
      }
    } while( true );
  }
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar14 = piVar14 + 4;
    if (uVar15 == 0) break;
LAB_02f15650:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose;
    }
  }
LAB_02f15668:
  puVar9 = (undefined8 *)FUN_01dde8fc(plVar10,*(long *)puVar3,0);
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_02f15690:
  if (0 < (int)uVar1) {
    uVar15 = 0;
    lVar12 = 0x20;
    do {
      lVar13 = *(long *)(param_1 + 0x18);
      if (lVar13 == 0) goto LAB_02f15744;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar13 + lVar12)) {
        if (lVar8 == 0) goto LAB_02f15744;
        uVar11 = FUN_03604bc4(lVar8,uVar15 & 0xffffffff,0);
        if ((uVar11 & 1) == 0) {
          lVar13 = *(long *)(param_1 + 0x18);
          if (lVar13 == 0) goto LAB_02f15744;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_02f15748;
          FUN_02f123d0(param_1,*(undefined8 *)(lVar13 + lVar12 + 8),
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
        }
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar1 != uVar15);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


