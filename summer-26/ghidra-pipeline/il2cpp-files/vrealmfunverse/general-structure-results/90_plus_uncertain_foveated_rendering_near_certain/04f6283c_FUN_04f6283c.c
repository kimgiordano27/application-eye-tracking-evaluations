/*
FUNCTION_NAME: FUN_04f6283c
ENTRY_POINT: 04f6283c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_foveation_hits_2;functionality_foveated_rendering
*/


void FUN_04f6283c(long param_1,long *param_2)

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
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [44];
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_066c9af9 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_EventBase<BlurEvent>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventBase<ClickEvent>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventBase<ContextClickEvent>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_EventBase<CustomStyleResolvedEvent>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>_TypeInfo);
    DAT_066c9af9 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0xe4) = (int)param_2[1];
    memcpy(&local_c8,param_2,0x48);
    *(undefined8 *)(param_1 + 0xf0) = uStack_ac;
    *(undefined8 *)(param_1 + 0xe8) = local_b4;
    *(undefined8 *)(param_1 + 0xf8) = local_a4;
    memcpy(auStack_110,param_2,0x48);
    *(undefined8 *)(param_1 + 0x108) = uStack_dc;
    *(undefined8 *)(param_1 + 0x100) = local_e4;
    *(undefined8 *)(param_1 + 0x110) = local_d4;
    *(int *)(param_1 + 0xdc) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)((long)param_2 + 0xc);
    puVar2 = System_Collections_Generic_Dictionary<uint,_TMP_SpriteCharacter>_TypeInfo;
    if (*param_2 != 0) {
      lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>_TypeInfo
                                );
      FUN_037a5cd0(lVar5,*(undefined8 *)puVar2);
      puVar4 = UnityEngine_UIElements_EventBase<ContextualMenuPopulateEvent>_TypeInfo;
      puVar3 = UnityEngine_UIElements_EventBase<ClickEvent>_TypeInfo;
      puVar2 = UnityEngine_UIElements_EventBase<BlurEvent>_TypeInfo;
      if (*param_2 == 0) goto OVRPlugin__get_fixedFoveatedRenderingLevel;
      FUN_038c5550(&local_80,*param_2,
                   *(undefined8 *)
                    UnityEngine_UIElements_EventBase<CustomStyleResolvedEvent>_TypeInfo);
      local_c8 = 0;
      puStack_c0 = &local_80;
      while (uVar6 = FUN_047607b0(&local_80,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        uStack_118 = uStack_48;
        local_120 = local_50;
        uStack_138 = uStack_68;
        local_140 = local_70;
        uStack_128 = uStack_58;
        uStack_130 = local_60;
        uVar7 = FUN_04f62ab4(param_1,&local_140);
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
          FUN_037a6538(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      FUN_047607ac(&local_80,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x130) = lVar5;
      thunk_FUN_02bb0e9c(param_1 + 0x130,lVar5);
    }
    return;
  }
OVRPlugin__get_fixedFoveatedRenderingLevel:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


