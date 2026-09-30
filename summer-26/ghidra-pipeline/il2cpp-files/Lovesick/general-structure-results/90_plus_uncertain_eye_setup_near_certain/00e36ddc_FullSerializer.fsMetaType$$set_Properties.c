/*
FUNCTION_NAME: FullSerializer.fsMetaType$$set_Properties
ENTRY_POINT: 00e36ddc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FullSerializer_fsMetaType__set_Properties(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e36c68 with catch @ 00e36ddc
                        */
  lVar1 = FUN_0268fd4c();
  if (lVar1 != 0) {
    uVar2 = FUN_010e5800(lVar1,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e369e8 with catch @ 00e36e10
                        */
  FUN_00da518c();
}


