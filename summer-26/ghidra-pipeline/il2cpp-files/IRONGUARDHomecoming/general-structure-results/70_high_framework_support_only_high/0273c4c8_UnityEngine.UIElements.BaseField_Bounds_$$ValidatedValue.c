/*
FUNCTION_NAME: UnityEngine.UIElements.BaseField<Bounds>$$ValidatedValue
ENTRY_POINT: 0273c4c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0273c898) */
/* WARNING: Removing unreachable block (ram,0x0273c884) */
/* WARNING: Removing unreachable block (ram,0x0273c8a0) */

void UnityEngine_UIElements_BaseField<Bounds>__ValidatedValue(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  (*(code *)*param_1)();
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar6 = (long *)FUN_029da4a8(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x90));
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = plVar6[3];
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (*unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_027406ec(&stack0x00000008,*unaff_x23,*(undefined8 *)(lVar9 + 0xb8));
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while (uVar7 = FUN_02c74a2c(&stack0x00000020,
                              *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xe0))
        , (uVar7 & 1) != 0) {
    uVar4 = FUN_02c74b34(&stack0x00000020,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 200));
    lVar9 = *(long *)(lVar5 + 0x10);
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xd8);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar4;
    }
    else {
      FUN_030ba904(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  FUN_02c74a20(&stack0x00000020,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xe8));
  iVar1 = *(int *)(lVar5 + 0x18);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar9 = *(long *)(lVar10 + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
      lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    }
    lVar9 = **(long **)(lVar9 + 0xb8);
    uVar7 = FUN_030ba614(lVar5,iVar1,*(undefined8 *)(lVar10 + 0xf8));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar7,uVar7 & 0xffffffff);
    }
    FUN_0271047c(lVar9);
  }
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0273c7dc;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0273c7dc:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        puVar8 = (undefined8 *)(lVar5 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
        goto LAB_0273c844;
      }
      uVar7 = uVar7 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_0273c844:
  (*(code *)*puVar8)();
  return;
}


