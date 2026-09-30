/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02f73a28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_3) {
    lVar5 = 0;
    puVar6 = param_2;
    do {
      puVar3 = param_1;
      uVar2 = FUN_02f27ed8(param_4 + 1,puVar6[2],*puVar6);
      if ((uVar2 & 1) != 0) {
        uVar9 = puVar3[1];
        uVar8 = *puVar3;
        lVar1 = lVar5;
        do {
          lVar7 = lVar1;
          puVar6 = (undefined8 *)((long)param_2 + lVar7);
          puVar6[3] = puVar6[1];
          puVar6[2] = *puVar6;
          puVar4 = param_2;
          if (lVar7 == 0) goto LAB_02f73aa4;
          uVar2 = FUN_02f27ed8(param_4 + 1,uVar8,puVar6[-2]);
          lVar1 = lVar7 + -0x10;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_2 + lVar7);
LAB_02f73aa4:
        puVar4[1] = uVar9;
        *puVar4 = uVar8;
      }
      lVar5 = lVar5 + 0x10;
      param_1 = puVar3 + 2;
      puVar6 = puVar3;
    } while (puVar3 + 2 != param_3);
  }
  return;
}


