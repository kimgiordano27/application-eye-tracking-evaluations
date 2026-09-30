/*
FUNCTION_NAME: FUN_05e2f798
ENTRY_POINT: 05e2f798
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05e2f798(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  int in_w9;
  long lVar6;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  int *unaff_x27;
  uint *unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x05e2f798:
  uVar2 = *param_1;
  *unaff_x27 = in_w9 + 1;
  lVar6 = *unaff_x22;
joined_r0x05e2f7ac:
  if (lVar6 != 0) {
    uVar1 = *unaff_x28;
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *unaff_x28 = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
LAB_05e2f760:
    unaff_x20 = unaff_x20 - 1 & unaff_x20;
    if (unaff_x20 == 0) {
      if (*(int *)(unaff_x21 + 0x18) < 1) {
        uVar2 = *(undefined8 *)Method_Unity_Collections_NativeSlice<byte>_op_Implicit__;
      }
      else {
        uVar2 = FUN_04e8eb68(in_stack_00000000);
      }
      return uVar2;
    }
    uVar3 = unaff_x20 & -unaff_x20;
    if (uVar3 < 0x4001) {
      if (uVar3 < 0x81) {
        if (uVar3 < 0x11) {
          if (uVar3 - 1 < 4) {
            switch(uVar3 - 1 & 0xffffffff) {
            case 0:
              if (unaff_x21 == 0) goto LAB_05e2f804;
              in_w9 = *unaff_x27;
              param_1 = (undefined8 *)
                        Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<RectOffset>__ctor__
              ;
              goto code_r0x05e2f798;
            case 1:
              if (unaff_x21 == 0) goto LAB_05e2f804;
              in_w9 = *unaff_x27;
              param_1 = (undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__;
              goto code_r0x05e2f798;
            case 2:
              goto switchD_05e2f4fc_caseD_2;
            case 3:
              if (unaff_x21 == 0) goto LAB_05e2f804;
              in_w9 = *unaff_x27;
              param_1 = (undefined8 *)
                        Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_Value__
              ;
              goto code_r0x05e2f798;
            }
          }
          if (uVar3 == 8) {
            if (unaff_x21 == 0) goto LAB_05e2f804;
            iVar5 = *unaff_x27;
            puVar4 = (undefined8 *)
                     Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TryReadValue__
            ;
          }
          else {
            if (uVar3 != 0x10) goto switchD_05e2f4fc_caseD_2;
            if (unaff_x21 == 0) goto LAB_05e2f804;
            iVar5 = *unaff_x27;
            puVar4 = (undefined8 *)
                     Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_IsEmpty__
            ;
          }
        }
        else if (uVar3 == 0x20) {
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_get_bypass__
          ;
        }
        else if (uVar3 == 0x40) {
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>__ctor__
          ;
        }
        else {
          if (uVar3 != 0x80) goto switchD_05e2f4fc_caseD_2;
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Rect>__ctor__;
        }
      }
      else if (uVar3 < 0x401) {
        if (uVar3 == 0x100) {
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__
          ;
        }
        else if (uVar3 == 0x200) {
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray2D>__ctor__;
        }
        else {
          if (uVar3 != 0x400) goto switchD_05e2f4fc_caseD_2;
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<GUIStyleState>__ctor__
          ;
        }
      }
      else if (uVar3 < 0x1001) {
        if (uVar3 == 0x800) {
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<InputAction>__ctor__
          ;
        }
        else {
          if (uVar3 != 0x1000) goto switchD_05e2f4fc_caseD_2;
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__ctor__;
        }
      }
      else if (uVar3 == 0x2000) {
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__ctor__;
      }
      else {
        if (uVar3 != 0x4000) goto switchD_05e2f4fc_caseD_2;
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<PinchGesture>__
        ;
      }
    }
    else if (uVar3 < unaff_x26 + 0xe0000) {
      if (uVar3 < unaff_x26) {
        if (uVar3 == 0x8000) {
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TrySaveAnchorAsync__;
        }
        else if (uVar3 == 0x10000) {
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<AnimationCurve>__ctor__
          ;
        }
        else {
          if (uVar3 != 0x20000) goto switchD_05e2f4fc_caseD_2;
          if (unaff_x21 == 0) goto LAB_05e2f804;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_ReadValue__
          ;
        }
      }
      else if (uVar3 == 0x40000) {
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Gradient>__ctor__;
      }
      else if (uVar3 == 0x80000) {
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TryReadValue__
        ;
      }
      else {
        if (uVar3 != 0x100000) goto switchD_05e2f4fc_caseD_2;
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_ReadValue__
        ;
      }
    }
    else if (uVar3 < unaff_x26 + 0x7e0000) {
      if (uVar3 == 0x200000) {
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_UnityEngine_XR_ARFoundation_VisualScripting_ARAnchorManagerListener_OnTrackablesChanged__
        ;
      }
      else if (uVar3 == 0x400000) {
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
      }
      else {
        if (uVar3 != 0x800000) goto switchD_05e2f4fc_caseD_2;
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<GUIStyle>__ctor__;
      }
    }
    else if (uVar3 < 0x2000001) {
      if (uVar3 == 0x1000000) {
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_Unity_VisualScripting_FullSerializer_fsDirectConverter<Bounds>__ctor__;
      }
      else {
        if (uVar3 != 0x2000000) goto switchD_05e2f4fc_caseD_2;
        if (unaff_x21 == 0) goto LAB_05e2f804;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<DragGesture>__
        ;
      }
    }
    else if (uVar3 == 0x4000000) {
      if (unaff_x21 == 0) goto LAB_05e2f804;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_AttachAnchor__;
    }
    else {
      if (uVar3 != 0x8000000) goto switchD_05e2f4fc_caseD_2;
      if (unaff_x21 == 0) goto LAB_05e2f804;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_set_bypass__
      ;
    }
    uVar2 = *puVar4;
    *unaff_x27 = iVar5 + 1;
    lVar6 = *unaff_x22;
    if (lVar6 == 0) goto LAB_05e2f804;
    uVar1 = *unaff_x28;
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *unaff_x28 = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    goto LAB_05e2f760;
  }
LAB_05e2f804:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
switchD_05e2f4fc_caseD_2:
  in_stack_00000008 = *unaff_x24;
  uVar2 = FUN_0503c914(&stack0x00000008,0);
  if (unaff_x21 == 0) goto LAB_05e2f804;
  *unaff_x27 = *unaff_x27 + 1;
  lVar6 = *unaff_x22;
  goto joined_r0x05e2f7ac;
}


