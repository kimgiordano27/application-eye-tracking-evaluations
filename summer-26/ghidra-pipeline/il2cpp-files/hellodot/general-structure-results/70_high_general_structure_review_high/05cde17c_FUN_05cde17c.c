/*
FUNCTION_NAME: FUN_05cde17c
ENTRY_POINT: 05cde17c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_05cde17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var;
  puVar1 = PTR_DAT_065dce00;
  if ((DAT_06a7a433 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000CBA_PostfixBurstDelegate_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce00);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000CB7_PostfixBurstDelegate_var
              );
    DAT_06a7a433 = 1;
  }
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000CB7_PostfixBurstDelegate_var
  ;
  Google_Protobuf_ValueWriter<bool>__BeginInvoke(param_1,param_2,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar4 = FUN_05bd1b78(*(undefined8 *)puVar3,0);
  if (lVar4 != 0) {
    FUN_033ba678(lVar4,param_3,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000CBA_PostfixBurstDelegate_var
                );
    *(undefined8 *)(param_1 + 0x28) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


