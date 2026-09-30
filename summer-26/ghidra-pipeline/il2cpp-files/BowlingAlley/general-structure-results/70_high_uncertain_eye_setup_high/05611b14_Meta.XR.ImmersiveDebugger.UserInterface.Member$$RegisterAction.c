/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$RegisterAction
ENTRY_POINT: 05611b14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Member__RegisterAction(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
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
  
  lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_032934b8(lVar11);
  }
  puVar3 = PTR_DAT_072794f0;
  if (param_1 != (long *)0x0) {
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar11 + 0x130)) {
      param_1 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
             lVar11) {
      param_1 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_06bece64(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    param_1 = (long *)FUN_03afd47c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_06bece64(param_1,0,0);
  puVar5 = PTR_DAT_07286380;
  puVar4 = PTR_DAT_07286370;
  puVar3 = PTR_DAT_072794b0;
  if ((uVar6 & 1) != 0) {
    FUN_02d9d3f0();
    thunk_FUN_032e1da0(PTR_DAT_07283518);
    lVar11 = *(long *)(unaff_x20 + 0x20);
    FUN_02d9d3f0(lVar11);
    uVar12 = *(undefined8 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    FUN_02d9d3e0();
    uVar8 = FUN_059324dc(uVar8,0);
    uVar10 = thunk_FUN_032e1da0(PTR_DAT_072863b0);
    uVar8 = FUN_057ab61c(uVar10,uVar12,uVar8,0);
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar10 = thunk_FUN_032a56a0();
    FUN_0592371c(uVar10,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar10);
  }
  plVar7 = *(long **)(unaff_x20 + 0xa8);
  if (plVar7 == (long *)0x0) goto LAB_05612190;
  uVar6 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
  if ((uVar6 & 1) == 0) {
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_032934b8();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_032934b8();
    }
    if (**(char **)(lVar11 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_05612190;
      uVar6 = FUN_04af1804(*(long *)(unaff_x20 + 0xa8),*(undefined8 *)puVar4);
      lVar13 = *(long *)(unaff_x20 + 0x90);
      lVar11 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar11 == 0) goto LAB_05612190;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_072863a8;
      thunk_FUN_0333a630();
      plVar7 = (long *)thunk_FUN_032f70fc();
      if (plVar7 == (long *)0x0) goto LAB_05612190;
      uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x28) = uVar8;
      thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x28),uVar8);
      if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05612190;
      if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar6 & 1) == 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar11 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar8 = FUN_057ab314(lVar11,0);
      if (lVar13 == 0) goto LAB_05612190;
      FUN_057b7f84(lVar13,uVar8,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05612190;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286398,0);
      plVar7 = *(long **)(unaff_x20 + 0x90);
      if (plVar7 == (long *)0x0) goto LAB_05612190;
      uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2f68(uVar8,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05612190;
      FUN_057b761c(*(long *)(unaff_x20 + 0x90),0);
    }
  }
  plVar7 = (long *)FUN_0698c3b0();
  lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_032934b8(lVar11);
  }
  if (plVar7 == (long *)0x0) {
LAB_05611e54:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x135) & 1) ==
        0) {
      FUN_032934b8();
    }
    plVar7 = (long *)thunk_FUN_032a56a0();
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (plVar7,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_032934b8();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_032934b8();
    }
    if (**(char **)(lVar11 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xb0) == 0) goto LAB_05612190;
      uVar6 = FUN_04af1804(*(long *)(unaff_x20 + 0xb0),*(undefined8 *)puVar4);
      lVar13 = *(long *)(unaff_x20 + 0x90);
      lVar11 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar11 == 0) goto LAB_05612190;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
      thunk_FUN_0333a630();
      plVar9 = (long *)thunk_FUN_032f70fc();
      if (plVar9 == (long *)0x0) goto LAB_05612190;
      uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      if (*(uint *)(lVar11 + 0x18) < 2) {
LAB_05612194:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar11 + 0x28) = uVar8;
      thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x28),uVar8);
      if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05612190;
      if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar6 & 1) == 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar11 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_05612194;
      *(undefined8 *)(lVar11 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar8 = FUN_057ab314(lVar11,0);
      if (lVar13 == 0) goto LAB_05612190;
      FUN_057b7f84(lVar13,uVar8,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05612190;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
    }
  }
  else if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
          (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
          )) goto LAB_05611e54;
  lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_032934b8();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_032934b8();
  }
  **(undefined1 **)(lVar11 + 0xb8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[3];
    *(undefined4 *)(plVar7 + 3) = 0;
    *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
    if (0 < (int)lVar11) {
      FUN_05946274(plVar7[2],0,(int)lVar11,0);
    }
    if (param_1 != (long *)0x0) {
      in_stack_00000038 =
           FUN_04f1e30c(param_1,*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
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
        uVar8 = FUN_052d5cb0(&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
        lVar11 = plVar7[2];
        lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
        *(int *)((long)plVar7 + 0x1c) = *(int *)((long)plVar7 + 0x1c) + 1;
        if (lVar11 == 0) break;
        uVar1 = *(uint *)(plVar7 + 3);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(plVar7 + 3) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78(plVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
LAB_05612190:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


