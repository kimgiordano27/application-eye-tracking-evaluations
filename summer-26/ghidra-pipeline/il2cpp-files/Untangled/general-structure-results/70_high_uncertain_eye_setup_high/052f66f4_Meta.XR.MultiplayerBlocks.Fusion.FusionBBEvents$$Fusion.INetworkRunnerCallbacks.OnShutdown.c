/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnShutdown
ENTRY_POINT: 052f66f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnShutdown
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 in_w8;
  undefined4 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  
  *(undefined1 *)(unaff_x22 + 0xbf5) = in_w8;
  puVar3 = PTR_DAT_06d02c10;
  if (unaff_x21 != 0) {
    puVar10 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
    FUN_067441f8(*puVar10,puVar10[1],puVar10[2]);
    uVar12 = (ulong)*(uint *)(unaff_x19 + 0x50);
    uVar13 = (ulong)*(uint *)(unaff_x19 + 0x54);
    uVar15 = (ulong)*(uint *)(unaff_x19 + 0x58);
    lVar5 = FUN_066c67b0();
    puVar2 = PTR_DAT_06d01e20;
    if (lVar5 != 0) {
      uVar6 = FUN_066d47b8(lVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar2);
      }
      uVar7 = FUN_066cd30c(uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar5 = FUN_066c67b0();
        if ((lVar5 == 0) || (lVar5 = FUN_066d47b8(lVar5,0), lVar5 == 0)) goto LAB_052f6bd4;
        uVar13 = (ulong)*(uint *)(unaff_x19 + 0x54);
        uVar15 = (ulong)*(uint *)(unaff_x19 + 0x58);
        uVar12 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x50),uVar13,uVar15,lVar5,0);
      }
      uVar7 = (ulong)*(uint *)(unaff_x19 + 0x5c);
      uVar14 = (ulong)*(uint *)(unaff_x19 + 0x60);
      uVar16 = (ulong)*(uint *)(unaff_x19 + 100);
      lVar5 = FUN_066c67b0();
      if (lVar5 != 0) {
        uVar6 = FUN_066d47b8(lVar5,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar2);
        }
        uVar8 = FUN_066cd30c(uVar6,0);
        if ((uVar8 & 1) != 0) {
          lVar5 = FUN_066c67b0();
          if ((lVar5 == 0) || (lVar5 = FUN_066d47b8(lVar5,0), lVar5 == 0)) goto LAB_052f6bd4;
          uVar14 = (ulong)*(uint *)(unaff_x19 + 0x60);
          uVar16 = (ulong)*(uint *)(unaff_x19 + 100);
          uVar7 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x5c),uVar14,uVar16,lVar5,0);
        }
        uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_066cd30c(uVar6,0);
        lVar5 = *unaff_x20;
        if ((uVar8 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar9 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar9 == 0)) goto LAB_052f6bd4;
          uVar12 = FUN_066d6014(uVar12,uVar13,uVar15,lVar9,0);
        }
        if (lVar5 != 0) {
          FUN_06744330(uVar12,uVar13,uVar15,lVar5,0);
          FUN_0528adb8(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                       *(undefined4 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b808(*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b820(*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b868(*(undefined8 *)(unaff_x19 + 0x98),0);
          if (*(long *)(unaff_x19 + 0x98) != 0) {
            FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                         *(undefined4 *)(unaff_x19 + 0x90),*(long *)(unaff_x19 + 0x98),0);
            lVar5 = *(long *)(unaff_x19 + 0x98);
            if (lVar5 != 0) {
              FUN_06744020(lVar5,0);
              FUN_0528b5b0(0);
              FUN_06745500(lVar5,0);
              uVar6 = *(undefined8 *)(unaff_x19 + 0x98);
              fVar17 = *(float *)(unaff_x19 + 0x50);
              uVar19 = *(undefined8 *)(unaff_x19 + 0x54);
              fVar20 = *(float *)(unaff_x19 + 0x5c);
              uVar21 = *(undefined8 *)(unaff_x19 + 0x60);
              if (DAT_071bac5f == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071bac5f = '\x01';
              }
              puVar4 = PTR_DAT_06d03010;
              fVar17 = fVar17 - fVar20;
              fVar20 = (float)uVar19 - (float)uVar21;
              fVar18 = (float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
              if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar1 = DAT_013f6e08;
              FUN_0529a2b8(SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar20 * fVar20),0,DAT_013f6e08,
                           uVar6,0);
              lVar5 = FUN_066c67ec();
              if (lVar5 != 0) {
                lVar5 = FUN_03a862a4(lVar5,*unaff_x23);
                plVar11 = (long *)(unaff_x19 + 0xa0);
                *plVar11 = lVar5;
                thunk_FUN_02f411dc(plVar11,lVar5);
                if (*plVar11 != 0) {
                  FUN_06743fdc(*plVar11,*(undefined8 *)(unaff_x19 + 0x28),0);
                  if (*(long *)(unaff_x19 + 0xa0) != 0) {
                    FUN_06744404(*(long *)(unaff_x19 + 0xa0),0,0);
                    lVar5 = *plVar11;
                    if (*(char *)(unaff_x22 + 0xbf5) == '\0') {
                      FUN_02f07e70(PTR_DAT_06d02c10);
                      *(undefined1 *)(unaff_x22 + 0xbf5) = 1;
                    }
                    if (lVar5 != 0) {
                      puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                      FUN_067441f8(*puVar10,puVar10[1],puVar10[2],lVar5,0);
                      uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      uVar12 = FUN_066cd30c(uVar6,0);
                      lVar5 = *plVar11;
                      if ((uVar12 & 1) != 0) {
                        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                           (lVar9 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar9 == 0))
                        goto LAB_052f6bd4;
                        uVar7 = FUN_066d6014(uVar7,uVar14,uVar16,lVar9,0);
                      }
                      if (lVar5 != 0) {
                        FUN_06744330(uVar7,uVar14,uVar16,lVar5,0);
                        FUN_0528b808(*plVar11,0);
                        FUN_0528b820(*plVar11,0);
                        FUN_0528b868(*plVar11,0);
                        if (*plVar11 != 0) {
                          FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),
                                       *(undefined4 *)(unaff_x19 + 0x8c),
                                       *(undefined4 *)(unaff_x19 + 0x90),*plVar11,0);
                          if (*(long *)(unaff_x19 + 0x98) != 0) {
                            lVar5 = *(long *)(unaff_x19 + 0xa0);
                            FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                            FUN_0528b5b0(0);
                            if (lVar5 != 0) {
                              FUN_06745500(lVar5,0);
                              FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                              uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
                              fVar17 = *(float *)(unaff_x19 + 0x50);
                              uVar19 = *(undefined8 *)(unaff_x19 + 0x54);
                              fVar20 = *(float *)(unaff_x19 + 0x5c);
                              uVar21 = *(undefined8 *)(unaff_x19 + 0x60);
                              if (DAT_071bac5f == '\0') {
                                FUN_02f07e70(PTR_DAT_06d03010);
                                DAT_071bac5f = '\x01';
                              }
                              fVar17 = fVar17 - fVar20;
                              fVar20 = (float)uVar19 - (float)uVar21;
                              fVar18 = (float)((ulong)uVar19 >> 0x20) -
                                       (float)((ulong)uVar21 >> 0x20);
                              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                thunk_FUN_02f12b58();
                              }
                              FUN_0529a2b8(SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar20 * fVar20)
                                           ,0,uVar1,uVar6,0);
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
  }
LAB_052f6bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


