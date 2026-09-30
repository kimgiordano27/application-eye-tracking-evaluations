/*
FUNCTION_NAME: OVRPlugin.OVRP_1_73_0$$.cctor
ENTRY_POINT: 07cad660
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_73_0___cctor(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x21;
  
  OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName();
  puVar1 = PTR_DAT_09f511f8;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar3 = FUN_04eab2f0(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x18) != 0) {
      if ((int)*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x21);
      }
      bVar2 = FUN_0952fedc(uVar4,0);
      *(byte *)(unaff_x19 + 0x58) = bVar2 & 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


