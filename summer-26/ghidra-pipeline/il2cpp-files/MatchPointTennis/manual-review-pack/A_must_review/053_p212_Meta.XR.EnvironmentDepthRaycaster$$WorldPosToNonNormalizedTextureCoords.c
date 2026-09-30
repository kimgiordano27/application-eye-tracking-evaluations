/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords
ENTRY_POINT: 07702e98
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToNonNormalizedTextureCoords(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 in_stack_00000008;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xe18);
  if (*(char *)(param_1 + 0x10) == '\0') {
    in_stack_00000008 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f2f838,&stack0x00000008);
    FUN_078ab14c(*(undefined8 *)PTR_DAT_09f2fff0,uVar2,0);
    FUN_076f1130();
  }
  lVar3 = *(long *)(unaff_x19 + 0xe8);
  uVar2 = thunk_FUN_0448520c(*puVar4);
  FUN_076fe208();
  puVar1 = PTR_DAT_09f2fe20;
  if (lVar3 != 0) {
    FUN_076fbcb8(lVar3,uVar2);
    lVar3 = *(long *)(unaff_x19 + 0xe8);
    uVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
    FUN_076fe350();
    if (lVar3 != 0) {
      FUN_076fbf28(lVar3,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


