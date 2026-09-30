/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeLogic.CalculatePokeParams_00000FC5$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 05e483c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_CalculatePokeParams_00000FC5_PostfixBurstDelegate__EndInvoke
               (void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  undefined8 *unaff_x22;
  
                    /* catch() { ... } // from try @ 05e47134 with catch @ 05e483c4 */
                    /* catch() { ... } // from try @ 05e46f2c with catch @ 05e483c8 */
                    /* catch() { ... } // from try @ 05e46b60 with catch @ 05e483cc */
  lVar2 = thunk_FUN_02d9d164(*unaff_x22,&stack0x0000000c);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar3 == 0)) {
    uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,0);
  }
  puVar1 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  if (4 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[8] = lVar2;
    thunk_FUN_02dd37b4(unaff_x19 + 8,lVar2);
    FUN_04e8e72c(*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


