/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateIcon
ENTRY_POINT: 05614dac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateIcon(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x27;
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
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_032934b8();
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar3 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x90);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_032934b8();
  }
  **(undefined1 **)(lVar3 + 0xb8) = 0;
  if (unaff_x22 != 0) {
    iVar1 = *(int *)(unaff_x22 + 0x18);
    *(undefined4 *)(unaff_x22 + 0x18) = 0;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05946274(*(undefined8 *)(unaff_x22 + 0x10),0,iVar1,0);
    }
    if (unaff_x21 != 0) {
      in_stack_00000038 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0xb0))();
      FUN_04aaf96c(&stack0x00000008,&stack0x00000038,
                   *(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xc0));
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000068 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000028;
      while( true ) {
        uVar4 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                          (&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xf8));
        if ((uVar4 & 1) == 0) {
          (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x70))();
          FUN_0698c1bc();
          (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x68))();
          return;
        }
        uVar5 = FUN_052d5cb0(&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xd8));
        lVar3 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar3 == 0) break;
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
          thunk_FUN_0333a630();
        }
        else {
          FUN_041e2c78();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


