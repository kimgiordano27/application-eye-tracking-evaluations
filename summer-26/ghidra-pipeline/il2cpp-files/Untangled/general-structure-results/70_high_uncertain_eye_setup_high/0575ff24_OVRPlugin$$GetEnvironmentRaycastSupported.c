/*
FUNCTION_NAME: OVRPlugin$$GetEnvironmentRaycastSupported
ENTRY_POINT: 0575ff24
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetEnvironmentRaycastSupported(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d59a10);
    *(undefined1 *)(unaff_x21 + 0xaa6) = 1;
  }
  puVar1 = PTR_DAT_06d59a10;
  if (*(long **)(unaff_x20 + 0x28) != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(unaff_x20 + 0x28) + 0x528))();
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
    FUN_05645a04(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x10),uVar2);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


