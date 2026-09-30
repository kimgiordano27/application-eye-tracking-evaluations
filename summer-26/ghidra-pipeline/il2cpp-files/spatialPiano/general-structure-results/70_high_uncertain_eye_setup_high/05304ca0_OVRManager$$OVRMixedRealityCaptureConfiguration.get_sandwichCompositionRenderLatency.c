/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency
ENTRY_POINT: 05304ca0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency
               (ulong param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5,
               long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  plVar5 = *(long **)(unaff_x21 + 0xf20);
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    *(undefined1 *)(unaff_x20 + 0x126) = 1;
  }
  uVar4 = *(undefined8 *)(param_6 + 0x30);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_060f245c(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)(param_6 + 0x30);
  if (lVar3 != 0) {
    lVar2 = *plVar5;
    *(undefined4 *)(lVar3 + 0x58) = param_2;
    *(undefined4 *)(lVar3 + 0x5c) = unaff_s13;
    *(undefined4 *)(lVar3 + 0x60) = unaff_s12;
    *(undefined4 *)(lVar3 + 100) = unaff_s11;
    uVar4 = *(undefined8 *)(param_6 + 0x38);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar1 = FUN_060f078c(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_6 + 0x20) == 0) goto LAB_05304dcc;
      FUN_05302210((long)&stack0x00000000 + 4);
      fVar6 = in_stack_00000000._4_4_;
      param_3 = fStack0000000000000008;
      param_4 = fStack000000000000000c;
    }
    else {
      if (*(long *)(param_6 + 0x38) == 0) goto LAB_05304dcc;
      fVar6 = (float)FUN_060ffbe4(*(long *)(param_6 + 0x38),0);
    }
    fVar8 = unaff_s9 - param_3;
    fVar9 = unaff_s8 - param_4;
    uVar7 = FUN_060df954(unaff_s10 - fVar6,fVar8,fVar9,0);
    if (*(long *)(param_6 + 0x30) != 0) {
      FUN_0528c874(fVar6,param_3,param_4,uVar7,fVar8,fVar9,param_5,*(long *)(param_6 + 0x30),0);
      return;
    }
  }
LAB_05304dcc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


