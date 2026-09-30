/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.VoiceSetup.<SpawnSpeaker>d__10$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 052f7fd4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_VoiceSetup_<SpawnSpeaker>d__10__System_Collections_IEnumerator_get_Current
               (float param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int in_w8;
  long unaff_x19;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *unaff_x22;
  undefined4 uVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  
  if (in_w8 == 0) {
    thunk_FUN_02f12b58();
    param_1 = (float)*(int *)(unaff_x19 + 0x2c);
  }
  plVar5 = (long *)(unaff_x19 + 0x48);
  lVar6 = *plVar5;
  *(float *)(unaff_x19 + 0x54) = param_1 - unaff_s8;
  *(float *)(unaff_x19 + 0x58) = ABS(unaff_s9 - unaff_s8);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar3 = FUN_066cd30c(lVar6,0);
  if (((uVar3 & 1) == 0) ||
     (ABS(unaff_s8 - *(float *)(unaff_x19 + 0x50)) <= *(float *)(unaff_x19 + 0x30))) {
    bVar1 = false;
  }
  else {
    lVar6 = *plVar5;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066cdd04(lVar6,0);
    bVar1 = true;
  }
  lVar6 = *plVar5;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(lVar6,0);
  if ((bVar1 || (~uVar2 & 1) != 0) &&
     ((*(float *)(unaff_x19 + 0x58) < 177.0 || (*(float *)(unaff_x19 + 0x54) < 177.0)))) {
    lVar6 = FUN_066c67ec();
    if (lVar6 != 0) {
      uVar4 = FUN_03a862a4(lVar6,*(undefined8 *)PTR_DAT_06d03770);
      *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
      thunk_FUN_02f411dc(plVar5,uVar4);
      lVar6 = *(long *)(unaff_x19 + 0x40);
      if ((lVar6 != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
        FUN_067440c0(*(undefined4 *)(lVar6 + 0x80),*(undefined4 *)(lVar6 + 0x84),
                     *(undefined4 *)(lVar6 + 0x88),*(long *)(unaff_x19 + 0x48),0);
        lVar6 = *(long *)(unaff_x19 + 0x40);
        if (lVar6 != 0) {
          lVar7 = *(long *)(unaff_x19 + 0x48);
          FUN_0528b5b0(*(undefined4 *)(lVar6 + 0x80),*(undefined4 *)(lVar6 + 0x84),
                       *(undefined4 *)(lVar6 + 0x88),0);
          if (lVar7 != 0) {
            FUN_06745500(lVar7,0);
            FUN_0529a6c0(*plVar5,0);
            if (*plVar5 != 0) {
              FUN_06743fdc(*plVar5,*(undefined8 *)(unaff_x19 + 0x20),0);
              if (*(long *)(unaff_x19 + 0x40) != 0) {
                *(undefined4 *)(unaff_x19 + 0x50) =
                     *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x7c);
                uVar8 = NEON_fminnm(*(undefined4 *)(unaff_x19 + 0x58),0x43310000);
                FUN_0529a3d8(uVar8,0,0,*(undefined8 *)(unaff_x19 + 0x48),0);
                if (177.0 <= *(float *)(unaff_x19 + 0x54)) {
                  fVar9 = -177.0;
                }
                else {
                  fVar9 = -*(float *)(unaff_x19 + 0x54);
                }
                FUN_0529a348(fVar9,0,0,*(undefined8 *)(unaff_x19 + 0x48),0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  return;
}


