/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 05717c44
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_06d37b88;
  if ((bRam00000000071c37fc & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d37b88);
    FUN_02f07e70(PTR_DAT_06d58018);
    FUN_02f07e70(PTR_DAT_06d58010);
    bRam00000000071c37fc = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if ((lVar3 != 0) &&
     (lVar3 = FUN_046e8380(lVar3,param_1,*(undefined8 *)PTR_DAT_06d58010), lVar3 != 0)) {
    plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                               (*(undefined8 *)(lVar3 + 0x40),param_2,*(undefined8 *)(lVar3 + 0x28))
    ;
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d58018 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d58018))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


