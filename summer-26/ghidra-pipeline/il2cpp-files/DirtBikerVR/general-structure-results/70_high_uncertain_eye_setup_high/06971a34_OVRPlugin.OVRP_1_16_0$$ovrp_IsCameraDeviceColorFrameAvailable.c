/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceColorFrameAvailable
ENTRY_POINT: 06971a34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceColorFrameAvailable(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x100);
  uVar2 = thunk_FUN_03ac74bc();
  FUN_07cb26a0();
  if (lVar6 != 0) {
    FUN_07cb2770(lVar6,uVar2,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 != 0) {
      lVar3 = *(long *)(lVar6 + 0x10);
      uVar2 = *unaff_x20;
      lVar5 = *(long *)PTR_DAT_084b72c0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar2;
          thunk_FUN_03afed3c(puVar4);
        }
        else {
          FUN_04de85b0(lVar6,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


