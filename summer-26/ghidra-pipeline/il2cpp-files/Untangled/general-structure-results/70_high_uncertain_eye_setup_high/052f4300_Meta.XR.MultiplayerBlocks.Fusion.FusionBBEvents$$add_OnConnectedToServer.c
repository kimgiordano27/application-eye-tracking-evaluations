/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$add_OnConnectedToServer
ENTRY_POINT: 052f4300
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__add_OnConnectedToServer(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long unaff_x19;
  long *plVar11;
  long *unaff_x22;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  
                    /* try { // try from 052f4304 to 053f4313 has its CatchHandler @ 052f4378 */
  if ((param_1 != 0) && (lVar5 = FUN_066d47b8(param_1,0), lVar5 != 0)) {
    uVar9 = (ulong)*(uint *)(unaff_x19 + 0x44);
    uVar15 = (ulong)*(uint *)(unaff_x19 + 0x48);
    uVar12 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x40),uVar9,uVar15,lVar5,0);
                    /* try { // try from 052f4324 to 053f4333 has its CatchHandler @ 052f4374 */
    uVar13 = (ulong)*(uint *)(unaff_x19 + 0x4c);
    uVar14 = (ulong)*(uint *)(unaff_x19 + 0x50);
    uVar16 = (ulong)*(uint *)(unaff_x19 + 0x54);
                    /* try { // try from 052f4334 to 053f4393 has its CatchHandler @ 052f428c */
    lVar5 = FUN_066c67b0();
    if (lVar5 != 0) {
      uVar6 = FUN_066d47b8(lVar5,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*unaff_x22);
      }
      uVar7 = FUN_066cd30c(uVar6,0);
      if ((uVar7 & 1) != 0) {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f4324 with catch @ 052f4374
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f4304 with catch @ 052f4378
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052f42e8 with catch @ 052f437c
                        */
        lVar5 = FUN_066c67b0();
        if ((lVar5 == 0) || (lVar5 = FUN_066d47b8(lVar5,0), lVar5 == 0)) goto LAB_052f4800;
        uVar14 = (ulong)*(uint *)(unaff_x19 + 0x50);
        uVar16 = (ulong)*(uint *)(unaff_x19 + 0x54);
                    /* try { // try from 052f4394 to 053f4397 has its CatchHandler @ 052f43a4 */
        uVar13 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x4c),uVar14,uVar16,lVar5,0);
                    /* catch() { ... } // from try @ 052f4394 with catch @ 052f43a4 */
      }
                    /* try { // try from 052f43b4 to 053f43bb has its CatchHandler @ 052f43d0 */
      lVar5 = FUN_066c67ec();
      puVar4 = PTR_DAT_06d03770;
      if (lVar5 != 0) {
                    /* try { // try from 052f43bc to 053f43c7 has its CatchHandler @ 052f428c */
                    /* try { // try from 052f43c8 to 053f43cf has its CatchHandler @ 052f43d0 */
        lVar5 = FUN_03a862a4(lVar5,*(undefined8 *)PTR_DAT_06d03770);
        plVar11 = (long *)(unaff_x19 + 0x98);
        *plVar11 = lVar5;
        thunk_FUN_02f411dc(plVar11,lVar5);
        if (*plVar11 != 0) {
          FUN_06744404(*plVar11,0,0);
          if (*(long *)(unaff_x19 + 0x98) != 0) {
            FUN_06743fdc(*(long *)(unaff_x19 + 0x98),*(undefined8 *)(unaff_x19 + 0x28),0);
            lVar5 = *(long *)(unaff_x19 + 0x98);
            if (DAT_071babf5 == '\0') {
              FUN_02f07e70(PTR_DAT_06d02c10);
              DAT_071babf5 = '\x01';
            }
            puVar2 = PTR_DAT_06d02c10;
            if (lVar5 != 0) {
              puVar10 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
              FUN_067441f8(*puVar10,puVar10[1],puVar10[2],lVar5,0);
              uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar7 = FUN_066cd30c(uVar6,0);
              lVar5 = *plVar11;
              if ((uVar7 & 1) != 0) {
                if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                   (lVar8 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar8 == 0))
                goto LAB_052f4800;
                uVar12 = FUN_066d6014(uVar12,uVar9,uVar15,lVar8,0);
              }
              if (lVar5 != 0) {
                FUN_06744330(uVar12,uVar9,uVar15,lVar5,0);
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
                    uVar12 = *(undefined8 *)(unaff_x19 + 0x98);
                    fVar17 = *(float *)(unaff_x19 + 0x40);
                    uVar6 = *(undefined8 *)(unaff_x19 + 0x44);
                    fVar19 = *(float *)(unaff_x19 + 0x4c);
                    uVar20 = *(undefined8 *)(unaff_x19 + 0x50);
                    if (DAT_071bac5f == '\0') {
                      FUN_02f07e70(PTR_DAT_06d03010);
                      DAT_071bac5f = '\x01';
                    }
                    puVar3 = PTR_DAT_06d03010;
                    fVar17 = fVar17 - fVar19;
                    fVar19 = (float)uVar6 - (float)uVar20;
                    fVar18 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar20 >> 0x20);
                    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                      thunk_FUN_02f12b58();
                    }
                    uVar1 = DAT_013f6e08;
                    FUN_0529a2b8(SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19),0,
                                 DAT_013f6e08,uVar12,0);
                    lVar5 = FUN_066c67ec();
                    if (lVar5 != 0) {
                      lVar5 = FUN_03a862a4(lVar5,*(undefined8 *)puVar4);
                      plVar11 = (long *)(unaff_x19 + 0xa0);
                      *plVar11 = lVar5;
                      thunk_FUN_02f411dc(plVar11,lVar5);
                      if (*plVar11 != 0) {
                        FUN_06744404(*plVar11,0,0);
                        if (*plVar11 != 0) {
                          FUN_06743fdc(*plVar11,*(undefined8 *)(unaff_x19 + 0x28),0);
                          lVar5 = *(long *)(unaff_x19 + 0xa0);
                          if (DAT_071babf5 == '\0') {
                            FUN_02f07e70(PTR_DAT_06d02c10);
                            DAT_071babf5 = '\x01';
                          }
                          if (lVar5 != 0) {
                            puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                            FUN_067441f8(*puVar10,puVar10[1],puVar10[2],lVar5,0);
                            uVar12 = *(undefined8 *)(unaff_x19 + 0x28);
                            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                              thunk_FUN_02f12b58();
                            }
                            uVar9 = FUN_066cd30c(uVar12,0);
                            lVar5 = *plVar11;
                            if ((uVar9 & 1) != 0) {
                              if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                 (lVar8 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar8 == 0))
                              goto LAB_052f4800;
                              uVar13 = FUN_066d6014(uVar13,uVar14,uVar16,lVar8,0);
                            }
                            if (lVar5 != 0) {
                              FUN_06744330(uVar13,uVar14,uVar16,lVar5,0);
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
                                    uVar12 = *(undefined8 *)(unaff_x19 + 0xa0);
                                    fVar17 = *(float *)(unaff_x19 + 0x40);
                                    uVar6 = *(undefined8 *)(unaff_x19 + 0x44);
                                    fVar19 = *(float *)(unaff_x19 + 0x4c);
                                    uVar20 = *(undefined8 *)(unaff_x19 + 0x50);
                                    if (DAT_071bac5f == '\0') {
                                      FUN_02f07e70(PTR_DAT_06d03010);
                                      DAT_071bac5f = '\x01';
                                    }
                                    fVar17 = fVar17 - fVar19;
                                    fVar19 = (float)uVar6 - (float)uVar20;
                                    fVar18 = (float)((ulong)uVar6 >> 0x20) -
                                             (float)((ulong)uVar20 >> 0x20);
                                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                      thunk_FUN_02f12b58();
                                    }
                                    FUN_0529a2b8(SQRT(fVar18 * fVar18 +
                                                      fVar17 * fVar17 + fVar19 * fVar19),0,uVar1,
                                                 uVar12,0);
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
LAB_052f4800:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


