/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToCollider
ENTRY_POINT: 059eb024
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void Oculus_Interaction_Collisions__ClosestPointToCollider(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *in_x3;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *plStack0000000000000020;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000060;
  
  plStack0000000000000020 = in_x3;
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07108fc8);
    FUN_03188a78(PTR_DAT_070d27d0);
    FUN_03188a78(PTR_DAT_070d27d8);
    FUN_03188a78(PTR_DAT_070d27e0);
    FUN_03188a78(PTR_DAT_0710a138);
    FUN_03188a78(PTR_DAT_0710a140);
    FUN_03188a78(PTR_DAT_070d2810);
    FUN_03188a78(PTR_DAT_0710a148);
    FUN_03188a78(PTR_DAT_0710a150);
    FUN_03188a78(PTR_DAT_0710a158);
    FUN_03188a78(PTR_DAT_0710a160);
    FUN_03188a78(PTR_DAT_070fe640);
    FUN_03188a78(PTR_DAT_070fe648);
    FUN_03188a78(PTR_DAT_0710a168);
    FUN_03188a78(PTR_DAT_070fe650);
    FUN_03188a78(PTR_DAT_070fe638);
    *(undefined1 *)(unaff_x20 + 0x199) = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = (long *)0x0;
  *in_stack_00000008 = 0;
  in_stack_00000048 = 0;
  *plStack0000000000000020 = 0;
  *in_stack_00000018 = 0;
  *in_stack_00000000 = 0;
  *in_stack_00000010 = 0;
  lVar5 = FUN_059ea160();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_042e54fc(&stack0x00000030,lVar5,*(undefined8 *)PTR_DAT_070d2810);
  puVar2 = PTR_DAT_070c1958;
  in_stack_00000058 = in_stack_00000038;
  in_stack_00000050 = in_stack_00000030;
  in_stack_00000060 = in_stack_00000040;
  in_stack_00000030 = 0;
  in_stack_00000038 = &stack0x00000050;
  do {
    do {
      uVar6 = FUN_054518b4(&stack0x00000050,*(undefined8 *)PTR_DAT_070d27d8);
      plVar11 = in_stack_00000060;
      lVar5 = in_stack_00000030;
      if ((uVar6 & 1) == 0) {
        FUN_054518b0(in_stack_00000038,*(undefined8 *)PTR_DAT_070d27d0);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd0(lVar5);
        }
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_07108fc8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar3 = FUN_059eb900(plVar11);
      uVar4 = FUN_059eb9d4(plVar11);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar5 = (**(code **)(*plVar11 + 0x798))(plVar11,0x36,*(undefined8 *)(*plVar11 + 0x7a0));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
    } while ((int)uVar1 < 1);
    uVar15 = 0;
    plVar10 = (long *)0x0;
    plVar17 = (long *)0x0;
    plVar18 = (long *)0x0;
    plVar11 = (long *)0x0;
    plVar13 = (long *)0x0;
    do {
      if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      plVar16 = *(long **)(lVar5 + (long)(int)uVar15 * 8 + 0x20);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar6 = (**(code **)(*plVar16 + 0x358))(plVar16,*(undefined8 *)(*plVar16 + 0x360));
      if ((uVar6 & 1) == 0) {
        in_stack_00000048 = 0;
        uVar7 = (**(code **)(*plVar16 + 0x248))(plVar16,*(undefined8 *)(*plVar16 + 0x250));
        if ((uVar3 & 1) == 0) {
          uVar12 = *(undefined8 *)PTR_DAT_070fe638;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar12 = FUN_0593e698(uVar12,0);
          if (*(int *)(*(long *)PTR_DAT_07108fc8 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar6 = FUN_059ebaa8(plVar16,uVar7,uVar12,plVar13,&stack0x00000048);
          if ((uVar6 & 1) != 0) {
            lVar14 = *in_stack_00000008;
            if (lVar14 == 0) {
              lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)PTR_DAT_0710a158);
              FUN_042e4268(lVar14,*(undefined8 *)PTR_DAT_0710a150);
            }
            *in_stack_00000008 = lVar14;
            uVar12 = FUN_059f298c(plVar16,0);
            if (lVar14 == 0) {
LAB_059eb7f4:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar8 = *(long *)(lVar14 + 0x10);
            lVar9 = *(long *)PTR_DAT_0710a140;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_059eb7f4;
            uVar1 = *(uint *)(lVar14 + 0x18);
            plVar13 = plVar16;
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            }
            else {
              FUN_042e4a64(lVar14,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar12 = *(undefined8 *)PTR_DAT_070fe650;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar12 = FUN_0593e698(uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_07108fc8 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar6 = FUN_059ebaa8(plVar16,uVar7,uVar12,plVar11,&stack0x00000048);
        if ((uVar6 & 1) != 0) {
          lVar14 = *plStack0000000000000020;
          if (lVar14 == 0) {
            lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)PTR_DAT_0710a158);
            FUN_042e4268(lVar14,*(undefined8 *)PTR_DAT_0710a150);
          }
          *plStack0000000000000020 = lVar14;
          uVar12 = FUN_059f298c(plVar16,0);
          if (lVar14 == 0) {
LAB_059eb7f0:
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar8 = *(long *)(lVar14 + 0x10);
          lVar9 = *(long *)PTR_DAT_0710a140;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_059eb7f0;
          uVar1 = *(uint *)(lVar14 + 0x18);
          plVar11 = plVar16;
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          }
          else {
            FUN_042e4a64(lVar14,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar12 = *(undefined8 *)PTR_DAT_070fe648;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar12 = FUN_0593e698(uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_07108fc8 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar6 = FUN_059ebaa8(plVar16,uVar7,uVar12,plVar18,&stack0x00000048);
        if ((uVar6 & 1) != 0) {
          lVar14 = *in_stack_00000018;
          if (lVar14 == 0) {
            lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)PTR_DAT_0710a158);
            FUN_042e4268(lVar14,*(undefined8 *)PTR_DAT_0710a150);
          }
          *in_stack_00000018 = lVar14;
          uVar12 = FUN_059f298c(plVar16,0);
          if (lVar14 == 0) {
LAB_059eb7ec:
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar8 = *(long *)(lVar14 + 0x10);
          lVar9 = *(long *)PTR_DAT_0710a140;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_059eb7ec;
          uVar1 = *(uint *)(lVar14 + 0x18);
          plVar18 = plVar16;
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          }
          else {
            FUN_042e4a64(lVar14,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        if ((uVar4 & 1) == 0) {
          uVar12 = *(undefined8 *)PTR_DAT_070fe640;
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar12 = FUN_0593e698(uVar12,0);
          if (*(int *)(*(long *)PTR_DAT_07108fc8 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar6 = FUN_059ebaa8(plVar16,uVar7,uVar12,plVar17,&stack0x00000048);
          if ((uVar6 & 1) != 0) {
            lVar14 = *in_stack_00000000;
            if (lVar14 == 0) {
              lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)PTR_DAT_0710a158);
              FUN_042e4268(lVar14,*(undefined8 *)PTR_DAT_0710a150);
            }
            *in_stack_00000000 = lVar14;
            uVar12 = FUN_059f298c(plVar16,0);
            if (lVar14 == 0) {
LAB_059eb7f8:
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            lVar8 = *(long *)(lVar14 + 0x10);
            lVar9 = *(long *)PTR_DAT_0710a140;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_059eb7f8;
            uVar1 = *(uint *)(lVar14 + 0x18);
            plVar17 = plVar16;
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            }
            else {
              FUN_042e4a64(lVar14,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        uVar12 = *(undefined8 *)PTR_DAT_0710a168;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar12 = FUN_0593e698(uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_07108fc8 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar6 = FUN_059ebaa8(plVar16,uVar7,uVar12,plVar10,&stack0x00000048);
        if ((uVar6 & 1) != 0) {
          lVar14 = *in_stack_00000010;
          if (lVar14 == 0) {
            lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)PTR_DAT_0710a160);
            FUN_042e4268(lVar14,*(undefined8 *)PTR_DAT_0710a148);
          }
          *in_stack_00000010 = lVar14;
          uVar7 = FUN_059f2a38(plVar16,0);
          if (lVar14 == 0) {
LAB_059eb7e8:
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar8 = *(long *)(lVar14 + 0x10);
          lVar9 = *(long *)PTR_DAT_0710a138;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_059eb7e8;
          uVar1 = *(uint *)(lVar14 + 0x18);
          plVar10 = plVar16;
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          }
          else {
            FUN_042e4a64(lVar14,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar1);
  } while( true );
}


