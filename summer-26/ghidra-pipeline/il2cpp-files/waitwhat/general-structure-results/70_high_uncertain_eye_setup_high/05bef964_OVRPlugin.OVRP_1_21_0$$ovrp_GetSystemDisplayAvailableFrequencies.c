/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetSystemDisplayAvailableFrequencies
ENTRY_POINT: 05bef964
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetSystemDisplayAvailableFrequencies(long param_1)

{
  uint uVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  uint uVar12;
  ulong unaff_x21;
  long *plVar13;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar14;
  float fVar15;
  float unaff_s10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  do {
    lVar8 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    if (lVar8 == 0) {
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x21) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar1 = *(uint *)(lVar8 + unaff_x21 * 4 + 0x20);
    if ((uVar1 != 0xffffffff) &&
       (uVar12 = (uint)unaff_x21, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar12 & 0x1f) & 1) != 0))
    {
      plVar13 = *(long **)(unaff_x19 + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_05befc8c;
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_05bef9f0;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x26,9);
LAB_05bef9f0:
      (*(code *)*puVar3)(plVar13,uVar1,&stack0x00000050,puVar3[1]);
      uVar9 = FUN_05befca0();
      if ((uVar9 & 1) == 0) {
        in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        in_stack_00000018 = in_stack_00000058;
        uStack0000000000000024 = uStack0000000000000064;
        uStack0000000000000020 = uStack0000000000000060;
        lVar8 = FUN_05befd48();
        plVar13 = *(long **)(unaff_x19 + 0x78);
        in_stack_00000078 = lVar8;
        if (plVar13 == (long *)0x0) goto LAB_05befc8c;
        if ((lVar8 != 0) &&
           (lVar4 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar4 == 0)) {
          uVar5 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
          FUN_03188b9c(uVar5,0);
        }
        if (*(uint *)(plVar13 + 3) <= uVar1) goto LAB_05befc90;
        plVar13[(long)(int)uVar1 + 4] = lVar8;
      }
      uStack000000000000000c = uVar1;
      uVar5 = thunk_FUN_031c39fc(*unaff_x28,(long)&stack0x00000008 + 4);
      uStack0000000000000008 = uVar12;
      uVar6 = thunk_FUN_031c39fc(*unaff_x28,&stack0x00000008);
      FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar5,uVar6,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05befc8c;
      fVar14 = (float)FUN_05beff08(*(long *)(unaff_x19 + 0x40),uVar1);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      fVar2 = fVar14;
      if (uVar1 != 0) {
        fVar2 = unaff_s10;
      }
      plVar13 = *(long **)(unaff_x19 + 0x38);
      fVar15 = -fVar14;
      if (4 < uVar12 - 0x13) {
        fVar15 = fVar2;
      }
      if (plVar13 == (long *)0x0) goto LAB_05befc8c;
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_05befb5c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x26,9);
LAB_05befb5c:
      (*(code *)*puVar3)(plVar13,unaff_x21 & 0xffffffff,&stack0x00000030,puVar3[1]);
      lVar8 = in_stack_00000078;
      if (in_stack_00000078 == 0) goto LAB_05befc8c;
      FUN_069d3a80(in_stack_00000078,0);
      uVar5 = FUN_05befff8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar14,
                           fVar15);
      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07116ca8);
      FUN_05971910(lVar4,0);
      lVar7 = *(long *)(unaff_x19 + 0x68);
      *(uint *)(lVar4 + 0x10) = uVar1;
      *(uint *)(lVar4 + 0x14) = uVar12;
      *(long *)(lVar4 + 0x18) = lVar8;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      if (lVar7 == 0) goto LAB_05befc8c;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar10 = *unaff_x29;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05befc8c;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_042e4a64(lVar7,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 0x18) {
      FUN_05bf02a4();
      lVar8 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        return;
      }
      goto LAB_05befc8c;
    }
    param_1 = *unaff_x27;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *unaff_x27;
    }
  } while( true );
}


