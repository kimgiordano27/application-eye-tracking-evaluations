/*
FUNCTION_NAME: FUN_05eb9ec4
ENTRY_POINT: 05eb9ec4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 FUN_05eb9ec4(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_06a7d3a0 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Vector2f___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Vector3f___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    DAT_06a7d3a0 = 1;
  }
  puVar3 = OVRPlugin_Vector2f___TypeInfo;
  puVar2 = PTR_DAT_065c89e8;
  if (param_1 != 0) {
    plVar4 = (long *)FUN_04f79e08(param_1,0);
    uVar6 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*(long *)puVar2);
    }
    uVar6 = FUN_04f3fb68(uVar6,0);
    if (plVar4 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x218))(plVar4,uVar6,1,*(undefined8 *)(*plVar4 + 0x220));
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
        if ((int)*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar4 = *(long **)(lVar5 + 0x20);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)OVRPlugin_Vector3f___TypeInfo + 0x130);
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)OVRPlugin_Vector3f___TypeInfo)) {
            return (int)plVar4[2];
          }
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


