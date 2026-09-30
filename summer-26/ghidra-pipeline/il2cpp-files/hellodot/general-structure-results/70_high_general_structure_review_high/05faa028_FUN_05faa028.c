/*
FUNCTION_NAME: FUN_05faa028
ENTRY_POINT: 05faa028
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05faa028(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = System_Net_HttpListenerContext_TypeInfo;
  if ((DAT_06a81e43 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Unity_XR_CoreUtils_Bindings_BindingsGroup_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Net_Http_HttpRequestMessage_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Net_HttpListenerContext_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo);
    DAT_06a81e43 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x30) == '\0') {
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)Unity_XR_CoreUtils_Bindings_BindingsGroup_TypeInfo);
    FUN_047b3b70(uVar4,0,*(undefined8 *)System_Net_Http_HttpRequestMessage_TypeInfo,0);
    FUN_05f07284(uVar4,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *(long *)puVar2;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x30) = 1;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)Unity_Properties_ContainerPropertyBag<Vector2>_TypeInfo;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = param_1;
        return;
      }
      FUN_039683cc(lVar3,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


