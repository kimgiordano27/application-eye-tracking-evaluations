/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$MoveNext
ENTRY_POINT: 051cb3c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__MoveNext
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  do {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = in_x9;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    if (unaff_w27 < (int)unaff_w28) {
LAB_051cb3e4:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
        lVar6 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000078;
        *(undefined8 *)(lVar6 + 0x20) = in_stack_00000070;
        *(undefined8 *)(lVar6 + 0x30) = in_stack_00000080;
        return;
      }
LAB_051cb42c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar1 = unaff_w28 * 2;
    uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
    if ((int)uVar1 < unaff_w23) {
      uVar2 = uVar1 + in_stack_00000008._4_4_;
      if ((uVar4 <= uVar2 - 1) || (uVar4 <= uVar2)) goto LAB_051cb42c;
      if (unaff_x21 == 0) goto LAB_051cb430;
      lVar6 = unaff_x19 + (long)(int)(uVar2 - 1) * (long)unaff_w26;
      lVar7 = unaff_x19 + (long)(int)uVar2 * (long)unaff_w26;
      uVar10 = *(undefined8 *)(lVar6 + 0x28);
      uVar9 = *(undefined8 *)(lVar6 + 0x20);
      uVar5 = *(undefined8 *)(lVar6 + 0x30);
      uVar12 = *(undefined8 *)(lVar7 + 0x28);
      uVar11 = *(undefined8 *)(lVar7 + 0x20);
      uVar8 = *(undefined8 *)(lVar7 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      in_stack_00000090 = uVar11;
      in_stack_00000098 = uVar12;
      in_stack_000000a0 = uVar8;
      in_stack_000000b0 = uVar9;
      in_stack_000000b8 = uVar10;
      in_stack_000000c0 = uVar5;
      uVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                         *(undefined8 *)(unaff_x21 + 0x28));
      uVar4 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      uVar1 = uVar1 | uVar2 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + uVar1;
    if (uVar4 <= unaff_w29) goto LAB_051cb42c;
    if (unaff_x21 == 0) {
LAB_051cb430:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)unaff_w26;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000b8 = in_stack_00000078;
    in_stack_000000b0 = in_stack_00000070;
    in_stack_00000090 = uVar8;
    in_stack_00000098 = uVar9;
    in_stack_000000a0 = uVar5;
    iVar3 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000b0,&stack0x00000090,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar3) {
      unaff_w29 = unaff_w25 + unaff_w28;
      goto LAB_051cb3e4;
    }
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w25 + unaff_w28)) goto LAB_051cb42c;
    param_1 = unaff_x19 + (long)(int)(unaff_w25 + unaff_w28) * (long)unaff_w26;
    in_x9 = *(undefined8 *)(unaff_x22 + 0x30);
    unaff_w28 = uVar1;
  } while( true );
}


