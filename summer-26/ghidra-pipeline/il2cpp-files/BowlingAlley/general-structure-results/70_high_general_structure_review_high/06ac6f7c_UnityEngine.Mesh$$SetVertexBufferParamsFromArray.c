/*
FUNCTION_NAME: UnityEngine.Mesh$$SetVertexBufferParamsFromArray
ENTRY_POINT: 06ac6f7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Mesh__SetVertexBufferParamsFromArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  int iVar10;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x88));
  thunk_FUN_032e1da0(
                    Method_Unity_VisualScripting_UnitConnection<ControlOutput,_ControlInput>__ctor__
                    );
  thunk_FUN_032e1da0(Method_Unity_VisualScripting_UnexpectedEnumValueException<MemberTypes>__ctor__)
  ;
  thunk_FUN_032e1da0(
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<DrawerAnchor>_set_defaultValue__
                    );
  thunk_FUN_032e1da0(
                    Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioDeactivation__
                    );
  thunk_FUN_032e1da0(
                    Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
                    );
  *(undefined1 *)(unaff_x22 + 0x19d) = 1;
  puVar1 = PTR_DAT_0727ac98;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0727ac98) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_06ac702c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_032937ac();
LAB_06ac702c:
    lVar6 = (*(code *)*puVar4)();
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
        return;
      }
      lVar6 = unaff_x20[0x17];
      if (lVar6 != 0) {
        iVar10 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar10) {
          FUN_05946274(*(undefined8 *)(lVar6 + 0x10),0,iVar10,0);
          lVar6 = unaff_x20[0x17];
        }
        lVar7 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_06ac70c4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac();
LAB_06ac70c4:
        uVar5 = (*(code *)*puVar4)();
        if (lVar6 != 0) {
          FUN_041e2e84(lVar6,uVar5,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_UnexpectedEnumValueException<Member_Source>__ctor__
                      );
          if ((unaff_x20[0x1a] != 0) &&
             (FUN_03d0aa14(unaff_x20[0x1a],
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_Invoke__
                          ), unaff_x21 != 0)) {
            if (0 < *(int *)(unaff_x21 + 0x18)) {
              FUN_041e3694(&stack0x00000008);
              puVar3 = 
              Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_AddListener__;
              puVar2 = 
              Method_Unity_VisualScripting_UnexpectedEnumValueException<BinaryOperator>__ctor__;
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              in_stack_00000030 = in_stack_00000018;
              while (uVar8 = FUN_052d44b4(&stack0x00000020,*(undefined8 *)puVar2), (uVar8 & 1) != 0)
              {
                if (unaff_x20[0x1a] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_03d0b564(unaff_x20[0x1a],in_stack_00000030,*(undefined8 *)puVar3);
              }
              FUN_052d44b0(&stack0x00000020,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_UQueryState<VisualElement>_RebuildOn__);
            }
            puVar3 = 
            Method_UnityEngine_Events_UnityEvent<XRHandJointsUpdatedEventArgs>_RemoveListener__;
            puVar2 = 
            Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioInputStateChange__
            ;
            lVar6 = unaff_x20[0x17];
            if (lVar6 != 0) {
              iVar10 = *(int *)(lVar6 + 0x18) + -1;
              if (iVar10 < 0) {
                return;
              }
              do {
                uVar5 = FUN_041e29a8(lVar6,iVar10,*(undefined8 *)puVar2);
                uVar8 = (**(code **)(*unaff_x20 + 0x238))();
                if ((uVar8 & 1) == 0) {
LAB_06ac7254:
                  FUN_06ac7310();
                }
                else {
                  lVar6 = *unaff_x19;
                  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                        goto LAB_06ac722c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_032937ac();
LAB_06ac722c:
                  uVar8 = (*(code *)*puVar4)();
                  if ((uVar8 & 1) == 0) {
                    if (unaff_x20[0x1a] == 0) break;
                    uVar8 = FUN_03d0aa74(unaff_x20[0x1a],uVar5,*(undefined8 *)puVar3);
                    if ((uVar8 & 1) == 0) goto LAB_06ac7254;
                  }
                }
                iVar10 = iVar10 + -1;
                if (iVar10 < 0) {
                  return;
                }
                lVar6 = unaff_x20[0x17];
              } while (lVar6 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


