/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<HashSet.Slot<OVRAnchor.FilterUnion>>
ENTRY_POINT: 01e99578
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


void System_Array__InternalArray__Insert<HashSet_Slot<OVRAnchor_FilterUnion>>
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar8;
  long *unaff_x24;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  thunk_FUN_01dc4f30();
  uVar2 = FUN_03d755c0();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d415e0(*(undefined8 *)Field_OVRPlugin_Qpl_Annotation_Builder__entries,0);
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + 1;
    FUN_01e99e60();
    if ((unaff_x19 != 0) && (lVar3 = FUN_03d71c60(), lVar3 != 0)) {
      uVar9 = FUN_03d7eda4(lVar3,0);
      if (DAT_044a2db9 == '\0') {
        FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField);
        DAT_044a2db9 = '\x01';
      }
      puVar7 = *(undefined4 **)
                (*(long *)Field_UnityEngine_XR_ARFoundation_ARRaycastHit_<trackable>k__BackingField
                + 0xb8);
      uVar13 = *puVar7;
      uVar12 = puVar7[1];
      uVar11 = puVar7[2];
      uVar10 = puVar7[3];
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar3 = FUN_02133c60(uVar9,param_2,param_3,uVar13,uVar12,uVar11,uVar10);
      if ((lVar3 != 0) &&
         (lVar4 = FUN_020d7fa0(lVar3,*(undefined8 *)
                                      Field_UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_usages
                              ), lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0x30);
        thunk_FUN_01e10808((undefined8 *)(lVar4 + 0x28));
        *(undefined1 *)(lVar4 + 0x20) = *(undefined1 *)(unaff_x19 + 0x38);
        lVar5 = FUN_020914e4();
        uVar2 = FUN_03d749a8(lVar5,0,0);
        if ((uVar2 & 1) != 0) {
          lVar6 = FUN_020d7fa0(lVar3,*(undefined8 *)Field_TMPro_ColorTween_m_Target);
          if ((lVar5 == 0) || (FUN_03dc225c(lVar5,0), lVar6 == 0)) goto LAB_01e999c0;
          FUN_03dc2298(lVar6,0);
          FUN_03dc214c(lVar5,0);
          FUN_03dc2188(lVar6,0);
          FUN_03dc21d4(lVar5,0);
          FUN_03dc2210(lVar6,0);
          uVar1 = FUN_03dc22e4(lVar5,0);
          FUN_03dc2320(lVar6,uVar1 & 1,0);
          uVar1 = FUN_03dc2364(lVar5,0);
          FUN_03dc23a0(lVar6,uVar1 & 1,0);
          uVar10 = FUN_03dc2794(lVar5,0);
          FUN_03dc27d0(lVar6,uVar10,0);
          uVar10 = FUN_03dc24a8(lVar5,0);
          FUN_03dc24e4(lVar6,uVar10,0);
          uVar10 = FUN_03dc2428(lVar5,0);
          FUN_03dc2464(lVar6,uVar10,0);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_03d78bf0(lVar5,0);
        }
        lVar5 = FUN_03d71c60();
        if (lVar5 != 0) {
          FUN_03d7f688(lVar5,0,0);
          lVar5 = FUN_03d71c60();
          uVar9 = FUN_03d74af4(lVar3,0);
          if (lVar5 != 0) {
            FUN_03d7f688(lVar5,uVar9,0);
            lVar3 = FUN_020d7fa0(lVar3,*(undefined8 *)
                                        Field_UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_usages
                                );
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*unaff_x24);
            }
            uVar2 = FUN_03d749a8(lVar3,0,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar2 = FUN_03d749a8(uVar9,0,0);
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(unaff_x19 + 0x20);
              thunk_FUN_01e10808();
              puVar8 = (undefined8 *)(lVar4 + 0x30);
              *puVar8 = *(undefined8 *)(unaff_x19 + 0x20);
              thunk_FUN_01e10808(puVar8);
              uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
              if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar2 = FUN_03d749a8(uVar9,0,0);
              if ((uVar2 & 1) != 0) {
                *puVar8 = *(undefined8 *)(unaff_x19 + 0x28);
                thunk_FUN_01e10808(puVar8);
              }
            }
            if (lVar3 != 0) {
              lVar4 = *(long *)(lVar3 + 0x40);
              uVar9 = FUN_0209218c();
              uVar9 = FUN_020c4750(uVar9,*(undefined8 *)
                                          Field_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_deviceMatcher
                                  );
              if (lVar4 != 0) {
                FUN_0319917c(lVar4,uVar9,
                             *(undefined8 *)
                              Field_System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView__instruction
                            );
                FUN_03d7116c(lVar3,0,0);
                FUN_03d7116c(lVar3,1,0);
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


