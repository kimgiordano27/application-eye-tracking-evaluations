/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Values$$.ctor
ENTRY_POINT: 05613ca8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Values___ctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x22;
  long *unaff_x23;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  uVar6 = FUN_06bece64();
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    unaff_x22 = FUN_03afd47c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_06bece64(unaff_x22,0,0);
  puVar5 = PTR_DAT_07286380;
  puVar4 = PTR_DAT_07286370;
  puVar3 = PTR_DAT_072794b0;
  if ((uVar6 & 1) != 0) {
    FUN_02d9d3f0();
    thunk_FUN_032e1da0(PTR_DAT_07283518);
    lVar8 = *(long *)(unaff_x20 + 0x20);
    FUN_02d9d3f0(lVar8);
    uVar12 = *(undefined8 *)(lVar8 + 0x20);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    FUN_02d9d3e0();
    uVar9 = FUN_059324dc(uVar9,0);
    uVar11 = thunk_FUN_032e1da0(PTR_DAT_072863b0);
    uVar9 = FUN_057ab61c(uVar11,uVar12,uVar9,0);
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar11 = thunk_FUN_032a56a0();
    FUN_0592371c(uVar11,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar11);
  }
  plVar7 = *(long **)(unaff_x20 + 0xa8);
  if (plVar7 == (long *)0x0) goto LAB_056142a8;
  uVar6 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
  if ((uVar6 & 1) == 0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    if (**(char **)(lVar8 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_056142a8;
      uVar6 = FUN_04af1804(*(long *)(unaff_x20 + 0xa8),*(undefined8 *)puVar4);
      lVar13 = *(long *)(unaff_x20 + 0x90);
      lVar8 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar8 == 0) goto LAB_056142a8;
      if (*(int *)(lVar8 + 0x18) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_072863a8;
      thunk_FUN_0333a630();
      plVar7 = (long *)thunk_FUN_032f70fc();
      if (plVar7 == (long *)0x0) goto LAB_056142a8;
      uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (*(uint *)(lVar8 + 0x18) < 2)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x28) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x28),uVar9);
      if (*(uint *)(lVar8 + 0x18) < 3)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_056142a8;
      if (*(uint *)(lVar8 + 0x18) < 4)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar6 & 1) == 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar8 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar9 = FUN_057ab314(lVar8,0);
      if (lVar13 == 0) goto LAB_056142a8;
      FUN_057b7f84(lVar13,uVar9,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_056142a8;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286398,0);
      plVar7 = *(long **)(unaff_x20 + 0x90);
      if (plVar7 == (long *)0x0) goto LAB_056142a8;
      uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2f68(uVar9,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_056142a8;
      FUN_057b761c(*(long *)(unaff_x20 + 0x90),0);
    }
  }
  plVar7 = (long *)FUN_0698c3b0();
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8(lVar8);
  }
  if (plVar7 == (long *)0x0) {
LAB_05613f6c:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x135) & 1) ==
        0) {
      FUN_032934b8();
    }
    plVar7 = (long *)thunk_FUN_032a56a0();
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (plVar7,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_032934b8();
    }
    if (**(char **)(lVar8 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xb0) == 0) goto LAB_056142a8;
      uVar6 = FUN_04af1804(*(long *)(unaff_x20 + 0xb0),*(undefined8 *)puVar4);
      lVar13 = *(long *)(unaff_x20 + 0x90);
      lVar8 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar8 == 0) goto LAB_056142a8;
      if (*(int *)(lVar8 + 0x18) == 0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
      thunk_FUN_0333a630();
      plVar10 = (long *)thunk_FUN_032f70fc();
      if (plVar10 == (long *)0x0) goto LAB_056142a8;
      uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if (*(uint *)(lVar8 + 0x18) < 2) {
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar8 + 0x28) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x28),uVar9);
      if (*(uint *)(lVar8 + 0x18) < 3)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_056142a8;
      if (*(uint *)(lVar8 + 0x18) < 4)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar6 & 1) == 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar8 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5)
      goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__OnVisibilityChanged;
      *(undefined8 *)(lVar8 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar9 = FUN_057ab314(lVar8,0);
      if (lVar13 == 0) goto LAB_056142a8;
      FUN_057b7f84(lVar13,uVar9,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_056142a8;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
    }
  }
  else if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
          (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8))
  goto LAB_05613f6c;
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_032934b8();
  }
  **(undefined1 **)(lVar8 + 0xb8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[3];
    *(undefined4 *)(plVar7 + 3) = 0;
    *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
    if (0 < (int)lVar8) {
      FUN_05946274(plVar7[2],0,(int)lVar8,0);
    }
    if (unaff_x22 != 0) {
      in_stack_00000038 =
           FUN_04f25b44(unaff_x22,
                        *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
      FUN_04aaf96c(&stack0x00000008,&stack0x00000038,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000068 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000028;
      while( true ) {
        uVar6 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                          (&stack0x00000040,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8));
        if ((uVar6 & 1) == 0) {
          FUN_0698c1bc();
          return *(undefined8 *)(unaff_x20 + 0xa0);
        }
        uVar9 = FUN_052d5cb0(&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
        lVar8 = plVar7[2];
        lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
        *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
        if (lVar8 == 0) break;
        uVar1 = *(uint *)(plVar7 + 3);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(plVar7 + 3) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78(plVar7,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
LAB_056142a8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


