/*
FUNCTION_NAME: OVRManager$$get_useDynamicFoveatedRendering
ENTRY_POINT: 04f43eb4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_useDynamicFoveatedRendering
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  FUN_04f421f0(param_4,1);
  if (DAT_066c1d97 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d97 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
  *(undefined8 *)(param_4 + 0xb4) = **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8);
  *(undefined4 *)(param_4 + 0xbc) = uVar1;
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_04f3f8c8(param_1,param_2,param_3,*(long *)(param_4 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


