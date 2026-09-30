/*
FUNCTION_NAME: FUN_05e27be0
ENTRY_POINT: 05e27be0
PROGRAM: hellodot-libil2cpp.so
SCORE: 200
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void FUN_05e27be0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo;
  if ((DAT_06a7b310 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8cd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065efb00);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<Vector3,_Vector3,_PenData,_EventBase>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    DAT_06a7b310 = 1;
  }
  lVar4 = FUN_03f99134(*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x18) == '\0') {
      return;
    }
    lVar4 = FUN_03f99134(*(undefined8 *)puVar3);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x19) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_065c8cd0 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar5 = FUN_05eae604(0);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      puVar2 = System_Func<Vector3,_Vector3,_PenData,_EventBase>_TypeInfo;
      if (*(int *)(*(long *)System_Func<Vector3,_Vector3,_PenData,_EventBase>_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a7b309 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum
                  (System_Func<Vector3,_Vector3,_PenData,_EventBase>_TypeInfo);
        DAT_06a7b309 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar4 = *(long *)puVar2;
      }
      puVar1 = PTR_DAT_065c8c40;
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c40);
      }
      uVar5 = FUN_05ef739c(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (DAT_06a7b309 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum
                    (System_Func<Vector3,_Vector3,_PenData,_EventBase>_TypeInfo);
          DAT_06a7b309 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar1);
        }
LAB_05e27e60:
        FUN_05efaf60(lVar4,0);
        return;
      }
      lVar4 = FUN_03f99134(*(undefined8 *)puVar3);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar1);
        }
        uVar5 = FUN_05ef739c(lVar7,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_05eb364c(*(undefined8 *)
                        System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo,0);
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        lVar4 = FUN_034b09b0(lVar7,*(undefined8 *)PTR_DAT_065efb00);
        if ((lVar7 != 0) && (uVar6 = FUN_05efa158(lVar7,0), lVar4 != 0)) {
          FUN_05efa208(lVar4,uVar6,0);
          goto LAB_05e27e60;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


