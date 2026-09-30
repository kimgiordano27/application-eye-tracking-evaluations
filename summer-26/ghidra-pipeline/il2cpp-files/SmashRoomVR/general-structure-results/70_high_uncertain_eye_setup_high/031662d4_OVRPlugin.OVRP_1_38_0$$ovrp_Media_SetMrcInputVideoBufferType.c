/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcInputVideoBufferType
ENTRY_POINT: 031662d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcInputVideoBufferType(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  plVar1 = (long *)(unaff_x19 + 0x170);
  lVar3 = FUN_03084da8();
  puVar2 = PTR_DAT_03d80658;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_03d80658;
    lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_01afa9e0(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_03166334;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_03166334:
  thunk_FUN_01b4f09c(plVar1,lVar4);
  return;
}


