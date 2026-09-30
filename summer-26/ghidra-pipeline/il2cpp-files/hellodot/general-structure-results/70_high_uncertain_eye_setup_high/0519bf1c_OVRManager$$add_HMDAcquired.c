/*
FUNCTION_NAME: OVRManager$$add_HMDAcquired
ENTRY_POINT: 0519bf1c
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDAcquired(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  float unaff_s10;
  undefined8 unaff_d11;
  ulong unaff_d12;
  undefined8 unaff_d13;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong uVar4;
  
  fVar2 = (float)unaff_d13 * (float)unaff_d13;
  uVar4 = (ulong)(uint)fVar2;
  if ((float)unaff_d11 * (float)unaff_d11 + (float)unaff_d12 * (float)unaff_d12 + fVar2 == 0.0) {
    if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_0519c038;
    unaff_d11 = FUN_05f02090(*(long *)(unaff_x20 + 0x28),0);
    unaff_d12 = uVar4;
    unaff_d13 = param_3;
  }
  FUN_05eea074(unaff_d11,unaff_d12,unaff_d13,0);
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_05eaba3c((in_stack_00000008._4_4_ * (float)unaff_d13 +
                 unaff_s15 * (float)unaff_d11 + unaff_s10 * (float)unaff_d12) * 0.5 + 0.5,
                 *(long *)(unaff_x20 + 0x38),0);
    uVar3 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar5 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar6 = *(undefined4 *)(unaff_x19 + 0x18);
    uVar1 = FUN_05ee9c50(*(undefined4 *)(unaff_x19 + 0xc),0);
    *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x10) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x14) = uVar5;
    *(undefined4 *)(unaff_x19 + 0x18) = uVar6;
    return;
  }
LAB_0519c038:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


