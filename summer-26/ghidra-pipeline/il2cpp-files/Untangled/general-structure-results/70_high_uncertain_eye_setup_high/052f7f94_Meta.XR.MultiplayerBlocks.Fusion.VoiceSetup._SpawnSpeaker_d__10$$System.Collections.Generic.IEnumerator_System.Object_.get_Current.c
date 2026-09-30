/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup.<SpawnSpeaker>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
ENTRY_POINT: 052f7f94
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_VoiceSetup_<SpawnSpeaker>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar2 = PTR_DAT_06d01e20;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar12 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x7c);
    fVar13 = (float)*(int *)(unaff_x19 + 0x28);
    fVar9 = (float)*(int *)(unaff_x19 + 0x2c);
    fVar11 = fVar9;
    if (fVar12 <= fVar9) {
      fVar11 = fVar12;
    }
    if (fVar12 < fVar13) {
      fVar11 = fVar13;
    }
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      fVar9 = (float)*(int *)(unaff_x19 + 0x2c);
    }
    plVar6 = (long *)(unaff_x19 + 0x48);
    lVar7 = *plVar6;
    *(float *)(unaff_x19 + 0x54) = fVar9 - fVar11;
    *(float *)(unaff_x19 + 0x58) = ABS(fVar13 - fVar11);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066cd30c(lVar7,0);
    if (((uVar4 & 1) == 0) ||
       (ABS(fVar11 - *(float *)(unaff_x19 + 0x50)) <= *(float *)(unaff_x19 + 0x30))) {
      bVar1 = false;
    }
    else {
      lVar7 = *plVar6;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_066cdd04(lVar7,0);
      bVar1 = true;
    }
    lVar7 = *plVar6;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(lVar7,0);
    if ((!bVar1 && (~uVar3 & 1) == 0) ||
       ((177.0 <= *(float *)(unaff_x19 + 0x58) && (177.0 <= *(float *)(unaff_x19 + 0x54))))) {
      return;
    }
    lVar7 = FUN_066c67ec();
    if (lVar7 != 0) {
      uVar5 = FUN_03a862a4(lVar7,*(undefined8 *)PTR_DAT_06d03770);
      *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
      thunk_FUN_02f411dc(plVar6,uVar5);
      lVar7 = *(long *)(unaff_x19 + 0x40);
      if ((lVar7 != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
        FUN_067440c0(*(undefined4 *)(lVar7 + 0x80),*(undefined4 *)(lVar7 + 0x84),
                     *(undefined4 *)(lVar7 + 0x88),*(long *)(unaff_x19 + 0x48),0);
        lVar7 = *(long *)(unaff_x19 + 0x40);
        if (lVar7 != 0) {
          lVar8 = *(long *)(unaff_x19 + 0x48);
          FUN_0528b5b0(*(undefined4 *)(lVar7 + 0x80),*(undefined4 *)(lVar7 + 0x84),
                       *(undefined4 *)(lVar7 + 0x88),0);
          if (lVar8 != 0) {
            FUN_06745500(lVar8,0);
            FUN_0529a6c0(*plVar6,0);
            if (*plVar6 != 0) {
              FUN_06743fdc(*plVar6,*(undefined8 *)(unaff_x19 + 0x20),0);
              if (*(long *)(unaff_x19 + 0x40) != 0) {
                *(undefined4 *)(unaff_x19 + 0x50) =
                     *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x7c);
                uVar10 = NEON_fminnm(*(undefined4 *)(unaff_x19 + 0x58),0x43310000);
                FUN_0529a3d8(uVar10,0,0,*(undefined8 *)(unaff_x19 + 0x48),0);
                if (177.0 <= *(float *)(unaff_x19 + 0x54)) {
                  fVar11 = -177.0;
                }
                else {
                  fVar11 = -*(float *)(unaff_x19 + 0x54);
                }
                FUN_0529a348(fVar11,0,0,*(undefined8 *)(unaff_x19 + 0x48),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


