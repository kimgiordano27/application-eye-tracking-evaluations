/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$CreateRoom
ENTRY_POINT: 06ddafe8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__CreateRoom(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  float fVar8;
  undefined8 in_stack_00000008;
  
  while( true ) {
    (**(code **)(param_1 + 0x1b8))(unaff_x22,param_3,unaff_x23,*(undefined8 *)(param_1 + 0x1c0));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    (**(code **)(*unaff_x20 + 0x448))();
    *unaff_x21 = 0;
    thunk_FUN_03d233cc(unaff_x21,0);
    iVar1 = unaff_x19[0xe] + 1;
    unaff_x19[0xe] = iVar1;
    puVar3 = PTR_DAT_08e69590;
    if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *(long *)(**(long **)(*unaff_x27 + 0xb8) + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar7 + 0x18) + -1 <= iVar1) {
      lVar7 = Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<DistanceToInterpolation>
                        (lVar7,*(undefined8 *)PTR_DAT_08e91668);
      plVar5 = (long *)(unaff_x19 + 0xc);
      *plVar5 = lVar7;
      thunk_FUN_03d233cc(plVar5);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      fVar8 = *(float *)(*plVar5 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      fVar8 = fVar8 * 1000.0;
      iVar1 = -0x80000000;
      if (fVar8 != INFINITY) {
        iVar1 = (int)fVar8;
      }
      lVar7 = FUN_07181058(iVar1,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      in_stack_00000008 = FUN_071787d8(lVar7,0);
      uVar4 = FUN_0701d1d0(&stack0x00000008,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
        thunk_FUN_03d233cc(unaff_x19 + 0x12,0);
        FUN_0459f0d8(unaff_x19 + 2,&stack0x00000008);
      }
      else {
        FUN_0701d29c(&stack0x00000008,0);
        lVar7 = *(long *)(unaff_x19 + 0xc);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        plVar5 = (long *)FUN_06e12774(*(undefined8 *)(lVar7 + 0x18),0);
        if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(undefined4 *)(**(long **)(*unaff_x27 + 0xb8) + 0x10);
        uVar6 = thunk_FUN_03cf5234(*unaff_x26);
        FUN_06e1498c(uVar6,uVar2,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        (**(code **)(*plVar5 + 0x1b8))(plVar5,*unaff_x25,uVar6,*(undefined8 *)(*plVar5 + 0x1c0));
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        (**(code **)(*unaff_x20 + 0x448))();
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 0xc) = 0;
        thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
        FUN_0701d9e0(unaff_x19 + 2,0);
      }
      return;
    }
    lVar7 = FUN_05212a24(lVar7,iVar1,*(undefined8 *)PTR_DAT_08e91678);
    plVar5 = (long *)(unaff_x19 + 0x10);
    *plVar5 = lVar7;
    thunk_FUN_03d233cc(plVar5);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    fVar8 = *(float *)(*plVar5 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    fVar8 = fVar8 * 1000.0;
    iVar1 = -0x80000000;
    if (fVar8 != INFINITY) {
      iVar1 = (int)fVar8;
    }
    lVar7 = FUN_07181058(iVar1,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_071787d8(lVar7,0);
    uVar4 = FUN_0701d1d0(&stack0x00000008,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x12,0);
      FUN_0459f0d8(unaff_x19 + 2,&stack0x00000008);
      return;
    }
    FUN_0701d29c(&stack0x00000008,0);
    unaff_x21 = (long *)(unaff_x19 + 0x10);
    if (*unaff_x21 == 0) break;
    unaff_x22 = (long *)FUN_06e12774(*(undefined8 *)(*unaff_x21 + 0x18),0);
    if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(undefined4 *)(**(long **)(*unaff_x27 + 0xb8) + 0x10);
    unaff_x23 = thunk_FUN_03cf5234(*unaff_x26);
    FUN_06e1498c(unaff_x23,uVar2,0);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *unaff_x22;
    param_3 = *unaff_x25;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


