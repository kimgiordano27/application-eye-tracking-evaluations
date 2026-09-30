/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 04f62924
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_foveatedRenderingLevel(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  *(undefined4 *)(unaff_x19 + 0x128) = *(undefined4 *)((long)unaff_x21 + 0xc);
  puVar2 = System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_TypeInfo;
  if (*unaff_x21 != 0) {
    lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>_TypeInfo
                              );
    FUN_037a5cd0(lVar5,*(undefined8 *)puVar2);
    puVar4 = UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_TypeInfo;
    puVar3 = UnityEngine_UIElements_EventBase<ClickEvent>_TypeInfo;
    puVar2 = UnityEngine_UIElements_EventBase<BlurEvent>_TypeInfo;
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_038c5550(&stack0x000000c0,*unaff_x21,
                 *(undefined8 *)UnityEngine_UIElements_EventBase<CustomStyleResolvedEvent>_TypeInfo)
    ;
    while (uVar6 = FUN_047607b0(&stack0x000000c0,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      uVar7 = FUN_04f62ab4();
      if (lVar5 == 0) {
LAB_04f62a54:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_04f62a54;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_047607ac(&stack0x000000c0,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0x130) = lVar5;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x130,lVar5);
  }
  return;
}


