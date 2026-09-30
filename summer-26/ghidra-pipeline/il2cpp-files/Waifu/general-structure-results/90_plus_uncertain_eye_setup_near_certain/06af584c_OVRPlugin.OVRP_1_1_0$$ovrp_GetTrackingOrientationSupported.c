/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationSupported
ENTRY_POINT: 06af584c
PROGRAM: Waifu-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationSupported(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  long unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)(in_x10 + 0xe8)) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06af5898;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c(param_2,*(long *)(in_x10 + 0xe8),0);
LAB_06af5898:
  plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083c2dd8) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_06af5900;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c2dd8,1);
LAB_06af5900:
    (*(code *)*puVar1)(&stack0x00000080,plVar2,puVar1[1]);
    in_stack_00000068 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    in_stack_00000070 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
    in_stack_00000060 = in_stack_00000080;
    while (uVar3 = FUN_05fc2a98(&stack0x00000060,DAT_083e5988), uVar5 = in_stack_00000070,
          (uVar3 & 1) != 0) {
      plVar2 = *(long **)(unaff_x19 + 0x30);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar4 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(unaff_x22 + 0x4b0)) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar2,*(long *)(unaff_x22 + 0x4b0),7);
OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported:
      uVar3 = (*(code *)*puVar1)(plVar2,uVar5 & 0xffffffff,&stack0x00000040,puVar1[1]);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uStack0000000000000088 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        uStack0000000000000094 = (undefined4)uStack0000000000000054;
        in_stack_00000098 = SUB84(uStack0000000000000054,4);
        uStack0000000000000090 = uStack0000000000000050;
        FUN_05d171dc(*(long *)(unaff_x19 + 0x40),uVar5 & 0xffffffff,&stack0x00000080,1,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
      }
      plVar2 = *(long **)(unaff_x19 + 0x30);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar4 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(unaff_x22 + 0x4b0)) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_06af5a50;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar2,*(long *)(unaff_x22 + 0x4b0),8);
LAB_06af5a50:
      uVar3 = (*(code *)*puVar1)(plVar2,uVar5 & 0xffffffff,&stack0x00000020,puVar1[1]);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uStack0000000000000088 = in_stack_00000028;
        in_stack_00000080 = in_stack_00000020;
        uStack0000000000000094 = (undefined4)uStack0000000000000034;
        in_stack_00000098 = SUB84(uStack0000000000000034,4);
        uStack0000000000000090 = uStack0000000000000030;
        FUN_05d171dc(*(long *)(unaff_x19 + 0x48),uVar5 & 0xffffffff,&stack0x00000080,1,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
      }
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


