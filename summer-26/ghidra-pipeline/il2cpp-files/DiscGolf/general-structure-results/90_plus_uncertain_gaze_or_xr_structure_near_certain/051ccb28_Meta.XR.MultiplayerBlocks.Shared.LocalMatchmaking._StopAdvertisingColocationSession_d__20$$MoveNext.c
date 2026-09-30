/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$MoveNext
ENTRY_POINT: 051ccb28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__MoveNext
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  if (in_NG != in_OV) {
    if (param_1 == 0) {
LAB_051ccc78:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar9 = (long)param_2;
    do {
      uVar8 = *(uint *)(param_1 + 0x18);
      uVar2 = uVar9 + 1;
      if (uVar8 <= (uint)uVar2) {
LAB_051ccc74:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar5 = param_1 + uVar2 * 0x18;
      uVar12 = *(undefined8 *)(lVar5 + 0x28);
      uVar10 = *(undefined8 *)(lVar5 + 0x20);
      uVar6 = *(undefined8 *)(lVar5 + 0x30);
      if ((long)param_2 <= (long)uVar9) {
        do {
          uVar8 = (uint)uVar9;
          if (*(uint *)(param_1 + 0x18) <= uVar8) goto LAB_051ccc74;
          if (param_4 == 0) goto LAB_051ccc78;
          lVar5 = param_1 + (long)(int)uVar8 * 0x18;
          uVar13 = *(undefined8 *)(lVar5 + 0x28);
          uVar11 = *(undefined8 *)(lVar5 + 0x20);
          uVar7 = *(undefined8 *)(lVar5 + 0x30);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          in_stack_00000040 = uVar11;
          in_stack_00000048 = uVar13;
          in_stack_00000050 = uVar7;
          in_stack_00000060 = uVar10;
          in_stack_00000068 = uVar12;
          in_stack_00000070 = uVar6;
          iVar3 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000060,&stack0x00000040,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar3) break;
          if ((*(uint *)(param_1 + 0x18) <= uVar8) || (*(uint *)(param_1 + 0x18) <= uVar8 + 1))
          goto LAB_051ccc74;
          lVar4 = param_1 + (long)(int)(uVar8 + 1) * 0x18;
          uVar11 = *(undefined8 *)(lVar5 + 0x20);
          uVar7 = *(undefined8 *)(lVar5 + 0x30);
          uVar9 = (ulong)(uVar8 - 1);
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar4 + 0x20) = uVar11;
          *(undefined8 *)(lVar4 + 0x30) = uVar7;
        } while (param_2 <= (int)(uVar8 - 1));
        uVar8 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = (int)uVar9 + 1;
      if (uVar8 <= uVar1) goto LAB_051ccc74;
      lVar5 = param_1 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar5 + 0x28) = uVar12;
      *(undefined8 *)(lVar5 + 0x20) = uVar10;
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      uVar9 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}


