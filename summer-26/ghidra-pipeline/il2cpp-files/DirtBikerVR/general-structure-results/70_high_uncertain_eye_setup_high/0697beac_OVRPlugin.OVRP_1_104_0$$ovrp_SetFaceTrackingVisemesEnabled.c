/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_SetFaceTrackingVisemesEnabled
ENTRY_POINT: 0697beac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_SetFaceTrackingVisemesEnabled(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w26;
  
  do {
    lVar3 = *(long *)(unaff_x23 + (long)(int)unaff_w26 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_0697be44;
    uVar1 = FUN_07d2d014(lVar3,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    uVar2 = FUN_07c9c218(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_07d2d014(lVar3,0);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x24);
      }
      uVar2 = FUN_07c9c218(uVar1,uVar4,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_07d2d014(lVar3,0);
        if (lVar3 == 0) {
LAB_0697be44:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar3 = FUN_0447aad0(lVar3,*unaff_x25);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        uVar2 = FUN_07ca21f0(lVar3,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) goto LAB_0697be44;
          FUN_0697bd84(lVar3);
        }
      }
    }
    unaff_w26 = unaff_w26 + 1;
    if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)unaff_w26) {
      return;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
  } while( true );
}


