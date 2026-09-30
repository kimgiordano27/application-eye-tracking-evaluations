/*
FUNCTION_NAME: FUN_01b3ad74
ENTRY_POINT: 01b3ad74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01b3ad74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_0377d3ed & 1) == 0) {
    thunk_FUN_00d48444(Method_PlaySoundOnMessageListenerActivate_ListenerActivated__);
    thunk_FUN_00d48444(StringLiteral_9938);
    thunk_FUN_00d48444(UnityEngine_UIElements_Vertex___TypeInfo);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__);
    thunk_FUN_00d48444(StringLiteral_1987);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass4_0_<DOJump>b__3__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_IDictionaryKeyPathProvider>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass33_0_<DOMoveX>b__0__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<HoverExitEventArgs>_Get__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializableHasPVItem>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_Autohand_HandTriggerAreaEvents_<OnDisable>b__20_0__);
    DAT_0377d3ed = 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 2;
  if (DAT_0377a0ee == '\0') {
    thunk_FUN_00d48444(Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__);
    DAT_0377a0ee = '\x01';
  }
  puVar1 = Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__;
  lVar4 = *(long *)Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__;
  auVar5 = *(undefined1 (*) [16])(*(long *)(lVar4 + 0xb8) + 0x10);
  *(long *)(param_1 + 0x30) = auVar5._8_8_;
  *(long *)(param_1 + 0x28) = auVar5._0_8_;
  puVar2 = Method_Autohand_HandTriggerAreaEvents_<OnDisable>b__20_0__;
  if (DAT_037757b3 == '\0') {
    thunk_FUN_00d48444(puVar1);
    lVar4 = *(long *)puVar1;
    DAT_037757b3 = '\x01';
  }
  auVar5 = **(undefined1 (**) [16])(lVar4 + 0xb8);
  *(long *)(param_1 + 0x40) = auVar5._8_8_;
  *(long *)(param_1 + 0x38) = auVar5._0_8_;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass33_0_<DOMoveX>b__0__;
  puVar1 = UnityEngine_UIElements_Vertex___TypeInfo;
  if (lVar4 != 0) {
    FUN_013df774(lVar4,*(undefined8 *)
                        Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializableHasPVItem>_GetEnumerator__
                );
    *(long *)(param_1 + 0x50) = lVar4;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_01b38688();
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x8c) = 1;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_9938;
    if (lVar4 != 0) {
      FUN_0269ac38(lVar4,0);
      *(long *)(param_1 + 0xb0) = lVar4;
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xbc) = 1;
      *(undefined2 *)(param_1 + 0xbd) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 0;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<string,_IDictionaryKeyPathProvider>_TryGetValue__
      ;
      if (lVar4 != 0) {
        FUN_01298da0(lVar4,*(undefined8 *)
                            Method_PlaySoundOnMessageListenerActivate_ListenerActivated__);
        *(long *)(param_1 + 0xe0) = lVar4;
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass4_0_<DOJump>b__3__;
        if (lVar4 != 0) {
          FUN_01320e50(lVar4,*(undefined8 *)Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Add__
                      );
          *(long *)(param_1 + 0xe8) = lVar4;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = 
          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<HoverExitEventArgs>_Get__
          ;
          if (lVar4 != 0) {
            FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_1987);
            auVar5 = NEON_fmov(0x3f800000,4);
            *(long *)(param_1 + 0xf0) = lVar4;
            *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
            *(long *)(param_1 + 0x108) = auVar5._8_8_;
            *(long *)(param_1 + 0x100) = auVar5._0_8_;
            *(undefined1 *)(param_1 + 0x114) = 1;
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar4 != 0) {
              FUN_01b3b018();
              *(long *)(param_1 + 0x118) = lVar4;
              thunk_FUN_0268a01c(param_1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


