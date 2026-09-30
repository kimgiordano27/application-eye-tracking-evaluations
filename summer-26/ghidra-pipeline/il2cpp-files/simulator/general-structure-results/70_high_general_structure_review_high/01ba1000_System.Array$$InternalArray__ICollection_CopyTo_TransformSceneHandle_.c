/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<TransformSceneHandle>
ENTRY_POINT: 01ba1000
PROGRAM: simulator-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01ba1408) */
/* WARNING: Removing unreachable block (ram,0x01ba106c) */
/* WARNING: Removing unreachable block (ram,0x01ba14a4) */
/* WARNING: Removing unreachable block (ram,0x01ba149c) */
/* WARNING: Removing unreachable block (ram,0x01ba1114) */
/* WARNING: Removing unreachable block (ram,0x01ba1118) */
/* WARNING: Removing unreachable block (ram,0x01ba1130) */
/* WARNING: Removing unreachable block (ram,0x01ba1154) */
/* WARNING: Removing unreachable block (ram,0x01ba1140) */
/* WARNING: Removing unreachable block (ram,0x01ba116c) */
/* WARNING: Removing unreachable block (ram,0x01ba1170) */

void System_Array__InternalArray__ICollection_CopyTo<TransformSceneHandle>(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x27;
  int unaff_w29;
  long in_stack_00000008;
  
  do {
    lVar9 = *unaff_x23;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01ba1054;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_018a8460(unaff_x23,*unaff_x27,0);
LAB_01ba1054:
    (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if (unaff_x22 == (long *)0x0) goto LAB_01ba1498;
    in_stack_00000008 = unaff_x22[0x6f];
    unaff_w29 = unaff_w29 + -1;
    unaff_x22 = (long *)FUN_032434d8(&stack0x00000008,0);
    puVar4 = PTR_DAT_03499500;
    if (unaff_w29 <= unaff_w24) {
      if (*(int *)(*(long *)PTR_DAT_03499500 + 0xe0) == 0) {
        thunk_FUN_018cd5b0();
      }
      lVar9 = FUN_0316a158(unaff_w24,0);
      puVar3 = PTR_DAT_034994e8;
      if (unaff_x22 != unaff_x21) break;
      if (lVar9 != 0) goto FUN_01ba1320;
      goto LAB_01ba1498;
    }
    unaff_x23 = (long *)Obi_ObiNativeList<EmitPoint>__OnAfterDeserialize();
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    FUN_031f3c24(unaff_x23,unaff_x22,0);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    (**(code **)(*unaff_x22 + 0x198))(unaff_x22,unaff_x23,*(undefined8 *)(*unaff_x22 + 0x1a0));
  } while( true );
LAB_01ba119c:
  plVar6 = (long *)Obi_ObiNativeList<EmitPoint>__OnAfterDeserialize();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_018c4afc();
  }
  FUN_031f3c24(plVar6,unaff_x22,0);
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_018c4afc();
  }
  (**(code **)(*unaff_x22 + 0x198))(unaff_x22,plVar6,*(undefined8 *)(*unaff_x22 + 0x1a0));
  lVar10 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto FUN_01ba1238;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_018a8460(plVar6,*unaff_x27,0);
FUN_01ba1238:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  if (lVar9 == 0) {
LAB_01ba1498:
                    /* WARNING: Subroutine does not return */
    FUN_018c4afc();
  }
  lVar10 = *(long *)(lVar9 + 0x10);
  lVar12 = *(long *)puVar3;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_01ba1498;
  uVar2 = *(uint *)(lVar9 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
    *(long **)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = unaff_x21;
  }
  else {
    FUN_02330f0c(lVar9,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
    ;
  }
  if (unaff_x22 == (long *)0x0) goto LAB_01ba1498;
  in_stack_00000008 = unaff_x22[0x6f];
  unaff_x22 = (long *)FUN_032434d8(&stack0x00000008,0);
  if (unaff_x21 == (long *)0x0) goto LAB_01ba1498;
  in_stack_00000008 = unaff_x21[0x6f];
  unaff_x21 = (long *)FUN_032434d8(&stack0x00000008,0);
  if (unaff_x22 == unaff_x21) {
FUN_01ba1320:
    puVar3 = PTR_DAT_034994f8;
    iVar1 = *(int *)(lVar9 + 0x18);
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_018cd5b0();
        }
        UnityEngine_UI_InputField__get_onEndEdit(lVar9,0);
        return;
      }
      plVar6 = (long *)Obi_ObiNativeList<EmitPoint>__OnAfterDeserialize();
      uVar7 = FUN_02330c48(lVar9,iVar1,*(undefined8 *)puVar3);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc(uVar7,uVar7);
      }
      FUN_031f3c24(plVar6,uVar7,0);
      plVar8 = (long *)FUN_02330c48(lVar9,iVar1,*(undefined8 *)puVar3);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_018c4afc();
      }
      (**(code **)(*plVar8 + 0x198))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 0x1a0));
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_01ba13f0;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_018a8460(plVar6,*unaff_x27,0);
LAB_01ba13f0:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
    } while( true );
  }
  goto LAB_01ba119c;
}


