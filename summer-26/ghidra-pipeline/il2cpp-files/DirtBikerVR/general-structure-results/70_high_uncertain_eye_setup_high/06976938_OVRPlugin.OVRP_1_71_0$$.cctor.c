/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$.cctor
ENTRY_POINT: 06976938
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_71_0___cctor(float param_1,float param_2,float param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (0.5 < param_3 * param_3 + param_1 * param_1 + param_2 * param_2) {
    plVar1 = *(long **)(unaff_x20 + 0x40);
    if (plVar1 == (long *)0x0) goto LAB_06976ae0;
    fVar3 = (float)(**(code **)(*plVar1 + 0x2b8))(plVar1,*(undefined8 *)(*plVar1 + 0x2c0));
    plVar1 = *(long **)(unaff_x20 + 0x40);
    if (plVar1 == (long *)0x0) goto LAB_06976ae0;
    fVar4 = (float)(**(code **)(*plVar1 + 0x2c8))(plVar1,*(undefined8 *)(*plVar1 + 0x2d0));
    fVar3 = fVar3 / fVar4;
    plVar1 = *(long **)(unaff_x20 + 0x40);
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar3) {
      fVar6 = fVar4;
    }
    if (plVar1 == (long *)0x0) goto LAB_06976ae0;
    fVar4 = *(float *)(unaff_x20 + 0x28);
    fVar3 = (float)(**(code **)(*plVar1 + 0x4b8))(plVar1,*(undefined8 *)(*plVar1 + 0x4c0));
    plVar1 = *(long **)(unaff_x20 + 0x40);
    if (plVar1 == (long *)0x0) goto LAB_06976ae0;
    fVar7 = *(float *)(unaff_x20 + 0x30);
    fVar5 = (float)(**(code **)(*plVar1 + 0x4f8))(plVar1,*(undefined8 *)(*plVar1 + 0x500));
    fVar4 = *(float *)(unaff_x20 + 0x38) +
            *(float *)(unaff_x20 + 0x20) *
            *(float *)(unaff_x20 + 0x34) *
            fVar4 * fVar6 * (ABS(fVar3) * fVar7 + ABS(fVar5) * *(float *)(unaff_x20 + 0x2c));
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar4) {
      fVar6 = fVar3;
    }
    *(float *)(unaff_x20 + 0x38) = fVar6;
  }
  plVar1 = *(long **)(unaff_x20 + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x468))
              (*(float *)(unaff_x20 + 0x48) -
               *(float *)(unaff_x20 + 0x24) * *(float *)(unaff_x20 + 0x38),plVar1,
               *(undefined8 *)(*plVar1 + 0x470));
    plVar1 = *(long **)(unaff_x20 + 0x40);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x428))
                (*(float *)(unaff_x20 + 0x4c) -
                 *(float *)(unaff_x20 + 0x24) * *(float *)(unaff_x20 + 0x38),plVar1,
                 *(undefined8 *)(*plVar1 + 0x430));
      uVar8 = *(undefined4 *)(unaff_x20 + 0x34);
      uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(uVar8,uVar2,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return unaff_w21 < 2;
    }
  }
LAB_06976ae0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


