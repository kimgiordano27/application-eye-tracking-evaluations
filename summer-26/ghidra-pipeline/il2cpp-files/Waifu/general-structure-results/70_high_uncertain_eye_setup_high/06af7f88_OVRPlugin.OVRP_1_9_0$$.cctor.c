/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 06af7f88
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_9_0___cctor(float param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x21;
  float fVar5;
  float unaff_s8;
  float fVar6;
  undefined8 in_stack_00000008;
  
  *(float *)(unaff_x19 + 0x24) = unaff_s8 - param_1;
  if (unaff_s8 - param_1 <= 0.0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_06af812c;
    if (DAT_086ece50 == (code *)0x0) {
      DAT_086ece50 = (code *)FUN_033d1b68(
                                         "UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)"
                                         );
    }
    (*DAT_086ece50)(lVar4,0);
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 == 0) goto LAB_06af812c;
  pcVar3 = *(code **)(unaff_x21 + 0xed8);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)FUN_033d1b68("UnityEngine.AudioSource::get_isPlaying()");
    *(code **)(unaff_x21 + 0xed8) = pcVar3;
  }
  uVar1 = (*pcVar3)(lVar4);
  fVar6 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_06af8038:
    if (0.0 < fVar6) {
      return;
    }
  }
  else {
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar5 = (float)(*DAT_086ef698)();
    fVar6 = fVar6 - fVar5;
    *(float *)(unaff_x19 + 0x28) = fVar6;
    if (0.0 <= fVar6) goto LAB_06af8038;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    pcVar3 = *(code **)(unaff_x21 + 0xed8);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)FUN_033d1b68("UnityEngine.AudioSource::get_isPlaying()");
      *(code **)(unaff_x21 + 0xed8) = pcVar3;
    }
    uVar1 = (*pcVar3)(lVar4);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
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
      in_stack_00000008 = FUN_0680d6cc(0);
      uVar2 = FUN_0680e710(&stack0x00000008,0);
      uVar2 = FUN_06660dbc(DAT_08435028,uVar2,0);
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca458);
      }
      FUN_079c9c0c(uVar2,0);
      OVRPlugin_OVRP_1_9_0__ovrp_GetBoundaryGeometry2();
    }
    return;
  }
LAB_06af812c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


