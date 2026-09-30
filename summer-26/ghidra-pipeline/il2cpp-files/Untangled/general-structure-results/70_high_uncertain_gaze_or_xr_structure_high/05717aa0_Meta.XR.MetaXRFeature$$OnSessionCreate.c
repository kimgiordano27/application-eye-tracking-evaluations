/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 05717aa0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  
  lVar2 = FUN_03ada9ec();
  if (lVar2 != 0) {
    lVar3 = *unaff_x20;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x20;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = FUN_046e8380(lVar3,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)PTR_DAT_06d58010);
    if ((lVar3 != 0) &&
       (plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                                   (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar2 + 0x18),
                                    *(undefined8 *)(lVar3 + 0x28)), plVar4 != (long *)0x0)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d58000 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d58000))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440();
      }
    }
  }
  return;
}


