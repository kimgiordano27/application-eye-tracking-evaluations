/*
FUNCTION_NAME: OVRPlugin$$PollFuture
ENTRY_POINT: 05d2d918
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollFuture
               (code *param_1,long *param_2,ulong param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long unaff_x19;
  uint unaff_w20;
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
  uint in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  do {
    uVar2 = (*param_1)(param_2,param_3,param_4,param_5);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x48);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      uVar4 = *unaff_x26;
      in_stack_00000080 = in_stack_00000020;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000034;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      FUN_05263c8c(lVar3,unaff_w20,&stack0x00000080,uVar4);
    }
    uVar2 = FUN_054f74fc(&stack0x00000060,*unaff_x25);
    unaff_w20 = in_stack_00000070;
    if ((uVar2 & 1) == 0) {
      FUN_054f74f8(&stack0x00000060,*unaff_x23);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar3 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_05d2d860;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(plVar6,*unaff_x22,7);
LAB_05d2d860:
    uVar2 = (*(code *)*puVar1)(plVar6,unaff_w20,&stack0x00000040,puVar1[1]);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      uVar4 = *unaff_x26;
      in_stack_00000080 = in_stack_00000040;
      *(undefined8 *)(unaff_x24 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x24 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      FUN_05263c8c(lVar3,unaff_w20,&stack0x00000080,uVar4);
    }
    param_2 = *(long **)(unaff_x19 + 0x30);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar3 = *param_2;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_05d2d908;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(param_2,*unaff_x22,8);
LAB_05d2d908:
    param_1 = (code *)*puVar1;
    param_5 = puVar1[1];
    param_4 = &stack0x00000020;
    param_3 = (ulong)unaff_w20;
  } while( true );
}


