/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameBgraPixels
ENTRY_POINT: 06971b34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long in_x9;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  puVar2 = PTR_DAT_084883a0;
  if (in_x9 != 0) {
    lVar8 = *(long *)(in_x9 + 0x100);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar8 != 0) {
      FUN_07cb2770(lVar8,uVar3,0);
      if ((*unaff_x20 != 0) && (lVar8 = *(long *)(*unaff_x20 + 0x38), lVar8 != 0)) {
        lVar8 = *(long *)(lVar8 + 0x100);
        uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
        FUN_07cb26a0();
        if (lVar8 != 0) {
          FUN_07cb2770(lVar8,uVar3,0);
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if (lVar8 != 0) {
            lVar5 = *(long *)(lVar8 + 0x10);
            lVar4 = *unaff_x20;
            lVar7 = *(long *)PTR_DAT_084b72c0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar4;
                thunk_FUN_03afed3c(plVar6);
              }
              else {
                FUN_04de85b0(lVar8,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


