/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 0344b158
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>
               (long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long unaff_x20;
  
  lVar5 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = unaff_x19;
      thunk_FUN_02dd37b4(puVar6);
    }
    else {
      FUN_03aac494();
    }
    if (unaff_x19 != (long *)0x0) {
      lVar5 = *(long *)(unaff_x20 + 0x20);
      uVar3 = (**(code **)(*unaff_x19 + 0x1f8))();
      if (lVar5 != 0) {
        FUN_048956f0(lVar5,uVar3);
        uVar3 = (**(code **)(*unaff_x19 + 0x1f8))();
        uVar4 = (**(code **)(*unaff_x19 + 600))();
        iVar2 = FUN_04e8b380(uVar3,uVar4,0);
        if (iVar2 == 0) {
          return;
        }
        lVar5 = *(long *)(unaff_x20 + 0x20);
        uVar3 = (**(code **)(*unaff_x19 + 600))();
        if (lVar5 != 0) {
          FUN_048956f0(lVar5,uVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


