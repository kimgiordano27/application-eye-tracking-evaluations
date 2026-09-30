/*
FUNCTION_NAME: FullSerializer.Internal.fsPortableReflection$$GetDeclaredConstructor
ENTRY_POINT: 00e36de4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FullSerializer_Internal_fsPortableReflection__GetDeclaredConstructor(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_010e5800(param_1,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e36c54 with catch @ 00e36df4
                        */
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e36d94 with catch @ 00e36df8
                        */
  return;
}


