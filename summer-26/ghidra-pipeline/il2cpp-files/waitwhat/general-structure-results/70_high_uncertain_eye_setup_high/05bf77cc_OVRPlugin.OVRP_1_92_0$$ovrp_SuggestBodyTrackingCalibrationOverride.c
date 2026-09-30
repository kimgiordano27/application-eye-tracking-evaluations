/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 05bf77cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_92_0__ovrp_SuggestBodyTrackingCalibrationOverride(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x21;
  
  puVar1 = PTR_DAT_070c1b68;
  if ((*(byte *)(unaff_x21 + 0xe39) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c1b68);
    *(undefined1 *)(unaff_x21 + 0xe39) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar4 = FUN_069d8404(uVar5,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
    iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x1c),
                         *(undefined4 *)(param_1 + 0x8c),1);
    if (iVar3 == 0) {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
      iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x18),
                           *(undefined4 *)(param_1 + 0x8c),2);
      if (iVar3 == 0) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
        iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x20),
                             *(undefined4 *)(param_1 + 0x8c),8);
        if (iVar3 == 0) {
          if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
          iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x28),
                               *(undefined4 *)(param_1 + 0x8c),3);
          if (iVar3 == 0) {
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
            iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x24),
                                 *(undefined4 *)(param_1 + 0x8c),4);
            if (iVar3 == 0) {
              if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
              iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x2c),
                                   *(undefined4 *)(param_1 + 0x8c),9);
              if (iVar3 == 0) {
                if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
                iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x34),
                                     *(undefined4 *)(param_1 + 0x8c),5);
                if (iVar3 == 0) {
                  if (*(long *)(param_1 + 0x80) == 0) goto LAB_05bf7954;
                  iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x30),
                                       *(undefined4 *)(param_1 + 0x8c),6);
                  if (iVar3 == 0) {
                    if (*(long *)(param_1 + 0x80) == 0) {
LAB_05bf7954:
                    /* WARNING: Subroutine does not return */
                      FUN_03188cd8();
                    }
                    iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x38),
                                         *(undefined4 *)(param_1 + 0x8c),10);
                    if (iVar3 == 0) {
                      if (*(long *)(param_1 + 0x80) != 0) {
                        iVar3 = FUN_05bf7614(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x3c),
                                             *(undefined4 *)(param_1 + 0x8c),7);
                        return iVar3 == 0;
                      }
                      goto LAB_05bf7954;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


