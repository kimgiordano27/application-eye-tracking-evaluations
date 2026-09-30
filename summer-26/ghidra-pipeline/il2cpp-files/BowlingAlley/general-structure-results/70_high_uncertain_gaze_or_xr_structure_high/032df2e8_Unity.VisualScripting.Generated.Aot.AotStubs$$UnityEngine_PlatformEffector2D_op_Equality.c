/*
FUNCTION_NAME: Unity.VisualScripting.Generated.Aot.AotStubs$$UnityEngine_PlatformEffector2D_op_Equality
ENTRY_POINT: 032df2e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


uint * Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_PlatformEffector2D_op_Equality
                 (undefined8 *param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puStack0000000000000008;
  uint uStack0000000000000010;
  uint *in_stack_00000028;
  
  puStack0000000000000008 = (undefined1 *)&stack0x00000010;
  uStack0000000000000010 = param_2;
  uVar4 = FUN_032e1030(&DAT_076ebe38,&stack0x00000008,&stack0x00000028);
  if ((uVar4 & 1) == 0) {
    FUN_03296828(&stack0x00000008,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    uVar4 = FUN_032e1030(&DAT_076ebe38);
    puVar5 = in_stack_00000028;
    if ((uVar4 & 1) == 0) {
      puVar5 = (uint *)FUN_032fb6f8(0x10);
      uVar4 = (ulong)param_2;
      *puVar5 = param_2;
      puVar6 = (undefined8 *)FUN_032fb6f8(uVar4 * 8);
      *(undefined8 **)(puVar5 + 2) = puVar6;
      if ((uVar4 != 0) && (*puVar6 = *param_1, param_1 + 1 != param_1 + uVar4)) {
        lVar7 = uVar4 * 8 + -8;
        lVar8 = 1;
        do {
          lVar7 = lVar7 + -8;
          *(undefined8 *)(*(long *)(puVar5 + 2) + (long)(int)lVar8 * 8) = param_1[lVar8];
          lVar8 = lVar8 + 1;
        } while (lVar7 != 0);
      }
      FUN_032e0804(&DAT_076ebe38);
      plVar1 = (long *)(Method_OVRSpatialAnchor_OnSpaceSaveComplete__ + 0x20);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_03296ccc(&stack0x00000008);
    in_stack_00000028 = puVar5;
  }
  return in_stack_00000028;
}


