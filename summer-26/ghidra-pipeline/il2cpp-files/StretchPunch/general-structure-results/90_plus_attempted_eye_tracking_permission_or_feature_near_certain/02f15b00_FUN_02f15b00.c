/*
FUNCTION_NAME: FUN_02f15b00
ENTRY_POINT: 02f15b00
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 117
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02f15ef4) */
/* WARNING: Removing unreachable block (ram,0x02f15fa4) */

void FUN_02f15b00(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  undefined1 *__s;
  undefined1 *puVar17;
  undefined1 auStack_70 [4];
  int local_6c;
  long local_68;
  
  puVar17 = auStack_70;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_044a5652 & 1) == 0) {
    FUN_01d7d918(StringLiteral_3093);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial);
    FUN_01d7d918(StringLiteral_151);
    DAT_044a5652 = 1;
  }
  puVar4 = StringLiteral_3093;
  local_6c = 0;
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = FUN_03604c48((ulong)uVar1,0);
  puVar3 = StringLiteral_151;
  uVar16 = (ulong)uVar6;
  if ((int)uVar6 < 0x33) {
    uVar16 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
    if (uVar6 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      puVar17 = auStack_70 + -(uVar16 + 0xf & 0xfffffffffffffff0);
      __s = puVar17;
    }
    memset(__s,0,uVar16);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
    FUN_03604ad4(lVar8,__s,uVar6,0);
    if (uVar6 == 0) {
      puVar17 = (undefined1 *)0x0;
    }
    else {
      puVar17 = puVar17 + -(uVar16 + 0xf & 0xfffffffffffffff0);
    }
    memset(puVar17,0,uVar16);
    lVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
    FUN_03604ad4(lVar9,puVar17,uVar6,0);
  }
  else {
    uVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar16);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
    FUN_03604b0c(lVar8,uVar7,uVar16,0);
    uVar7 = FUN_01d7d9bc(*(undefined8 *)puVar3,uVar16);
    lVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
    FUN_03604b0c(lVar9,uVar7,uVar16,0);
  }
  if (param_2 != (long *)0x0) {
    lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01dde7f8(lVar13);
    }
    lVar14 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02f15d18;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_01dde8fc(param_2,lVar13,0);
LAB_02f15d18:
    puVar3 = Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads;
    plVar11 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
    puVar4 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      lVar13 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02f15d88;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar4,0);
LAB_02f15d88:
      uVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_02f15ee8;
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 == 0) goto LAB_02f15ec0;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext;
      }
      lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01dde7f8(lVar13);
      }
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01dde8fc(plVar11,lVar13,0);
System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset:
      uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      local_6c = 0;
      uVar16 = FUN_02f16078(param_1,uVar7,&local_6c,
                            *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1e0));
      iVar5 = local_6c;
      if ((uVar16 & 1) == 0) {
        if (local_6c < (int)uVar1) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar16 = FUN_03604bc4(lVar9,local_6c,0);
          if ((uVar16 & 1) == 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_03604b48(lVar8,iVar5,0);
          }
        }
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48(lVar9,local_6c,0);
      }
    } while( true );
  }
LAB_02f15f90:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar15 = piVar15 + 4;
    if (uVar16 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02f15edc;
    }
  }
LAB_02f15ec0:
  puVar10 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar3,0);
LAB_02f15edc:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_02f15ee8:
  if (0 < (int)uVar1) {
    if (lVar8 == 0) goto LAB_02f15f90;
    uVar16 = 0;
    lVar9 = 0x28;
    do {
      uVar12 = FUN_03604bc4(lVar8,uVar16 & 0xffffffff,0);
      if ((uVar12 & 1) != 0) {
        lVar13 = *(long *)(param_1 + 0x18);
        if (lVar13 == 0) goto LAB_02f15f90;
        if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        FUN_02f123d0(param_1,*(undefined8 *)(lVar13 + lVar9),
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
      }
      uVar16 = uVar16 + 1;
      lVar9 = lVar9 + 0x10;
    } while (uVar1 != uVar16);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


