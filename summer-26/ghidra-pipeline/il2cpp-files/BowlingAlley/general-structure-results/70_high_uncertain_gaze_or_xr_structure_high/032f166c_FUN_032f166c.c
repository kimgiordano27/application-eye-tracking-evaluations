/*
FUNCTION_NAME: FUN_032f166c
ENTRY_POINT: 032f166c
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


void FUN_032f166c(code *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *local_b8;
  long local_b0;
  long *local_a8;
  long *local_a0;
  long local_98;
  long lStack_90;
  long *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  long local_68;
  long *local_60;
  long *local_58;
  long local_50;
  undefined1 auStack_28 [8];
  
  FUN_03296828(auStack_28,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
  FUN_032f426c(auStack_70,&DAT_076ec1b0);
  do {
    local_78 = 0;
    local_b8 = &DAT_076ec1b0;
    local_b0 = DAT_076ec1f8;
    local_a8 = DAT_076ec200;
    local_a0 = DAT_076ec200;
    local_98 = 0;
    lStack_90 = DAT_076ec1f8;
    local_88 = DAT_076ec200;
    plStack_80 = DAT_076ec200;
    FUN_032f28e4(&local_b8);
    if ((((local_68 == local_b0) && (local_60 == local_a8)) && (local_58 == local_a0)) &&
       ((local_58 == local_60 || (local_50 == local_98)))) {
      FUN_03296ccc(auStack_28);
      return;
    }
    (*param_1)(*(undefined8 *)(local_50 + 0x18),param_2);
    local_50 = local_50 + 0x20;
    plVar2 = local_58;
    if (local_50 == *local_58 + (ulong)*(ushort *)(local_58 + 1) * 0x20) {
      do {
        plVar3 = local_58 + 2;
        plVar2 = local_60;
        if (local_60 == plVar3) break;
        local_50 = *plVar3;
        plVar1 = local_58 + 3;
        local_58 = plVar3;
        plVar2 = plVar3;
      } while ((short)*plVar1 == 0);
    }
    local_58 = plVar2;
    FUN_032f28e4(auStack_70);
  } while( true );
}


