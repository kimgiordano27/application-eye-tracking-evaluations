/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetTrackingOrientationEnabled
ENTRY_POINT: 06af591c
PROGRAM: Waifu-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetTrackingOrientationEnabled(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 uStack0000000000000060;
  ulong uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uStack0000000000000060 = param_2;
  uStack0000000000000070 = param_1;
  do {
    uVar2 = FUN_05fc2a98(&stack0x00000060,DAT_083e5988);
    uVar1 = uStack0000000000000070;
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    plVar7 = *(long **)(unaff_x19 + 0x30);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x22 + 0x4b0)) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x22 + 0x4b0),7);
OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported:
    uVar2 = (*(code *)*puVar3)(plVar7,uVar1 & 0xffffffff,&stack0x00000040,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x40);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110);
      in_stack_00000080 = in_stack_00000040;
      *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      FUN_05d171dc(lVar5,uVar1 & 0xffffffff,&stack0x00000080,1,uVar4);
    }
    plVar7 = *(long **)(unaff_x19 + 0x30);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x22 + 0x4b0)) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_06af5a50;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x22 + 0x4b0),8);
LAB_06af5a50:
    uVar2 = (*(code *)*puVar3)(plVar7,uVar1 & 0xffffffff,&stack0x00000020,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110);
      in_stack_00000080 = in_stack_00000020;
      *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000034;
      *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      FUN_05d171dc(lVar5,uVar1 & 0xffffffff,&stack0x00000080,1,uVar4);
    }
  } while( true );
}


