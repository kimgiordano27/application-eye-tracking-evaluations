/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$UpdateAnchor
ENTRY_POINT: 06ddaeac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__UpdateAnchor(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 in_w9;
  long lVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  float fVar9;
  undefined8 in_stack_00000008;
  
  *unaff_x19 = in_w9;
  while( true ) {
    FUN_0701d29c(&stack0x00000008,0);
    plVar7 = (long *)(unaff_x19 + 0x10);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar4 = (long *)FUN_06e12774(*(undefined8 *)(*plVar7 + 0x18),0);
    if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(undefined4 *)(**(long **)(*unaff_x27 + 0xb8) + 0x10);
    uVar5 = thunk_FUN_03cf5234(*unaff_x26);
    FUN_06e1498c(uVar5,uVar2,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(*plVar4 + 0x1b8))(plVar4,*unaff_x25,uVar5,*(undefined8 *)(*plVar4 + 0x1c0));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(*unaff_x20 + 0x448))();
    *plVar7 = 0;
    thunk_FUN_03d233cc(plVar7,0);
    iVar1 = unaff_x19[0xe] + 1;
    unaff_x19[0xe] = iVar1;
    puVar3 = PTR_DAT_08e69590;
    if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *(long *)(**(long **)(*unaff_x27 + 0xb8) + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar8 + 0x18) + -1 <= iVar1) break;
    lVar8 = FUN_05212a24(lVar8,iVar1,*(undefined8 *)PTR_DAT_08e91678);
    plVar7 = (long *)(unaff_x19 + 0x10);
    *plVar7 = lVar8;
    thunk_FUN_03d233cc(plVar7);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    fVar9 = *(float *)(*plVar7 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar9 = fVar9 * 1000.0;
    iVar1 = -0x80000000;
    if (fVar9 != INFINITY) {
      iVar1 = (int)fVar9;
    }
    lVar8 = FUN_07181058(iVar1,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_071787d8(lVar8,0);
    uVar6 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x12,0);
      FUN_0459f0d8(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  lVar8 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<DistanceToInterpolation>
                    (lVar8,*(undefined8 *)PTR_DAT_08e91668);
  plVar7 = (long *)(unaff_x19 + 0xc);
  *plVar7 = lVar8;
  thunk_FUN_03d233cc(plVar7);
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  fVar9 = *(float *)(*plVar7 + 0x10);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar9 = fVar9 * 1000.0;
  iVar1 = -0x80000000;
  if (fVar9 != INFINITY) {
    iVar1 = (int)fVar9;
  }
  lVar8 = FUN_07181058(iVar1,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_071787d8(lVar8,0);
  uVar6 = FUN_0701d1d0(&stack0x00000008,0);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 0x12,0);
    FUN_0459f0d8(unaff_x19 + 2,&stack0x00000008);
    return;
  }
  FUN_0701d29c(&stack0x00000008,0);
  lVar8 = *(long *)(unaff_x19 + 0xc);
  if (lVar8 != 0) {
    plVar7 = (long *)FUN_06e12774(*(undefined8 *)(lVar8 + 0x18),0);
    if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(undefined4 *)(**(long **)(*unaff_x27 + 0xb8) + 0x10);
    uVar5 = thunk_FUN_03cf5234(*unaff_x26);
    FUN_06e1498c(uVar5,uVar2,0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x1b8))(plVar7,*unaff_x25,uVar5,*(undefined8 *)(*plVar7 + 0x1c0));
      if (unaff_x20 != (long *)0x0) {
        (**(code **)(*unaff_x20 + 0x448))();
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 0xc) = 0;
        thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
        FUN_0701d9e0(unaff_x19 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


