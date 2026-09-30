/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_CreateDynamicObjectTracker
ENTRY_POINT: 0697bf28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_CreateDynamicObjectTracker(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w26;
  
  do {
    if ((param_1 & 1) != 0) {
      lVar2 = FUN_07d2d014(unaff_x20,0);
      if (lVar2 == 0) {
LAB_0697be44:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar2 = FUN_0447aad0(lVar2,*unaff_x25);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x24);
      }
      uVar3 = FUN_07ca21f0(lVar2,0);
      if ((uVar3 & 1) != 0) {
        if (lVar2 == 0) goto LAB_0697be44;
        FUN_0697bd84(lVar2);
      }
    }
    do {
      unaff_w26 = unaff_w26 + 1;
      if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)unaff_w26) {
        return;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      unaff_x20 = *(long *)(unaff_x23 + (long)(int)unaff_w26 * 8 + 0x20);
      if (unaff_x20 == 0) goto LAB_0697be44;
      uVar1 = FUN_07d2d014(unaff_x20,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x24);
      }
      uVar3 = FUN_07c9c218(uVar1,0,0);
    } while ((uVar3 & 1) == 0);
    uVar1 = FUN_07d2d014(unaff_x20,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    param_1 = FUN_07c9c218(uVar1,uVar4,0);
  } while( true );
}


