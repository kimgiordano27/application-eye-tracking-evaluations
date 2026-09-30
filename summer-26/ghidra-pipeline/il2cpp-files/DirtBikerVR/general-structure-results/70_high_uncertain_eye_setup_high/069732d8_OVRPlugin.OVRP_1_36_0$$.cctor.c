/*
FUNCTION_NAME: OVRPlugin.OVRP_1_36_0$$.cctor
ENTRY_POINT: 069732d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_36_0___cctor(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *in_x9;
  long unaff_x19;
  long *plVar3;
  uint unaff_w21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  
  (*in_x9)();
  plVar1 = *(long **)(unaff_x22 + 0x40);
  if (plVar1 != (long *)0x0) {
    fVar6 = *(float *)(unaff_x22 + 0x78);
    fVar4 = 1.0;
    if (fVar6 <= 1.0) {
      fVar4 = fVar6;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar6) {
      fVar5 = fVar4;
    }
    (**(code **)(*plVar1 + 0x428))(fVar5,plVar1,*(undefined8 *)(*plVar1 + 0x430));
    plVar1 = *(long **)(unaff_x22 + 0x20);
    if (plVar1 != (long *)0x0) {
      plVar3 = *(long **)(unaff_x22 + 0x48);
      fVar6 = *(float *)(unaff_x22 + 0x70);
      fVar4 = (float)(**(code **)(*plVar1 + 0x2c8))(plVar1,*(undefined8 *)(*plVar1 + 0x2d0));
      if (plVar3 != (long *)0x0) {
        fVar6 = fVar6 / fVar4;
        fVar4 = 1.0;
        if (fVar6 <= 1.0) {
          fVar4 = fVar6;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar6) {
          fVar5 = fVar4;
        }
        (**(code **)(*plVar3 + 0x428))(fVar5,plVar3,*(undefined8 *)(*plVar3 + 0x430));
        uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
        FUN_07ca4ee0(DAT_015c5c40,uVar2,0);
        *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return unaff_w21 < 2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


