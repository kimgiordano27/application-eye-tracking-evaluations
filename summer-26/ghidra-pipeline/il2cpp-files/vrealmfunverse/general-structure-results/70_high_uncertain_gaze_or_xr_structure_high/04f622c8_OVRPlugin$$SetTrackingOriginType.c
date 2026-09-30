/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 04f622c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__SetTrackingOriginType(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xaff) & 1) == 0) {
    FUN_02b3c81c(System_Xml_XmlElement_var);
    FUN_02b3c81c(PTR_DAT_06318b00);
    *(undefined1 *)(unaff_x20 + 0xaff) = 1;
  }
  puVar1 = System_Xml_XmlElement_var;
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar2 = *plVar3;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
    lVar2 = *(long *)System_Xml_XmlElement_var;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06318b00,
                         *(undefined4 *)(**(long **)(lVar2 + 0xb8) + 0x18));
    *plVar3 = lVar2;
    thunk_FUN_02bb0e9c(plVar3,lVar2);
    lVar2 = *plVar3;
  }
  return lVar2;
}


