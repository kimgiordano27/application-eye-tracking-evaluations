/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 04f624d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = System_Xml_XmlElement_var;
  if ((DAT_066c9b03 & 1) == 0) {
    FUN_02b3c81c(System_Xml_XmlElement_var);
    FUN_02b3c81c(PTR_DAT_06318b00);
    DAT_066c9b03 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_04f8bc1c(0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_02bb0e9c();
  lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar3 != 0) {
    uVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06318b00,*(undefined4 *)(lVar3 + 0x18));
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    thunk_FUN_02bb0e9c();
    FUN_04dbdb8c(param_1,0);
    FUN_04f5b230(param_1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


