/*
FUNCTION_NAME: OVRGazePointer$$SetCursorStartDest
ENTRY_POINT: 01a969c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void OVRGazePointer__SetCursorStartDest(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x8e8));
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                    );
  *(undefined1 *)(unaff_x20 + 0xd46) = 1;
  lVar2 = *unaff_x19;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x19;
  }
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
  ;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    FUN_0129a9f4(lVar2,*(undefined8 *)
                        Method_System_ComponentModel_ReflectTypeDescriptionProvider_ReflectedTypeData_GetTypeFromName__
                );
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01a96a3c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


