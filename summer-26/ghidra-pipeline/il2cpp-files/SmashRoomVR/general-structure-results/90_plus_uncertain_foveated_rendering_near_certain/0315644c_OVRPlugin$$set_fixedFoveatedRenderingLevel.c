/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 0315644c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_fixedFoveatedRenderingLevel(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long unaff_x19;
  byte unaff_w20;
  
  if ((unaff_w20 & 1) == 0) {
    puVar1 = (undefined4 *)(unaff_x19 + 0x40);
    puVar2 = (undefined4 *)(unaff_x19 + 0x44);
    puVar3 = (undefined4 *)(unaff_x19 + 0x48);
    puVar4 = (undefined4 *)(unaff_x19 + 0x4c);
  }
  else {
    puVar1 = (undefined4 *)(unaff_x19 + 0x50);
    puVar2 = (undefined4 *)(unaff_x19 + 0x54);
    puVar3 = (undefined4 *)(unaff_x19 + 0x58);
    puVar4 = (undefined4 *)(unaff_x19 + 0x5c);
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_038ff380(*puVar1,*puVar2,*puVar3,*puVar4,*(long *)(unaff_x19 + 0xa0),0);
    *(byte *)(unaff_x19 + 0xa8) = unaff_w20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


