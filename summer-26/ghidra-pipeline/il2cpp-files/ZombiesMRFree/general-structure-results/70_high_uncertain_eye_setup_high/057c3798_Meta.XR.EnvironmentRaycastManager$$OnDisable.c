/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDisable
ENTRY_POINT: 057c3798
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__OnDisable(long param_1)

{
  byte bVar1;
  long *plVar2;
  int *in_x10;
  long unaff_x19;
  
  (**(code **)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138))();
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  plVar2 = (long *)FUN_06b0d958(*(long *)(unaff_x19 + 0x18),0);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
        (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068))
       && (plVar2 = (long *)FUN_06adcaf0(plVar2,0), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c3830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x178))(plVar2,1,*(undefined8 *)(*plVar2 + 0x180));
      return;
    }
  }
  return;
}


