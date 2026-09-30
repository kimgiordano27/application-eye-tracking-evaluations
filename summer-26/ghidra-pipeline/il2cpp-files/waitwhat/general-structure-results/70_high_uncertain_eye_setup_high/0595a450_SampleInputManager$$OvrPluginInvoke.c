/*
FUNCTION_NAME: SampleInputManager$$OvrPluginInvoke
ENTRY_POINT: 0595a450
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long SampleInputManager__OvrPluginInvoke(long *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
  if ((DAT_0754cbd5 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071068f8);
    FUN_03188a78(PTR_DAT_07106900);
    FUN_03188a78(PTR_DAT_070f4738);
    FUN_03188a78(PTR_DAT_070d2768);
    FUN_03188a78(PTR_DAT_070d2770);
    FUN_03188a78(PTR_DAT_07106908);
    FUN_03188a78(PTR_DAT_070f4740);
    FUN_03188a78(PTR_DAT_070d2758);
    FUN_03188a78(PTR_DAT_070f1238);
    FUN_03188a78(PTR_DAT_070f4748);
    FUN_03188a78(PTR_DAT_070d2750);
    FUN_03188a78(PTR_DAT_070f16c0);
    FUN_03188a78(PTR_DAT_070fe550);
    DAT_0754cbd5 = 1;
  }
  if ((param_1 != (long *)0x0) &&
     (plVar7 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
     plVar7 != (long *)0x0)) {
    iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    if (iVar5 != 8) {
      return 0;
    }
    plVar7 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if (plVar7 != (long *)0x0) {
      lVar14 = *plVar7;
      bVar1 = *(byte *)(*(long *)PTR_DAT_070f16c0 + 0x130);
      if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_070f16c0))
      {
LAB_0595a928:
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar7);
      }
      uVar8 = (**(code **)(lVar14 + 0x438))(plVar7,*(undefined8 *)(lVar14 + 0x440));
      puVar2 = PTR_DAT_070c1958;
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
      }
      uVar9 = FUN_05947b18(uStack0000000000000008,0,0);
      if ((uVar9 & 1) != 0) {
        uVar18 = *(undefined8 *)PTR_DAT_07106900;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uStack0000000000000008 = FUN_0593e698(uVar18,0);
      }
      uVar9 = FUN_05869488(plVar7,uVar8,0);
      if ((uVar9 & 1) != 0) {
        lVar14 = (**(code **)(*param_1 + 0x248))
                           (param_1,uStack0000000000000008,param_3 & 1,
                            *(undefined8 *)(*param_1 + 0x250));
        if (lVar14 == 0) {
          return 0;
        }
        uVar8 = *(undefined8 *)PTR_DAT_071068f8;
        lVar10 = thunk_FUN_031c3cac(lVar14,uVar8);
        if (lVar10 != 0) {
          return lVar10;
        }
LAB_0595a8d0:
                    /* WARNING: Subroutine does not return */
        FUN_03189058(lVar14,uVar8);
      }
      lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_070d2750);
      FUN_042e4268(lVar14,*(undefined8 *)PTR_DAT_070d2758);
      lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)PTR_DAT_070f4748);
      FUN_042e4268(lVar10,*(undefined8 *)PTR_DAT_070f4740);
      puVar4 = PTR_DAT_070f4738;
      puVar3 = PTR_DAT_070d2770;
      puVar2 = PTR_DAT_070d2768;
      do {
        if (plVar7 == (long *)0x0) goto LAB_0595a920;
        lVar11 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
        uVar6 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        if (lVar11 == 0) goto LAB_0595a920;
        if (*(uint *)(lVar11 + 0x18) <= uVar6) {
LAB_0595a924:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        plVar12 = *(long **)(lVar11 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar12 == (long *)0x0) ||
           (lVar11 = (**(code **)(*plVar12 + 0x248))
                               (plVar12,uStack0000000000000008,0,*(undefined8 *)(*plVar12 + 0x250)),
           lVar11 == 0)) goto LAB_0595a920;
        uVar8 = *(undefined8 *)PTR_DAT_071068f8;
        lVar13 = thunk_FUN_031c3cac(lVar11,uVar8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03189058(lVar11,uVar8);
        }
        uVar6 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar6) {
          uVar17 = 0;
          do {
            if (uVar6 <= uVar17) goto LAB_0595a924;
            lVar11 = *(long *)(lVar13 + (long)(int)uVar17 * 8 + 0x20);
            if ((lVar11 == 0) || (uVar8 = thunk_FUN_03196ed8(lVar11,0), lVar14 == 0))
            goto LAB_0595a920;
            uVar9 = FUN_042e4df8(lVar14,uVar8,*(undefined8 *)puVar3);
            if ((uVar9 & 1) == 0) {
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar16 = *(long *)puVar2;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_0595a920;
              uVar6 = *(uint *)(lVar14 + 0x18);
              if (uVar6 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar6 + 1;
                *(undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20) = uVar8;
              }
              else {
                FUN_042e4a64(lVar14,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              if (lVar10 == 0) goto LAB_0595a920;
              lVar15 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar4;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_0595a920;
              uVar6 = *(uint *)(lVar10 + 0x18);
              if (uVar6 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar6 + 1;
                *(long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20) = lVar11;
              }
              else {
                FUN_042e4a64(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar6 = *(uint *)(lVar13 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar6);
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_070fe550 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_070fe550
           )) goto LAB_0595a928;
        plVar12 = (long *)FUN_05876b10(plVar7,0);
        uVar9 = FUN_05869488(plVar12,plVar7,0);
        plVar7 = plVar12;
      } while ((uVar9 & 1) == 0);
      if (lVar10 != 0) {
        lVar14 = FUN_059556e4(uStack0000000000000008,*(undefined4 *)(lVar10 + 0x18),0);
        if (lVar14 == 0) {
          lVar11 = 0;
        }
        else {
          uVar8 = *(undefined8 *)PTR_DAT_071068f8;
          lVar11 = thunk_FUN_031c3cac(lVar14,uVar8);
          if (lVar11 == 0) goto LAB_0595a8d0;
        }
        FUN_042e5020(lVar10,lVar11,0,*(undefined8 *)PTR_DAT_07106908);
        return lVar11;
      }
    }
  }
LAB_0595a920:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


