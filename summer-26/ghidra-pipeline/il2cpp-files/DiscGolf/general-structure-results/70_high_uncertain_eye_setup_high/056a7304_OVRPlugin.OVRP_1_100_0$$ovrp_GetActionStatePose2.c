/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_GetActionStatePose2
ENTRY_POINT: 056a7304
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0__ovrp_GetActionStatePose2(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  uint uVar7;
  long unaff_x26;
  long *unaff_x27;
  long lVar8;
  ulong uVar9;
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
  
  uVar6 = *unaff_x24;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_054f73b4(uVar6,0);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x27);
  }
  iVar1 = thunk_FUN_02da28e8(uVar6,0);
  uVar6 = FUN_0540c158(iVar1 * *(int *)(unaff_x22 + 0x18),0);
  uVar2 = FUN_055339fc(uVar6,0);
  if (unaff_x26 != 0) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar5 = *(long *)(unaff_x20 + 0x20);
      if (lVar5 == 0) goto LAB_056a75e8;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
        lVar8 = *(long *)(unaff_x29 + 0x28);
        goto LAB_056a7600;
      }
      uVar6 = *(undefined8 *)(lVar5 + lVar8 * 8 + 0x20);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0540cd70(uVar6,0);
      uVar6 = FUN_055339fc(uVar6,0);
      uVar7 = uVar7 + 1;
      *(undefined8 *)(uVar2 + lVar8 * 8) = uVar6;
      lVar8 = (long)(int)uVar7;
    } while ((int)uVar7 < unaff_x26);
  }
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (lVar8 == 0) {
LAB_056a75e8:
    lVar8 = *(long *)(unaff_x29 + 0x28);
  }
  else {
    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
    uVar6 = *unaff_x24;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_054f73b4(uVar6,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x27);
    }
    iVar1 = thunk_FUN_02da28e8(uVar6,0);
    uVar6 = FUN_0540c158(iVar1 * *(int *)(lVar8 + 0x18),0);
    uVar3 = FUN_055339fc(uVar6,0);
    lVar8 = *(long *)(unaff_x20 + 0x10);
    if (lVar8 != 0) {
      uVar6 = FUN_054f73b4(*(long *)(unaff_x23 + 0x50) + 0x20,0);
      iVar1 = thunk_FUN_02da28e8(uVar6,0);
      uVar6 = FUN_0540c158(iVar1 * *(int *)(lVar8 + 0x18),0);
      uVar4 = FUN_055339fc(uVar6,0);
      if (uVar9 != 0) {
        lVar8 = 0;
        uVar7 = 0;
        do {
          lVar5 = *(long *)(unaff_x20 + 0x10);
          if (lVar5 == 0) goto LAB_056a75d0;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_056a75dc:
            lVar8 = *(long *)(unaff_x29 + 0x28);
LAB_056a7600:
            if (lVar8 == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            goto LAB_056a7610;
          }
          uVar6 = *(undefined8 *)(lVar5 + lVar8 * 8 + 0x20);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar6 = FUN_0540cd70(uVar6,0);
          uVar6 = FUN_055339fc(uVar6,0);
          lVar5 = *(long *)(unaff_x20 + 0x18);
          *(undefined8 *)(uVar3 + lVar8 * 8) = uVar6;
          if (lVar5 == 0) goto LAB_056a75d0;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_056a75dc;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(uVar4 + lVar8 * 4) = *(undefined4 *)(lVar5 + lVar8 * 4 + 0x20);
          lVar8 = (long)(int)uVar7;
        } while ((long)(int)uVar7 < (long)uVar9);
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
        lVar8 = *(long *)(*(long *)PTR_DAT_069fb978 + 0xb8);
        FUN_05641fa0(*(undefined4 *)(lVar8 + 0x48),*(undefined4 *)(lVar8 + 0x4c),
                     -*(float *)(lVar8 + 0x50),&stack0x00000040,0);
        *unaff_x19 = uVar9;
        unaff_x19[1] = uVar3;
        unaff_x19[5] = in_stack_00000040;
        *(undefined4 *)(unaff_x19 + 6) = in_stack_00000048;
        unaff_x19[2] = uVar4;
        *(int *)(unaff_x19 + 3) = (int)unaff_x26;
        *(undefined4 *)((long)unaff_x19 + 0x1c) = 0;
        *(ulong *)((long)unaff_x19 + 0x3c) = CONCAT44(uStack000000000000005c,uStack0000000000000058)
        ;
        *(ulong *)((long)unaff_x19 + 0x34) = CONCAT44(uStack0000000000000054,uStack0000000000000050)
        ;
        unaff_x19[4] = uVar2;
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
    lVar8 = *(long *)(unaff_x29 + 0x28);
  }
  if (lVar8 == in_stack_00000088) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_056a7610:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


