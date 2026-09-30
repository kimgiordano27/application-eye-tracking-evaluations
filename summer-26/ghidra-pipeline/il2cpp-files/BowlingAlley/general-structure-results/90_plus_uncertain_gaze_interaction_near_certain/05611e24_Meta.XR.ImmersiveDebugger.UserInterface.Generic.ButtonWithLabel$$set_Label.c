/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_Label
ENTRY_POINT: 05611e24
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_Label(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long lVar7;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
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
  
  if (unaff_x23 == (long *)0x0) {
LAB_05611e54:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x135) & 1) ==
        0) {
      FUN_032934b8();
    }
    unaff_x23 = (long *)thunk_FUN_032a56a0();
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (unaff_x23,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_032934b8();
    }
    if (**(char **)(lVar3 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xb0) == 0) goto LAB_05612190;
      uVar4 = FUN_04af1804(*(long *)(unaff_x20 + 0xb0),*unaff_x29);
      lVar7 = *(long *)(unaff_x20 + 0x90);
      lVar3 = FUN_032d5d3c(*unaff_x27,5);
      if (lVar3 == 0) goto LAB_05612190;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_05612194;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
      thunk_FUN_0333a630();
      plVar5 = (long *)thunk_FUN_032f70fc();
      if (plVar5 == (long *)0x0) goto LAB_05612190;
      uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (*(uint *)(lVar3 + 0x18) < 2) {
LAB_05612194:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      thunk_FUN_0333a630((undefined8 *)(lVar3 + 0x28),uVar6);
      if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_05612194;
      *(undefined8 *)(lVar3 + 0x30) = *unaff_x28;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05612190;
      if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_05612194;
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar4 & 1) == 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_05612194;
      *(undefined8 *)(lVar3 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar6 = FUN_057ab314(lVar3,0);
      if (lVar7 == 0) goto LAB_05612190;
      FUN_057b7f84(lVar7,uVar6,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05612190;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
    }
  }
  else if ((*(byte *)(*unaff_x23 + 0x130) < *(byte *)(param_1 + 0x130)) ||
          (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) !=
           param_1)) goto LAB_05611e54;
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  **(undefined1 **)(lVar3 + 0xb8) = 0;
  if (unaff_x23 != (long *)0x0) {
    lVar3 = unaff_x23[3];
    *(undefined4 *)(unaff_x23 + 3) = 0;
    *(int *)((long)unaff_x23 + 0x1c) = *(int *)((long)unaff_x23 + 0x1c) + 1;
    if (0 < (int)lVar3) {
      FUN_05946274(unaff_x23[2],0,(int)lVar3,0);
    }
    if (unaff_x22 != 0) {
      in_stack_00000038 = FUN_04f1e30c();
      FUN_04aaf96c(&stack0x00000008,&stack0x00000038,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000068 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000028;
      while( true ) {
        uVar4 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                          (&stack0x00000040,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8));
        if ((uVar4 & 1) == 0) {
          FUN_0698c1bc();
          return *(undefined8 *)(unaff_x20 + 0xa0);
        }
        uVar6 = FUN_052d5cb0(&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
        lVar3 = unaff_x23[2];
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
        *(int *)((long)unaff_x23 + 0x1c) = *(int *)((long)unaff_x23 + 0x1c) + 1;
        if (lVar3 == 0) break;
        uVar1 = *(uint *)(unaff_x23 + 3);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x23 + 3) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78(unaff_x23,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
LAB_05612190:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


