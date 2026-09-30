/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$Update
ENTRY_POINT: 056110e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__Update(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar11;
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
  
  puVar5 = PTR_DAT_07286380;
  puVar4 = PTR_DAT_07286370;
  puVar3 = PTR_DAT_072794b0;
  uVar6 = (**(code **)(param_1 + 0x2d8))(param_2,*(undefined8 *)(param_1 + 0x2e0));
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8();
    }
    if (**(char **)(lVar7 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_05611688;
      uVar6 = FUN_04af1804(*(long *)(unaff_x20 + 0xa8),*(undefined8 *)puVar4);
      lVar11 = *(long *)(unaff_x20 + 0x90);
      lVar7 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar7 == 0) goto LAB_05611688;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_072863a8;
      thunk_FUN_0333a630();
      plVar8 = (long *)thunk_FUN_032f70fc();
      if (plVar8 == (long *)0x0) goto LAB_05611688;
      uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x28),uVar9);
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05611688;
      if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar6 & 1) == 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar7 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar9 = FUN_057ab314(lVar7,0);
      if (lVar11 == 0) goto LAB_05611688;
      FUN_057b7f84(lVar11,uVar9,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05611688;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286398,0);
      plVar8 = *(long **)(unaff_x20 + 0x90);
      if (plVar8 == (long *)0x0) goto LAB_05611688;
      uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2f68(uVar9,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05611688;
      FUN_057b761c(*(long *)(unaff_x20 + 0x90),0);
    }
  }
  plVar8 = (long *)FUN_0698c3b0();
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_032934b8(lVar7);
  }
  if (plVar8 == (long *)0x0) {
Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__set_Severity:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x135) & 1) ==
        0) {
      FUN_032934b8();
    }
    plVar8 = (long *)thunk_FUN_032a56a0();
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (plVar8,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_032934b8();
    }
    if (**(char **)(lVar7 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xb0) == 0) goto LAB_05611688;
      uVar6 = FUN_04af1804(*(long *)(unaff_x20 + 0xb0),*(undefined8 *)puVar4);
      lVar11 = *(long *)(unaff_x20 + 0x90);
      lVar7 = FUN_032d5d3c(*(undefined8 *)puVar3,5);
      if (lVar7 == 0) goto LAB_05611688;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
      thunk_FUN_0333a630();
      plVar10 = (long *)thunk_FUN_032f70fc();
      if (plVar10 == (long *)0x0) goto LAB_05611688;
      uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      if (*(uint *)(lVar7 + 0x18) < 2) {
LAB_0561168c:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x28),uVar9);
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar5;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05611688;
      if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar6 & 1) == 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar7 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_0561168c;
      *(undefined8 *)(lVar7 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar9 = FUN_057ab314(lVar7,0);
      if (lVar11 == 0) goto LAB_05611688;
      FUN_057b7f84(lVar11,uVar9,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05611688;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
    }
  }
  else if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
          (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7))
  goto Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__set_Severity;
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_032934b8();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_032934b8();
  }
  **(undefined1 **)(lVar7 + 0xb8) = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[3];
    *(undefined4 *)(plVar8 + 3) = 0;
    *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
    if (0 < (int)lVar7) {
      FUN_05946274(plVar8[2],0,(int)lVar7,0);
    }
    if (unaff_x22 != 0) {
      in_stack_00000038 = FUN_04f1bb1c();
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
        lVar7 = plVar8[2];
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar1 = *(uint *)(plVar8 + 3);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(plVar8 + 3) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78(plVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
LAB_05611688:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


