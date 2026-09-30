/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$.ctor
ENTRY_POINT: 057c3e30
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager___ctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long in_x9;
  long in_x10;
  long *plVar4;
  
  if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1) {
    plVar4 = (long *)FUN_06b0d958(param_2,0);
  }
  else {
    plVar4 = (long *)0x0;
  }
  puVar2 = PTR_DAT_06f9b060;
  lVar3 = *(long *)PTR_DAT_06f9b060;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *(long *)puVar2;
  }
  FUN_06af9aa8(plVar4,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 8),0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
        (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068))
       && (plVar4 = (long *)FUN_06adcaf0(plVar4,0), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c3ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      return;
    }
  }
  return;
}


