/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<HashSet.Slot<ulong>>
ENTRY_POINT: 01e994e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array__InternalArray__Insert<HashSet_Slot<ulong>>
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long *unaff_x24;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(param_1);
  }
  uVar2 = FUN_03d749a8();
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_02091ba0();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*unaff_x24);
    }
    uVar2 = UnityEngine_UIElements_UIR_TextureSlotManager__get_FreeSlots(lVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = FUN_02146300(*(undefined8 *)
                            Field_OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData_root
                           ,*(undefined8 *)Field_OVRAnchor_Tracker_AsyncLock__tracker);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x24);
      }
      uVar2 = FUN_03d755c0(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_03d415e0(*(undefined8 *)Field_OVRPlugin_Qpl_Annotation_Builder__entries,0);
        return;
      }
      lVar5 = *(long *)(unaff_x20 + 0x20);
      if (lVar5 != 0) {
        *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
        FUN_01e99e60();
        if ((lVar3 != 0) && (lVar5 = FUN_03d71c60(lVar3,0), lVar5 != 0)) {
          uVar11 = FUN_03d7eda4(lVar5,0);
          if (DAT_044a2db9 == '\0') {
            FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField);
            DAT_044a2db9 = '\x01';
          }
          puVar9 = *(undefined4 **)
                    (*(long *)
                      Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField +
                    0xb8);
          uVar15 = *puVar9;
          uVar14 = puVar9[1];
          uVar13 = puVar9[2];
          uVar12 = puVar9[3];
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar5 = FUN_02133c60(uVar11,param_3,param_4,uVar15,uVar14,uVar13,uVar12,uVar4,
                               *(undefined8 *)
                                Field_UnityEngine_XR_Interaction_Toolkit_AR_CommonTouch_m_EnhancedTouch
                              );
          if ((lVar5 != 0) &&
             (lVar6 = FUN_020d7fa0(lVar5,*(undefined8 *)
                                          Field_UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_usages
                                  ), lVar6 != 0)) {
            *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar3 + 0x30);
            thunk_FUN_01e10808((undefined8 *)(lVar6 + 0x28));
            *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(lVar3 + 0x38);
            lVar7 = FUN_020914e4(lVar3,*(undefined8 *)Field_TMPro_FloatTween_m_Target);
            uVar2 = FUN_03d749a8(lVar7,0,0);
            if ((uVar2 & 1) != 0) {
              lVar8 = FUN_020d7fa0(lVar5,*(undefined8 *)Field_TMPro_ColorTween_m_Target);
              if ((lVar7 == 0) || (FUN_03dc225c(lVar7,0), lVar8 == 0)) goto LAB_01e999c0;
              FUN_03dc2298(lVar8,0);
              FUN_03dc214c(lVar7,0);
              FUN_03dc2188(lVar8,0);
              FUN_03dc21d4(lVar7,0);
              FUN_03dc2210(lVar8,0);
              uVar1 = FUN_03dc22e4(lVar7,0);
              FUN_03dc2320(lVar8,uVar1 & 1,0);
              uVar1 = FUN_03dc2364(lVar7,0);
              FUN_03dc23a0(lVar8,uVar1 & 1,0);
              uVar12 = FUN_03dc2794(lVar7,0);
              FUN_03dc27d0(lVar8,uVar12,0);
              uVar12 = FUN_03dc24a8(lVar7,0);
              FUN_03dc24e4(lVar8,uVar12,0);
              uVar12 = FUN_03dc2428(lVar7,0);
              FUN_03dc2464(lVar8,uVar12,0);
              if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              FUN_03d78bf0(lVar7,0);
            }
            lVar7 = FUN_03d71c60(lVar3,0);
            if (lVar7 != 0) {
              FUN_03d7f688(lVar7,0,0);
              lVar7 = FUN_03d71c60(lVar3,0);
              uVar4 = FUN_03d74af4(lVar5,0);
              if (lVar7 != 0) {
                FUN_03d7f688(lVar7,uVar4,0);
                lVar5 = FUN_020d7fa0(lVar5,*(undefined8 *)
                                            Field_UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_usages
                                    );
                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*unaff_x24);
                }
                uVar2 = FUN_03d749a8(lVar5,0,0);
                if ((uVar2 & 1) == 0) {
                  return;
                }
                uVar4 = *(undefined8 *)(lVar3 + 0x20);
                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar2 = FUN_03d749a8(uVar4,0,0);
                if ((uVar2 & 1) != 0) {
                  *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar3 + 0x20);
                  thunk_FUN_01e10808();
                  puVar10 = (undefined8 *)(lVar6 + 0x30);
                  *puVar10 = *(undefined8 *)(lVar3 + 0x20);
                  thunk_FUN_01e10808(puVar10);
                  uVar4 = *(undefined8 *)(lVar3 + 0x28);
                  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30();
                  }
                  uVar2 = FUN_03d749a8(uVar4,0,0);
                  if ((uVar2 & 1) != 0) {
                    *puVar10 = *(undefined8 *)(lVar3 + 0x28);
                    thunk_FUN_01e10808(puVar10);
                  }
                }
                if (lVar5 != 0) {
                  lVar6 = *(long *)(lVar5 + 0x40);
                  uVar4 = FUN_0209218c(lVar3,*(undefined8 *)
                                              Field_System_Linq_Expressions_Interpreter_InterpretedFrameInfo__debugInfo
                                      );
                  uVar4 = FUN_020c4750(uVar4,*(undefined8 *)
                                              Field_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_deviceMatcher
                                      );
                  if (lVar6 != 0) {
                    FUN_0319917c(lVar6,uVar4,
                                 *(undefined8 *)
                                  Field_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__instruction
                                );
                    FUN_03d7116c(lVar5,0,0);
                    FUN_03d7116c(lVar5,1,0);
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


