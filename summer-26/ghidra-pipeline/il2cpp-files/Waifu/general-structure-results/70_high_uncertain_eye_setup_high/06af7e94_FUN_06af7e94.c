/*
FUNCTION_NAME: FUN_06af7e94
ENTRY_POINT: 06af7e94
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06af7e94(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_38;
  
  if ((DAT_086e24fa & 1) == 0) {
    FUN_0335b6c8(&DAT_083ca3d0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ca458,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08435028,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0845a710,1);
    DataMemoryBarrier(2,3);
    DAT_086e24fa = 1;
  }
  fVar5 = *(float *)(param_1 + 0x28);
  if (fVar5 <= 0.0) goto LAB_06af8038;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) goto LAB_06af812c;
  if (DAT_086eced8 == (code *)0x0) {
    DAT_086eced8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::get_isPlaying()");
  }
  uVar1 = (*DAT_086eced8)(lVar3);
  if (((uVar1 & 1) == 0) && (DAT_012edbf8 < *(float *)(param_1 + 0x28))) {
    fVar5 = *(float *)(param_1 + 0x24);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar4 = (float)(*DAT_086ef698)();
    fVar5 = fVar5 - fVar4;
    *(float *)(param_1 + 0x24) = fVar5;
    if (fVar5 <= 0.0) {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_06af812c;
      if (DAT_086ece50 == (code *)0x0) {
        DAT_086ece50 = (code *)FUN_033d1b68(
                                           "UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)"
                                           );
      }
      (*DAT_086ece50)(lVar3,0);
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) goto LAB_06af812c;
  if (DAT_086eced8 == (code *)0x0) {
    DAT_086eced8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::get_isPlaying()");
  }
  uVar1 = (*DAT_086eced8)(lVar3);
  fVar5 = *(float *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_06af8038:
    if (0.0 < fVar5) {
      return;
    }
  }
  else {
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar4 = (float)(*DAT_086ef698)();
    fVar5 = fVar5 - fVar4;
    *(float *)(param_1 + 0x28) = fVar5;
    if (0.0 <= fVar5) goto LAB_06af8038;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (DAT_086eced8 == (code *)0x0) {
      DAT_086eced8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::get_isPlaying()");
    }
    uVar1 = (*DAT_086eced8)(lVar3);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_079ca0b0(DAT_0845a710,0);
      }
    }
    else {
      if (*(int *)(DAT_083ca3d0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      local_38 = FUN_0680d6cc(0);
      uVar2 = FUN_0680e710(&local_38,0);
      uVar2 = FUN_06660dbc(DAT_08435028,uVar2,0);
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca458);
      }
      FUN_079c9c0c(uVar2,0);
      OVRPlugin_OVRP_1_9_0__ovrp_GetBoundaryGeometry2(param_1);
    }
    return;
  }
LAB_06af812c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


