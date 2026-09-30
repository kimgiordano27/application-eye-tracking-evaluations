/*
FUNCTION_NAME: FUN_07879f40
ENTRY_POINT: 07879f40
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_07879f40(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  if ((DAT_082727cb & 1) == 0) {
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_arSessionOrigin__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_raycastMask__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_raycastTriggerInteraction__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_xrOrigin__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_add_onGestureStarted__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_remove_onGestureStarted__
                );
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_arSessionOrigin__
                );
    DAT_082727cb = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  local_80._8_8_ = 0;
  local_80._0_8_ = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  auVar2 = ZEXT816(0);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x38) < (int)uVar1) {
      FUN_04d46024((undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_add_onGestureStarted__
                  );
      local_70 = 0;
      uStack_68 = 0;
      FUN_04d45d50(&local_70,uVar1,4,0,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_remove_onGestureStarted__
                  );
      auVar2._8_8_ = local_80._8_8_;
      auVar2._0_8_ = local_80._0_8_;
      *(undefined8 *)(param_1 + 0x38) = uStack_68;
      *(undefined8 *)(param_1 + 0x30) = local_70;
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) goto LAB_0787a08c;
    }
    puVar5 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_set_arSessionOrigin__
    ;
    puVar4 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_xrOrigin__;
    puVar3 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TapGesture>_get_arSessionOrigin__
    ;
    lVar9 = 0;
    uVar8 = 0;
    do {
      if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar8) {
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        uVar7 = FUN_0785b6bc(*(undefined8 *)(param_1 + 0x20),0);
        local_80 = FUN_04097c00(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),0,
                                uVar1,*(undefined8 *)puVar5);
        auVar10._8_8_ = auStack_60._8_8_;
        auVar10._0_8_ = auStack_60._0_8_;
        uStack_88 = 0;
        local_90 = uVar7;
        auVar2 = local_80;
        if ((param_2 != 0) && (auStack_60 = auVar10, *(long *)(param_2 + 0x28) != 0)) {
          FUN_07792c44(*(long *)(param_2 + 0x28),(ulong)&local_90 | 8,0);
          uStack_68 = uStack_88;
          local_70 = local_90;
          auStack_60 = local_80;
          auVar10 = FUN_0401a974(&local_70,uVar1,1,0,0,*(undefined8 *)puVar3);
          auVar2 = local_80;
          if (*(long *)(param_2 + 0x30) != 0) {
            FUN_0777ebe4(*(long *)(param_2 + 0x30),auVar10._0_8_,auVar10._8_8_,0);
            auVar2 = local_80;
            if (*(long *)(param_2 + 0x30) != 0) {
              FUN_0777ec4c(*(long *)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x48),0,2,1,0);
              return;
            }
          }
        }
        break;
      }
      auVar10 = FUN_04b576d0(lVar6,uVar8 & 0xffffffff,*(undefined8 *)puVar4);
      auVar2._8_8_ = local_80._8_8_;
      auVar2._0_8_ = local_80._0_8_;
      uVar8 = uVar8 + 1;
      *(undefined1 (*) [16])(*(long *)(param_1 + 0x30) + lVar9) = auVar10;
      lVar6 = *(long *)(param_1 + 0x28);
      lVar9 = lVar9 + 0x10;
    } while (lVar6 != 0);
  }
LAB_0787a08c:
  local_80 = auVar2;
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


