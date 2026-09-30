/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 03391e60
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_Update
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  auVar5 = FUN_025ec34c(param_2,param_3,*param_1);
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<InitConfigOptions,_bool>_get_Current__;
  lVar4 = auVar5._0_8_;
  lVar2 = auVar5._8_8_;
  if ((lVar4 != 0) && (lVar3 = *(long *)(lVar4 + 0x20), lVar2 = lVar4, lVar3 != 0)) {
    lVar2 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar4);
      lVar4 = *(long *)puVar1;
    }
    return lVar2 != **(long **)(lVar4 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4(lVar4,lVar2);
}


