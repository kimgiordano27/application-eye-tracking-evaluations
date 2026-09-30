/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 05614c80
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
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
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_07286378;
      thunk_FUN_0333a630();
      plVar4 = (long *)thunk_FUN_032f70fc();
      if (plVar4 == (long *)0x0) goto LAB_05614f44;
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (1 < *(uint *)(param_1 + 0x18)) {
        *(undefined8 *)(param_1 + 0x28) = uVar5;
        thunk_FUN_0333a630((undefined8 *)(param_1 + 0x28),uVar5);
        if (2 < *(uint *)(param_1 + 0x18)) {
          *(undefined8 *)(param_1 + 0x30) = *unaff_x28;
          thunk_FUN_0333a630();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05614f44;
          if (3 < *(uint *)(param_1 + 0x18)) {
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x20);
            thunk_FUN_0333a630();
            if ((unaff_x25 & 1) == 0) {
              uVar2 = *(uint *)(param_1 + 0x18);
              puVar3 = (undefined8 *)PTR_DAT_07286388;
            }
            else {
              uVar2 = *(uint *)(param_1 + 0x18);
              puVar3 = (undefined8 *)PTR_DAT_072863a0;
            }
            if (4 < uVar2) {
              *(undefined8 *)(param_1 + 0x40) = *puVar3;
              thunk_FUN_0333a630();
              FUN_057ab314(param_1,0);
              if (unaff_x23 != 0) {
                FUN_057b7f84();
                if (*(long *)(unaff_x19 + 0x90) != 0) {
                  FUN_057b7f84(*(long *)(unaff_x19 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
                  lVar6 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x90);
                  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_032934b8();
                  }
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_032cd7c0();
                  }
                  lVar6 = *(long *)(*(long *)(*unaff_x27 + 0xc0) + 0x90);
                  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    lVar6 = FUN_032934b8();
                  }
                  **(undefined1 **)(lVar6 + 0xb8) = 0;
                  if (unaff_x22 != 0) {
                    iVar1 = *(int *)(unaff_x22 + 0x18);
                    *(undefined4 *)(unaff_x22 + 0x18) = 0;
                    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
                    if (0 < iVar1) {
                      FUN_05946274(*(undefined8 *)(unaff_x22 + 0x10),0,iVar1,0);
                    }
                    if (unaff_x21 != 0) {
                      in_stack_00000038 =
                           (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0xb0))();
                      FUN_04aaf96c(&stack0x00000008,&stack0x00000038,
                                   *(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xc0));
                      in_stack_00000048 = in_stack_00000010;
                      in_stack_00000040 = in_stack_00000008;
                      in_stack_00000058 = in_stack_00000020;
                      in_stack_00000050 = in_stack_00000018;
                      in_stack_00000068 = in_stack_00000030;
                      in_stack_00000060 = in_stack_00000028;
                      while( true ) {
                        uVar7 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                                          (&stack0x00000040,
                                           *(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xf8));
                        if ((uVar7 & 1) == 0) {
                          (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x70))();
                          FUN_0698c1bc();
                          (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x68))();
                          return;
                        }
                        uVar5 = FUN_052d5cb0(&stack0x00000040,
                                             *(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xd8));
                        lVar6 = *(long *)(unaff_x22 + 0x10);
                        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
                        if (lVar6 == 0) break;
                        uVar2 = *(uint *)(unaff_x22 + 0x18);
                        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
                          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
                          thunk_FUN_0333a630();
                        }
                        else {
                          FUN_041e2c78();
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_05614f44;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_05614f44:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


