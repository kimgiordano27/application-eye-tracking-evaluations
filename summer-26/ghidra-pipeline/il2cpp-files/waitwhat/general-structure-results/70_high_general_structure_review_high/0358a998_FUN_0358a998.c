/*
FUNCTION_NAME: FUN_0358a998
ENTRY_POINT: 0358a998
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_12
*/


void FUN_0358a998(long param_1,void *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int *piVar15;
  long *plVar16;
  uint uVar17;
  undefined1 auStack_488 [248];
  undefined1 auStack_390 [80];
  undefined1 auStack_340 [80];
  undefined1 auStack_2f0 [248];
  undefined1 auStack_1f8 [248];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_68;
  
  puVar4 = PTR_DAT_070d3860;
  puVar3 = PTR_DAT_070d3858;
  puVar2 = PTR_DAT_070d3850;
  puVar13 = PTR_DAT_070d3848;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0358a878 with catch @ 0358a9c8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0358a898 with catch @ 0358a9cc
                        */
                    /* try { // try from 0358a9e8 to 0368a9eb has its CatchHandler @ 0358a9f8 */
  if ((DAT_075470de & 1) == 0) {
                    /* catch() { ... } // from try @ 0358a9e8 with catch @ 0358a9f8 */
                    /* try { // try from 0358a9fc to 0368aa03 has its CatchHandler @ 0358aa0c */
    FUN_03188a78(PTR_DAT_070d36f0);
                    /* try { // try from 0358aa04 to 0368aa0f has its CatchHandler @ 0358a818 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358a9fc with catch @ 0358aa0c
                        */
    FUN_03188a78(PTR_DAT_070d3868);
    FUN_03188a78(PTR_DAT_070d35c8);
    FUN_03188a78(PTR_DAT_070d3760);
    FUN_03188a78(PTR_DAT_070d3768);
                    /* try { // try from 0358aa38 to 0368aa8f has its CatchHandler @ 0358aa38
                       catch() { ... } // from try @ 0358aa38 with catch @ 0358aa38
                       catch() { ... } // from try @ 0358aaa0 with catch @ 0358aa38
                       catch() { ... } // from try @ 0358aba4 with catch @ 0358aa38
                       catch() { ... } // from try @ 0358abe4 with catch @ 0358aa38 */
    FUN_03188a78(PTR_DAT_070d0050);
    FUN_03188a78(PTR_DAT_070d3870);
    FUN_03188a78(PTR_DAT_070d3878);
    FUN_03188a78(PTR_DAT_070d3880);
    FUN_03188a78(PTR_DAT_070d3888);
    FUN_03188a78(PTR_DAT_070d3890);
    FUN_03188a78(PTR_DAT_070d3898);
    FUN_03188a78(PTR_DAT_070d38a0);
    FUN_03188a78(PTR_DAT_070d38a8);
    FUN_03188a78(PTR_DAT_070d38b0);
    FUN_03188a78(PTR_DAT_070d1910);
    FUN_03188a78(PTR_DAT_070d38b8);
    FUN_03188a78(PTR_DAT_070d38c0);
    FUN_03188a78(PTR_DAT_070d38c8);
    FUN_03188a78(PTR_DAT_070d38d0);
    FUN_03188a78(PTR_DAT_070d38d8);
    FUN_03188a78(PTR_DAT_070c3a38);
    FUN_03188a78(PTR_DAT_070d38e0);
    FUN_03188a78(PTR_DAT_070d38e8);
    FUN_03188a78(PTR_DAT_070d38f0);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_070d3860);
    FUN_03188a78(PTR_DAT_070d38f8);
    FUN_03188a78(PTR_DAT_070d3858);
    FUN_03188a78(PTR_DAT_070d3900);
    FUN_03188a78(PTR_DAT_070d36a8);
    FUN_03188a78(PTR_DAT_070d3908);
    FUN_03188a78(PTR_DAT_070d3850);
    FUN_03188a78(PTR_DAT_070d3560);
    FUN_03188a78(PTR_DAT_070d3848);
    FUN_03188a78(PTR_DAT_070d3910);
    FUN_03188a78(PTR_DAT_070d30f0);
    FUN_03188a78(PTR_DAT_070d3918);
    FUN_03188a78(PTR_DAT_070d3920);
    FUN_03188a78(PTR_DAT_070d3928);
    FUN_03188a78(PTR_DAT_070d3930);
    FUN_03188a78(PTR_DAT_070d3938);
    FUN_03188a78(PTR_DAT_070d3940);
    DAT_075470de = 1;
  }
  local_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_74 = 0;
  local_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar13);
  FUN_04b54e0c(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  uVar7 = *(undefined8 *)puVar3;
  uVar14 = *(undefined8 *)((long)param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x100) = uVar14;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_0484ded8(uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  if (*(char *)((long)param_2 + 0x80) == '\0') {
    thunk_FUN_031edd38(PTR_DAT_070c4538);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar13 = PTR_DAT_070d3948;
  }
  else if ((*(char *)((long)param_2 + 0x38) == '\0') &&
          (uVar8 = FUN_035b2228(param_2,0), (uVar8 & 1) == 0)) {
    thunk_FUN_031edd38(PTR_DAT_070c4538);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar13 = PTR_DAT_070d3958;
  }
  else {
    if (*(long *)((long)param_2 + 0x98) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070d3878);
        FUN_042e4268(uVar7,*(undefined8 *)PTR_DAT_070d3870);
        *(undefined8 *)(param_1 + 0x68) = uVar7;
      }
      puVar13 = PTR_DAT_070d1910;
      uVar8 = FUN_035b2228(param_2,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = FUN_0358a558(param_1);
      }
      else {
        uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070d3880);
        FUN_0360b534(uVar7,0);
      }
      puVar4 = PTR_DAT_070d3900;
      puVar3 = PTR_DAT_070d38f8;
      puVar2 = PTR_DAT_070c1b68;
      FUN_035209bc(uVar7,0);
      memcpy(auStack_1f8,param_2,0xf8);
      if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      memcpy(auStack_2f0,auStack_1f8,0xf8);
      uVar14 = FUN_0358b6b4(auStack_2f0);
      *(undefined8 *)(param_1 + 0x98) = uVar14;
      uVar14 = *(undefined8 *)puVar4;
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)((long)param_2 + 0xd0);
      uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
      FUN_0485408c(uVar14,*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0x78) = uVar14;
      uVar14 = FUN_069d3b50(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)puVar2);
      }
      puVar3 = PTR_DAT_070d38f0;
      puVar2 = PTR_DAT_070d0050;
      FUN_069dd2f8(uVar14,0);
      if (*(long *)((long)param_2 + 0xa8) == 0) {
        uVar14 = *(undefined8 *)PTR_DAT_070d3910;
        uVar8 = FUN_03b37ffc(param_1,uVar14,param_1 + 0xb8,*(undefined8 *)PTR_DAT_070d38a8);
        if ((uVar8 & 1) == 0) {
          plVar16 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          if (plVar16 != (long *)0x0) {
            uVar14 = FUN_057bf780(*(undefined8 *)PTR_DAT_070d3920,uVar14,
                                  *(undefined8 *)PTR_DAT_070d3918,0);
            (**(code **)(*plVar16 + 0x188))(plVar16,param_1,uVar14,*(undefined8 *)(*plVar16 + 400));
          }
          uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)PTR_DAT_070d3890);
          FUN_035a4ae4(uVar14,0);
          *(undefined8 *)(param_1 + 0xb8) = uVar14;
        }
      }
      else {
        *(long *)(param_1 + 0xb8) = *(long *)((long)param_2 + 0xa8);
      }
      uVar5 = FUN_0466924c((char *)((long)param_2 + 0x80),*(undefined8 *)puVar3);
      local_98 = *(undefined8 *)(param_1 + 0x98);
      uStack_88 = *(undefined4 *)((long)param_2 + 0xe4);
      local_b0 = *(undefined8 *)((long)param_2 + 0x48);
      uStack_b8 = *(undefined8 *)((long)param_2 + 0x40);
      local_c0 = CONCAT44(local_c0._4_4_,uVar5);
      uStack_a8 = *(undefined8 *)((long)param_2 + 0x50);
      local_78 = *(undefined4 *)((long)param_2 + 0xdc);
      local_80 = *(undefined8 *)((long)param_2 + 0xe8);
      local_a0 = uVar7;
      local_90 = param_1;
      uVar8 = FUN_035d8200(&local_c0,0);
      if ((uVar8 & 1) == 0) {
        uStack_88 = 0;
        local_80 = 0;
        local_78 = 0;
        memcpy(auStack_1f8,&local_c0,0x50);
        lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070d36f0);
        memcpy(auStack_390,auStack_1f8,0x50);
        uVar8 = FUN_035ca558(lVar9,auStack_390,0);
      }
      else {
        memcpy(auStack_1f8,&local_c0,0x50);
        lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_070d36a8);
        memcpy(auStack_340,auStack_1f8,0x50);
        uVar8 = FUN_035cdf44(lVar9,auStack_340,0);
      }
      *(long *)(param_1 + 0x50) = lVar9;
      puVar3 = PTR_DAT_070d3908;
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x38) = param_1;
        uVar7 = *(undefined8 *)(param_1 + 0x98);
        lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)puVar3);
        uVar8 = FUN_03561404(lVar9,uVar7,0);
        *(long *)(param_1 + 0x60) = lVar9;
        if (lVar9 != 0) {
          uVar8 = FUN_03561c0c(lVar9,*(undefined8 *)((long)param_2 + 200),0);
          *(undefined4 *)(param_1 + 0x5c) = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          if (*(long *)((long)param_2 + 0xb0) == 0) {
            uVar7 = *(undefined8 *)PTR_DAT_070d3930;
            uVar8 = FUN_03b37ffc(param_1,uVar7,param_1 + 0x118,*(undefined8 *)PTR_DAT_070d38b0);
            if ((uVar8 & 1) == 0) {
              plVar16 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
              if (plVar16 != (long *)0x0) {
                uVar7 = FUN_057bf780(*(undefined8 *)PTR_DAT_070d3940,uVar7,
                                     *(undefined8 *)PTR_DAT_070d3938,0);
                (**(code **)(*plVar16 + 0x188))
                          (plVar16,param_1,uVar7,*(undefined8 *)(*plVar16 + 400));
              }
              uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)PTR_DAT_070d38b8);
              uVar8 = FUN_035b6758(uVar7,0);
              *(undefined8 *)(param_1 + 0x118) = uVar7;
            }
          }
          else {
            *(long *)(param_1 + 0x118) = *(long *)((long)param_2 + 0xb0);
          }
          local_d0 = *(undefined4 *)((long)param_2 + 0x34);
          uStack_f8 = *(undefined8 *)((long)param_2 + 0xc);
          local_100 = *(undefined8 *)((long)param_2 + 4);
          uStack_d8 = *(undefined8 *)((long)param_2 + 0x2c);
          local_e0 = *(undefined8 *)((long)param_2 + 0x24);
          uStack_e8 = *(undefined8 *)((long)param_2 + 0x1c);
          uStack_f0 = *(undefined8 *)((long)param_2 + 0x14);
          *(undefined4 *)(param_1 + 0x188) = local_d0;
          *(undefined8 *)(param_1 + 0x170) = uStack_e8;
          *(undefined8 *)(param_1 + 0x168) = uStack_f0;
          *(undefined8 *)(param_1 + 0x180) = uStack_d8;
          *(undefined8 *)(param_1 + 0x178) = local_e0;
          *(undefined8 *)(param_1 + 0x160) = uStack_f8;
          *(undefined8 *)(param_1 + 0x158) = local_100;
          *(undefined8 *)(param_1 + 0x128) = uStack_f8;
          *(undefined8 *)(param_1 + 0x120) = local_100;
          *(undefined8 *)(param_1 + 0x138) = uStack_e8;
          *(undefined8 *)(param_1 + 0x130) = uStack_f0;
          *(undefined8 *)(param_1 + 0x148) = uStack_d8;
          *(undefined8 *)(param_1 + 0x140) = local_e0;
          *(undefined4 *)(param_1 + 0x150) = local_d0;
          lVar9 = *(long *)((long)param_2 + 0xb8);
          if (lVar9 == 0) {
            lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)PTR_DAT_070d3898);
            uVar8 = FUN_035b33c8(lVar9,0);
          }
          *(long *)(param_1 + 0xa8) = lVar9;
          lVar9 = *(long *)((long)param_2 + 0xc0);
          if (lVar9 == 0) {
            lVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)PTR_DAT_070d3888);
            uVar8 = FUN_035a1da0(lVar9,0);
          }
          plVar16 = *(long **)(param_1 + 0xb8);
          *(long *)(param_1 + 0xb0) = lVar9;
          if (plVar16 != (long *)0x0) {
            lVar9 = *plVar16;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_070d35c8) {
                  puVar10 = (undefined8 *)(lVar9 + (long)(*piVar15 + 4) * 0x10 + 0x138);
                  goto LAB_0358b13c;
                }
                uVar8 = uVar8 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)PTR_DAT_070d35c8,4);
