/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameSize
ENTRY_POINT: 0534e844
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameSize(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_06098ae0(param_1,0);
  if (((uVar1 & 1) == 0) && (DAT_011b018c < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_060fbf1c(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0534e9c0;
      FUN_060989ec(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0534e9c0;
  uVar1 = FUN_06098ae0(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_060fbf1c(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_06098ae0(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset
                  (*(undefined8 *)Oculus_Interaction_FloatConstraint_TypeInfo,0);
        return;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_067c9980 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_stack_00000008 = FUN_050b736c(0);
      uVar2 = FUN_050b806c(&stack0x00000008,0);
      uVar2 = FUN_04f65260(*(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_FloatAffordanceTheme_TypeInfo
                           ,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
      }
      FUN_060a9584(uVar2,0);
      FUN_0534e790();
    }
    return;
  }
LAB_0534e9c0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


