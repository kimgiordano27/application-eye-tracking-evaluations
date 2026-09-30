/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 076c3a34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long *plVar7;
  int unaff_w23;
  uint unaff_w24;
  long unaff_x26;
  long unaff_x27;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined4 uStack0000000000000034;
  
  FUN_04447ba8(PTR_DAT_09f2ac90);
  FUN_04447ba8(PTR_DAT_09f1e5f0);
  FUN_04447ba8(PTR_DAT_09f2dca0);
  *(undefined1 *)(unaff_x27 + 0xd7d) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_w23 == 0x1401) {
    if ((int)unaff_w24 < 1) {
      unaff_w24 = 4;
    }
    in_stack_00000020 = (ulong)unaff_w24;
    uStack0000000000000034 = 0;
    auVar8 = FUN_04db4dcc(&stack0x00000020,unaff_w20,0x200,0,0,*(undefined8 *)PTR_DAT_09f2dc98);
  }
  else if (unaff_w23 == 0x1403) {
    if ((int)unaff_w24 < 1) {
      unaff_w24 = 8;
    }
    in_stack_00000020 = (ulong)unaff_w24;
    uStack0000000000000034 = 0;
    auVar8 = FUN_04db4d2c(&stack0x00000020,unaff_w20,0x200,0,0,*(undefined8 *)PTR_DAT_09f2dc90);
  }
  else {
    if (unaff_w23 != 0x1406) {
      plVar7 = *(long **)(unaff_x26 + 0x10);
      if (plVar7 != (long *)0x0) {
        lVar1 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,2);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(lVar1 + 0x18) == 0) {
LAB_076c3ca0:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR_DAT_09f2dca0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x20));
        in_stack_00000020 = *(ulong *)PTR_DAT_09f2ad60;
        uVar2 = FUN_07a742b0(&stack0x00000020,0);
        if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_076c3ca0;
        *(undefined8 *)(lVar1 + 0x28) = uVar2;
        thunk_FUN_044bb4b4();
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2ac68) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076c3c58;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f2ac68,0);
LAB_076c3c58:
        (*(code *)*puVar3)(plVar7,0x31,lVar1,puVar3[1]);
      }
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      goto LAB_076c3c74;
    }
    if ((int)unaff_w24 < 1) {
      unaff_w24 = 0x10;
    }
    in_stack_00000020 = (ulong)unaff_w24;
    uStack0000000000000034 = 0;
    auVar8 = FUN_04db4c8c(&stack0x00000020,unaff_w20,0x200,0,0,*(undefined8 *)PTR_DAT_09f2dc88);
  }
  FUN_0613d148(&stack0x00000008,auVar8._0_8_,auVar8._8_8_,*(undefined8 *)PTR_DAT_09f2ac90);
LAB_076c3c74:
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  return;
}


