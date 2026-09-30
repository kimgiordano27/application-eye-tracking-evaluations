/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector2f>
ENTRY_POINT: 0401e0e4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector2f>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x24;
  undefined *puVar4;
  
  FUN_03ac40ec();
  if (unaff_x24 == 0) {
    thunk_FUN_03af1434(&DAT_08615058);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a7228);
    FUN_066af6a0(uVar1,uVar2,0);
    goto LAB_0401e1e0;
  }
  if (unaff_w21 < 0) {
LAB_0401e138:
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086b0140);
    puVar4 = &DAT_0868e988;
  }
  else {
    if (*(int *)(unaff_x24 + 0x18) < unaff_w21) goto LAB_0401e138;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x24 + 0x18) - unaff_w21)) {
      FUN_0402a4a4();
      return;
    }
    thunk_FUN_03af1434(&DAT_08615060);
    uVar1 = thunk_FUN_03ac74bc();
    uVar2 = thunk_FUN_03af1434(&DAT_086a8b20);
    puVar4 = &DAT_08688840;
  }
  uVar3 = thunk_FUN_03af1434(puVar4);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar1,uVar2,uVar3,0);
LAB_0401e1e0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1);
}


