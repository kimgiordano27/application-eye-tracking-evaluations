/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 05fdbee8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  FUN_06e6b790();
  uVar4 = *(undefined8 *)(unaff_x19 + 0x98);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x98) != 0) {
      lVar2 = FUN_06e5502c(*(long *)(unaff_x19 + 0x98),0);
      uVar4 = Meta_XR_Samples_SampleMetadata__OnEditorShutdown();
      if (((*(long *)(unaff_x19 + 0x20) != 0) &&
          (uVar6 = unaff_d9, uVar7 = unaff_d10, lVar3 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0),
          lVar3 != 0)) && (uVar5 = FUN_06e682dc(lVar3,0), lVar2 != 0)) {
        FUN_06e6b790(uVar4,unaff_d9,unaff_d10,uVar5,uVar6,uVar7,param_1,lVar2,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  return;
}


