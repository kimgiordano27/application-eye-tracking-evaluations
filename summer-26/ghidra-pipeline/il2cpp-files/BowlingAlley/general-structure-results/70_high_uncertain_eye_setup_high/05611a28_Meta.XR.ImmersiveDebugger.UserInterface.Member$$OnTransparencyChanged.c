/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$OnTransparencyChanged
ENTRY_POINT: 05611a28
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


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Member__OnTransparencyChanged
          (long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
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
  
  if ((DAT_076d3878 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_07283518);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_07286370);
    thunk_FUN_032e1da0(PTR_DAT_07286378);
    thunk_FUN_032e1da0(PTR_DAT_07286380);
    thunk_FUN_032e1da0(PTR_DAT_07286388);
    thunk_FUN_032e1da0(PTR_DAT_07286390);
    thunk_FUN_032e1da0(PTR_DAT_07286398);
    thunk_FUN_032e1da0(PTR_DAT_072863a0);
    thunk_FUN_032e1da0(PTR_DAT_072863a8);
    DAT_076d3878 = 1;
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000038 = 0;
  if (param_2 == 0) goto LAB_05612190;
  plVar6 = (long *)FUN_0698c3b0(param_2,*(undefined8 *)(param_1 + 0xa8),0);
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_032934b8(lVar12);
  }
  puVar3 = PTR_DAT_072794f0;
  if (plVar6 != (long *)0x0) {
    if (*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar12 + 0x130)) {
      plVar6 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
             lVar12) {
      plVar6 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar7 = FUN_06bece64(plVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    plVar6 = (long *)FUN_03afd47c(*(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80));
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar7 = FUN_06bece64(plVar6,0,0);
  puVar5 = PTR_DAT_07286380;
  puVar4 = PTR_DAT_07286370;
  puVar3 = PTR_DAT_072794b0;
  if ((uVar7 & 1) != 0) {
    FUN_02d9d3f0(param_1);
    thunk_FUN_032e1da0(PTR_DAT_07283518);
    lVar12 = *(long *)(param_1 + 0x20);
    FUN_02d9d3f0(lVar12);
    uVar13 = *(undefined8 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    FUN_02d9d3e0();
    uVar9 = FUN_059324dc(uVar9,0);
    uVar11 = thunk_FUN_032e1da0(PTR_DAT_072863b0);
    uVar9 = FUN_057ab61c(uVar11,uVar13,uVar9,0);
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar11 = thunk_FUN_032a56a0();
    FUN_0592371c(uVar11,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar11,param_3);
  }
  plVar8 = *(long **)(param_1 + 0xa8);
  if (plVar8 == (long *)0x0) goto LAB_05612190;
  uVar7 = (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
  if ((uVar7 & 1) == 0) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_032934b8();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_032934b8();
    }
    if (**(char **)(lVar12 + 0xb8) != '\0') {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_05612190;
      uVar7 = FUN_04af1804(*(long *)(param_1 + 0xa8),*(undefined8 *)puVar4);
      lVar14 = *(long *)(param_1 + 0x90);
      lVar12 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar12 == 0) goto LAB_05612190;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_072863a8;
      thunk_FUN_0333a630();
      plVar8 = (long *)thunk_FUN_032f70fc(param_1,0);
      if (plVar8 == (long *)0x0) goto LAB_05612190;
      uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x28) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x28),uVar9);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_05612190;
      if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar7 & 1) == 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar12 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar9 = FUN_057ab314(lVar12,0);
      if (lVar14 == 0) goto LAB_05612190;
      FUN_057b7f84(lVar14,uVar9,0);
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_05612190;
      FUN_057b7f84(*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_07286398,0);
      plVar8 = *(long **)(param_1 + 0x90);
      if (plVar8 == (long *)0x0) goto LAB_05612190;
      uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2f68(uVar9,0);
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_05612190;
      FUN_057b761c(*(long *)(param_1 + 0x90),0);
    }
  }
  plVar8 = (long *)FUN_0698c3b0(param_2,*(undefined8 *)(param_1 + 0xb0),0);
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_032934b8(lVar12);
  }
  if (plVar8 == (long *)0x0) {
LAB_05611e54:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98) + 0x135) & 1) == 0)
    {
      FUN_032934b8();
    }
    plVar8 = (long *)thunk_FUN_032a56a0();
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (plVar8,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0));
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_032934b8();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_032934b8();
    }
    if (**(char **)(lVar12 + 0xb8) != '\0') {
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_05612190;
      uVar7 = FUN_04af1804(*(long *)(param_1 + 0xb0),*(undefined8 *)puVar4);
      lVar14 = *(long *)(param_1 + 0x90);
      lVar12 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar12 == 0) goto LAB_05612190;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
      thunk_FUN_0333a630();
      plVar10 = (long *)thunk_FUN_032f70fc(param_1,0);
      if (plVar10 == (long *)0x0) goto LAB_05612190;
      uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if (*(uint *)(lVar12 + 0x18) < 2) {
LAB_05612194:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar12 + 0x28) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x28),uVar9);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_05612190;
      if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar7 & 1) == 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar12 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_05612194;
      *(undefined8 *)(lVar12 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar9 = FUN_057ab314(lVar12,0);
      if (lVar14 == 0) goto LAB_05612190;
      FUN_057b7f84(lVar14,uVar9,0);
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_05612190;
      FUN_057b7f84(*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
    }
  }
  else if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
          (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
          )) goto LAB_05611e54;
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_032934b8();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_032934b8();
  }
  **(undefined1 **)(lVar12 + 0xb8) = 0;
  if (plVar8 != (long *)0x0) {
    lVar12 = plVar8[3];
    *(undefined4 *)(plVar8 + 3) = 0;
    *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
    if (0 < (int)lVar12) {
      FUN_05946274(plVar8[2],0,(int)lVar12,0);
    }
    if (plVar6 != (long *)0x0) {
      in_stack_00000038 =
           FUN_04f1e30c(plVar6,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
      FUN_04aaf96c(&stack0x00000008,&stack0x00000038,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0));
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000068 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000028;
      while( true ) {
        uVar7 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                          (&stack0x00000040,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf8));
        if ((uVar7 & 1) == 0) {
          FUN_0698c1bc(param_2,*(undefined8 *)(param_1 + 0xb8),plVar8,0);
          return *(undefined8 *)(param_1 + 0xa0);
        }
        uVar9 = FUN_052d5cb0(&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8));
        lVar12 = plVar8[2];
        lVar14 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf0);
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar1 = *(uint *)(plVar8 + 3);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(plVar8 + 3) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78(plVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
LAB_05612190:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


