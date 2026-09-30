/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetTiledMultiResLevel
ENTRY_POINT: 05bef6f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0__ovrp_GetTiledMultiResLevel(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  
  FUN_03188a78(PTR_DAT_07116cc8);
  FUN_03188a78(PTR_DAT_07116cd0);
  FUN_03188a78(PTR_DAT_07116cd8);
  FUN_03188a78(PTR_DAT_07116ce0);
  FUN_03188a78(PTR_DAT_07116ce8);
  *(undefined1 *)(unaff_x20 + 0xdab) = 1;
  puVar3 = PTR_DAT_071122b8;
  plVar17 = *(long **)(unaff_x19 + 0x38);
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
  if (plVar17 != (long *)0x0) {
    lVar10 = *plVar17;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_071122b8) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
          goto LAB_05bef7b8;
        }
        uVar13 = uVar13 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_031c0d08(plVar17,*(long *)PTR_DAT_071122b8,0x11);
LAB_05bef7b8:
    uVar13 = (*(code *)*puVar6)(plVar17,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      return;
    }
    uVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116cd8,0x13);
    puVar2 = PTR_DAT_070c22b0;
    *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar2);
    FUN_069d76f4(lVar10,*(undefined8 *)PTR_DAT_07116ce0,0);
    if (lVar10 != 0) {
      lVar10 = FUN_069d6e00(lVar10,0);
      uVar7 = FUN_069d3a80();
      if (lVar10 != 0) {
        FUN_069e7a48(lVar10,uVar7,0,0);
        if (DAT_075457d6 == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457d6 = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
        FUN_069e65f0(*puVar11,puVar11[1],puVar11[2],lVar10,0);
        if (DAT_07546bbe == '\0') {
          FUN_03188a78(PTR_DAT_070ce558);
          DAT_07546bbe = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_070ce558 + 0xb8);
        FUN_069e73d8(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
        lVar10 = FUN_069d3b50(lVar10,0);
        if (lVar10 != 0) {
          FUN_069d6f84(lVar10,*(undefined4 *)(unaff_x19 + 0x4c),0);
          lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)PTR_DAT_07116cd0);
          FUN_042e42dc(lVar10,0x18,*(undefined8 *)PTR_DAT_07116cc8);
          *(long *)(unaff_x19 + 0x68) = lVar10;
          if (lVar10 != 0) {
            uVar7 = FUN_042e4c88(lVar10,*(undefined8 *)PTR_DAT_07116cc0);
            puVar5 = PTR_DAT_07116cb8;
            puVar4 = PTR_DAT_07116cb0;
            puVar2 = PTR_DAT_07112148;
            uVar13 = 2;
            *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
            do {
              lVar10 = *(long *)puVar2;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar10 = *(long *)puVar2;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_05befc8c;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              uVar1 = *(uint *)(lVar10 + uVar13 * 4 + 0x20);
              if ((uVar1 != 0xffffffff) &&
                 (uVar18 = (uint)uVar13,
                 (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar18 & 0x1f) & 1) != 0)) {
                plVar17 = *(long **)(unaff_x19 + 0x38);
                if (plVar17 == (long *)0x0) goto LAB_05befc8c;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar3;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_05bef9f0;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_031c0d08(plVar17,lVar10,9);
LAB_05bef9f0:
                (*(code *)*puVar6)(plVar17,uVar1,&stack0x00000050,puVar6[1]);
                uVar14 = FUN_05befca0();
                if ((uVar14 & 1) == 0) {
                  uStack0000000000000024 = CONCAT44(in_stack_00000068,uStack0000000000000064);
                  uStack0000000000000018 = in_stack_00000058;
                  in_stack_00000010 = in_stack_00000050;
                  uStack000000000000001c = uStack000000000000005c;
                  uStack0000000000000020 = in_stack_00000060;
                  lVar10 = FUN_05befd48();
                  plVar17 = *(long **)(unaff_x19 + 0x78);
                  in_stack_00000078 = lVar10;
                  if (plVar17 == (long *)0x0) goto LAB_05befc8c;
                  if ((lVar10 != 0) &&
                     (lVar12 = thunk_FUN_031c3cac(lVar10,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar12 == 0)) {
                    uVar7 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
                    FUN_03188b9c(uVar7,0);
                  }
                  if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_05befc90;
                  plVar17[(long)(int)uVar1 + 4] = lVar10;
                }
                uStack000000000000000c = uVar1;
                uVar7 = thunk_FUN_031c39fc(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
                uStack0000000000000008 = uVar18;
                uVar8 = thunk_FUN_031c39fc(*(undefined8 *)puVar4,&stack0x00000008);
                FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar7,uVar8,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05befc8c;
                fVar19 = (float)FUN_05beff08(*(long *)(unaff_x19 + 0x40),uVar1);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                fVar20 = fVar19;
                if (uVar1 != 0) {
                  fVar20 = 0.0;
                }
                plVar17 = *(long **)(unaff_x19 + 0x38);
                fVar21 = -fVar19;
                if (4 < uVar18 - 0x13) {
                  fVar21 = fVar20;
                }
                if (plVar17 == (long *)0x0) goto LAB_05befc8c;
                lVar12 = *plVar17;
                lVar10 = *(long *)puVar3;
                uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar10) {
                      puVar6 = (undefined8 *)(lVar12 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                      goto LAB_05befb5c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_031c0d08(plVar17,lVar10,9);
LAB_05befb5c:
                (*(code *)*puVar6)(plVar17,uVar13 & 0xffffffff,&stack0x00000030,puVar6[1]);
                lVar10 = in_stack_00000078;
                if (in_stack_00000078 == 0) goto LAB_05befc8c;
                FUN_069d3a80(in_stack_00000078,0);
                uVar7 = FUN_05befff8(in_stack_00000050 & 0xffffffff,in_stack_00000050._4_4_,
                                     in_stack_00000058,uStack0000000000000030,uStack0000000000000034
                                     ,uStack0000000000000038,fVar19,fVar21);
                lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)PTR_DAT_07116ca8);
                FUN_05971910(lVar12,0);
                lVar9 = *(long *)(unaff_x19 + 0x68);
                *(uint *)(lVar12 + 0x10) = uVar1;
                *(uint *)(lVar12 + 0x14) = uVar18;
                *(long *)(lVar12 + 0x18) = lVar10;
                *(undefined8 *)(lVar12 + 0x20) = uVar7;
                if (lVar9 == 0) goto LAB_05befc8c;
                lVar10 = *(long *)(lVar9 + 0x10);
                lVar15 = *(long *)puVar5;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_05befc8c;
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
                }
                else {
                  FUN_042e4a64(lVar9,lVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x18);
            FUN_05bf02a4();
            lVar10 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
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


