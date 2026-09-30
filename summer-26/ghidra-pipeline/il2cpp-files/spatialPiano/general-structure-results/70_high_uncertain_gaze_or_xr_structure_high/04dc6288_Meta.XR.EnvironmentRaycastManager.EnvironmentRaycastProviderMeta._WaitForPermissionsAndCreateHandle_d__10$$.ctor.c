/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderMeta.<WaitForPermissionsAndCreateHandle>d__10$$.ctor
ENTRY_POINT: 04dc6288
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_permission_setup
*/


uint Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderMeta_<WaitForPermissionsAndCreateHandle>d__10___ctor
               (undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  code *pcVar5;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_000022e8;
  
  lVar3 = FUN_02f41e9c(param_2);
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar3 + 0x40)) {
    thunk_FUN_02f453b8();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar3 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_02f41e9c(lVar4);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x290);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar3);
    }
    uVar2 = (*pcVar5)();
    if (*(long *)(unaff_x22 + 0x28) == in_stack_000022e8) {
      return uVar2 & 1;
    }
  }
  else if (*(long *)(unaff_x22 + 0x28) == in_stack_000022e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


