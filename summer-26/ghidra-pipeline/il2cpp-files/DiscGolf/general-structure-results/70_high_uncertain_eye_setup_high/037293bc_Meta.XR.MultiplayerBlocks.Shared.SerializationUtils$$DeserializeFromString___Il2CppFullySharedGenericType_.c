/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 037293bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (long *param_1)

{
  undefined8 uVar1;
  long unaff_x21;
  long in_stack_0000c228;
  
  uVar1 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
                    /* try { // try from 037293d0 to 038293d3 has its CatchHandler @ 03729530 */
  FUN_05f1e544(uVar1,0);
                    /* try { // try from 037293d4 to 038294df has its CatchHandler @ 03728f1c */
  if (*(long *)(unaff_x21 + 0x28) == in_stack_0000c228) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


