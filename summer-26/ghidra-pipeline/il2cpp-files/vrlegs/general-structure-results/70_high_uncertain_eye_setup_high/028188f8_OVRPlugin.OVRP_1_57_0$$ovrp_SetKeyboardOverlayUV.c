/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetKeyboardOverlayUV
ENTRY_POINT: 028188f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_SetKeyboardOverlayUV(void)

{
  long lVar1;
  int in_w8;
  ulong uVar2;
  uint uVar3;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  int unaff_w23;
  uint unaff_w24;
  
  *unaff_x19 = in_w8;
  plVar4 = (long *)(unaff_x21 + 0x20);
  if (*plVar4 == 0) {
    lVar1 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfb98,3);
    *plVar4 = lVar1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar1);
  }
  if (unaff_x20 != 0) {
    uVar2 = 0;
    do {
      uVar3 = unaff_w23 + (int)uVar2 + *unaff_x19;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar3) {
LAB_0281899c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar1 = *plVar4;
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar2) goto LAB_0281899c;
      lVar1 = lVar1 + uVar2;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(unaff_x20 + (int)uVar3 + 0x20);
      if (unaff_w24 == uVar2) {
        *(uint *)(unaff_x21 + 0x28) = unaff_w24;
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


