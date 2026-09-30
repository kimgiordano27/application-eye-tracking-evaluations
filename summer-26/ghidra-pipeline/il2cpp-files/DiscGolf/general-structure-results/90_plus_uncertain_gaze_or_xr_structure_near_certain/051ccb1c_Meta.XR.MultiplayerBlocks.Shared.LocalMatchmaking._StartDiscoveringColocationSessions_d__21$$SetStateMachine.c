/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__21$$SetStateMachine
ENTRY_POINT: 051ccb1c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21__SetStateMachine
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_051ccc78:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = (long)param_2;
    do {
      uVar7 = *(uint *)(param_1 + 0x18);
      uVar2 = uVar8 + 1;
      if (uVar7 <= (uint)uVar2) {
LAB_051ccc74:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar5 = param_1 + uVar2 * 0x18;
      uStack0000000000000028 = *(undefined8 *)(lVar5 + 0x28);
      uStack0000000000000020 = *(undefined8 *)(lVar5 + 0x20);
      uStack0000000000000030 = *(undefined8 *)(lVar5 + 0x30);
      if ((long)param_2 <= (long)uVar8) {
        do {
          uVar7 = (uint)uVar8;
          if (*(uint *)(param_1 + 0x18) <= uVar7) goto LAB_051ccc74;
          if (param_4 == 0) goto LAB_051ccc78;
          lVar5 = param_1 + (long)(int)uVar7 * 0x18;
          uVar10 = *(undefined8 *)(lVar5 + 0x28);
          uVar9 = *(undefined8 *)(lVar5 + 0x20);
          uVar6 = *(undefined8 *)(lVar5 + 0x30);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          in_stack_00000070 = uStack0000000000000030;
          in_stack_00000068 = uStack0000000000000028;
          in_stack_00000060 = uStack0000000000000020;
          in_stack_00000040 = uVar9;
          in_stack_00000048 = uVar10;
          in_stack_00000050 = uVar6;
          iVar3 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000060,&stack0x00000040,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar3) break;
          if ((*(uint *)(param_1 + 0x18) <= uVar7) || (*(uint *)(param_1 + 0x18) <= uVar7 + 1))
          goto LAB_051ccc74;
          lVar4 = param_1 + (long)(int)(uVar7 + 1) * 0x18;
          uVar9 = *(undefined8 *)(lVar5 + 0x20);
          uVar6 = *(undefined8 *)(lVar5 + 0x30);
          uVar8 = (ulong)(uVar7 - 1);
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = uVar9;
          *(undefined8 *)(lVar4 + 0x30) = uVar6;
        } while (param_2 <= (int)(uVar7 - 1));
        uVar7 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = (int)uVar8 + 1;
      if (uVar7 <= uVar1) goto LAB_051ccc74;
      lVar5 = param_1 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000028;
      *(undefined8 *)(lVar5 + 0x20) = uStack0000000000000020;
      *(undefined8 *)(lVar5 + 0x30) = uStack0000000000000030;
      uVar8 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}


