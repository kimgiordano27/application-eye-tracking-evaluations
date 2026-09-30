/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetTiledMultiResSupported
ENTRY_POINT: 05bef67c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetTiledMultiResSupported(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  long in_stack_00000078;
  
  if ((DAT_0754edab & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116ca8);
    FUN_03188a78(PTR_DAT_070c22b0);
    FUN_03188a78(PTR_DAT_07116cb0);
    FUN_03188a78(PTR_DAT_07112148);
    FUN_03188a78(PTR_DAT_071122b8);
    FUN_03188a78(PTR_DAT_07116cb8);
    FUN_03188a78(PTR_DAT_07116cc0);
    FUN_03188a78(PTR_DAT_07116cc8);
    FUN_03188a78(PTR_DAT_07116cd0);
    FUN_03188a78(PTR_DAT_07116cd8);
    FUN_03188a78(PTR_DAT_07116ce0);
    FUN_03188a78(PTR_DAT_07116ce8);
    DAT_0754edab = 1;
  }
  puVar3 = PTR_DAT_071122b8;
  plVar18 = *(long **)(param_1 + 0x38);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  _uStack0000000000000030 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (plVar18 != (long *)0x0) {
    lVar11 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_071122b8) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar17 + 0x11) * 0x10 + 0x138);
          goto LAB_05bef7b8;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar18,*(long *)PTR_DAT_071122b8,0x11);
LAB_05bef7b8:
    uVar14 = (*(code *)*puVar6)(plVar18,puVar6[1]);
    if ((uVar14 & 1) == 0) {
      return;
    }
    uVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116cd8,0x13);
    puVar2 = PTR_DAT_070c22b0;
    *(undefined8 *)(param_1 + 0x78) = uVar7;
    lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    FUN_069d76f4(lVar11,*(undefined8 *)PTR_DAT_07116ce0,0);
    if (lVar11 != 0) {
      lVar11 = FUN_069d6e00(lVar11,0);
      uVar7 = FUN_069d3a80(param_1,0);
      if (lVar11 != 0) {
        FUN_069e7a48(lVar11,uVar7,0,0);
        if (DAT_075457d6 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457d6 = '\x01';
        }
        puVar12 = *(undefined4 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
        FUN_069e65f0(*puVar12,puVar12[1],puVar12[2],lVar11,0);
        if (DAT_07546bbe == '\0') {
          FUN_03188a78(PTR_DAT_070ce558);
          DAT_07546bbe = '\x01';
        }
        puVar12 = *(undefined4 **)(*(long *)PTR_DAT_070ce558 + 0xb8);
        FUN_069e73d8(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar11,0);
        lVar8 = FUN_069d3b50(lVar11,0);
        if (lVar8 != 0) {
          FUN_069d6f84(lVar8,*(undefined4 *)(param_1 + 0x4c),0);
          lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)PTR_DAT_07116cd0);
          FUN_042e42dc(lVar8,0x18,*(undefined8 *)PTR_DAT_07116cc8);
          *(long *)(param_1 + 0x68) = lVar8;
          if (lVar8 != 0) {
            uVar7 = FUN_042e4c88(lVar8,*(undefined8 *)PTR_DAT_07116cc0);
            puVar5 = PTR_DAT_07116cb8;
            puVar4 = PTR_DAT_07116cb0;
            puVar2 = PTR_DAT_07112148;
            uVar14 = 2;
            *(undefined8 *)(param_1 + 0x70) = uVar7;
            do {
              lVar8 = *(long *)puVar2;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar8 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if (lVar8 == 0) goto LAB_05befc8c;
              if (*(uint *)(lVar8 + 0x18) <= uVar14) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              uVar1 = *(uint *)(lVar8 + uVar14 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar19 = (uint)uVar14,
                 (*(uint *)(param_1 + 0x50) >> (ulong)(uVar19 & 0x1f) & 1) != 0)) {
                plVar18 = *(long **)(param_1 + 0x38);
                if (plVar18 == (long *)0x0) goto LAB_05befc8c;
                lVar13 = *plVar18;
                lVar8 = *(long *)puVar3;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                      goto LAB_05bef9f0;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar6 = (undefined8 *)FUN_031c0d08(plVar18,lVar8,9);
LAB_05bef9f0:
                (*(code *)*puVar6)(plVar18,uVar1,&stack0x00000050,puVar6[1]);
                uVar15 = FUN_05befca0(param_1,uVar1,&stack0x00000078);
                if ((uVar15 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar8 = FUN_05befd48(param_1,uVar1,lVar11,&stack0x00000010);
                  plVar18 = *(long **)(param_1 + 0x78);
                  in_stack_00000078 = lVar8;
                  if (plVar18 == (long *)0x0) goto LAB_05befc8c;
                  if ((lVar8 != 0) &&
                     (lVar13 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar18 + 0x40)),
                     lVar13 == 0)) {
                    uVar7 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
                    FUN_03188b9c(uVar7,0);
                  }
                  if (*(uint *)(plVar18 + 3) <= uVar1) goto LAB_05befc90;
                  plVar18[(long)(int)uVar1 + 4] = lVar8;
                }
                uStack000000000000000c = uVar1;
                uVar7 = thunk_FUN_031c39fc(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar19;
                uVar9 = thunk_FUN_031c39fc(*(undefined8 *)puVar4,&stack0x00000008);
                uVar7 = FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar7,uVar9,0);
                if (*(long *)(param_1 + 0x40) == 0) goto LAB_05befc8c;
                fVar20 = (float)FUN_05beff08(*(long *)(param_1 + 0x40),uVar1);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                fVar21 = fVar20;
                if (uVar1 != 0) {
                  fVar21 = 0.0;
                }
                plVar18 = *(long **)(param_1 + 0x38);
                fVar22 = -fVar20;
                if (4 < uVar19 - 0x13) {
                  fVar22 = fVar21;
                }
                if (plVar18 == (long *)0x0) goto LAB_05befc8c;
                lVar13 = *plVar18;
                lVar8 = *(long *)puVar3;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar13 + (long)(*piVar17 + 9) * 0x10 + 0x138);
                      goto LAB_05befb5c;
                    }
                    uVar15 = uVar15 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar15 != 0);
                }
                puVar6 = (undefined8 *)FUN_031c0d08(plVar18,lVar8,9);
