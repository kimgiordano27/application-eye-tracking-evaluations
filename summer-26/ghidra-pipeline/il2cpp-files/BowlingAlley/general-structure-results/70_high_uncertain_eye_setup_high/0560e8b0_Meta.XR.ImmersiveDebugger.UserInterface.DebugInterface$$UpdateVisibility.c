/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$UpdateVisibility
ENTRY_POINT: 0560e8b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__UpdateVisibility(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
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
  
  FUN_057ab314();
  if (unaff_x24 != 0) {
    FUN_057b7f84();
    if (*(long *)(unaff_x20 + 0x90) != 0) {
      FUN_057b7f84(*(long *)(unaff_x20 + 0x90),*(undefined8 *)PTR_DAT_07286390,0);
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
      if (unaff_x23 != 0) {
        iVar1 = *(int *)(unaff_x23 + 0x18);
        *(undefined4 *)(unaff_x23 + 0x18) = 0;
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_05946274(*(undefined8 *)(unaff_x23 + 0x10),0,iVar1,0);
        }
        if (unaff_x22 != 0) {
          in_stack_00000038 = FUN_04f11b30();
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
                               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8)
                              );
            if ((uVar4 & 1) == 0) {
              FUN_0698c1bc();
              return *(undefined8 *)(unaff_x20 + 0xa0);
            }
            uVar5 = FUN_052d5cb0(&stack0x00000040,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
            lVar3 = *(long *)(unaff_x23 + 0x10);
            *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
            if (lVar3 == 0) break;
            uVar2 = *(uint *)(unaff_x23 + 0x18);
            if (uVar2 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


