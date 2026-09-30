/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnObjectExitAOI
ENTRY_POINT: 052f67f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnObjectExitAOI
               (undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  undefined8 unaff_d11;
  float fVar13;
  undefined8 unaff_d12;
  undefined8 uVar14;
  float fVar15;
  undefined8 unaff_d13;
  undefined8 uVar16;
  
  lVar3 = FUN_066c67b0(param_1,0);
  if ((lVar3 != 0) && (lVar3 = FUN_066d47b8(lVar3,0), lVar3 != 0)) {
    uVar10 = (ulong)*(uint *)(unaff_x19 + 0x60);
    uVar11 = (ulong)*(uint *)(unaff_x19 + 100);
    uVar9 = FUN_066d31a4(*(undefined4 *)(unaff_x19 + 0x5c),uVar10,uVar11,lVar3,0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066cd30c(uVar8,0);
    lVar3 = *unaff_x20;
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 052f6860 to 053f686f has its CatchHandler @ 052f6934 */
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar5 == 0)) goto LAB_052f6bd4;
                    /* try { // try from 052f6870 to 053f6923 has its CatchHandler @ 052f66a8 */
      unaff_d11 = FUN_066d6014(lVar5,0);
    }
    if (lVar3 != 0) {
      FUN_06744330(unaff_d11,unaff_d12,unaff_d13,lVar3,0);
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
          uVar8 = *(undefined8 *)(unaff_x19 + 0x98);
          fVar12 = *(float *)(unaff_x19 + 0x50);
          uVar14 = *(undefined8 *)(unaff_x19 + 0x54);
          fVar15 = *(float *)(unaff_x19 + 0x5c);
          uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
          if (DAT_071bac5f == '\0') {
            FUN_02f07e70(PTR_DAT_06d03010);
            DAT_071bac5f = '\x01';
          }
          puVar2 = PTR_DAT_06d03010;
          fVar12 = fVar12 - fVar15;
          fVar15 = (float)uVar14 - (float)uVar16;
          fVar13 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
          if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar1 = DAT_013f6e08;
          FUN_0529a2b8(SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15),0,DAT_013f6e08,
                       uVar8,0);
          lVar3 = FUN_066c67ec();
          if (lVar3 != 0) {
            lVar3 = FUN_03a862a4(lVar3,*unaff_x23);
            plVar7 = (long *)(unaff_x19 + 0xa0);
            *plVar7 = lVar3;
            thunk_FUN_02f411dc(plVar7,lVar3);
            if (*plVar7 != 0) {
              FUN_06743fdc(*plVar7,*(undefined8 *)(unaff_x19 + 0x28),0);
              if (*(long *)(unaff_x19 + 0xa0) != 0) {
                FUN_06744404(*(long *)(unaff_x19 + 0xa0),0,0);
                lVar3 = *plVar7;
                if (*(char *)(unaff_x22 + 0xbf5) == '\0') {
                  FUN_02f07e70(PTR_DAT_06d02c10);
                  *(undefined1 *)(unaff_x22 + 0xbf5) = 1;
                }
                if (lVar3 != 0) {
                  puVar6 = *(undefined4 **)(*unaff_x24 + 0xb8);
                  FUN_067441f8(*puVar6,puVar6[1],puVar6[2],lVar3,0);
                  uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
                  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  uVar4 = FUN_066cd30c(uVar8,0);
                  lVar3 = *plVar7;
                  if ((uVar4 & 1) != 0) {
                    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                       (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar5 == 0))
                    goto LAB_052f6bd4;
                    uVar9 = FUN_066d6014(uVar9,uVar10,uVar11,lVar5,0);
                  }
                  if (lVar3 != 0) {
                    FUN_06744330(uVar9,uVar10,uVar11,lVar3,0);
                    FUN_0528b808(*plVar7,0);
                    FUN_0528b820(*plVar7,0);
                    FUN_0528b868(*plVar7,0);
                    if (*plVar7 != 0) {
                      FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),
                                   *(undefined4 *)(unaff_x19 + 0x8c),
                                   *(undefined4 *)(unaff_x19 + 0x90),*plVar7,0);
                      if (*(long *)(unaff_x19 + 0x98) != 0) {
                        lVar3 = *(long *)(unaff_x19 + 0xa0);
                        FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                        FUN_0528b5b0(0);
                        if (lVar3 != 0) {
                          FUN_06745500(lVar3,0);
                          FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                          uVar9 = *(undefined8 *)(unaff_x19 + 0xa0);
                          fVar12 = *(float *)(unaff_x19 + 0x50);
                          uVar8 = *(undefined8 *)(unaff_x19 + 0x54);
                          fVar15 = *(float *)(unaff_x19 + 0x5c);
                          uVar14 = *(undefined8 *)(unaff_x19 + 0x60);
                          if (DAT_071bac5f == '\0') {
                            FUN_02f07e70(PTR_DAT_06d03010);
                            DAT_071bac5f = '\x01';
                          }
                          fVar12 = fVar12 - fVar15;
                          fVar15 = (float)uVar8 - (float)uVar14;
                          fVar13 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar14 >> 0x20);
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_02f12b58();
                          }
                          FUN_0529a2b8(SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15),0,
                                       uVar1,uVar9,0);
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
LAB_052f6bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


