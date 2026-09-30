/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 07c5b968
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  
  thunk_FUN_044a54b4();
  puVar1 = PTR_DAT_09f28c10;
  lVar2 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
  if (lVar2 != 0) {
    uVar3 = FUN_07c043ac(lVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar1);
    }
    uVar3 = FUN_07bd479c(uVar3);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


