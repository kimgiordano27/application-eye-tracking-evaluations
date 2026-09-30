/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$AnchorCreationTask
ENTRY_POINT: 014bc060
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__AnchorCreationTask
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0x710);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_ReadString__);
    thunk_FUN_00d48444(Oculus_Interaction_Input_IUsage___TypeInfo);
    thunk_FUN_00d48444(UnityEngine_UI_InputField_SubmitEvent_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xdc9) = 1;
  }
  lVar2 = thunk_FUN_00d62348(*puVar4);
  puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_3;
    *(undefined8 *)(lVar2 + 0x18) = param_2;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_IO_BinaryReader_ReadString__;
    if (lVar3 != 0) {
                    /* try { // try from 014bc0ec to 015bc123 has its CatchHandler @ 014bc1c0 */
      FUN_016f27fc(lVar3,lVar2,*(undefined8 *)Oculus_Interaction_Input_IUsage___TypeInfo,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014e0608(lVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 014bc124 to 015bc1d7 has its CatchHandler @ 014bc028 */
  FUN_00da518c();
}


