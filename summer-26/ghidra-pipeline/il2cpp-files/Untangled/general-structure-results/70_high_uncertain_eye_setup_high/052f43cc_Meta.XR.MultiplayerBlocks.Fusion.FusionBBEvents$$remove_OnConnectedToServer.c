/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$remove_OnConnectedToServer
ENTRY_POINT: 052f43cc
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


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__remove_OnConnectedToServer(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x22;
  undefined8 *unaff_x25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar10;
  undefined8 unaff_d11;
  float fVar11;
  undefined8 unaff_d12;
  undefined8 uVar12;
  float fVar13;
  undefined8 unaff_d13;
  undefined8 uVar14;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052f43b4 with catch @ 052f43d0
                       catch(type#2 @ 00000000) { ... } // from try @ 052f43c8 with catch @ 052f43d0
                        */
  plVar7 = (long *)(unaff_x19 + 0x98);
  *plVar7 = param_1;
                    /* try { // try from 052f43d4 to 053f463f has its CatchHandler @ 052f43d4
                       catch() { ... } // from try @ 052f43d4 with catch @ 052f43d4
                       catch() { ... } // from try @ 052f4760 with catch @ 052f43d4
                       catch() { ... } // from try @ 052f4874 with catch @ 052f43d4
                       catch() { ... } // from try @ 052f487c with catch @ 052f43d4
                       catch() { ... } // from try @ 052f4888 with catch @ 052f43d4
                       catch() { ... } // from try @ 052f4944 with catch @ 052f43d4 */
  thunk_FUN_02f411dc(plVar7,param_1);
  if (*plVar7 != 0) {
    FUN_06744404(*plVar7,0,0);
    if (*(long *)(unaff_x19 + 0x98) != 0) {
      FUN_06743fdc(*(long *)(unaff_x19 + 0x98),*(undefined8 *)(unaff_x19 + 0x28),0);
      lVar8 = *(long *)(unaff_x19 + 0x98);
      if (DAT_071babf5 == '\0') {
        FUN_02f07e70(PTR_DAT_06d02c10);
        DAT_071babf5 = '\x01';
      }
      puVar2 = PTR_DAT_06d02c10;
      if (lVar8 != 0) {
        puVar6 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
        FUN_067441f8(*puVar6,puVar6[1],puVar6[2],lVar8,0);
        uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar4 = FUN_066cd30c(uVar9,0);
        lVar8 = *plVar7;
        if ((uVar4 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar5 == 0)) goto LAB_052f4800;
          unaff_d11 = FUN_066d6014(lVar5,0);
        }
        if (lVar8 != 0) {
          FUN_06744330(unaff_d11,unaff_d12,unaff_d13,lVar8,0);
          FUN_0528adb8(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                       *(undefined4 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b808(*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b820(*(undefined8 *)(unaff_x19 + 0x98),0);
          FUN_0528b868(*(undefined8 *)(unaff_x19 + 0x98),0);
          if (*(long *)(unaff_x19 + 0x98) != 0) {
            FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                         *(undefined4 *)(unaff_x19 + 0x90),*(long *)(unaff_x19 + 0x98),0);
            lVar8 = *(long *)(unaff_x19 + 0x98);
            if (lVar8 != 0) {
              FUN_06744020(lVar8,0);
              FUN_0528b5b0(0);
              FUN_06745500(lVar8,0);
              uVar9 = *(undefined8 *)(unaff_x19 + 0x98);
              fVar10 = *(float *)(unaff_x19 + 0x40);
              uVar12 = *(undefined8 *)(unaff_x19 + 0x44);
              fVar13 = *(float *)(unaff_x19 + 0x4c);
              uVar14 = *(undefined8 *)(unaff_x19 + 0x50);
              if (DAT_071bac5f == '\0') {
                FUN_02f07e70(PTR_DAT_06d03010);
                DAT_071bac5f = '\x01';
              }
              puVar3 = PTR_DAT_06d03010;
              fVar10 = fVar10 - fVar13;
              fVar13 = (float)uVar12 - (float)uVar14;
              fVar11 = (float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar14 >> 0x20);
              if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              uVar1 = DAT_013f6e08;
              FUN_0529a2b8(SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar13 * fVar13),0,DAT_013f6e08,
                           uVar9,0);
              lVar8 = FUN_066c67ec();
              if (lVar8 != 0) {
                lVar8 = FUN_03a862a4(lVar8,*unaff_x25);
                plVar7 = (long *)(unaff_x19 + 0xa0);
                *plVar7 = lVar8;
                thunk_FUN_02f411dc(plVar7,lVar8);
                if (*plVar7 != 0) {
                  FUN_06744404(*plVar7,0,0);
                  if (*plVar7 != 0) {
                    FUN_06743fdc(*plVar7,*(undefined8 *)(unaff_x19 + 0x28),0);
                    lVar8 = *(long *)(unaff_x19 + 0xa0);
                    if (DAT_071babf5 == '\0') {
                      FUN_02f07e70(PTR_DAT_06d02c10);
                      DAT_071babf5 = '\x01';
                    }
                    if (lVar8 != 0) {
                      puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                      FUN_067441f8(*puVar6,puVar6[1],puVar6[2],lVar8,0);
                      uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_02f12b58();
                      }
                      uVar4 = FUN_066cd30c(uVar9,0);
                      lVar8 = *plVar7;
                      if ((uVar4 & 1) != 0) {
                        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                           (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar5 == 0))
                        goto LAB_052f4800;
                        unaff_d8 = FUN_066d6014(lVar5,0);
                      }
                      if (lVar8 != 0) {
                        FUN_06744330(unaff_d8,unaff_d9,unaff_d10,lVar8,0);
                        FUN_0528b808(*plVar7,0);
                        FUN_0528b820(*plVar7,0);
                        FUN_0528b868(*plVar7,0);
                        if (*plVar7 != 0) {
                          FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),
                                       *(undefined4 *)(unaff_x19 + 0x8c),
                                       *(undefined4 *)(unaff_x19 + 0x90),*plVar7,0);
                          if (*(long *)(unaff_x19 + 0x98) != 0) {
                            lVar8 = *(long *)(unaff_x19 + 0xa0);
                            FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                            FUN_0528b5b0(0);
                            if (lVar8 != 0) {
                              FUN_06745500(lVar8,0);
                              FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                              uVar9 = *(undefined8 *)(unaff_x19 + 0xa0);
                              fVar10 = *(float *)(unaff_x19 + 0x40);
                              uVar12 = *(undefined8 *)(unaff_x19 + 0x44);
                              fVar13 = *(float *)(unaff_x19 + 0x4c);
                              uVar14 = *(undefined8 *)(unaff_x19 + 0x50);
                              if (DAT_071bac5f == '\0') {
                                FUN_02f07e70(PTR_DAT_06d03010);
                                DAT_071bac5f = '\x01';
                              }
                              fVar10 = fVar10 - fVar13;
                              fVar13 = (float)uVar12 - (float)uVar14;
                              fVar11 = (float)((ulong)uVar12 >> 0x20) -
                                       (float)((ulong)uVar14 >> 0x20);
                              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                thunk_FUN_02f12b58();
                              }
                              FUN_0529a2b8(SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar13 * fVar13)
                                           ,0,uVar1,uVar9,0);
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
LAB_052f4800:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


