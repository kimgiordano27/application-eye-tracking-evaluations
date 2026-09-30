/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnSessionListUpdated
ENTRY_POINT: 052f6674
PROGRAM: Untangled-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 in_w8;
  undefined4 *puVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  
  *(undefined1 *)(unaff_x20 + 0x1fe) = in_w8;
  lVar6 = FUN_066c67ec();
  puVar5 = PTR_DAT_06d03770;
  if (lVar6 != 0) {
    lVar6 = FUN_03a862a4(lVar6,*(undefined8 *)PTR_DAT_06d03770);
    plVar12 = (long *)(unaff_x19 + 0x98);
    *plVar12 = lVar6;
                    /* try { // try from 052f66a8 to 053f67ab has its CatchHandler @ 052f66a8
                       catch() { ... } // from try @ 052f66a8 with catch @ 052f66a8
                       catch() { ... } // from try @ 052f6870 with catch @ 052f66a8
                       catch() { ... } // from try @ 052f6928 with catch @ 052f66a8
                       catch() { ... } // from try @ 052f69c4 with catch @ 052f66a8 */
    thunk_FUN_02f411dc(plVar12,lVar6);
    if (*plVar12 != 0) {
      FUN_06743fdc(*plVar12,*(undefined8 *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0x98) != 0) {
        FUN_06744404(*(long *)(unaff_x19 + 0x98),0,0);
        lVar6 = *plVar12;
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        puVar3 = PTR_DAT_06d02c10;
        if (lVar6 != 0) {
          puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          FUN_067441f8(*puVar11,puVar11[1],puVar11[2],lVar6,0);
          uVar13 = (ulong)*(uint *)(unaff_x19 + 0x50);
          uVar14 = (ulong)*(uint *)(unaff_x19 + 0x54);
          uVar16 = (ulong)*(uint *)(unaff_x19 + 0x58);
          lVar6 = FUN_066c67b0();
          puVar2 = PTR_DAT_06d01e20;
          if (lVar6 != 0) {
            uVar7 = FUN_066d47b8(lVar6,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)puVar2);
            }
            uVar8 = FUN_066cd30c(uVar7,0);
            if ((uVar8 & 1) != 0) {
              lVar6 = FUN_066c67b0();
              if ((lVar6 == 0) || (lVar6 = FUN_066d47b8(lVar6,0), lVar6 == 0)) goto LAB_052f6bd4;
              uVar14 = (ulong)*(uint *)(unaff_x19 + 0x54);
              uVar16 = (ulong)*(uint *)(unaff_x19 + 0x58);
              uVar13 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x50),uVar14,uVar16,lVar6,0);
            }
            uVar8 = (ulong)*(uint *)(unaff_x19 + 0x5c);
            uVar15 = (ulong)*(uint *)(unaff_x19 + 0x60);
            uVar17 = (ulong)*(uint *)(unaff_x19 + 100);
            lVar6 = FUN_066c67b0();
            if (lVar6 != 0) {
              uVar7 = FUN_066d47b8(lVar6,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02f12b58(*(long *)puVar2);
              }
              uVar9 = FUN_066cd30c(uVar7,0);
              if ((uVar9 & 1) != 0) {
                lVar6 = FUN_066c67b0();
                if ((lVar6 == 0) || (lVar6 = FUN_066d47b8(lVar6,0), lVar6 == 0)) goto LAB_052f6bd4;
                uVar15 = (ulong)*(uint *)(unaff_x19 + 0x60);
                uVar17 = (ulong)*(uint *)(unaff_x19 + 100);
                uVar8 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x5c),uVar15,uVar17,lVar6,0);
              }
              uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar9 = FUN_066cd30c(uVar7,0);
              lVar6 = *plVar12;
              if ((uVar9 & 1) != 0) {
                if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                   (lVar10 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar10 == 0))
                goto LAB_052f6bd4;
                uVar13 = FUN_066d6014(uVar13,uVar14,uVar16,lVar10,0);
              }
              if (lVar6 != 0) {
                FUN_06744330(uVar13,uVar14,uVar16,lVar6,0);
                FUN_0528adb8(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                             *(undefined4 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x98),0);
                FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0x98),0);
                FUN_0528b808(*(undefined8 *)(unaff_x19 + 0x98),0);
                FUN_0528b820(*(undefined8 *)(unaff_x19 + 0x98),0);
                FUN_0528b868(*(undefined8 *)(unaff_x19 + 0x98),0);
                if (*(long *)(unaff_x19 + 0x98) != 0) {
                  FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                               *(undefined4 *)(unaff_x19 + 0x90),*(long *)(unaff_x19 + 0x98),0);
                  lVar6 = *(long *)(unaff_x19 + 0x98);
                  if (lVar6 != 0) {
                    FUN_06744020(lVar6,0);
                    FUN_0528b5b0(0);
                    FUN_06745500(lVar6,0);
                    uVar7 = *(undefined8 *)(unaff_x19 + 0x98);
                    fVar18 = *(float *)(unaff_x19 + 0x50);
                    uVar20 = *(undefined8 *)(unaff_x19 + 0x54);
                    fVar21 = *(float *)(unaff_x19 + 0x5c);
                    uVar22 = *(undefined8 *)(unaff_x19 + 0x60);
                    if (DAT_071bac5f == '\0') {
                      FUN_02f07e70(PTR_DAT_06d03010);
                      DAT_071bac5f = '\x01';
                    }
                    puVar4 = PTR_DAT_06d03010;
                    fVar18 = fVar18 - fVar21;
                    fVar21 = (float)uVar20 - (float)uVar22;
                    fVar19 = (float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar22 >> 0x20);
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar1 = DAT_013f6e08;
                    FUN_0529a2b8(SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar21 * fVar21),0,
                                 DAT_013f6e08,uVar7,0);
                    lVar6 = FUN_066c67ec();
                    if (lVar6 != 0) {
                      lVar6 = FUN_03a862a4(lVar6,*(undefined8 *)puVar5);
                      plVar12 = (long *)(unaff_x19 + 0xa0);
                      *plVar12 = lVar6;
                      thunk_FUN_02f411dc(plVar12,lVar6);
                      if (*plVar12 != 0) {
                        FUN_06743fdc(*plVar12,*(undefined8 *)(unaff_x19 + 0x28),0);
                        if (*(long *)(unaff_x19 + 0xa0) != 0) {
                          FUN_06744404(*(long *)(unaff_x19 + 0xa0),0,0);
                          lVar6 = *plVar12;
                          if (DAT_071babf5 == '\0') {
                            FUN_02f07e70(PTR_DAT_06d02c10);
                            DAT_071babf5 = '\x01';
                          }
                          if (lVar6 != 0) {
                            puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                            FUN_067441f8(*puVar11,puVar11[1],puVar11[2],lVar6,0);
                            uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_02f12b58();
                            }
                            uVar13 = FUN_066cd30c(uVar7,0);
                            lVar6 = *plVar12;
                            if ((uVar13 & 1) != 0) {
                              if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                 (lVar10 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar10 == 0)
                                 ) goto LAB_052f6bd4;
                              uVar8 = FUN_066d6014(uVar8,uVar15,uVar17,lVar10,0);
                            }
                            if (lVar6 != 0) {
                              FUN_06744330(uVar8,uVar15,uVar17,lVar6,0);
                              FUN_0528b808(*plVar12,0);
                              FUN_0528b820(*plVar12,0);
                              FUN_0528b868(*plVar12,0);
                              if (*plVar12 != 0) {
                                FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),
                                             *(undefined4 *)(unaff_x19 + 0x8c),
                                             *(undefined4 *)(unaff_x19 + 0x90),*plVar12,0);
                                if (*(long *)(unaff_x19 + 0x98) != 0) {
                                  lVar6 = *(long *)(unaff_x19 + 0xa0);
                                  FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                                  FUN_0528b5b0(0);
                                  if (lVar6 != 0) {
                                    FUN_06745500(lVar6,0);
                                    FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                                    uVar7 = *(undefined8 *)(unaff_x19 + 0xa0);
                                    fVar18 = *(float *)(unaff_x19 + 0x50);
                                    uVar20 = *(undefined8 *)(unaff_x19 + 0x54);
                                    fVar21 = *(float *)(unaff_x19 + 0x5c);
                                    uVar22 = *(undefined8 *)(unaff_x19 + 0x60);
                                    if (DAT_071bac5f == '\0') {
                                      FUN_02f07e70(PTR_DAT_06d03010);
                                      DAT_071bac5f = '\x01';
                                    }
                                    fVar18 = fVar18 - fVar21;
                                    fVar21 = (float)uVar20 - (float)uVar22;
                                    fVar19 = (float)((ulong)uVar20 >> 0x20) -
                                             (float)((ulong)uVar22 >> 0x20);
                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                      thunk_FUN_02f12b58();
                                    }
                                    FUN_0529a2b8(SQRT(fVar19 * fVar19 +
                                                      fVar18 * fVar18 + fVar21 * fVar21),0,uVar1,
                                                 uVar7,0);
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
      }
    }
  }
LAB_052f6bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


