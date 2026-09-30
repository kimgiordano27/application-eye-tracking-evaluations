/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 01daacd0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x996) = 1;
  puVar2 = PTR_DAT_0234c670;
  iVar3 = -1;
  do {
    iVar1 = *(int *)(unaff_x21 + 0x10);
    thunk_FUN_00ffe618();
    if (iVar1 != 0) {
      return 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01da6b04(&stack0x00000008);
    if (unaff_w20 != -1) {
      iVar3 = thunk_FUN_01027034(0);
      if (iVar3 - unaff_w19 < 0) {
        return 0;
      }
      iVar3 = unaff_w20 - (iVar3 - unaff_w19);
      if (iVar3 < 1) {
        return 0;
      }
    }
    uVar4 = FUN_01daef0c(*(undefined8 *)(unaff_x21 + 0x20),iVar3,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  } while( true );
}


