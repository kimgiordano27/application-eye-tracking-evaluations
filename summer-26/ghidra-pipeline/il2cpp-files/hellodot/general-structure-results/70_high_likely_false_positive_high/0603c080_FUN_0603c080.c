/*
FUNCTION_NAME: FUN_0603c080
ENTRY_POINT: 0603c080
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0603c080(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_06a8271f & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Runtime_Remoting_Contexts_IContextAttribute_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_ScanLoad_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e02f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e02c0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UI_Selectable_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_Schema_SelectorActiveAxis_TypeInfo);
    DAT_06a8271f = 1;
  }
  puVar1 = UnityEngine_UI_Selectable_TypeInfo;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e02c0);
    FUN_04a03924(uVar2,param_1,*(undefined8 *)puVar1,0);
    if (lVar3 != 0) {
      FUN_0338dbd0(lVar3,uVar2,0,*(undefined8 *)PTR_DAT_065e02f8);
      puVar1 = UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo;
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 1000);
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)
                                    System_Runtime_Remoting_Contexts_IContextAttribute_TypeInfo);
        FUN_047b3b70(uVar2,param_1,*(undefined8 *)puVar1,0);
        if (lVar3 != 0) {
          FUN_05fb3ad4(lVar3,uVar2,0);
          puVar1 = System_Xml_Schema_SelectorActiveAxis_TypeInfo;
          if (*(long *)(param_2 + 0x10) != 0) {
            lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x3f0);
            uVar2 = thunk_FUN_02cea894(*(undefined8 *)Niantic_Peridot_Telemetry_ScanLoad_TypeInfo);
            FUN_047b3b70(uVar2,param_1,*(undefined8 *)puVar1,0);
            if (lVar3 != 0) {
              FUN_06035bdc(lVar3,uVar2,0);
              if (*(long *)(param_2 + 0x10) != 0) {
                Google_Common_Geometry_S2RegionCoverer__GetInitialCandidates
                          (*(long *)(param_2 + 0x10),0);
                if (*(long *)(param_2 + 0x10) != 0) {
                  FUN_0603ec08();
                  if (*(long *)(param_2 + 0x18) != 0) {
                    Google_Common_Geometry_S2RegionCoverer__GetInitialCandidates
                              (*(long *)(param_2 + 0x18),0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


