/*
FUNCTION_NAME: FUN_065682bc
ENTRY_POINT: 065682bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_065682bc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_071ce71b & 1) == 0) {
    FUN_02f07e70(PixelCrushers_DialogueSystem_SetEnabledOnDialogueEvent_SetEnabledAction___TypeInfo)
    ;
    FUN_02f07e70(System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo);
    FUN_02f07e70(
                PixelCrushers_DialogueSystem_SetQuestStateOnDialogueEvent_SetQuestStateAction___TypeInfo
                );
    FUN_02f07e70(UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo);
    DAT_071ce71b = 1;
  }
  if (*param_1 == 0) goto LAB_06568498;
  uVar3 = FUN_0654f2dc(*param_1,0);
  if ((uVar3 & 1) != 0) {
    if (*param_1 == 0) goto LAB_06568498;
    lVar4 = FUN_0654f358(*param_1,0);
    puVar1 = UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo;
    if (*(int *)(*(long *)UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo);
    }
    if (lVar4 == 0) goto LAB_06568498;
    uVar3 = FUN_04c74820(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),
                         *(undefined8 *)
                          PixelCrushers_DialogueSystem_SetEnabledOnDialogueEvent_SetEnabledAction___TypeInfo
                        );
    if ((uVar3 & 1) != 0) {
      if (*param_1 == 0) goto LAB_06568498;
      lVar4 = FUN_0654f358(*param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)puVar1);
      }
      if (lVar4 == 0) goto LAB_06568498;
      lVar4 = FUN_04c745ac(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),
                           *(undefined8 *)
                            PixelCrushers_DialogueSystem_SetQuestStateOnDialogueEvent_SetQuestStateAction___TypeInfo
                          );
      *param_1 = lVar4;
      thunk_FUN_02f411dc(param_1,lVar4);
    }
  }
  if (*param_1 != 0) {
    uVar3 = FUN_0654f2dc(*param_1,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*param_1 != 0) {
      lVar4 = FUN_0654f358(*param_1,0);
      puVar1 = UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo;
      if (*(int *)(*(long *)UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo);
      }
      puVar2 = System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo;
      if (lVar4 != 0) {
        FUN_04c75b28(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                     *(undefined8 *)System_Runtime_Remoting_Channels_AsyncRequest_TypeInfo);
        FUN_04c75b28(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),
                     *(undefined8 *)puVar2);
        FUN_04c75b28(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),
                     *(undefined8 *)puVar2);
        FUN_04c75b28(lVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20),
                     *(undefined8 *)puVar2);
        return;
      }
    }
  }
LAB_06568498:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


