/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilLevel
ENTRY_POINT: 05bef86c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilLevel(long param_1,undefined8 param_2)

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
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  long *unaff_x26;
  float fVar18;
  float fVar19;
  float fVar20;
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
  
  puVar11 = *(undefined4 **)(**(long **)(param_1 + 0xa80) + 0xb8);
  FUN_069e65f0(*puVar11,puVar11[1],puVar11[2],param_2,0);
  if (DAT_07546bbe == '\0') {
    FUN_03188a78(PTR_DAT_070ce558);
    DAT_07546bbe = '\x01';
  }
  puVar11 = *(undefined4 **)(*(long *)PTR_DAT_070ce558 + 0xb8);
  FUN_069e73d8(*puVar11,puVar11[1],puVar11[2],puVar11[3]);
  lVar5 = FUN_069d3b50();
  if (lVar5 != 0) {
    FUN_069d6f84(lVar5,*(undefined4 *)(unaff_x19 + 0x4c),0);
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07116cd0);
    FUN_042e42dc(lVar5,0x18,*(undefined8 *)PTR_DAT_07116cc8);
    *(long *)(unaff_x19 + 0x68) = lVar5;
    if (lVar5 != 0) {
      uVar6 = FUN_042e4c88(lVar5,*(undefined8 *)PTR_DAT_07116cc0);
      puVar4 = PTR_DAT_07116cb8;
      puVar3 = PTR_DAT_07116cb0;
      puVar2 = PTR_DAT_07112148;
      uVar16 = 2;
      *(undefined8 *)(unaff_x19 + 0x70) = uVar6;
      do {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_05befc8c;
        if (*(uint *)(lVar5 + 0x18) <= uVar16) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        uVar1 = *(uint *)(lVar5 + uVar16 * 4 + 0x20);
        if ((uVar1 != 0xffffffff) &&
           (uVar15 = (uint)uVar16, (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar15 & 0x1f) & 1) != 0)
           ) {
          plVar17 = *(long **)(unaff_x19 + 0x38);
          if (plVar17 == (long *)0x0) goto LAB_05befc8c;
          lVar5 = *plVar17;
          uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto LAB_05bef9f0;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_031c0d08(plVar17,*unaff_x26,9);
LAB_05bef9f0:
          (*(code *)*puVar7)(plVar17,uVar1,&stack0x00000050,puVar7[1]);
          uVar12 = FUN_05befca0();
          if ((uVar12 & 1) == 0) {
            in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
            in_stack_00000018 = in_stack_00000058;
            uStack0000000000000024 = uStack0000000000000064;
            uStack0000000000000020 = uStack0000000000000060;
            lVar5 = FUN_05befd48();
            plVar17 = *(long **)(unaff_x19 + 0x78);
            in_stack_00000078 = lVar5;
            if (plVar17 == (long *)0x0) goto LAB_05befc8c;
            if ((lVar5 != 0) &&
               (lVar8 = thunk_FUN_031c3cac(lVar5,*(undefined8 *)(*plVar17 + 0x40)), lVar8 == 0)) {
              uVar6 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
              FUN_03188b9c(uVar6,0);
            }
            if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_05befc90;
            plVar17[(long)(int)uVar1 + 4] = lVar5;
          }
          uStack000000000000000c = uVar1;
          uVar6 = thunk_FUN_031c39fc(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
          uStack0000000000000008 = uVar15;
          uVar9 = thunk_FUN_031c39fc(*(undefined8 *)puVar3,&stack0x00000008);
          FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar6,uVar9,0);
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05befc8c;
          fVar18 = (float)FUN_05beff08(*(long *)(unaff_x19 + 0x40),uVar1);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          fVar19 = fVar18;
          if (uVar1 != 0) {
            fVar19 = 0.0;
          }
          plVar17 = *(long **)(unaff_x19 + 0x38);
          fVar20 = -fVar18;
          if (4 < uVar15 - 0x13) {
            fVar20 = fVar19;
          }
          if (plVar17 == (long *)0x0) goto LAB_05befc8c;
          lVar5 = *plVar17;
          uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto LAB_05befb5c;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_031c0d08(plVar17,*unaff_x26,9);
LAB_05befb5c:
          (*(code *)*puVar7)(plVar17,uVar16 & 0xffffffff,&stack0x00000030,puVar7[1]);
          lVar5 = in_stack_00000078;
          if (in_stack_00000078 == 0) goto LAB_05befc8c;
          FUN_069d3a80(in_stack_00000078,0);
          uVar6 = FUN_05befff8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                               uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                               fVar18,fVar20);
          lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)PTR_DAT_07116ca8);
          FUN_05971910(lVar8,0);
          lVar10 = *(long *)(unaff_x19 + 0x68);
          *(uint *)(lVar8 + 0x10) = uVar1;
          *(uint *)(lVar8 + 0x14) = uVar15;
          *(long *)(lVar8 + 0x18) = lVar5;
          *(undefined8 *)(lVar8 + 0x20) = uVar6;
          if (lVar10 == 0) goto LAB_05befc8c;
          lVar5 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_05befc8c;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
          }
          else {
            FUN_042e4a64(lVar10,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x18);
      FUN_05bf02a4();
      lVar5 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
    }
  }
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


