/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 057c20d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_06abc65c();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f99260 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f99260)) {
      plVar3 = (long *)FUN_06b0d958(plVar3,0);
      goto LAB_057c2118;
    }
  }
  plVar3 = (long *)0x0;
LAB_057c2118:
  puVar2 = PTR_DAT_06f9b060;
  lVar4 = *(long *)PTR_DAT_06f9b060;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar2;
  }
  FUN_06af9aa8(plVar3,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
        (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068))
       && (plVar3 = (long *)FUN_06adcaf0(plVar3,0), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057c21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x178))(plVar3,0,*(undefined8 *)(*plVar3 + 0x180));
      return;
    }
  }
  return;
}


