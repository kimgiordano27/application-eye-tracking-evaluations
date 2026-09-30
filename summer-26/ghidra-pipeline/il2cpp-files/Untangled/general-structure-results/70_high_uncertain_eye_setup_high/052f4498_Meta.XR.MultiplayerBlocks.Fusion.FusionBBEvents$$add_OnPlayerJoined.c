/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$add_OnPlayerJoined
ENTRY_POINT: 052f4498
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__add_OnPlayerJoined
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uVar8;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 unaff_d13;
  undefined8 uVar13;
  
  uVar8 = FUN_066d6014(param_3,0);
  if (unaff_x20 != 0) {
    FUN_06744330(uVar8,param_2,unaff_d13);
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
        uVar8 = *(undefined8 *)(unaff_x19 + 0x98);
        fVar9 = *(float *)(unaff_x19 + 0x40);
        uVar11 = *(undefined8 *)(unaff_x19 + 0x44);
        fVar12 = *(float *)(unaff_x19 + 0x4c);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x50);
        if (DAT_071bac5f == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071bac5f = '\x01';
        }
        puVar2 = PTR_DAT_06d03010;
        fVar9 = fVar9 - fVar12;
        fVar12 = (float)uVar11 - (float)uVar13;
        fVar10 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
        if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar1 = DAT_013f6e08;
        FUN_0529a2b8(SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar12 * fVar12),0,DAT_013f6e08,uVar8,0)
        ;
        lVar6 = FUN_066c67ec();
        if (lVar6 != 0) {
          lVar6 = FUN_03a862a4(lVar6,*unaff_x25);
          plVar7 = (long *)(unaff_x19 + 0xa0);
          *plVar7 = lVar6;
          thunk_FUN_02f411dc(plVar7,lVar6);
          if (*plVar7 != 0) {
            FUN_06744404(*plVar7,0,0);
            if (*plVar7 != 0) {
              FUN_06743fdc(*plVar7,*(undefined8 *)(unaff_x19 + 0x28),0);
              lVar6 = *(long *)(unaff_x19 + 0xa0);
              if (*(char *)(unaff_x23 + 0xbf5) == '\0') {
                FUN_02f07e70(PTR_DAT_06d02c10);
                *(undefined1 *)(unaff_x23 + 0xbf5) = 1;
              }
              if (lVar6 != 0) {
                puVar5 = *(undefined4 **)(*unaff_x26 + 0xb8);
                FUN_067441f8(*puVar5,puVar5[1],puVar5[2],lVar6,0);
                uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar3 = FUN_066cd30c(uVar8,0);
                lVar6 = *plVar7;
                if ((uVar3 & 1) != 0) {
                  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                     (lVar4 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar4 == 0))
                  goto LAB_052f4800;
                  unaff_d8 = FUN_066d6014(lVar4,0);
                }
                if (lVar6 != 0) {
                  FUN_06744330(unaff_d8,unaff_d9,unaff_d10,lVar6,0);
                  FUN_0528b808(*plVar7,0);
                  FUN_0528b820(*plVar7,0);
                  FUN_0528b868(*plVar7,0);
                  if (*plVar7 != 0) {
                    FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c)
                                 ,*(undefined4 *)(unaff_x19 + 0x90),*plVar7,0);
                    if (*(long *)(unaff_x19 + 0x98) != 0) {
                      lVar6 = *(long *)(unaff_x19 + 0xa0);
                      FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                      FUN_0528b5b0(0);
                      if (lVar6 != 0) {
                        FUN_06745500(lVar6,0);
                        FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                        uVar8 = *(undefined8 *)(unaff_x19 + 0xa0);
                        fVar9 = *(float *)(unaff_x19 + 0x40);
                        uVar11 = *(undefined8 *)(unaff_x19 + 0x44);
                        fVar12 = *(float *)(unaff_x19 + 0x4c);
                        uVar13 = *(undefined8 *)(unaff_x19 + 0x50);
                        if (DAT_071bac5f == '\0') {
                          FUN_02f07e70(PTR_DAT_06d03010);
                          DAT_071bac5f = '\x01';
                        }
                        fVar9 = fVar9 - fVar12;
                        fVar12 = (float)uVar11 - (float)uVar13;
                        fVar10 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                          thunk_FUN_02f12b58();
                        }
                        FUN_0529a2b8(SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar12 * fVar12),0,uVar1
                                     ,uVar8,0);
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
LAB_052f4800:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


