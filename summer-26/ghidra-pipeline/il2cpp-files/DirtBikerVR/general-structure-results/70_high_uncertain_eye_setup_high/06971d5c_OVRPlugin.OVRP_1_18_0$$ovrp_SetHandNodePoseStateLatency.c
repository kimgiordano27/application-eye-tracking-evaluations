/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_SetHandNodePoseStateLatency
ENTRY_POINT: 06971d5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_SetHandNodePoseStateLatency(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long in_x9;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long lVar7;
  undefined8 *unaff_x24;
  
  lVar7 = *(long *)(in_x9 + 0x100);
  uVar2 = thunk_FUN_03ac74bc(*unaff_x24);
  FUN_07cb26a0();
  if (lVar7 != 0) {
    FUN_07cb2770(lVar7,uVar2,0);
    if ((*unaff_x20 != 0) && (lVar7 = *(long *)(*unaff_x20 + 0x38), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x100);
      uVar2 = thunk_FUN_03ac74bc(*unaff_x24);
      FUN_07cb26a0();
      if (lVar7 != 0) {
        FUN_07cb2770(lVar7,uVar2,0);
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if (lVar7 != 0) {
          lVar4 = *(long *)(lVar7 + 0x10);
          lVar3 = *unaff_x20;
          lVar6 = *(long *)PTR_DAT_084b72c0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar3;
              thunk_FUN_03afed3c(plVar5);
            }
            else {
              FUN_04de85b0(lVar7,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


