/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage
ENTRY_POINT: 052f6774
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage
               (undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  lVar3 = FUN_066c67b0(param_1,0);
  if ((lVar3 != 0) && (lVar3 = FUN_066d47b8(lVar3,0), lVar3 != 0)) {
    uVar7 = (ulong)*(uint *)(unaff_x19 + 0x54);
    uVar13 = (ulong)*(uint *)(unaff_x19 + 0x58);
    uVar10 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x50),uVar7,uVar13,lVar3,0);
    uVar11 = (ulong)*(uint *)(unaff_x19 + 0x5c);
    uVar12 = (ulong)*(uint *)(unaff_x19 + 0x60);
                    /* try { // try from 052f67ac to 053f67d3 has its CatchHandler @ 052f6938 */
    uVar14 = (ulong)*(uint *)(unaff_x19 + 100);
    lVar3 = FUN_066c67b0();
    if (lVar3 != 0) {
      uVar4 = FUN_066d47b8(lVar3,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x25);
      }
      uVar5 = FUN_066cd30c(uVar4,0);
                    /* try { // try from 052f67ec to 053f684b has its CatchHandler @ 052f693c */
      if ((uVar5 & 1) != 0) {
        lVar3 = FUN_066c67b0();
        if ((lVar3 == 0) || (lVar3 = FUN_066d47b8(lVar3,0), lVar3 == 0)) goto LAB_052f6bd4;
        uVar12 = (ulong)*(uint *)(unaff_x19 + 0x60);
        uVar14 = (ulong)*(uint *)(unaff_x19 + 100);
        uVar11 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x5c),uVar12,uVar14,lVar3,0);
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar5 = FUN_066cd30c(uVar4,0);
      lVar3 = *unaff_x20;
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar6 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar6 == 0)) goto LAB_052f6bd4;
        uVar10 = FUN_066d6014(uVar10,uVar7,uVar13,lVar6,0);
      }
      if (lVar3 != 0) {
        FUN_06744330(uVar10,uVar7,uVar13,lVar3,0);
        FUN_0528adb8(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                     *(undefined4 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x98),0);
        FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0x98),0);
        FUN_0528b808(*(undefined8 *)(unaff_x19 + 0x98),0);
        FUN_0528b820(*(undefined8 *)(unaff_x19 + 0x98),0);
        FUN_0528b868(*(undefined8 *)(unaff_x19 + 0x98),0);
        if (*(long *)(unaff_x19 + 0x98) != 0) {
          FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                       *(undefined4 *)(unaff_x19 + 0x90),*(long *)(unaff_x19 + 0x98),0);
          lVar3 = *(long *)(unaff_x19 + 0x98);
          if (lVar3 != 0) {
            FUN_06744020(lVar3,0);
            FUN_0528b5b0(0);
            FUN_06745500(lVar3,0);
            uVar10 = *(undefined8 *)(unaff_x19 + 0x98);
            fVar15 = *(float *)(unaff_x19 + 0x50);
            uVar4 = *(undefined8 *)(unaff_x19 + 0x54);
            fVar17 = *(float *)(unaff_x19 + 0x5c);
            uVar18 = *(undefined8 *)(unaff_x19 + 0x60);
            if (DAT_071bac5f == '\0') {
              FUN_02f07e70(PTR_DAT_06d03010);
              DAT_071bac5f = '\x01';
            }
            puVar2 = PTR_DAT_06d03010;
            fVar15 = fVar15 - fVar17;
            fVar17 = (float)uVar4 - (float)uVar18;
            fVar16 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar18 >> 0x20);
            if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar1 = DAT_013f6e08;
            FUN_0529a2b8(SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17),0,DAT_013f6e08,
                         uVar10,0);
            lVar3 = FUN_066c67ec();
            if (lVar3 != 0) {
              lVar3 = FUN_03a862a4(lVar3,*unaff_x23);
              plVar9 = (long *)(unaff_x19 + 0xa0);
              *plVar9 = lVar3;
              thunk_FUN_02f411dc(plVar9,lVar3);
              if (*plVar9 != 0) {
                FUN_06743fdc(*plVar9,*(undefined8 *)(unaff_x19 + 0x28),0);
                if (*(long *)(unaff_x19 + 0xa0) != 0) {
                  FUN_06744404(*(long *)(unaff_x19 + 0xa0),0,0);
                  lVar3 = *plVar9;
                  if (*(char *)(unaff_x22 + 0xbf5) == '\0') {
                    FUN_02f07e70(PTR_DAT_06d02c10);
                    *(undefined1 *)(unaff_x22 + 0xbf5) = 1;
                  }
                  if (lVar3 != 0) {
                    puVar8 = *(undefined4 **)(*unaff_x24 + 0xb8);
                    FUN_067441f8(*puVar8,puVar8[1],puVar8[2],lVar3,0);
                    uVar10 = *(undefined8 *)(unaff_x19 + 0x28);
                    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar7 = FUN_066cd30c(uVar10,0);
                    lVar3 = *plVar9;
                    if ((uVar7 & 1) != 0) {
                      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                         (lVar6 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar6 == 0))
                      goto LAB_052f6bd4;
                      uVar11 = FUN_066d6014(uVar11,uVar12,uVar14,lVar6,0);
                    }
                    if (lVar3 != 0) {
                      FUN_06744330(uVar11,uVar12,uVar14,lVar3,0);
                      FUN_0528b808(*plVar9,0);
                      FUN_0528b820(*plVar9,0);
                      FUN_0528b868(*plVar9,0);
                      if (*plVar9 != 0) {
                        FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),
                                     *(undefined4 *)(unaff_x19 + 0x8c),
                                     *(undefined4 *)(unaff_x19 + 0x90),*plVar9,0);
                        if (*(long *)(unaff_x19 + 0x98) != 0) {
                          lVar3 = *(long *)(unaff_x19 + 0xa0);
                          FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                          FUN_0528b5b0(0);
                          if (lVar3 != 0) {
                            FUN_06745500(lVar3,0);
                            FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                            uVar10 = *(undefined8 *)(unaff_x19 + 0xa0);
                            fVar15 = *(float *)(unaff_x19 + 0x50);
                            uVar4 = *(undefined8 *)(unaff_x19 + 0x54);
                            fVar17 = *(float *)(unaff_x19 + 0x5c);
                            uVar18 = *(undefined8 *)(unaff_x19 + 0x60);
                            if (DAT_071bac5f == '\0') {
                              FUN_02f07e70(PTR_DAT_06d03010);
                              DAT_071bac5f = '\x01';
                            }
                            fVar15 = fVar15 - fVar17;
                            fVar17 = (float)uVar4 - (float)uVar18;
                            fVar16 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar18 >> 0x20);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_02f12b58();
                            }
                            FUN_0529a2b8(SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17),0
                                         ,uVar1,uVar10,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_052f6bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


