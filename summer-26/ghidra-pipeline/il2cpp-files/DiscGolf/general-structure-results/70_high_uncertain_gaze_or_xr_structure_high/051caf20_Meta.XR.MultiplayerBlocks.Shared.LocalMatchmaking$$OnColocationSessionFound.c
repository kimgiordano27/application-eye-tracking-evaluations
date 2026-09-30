/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 051caf20
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined1 *param_4,undefined1 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar5;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 in_stack_00000090;
  
  uStack0000000000000068 = param_2._8_8_;
  uStack0000000000000060 = param_2._0_8_;
  uVar5 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  while( true ) {
    uStack0000000000000070 = in_stack_00000050;
    uStack0000000000000080 = uVar4;
    uStack0000000000000088 = uVar5;
    iVar1 = (*in_x9)(*(undefined8 *)(unaff_x22 + 0x40),param_4,param_5,
                     *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
      do {
        unaff_w24 = unaff_w24 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_051cb090;
        lVar3 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
        uVar2 = *(undefined8 *)(lVar3 + 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 0x20);
        uVar4 = *(undefined8 *)(lVar3 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        in_stack_00000090 = in_stack_00000050;
        uStack0000000000000088 = in_stack_00000048;
        uStack0000000000000080 = in_stack_00000040;
        uStack0000000000000060 = uVar5;
        uStack0000000000000068 = uVar2;
        uStack0000000000000070 = uVar4;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar3 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        FUN_051ca8cc();
        return unaff_w19;
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      FUN_051ca8cc();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    param_4 = (undefined1 *)&stack0x00000080;
    in_x9 = *(code **)(unaff_x22 + 0x18);
    param_5 = (undefined1 *)&stack0x00000060;
    uStack0000000000000060 = in_stack_00000040;
    uStack0000000000000068 = in_stack_00000048;
    in_stack_00000090 = uVar2;
  }
LAB_051cb090:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


