/*
FUNCTION_NAME: UnityEngine.UIElements.DefaultDragAndDropClient$$DragCleanup
ENTRY_POINT: 040c9b18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_UIElements_DefaultDragAndDropClient__DragCleanup(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 in_w8;
  undefined4 uVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long unaff_x19;
  long lVar19;
  undefined8 uVar20;
  long in_stack_00000018;
  
  *(undefined4 *)(unaff_x19 + 0x10) = in_w8;
LAB_040c9b34:
  plVar11 = *(long **)(unaff_x19 + 0x28);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = (**(code **)(*plVar11 + 0x728))(plVar11,0x34,*(undefined8 *)(*plVar11 + 0x730));
  puVar2 = PTR_DAT_045887d0;
  lVar13 = *(long *)PTR_DAT_045887d0;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar13 = *(long *)puVar2;
  }
  lVar19 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar19 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar13 = *(long *)puVar2;
    }
    uVar20 = **(undefined8 **)(lVar13 + 0xb8);
    lVar19 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04588868);
    FUN_02e6c3f4(lVar19,uVar20,*(undefined8 *)PTR_DAT_04588870,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar11 = lVar19;
    thunk_FUN_01f51358(plVar11,lVar19);
  }
  uVar12 = FUN_022fbdd0(uVar12,lVar19,*(undefined8 *)PTR_DAT_04588860);
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(in_stack_00000018 + 0x38) = uVar12;
  thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38));
  plVar11 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *plVar11;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
        puVar14 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_040c9c64;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,
                         0);
LAB_040c9c64:
  uVar12 = (*(code *)*puVar14)(plVar11,puVar14[1]);
  *(undefined8 *)(in_stack_00000018 + 0x40) = uVar12;
  thunk_FUN_01f51358();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
LAB_040ca088:
  puVar9 = PTR_DAT_04588858;
  puVar8 = PTR_DAT_04588850;
  puVar7 = PTR_DAT_04588848;
  puVar6 = PTR_DAT_04588840;
  puVar5 = Method_System_Convert_ToUInt64__;
  puVar4 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  plVar11 = *(long **)(in_stack_00000018 + 0x40);
  do {
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_040c9d08;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_040c9d08:
    uVar16 = (*(code *)*puVar14)(plVar11,puVar14[1]);
    if ((uVar16 & 1) == 0) {
      FUN_040ca204();
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
      plVar11 = *(long **)(in_stack_00000018 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = (**(code **)(*plVar11 + 0x888))(plVar11,*(undefined8 *)(*plVar11 + 0x890));
      *(undefined8 *)(in_stack_00000018 + 0x28) = uVar12;
      thunk_FUN_01f51358();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      uVar12 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar16 = FUN_03583338(uVar12,0,0);
      if ((uVar16 & 1) != 0) {
        uVar20 = *(undefined8 *)puVar5;
        uVar12 = *(undefined8 *)(in_stack_00000018 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar20 = FUN_03579868(uVar20,0);
        uVar16 = FUN_03583338(uVar12,uVar20,0);
        unaff_x19 = in_stack_00000018;
        if ((uVar16 & 1) != 0) goto LAB_040c9b34;
      }
      return 0;
    }
    plVar11 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar14 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_040c9d74;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_040c9d74:
    uVar12 = (*(code *)*puVar14)(plVar11,puVar14[1]);
    *(undefined8 *)(in_stack_00000018 + 0x48) = uVar12;
    thunk_FUN_01f51358();
    plVar11 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar10 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
    if (iVar10 == 4) {
LAB_040c9dd0:
      plVar11 = *(long **)(in_stack_00000018 + 0x48);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      uVar20 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar16 = FUN_03583338(uVar12,uVar20,0);
      if (((uVar16 & 1) == 0) &&
         (uVar16 = FUN_040c9694(*(undefined8 *)(in_stack_00000018 + 0x48)), (uVar16 & 1) != 0)) {
        lVar13 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar7);
        *(bool *)(in_stack_00000018 + 0x50) = lVar13 != 0;
        lVar13 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar6);
        *(bool *)(in_stack_00000018 + 0x51) = lVar13 != 0;
        lVar13 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar8);
        *(bool *)(in_stack_00000018 + 0x52) = lVar13 != 0;
        lVar13 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar9);
        *(bool *)(in_stack_00000018 + 0x53) = lVar13 != 0;
        if (*(char *)(in_stack_00000018 + 0x50) == '\0') {
          if (*(char *)(in_stack_00000018 + 0x51) != '\0') {
            *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
            thunk_FUN_01f51358();
            *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
            return 1;
          }
          if (*(char *)(in_stack_00000018 + 0x52) == '\0') break;
        }
      }
    }
    else {
      plVar11 = *(long **)(in_stack_00000018 + 0x48);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar10 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
      if (iVar10 == 0x10) goto LAB_040c9dd0;
    }
    plVar11 = *(long **)(in_stack_00000018 + 0x40);
  } while( true );
  if (lVar13 == 0) {
    plVar11 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
    }
    else {
      lVar13 = *(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__;
      bVar1 = *(byte *)(lVar13 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar1) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar18 = (long *)0x0;
        }
      }
      *(long **)(in_stack_00000018 + 0x58) = plVar18;
      if (*(byte *)(*plVar11 + 0x130) < bVar1) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_01f51358(in_stack_00000018 + 0x58,plVar11);
    if ((*(long *)(in_stack_00000018 + 0x58) == 0) ||
       (uVar16 = FUN_034b1454(*(long *)(in_stack_00000018 + 0x58),0), (uVar16 & 1) == 0)) {
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x58),0);
      *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x48),0);
      goto LAB_040ca088;
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x18));
    uVar15 = 3;
  }
  else {
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
    thunk_FUN_01f51358();
    uVar15 = 2;
  }
  *(undefined4 *)(in_stack_00000018 + 0x10) = uVar15;
  return 1;
}


