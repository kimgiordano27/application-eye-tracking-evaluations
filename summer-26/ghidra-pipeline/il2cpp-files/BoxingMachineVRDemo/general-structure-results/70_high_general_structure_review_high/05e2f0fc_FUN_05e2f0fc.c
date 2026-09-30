/*
FUNCTION_NAME: FUN_05e2f0fc
ENTRY_POINT: 05e2f0fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;ray_or_cast_sink_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05e2f0fc(ulong param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  puVar6 = PTR_DAT_0675eb68;
  puVar5 = PTR_DAT_0675eb60;
  if ((DAT_06b83514 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>__ctor__
                );
    FUN_02d6084c(PTR_DAT_0675eb70);
    FUN_02d6084c(PTR_DAT_0675eb68);
    FUN_02d6084c(PTR_DAT_067618c0);
    FUN_02d6084c(PTR_DAT_0675eb60);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_ReadValue__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TryReadValue__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_ReadValue__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TryReadValue__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_get_bypass__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_set_bypass__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__
                );
    FUN_02d6084c(Method_Unity_Collections_NativeSlice<byte>_op_Implicit__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Bounds>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<GUIStyle>__ctor__);
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<GUIStyleState>__ctor__
                );
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Gradient>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<InputAction>__ctor__)
    ;
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Rect>__ctor__);
    FUN_02d6084c(Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<RectOffset>__ctor__);
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_IsEmpty__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_Value__
                );
    FUN_02d6084c(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_AttachAnchor__);
    FUN_02d6084c(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__);
    FUN_02d6084c(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TrySaveAnchorAsync__);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_VisualScripting_ARAnchorManagerListener_OnTrackablesChanged__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<DragGesture>__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<PinchGesture>__
                );
    DAT_06b83514 = 1;
  }
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_03aabc60(lVar7,*(undefined8 *)puVar6);
  puVar6 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>__ctor__;
  puVar5 = PTR_DAT_0675eb70;
  if (param_1 == 0) {
    if (lVar7 == 0) {
LAB_05e2f804:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
LAB_05e2f7b8:
    if (*(int *)(lVar7 + 0x18) < 1) {
      uVar8 = *(undefined8 *)Method_Unity_Collections_NativeSlice<byte>_op_Implicit__;
    }
    else {
      uVar8 = FUN_04e8eb68(param_2,lVar7,0);
    }
    return uVar8;
  }
  piVar1 = (int *)(lVar7 + 0x1c);
  plVar2 = (long *)(lVar7 + 0x10);
  puVar3 = (uint *)(lVar7 + 0x18);
UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_InteractionCasterBase__UpdateInternalData:
  uVar9 = param_1 & -param_1;
  if (uVar9 < 0x4001) {
    if (uVar9 < 0x81) {
      if (uVar9 < 0x11) {
        if (uVar9 - 1 < 4) {
          switch(uVar9 - 1 & 0xffffffff) {
          case 0:
            if (lVar7 == 0) goto LAB_05e2f804;
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<RectOffset>__ctor__
            ;
            break;
          case 1:
            if (lVar7 == 0) goto LAB_05e2f804;
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__;
            break;
          case 2:
            goto switchD_05e2f4fc_caseD_2;
          case 3:
            if (lVar7 == 0) goto LAB_05e2f804;
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_Value__
            ;
            break;
          default:
            goto switchD_05e2f4fc_default;
          }
          uVar8 = *puVar11;
          lVar10 = *(long *)puVar5;
          *piVar1 = iVar12 + 1;
          lVar13 = *plVar2;
          if (lVar13 == 0) goto LAB_05e2f804;
LAB_05e2f5a0:
          uVar4 = *puVar3;
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *puVar3 = uVar4 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar8;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_05e2f760;
        }
switchD_05e2f4fc_default:
        if (uVar9 != 8) {
          if (uVar9 != 0x10) goto switchD_05e2f4fc_caseD_2;
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_IsEmpty__
            ;
            goto FUN_05e2f708;
          }
          goto LAB_05e2f804;
        }
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TryReadValue__
        ;
      }
      else if (uVar9 == 0x20) {
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_get_bypass__
        ;
      }
      else {
        if (uVar9 != 0x40) {
          if (uVar9 != 0x80) goto switchD_05e2f4fc_caseD_2;
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Rect>__ctor__;
            goto FUN_05e2f708;
          }
          goto LAB_05e2f804;
        }
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>__ctor__
        ;
      }
    }
    else if (uVar9 < 0x401) {
      if (uVar9 == 0x100) {
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__
        ;
      }
      else if (uVar9 == 0x200) {
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__ctor__;
      }
      else {
        if (uVar9 != 0x400) goto switchD_05e2f4fc_caseD_2;
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<GUIStyleState>__ctor__
        ;
      }
    }
    else if (uVar9 < 0x1001) {
      if (uVar9 != 0x800) {
        if (uVar9 == 0x1000) {
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__ctor__;
            goto FUN_05e2f708;
          }
        }
        else {
switchD_05e2f4fc_caseD_2:
          local_78 = *(undefined8 *)puVar6;
          uStack_70 = 0xffffffffffffffff;
          local_68 = uVar9;
          uVar8 = FUN_0503c914(&local_78,0);
          if (lVar7 != 0) {
            lVar10 = *(long *)puVar5;
            *piVar1 = *piVar1 + 1;
            lVar13 = *plVar2;
            if (lVar13 != 0) goto LAB_05e2f5a0;
          }
        }
        goto LAB_05e2f804;
      }
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<InputAction>__ctor__;
    }
    else if (uVar9 == 0x2000) {
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__;
    }
    else {
      if (uVar9 != 0x4000) goto switchD_05e2f4fc_caseD_2;
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<PinchGesture>__
      ;
    }
  }
  else if (uVar9 < 0x100001) {
    if (uVar9 < 0x20001) {
      if (uVar9 == 0x8000) {
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TrySaveAnchorAsync__;
      }
      else {
        if (uVar9 != 0x10000) {
          if (uVar9 != 0x20000) goto switchD_05e2f4fc_caseD_2;
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_ReadValue__
            ;
            goto FUN_05e2f708;
          }
          goto LAB_05e2f804;
        }
        if (lVar7 == 0) goto LAB_05e2f804;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__
        ;
      }
    }
    else if (uVar9 == 0x40000) {
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Gradient>__ctor__;
    }
    else if (uVar9 == 0x80000) {
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TryReadValue__
      ;
    }
    else {
      if (uVar9 != 0x100000) goto switchD_05e2f4fc_caseD_2;
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_ReadValue__
      ;
    }
  }
  else if (uVar9 < 0x800001) {
    if (uVar9 == 0x200000) {
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_UnityEngine_XR_ARFoundation_VisualScripting_ARAnchorManagerListener_OnTrackablesChanged__
      ;
    }
    else if (uVar9 == 0x400000) {
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    }
    else {
      if (uVar9 != 0x800000) goto switchD_05e2f4fc_caseD_2;
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<GUIStyle>__ctor__;
    }
  }
  else if (uVar9 < 0x2000001) {
    if (uVar9 == 0x1000000) {
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Bounds>__ctor__;
    }
    else {
      if (uVar9 != 0x2000000) goto switchD_05e2f4fc_caseD_2;
      if (lVar7 == 0) goto LAB_05e2f804;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<DragGesture>__
      ;
    }
  }
  else if (uVar9 == 0x4000000) {
    if (lVar7 == 0) goto LAB_05e2f804;
    iVar12 = *piVar1;
    puVar11 = (undefined8 *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_AttachAnchor__;
  }
  else {
    if (uVar9 != 0x8000000) goto switchD_05e2f4fc_caseD_2;
    if (lVar7 == 0) goto LAB_05e2f804;
    iVar12 = *piVar1;
    puVar11 = (undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_set_bypass__
    ;
  }
FUN_05e2f708:
  uVar8 = *puVar11;
  lVar10 = *(long *)puVar5;
  *piVar1 = iVar12 + 1;
  lVar13 = *plVar2;
  if (lVar13 == 0) goto LAB_05e2f804;
  uVar4 = *puVar3;
  if (uVar4 < *(uint *)(lVar13 + 0x18)) {
    *puVar3 = uVar4 + 1;
    *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar8;
    thunk_FUN_02dd37b4();
  }
  else {
    FUN_03aac494(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
LAB_05e2f760:
  param_1 = param_1 - 1 & param_1;
  if (param_1 == 0) goto LAB_05e2f7b8;
  goto 
  UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_InteractionCasterBase__UpdateInternalData;
}


