/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_TriggerVibrationAction
ENTRY_POINT: 056a73b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0__ovrp_TriggerVibrationAction(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar5;
  long unaff_x23;
  undefined8 *unaff_x24;
  uint unaff_w25;
  long lVar6;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  ulong uVar7;
  uint uVar8;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  long in_stack_00000088;
  
  while( true ) {
    *(undefined8 *)(unaff_x21 + unaff_x28 * 8) = param_1;
    unaff_x28 = (long)(int)unaff_w25;
    if (unaff_x26 <= (int)unaff_w25) break;
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if (lVar6 == 0) goto LAB_056a75e8;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w25) {
      lVar6 = *(long *)(unaff_x29 + 0x28);
      goto LAB_056a7600;
    }
    uVar5 = *(undefined8 *)(lVar6 + unaff_x28 * 8 + 0x20);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0540cd70(uVar5,0);
    param_1 = FUN_055339fc(uVar5,0);
    unaff_w25 = unaff_w25 + 1;
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) {
LAB_056a75e8:
    lVar6 = *(long *)(unaff_x29 + 0x28);
  }
  else {
    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
    uVar5 = *unaff_x24;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_054f73b4(uVar5,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x27);
    }
    iVar1 = thunk_FUN_02da28e8(uVar5,0);
    uVar5 = FUN_0540c158(iVar1 * *(int *)(lVar6 + 0x18),0);
    uVar2 = FUN_055339fc(uVar5,0);
    lVar6 = *(long *)(unaff_x20 + 0x10);
    if (lVar6 != 0) {
      uVar5 = FUN_054f73b4(*(long *)(unaff_x23 + 0x50) + 0x20,0);
      iVar1 = thunk_FUN_02da28e8(uVar5,0);
      uVar5 = FUN_0540c158(iVar1 * *(int *)(lVar6 + 0x18),0);
      uVar3 = FUN_055339fc(uVar5,0);
      if (uVar7 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          lVar4 = *(long *)(unaff_x20 + 0x10);
          if (lVar4 == 0) goto LAB_056a75d0;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_056a75dc:
            lVar6 = *(long *)(unaff_x29 + 0x28);
LAB_056a7600:
            if (lVar6 == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            goto LAB_056a7610;
          }
          uVar5 = *(undefined8 *)(lVar4 + lVar6 * 8 + 0x20);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar5 = FUN_0540cd70(uVar5,0);
          uVar5 = FUN_055339fc(uVar5,0);
          lVar4 = *(long *)(unaff_x20 + 0x18);
          *(undefined8 *)(uVar2 + lVar6 * 8) = uVar5;
          if (lVar4 == 0) goto LAB_056a75d0;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_056a75dc;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(uVar3 + lVar6 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4 + 0x20);
          lVar6 = (long)(int)uVar8;
        } while ((long)(int)uVar8 < (long)uVar7);
      }
      if (*(long *)(unaff_x20 + 0x38) != 0) {
        FUN_056a6864(&stack0x00000010);
        uStack000000000000005c = (undefined4)in_stack_00000018;
        uStack0000000000000060 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack0000000000000054 = (undefined4)in_stack_00000010;
        uStack0000000000000058 = (undefined4)((ulong)in_stack_00000010 >> 0x20);
        uStack000000000000006c = (undefined4)in_stack_00000028;
        uStack0000000000000070 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
        uStack0000000000000064 = (undefined4)in_stack_00000020;
        uStack0000000000000068 = (undefined4)((ulong)in_stack_00000020 >> 0x20);
        uStack000000000000007c = (undefined4)in_stack_00000038;
        in_stack_00000080 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
        uStack0000000000000074 = (undefined4)in_stack_00000030;
        uStack0000000000000078 = (undefined4)((ulong)in_stack_00000030 >> 0x20);
        if (DAT_06db4c73 == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          DAT_06db4c73 = '\x01';
        }
        in_stack_00000048 = 0;
        in_stack_00000040 = 0;
        lVar6 = *(long *)(*(long *)PTR_DAT_069fb978 + 0xb8);
        FUN_05641fa0(*(undefined4 *)(lVar6 + 0x48),*(undefined4 *)(lVar6 + 0x4c),
                     -*(float *)(lVar6 + 0x50),&stack0x00000040,0);
        *unaff_x19 = uVar7;
        unaff_x19[1] = uVar2;
        unaff_x19[5] = in_stack_00000040;
        *(undefined4 *)(unaff_x19 + 6) = in_stack_00000048;
        unaff_x19[2] = uVar3;
        *(int *)(unaff_x19 + 3) = (int)unaff_x26;
        *(undefined4 *)((long)unaff_x19 + 0x1c) = 0;
        *(ulong *)((long)unaff_x19 + 0x3c) = CONCAT44(uStack000000000000005c,uStack0000000000000058)
        ;
        *(ulong *)((long)unaff_x19 + 0x34) = CONCAT44(uStack0000000000000054,uStack0000000000000050)
        ;
        unaff_x19[4] = unaff_x21;
        *(ulong *)((long)unaff_x19 + 0x4c) = CONCAT44(uStack000000000000006c,uStack0000000000000068)
        ;
        *(ulong *)((long)unaff_x19 + 0x44) = CONCAT44(uStack0000000000000064,uStack0000000000000060)
        ;
        *(ulong *)((long)unaff_x19 + 0x5c) = CONCAT44(uStack000000000000007c,uStack0000000000000078)
        ;
        *(ulong *)((long)unaff_x19 + 0x54) = CONCAT44(uStack0000000000000074,uStack0000000000000070)
        ;
        *(undefined4 *)((long)unaff_x19 + 100) = in_stack_00000080;
        if (*(long *)(unaff_x29 + 0x28) == in_stack_00000088) {
          return;
        }
        goto LAB_056a7610;
      }
    }
LAB_056a75d0:
    lVar6 = *(long *)(unaff_x29 + 0x28);
  }
  if (lVar6 == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_056a7610:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


