/*
FUNCTION_NAME: OVRObjectPool$$List<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01c61db8
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRObjectPool__List<OVRPlugin_Qpl_Annotation_Builder_Entry>(undefined8 param_1)

{
  int iVar1;
  uint in_w9;
  long in_x10;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  code *pcVar2;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar2 = *(code **)(*(long *)(in_x10 + 0x48) + 8);
  if ((in_w9 & 1) == 0) {
    FUN_015c2790(param_1);
  }
  iVar1 = (*pcVar2)();
  if (iVar1 < 1) {
    return;
  }
  if ((unaff_w21 < *(uint *)(unaff_x20 + 0x18)) && (unaff_w19 < *(uint *)(unaff_x20 + 0x18))) {
    uVar5 = *unaff_x29;
    uVar4 = unaff_x28[1];
    uVar3 = *unaff_x28;
    unaff_x28[1] = unaff_x29[1];
    *unaff_x28 = uVar5;
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      unaff_x29[1] = uVar4;
      *unaff_x29 = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


