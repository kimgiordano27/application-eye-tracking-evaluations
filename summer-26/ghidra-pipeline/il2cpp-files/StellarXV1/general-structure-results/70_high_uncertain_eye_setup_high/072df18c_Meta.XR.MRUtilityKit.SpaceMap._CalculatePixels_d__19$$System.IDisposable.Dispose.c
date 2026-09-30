/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap.<CalculatePixels>d__19$$System.IDisposable.Dispose
ENTRY_POINT: 072df18c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap_<CalculatePixels>d__19__System_IDisposable_Dispose(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  int in_w9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float unaff_s8;
  float fVar8;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_040d65a8();
    }
    iVar1 = -0x80000000;
    if (unaff_s8 * 1000.0 != INFINITY) {
      iVar1 = (int)(unaff_s8 * 1000.0);
    }
    lVar3 = FUN_076fb804(iVar1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_076f1ee4(lVar3,0);
    uVar4 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0x12,0);
      FUN_04eab790(unaff_x19 + 2,&stack0x00000018);
      return;
    }
    FUN_07591f7c(&stack0x00000018,0);
    plVar7 = (long *)(unaff_x19 + 0x10);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar5 = (long *)FUN_07315970(*(undefined8 *)(*plVar7 + 0x18),0);
    if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar2 = *(undefined4 *)(**(long **)(*unaff_x27 + 0xb8) + 0x10);
    uVar6 = thunk_FUN_040b4efc(*unaff_x26);
    FUN_07317ad4(uVar6,uVar2,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    (**(code **)(*plVar5 + 0x1b8))(plVar5,*unaff_x25,uVar6,*(undefined8 *)(*plVar5 + 0x1c0));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    (**(code **)(*unaff_x20 + 0x448))();
    *plVar7 = 0;
    thunk_FUN_040ec700(plVar7,0);
    plVar7 = *(long **)(*unaff_x27 + 0xb8);
    iVar1 = unaff_x19[0xe] + 1;
    unaff_x19[0xe] = iVar1;
    if (*plVar7 == 0) break;
    lVar3 = *(long *)(*plVar7 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar3 + 0x18) + -1 <= iVar1) {
      lVar3 = FUN_04f9f4d0(lVar3,*(undefined8 *)PTR_DAT_092c4110);
      plVar7 = (long *)(unaff_x19 + 0xc);
      *plVar7 = lVar3;
      thunk_FUN_040ec700(plVar7);
      if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      fVar8 = *(float *)(*plVar7 + 0x10);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      fVar8 = fVar8 * 1000.0;
      iVar1 = -0x80000000;
      if (fVar8 != INFINITY) {
        iVar1 = (int)fVar8;
      }
      lVar3 = FUN_076fb804(iVar1,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000018 = FUN_076f1ee4(lVar3,0);
      uVar4 = FUN_07591eb4(&stack0x00000018,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
        thunk_FUN_040ec700(unaff_x19 + 0x12,0);
        FUN_04eab790(unaff_x19 + 2,&stack0x00000018);
        return;
      }
      FUN_07591f7c(&stack0x00000018,0);
      lVar3 = *(long *)(unaff_x19 + 0xc);
      if (lVar3 != 0) {
        plVar7 = (long *)FUN_07315970(*(undefined8 *)(lVar3 + 0x18),0);
        if (**(long **)(*unaff_x27 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar2 = *(undefined4 *)(**(long **)(*unaff_x27 + 0xb8) + 0x10);
        uVar6 = thunk_FUN_040b4efc(*unaff_x26);
        FUN_07317ad4(uVar6,uVar2,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x1b8))(plVar7,*unaff_x25,uVar6,*(undefined8 *)(*plVar7 + 0x1c0));
          if (unaff_x20 != (long *)0x0) {
            (**(code **)(*unaff_x20 + 0x448))();
            *unaff_x19 = 0xfffffffe;
            *(undefined8 *)(unaff_x19 + 0xc) = 0;
            thunk_FUN_040ec700(unaff_x19 + 0xc,0);
            FUN_075926a0(unaff_x19 + 2,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = FUN_05c26ab8(lVar3,iVar1,*unaff_x29);
    plVar7 = (long *)(unaff_x19 + 0x10);
    *plVar7 = lVar3;
    thunk_FUN_040ec700(plVar7);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_s8 = *(float *)(*plVar7 + 0x10);
    in_w9 = *(int *)(*unaff_x28 + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


