/*
FUNCTION_NAME: FUN_061a2800
ENTRY_POINT: 061a2800
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8 FUN_061a2800(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_065de5d8;
  if ((DAT_06a83d7b & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de5d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Vector4s_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    DAT_06a83d7b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar2 = FUN_061a2a7c(param_1);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar3 = FUN_04f4b11c(param_1,*(undefined8 *)
                                  OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo
                         ,0x38,0);
    uVar2 = FUN_04e6b900(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a83dd5 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de5d8);
        DAT_06a83dd5 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *(long *)puVar1;
      }
      if (*(int *)(*(long *)(lVar5 + 0xb8) + 0x10) == 1) {
        return 0;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a83dd5 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de5d8);
        DAT_06a83dd5 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *(long *)puVar1;
      }
      if (*(int *)(*(long *)(lVar5 + 0xb8) + 0x10) == 2) {
        plVar4 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,1);
        if (plVar4 == (long *)0x0) goto LAB_061a2a64;
        lVar5 = thunk_FUN_02cea798(param_1,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar5 == 0) {
          uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar3,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar4[4] = param_1;
        FUN_0615db90(*(undefined8 *)OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo,
                     plVar4,0);
        lVar5 = *(long *)puVar1;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_061a2bec(param_1);
      return uVar3;
    }
    uVar6 = *(undefined8 *)OVRPlugin_Vector4s_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar6 = FUN_04f3fb68(uVar6,0);
    plVar4 = (long *)FUN_04f7ab70(uVar6,uVar3,0);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 != *(long *)OVRPlugin_VirtualKeyboardModelAnimationState_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018();
      }
                    /* WARNING: Could not recover jumptable at 0x061a294c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)plVar4[3])(plVar4[8],plVar4[5]);
      return uVar3;
    }
  }
LAB_061a2a64:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


