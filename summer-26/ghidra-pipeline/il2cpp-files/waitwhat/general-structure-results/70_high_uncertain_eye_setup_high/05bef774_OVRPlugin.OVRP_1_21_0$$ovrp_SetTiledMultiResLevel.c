/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_SetTiledMultiResLevel
ENTRY_POINT: 05bef774
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


void OVRPlugin_OVRP_1_21_0__ovrp_SetTiledMultiResLevel(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long in_x9;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  uint uVar16;
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
  
  if (in_x9 != 0) {
    piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)(*piVar15 + 0x11) * 0x10 + 0x138);
        goto LAB_05bef7b8;
      }
      in_x9 = in_x9 + -1;
      piVar15 = piVar15 + 4;
    } while (in_x9 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_05bef7b8:
  uVar6 = (*(code *)*puVar5)();
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116cd8,0x13);
  puVar2 = PTR_DAT_070c22b0;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar7;
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_069d76f4(lVar8,*(undefined8 *)PTR_DAT_07116ce0,0);
  if (lVar8 != 0) {
    lVar8 = FUN_069d6e00(lVar8,0);
    uVar7 = FUN_069d3a80();
    if (lVar8 != 0) {
      FUN_069e7a48(lVar8,uVar7,0,0);
      if (DAT_075457d6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457d6 = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      FUN_069e65f0(*puVar12,puVar12[1],puVar12[2],lVar8,0);
      if (DAT_07546bbe == '\0') {
        FUN_03188a78(PTR_DAT_070ce558);
        DAT_07546bbe = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_070ce558 + 0xb8);
      FUN_069e73d8(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar8,0);
      lVar8 = FUN_069d3b50(lVar8,0);
      if (lVar8 != 0) {
        FUN_069d6f84(lVar8,*(undefined4 *)(unaff_x19 + 0x4c),0);
        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_07116cd0);
        FUN_042e42dc(lVar8,0x18,*(undefined8 *)PTR_DAT_07116cc8);
        *(long *)(unaff_x19 + 0x68) = lVar8;
        if (lVar8 != 0) {
          uVar7 = FUN_042e4c88(lVar8,*(undefined8 *)PTR_DAT_07116cc0);
          puVar4 = PTR_DAT_07116cb8;
          puVar3 = PTR_DAT_07116cb0;
          puVar2 = PTR_DAT_07112148;
          uVar6 = 2;
          *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
          do {
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar8 = *(long *)puVar2;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
            if (lVar8 == 0) goto LAB_05befc8c;
            if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            uVar1 = *(uint *)(lVar8 + uVar6 * 4 + 0x20);
            if ((uVar1 != 0xffffffff) &&
               (uVar16 = (uint)uVar6,
               (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar16 & 0x1f) & 1) != 0)) {
              plVar17 = *(long **)(unaff_x19 + 0x38);
              if (plVar17 == (long *)0x0) goto LAB_05befc8c;
              lVar8 = *plVar17;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x26) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto LAB_05bef9f0;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)FUN_031c0d08(plVar17,*unaff_x26,9);
LAB_05bef9f0:
              (*(code *)*puVar5)(plVar17,uVar1,&stack0x00000050,puVar5[1]);
              uVar13 = FUN_05befca0();
              if ((uVar13 & 1) == 0) {
                in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
                in_stack_00000018 = in_stack_00000058;
                uStack0000000000000024 = uStack0000000000000064;
                uStack0000000000000020 = uStack0000000000000060;
                lVar8 = FUN_05befd48();
                plVar17 = *(long **)(unaff_x19 + 0x78);
                in_stack_00000078 = lVar8;
                if (plVar17 == (long *)0x0) goto LAB_05befc8c;
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_031c3cac(lVar8,*(undefined8 *)(*plVar17 + 0x40)), lVar9 == 0))
                {
                  uVar7 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
                  FUN_03188b9c(uVar7,0);
                }
                if (*(uint *)(plVar17 + 3) <= uVar1) goto LAB_05befc90;
                plVar17[(long)(int)uVar1 + 4] = lVar8;
              }
              uStack000000000000000c = uVar1;
              uVar7 = thunk_FUN_031c39fc(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
              uStack0000000000000008 = uVar16;
              uVar10 = thunk_FUN_031c39fc(*(undefined8 *)puVar3,&stack0x00000008);
              FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar7,uVar10,0);
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
              if (4 < uVar16 - 0x13) {
                fVar20 = fVar19;
              }
              if (plVar17 == (long *)0x0) goto LAB_05befc8c;
              lVar8 = *plVar17;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *unaff_x26) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                    goto LAB_05befb5c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar13 != 0);
              }
              puVar5 = (undefined8 *)FUN_031c0d08(plVar17,*unaff_x26,9);
LAB_05befb5c:
              (*(code *)*puVar5)(plVar17,uVar6 & 0xffffffff,&stack0x00000030,puVar5[1]);
              lVar8 = in_stack_00000078;
              if (in_stack_00000078 == 0) goto LAB_05befc8c;
              FUN_069d3a80(in_stack_00000078,0);
              uVar7 = FUN_05befff8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                                   uStack0000000000000030,uStack0000000000000034,in_stack_00000038,
                                   fVar18,fVar20);
              lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)PTR_DAT_07116ca8);
              FUN_05971910(lVar9,0);
              lVar11 = *(long *)(unaff_x19 + 0x68);
              *(uint *)(lVar9 + 0x10) = uVar1;
              *(uint *)(lVar9 + 0x14) = uVar16;
              *(long *)(lVar9 + 0x18) = lVar8;
              *(undefined8 *)(lVar9 + 0x20) = uVar7;
              if (lVar11 == 0) goto LAB_05befc8c;
              lVar8 = *(long *)(lVar11 + 0x10);
              lVar14 = *(long *)puVar4;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_05befc8c;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
              }
              else {
                FUN_042e4a64(lVar11,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x18);
          FUN_05bf02a4();
          lVar8 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
            ;
            return;
          }
        }
      }
    }
  }
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


