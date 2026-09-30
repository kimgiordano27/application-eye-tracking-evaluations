/*
FUNCTION_NAME: UnityEngine.UIElements.DragAndDropData$$.ctor
ENTRY_POINT: 040c9b7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_UIElements_DragAndDropData___ctor(long param_1)

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
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar18;
  long unaff_x21;
  undefined8 uVar19;
  long *unaff_x23;
  long in_stack_00000018;
  
code_r0x040c9b7c:
  if (unaff_x21 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      param_1 = *unaff_x23;
    }
    uVar19 = **(undefined8 **)(param_1 + 0xb8);
    unaff_x21 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04588868);
    FUN_02e6c3f4(unaff_x21,uVar19,*(undefined8 *)PTR_DAT_04588870,0);
    plVar11 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    *plVar11 = unaff_x21;
    thunk_FUN_01f51358(plVar11,unaff_x21);
  }
  uVar19 = FUN_022fbdd0(unaff_x19,unaff_x21,*(undefined8 *)PTR_DAT_04588860);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(unaff_x20 + 0x38) = uVar19;
  thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x38));
  plVar11 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *plVar11;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
        puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_040c9c64;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,
                         0);
LAB_040c9c64:
  uVar19 = (*(code *)*puVar12)(plVar11,puVar12[1]);
  *(undefined8 *)(in_stack_00000018 + 0x40) = uVar19;
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
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_040c9d08;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_040c9d08:
    uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if ((uVar15 & 1) == 0) {
      FUN_040ca204();
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
      plVar11 = *(long **)(in_stack_00000018 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar19 = (**(code **)(*plVar11 + 0x888))(plVar11,*(undefined8 *)(*plVar11 + 0x890));
      *(undefined8 *)(in_stack_00000018 + 0x28) = uVar19;
      thunk_FUN_01f51358();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      uVar19 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03583338(uVar19,0,0);
      if ((uVar15 & 1) != 0) {
        uVar18 = *(undefined8 *)puVar5;
        uVar19 = *(undefined8 *)(in_stack_00000018 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar18 = FUN_03579868(uVar18,0);
        uVar15 = FUN_03583338(uVar19,uVar18,0);
        if ((uVar15 & 1) != 0) {
          plVar11 = *(long **)(in_stack_00000018 + 0x28);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          unaff_x19 = (**(code **)(*plVar11 + 0x728))
                                (plVar11,0x34,*(undefined8 *)(*plVar11 + 0x730));
          unaff_x23 = (long *)PTR_DAT_045887d0;
          param_1 = *(long *)PTR_DAT_045887d0;
          if (*(int *)(param_1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            param_1 = *unaff_x23;
          }
          unaff_x21 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
          unaff_x20 = in_stack_00000018;
          goto code_r0x040c9b7c;
        }
      }
      return 0;
    }
    plVar11 = *(long **)(in_stack_00000018 + 0x40);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_040c9d74;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_040c9d74:
    uVar19 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    *(undefined8 *)(in_stack_00000018 + 0x48) = uVar19;
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
      uVar19 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      uVar18 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar15 = FUN_03583338(uVar19,uVar18,0);
      if (((uVar15 & 1) == 0) &&
         (uVar15 = FUN_040c9694(*(undefined8 *)(in_stack_00000018 + 0x48)), (uVar15 & 1) != 0)) {
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
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
          plVar17 = (long *)0x0;
        }
      }
      *(long **)(in_stack_00000018 + 0x58) = plVar17;
      if (*(byte *)(*plVar11 + 0x130) < bVar1) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar13) {
        plVar11 = (long *)0x0;
      }
    }
    thunk_FUN_01f51358(in_stack_00000018 + 0x58,plVar11);
    if ((*(long *)(in_stack_00000018 + 0x58) == 0) ||
       (uVar15 = FUN_034b1454(*(long *)(in_stack_00000018 + 0x58),0), (uVar15 & 1) == 0)) {
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x58),0);
      *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x48),0);
      goto LAB_040ca088;
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x18));
    uVar14 = 3;
  }
  else {
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
    thunk_FUN_01f51358();
    uVar14 = 2;
  }
  *(undefined4 *)(in_stack_00000018 + 0x10) = uVar14;
  return 1;
}


