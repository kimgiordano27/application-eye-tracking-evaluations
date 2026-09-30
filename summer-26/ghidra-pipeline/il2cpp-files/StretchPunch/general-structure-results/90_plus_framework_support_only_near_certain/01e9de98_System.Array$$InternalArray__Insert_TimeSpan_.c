/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<TimeSpan>
ENTRY_POINT: 01e9de98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array__InternalArray__Insert<TimeSpan>
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar9;
  long unaff_x24;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0xe68);
  plVar10 = *(long **)(unaff_x24 + 0x200);
  if ((*(byte *)(unaff_x20 + 0xdf4) & 1) == 0) {
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
    *(undefined1 *)(unaff_x20 + 0xdf4) = 1;
  }
  uVar2 = FUN_02091ba0(param_4,*puVar9);
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*plVar10);
  }
  uVar3 = FUN_03d749a8(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar2 = FUN_02146300(*(undefined8 *)
                        Field_OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData_root
                       ,*(undefined8 *)Field_OVRAnchor_Tracker_AsyncLock__tracker);
  if (*(int *)(*plVar10 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*plVar10);
  }
  uVar3 = FUN_03d755c0(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d415e0(*(undefined8 *)Field_OVRPlugin_Qpl_Annotation_Builder__entries,0);
    return;
  }
  lVar4 = FUN_03d71c60(param_4,0);
  if (lVar4 != 0) {
    uVar11 = FUN_03d7eda4(lVar4,0);
    if (DAT_044a2db9 == '\0') {
      FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField);
      DAT_044a2db9 = '\x01';
    }
    puVar8 = *(undefined4 **)
              (*(long *)Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField +
              0xb8);
    uVar15 = *puVar8;
    uVar14 = puVar8[1];
    uVar13 = puVar8[2];
    uVar12 = puVar8[3];
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar4 = FUN_02133c60(uVar11,param_2,param_3,uVar15,uVar14,uVar13,uVar12,uVar2,
                         *(undefined8 *)
                          Field_UnityEngine_XR_Interaction_Toolkit_AR_CommonTouch_m_EnhancedTouch);
    if ((lVar4 != 0) &&
       (lVar5 = FUN_020d7fa0(lVar4,*(undefined8 *)
                                    Field_UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_usages
                            ), lVar5 != 0)) {
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_4 + 0x30);
      thunk_FUN_01e10808((undefined8 *)(lVar5 + 0x28));
      *(undefined1 *)(lVar5 + 0x20) = *(undefined1 *)(param_4 + 0x38);
      lVar6 = FUN_020914e4(param_4,*(undefined8 *)Field_TMPro_FloatTween_m_Target);
      uVar3 = FUN_03d749a8(lVar6,0,0);
      if ((uVar3 & 1) != 0) {
        lVar7 = FUN_020d7fa0(lVar4,*(undefined8 *)Field_TMPro_ColorTween_m_Target);
        if ((lVar6 == 0) || (FUN_03dc225c(lVar6,0), lVar7 == 0))
        goto System_Array__InternalArray__Insert<ulong>;
        FUN_03dc2298(lVar7,0);
        FUN_03dc214c(lVar6,0);
        FUN_03dc2188(lVar7,0);
        FUN_03dc21d4(lVar6,0);
        FUN_03dc2210(lVar7,0);
        uVar1 = FUN_03dc22e4(lVar6,0);
        FUN_03dc2320(lVar7,uVar1 & 1,0);
        uVar1 = FUN_03dc2364(lVar6,0);
        FUN_03dc23a0(lVar7,uVar1 & 1,0);
        uVar12 = FUN_03dc2794(lVar6,0);
        FUN_03dc27d0(lVar7,uVar12,0);
        uVar12 = FUN_03dc24a8(lVar6,0);
        FUN_03dc24e4(lVar7,uVar12,0);
        uVar12 = FUN_03dc2428(lVar6,0);
        FUN_03dc2464(lVar7,uVar12,0);
        if (*(int *)(*plVar10 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_03d78bf0(lVar6,0);
      }
      lVar6 = FUN_03d71c60(param_4,0);
      if (lVar6 != 0) {
        FUN_03d7f688(lVar6,0,0);
        lVar6 = FUN_03d71c60(param_4,0);
        uVar2 = FUN_03d74af4(lVar4,0);
        if (lVar6 != 0) {
          FUN_03d7f688(lVar6,uVar2,0);
          lVar4 = FUN_020d7fa0(lVar4,*(undefined8 *)
                                      Field_UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_usages
                              );
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*plVar10);
          }
          uVar3 = FUN_03d749a8(lVar4,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          uVar2 = *(undefined8 *)(param_4 + 0x20);
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar3 = FUN_03d749a8(uVar2,0,0);
          if ((uVar3 & 1) != 0) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_4 + 0x20);
            thunk_FUN_01e10808();
            puVar9 = (undefined8 *)(lVar5 + 0x30);
            *puVar9 = *(undefined8 *)(param_4 + 0x20);
            thunk_FUN_01e10808(puVar9);
            uVar2 = *(undefined8 *)(param_4 + 0x28);
            if (*(int *)(*plVar10 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar3 = FUN_03d749a8(uVar2,0,0);
            if ((uVar3 & 1) != 0) {
              *puVar9 = *(undefined8 *)(param_4 + 0x28);
              thunk_FUN_01e10808(puVar9);
            }
          }
          if (lVar4 != 0) {
            lVar5 = *(long *)(lVar4 + 0x40);
            uVar2 = FUN_0209218c(param_4,*(undefined8 *)
                                          Field_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__debugInfo
                                );
            uVar2 = FUN_020c4750(uVar2,*(undefined8 *)
                                        Field_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_deviceMatcher
                                );
            if (lVar5 != 0) {
              FUN_0319917c(lVar5,uVar2,
                           *(undefined8 *)
                            Field_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__instruction
                          );
              FUN_03d7116c(lVar4,0,0);
              FUN_03d7116c(lVar4,1,0);
              return;
            }
          }
        }
      }
    }
  }
System_Array__InternalArray__Insert<ulong>:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


