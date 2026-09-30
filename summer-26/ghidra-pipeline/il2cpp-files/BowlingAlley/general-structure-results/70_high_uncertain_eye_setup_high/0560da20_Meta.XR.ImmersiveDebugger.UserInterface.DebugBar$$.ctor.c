/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugBar$$.ctor
ENTRY_POINT: 0560da20
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


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_DebugBar___ctor(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
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
  
  if (**(char **)(param_1 + 0xb8) != '\0') {
    if (*(long *)(unaff_x20 + 0xa8) == 0) goto LAB_0560df60;
    uVar3 = FUN_04af1804(*(long *)(unaff_x20 + 0xa8),*unaff_x29);
    lVar8 = *(long *)(unaff_x20 + 0x90);
    lVar4 = FUN_032d5d3c(*unaff_x27,5);
    if (lVar4 == 0) goto LAB_0560df60;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0560df64;
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_072863a8;
    thunk_FUN_0333a630();
    plVar5 = (long *)thunk_FUN_032f70fc();
    if (plVar5 == (long *)0x0) goto LAB_0560df60;
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_0560df64;
    *(undefined8 *)(lVar4 + 0x28) = uVar6;
    thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x28),uVar6);
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_0560df64;
    *(undefined8 *)(lVar4 + 0x30) = *unaff_x28;
    thunk_FUN_0333a630();
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0560df60;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_0560df64;
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    thunk_FUN_0333a630();
    if ((uVar3 & 1) == 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      puVar2 = (undefined8 *)PTR_DAT_07286388;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0x18);
      puVar2 = (undefined8 *)PTR_DAT_072863a0;
    }
    if (uVar1 < 5) goto LAB_0560df64;
    *(undefined8 *)(lVar4 + 0x40) = *puVar2;
    thunk_FUN_0333a630();
    uVar6 = FUN_057ab314(lVar4,0);
    if (lVar8 == 0) goto LAB_0560df60;
    FUN_057b7f84(lVar8,uVar6,0);
    if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_0560df60;
    FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286398,0);
    plVar5 = *(long **)(unaff_x20 + 0x90);
    if (plVar5 == (long *)0x0) goto LAB_0560df60;
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb2f68(uVar6,0);
    if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_0560df60;
    FUN_057b761c(*(long *)(unaff_x20 + 0x90),0);
  }
  plVar5 = (long *)FUN_0698c3b0();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8(lVar4);
  }
  if (plVar5 == (long *)0x0) {
LAB_0560dc24:
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x135) & 1) ==
        0) {
      FUN_032934b8();
    }
    plVar5 = (long *)thunk_FUN_032a56a0();
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (plVar5,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    if (**(char **)(lVar4 + 0xb8) != '\0') {
      if (*(long *)(unaff_x20 + 0xb0) == 0) goto LAB_0560df60;
      uVar3 = FUN_04af1804(*(long *)(unaff_x20 + 0xb0),*unaff_x29);
      lVar8 = *(long *)(unaff_x20 + 0x90);
      lVar4 = FUN_032d5d3c(*unaff_x27,5);
      if (lVar4 == 0) goto LAB_0560df60;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0560df64;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
      thunk_FUN_0333a630();
      plVar7 = (long *)thunk_FUN_032f70fc();
      if (plVar7 == (long *)0x0) goto LAB_0560df60;
      uVar6 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (*(uint *)(lVar4 + 0x18) < 2) {
LAB_0560df64:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x28),uVar6);
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_0560df64;
      *(undefined8 *)(lVar4 + 0x30) = *unaff_x28;
      thunk_FUN_0333a630();
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0560df60;
      if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_0560df64;
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
      thunk_FUN_0333a630();
      if ((uVar3 & 1) == 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_07286388;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0x18);
        puVar2 = (undefined8 *)PTR_DAT_072863a0;
      }
      if (uVar1 < 5) goto LAB_0560df64;
      *(undefined8 *)(lVar4 + 0x40) = *puVar2;
      thunk_FUN_0333a630();
      uVar6 = FUN_057ab314(lVar4,0);
      if (lVar8 == 0) goto LAB_0560df60;
      FUN_057b7f84(lVar8,uVar6,0);
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_0560df60;
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
    }
  }
  else if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
          (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
  goto LAB_0560dc24;
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_032934b8();
  }
  **(undefined1 **)(lVar4 + 0xb8) = 0;
  if (plVar5 != (long *)0x0) {
    lVar4 = plVar5[3];
    *(undefined4 *)(plVar5 + 3) = 0;
    *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
    if (0 < (int)lVar4) {
      FUN_05946274(plVar5[2],0,(int)lVar4,0);
    }
    if (unaff_x22 != 0) {
      in_stack_00000038 = FUN_04f0f310();
      FUN_04aaf96c(&stack0x00000008,&stack0x00000038,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000068 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000028;
      while( true ) {
        uVar3 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                          (&stack0x00000040,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8));
        if ((uVar3 & 1) == 0) {
          FUN_0698c1bc();
          return *(undefined8 *)(unaff_x20 + 0xa0);
        }
        uVar6 = FUN_052d5cb0(&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
        lVar4 = plVar5[2];
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
        *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + 1;
        if (lVar4 == 0) break;
        uVar1 = *(uint *)(plVar5 + 3);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(plVar5 + 3) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78(plVar5,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
LAB_0560df60:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


