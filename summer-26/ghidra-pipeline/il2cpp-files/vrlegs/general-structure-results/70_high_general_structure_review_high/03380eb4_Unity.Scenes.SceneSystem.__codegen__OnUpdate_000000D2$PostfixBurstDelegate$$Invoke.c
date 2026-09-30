/*
FUNCTION_NAME: Unity.Scenes.SceneSystem.__codegen__OnUpdate_000000D2$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 03380eb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Scenes_SceneSystem___codegen__OnUpdate_000000D2_PostfixBurstDelegate__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_0412d07f & 1) == 0) {
    FUN_01ab69ac(System_Net_IAuthenticationModule_TypeInfo);
    FUN_01ab69ac(Unity_Services_Authentication_IAuthenticationNetworkClient_TypeInfo);
    DAT_0412d07f = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
    FUN_0338315c();
    lVar1 = *(long *)(param_1 + 0x10);
    FUN_020f03e8();
    if (lVar1 != 0) {
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_01b5f01c(lVar1,&stack0x00000010,*(undefined8 *)System_Net_IAuthenticationModule_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


