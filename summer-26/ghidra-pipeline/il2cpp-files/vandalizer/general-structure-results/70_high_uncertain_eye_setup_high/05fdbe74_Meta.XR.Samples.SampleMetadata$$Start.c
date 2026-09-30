/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$Start
ENTRY_POINT: 05fdbe74
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Samples_SampleMetadata__Start
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined1 *)(unaff_x20 + 0x7e1) = in_w8;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8(uVar4,0,0);
  uVar4 = param_4;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05fdbfec;
    lVar2 = FUN_06e5502c(*(long *)(unaff_x19 + 0x90),0);
    uVar5 = FUN_05fdc85c();
    if (((*(long *)(unaff_x19 + 0x20) == 0) ||
        (uVar7 = param_2, uVar8 = param_3, lVar3 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0),
        lVar3 == 0)) || (uVar4 = FUN_06e682dc(lVar3,0), lVar2 == 0)) goto LAB_05fdbfec;
    FUN_06e6b790(uVar5,param_2,param_3,uVar4,uVar7,uVar8,param_4,lVar2,0);
  }
  uVar5 = *(undefined8 *)(unaff_x19 + 0x98);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    lVar2 = FUN_06e5502c(*(long *)(unaff_x19 + 0x98),0);
    uVar5 = Meta_XR_Samples_SampleMetadata__OnEditorShutdown();
    if (((*(long *)(unaff_x19 + 0x20) != 0) &&
        (uVar7 = param_2, uVar8 = param_3, lVar3 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0),
        lVar3 != 0)) && (uVar6 = FUN_06e682dc(lVar3,0), lVar2 != 0)) {
      FUN_06e6b790(uVar5,param_2,param_3,uVar6,uVar7,uVar8,uVar4,lVar2,0);
      return;
    }
  }
LAB_05fdbfec:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


