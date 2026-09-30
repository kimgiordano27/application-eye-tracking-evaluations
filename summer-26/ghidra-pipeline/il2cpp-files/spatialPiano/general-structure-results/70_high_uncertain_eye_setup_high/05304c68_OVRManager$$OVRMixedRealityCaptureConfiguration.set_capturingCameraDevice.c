/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice
ENTRY_POINT: 05304c68
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,float param_5,
               float param_6,float param_7,long param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  puVar1 = PTR_DAT_067c8f20;
  fVar8 = param_2;
  fVar9 = param_3;
  uVar10 = param_4;
  if ((DAT_06bbb126 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    DAT_06bbb126 = 1;
  }
  uVar5 = *(undefined8 *)(param_8 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_060f245c(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_8 + 0x30);
  if (lVar4 != 0) {
    lVar3 = *(long *)puVar1;
    *(undefined4 *)(lVar4 + 0x58) = param_1;
    *(float *)(lVar4 + 0x5c) = param_2;
    *(float *)(lVar4 + 0x60) = param_3;
    *(undefined4 *)(lVar4 + 100) = param_4;
    uVar5 = *(undefined8 *)(param_8 + 0x38);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_060f078c(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_8 + 0x20) == 0) goto LAB_05304dcc;
      FUN_05302210((long)&stack0x00000000 + 4);
      fVar6 = in_stack_00000000._4_4_;
      fVar8 = fStack0000000000000008;
      fVar9 = fStack000000000000000c;
    }
    else {
      if (*(long *)(param_8 + 0x38) == 0) goto LAB_05304dcc;
      fVar6 = (float)FUN_060ffbe4(*(long *)(param_8 + 0x38),0);
    }
    param_6 = param_6 - fVar8;
    param_7 = param_7 - fVar9;
    uVar7 = FUN_060df954(param_5 - fVar6,param_6,param_7,0);
    if (*(long *)(param_8 + 0x30) != 0) {
      FUN_0528c874(fVar6,fVar8,fVar9,uVar7,param_6,param_7,uVar10,*(long *)(param_8 + 0x30),0);
      return;
    }
  }
LAB_05304dcc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


