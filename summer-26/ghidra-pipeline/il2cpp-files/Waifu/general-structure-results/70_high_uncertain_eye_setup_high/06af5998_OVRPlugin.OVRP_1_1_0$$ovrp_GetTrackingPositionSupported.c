/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionSupported
ENTRY_POINT: 06af5998
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *plVar6;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
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
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
code_r0x06af5998:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x21,unaff_w20,&stack0x00000040,param_1[1]);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x40);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar4 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(unaff_x25 + 0x5c8) + 0x20) + 0xc0) + 0x110);
      in_stack_00000080 = in_stack_00000040;
      *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      FUN_05d171dc(lVar2,unaff_w20,&stack0x00000080,1,uVar4);
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar2 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(unaff_x22 + 0x4b0)) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_06af5a50;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar6,*(long *)(unaff_x22 + 0x4b0),8);
LAB_06af5a50:
    uVar1 = (*(code *)*puVar3)(plVar6,unaff_w20,&stack0x00000020,puVar3[1]);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      uVar4 = *(undefined8 *)
               (*(long *)(*(long *)(*(long *)(unaff_x25 + 0x5c8) + 0x20) + 0xc0) + 0x110);
      in_stack_00000080 = in_stack_00000020;
      *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000034;
      *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      FUN_05d171dc(lVar2,unaff_w20,&stack0x00000080,1,uVar4);
    }
    uVar1 = FUN_05fc2a98(&stack0x00000060,*(undefined8 *)(unaff_x24 + 0x988));
    unaff_w20 = in_stack_00000070;
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar2 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(unaff_x22 + 0x4b0)) {
          param_1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto code_r0x06af5998;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_0338f71c(unaff_x21,*(long *)(unaff_x22 + 0x4b0),7);
  } while( true );
}


