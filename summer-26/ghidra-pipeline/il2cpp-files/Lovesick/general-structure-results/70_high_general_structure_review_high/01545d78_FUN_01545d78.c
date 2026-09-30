/*
FUNCTION_NAME: FUN_01545d78
ENTRY_POINT: 01545d78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01545d78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = Method_System_String_Equals__;
  puVar5 = Method_Obi_ObiNativeList<int>_ResizeUninitialized__;
  puVar1 = Oculus_Interaction_AssertUtils_<>c_TypeInfo;
  puVar2 = System_Func<GrabInteractable>_TypeInfo;
  if ((DAT_03777adc & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_get_Item__
                      );
    thunk_FUN_00d48444(System_Func<GrabInteractable>_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<TeleportPoint,_float>_TypeInfo);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<int>_ResizeUninitialized__);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass39_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_String_Equals__);
    thunk_FUN_00d48444(StringLiteral_6725);
    thunk_FUN_00d48444(Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo);
    thunk_FUN_00d48444(RCG_Tools_ScreenFade_TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_AssertUtils_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<JObject>_ConfigureAwait__);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>__ctor__
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_PointerEventDispatchingStrategy_TypeInfo);
    DAT_03777adc = 1;
  }
  FUN_015518c8(param_1,param_2,0);
  lVar6 = FUN_010c5ec8(param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
  *(long *)(param_1 + 0xd0) = lVar6;
  uVar7 = FUN_01145518(*(undefined8 *)puVar1,*(undefined8 *)puVar5);
  puVar4 = Method_System_Threading_Tasks_Task<JObject>_ConfigureAwait__;
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_get_Item__
  ;
  puVar1 = RCG_Tools_ScreenFade_TypeInfo;
  if (lVar6 != 0) {
    FUN_01541ed8(lVar6,uVar7);
    lVar6 = FUN_010c5ec8(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
    uVar7 = FUN_01145518(*(undefined8 *)puVar4,*(undefined8 *)puVar5);
    puVar4 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>__ctor__;
    puVar3 = Meta_WitAi_Requests_IVRequestDownloadDecoder_TypeInfo;
    puVar1 = System_Collections_Generic_Dictionary<TeleportPoint,_float>_TypeInfo;
    if (lVar6 != 0) {
      FUN_01541ed8(lVar6,uVar7);
      lVar8 = FUN_010c5ec8(lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
      *(long *)(param_1 + 0xe0) = lVar8;
      uVar7 = FUN_01145518(*(undefined8 *)puVar4,*(undefined8 *)puVar5);
      puVar1 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass39_0_TypeInfo;
      if (lVar8 != 0) {
        FUN_01541ed8(lVar8,uVar7);
        lVar8 = *(long *)(param_1 + 0xe0);
        uVar7 = FUN_01145518(*(undefined8 *)puVar4,*(undefined8 *)puVar1);
        puVar3 = StringLiteral_6725;
        puVar1 = UnityEngine_UIElements_PointerEventDispatchingStrategy_TypeInfo;
        if (lVar8 != 0) {
          FUN_01551840(lVar8,uVar7,0);
          lVar6 = FUN_010c5ec8(lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
          *(long *)(param_1 + 0xd8) = lVar6;
          uVar7 = FUN_01145518(*(undefined8 *)puVar1,*(undefined8 *)puVar5);
          if (lVar6 != 0) {
            FUN_01541ed8(lVar6,uVar7);
            FUN_01551f5c(0x447a0000,0x41200000,DAT_02940ec8,param_1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


