/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 07c7a57c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_fixedFoveatedRenderingLevel(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50880);
    *(undefined1 *)(unaff_x21 + 0x783) = 1;
  }
  if (param_3 != 0) {
    lVar1 = FUN_04d7a120(param_3,*(undefined8 *)PTR_DAT_09f50880);
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (uVar2 = FUN_07c79db4(*(long *)(param_2 + 0x20)), lVar1 != 0)) {
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_044bb4b4();
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