LAB_0358b13c:
            uVar8 = (*(code *)*puVar10)(plVar16,param_1,puVar10[1]);
          }
          plVar16 = *(long **)(param_1 + 0x118);
          if (plVar16 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
          }
          lVar9 = *plVar16;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_070d3768) {
                puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0358b1a8;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)PTR_DAT_070d3768,0);
LAB_0358b1a8:
          (*(code *)*puVar10)(plVar16,param_1,puVar10[1]);
          uVar11 = FUN_03a2de08(param_1,*(undefined8 *)PTR_DAT_070d3868);
          uVar8 = uVar11;
          if (uVar11 != 0) {
            uVar6 = *(uint *)(uVar11 + 0x18);
            if (0 < (int)uVar6) {
              uVar17 = 0;
              do {
                if (uVar6 <= uVar17) {
                  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03188ce0();
                  }
                  goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
                }
                lVar9 = *(long *)(uVar11 + (long)(int)uVar17 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_0358b42c;
                uVar8 = FUN_069d3220(lVar9,0);
                if ((uVar8 & 1) != 0) {
                  uVar8 = FUN_0358b794(param_1,lVar9);
                }
                uVar6 = *(uint *)(uVar11 + 0x18);
                uVar17 = uVar17 + 1;
              } while ((int)uVar17 < (int)uVar6);
            }
            if ((*(long *)(param_1 + 0x98) != 0) &&
               (lVar9 = *(long *)(*(long *)(param_1 + 0x98) + 0x28), lVar9 != 0)) {
              if (*(char *)(lVar9 + 0x10) != '\0') {
                FUN_03b371d4(param_1,*(undefined8 *)PTR_DAT_070d38a0);
              }
              lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
              if (lVar9 != 0) {
                uVar8 = FUN_057c02e8(*(undefined8 *)PTR_DAT_070d3928,*(undefined8 *)PTR_DAT_070d30f0
                                     ,*(undefined8 *)(param_1 + 0x98),0);
                plVar16 = *(long **)(lVar9 + 0x10);
                if (plVar16 == (long *)0x0) goto LAB_0358b42c;
                (**(code **)(*plVar16 + 0x188))
                          (plVar16,param_1,uVar8,*(undefined8 *)(*plVar16 + 400));
              }
              if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar8 = FUN_0358ba60(param_1);
              if (*(char *)(param_1 + 0xd0) == '\0') {
                uVar8 = 0;
                if (*(long *)(param_1 + 0x50) == 0) goto LAB_0358b42c;
                uVar6 = FUN_035bb0b0(*(long *)(param_1 + 0x50),0);
                uVar8 = FUN_0358842c(param_1,uVar6 & 1);
              }
              plVar16 = *(long **)(param_1 + 0xa8);
              if (plVar16 == (long *)0x0) {
                if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188cd8();
                }
                goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
              }
              lVar9 = *plVar16;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_070d3760) {
                    puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0358b33c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_031c0d08(plVar16,*(long *)PTR_DAT_070d3760,0);
LAB_0358b33c:
              (*(code *)*puVar10)(plVar16,param_1,puVar10[1]);
              if ((*(long *)(param_1 + 0x1d0) == 0) ||
                 (lVar9 = FUN_0354c7fc(*(long *)(param_1 + 0x1d0),0), lVar9 == 0)) {
                lVar9 = **(long **)(*(long *)(PTR_DAT_070c1958 + 0x90) + 0xb8);
              }
              lVar12 = *(long *)puVar13;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar12 = *(long *)puVar13;
              }
              *(long *)(*(long *)(lVar12 + 0xb8) + 0x10) = lVar9;
              uVar8 = 0;
              if (*(long *)(param_1 + 0x50) != 0) {
                uVar8 = FUN_035b840c(*(long *)(param_1 + 0x50),0);
                if ((uVar8 & 1) == 0) {
LAB_0358b3e8:
                  uVar8 = FUN_0358a674(param_1);
                }
                else {
                  if (*(long *)(param_1 + 0x50) == 0) goto LAB_0358b42c;
                  if (*(char *)(*(long *)(param_1 + 0x50) + 0xd0) == '\0') goto LAB_0358b3e8;
                  memcpy(auStack_488,param_2,0xf8);
                  uVar7 = FUN_035869d0(param_1,auStack_488);
                  uVar8 = FUN_069d9070(param_1,uVar7,0);
                }
                if (*(long *)(param_1 + 0x80) != 0) {
                  uVar8 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x10);
                  if (*(long *)(lVar1 + 0x28) == local_68) {
                    return;
                  }
                  goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
                }
              }
            }
          }
        }
      }
LAB_0358b42c:
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
    }
    thunk_FUN_031edd38(PTR_DAT_070c4538);
    uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    puVar13 = PTR_DAT_070d3950;
  }
  uVar14 = thunk_FUN_031edd38(puVar13);
  uVar8 = FUN_0592f61c(uVar7,uVar14,0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    uVar14 = thunk_FUN_031edd38(PTR_DAT_070d3960);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar7,uVar14);
  }
Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


