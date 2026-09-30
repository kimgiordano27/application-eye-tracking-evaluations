/*
FUNCTION_NAME: OVRPlugin.OVRP_1_100_0$$ovrp_GetCurrentInteractionProfileName
ENTRY_POINT: 056a7280
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_100_0__ovrp_GetCurrentInteractionProfileName(ulong *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  long lStack0000000000000088;
  
  lVar10 = tpidr_el0;
  lStack0000000000000088 = *(long *)(lVar10 + 0x28);
  if ((DAT_06dbca54 & 1) == 0) {
    FUN_02d965b8(TMPro_TMP_ListPool<IMaterialModifier>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d5f0);
    DAT_06dbca54 = 1;
  }
  puVar4 = TMPro_TMP_ListPool<IMaterialModifier>_TypeInfo;
  puVar3 = PTR_DAT_06a0d5f0;
  puVar2 = PTR_DAT_069fb9c0;
  lVar12 = *(long *)(param_2 + 0x20);
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  if (lVar12 == 0) {
LAB_056a75e8:
    lVar10 = *(long *)(lVar10 + 0x28);
  }
  else {
    uVar1 = *(uint *)(lVar12 + 0x18);
    uVar11 = *(undefined8 *)TMPro_TMP_ListPool<IMaterialModifier>_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_054f73b4(uVar11,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar3);
    }
    iVar5 = thunk_FUN_02da28e8(uVar11,0);
    uVar11 = FUN_0540c158(iVar5 * *(int *)(lVar12 + 0x18),0);
    uVar6 = FUN_055339fc(uVar11,0);
    if ((ulong)uVar1 != 0) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        lVar9 = *(long *)(param_2 + 0x20);
        if (lVar9 == 0) goto LAB_056a75e8;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) {
          lVar10 = *(long *)(lVar10 + 0x28);
          goto LAB_056a7600;
        }
        uVar11 = *(undefined8 *)(lVar9 + lVar12 * 8 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar11 = FUN_0540cd70(uVar11,0);
        uVar11 = FUN_055339fc(uVar11,0);
        uVar13 = uVar13 + 1;
        *(undefined8 *)(uVar6 + lVar12 * 8) = uVar11;
        lVar12 = (long)(int)uVar13;
      } while ((long)(int)uVar13 < (long)(ulong)uVar1);
    }
    lVar12 = *(long *)(param_2 + 0x10);
    if (lVar12 == 0) goto LAB_056a75e8;
    uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
    uVar11 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_054f73b4(uVar11,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar3);
    }
    iVar5 = thunk_FUN_02da28e8(uVar11,0);
    uVar11 = FUN_0540c158(iVar5 * *(int *)(lVar12 + 0x18),0);
    uVar7 = FUN_055339fc(uVar11,0);
    lVar12 = *(long *)(param_2 + 0x10);
    if (lVar12 != 0) {
      uVar11 = FUN_054f73b4(*(long *)(puVar2 + 0x50) + 0x20,0);
      iVar5 = thunk_FUN_02da28e8(uVar11,0);
      uVar11 = FUN_0540c158(iVar5 * *(int *)(lVar12 + 0x18),0);
      uVar8 = FUN_055339fc(uVar11,0);
      if (uVar14 != 0) {
        lVar12 = 0;
        uVar13 = 0;
        do {
          lVar9 = *(long *)(param_2 + 0x10);
          if (lVar9 == 0) goto LAB_056a75d0;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_056a75dc:
            lVar10 = *(long *)(lVar10 + 0x28);
LAB_056a7600:
            if (lVar10 == lStack0000000000000088) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            goto LAB_056a7610;
          }
          uVar11 = *(undefined8 *)(lVar9 + lVar12 * 8 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar11 = FUN_0540cd70(uVar11,0);
          uVar11 = FUN_055339fc(uVar11,0);
          lVar9 = *(long *)(param_2 + 0x18);
          *(undefined8 *)(uVar7 + lVar12 * 8) = uVar11;
          if (lVar9 == 0) goto LAB_056a75d0;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_056a75dc;
          uVar13 = uVar13 + 1;
          *(undefined4 *)(uVar8 + lVar12 * 4) = *(undefined4 *)(lVar9 + lVar12 * 4 + 0x20);
          lVar12 = (long)(int)uVar13;
        } while ((long)(int)uVar13 < (long)uVar14);
      }
      if (*(long *)(param_2 + 0x38) != 0) {
        FUN_056a6864(&stack0x00000010);
        uStack000000000000005c = (undefined4)in_stack_00000018;
        in_stack_00000060 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
        uStack0000000000000054 = (undefined4)in_stack_00000010;
        in_stack_00000058 = (undefined4)((ulong)in_stack_00000010 >> 0x20);
        uStack000000000000006c = (undefined4)in_stack_00000028;
        in_stack_00000070 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
        uStack0000000000000064 = (undefined4)in_stack_00000020;
        in_stack_00000068 = (undefined4)((ulong)in_stack_00000020 >> 0x20);
        uStack000000000000007c = (undefined4)in_stack_00000038;
        in_stack_00000080 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
        uStack0000000000000074 = (undefined4)in_stack_00000030;
        in_stack_00000078 = (undefined4)((ulong)in_stack_00000030 >> 0x20);
        if (DAT_06db4c73 == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          DAT_06db4c73 = '\x01';
        }
        in_stack_00000048 = 0;
        in_stack_00000040 = 0;
        lVar12 = *(long *)(*(long *)PTR_DAT_069fb978 + 0xb8);
        FUN_05641fa0(*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x4c),
                     -*(float *)(lVar12 + 0x50),&stack0x00000040,0);
        *param_1 = uVar14;
        param_1[1] = uVar7;
        param_1[5] = in_stack_00000040;
        *(undefined4 *)(param_1 + 6) = in_stack_00000048;
        param_1[2] = uVar8;
        *(uint *)(param_1 + 3) = uVar1;
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        *(ulong *)((long)param_1 + 0x3c) = CONCAT44(uStack000000000000005c,in_stack_00000058);
        *(ulong *)((long)param_1 + 0x34) = CONCAT44(uStack0000000000000054,in_stack_00000050);
        param_1[4] = uVar6;
        *(ulong *)((long)param_1 + 0x4c) = CONCAT44(uStack000000000000006c,in_stack_00000068);
        *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack0000000000000064,in_stack_00000060);
        *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack000000000000007c,in_stack_00000078);
        *(ulong *)((long)param_1 + 0x54) = CONCAT44(uStack0000000000000074,in_stack_00000070);
        *(undefined4 *)((long)param_1 + 100) = in_stack_00000080;
        if (*(long *)(lVar10 + 0x28) == lStack0000000000000088) {
          return;
        }
        goto LAB_056a7610;
      }
    }
LAB_056a75d0:
    lVar10 = *(long *)(lVar10 + 0x28);
  }
  if (lVar10 == lStack0000000000000088) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_056a7610:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


