/*
FUNCTION_NAME: Unity.VisualScripting.UnitCategoryConverter$$TrySerialize
ENTRY_POINT: 03eeab84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Unity_VisualScripting_UnitCategoryConverter__TrySerialize(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint in_w9;
  long *in_x10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__;
  bVar2 = *(byte *)(*in_x10 + 0x130);
  if ((bVar2 <= in_w9) && (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) == *in_x10))
  {
    if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<TTSServiceLogging>__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_03eeb2f4();
    uVar5 = FUN_034b2ac0();
    if ((*(char *)(unaff_x20 + 0x19) == '\0') && (uVar7 = FUN_034b2b68(), (uVar7 & 1) != 0)) {
      return 0;
    }
    if ((*(char *)(unaff_x20 + 0x1a) == '\0') && (uVar7 = FUN_034b2b68(), (uVar7 & 1) == 0)) {
      return 0;
    }
    if (*(char *)(unaff_x20 + 0x21) == '\0') {
      lVar8 = (**(code **)(*unaff_x19 + 0x248))();
      if (lVar8 == 0) goto LAB_03eeb2f0;
      if ((int)(uVar4 & 1) < *(int *)(lVar8 + 0x18)) {
        return 0;
      }
    }
    if ((*(char *)(unaff_x20 + 0x23) == '\0') &&
       (uVar7 = (**(code **)(*unaff_x19 + 0x338))(), (uVar7 & 1) != 0)) {
      return 0;
    }
    lVar8 = *unaff_x19;
    bVar2 = *(byte *)(*(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__
                     + 0x130);
    if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_UnityEngine_Component_GetComponent<TeleportInputHandlerHMD>__)) {
      bVar2 = *(byte *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__
                       + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__))
      goto LAB_03eeaba8;
      if ((*(char *)(unaff_x20 + 0x13) == '\0') && (*(char *)(unaff_x20 + 0x14) == '\0')) {
        return 0;
      }
      if (unaff_x21 != 0) {
        (**(code **)(lVar8 + 0x1b8))();
        uVar7 = FUN_03f71a28();
        if ((uVar7 & 1) == 0) {
          return 0;
        }
      }
      uVar7 = FUN_034b2ac0();
      puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if (((uVar7 & 1) != 0) && (*(char *)(unaff_x20 + 0x24) == '\0')) {
        return 0;
      }
      uVar10 = *(undefined8 *)PTR_DAT_0457cc90;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      plVar9 = (long *)FUN_03579868(uVar10,0);
      uVar10 = (**(code **)(*unaff_x19 + 0x1b8))();
      if (plVar9 == (long *)0x0) {
LAB_03eeb2f0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = (**(code **)(*plVar9 + 0x2a8))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x2b0));
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      uVar10 = *(undefined8 *)Method_UnityEngine_InputSystem_Haptics_DualMotorRumble_PauseHaptics__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar9 = (long *)FUN_03579868(uVar10,0);
      uVar10 = (**(code **)(*unaff_x19 + 0x1b8))();
      if (plVar9 == (long *)0x0) goto LAB_03eeb2f0;
      uVar7 = (**(code **)(*plVar9 + 0x2a8))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x2b0));
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar2 = FUN_03eeb3a0();
      bVar3 = FUN_03eeb458();
      uVar10 = (**(code **)(*unaff_x19 + 1000))();
      uVar11 = *(undefined8 *)Method_UnityEngine_Component_GetComponent<Point>__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar6 = FUN_03583338(uVar10,uVar11,0);
      if ((*(char *)(unaff_x20 + 0x12) == '\0') &&
         (*(char *)(unaff_x20 + 0x14) == '\0' || ((uVar6 ^ 0xffffffff) & 1) != 0)) {
        return 0;
      }
      uVar5 = uVar4 | uVar5 ^ 1;
      if ((uVar5 & *(char *)(unaff_x20 + 0x17) == '\0') != 0) {
        return 0;
      }
      if (((uint)(*(char *)(unaff_x20 + 0x18) == '\0') & (uVar5 ^ 0xffffffff)) != 0) {
        return 0;
      }
      if ((bVar2 & *(char *)(unaff_x20 + 0x1e) == '\0') != 0) {
        return 0;
      }
      if ((uVar4 & *(char *)(unaff_x20 + 0x1d) == '\0') != 0) {
        return 0;
      }
      if (unaff_x21 != 0) {
        (**(code **)(*unaff_x19 + 1000))();
        uVar7 = FUN_03f71a28();
        if ((uVar7 & 1) == 0) {
          return 0;
        }
      }
      uVar7 = FUN_034b2b00();
      if ((((bVar2 | bVar3) & 1) == 0) && ((uVar7 & 1) != 0)) {
        return 0;
      }
      if ((uVar6 & 1) == 0) goto LAB_03eeaba8;
      plVar9 = (long *)(**(code **)(*unaff_x19 + 1000))();
      if (plVar9 == (long *)0x0) goto LAB_03eeb2f0;
      uVar7 = (**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410));
    }
    if ((uVar7 & 1) != 0) {
      return 0;
    }
  }
LAB_03eeaba8:
  if (*(char *)(unaff_x20 + 0x22) == '\0') {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_022a028c();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
  }
  if (*(char *)(unaff_x20 + 0x25) == '\0') {
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = FUN_0229febc();
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) == '\0')) {
      return 0;
    }
  }
  return 1;
}


