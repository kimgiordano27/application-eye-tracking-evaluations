/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 0344b48c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  
  FUN_03aac494();
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar2 = (**(code **)(*unaff_x19 + 0x1f8))();
    if (lVar4 != 0) {
      FUN_048956f0(lVar4,uVar2);
      uVar2 = (**(code **)(*unaff_x19 + 0x1f8))();
      uVar3 = (**(code **)(*unaff_x19 + 600))();
      iVar1 = FUN_04e8b380(uVar2,uVar3,0);
      if (iVar1 == 0) {
        return;
      }
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar2 = (**(code **)(*unaff_x19 + 600))();
      if (lVar4 != 0) {
        FUN_048956f0(lVar4,uVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


