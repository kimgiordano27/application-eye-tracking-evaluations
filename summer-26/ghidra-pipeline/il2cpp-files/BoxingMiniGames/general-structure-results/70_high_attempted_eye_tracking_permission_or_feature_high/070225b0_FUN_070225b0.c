/*
FUNCTION_NAME: FUN_070225b0
ENTRY_POINT: 070225b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_070225b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = PTR_DAT_079ff4c8;
  if ((DAT_07eebd89 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a2ab00);
    FUN_03642964(PTR_DAT_079ff4c8);
    DAT_07eebd89 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = FUN_0702e180(0);
  uVar3 = FUN_0701c298(param_1);
  puVar2 = PTR_DAT_07a2ab00;
  if (lVar6 != 0) {
    uVar7 = FUN_06f8a5d4(lVar6,uVar3,0);
    uVar8 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
                      (param_1);
    if (((uVar7 & 1) != 0) && ((uVar8 & 1) != 0)) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_071f80a0(param_2,0);
      FUN_071f80a8(param_2,uVar4 | 0x20,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = FUN_0702e180(0);
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x8c) == '\0') {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar6 = FUN_0702e180(0);
        if (lVar6 == 0) goto LAB_070228dc;
        bVar11 = *(byte *)(lVar6 + 0x9c) ^ 1;
      }
      else {
        bVar11 = 0;
      }
      pfVar9 = (float *)FUN_07039910(param_3,0);
      fVar15 = *pfVar9;
      if (DAT_07ed76b8 == '\0') {
        FUN_03642964(PTR_DAT_079f4df8);
        DAT_07ed76b8 = '\x01';
      }
      fVar12 = ABS(fVar15);
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar14 = **(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) * 8.0;
      fVar13 = fVar12 * DAT_016511f0;
      if (fVar12 * DAT_016511f0 <= fVar14) {
        fVar13 = fVar14;
      }
      if (bVar11 != 0 || ABS(0.0 - fVar15) < fVar13) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar4 = FUN_071f80a0(param_2,0);
        FUN_071f80a8(param_2,uVar4 & 0xffffffbf,0);
      }
      uVar7 = UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType
                        (param_1);
      if ((uVar7 & 1) == 0) {
        iVar5 = FUN_0701c298(param_1);
        if (iVar5 == 1) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          iVar5 = 0xffff;
        }
        else {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          iVar5 = FUN_0702b528(0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978(*(long *)puVar2);
          }
          iVar5 = iVar5 + 1;
        }
        FUN_071f8078(param_2,iVar5,0);
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar3 = FUN_0702b528(0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)puVar2);
        }
        FUN_071f8078(param_2,uVar3,0);
        FUN_071f80b0(param_2,0,0);
      }
      puVar10 = (undefined4 *)FUN_07039910(param_3,0);
      uVar3 = *puVar10;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_071f8098(uVar3,param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar6 = FUN_0702e180(0);
      if (lVar6 != 0) {
        FUN_071f8080(param_2,*(undefined1 *)(lVar6 + 0xe1),0);
        lVar6 = FUN_0702e180(0);
        if (lVar6 != 0) {
          FUN_071f8088(param_2,*(undefined4 *)(lVar6 + 0xe4),0);
          return;
        }
      }
    }
  }
LAB_070228dc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


