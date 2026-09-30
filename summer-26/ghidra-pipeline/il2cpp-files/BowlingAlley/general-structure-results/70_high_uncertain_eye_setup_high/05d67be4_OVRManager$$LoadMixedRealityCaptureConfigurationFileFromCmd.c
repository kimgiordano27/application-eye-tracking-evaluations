/*
FUNCTION_NAME: OVRManager$$LoadMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 05d67be4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LoadMixedRealityCaptureConfigurationFileFromCmd(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
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
    uStack0000000000000008 = uStack0000000000000028;
    uStack0000000000000000 = in_stack_00000020;
    uStack0000000000000014 = uStack0000000000000034;
    uStack0000000000000010 = uStack0000000000000030;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    uVar3 = *unaff_x26;
    in_stack_00000080 = in_stack_00000020;
    *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000034;
    *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    FUN_05075fd4(param_1,unaff_w20,&stack0x00000080,uVar3);
    do {
      uVar1 = FUN_052b6520(&stack0x00000060,*unaff_x25);
      unaff_w20 = in_stack_00000070;
      if ((uVar1 & 1) == 0) {
        FUN_052b651c(&stack0x00000060,*unaff_x23);
        lVar4 = *(long *)(unaff_x19 + 0x20);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar6 = *(long **)(unaff_x19 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 7) * 0x10 + 0x138);
            goto LAB_05d67b20;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x22,7);
LAB_05d67b20:
      uVar1 = (*(code *)*puVar2)(plVar6,unaff_w20,&stack0x00000040,puVar2[1]);
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x40);
        uStack0000000000000008 = uStack0000000000000048;
        uStack0000000000000000 = in_stack_00000040;
        uStack0000000000000014 = uStack0000000000000054;
        uStack0000000000000010 = uStack0000000000000050;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        uVar3 = *unaff_x26;
        in_stack_00000080 = in_stack_00000040;
        *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000054;
        *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        FUN_05075fd4(lVar4,unaff_w20,&stack0x00000080,uVar3);
      }
      plVar6 = *(long **)(unaff_x19 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_05d67bc8;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x22,8);
LAB_05d67bc8:
      uVar1 = (*(code *)*puVar2)(plVar6,unaff_w20,&stack0x00000020,puVar2[1]);
    } while ((uVar1 & 1) == 0);
    param_1 = *(long *)(unaff_x19 + 0x48);
  } while( true );
}


