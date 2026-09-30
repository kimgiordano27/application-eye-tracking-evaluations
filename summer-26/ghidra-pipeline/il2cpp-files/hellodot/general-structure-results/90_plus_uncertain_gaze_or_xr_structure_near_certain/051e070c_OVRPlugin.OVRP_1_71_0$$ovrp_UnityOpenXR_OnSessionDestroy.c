/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 051e070c
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051e0660 with catch @ 051e0710
                       catch(type#2 @ 00000000) { ... } // from try @ 051e0704 with catch @ 051e0710
                        */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066092b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066092b8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066091f8);
  *(undefined1 *)(unaff_x19 + 0x5dc) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609290);
    FUN_04a57358(lVar4,uVar5,*(undefined8 *)PTR_DAT_066092b0,0);
    lVar3 = *unaff_x22;
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x38) = lVar4;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_066092a8;
  puVar1 = PTR_DAT_066092a0;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x22;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06609298);
    FUN_04a6419c(lVar6,uVar5,*(undefined8 *)PTR_DAT_066092b8,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40) = lVar6;
  }
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_03d867bc(uVar5,4,lVar4,lVar6,*(undefined8 *)puVar1);
  return uVar5;
}


