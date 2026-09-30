/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth
ENTRY_POINT: 05ace620
PROGRAM: vandalizer-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_EnvironmentDepthRaycaster__WorldPosToLinearDepth(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *unaff_x19;
  long lVar6;
  long lVar7;
  
  FUN_05e229e0(0);
  lVar3 = *unaff_x19;
  if (lVar3 == 0) {
LAB_05ace6c4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = *(uint *)(lVar3 + 0x20);
  uVar2 = *(uint *)(unaff_x19 + 1);
  do {
    uVar5 = uVar2;
    if (uVar1 <= uVar5) {
      *(uint *)(unaff_x19 + 1) = uVar1 + 1;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      goto LAB_05ace6b0;
    }
    lVar4 = *(long *)(lVar3 + 0x18);
    *(uint *)(unaff_x19 + 1) = uVar5 + 1;
    if (lVar4 == 0) goto LAB_05ace6c4;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = uVar5 + 1;
  } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x38 + 0x20) < 0);
  lVar4 = lVar4 + (long)(int)uVar5 * 0x38;
  lVar6 = *(long *)(lVar4 + 0x50);
  lVar3 = *(long *)(lVar4 + 0x48);
  lVar7 = *(long *)(lVar4 + 0x38);
  unaff_x19[3] = *(long *)(lVar4 + 0x40);
  unaff_x19[2] = lVar7;
  unaff_x19[5] = lVar6;
  unaff_x19[4] = lVar3;
  thunk_FUN_0329bf60(unaff_x19 + 4,0);
LAB_05ace6b0:
  return uVar5 < uVar1;
}


