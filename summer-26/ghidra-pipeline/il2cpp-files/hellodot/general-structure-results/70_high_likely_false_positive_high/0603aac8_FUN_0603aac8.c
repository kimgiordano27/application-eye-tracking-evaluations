/*
FUNCTION_NAME: FUN_0603aac8
ENTRY_POINT: 0603aac8
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0603aac8(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_06a82712 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Runtime_Remoting_Contexts_IContextAttribute_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_ScanLoad_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e02b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(Mono_Xml_SecurityParser_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_SelectEnterEvent_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_SelectExitEvent_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e02c0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_UI_Selectable_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_Schema_SelectorActiveAxis_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_BehaviorTrees_SelectorNode_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Scans_ScanArrangementDetails_TypeInfo)
    ;
    DAT_06a82712 = 1;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    uVar2 = FUN_04679480(*(long *)(param_1 + 0x400),param_2,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_SelectEnterEventArgs_TypeInfo);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = thunk_FUN_02cea894(*(undefined8 *)Niantic_Peridot_Scans_ScanArrangementDetails_TypeInfo)
    ;
    FUN_0603b73c(lVar3,param_2);
    lVar4 = thunk_FUN_02cea894(*(undefined8 *)Niantic_Peridot_BehaviorTrees_SelectorNode_TypeInfo);
    FUN_0603bee0();
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e02c0);
    FUN_04a03924(uVar5,param_1,*(undefined8 *)UnityEngine_UI_Selectable_TypeInfo,0);
    if (lVar3 != 0) {
      FUN_0338d850(lVar3,uVar5,0,*(undefined8 *)PTR_DAT_065e02b8);
      lVar6 = *(long *)(lVar3 + 1000);
      uVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                  System_Runtime_Remoting_Contexts_IContextAttribute_TypeInfo);
      FUN_047b3b70(uVar5,param_1,
                   *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_SelectExitEventArgs_TypeInfo,0)
      ;
      if (lVar6 != 0) {
        FUN_05fb3a24(lVar6,uVar5,0);
        lVar6 = *(long *)(lVar3 + 0x3f0);
        uVar5 = thunk_FUN_02cea894(*(undefined8 *)Niantic_Peridot_Telemetry_ScanLoad_TypeInfo);
        FUN_047b3b70(uVar5,param_1,*(undefined8 *)System_Xml_Schema_SelectorActiveAxis_TypeInfo,0);
        if ((lVar6 != 0) && (FUN_06035b2c(lVar6,uVar5,0), lVar4 != 0)) {
          uVar7 = *(undefined8 *)(lVar4 + 0x3c8);
          uVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_SelectEnterEvent_TypeInfo);
          FUN_06038338(uVar5,param_2);
          FUN_05ff0c04(uVar7,uVar5,0);
          lVar8 = *(long *)(param_1 + 0x400);
          lVar6 = thunk_FUN_02cea894(*(undefined8 *)Mono_Xml_SecurityParser_TypeInfo);
          FUN_04f7383c(lVar6,0);
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = lVar3;
            *(long *)(lVar6 + 0x18) = lVar4;
            if ((lVar8 != 0) &&
               (FUN_04679278(lVar8,param_2,lVar6,
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_SelectExitEvent_TypeInfo),
               param_2 != 0)) {
              if (*(char *)(param_2 + 0x40) == '\0') {
                FUN_0603bfcc(param_1,param_2);
LAB_0603adb4:
                FUN_0603af90(param_1);
                FUN_0603af20(param_1);
                return;
              }
              lVar6 = *(long *)(param_1 + 0x410);
              uVar1 = FUN_0604b698(param_2,0);
              if (lVar6 != 0) {
                FUN_060d4274(lVar6,uVar1,lVar3,0);
                lVar3 = *(long *)(param_1 + 0x418);
                uVar1 = FUN_0604b698(param_2,0);
                if (lVar3 != 0) {
                  FUN_060d4274(lVar3,uVar1,lVar4,0);
                  goto LAB_0603adb4;
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


