/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<ConcurrentQueue.Segment.Slot<object>>
ENTRY_POINT: 01e99410
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array__InternalArray__Insert<ConcurrentQueue_Segment_Slot<object>>
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  FUN_01d7d918(
              Field_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_builder
              );
  FUN_01d7d918(Field_TMPro_FloatTween_m_Target);
  FUN_01d7d918(Field_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__debugInfo);
  FUN_01d7d918(
              Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
              );
  FUN_01d7d918(
              Field_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_deviceMatcher
              );
  FUN_01d7d918(Field_UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_usages);
  FUN_01d7d918(Field_TMPro_ColorTween_m_Target);
  FUN_01d7d918(Field_UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_usages);
  FUN_01d7d918(
              Field_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__instruction
              );
  FUN_01d7d918(Field_UnityEngine_XR_Interaction_Toolkit_AR_CommonTouch_m_EnhancedTouch);
  FUN_01d7d918(
              Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
              );
  FUN_01d7d918(Field_OVRAnchor_Tracker_AsyncLock__tracker);
  FUN_01d7d918(
              Field_OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData_root
              );
  FUN_01d7d918(Field_OVRPlugin_Qpl_Annotation_Builder__entries);
  *(undefined1 *)(unaff_x21 + 0xdc8) = 1;
  puVar1 = 
  Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
  ;
  if (unaff_x19 == 0) goto LAB_01e999c0;
  uVar3 = FUN_02091ba0();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar1);
  }
  uVar4 = FUN_03d749a8(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_02091ba0();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)puVar1);
    }
    uVar4 = UnityEngine_UIElements_UIR_TextureSlotManager__get_FreeSlots(lVar5,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_02146300(*(undefined8 *)
                            Field_OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData_root
                           ,*(undefined8 *)Field_OVRAnchor_Tracker_AsyncLock__tracker);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)puVar1);
      }
      uVar4 = FUN_03d755c0(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_03d415e0(*(undefined8 *)Field_OVRPlugin_Qpl_Annotation_Builder__entries,0);
        return;
      }
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if (lVar6 != 0) {
        *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
        FUN_01e99e60();
        if ((lVar5 != 0) && (lVar6 = FUN_03d71c60(lVar5,0), lVar6 != 0)) {
          uVar12 = FUN_03d7eda4(lVar6,0);
          if (DAT_044a2db9 == '\0') {
            FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField);
            DAT_044a2db9 = '\x01';
          }
          puVar10 = *(undefined4 **)
                     (*(long *)
                       Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField +
                     0xb8);
          uVar16 = *puVar10;
          uVar15 = puVar10[1];
          uVar14 = puVar10[2];
          uVar13 = puVar10[3];
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar6 = FUN_02133c60(uVar12,param_2,param_3,uVar16,uVar15,uVar14,uVar13,uVar3,
                               *(undefined8 *)
                                Field_UnityEngine_XR_Interaction_Toolkit_AR_CommonTouch_m_EnhancedTouch
                              );
          if ((lVar6 != 0) &&
             (lVar7 = FUN_020d7fa0(lVar6,*(undefined8 *)
                                          Field_UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_usages
                                  ), lVar7 != 0)) {
            *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar5 + 0x30);
            thunk_FUN_01e10808((undefined8 *)(lVar7 + 0x28));
            *(undefined1 *)(lVar7 + 0x20) = *(undefined1 *)(lVar5 + 0x38);
            lVar8 = FUN_020914e4(lVar5,*(undefined8 *)Field_TMPro_FloatTween_m_Target);
            uVar4 = FUN_03d749a8(lVar8,0,0);
            if ((uVar4 & 1) != 0) {
              lVar9 = FUN_020d7fa0(lVar6,*(undefined8 *)Field_TMPro_ColorTween_m_Target);
              if ((lVar8 == 0) || (FUN_03dc225c(lVar8,0), lVar9 == 0)) goto LAB_01e999c0;
              FUN_03dc2298(lVar9,0);
              FUN_03dc214c(lVar8,0);
              FUN_03dc2188(lVar9,0);
              FUN_03dc21d4(lVar8,0);
              FUN_03dc2210(lVar9,0);
              uVar2 = FUN_03dc22e4(lVar8,0);
              FUN_03dc2320(lVar9,uVar2 & 1,0);
              uVar2 = FUN_03dc2364(lVar8,0);
              FUN_03dc23a0(lVar9,uVar2 & 1,0);
              uVar13 = FUN_03dc2794(lVar8,0);
              FUN_03dc27d0(lVar9,uVar13,0);
              uVar13 = FUN_03dc24a8(lVar8,0);
              FUN_03dc24e4(lVar9,uVar13,0);
              uVar13 = FUN_03dc2428(lVar8,0);
              FUN_03dc2464(lVar9,uVar13,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              FUN_03d78bf0(lVar8,0);
            }
            lVar8 = FUN_03d71c60(lVar5,0);
            if (lVar8 != 0) {
              FUN_03d7f688(lVar8,0,0);
              lVar8 = FUN_03d71c60(lVar5,0);
              uVar3 = FUN_03d74af4(lVar6,0);
              if (lVar8 != 0) {
                FUN_03d7f688(lVar8,uVar3,0);
                lVar6 = FUN_020d7fa0(lVar6,*(undefined8 *)
                                            Field_UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_usages
                                    );
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)puVar1);
                }
                uVar4 = FUN_03d749a8(lVar6,0,0);
                if ((uVar4 & 1) == 0) {
                  return;
                }
                uVar3 = *(undefined8 *)(lVar5 + 0x20);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar4 = FUN_03d749a8(uVar3,0,0);
                if ((uVar4 & 1) != 0) {
                  *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(lVar5 + 0x20);
                  thunk_FUN_01e10808();
                  puVar11 = (undefined8 *)(lVar7 + 0x30);
                  *puVar11 = *(undefined8 *)(lVar5 + 0x20);
                  thunk_FUN_01e10808(puVar11);
                  uVar3 = *(undefined8 *)(lVar5 + 0x28);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30();
                  }
                  uVar4 = FUN_03d749a8(uVar3,0,0);
                  if ((uVar4 & 1) != 0) {
                    *puVar11 = *(undefined8 *)(lVar5 + 0x28);
                    thunk_FUN_01e10808(puVar11);
                  }
                }
                if (lVar6 != 0) {
                  lVar7 = *(long *)(lVar6 + 0x40);
                  uVar3 = FUN_0209218c(lVar5,*(undefined8 *)
                                              Field_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__debugInfo
                                      );
                  uVar3 = FUN_020c4750(uVar3,*(undefined8 *)
                                              Field_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_deviceMatcher
                                      );
                  if (lVar7 != 0) {
                    FUN_0319917c(lVar7,uVar3,
                                 *(undefined8 *)
                                  Field_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__instruction
                                );
                    FUN_03d7116c(lVar6,0,0);
                    FUN_03d7116c(lVar6,1,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_01e999c0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  return;
}


