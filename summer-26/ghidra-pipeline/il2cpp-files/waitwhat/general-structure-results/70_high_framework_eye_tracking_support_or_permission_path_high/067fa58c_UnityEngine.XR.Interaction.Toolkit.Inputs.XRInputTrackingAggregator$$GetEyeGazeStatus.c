/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 067fa58c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
               (undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_x11;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  if (unaff_x29 != 0) {
    if (unaff_w22 < *(uint *)(unaff_x29 + 0x18)) {
      *(undefined4 *)(unaff_x29 + in_x11 * 4 + 0x20) = param_1;
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar2 == 0)) goto LAB_067fa774;
      if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = *(long *)(lVar2 + (long)(int)unaff_w21 * 0x50 + 0x58);
        if (*(char *)(unaff_x19 + 0x174) == '\0') {
          if (*(uint *)(unaff_x25 + 0x18) <= unaff_w20) goto LAB_067fa778;
          uVar1 = *(undefined4 *)(unaff_x24 + (long)unaff_w23 * 0x178 + 0x94);
        }
        else {
          if (*(uint *)(unaff_x25 + 0x18) <= unaff_w20) goto LAB_067fa778;
          uVar1 = FUN_067c7040(*(undefined4 *)(unaff_x24 + (long)unaff_w23 * 0x178 + 0x94),0);
        }
        if (lVar2 == 0) goto LAB_067fa774;
        if ((uint)unaff_x28 < *(uint *)(lVar2 + 0x18)) {
          *(undefined4 *)(lVar2 + unaff_x28 * 4 + 0x20) = uVar1;
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar2 == 0))
          goto LAB_067fa774;
          if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
            lVar2 = *(long *)(lVar2 + (long)(int)unaff_w21 * 0x50 + 0x58);
            if (*(char *)(unaff_x19 + 0x174) == '\0') {
              if (*(uint *)(unaff_x25 + 0x18) <= unaff_w20) goto LAB_067fa778;
              uVar1 = *(undefined4 *)(unaff_x24 + (long)unaff_w23 * 0x178 + 0xbc);
            }
            else {
              if (*(uint *)(unaff_x25 + 0x18) <= unaff_w20) goto LAB_067fa778;
              uVar1 = FUN_067c7040(*(undefined4 *)(unaff_x24 + (long)unaff_w23 * 0x178 + 0xbc),0);
            }
            if (lVar2 == 0) goto LAB_067fa774;
            if ((uint)unaff_x27 < *(uint *)(lVar2 + 0x18)) {
              *(undefined4 *)(lVar2 + unaff_x27 * 4 + 0x20) = uVar1;
              if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
                 (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar2 == 0))
              goto LAB_067fa774;
              if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
                lVar2 = *(long *)(lVar2 + (long)(int)unaff_w21 * 0x50 + 0x58);
                if (*(char *)(unaff_x19 + 0x174) == '\0') {
                  if (*(uint *)(unaff_x25 + 0x18) <= unaff_w20) goto LAB_067fa778;
                  uVar1 = *(undefined4 *)(unaff_x24 + (long)unaff_w23 * 0x178 + 0xe4);
                }
                else {
                  if (*(uint *)(unaff_x25 + 0x18) <= unaff_w20) goto LAB_067fa778;
                  uVar1 = FUN_067c7040(*(undefined4 *)(unaff_x24 + (long)unaff_w23 * 0x178 + 0xe4),0
                                      );
                }
                if (lVar2 == 0) goto LAB_067fa774;
                if ((uint)unaff_x26 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined4 *)(lVar2 + unaff_x26 * 4 + 0x20) = uVar1;
                  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
                     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x60), lVar2 == 0))
                  goto LAB_067fa774;
                  if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
                    *(uint *)(lVar2 + (long)(int)unaff_w21 * 0x50 + 0x28) = unaff_w22 + 4;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_067fa778:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_067fa774:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


