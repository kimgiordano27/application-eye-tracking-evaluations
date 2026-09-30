/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$AddSlider
ENTRY_POINT: 056129cc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 137
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Member__AddSlider(char *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
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
  
  if (*param_1 != '\0') {
    if (*(long *)(unaff_x20 + 0xb0) == 0) goto LAB_05612c98;
    uVar4 = FUN_04af1804(*(long *)(unaff_x20 + 0xb0),*unaff_x29);
    lVar8 = *(long *)(unaff_x20 + 0x90);
    lVar5 = FUN_032d5d3c(*unaff_x27,5);
    if (lVar5 == 0) goto LAB_05612c98;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_05612c9c;
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
    thunk_FUN_0333a630();
    plVar6 = (long *)thunk_FUN_032f70fc();
    if (plVar6 == (long *)0x0) goto LAB_05612c98;
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (*(uint *)(lVar5 + 0x18) < 2) {
LAB_05612c9c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
    thunk_FUN_0333a630((undefined8 *)(lVar5 + 0x28),uVar7);
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_05612c9c;
    *(undefined8 *)(lVar5 + 0x30) = *unaff_x28;
    thunk_FUN_0333a630();
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05612c98;
    if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_05612c9c;
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    thunk_FUN_0333a630();
    if ((uVar4 & 1) == 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      puVar3 = (undefined8 *)PTR_DAT_07286388;
    }
    else {
      uVar2 = *(uint *)(lVar5 + 0x18);
      puVar3 = (undefined8 *)PTR_DAT_072863a0;
    }
    if (uVar2 < 5) goto LAB_05612c9c;
    *(undefined8 *)(lVar5 + 0x40) = *puVar3;
    thunk_FUN_0333a630();
    uVar7 = FUN_057ab314(lVar5,0);
    if (lVar8 == 0) goto LAB_05612c98;
    FUN_057b7f84(lVar8,uVar7,0);
    if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_05612c98;
    FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_032934b8();
  }
  **(undefined1 **)(lVar5 + 0xb8) = 0;
  if (unaff_x23 != 0) {
    iVar1 = *(int *)(unaff_x23 + 0x18);
    *(undefined4 *)(unaff_x23 + 0x18) = 0;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05946274(*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
    }
    if (unaff_x22 != 0) {
      in_stack_00000038 = FUN_04f20b34();
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
        uVar7 = FUN_052d5cb0(&stack0x00000040,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
        lVar5 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78();
        }
      }
    }
  }
LAB_05612c98:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


