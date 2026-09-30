/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 06387ae0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_foveatedRenderingLevel(void)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  
  if (in_w8 == 1) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar1 == 0) goto LAB_06387b6c;
    *(long *)(unaff_x19 + 0x30) = *(long *)(lVar1 + 0x20);
  }
  else {
    if (in_w8 != 0) {
      return 0;
    }
    lVar1 = *(long *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar1 == 0) {
LAB_06387b6c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(lVar1 + 0x10) == 0) {
      return 0;
    }
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(lVar1 + 0x20);
  }
  thunk_FUN_037aeb94();
  lVar1 = *(long *)(unaff_x19 + 0x30);
  if (lVar1 == 0) {
    *(long *)(unaff_x19 + 0x30) = 0;
    thunk_FUN_037aeb94();
    return 0;
  }
  *(long *)(unaff_x19 + 0x18) = lVar1;
  thunk_FUN_037aeb94((long *)(unaff_x19 + 0x18));
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return 1;
}


