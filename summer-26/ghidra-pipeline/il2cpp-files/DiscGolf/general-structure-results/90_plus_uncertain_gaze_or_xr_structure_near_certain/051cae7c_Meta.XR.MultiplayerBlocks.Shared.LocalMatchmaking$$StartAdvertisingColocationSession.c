/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartAdvertisingColocationSession
ENTRY_POINT: 051cae7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartAdvertisingColocationSession(void)

{
  bool in_CY;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (!in_CY) {
    uVar5 = unaff_w23 - 1;
    lVar2 = unaff_x20 + (long)unaff_w24 * 0x18;
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_051ca8cc();
    if ((int)uVar5 <= (int)unaff_w19) {
LAB_051cb018:
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      FUN_051ca8cc();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x18;
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      uVar7 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      in_stack_00000060 = uVar6;
      in_stack_00000068 = uVar8;
      in_stack_00000070 = uVar3;
      in_stack_00000080 = uVar7;
      in_stack_00000088 = uVar9;
      in_stack_00000090 = uVar4;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_051cb090;
          lVar2 = unaff_x20 + (long)(int)uVar5 * 0x18;
          uVar9 = *(undefined8 *)(lVar2 + 0x28);
          uVar7 = *(undefined8 *)(lVar2 + 0x20);
          uVar4 = *(undefined8 *)(lVar2 + 0x30);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          in_stack_00000060 = uVar7;
          in_stack_00000068 = uVar9;
          in_stack_00000070 = uVar4;
          in_stack_00000080 = uVar6;
          in_stack_00000088 = uVar8;
          in_stack_00000090 = uVar3;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar5 <= (int)unaff_w19) goto LAB_051cb018;
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        FUN_051ca8cc();
      }
    }
  }
LAB_051cb090:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