LAB_05befb5c:
                (*(code *)*puVar6)(plVar18,uVar14 & 0xffffffff,&stack0x00000030,puVar6[1]);
                lVar8 = in_stack_00000078;
                if (in_stack_00000078 == 0) goto LAB_05befc8c;
                uVar9 = FUN_069d3a80(in_stack_00000078,0);
                uVar7 = FUN_05befff8(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,fVar20,fVar22,param_1,uVar7,uVar9);
                lVar13 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)PTR_DAT_07116ca8);
                FUN_05971910(lVar13,0);
                lVar10 = *(long *)(param_1 + 0x68);
                *(uint *)(lVar13 + 0x10) = uVar1;
                *(uint *)(lVar13 + 0x14) = uVar19;
                *(long *)(lVar13 + 0x18) = lVar8;
                *(undefined8 *)(lVar13 + 0x20) = uVar7;
                if (lVar10 == 0) goto LAB_05befc8c;
                lVar8 = *(long *)(lVar10 + 0x10);
                lVar16 = *(long *)puVar5;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar8 == 0) goto LAB_05befc8c;
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
                }
                else {
                  FUN_042e4a64(lVar10,lVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != 0x18);
            FUN_05bf02a4(param_1);
            lVar11 = *(long *)(param_1 + 0x58);
            *(undefined1 *)(param_1 + 0x81) = 1;
            if (lVar11 != 0) {
              (**(code **)(lVar11 + 0x18))
                        (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


