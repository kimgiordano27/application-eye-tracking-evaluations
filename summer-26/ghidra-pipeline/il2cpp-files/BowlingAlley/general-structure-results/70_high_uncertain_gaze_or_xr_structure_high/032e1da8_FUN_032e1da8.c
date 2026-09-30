/*
FUNCTION_NAME: FUN_032e1da8
ENTRY_POINT: 032e1da8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_032e1da8(code *param_1,undefined8 param_2)

{
  ushort *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *local_c0;
  long local_b8;
  long *local_b0;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  undefined1 auStack_28 [8];
  
  FUN_03296828(auStack_28,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
  FUN_032a2f10(auStack_78,&DAT_076ebdd0);
  do {
    local_80 = 0;
    local_c0 = &DAT_076ebdd0;
    local_b8 = DAT_076ebe10;
    local_b0 = DAT_076ebe18;
    local_a8 = DAT_076ebe18;
    local_a0 = 0;
    lStack_98 = DAT_076ebe10;
    local_90 = DAT_076ebe18;
    plStack_88 = DAT_076ebe18;
    FUN_032a2e64(&local_c0);
    if ((((local_70 == local_b8) && (local_68 == local_b0)) && (local_60 == local_a8)) &&
       ((local_60 == local_68 || (local_58 == local_a0)))) {
      FUN_03296ccc(auStack_28);
      return;
    }
    (*param_1)(*(undefined8 *)(local_58 + 0x10),param_2);
    local_58 = local_58 + 0x18;
    plVar2 = local_60;
    if (local_58 == *local_60 + (ulong)*(ushort *)(local_60 + 1) * 0x18) {
      do {
        plVar3 = local_60 + 2;
        plVar2 = local_68;
        if (local_68 == plVar3) break;
        local_58 = *plVar3;
        puVar1 = (ushort *)(local_60 + 3);
        local_60 = plVar3;
        plVar2 = plVar3;
      } while ((ulong)*puVar1 * 3 == 0);
    }
    local_60 = plVar2;
    FUN_032a2e64(auStack_78);
  } while( true );
}


