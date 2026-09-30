/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 05d67b2c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd
               (code *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
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
  
  do {
    uVar1 = (*param_1)(param_2,unaff_w20,param_4,param_5);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x40);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar4 = *unaff_x26;
      in_stack_00000080 = in_stack_00000040;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      FUN_05075fd4(lVar2,unaff_w20,&stack0x00000080,uVar4);
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar2 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_05d67bc8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x22,8);
LAB_05d67bc8:
    uVar1 = (*(code *)*puVar3)(plVar6,unaff_w20,&stack0x00000020,puVar3[1]);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      uVar4 = *unaff_x26;
      in_stack_00000080 = in_stack_00000020;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000034;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      FUN_05075fd4(lVar2,unaff_w20,&stack0x00000080,uVar4);
    }
    uVar1 = FUN_052b6520(&stack0x00000060,*unaff_x25);
    unaff_w20 = in_stack_00000070;
    if ((uVar1 & 1) == 0) {
      FUN_052b651c(&stack0x00000060,*unaff_x23);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_2 = *(long **)(unaff_x19 + 0x30);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar2 = *param_2;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_05d67b20;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(param_2,*unaff_x22,7);
LAB_05d67b20:
    param_1 = (code *)*puVar3;
    param_5 = puVar3[1];
    param_4 = &stack0x00000040;
  } while( true );
}


