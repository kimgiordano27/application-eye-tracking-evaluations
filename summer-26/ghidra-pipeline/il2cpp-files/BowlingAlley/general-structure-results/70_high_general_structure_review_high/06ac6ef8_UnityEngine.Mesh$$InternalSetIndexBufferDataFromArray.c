/*
FUNCTION_NAME: UnityEngine.Mesh$$InternalSetIndexBufferDataFromArray
ENTRY_POINT: 06ac6ef8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Mesh__InternalSetIndexBufferDataFromArray(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_076e319d & 1) == 0) {
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_UQueryState<VisualElement>_RebuildOn__);
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnexpectedEnumValueException<BinaryOperator>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnexpectedEnumValueException<GraphSource>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_AddListener__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_Invoke__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_RemoveListener__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727ac98);
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnexpectedEnumValueException<Member_Source>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnitConnection<ControlOutput,_ControlInput>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnexpectedEnumValueException<MemberTypes>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<DrawerAnchor>_set_defaultValue__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioDeactivation__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
                      );
    DAT_076e319d = 1;
  }
  puVar1 = PTR_DAT_0727ac98;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0727ac98) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_06ac702c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac(param_2,*(long *)PTR_DAT_0727ac98,2);
LAB_06ac702c:
    lVar7 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
        return;
      }
      lVar7 = param_1[0x17];
      if (lVar7 != 0) {
        iVar11 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar11) {
          FUN_05946274(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
          lVar7 = param_1[0x17];
        }
        lVar8 = *param_2;
        lVar6 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_06ac70c4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac(param_2,lVar6,2);
LAB_06ac70c4:
        uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (lVar7 != 0) {
          FUN_041e2e84(lVar7,uVar5,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_UnexpectedEnumValueException<Member_Source>__ctor__
                      );
          if ((param_1[0x1a] != 0) &&
             (FUN_03d0aa14(param_1[0x1a],
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_Invoke__
                          ), param_3 != 0)) {
            if (0 < *(int *)(param_3 + 0x18)) {
              FUN_041e3694(&local_78,param_3,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_UnexpectedEnumValueException<MemberTypes>__ctor__
                          );
              puVar3 = 
              Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_AddListener__;
              puVar2 = 
              Method_Unity_VisualScripting_UnexpectedEnumValueException<BinaryOperator>__ctor__;
              uStack_58 = uStack_70;
              local_60 = local_78;
              local_50 = local_68;
              while (uVar9 = FUN_052d44b4(&local_60,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
                if (param_1[0x1a] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_03d0b564(param_1[0x1a],local_50,*(undefined8 *)puVar3);
              }
              FUN_052d44b0(&local_60,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UQueryState<VisualElement>_RebuildOn__);
            }
            puVar3 = 
            Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_RemoveListener__;
            puVar2 = 
            Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
            ;
            lVar7 = param_1[0x17];
            if (lVar7 != 0) {
              iVar11 = *(int *)(lVar7 + 0x18) + -1;
              if (iVar11 < 0) {
                return;
              }
              do {
                uVar5 = FUN_041e29a8(lVar7,iVar11,*(undefined8 *)puVar2);
                uVar9 = (**(code **)(*param_1 + 0x238))
                                  (param_1,param_2,uVar5,*(undefined8 *)(*param_1 + 0x240));
                if ((uVar9 & 1) == 0) {
LAB_06ac7254:
                  FUN_06ac7310(param_1,param_2,uVar5);
                }
                else {
                  lVar6 = *param_2;
                  lVar7 = *(long *)puVar1;
                  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == lVar7) {
                        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                        goto LAB_06ac722c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_032937ac(param_2,lVar7,6);
LAB_06ac722c:
                  uVar9 = (*(code *)*puVar4)(param_2,puVar4[1]);
                  if ((uVar9 & 1) == 0) {
                    if (param_1[0x1a] == 0) break;
                    uVar9 = FUN_03d0aa74(param_1[0x1a],uVar5,*(undefined8 *)puVar3);
                    if ((uVar9 & 1) == 0) goto LAB_06ac7254;
                  }
                }
                iVar11 = iVar11 + -1;
                if (iVar11 < 0) {
                  return;
                }
                lVar7 = param_1[0x17];
              } while (lVar7 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


