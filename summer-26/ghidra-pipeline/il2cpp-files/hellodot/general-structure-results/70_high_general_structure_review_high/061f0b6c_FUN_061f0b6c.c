/*
FUNCTION_NAME: FUN_061f0b6c
ENTRY_POINT: 061f0b6c
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_18
*/


undefined8 FUN_061f0b6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  puVar2 = Oculus_Interaction_Locomotion_TeleportInteractor_<>c_TypeInfo;
  if ((DAT_06a840c5 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbc80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc8e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8998);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1af8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Locomotion_TeleportInteractor_ComputeCandidateDelegate_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_V1_TelemetryAttributeRecordProto_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_V1_TelemetryAttributeV2_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_V1_TelemetryBatchProto_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc928);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca628);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Oculus_Interaction_Locomotion_TeleportInteractor_ComputeCandidateTiebreakerDelegate_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<SelectionAnimation>d__58_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Interaction_Locomotion_TeleportInteractor_<>c_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationMultiAnchorVolume_DefaultDestinationFilterCache_TypeInfo
              );
    DAT_06a840c5 = 1;
  }
  lVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_061f17bc(lVar3,0);
  puVar2 = Niantic_Platform_Analytics_Telemetry_V1_TelemetryBatchProto_<>c_TypeInfo;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_1;
    puVar1 = Niantic_Platform_Analytics_Telemetry_V1_TelemetryAttributeV2_<>c_TypeInfo;
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    FUN_03fe1634(lVar4,*(undefined8 *)puVar1);
    *(long *)(lVar3 + 0x10) = lVar4;
    if (*(char *)(param_1 + 0x44) == '\0') {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c8998);
      FUN_04e9e238(uVar9,lVar3,
                   *(undefined8 *)
                    Oculus_Interaction_Locomotion_TeleportInteractor_ComputeCandidateTiebreakerDelegate_TypeInfo
                   ,0);
      if (lVar4 != 0) {
        FUN_03fe1b70(lVar4,uVar9,
                     *(undefined8 *)
                      Oculus_Interaction_Locomotion_TeleportInteractor_ComputeCandidateDelegate_TypeInfo
                    );
        lVar4 = *(long *)(param_1 + 0x20);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dc8e8);
        FUN_047b3b70(uVar9,lVar3,
                     *(undefined8 *)
                      Oculus_Interaction_DistanceReticles_TeleportReticleDrawer_<SelectionAnimation>d__58_TypeInfo
                     ,0);
        if (lVar4 != 0) {
          plVar5 = (long *)FUN_03fe1aec(lVar4,uVar9,
                                        *(undefined8 *)
                                         Niantic_Platform_Analytics_Telemetry_V1_TelemetryAttributeRecordProto_<>c_TypeInfo
                                       );
          uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cbc80);
          FUN_047b3b70(uVar9,lVar3,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_<>c_TypeInfo
                       ,0);
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065dc928) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_061f0e18;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065dc928,2);
LAB_061f0e18:
            (*(code *)*puVar6)(plVar5,uVar9,puVar6[1]);
            goto LAB_061f0e28;
          }
        }
      }
    }
    else {
      uVar9 = *(undefined8 *)
               UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationMultiAnchorVolume_DefaultDestinationFilterCache_TypeInfo
      ;
      if (*(int *)(*(long *)PTR_DAT_065ca628 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_061f326c(uVar9,0);
      if (*(long *)(lVar3 + 0x10) != 0) {
        FUN_03fe19dc(*(long *)(lVar3 + 0x10),uVar9,*(undefined8 *)PTR_DAT_065e1af8);
LAB_061f0e28:
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


