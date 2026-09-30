/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter.<WriteTokenSyncReadingAsync>d__31$$SetStateMachine
ENTRY_POINT: 0174a148
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void Newtonsoft_Json_JsonWriter_<WriteTokenSyncReadingAsync>d__31__SetStateMachine(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long in_stack_00000018;
  
  while ((uint)unaff_x22 < in_w8) {
    FUN_01747e0c();
    unaff_x22 = unaff_x22 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x22) {
      if (in_stack_00000018 != 0) {
        uVar1 = FUN_016844dc(in_stack_00000018,*(undefined8 *)PTR_DAT_033f2b68,0);
        thunk_FUN_00d8e500();
        *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
        lVar2 = FUN_017479a8();
        if (lVar2 != 0) {
          FUN_0127dce8();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x22) break;
    if (*(long *)(unaff_x24 + unaff_x22 * 8) == 0) {
      thunk_FUN_00d48444(
                        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                        );
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(PTR_DAT_033ef068);
      FUN_01679968(uVar3,uVar4,0);
      uVar4 = thunk_FUN_00d48444(
                                Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_Events__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,uVar4);
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


