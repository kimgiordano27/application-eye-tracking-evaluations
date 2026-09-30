/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetSurfaceDistance
ENTRY_POINT: 04c692a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;weak_vector_component_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap__GetSurfaceDistance(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x21;
  
                    /* try { // try from 04c692a4 to 04d69307 has its CatchHandler @ 04c693bc */
  *(undefined1 *)(unaff_x21 + 0xa0f) = in_w8;
  puVar1 = PTR_DAT_065e7948;
  DelegateList<DiagnosticEvent>__Remove();
  if (*(char *)(unaff_x19 + 0x61) == '\0') {
    bVar2 = true;
  }
  else if (((*(long *)(unaff_x19 + 0x48) == 0) && (*(long *)(unaff_x19 + 0x38) == 0)) &&
          (*(long *)(unaff_x19 + 0x10) == 0)) {
    bVar2 = *(long *)(unaff_x19 + 0x18) == 0;
  }
  else {
    bVar2 = false;
  }
  FUN_04bc9f2c(bVar2,*(undefined8 *)puVar1,0);
  return;
}


