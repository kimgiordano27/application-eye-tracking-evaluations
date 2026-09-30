/*
FUNCTION_NAME: UnityEngine.UIElements.DragEventsProcessor$$get_useDragEvents
ENTRY_POINT: 040c9b8c
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


undefined8 UnityEngine_UIElements_DragEventsProcessor__get_useDragEvents(void)

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
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  long *unaff_x23;
  long in_stack_00000018;
  
code_r0x040c9b8c:
  lVar11 = *unaff_x23;
LAB_040c9b90:
  uVar20 = **(undefined8 **)(lVar11 + 0xb8);
  lVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04588868);
  FUN_02e6c3f4(lVar12,uVar20,*(undefined8 *)PTR_DAT_04588870,0);
  plVar13 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *plVar13 = lVar12;
  thunk_FUN_01f51358(plVar13,lVar12);
LAB_040c9bd8:
  uVar20 = FUN_022fbdd0(unaff_x19,lVar12,*(undefined8 *)PTR_DAT_04588860);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(unaff_x20 + 0x38) = uVar20;
  thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x38));
  plVar13 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar11 = *plVar13;
  uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
        puVar14 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_040c9c64;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar13,*(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,
                         0);
LAB_040c9c64:
  uVar20 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  *(undefined8 *)(in_stack_00000018 + 0x40) = uVar20;
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
  plVar13 = *(long **)(in_stack_00000018 + 0x40);
  do {
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar13;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar14 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_040c9d08;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar3,0);
LAB_040c9d08:
    uVar16 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    if ((uVar16 & 1) == 0) {
      FUN_040ca204();
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
      plVar13 = *(long **)(in_stack_00000018 + 0x28);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar20 = (**(code **)(*plVar13 + 0x888))(plVar13,*(undefined8 *)(*plVar13 + 0x890));
      *(undefined8 *)(in_stack_00000018 + 0x28) = uVar20;
      thunk_FUN_01f51358();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      uVar20 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar16 = FUN_03583338(uVar20,0,0);
      if ((uVar16 & 1) != 0) {
        uVar19 = *(undefined8 *)puVar5;
        uVar20 = *(undefined8 *)(in_stack_00000018 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar19 = FUN_03579868(uVar19,0);
        uVar16 = FUN_03583338(uVar20,uVar19,0);
        if ((uVar16 & 1) != 0) {
          plVar13 = *(long **)(in_stack_00000018 + 0x28);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          unaff_x19 = (**(code **)(*plVar13 + 0x728))
                                (plVar13,0x34,*(undefined8 *)(*plVar13 + 0x730));
          unaff_x23 = (long *)PTR_DAT_045887d0;
          lVar11 = *(long *)PTR_DAT_045887d0;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *unaff_x23;
          }
          lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
          unaff_x20 = in_stack_00000018;
          if (lVar12 != 0) goto LAB_040c9bd8;
          if (*(int *)(lVar11 + 0xe0) != 0) goto LAB_040c9b90;
          thunk_FUN_01ee6d7c();
          goto code_r0x040c9b8c;
        }
      }
      return 0;
    }
    plVar13 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar13;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar14 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_040c9d74;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,0);
LAB_040c9d74:
    uVar20 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    *(undefined8 *)(in_stack_00000018 + 0x48) = uVar20;
    thunk_FUN_01f51358();
    plVar13 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar10 = (**(code **)(*plVar13 + 0x198))(plVar13,*(undefined8 *)(*plVar13 + 0x1a0));
    if (iVar10 == 4) {
LAB_040c9dd0:
      plVar13 = *(long **)(in_stack_00000018 + 0x48);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar20 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
      uVar19 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar16 = FUN_03583338(uVar20,uVar19,0);
      if (((uVar16 & 1) == 0) &&
         (uVar16 = FUN_040c9694(*(undefined8 *)(in_stack_00000018 + 0x48)), (uVar16 & 1) != 0)) {
        lVar11 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar7);
        *(bool *)(in_stack_00000018 + 0x50) = lVar11 != 0;
        lVar11 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar6);
        *(bool *)(in_stack_00000018 + 0x51) = lVar11 != 0;
        lVar11 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar8);
        *(bool *)(in_stack_00000018 + 0x52) = lVar11 != 0;
        lVar11 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*(undefined8 *)puVar9);
        *(bool *)(in_stack_00000018 + 0x53) = lVar11 != 0;
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
      plVar13 = *(long **)(in_stack_00000018 + 0x48);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar10 = (**(code **)(*plVar13 + 0x198))(plVar13,*(undefined8 *)(*plVar13 + 0x1a0));
      if (iVar10 == 0x10) goto LAB_040c9dd0;
    }
    plVar13 = *(long **)(in_stack_00000018 + 0x40);
  } while( true );
  if (lVar11 == 0) {
    plVar13 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
    }
    else {
      lVar11 = *(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__;
      bVar1 = *(byte *)(lVar11 + 0x130);
      if (*(byte *)(*plVar13 + 0x130) < bVar1) {
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = plVar13;
        if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar11) {
          plVar18 = (long *)0x0;
        }
      }
      *(long **)(in_stack_00000018 + 0x58) = plVar18;
      if (*(byte *)(*plVar13 + 0x130) < bVar1) {
        plVar13 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar11) {
        plVar13 = (long *)0x0;
      }
    }
    thunk_FUN_01f51358(in_stack_00000018 + 0x58,plVar13);
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


