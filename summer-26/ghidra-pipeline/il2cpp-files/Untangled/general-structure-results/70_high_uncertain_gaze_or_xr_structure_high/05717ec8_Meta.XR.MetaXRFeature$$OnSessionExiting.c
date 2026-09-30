/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 05717ec8
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MetaXRFeature__OnSessionExiting(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  uVar2 = FUN_056ec590(param_1,param_2,0);
  uVar5 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_06d37b88 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    plVar3 = (long *)FUN_05717f90();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = *unaff_x21;
    lVar4 = thunk_FUN_02edd730(*(undefined8 *)
                                (*plVar3 + (ulong)*(ushort *)(*(long *)PTR_DAT_06d56f00 + 0x50) *
                                           0x10 + 0x140));
    uVar5 = (**(code **)(lVar4 + 8))(plVar3,uVar5,lVar4);
  }
  puVar1 = PTR_DAT_06d58028;
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  thunk_FUN_02f411dc();
  uVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_0513ca78();
  return uVar5;
}


