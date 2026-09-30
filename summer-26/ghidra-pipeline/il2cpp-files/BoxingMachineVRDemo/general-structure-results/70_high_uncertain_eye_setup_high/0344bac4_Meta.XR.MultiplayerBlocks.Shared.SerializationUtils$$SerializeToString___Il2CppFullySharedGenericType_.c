/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0344bac4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  
  iVar1 = FUN_04e8b380(param_1,param_2,0);
  if (iVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = (**(code **)(*unaff_x19 + 600))();
  if (lVar3 != 0) {
    FUN_048956f0(lVar3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


