/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetSystemDisplayFrequency2
ENTRY_POINT: 05bef8e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetSystemDisplayFrequency2(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  long *unaff_x26;
  float fVar17;
  float fVar18;
  float fVar19;
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
  
  lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_07116cd0);
  FUN_042e42dc(lVar5,0x18,*(undefined8 *)PTR_DAT_07116cc8);
  *(long *)(unaff_x19 + 0x68) = lVar5;
  if (lVar5 != 0) {
    uVar6 = FUN_042e4c88(lVar5,*(undefined8 *)PTR_DAT_07116cc0);
    puVar4 = PTR_DAT_07116cb8;
    puVar3 = PTR_DAT_07116cb0;
    puVar2 = PTR_DAT_07112148;
    uVar15 = 2;
    *(undefined8 *)(unaff_x19 + 0x70) = uVar6;
    do {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_05befc8c;
      if (*(uint *)(lVar5 + 0x18) <= uVar15) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      uVar1 = *(uint *)(lVar5 + uVar15 * 4 + 0x20);
      if ((uVar1 != 0xffffffff) &&
         (uVar14 = (uint)uVar15, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar14 & 0x1f) & 1) != 0))
      {
        plVar16 = *(long **)(unaff_x19 + 0x38);
        if (plVar16 == (long *)0x0) goto LAB_05befc8c;
        lVar5 = *plVar16;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_05bef9f0;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_031c0d08(plVar16,*unaff_x26,9);
LAB_05bef9f0:
        (*(code *)*puVar7)(plVar16,uVar1,&stack0x00000050,puVar7[1]);
        uVar11 = FUN_05befca0();
        if ((uVar11 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          in_stack_00000018 = in_stack_00000058;
          uStack0000000000000024 = uStack0000000000000064;
          uStack0000000000000020 = uStack0000000000000060;
          lVar5 = FUN_05befd48();
          plVar16 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000078 = lVar5;
          if (plVar16 == (long *)0x0) goto LAB_05befc8c;
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_031c3cac(lVar5,*(undefined8 *)(*plVar16 + 0x40)), lVar8 == 0)) {
            uVar6 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar6,0);
          }
          if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_05befc90;
          plVar16[(long)(int)uVar1 + 4] = lVar5;
        }
        uStack000000000000000c = uVar1;
        uVar6 = thunk_FUN_031c39fc(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = uVar14;
        uVar9 = thunk_FUN_031c39fc(*(undefined8 *)puVar3,&stack0x00000008);
        FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar6,uVar9,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05befc8c;
        fVar17 = (float)FUN_05beff08(*(long *)(unaff_x19 + 0x40),uVar1);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        fVar18 = fVar17;
        if (uVar1 != 0) {
          fVar18 = 0.0;
        }
        plVar16 = *(long **)(unaff_x19 + 0x38);
        fVar19 = -fVar17;
        if (4 < uVar14 - 0x13) {
          fVar19 = fVar18;
        }
        if (plVar16 == (long *)0x0) goto LAB_05befc8c;
        lVar5 = *plVar16;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x26) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_05befb5c;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_031c0d08(plVar16,*unaff_x26,9);
LAB_05befb5c:
        (*(code *)*puVar7)(plVar16,uVar15 & 0xffffffff,&stack0x00000030,puVar7[1]);
        lVar5 = in_stack_00000078;
        if (in_stack_00000078 == 0) goto LAB_05befc8c;
        FUN_069d3a80(in_stack_00000078,0);
        uVar6 = FUN_05befff8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar17,
                             fVar19);
        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_07116ca8);
        FUN_05971910(lVar8,0);
        lVar10 = *(long *)(unaff_x19 + 0x68);
        *(uint *)(lVar8 + 0x10) = uVar1;
        *(uint *)(lVar8 + 0x14) = uVar14;
        *(long *)(lVar8 + 0x18) = lVar5;
        *(undefined8 *)(lVar8 + 0x20) = uVar6;
        if (lVar10 == 0) goto LAB_05befc8c;
        lVar5 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05befc8c;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
        }
        else {
          FUN_042e4a64(lVar10,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x18);
    FUN_05bf02a4();
    lVar5 = *(long *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0x81) = 1;
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


