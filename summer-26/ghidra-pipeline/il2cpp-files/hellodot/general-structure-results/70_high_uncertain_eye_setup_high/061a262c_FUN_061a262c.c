/*
FUNCTION_NAME: FUN_061a262c
ENTRY_POINT: 061a262c
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_061a262c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long local_28;
  
  puVar1 = PTR_DAT_065de5d8;
  if ((DAT_06a83d7a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Vector3f_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Vector4f_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de5d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc880);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    DAT_06a83d7a = 1;
  }
  lVar2 = *(long *)puVar1;
  local_28 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar3 = FUN_0467ad20(**(long **)(lVar2 + 0xb8),param_1,&local_28,
                         *(undefined8 *)OVRPlugin_Vector3f_TypeInfo);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      local_28 = FUN_061a2800(param_1);
      if (local_28 != 0) {
        FUN_0615ceb0(*(undefined8 *)(local_28 + 0x10),param_1,0);
        if (local_28 == 0) goto LAB_061a27fc;
        FUN_0615d4dc(*(undefined8 *)(local_28 + 0x30),0);
        if (*(int *)(*(long *)PTR_DAT_065dc880 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar4 = FUN_0615e974(param_1,0);
        if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
        }
        uVar3 = FUN_04f497f4(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar3 = FUN_061a2a7c(uVar4);
          lVar2 = local_28;
          if ((uVar3 & 1) == 0) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar4 = FUN_061a262c(uVar4);
            if (lVar2 == 0) goto LAB_061a27fc;
            *(undefined8 *)(lVar2 + 0x30) = uVar4;
          }
        }
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_061a27fc;
      FUN_04679278(**(long **)(lVar2 + 0xb8),param_1,local_28,
                   *(undefined8 *)OVRPlugin_Vector4f_TypeInfo);
    }
    return local_28;
  }
LAB_061a27fc:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


