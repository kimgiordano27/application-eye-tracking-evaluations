/*
FUNCTION_NAME: System.Array$$FindIndex<OVRPlugin.BoneCapsule>
ENTRY_POINT: 03734328
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__FindIndex<OVRPlugin_BoneCapsule>(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 unaff_w21;
  undefined8 *puVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  
  FUN_0335b6c8(param_1 + 0x70,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xe57) = unaff_w21;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  puVar8 = (undefined8 *)(unaff_x19 + 0x28);
  uVar7 = *puVar8;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    uVar7 = *puVar8;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(uVar7,0,0);
    iVar6 = DAT_08908cd0;
    if ((uVar5 & 1) != 0) {
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      FUN_03703df8(&stack0x00000030,*(undefined8 *)(unaff_x19 + 0x28),1,0);
      *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000050;
      *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x130) = in_stack_00000030;
      *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000048;
      *(long *)(unaff_x19 + 0x140) = in_stack_00000040;
      iVar6 = DAT_08908cd0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x130U >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x130U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    *puVar8 = 0;
    if (iVar6 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(unaff_x19 + 300) = 1;
  }
  if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000030 = 0;
  FUN_05fd5ad4(&stack0x00000030,*(long *)(unaff_x19 + 0x60),
               *(undefined8 *)(*(long *)(*(long *)(DAT_083f1070 + 0x20) + 0xc0) + 0x138));
  in_stack_00000068 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000030;
  in_stack_00000070 = in_stack_00000040;
  while( true ) {
    uVar5 = FUN_05fd5b44(&stack0x00000060,DAT_083e5f58);
    lVar4 = in_stack_00000070;
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (in_stack_00000070 == 0) break;
    puVar8 = (undefined8 *)(in_stack_00000070 + 0x28);
    uVar7 = *puVar8;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      *puVar8 = 0;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      FUN_03704058(&stack0x00000030);
      *(undefined8 *)(lVar4 + 0x150) = in_stack_00000050;
      *(undefined8 *)(lVar4 + 0x138) = in_stack_00000038;
      *(undefined8 *)(lVar4 + 0x130) = in_stack_00000030;
      *(undefined8 *)(lVar4 + 0x148) = in_stack_00000048;
      *(long *)(lVar4 + 0x140) = in_stack_00000040;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + (lVar4 + 0x130U >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (lVar4 + 0x130U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined1 *)(lVar4 + 300) = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


