/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$remove_OnPlayerJoined
ENTRY_POINT: 052f4568
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__remove_OnPlayerJoined(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uVar8;
  undefined8 unaff_d10;
  float unaff_s11;
  float fVar9;
  float fVar10;
  undefined8 unaff_d12;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  
  fVar12 = *(float *)(unaff_x19 + 0x4c);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(char *)(unaff_x24 + 0xc5f) == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    *(undefined1 *)(unaff_x24 + 0xc5f) = 1;
  }
  puVar2 = PTR_DAT_06d03010;
  fVar12 = unaff_s11 - fVar12;
  fVar9 = (float)unaff_d12 - (float)uVar13;
  fVar10 = (float)((ulong)unaff_d12 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = DAT_013f6e08;
  FUN_0529a2b8(SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar9 * fVar9),0,DAT_013f6e08);
  lVar3 = FUN_066c67ec();
  if (lVar3 != 0) {
    lVar3 = FUN_03a862a4(lVar3,*unaff_x25);
    plVar7 = (long *)(unaff_x19 + 0xa0);
    *plVar7 = lVar3;
    thunk_FUN_02f411dc(plVar7,lVar3);
    if (*plVar7 != 0) {
      FUN_06744404(*plVar7,0,0);
      if (*plVar7 != 0) {
        FUN_06743fdc(*plVar7,*(undefined8 *)(unaff_x19 + 0x28),0);
        lVar3 = *(long *)(unaff_x19 + 0xa0);
        if (*(char *)(unaff_x23 + 0xbf5) == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          *(undefined1 *)(unaff_x23 + 0xbf5) = 1;
        }
        if (lVar3 != 0) {
          puVar6 = *(undefined4 **)(*unaff_x26 + 0xb8);
          FUN_067441f8(*puVar6,puVar6[1],puVar6[2],lVar3,0);
          uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar4 = FUN_066cd30c(uVar13,0);
          lVar3 = *plVar7;
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (lVar5 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar5 == 0)) goto LAB_052f4800;
            unaff_d8 = FUN_066d6014(lVar5,0);
          }
          if (lVar3 != 0) {
            FUN_06744330(unaff_d8,unaff_d9,unaff_d10,lVar3,0);
            FUN_0528b808(*plVar7,0);
            FUN_0528b820(*plVar7,0);
            FUN_0528b868(*plVar7,0);
            if (*plVar7 != 0) {
              FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                           *(undefined4 *)(unaff_x19 + 0x90),*plVar7,0);
              if (*(long *)(unaff_x19 + 0x98) != 0) {
                lVar3 = *(long *)(unaff_x19 + 0xa0);
                FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                FUN_0528b5b0(0);
                if (lVar3 != 0) {
                  FUN_06745500(lVar3,0);
                  FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                  uVar13 = *(undefined8 *)(unaff_x19 + 0xa0);
                  fVar12 = *(float *)(unaff_x19 + 0x40);
                  uVar8 = *(undefined8 *)(unaff_x19 + 0x44);
                  fVar9 = *(float *)(unaff_x19 + 0x4c);
                  uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
                  if (*(char *)(unaff_x24 + 0xc5f) == '\0') {
                    FUN_02f07e70(PTR_DAT_06d03010);
                    *(undefined1 *)(unaff_x24 + 0xc5f) = 1;
                  }
                  fVar12 = fVar12 - fVar9;
                  fVar9 = (float)uVar8 - (float)uVar11;
                  fVar10 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar11 >> 0x20);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  FUN_0529a2b8(SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar9 * fVar9),0,uVar1,
                               uVar13,0);
                  return;
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


