/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 019fdc9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_TrackingAcquired(ulong param_1,long param_2)

{
  byte bVar1;
  long *unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_RhythmGameStarter_ReorderableList<InputActionReference>_get_Item__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x89f) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo + 300)
    ;
    if (bVar1 <= *(byte *)(*unaff_x19 + 300)) {
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo) {
        unaff_x19 = (long *)0x0;
      }
      goto LAB_019fdd0c;
    }
  }
  unaff_x19 = (long *)0x0;
LAB_019fdd0c:
  *(long **)(param_2 + 0x118) = unaff_x19;
  FUN_01301f2c(param_2);
  return;
}


