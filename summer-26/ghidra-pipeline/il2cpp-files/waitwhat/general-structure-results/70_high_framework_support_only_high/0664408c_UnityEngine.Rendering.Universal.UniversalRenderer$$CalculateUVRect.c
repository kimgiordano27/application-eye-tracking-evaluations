/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderer$$CalculateUVRect
ENTRY_POINT: 0664408c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


long UnityEngine_Rendering_Universal_UniversalRenderer__CalculateUVRect(void)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  FUN_03188a78(PTR_DAT_070f28b8);
  FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
  FUN_03188a78(PTR_DAT_070f1868);
  FUN_03188a78(UnityEngine_Rendering_DebugUpdater_TypeInfo);
  FUN_03188a78(System_Diagnostics_Debugger_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xbf5) = 1;
  puVar5 = PTR_DAT_070f72c0;
  puVar4 = PTR_DAT_070c1958;
  if ((unaff_x20 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      lVar11 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070f72c0,
                            *(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x18));
      lVar8 = *(long *)(unaff_x19 + 0x10);
      if (lVar8 != 0) {
        uVar14 = 0;
        lVar12 = 0x20;
        do {
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar14) goto LAB_066442d8;
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_06644394;
          puVar2 = (undefined4 *)(lVar8 + lVar12);
          uVar15 = FUN_069bf798(*puVar2,0);
          uVar16 = FUN_069bf798(puVar2[1],0);
          uVar17 = FUN_069bf798(puVar2[2],0);
          if (lVar11 == 0) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_06644394;
          uVar18 = puVar2[3];
          puVar2 = (undefined4 *)(lVar11 + lVar12);
          lVar12 = lVar12 + 0x10;
          *puVar2 = uVar15;
          puVar2[1] = uVar16;
          uVar14 = uVar14 + 1;
          puVar2[2] = uVar17;
          puVar2[3] = uVar18;
          lVar8 = *(long *)(unaff_x19 + 0x10);
        } while (lVar8 != 0);
      }
    }
  }
  else {
    uVar13 = *(undefined8 *)UnityEngine_Rendering_DebugUpdater_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar13 = FUN_0593e698(uVar13,0);
    lVar11 = *(long *)(puVar4 + 0x98);
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar11);
    }
    lVar8 = FUN_0596405c(uVar13,0);
    lVar11 = FUN_03188b1c(*(undefined8 *)puVar5,0xb);
    if (lVar8 != 0) {
      iVar7 = FUN_059483e8(lVar8,0);
      puVar5 = System_Diagnostics_Debugger_TypeInfo;
      if (iVar7 + -1 < 0) {
LAB_066442d8:
        if (lVar11 == 0) goto LAB_066442d4;
      }
      else {
        do {
          iVar7 = iVar7 + -1;
          plVar9 = (long *)FUN_05948448(lVar8,iVar7,0);
          if (plVar9 == (long *)0x0) goto LAB_066442d4;
          if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_03189058();
          }
          puVar10 = (uint *)thunk_FUN_031c3ef0();
          uVar3 = *puVar10;
          bVar6 = FUN_06a08a7c(uVar3,0);
          lVar12 = *(long *)(unaff_x19 + 0x10);
          if (lVar12 == 0) goto LAB_066442d4;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) {
LAB_06644394:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar12 = lVar12 + (long)(int)uVar3 * 0x10;
          uVar15 = FUN_069bf798(*(undefined4 *)(lVar12 + 0x20),0);
          uVar16 = FUN_069bf798(*(undefined4 *)(lVar12 + 0x24),0);
          uVar17 = FUN_069bf798(*(undefined4 *)(lVar12 + 0x28),0);
          if (lVar11 == 0) goto LAB_066442d4;
          if (*(uint *)(lVar11 + 0x18) <= (uint)bVar6) goto LAB_06644394;
          lVar1 = lVar11 + (ulong)bVar6 * 0x10;
          uVar18 = *(undefined4 *)(lVar12 + 0x2c);
          *(undefined4 *)(lVar1 + 0x20) = uVar15;
          *(undefined4 *)(lVar1 + 0x24) = uVar16;
          *(undefined4 *)(lVar1 + 0x28) = uVar17;
          *(undefined4 *)(lVar1 + 0x2c) = uVar18;
        } while (0 < iVar7);
      }
      puVar5 = PTR_DAT_070f1868;
      uVar13 = *(undefined8 *)PTR_DAT_070f28b8;
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      puVar4 = OVRPlugin_TrackingConfidence___TypeInfo;
      uVar13 = FUN_0593e698(uVar13,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)puVar5);
      }
      uVar15 = thunk_FUN_0319313c(uVar13,0);
      lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar4);
      FUN_069a776c(lVar8,0x10,*(undefined4 *)(lVar11 + 0x18),uVar15,0);
      if (lVar8 != 0) {
        FUN_069a7e20(lVar8,lVar11,0);
        return lVar8;
      }
    }
  }
LAB_066442d4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


