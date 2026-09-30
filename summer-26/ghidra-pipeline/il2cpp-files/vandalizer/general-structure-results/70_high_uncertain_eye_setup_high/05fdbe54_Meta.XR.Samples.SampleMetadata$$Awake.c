/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$Awake
ENTRY_POINT: 05fdbe54
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Samples_SampleMetadata__Awake
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  plVar5 = *(long **)(unaff_x21 + 0x2a8);
  if ((*(byte *)(unaff_x20 + 0x7e1) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759b2a8);
    *(undefined1 *)(unaff_x20 + 0x7e1) = 1;
  }
  uVar4 = *(undefined8 *)(param_5 + 0x90);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8(uVar4,0,0);
  uVar4 = param_4;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_5 + 0x90) == 0) goto LAB_05fdbfec;
    lVar2 = FUN_06e5502c(*(long *)(param_5 + 0x90),0);
    uVar6 = FUN_05fdc85c(param_5);
    if (((*(long *)(param_5 + 0x20) == 0) ||
        (uVar8 = param_2, uVar9 = param_3, lVar3 = FUN_06e5502c(*(long *)(param_5 + 0x20),0),
        lVar3 == 0)) || (uVar4 = FUN_06e682dc(lVar3,0), lVar2 == 0)) goto LAB_05fdbfec;
    FUN_06e6b790(uVar6,param_2,param_3,uVar4,uVar8,uVar9,param_4,lVar2,0);
  }
  uVar6 = *(undefined8 *)(param_5 + 0x98);
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = FUN_06e587d8(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x98) != 0) {
    lVar2 = FUN_06e5502c(*(long *)(param_5 + 0x98),0);
    uVar6 = Meta_XR_Samples_SampleMetadata__OnEditorShutdown(param_5);
    if (((*(long *)(param_5 + 0x20) != 0) &&
        (uVar8 = param_2, uVar9 = param_3, lVar3 = FUN_06e5502c(*(long *)(param_5 + 0x20),0),
        lVar3 != 0)) && (uVar7 = FUN_06e682dc(lVar3,0), lVar2 != 0)) {
      FUN_06e6b790(uVar6,param_2,param_3,uVar7,uVar8,uVar9,uVar4,lVar2,0);
      return;
    }
  }
LAB_05fdbfec:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


