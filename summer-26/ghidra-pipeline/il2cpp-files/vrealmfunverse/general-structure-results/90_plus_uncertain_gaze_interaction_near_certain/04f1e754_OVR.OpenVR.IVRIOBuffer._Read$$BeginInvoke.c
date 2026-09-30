/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._Read$$BeginInvoke
ENTRY_POINT: 04f1e754
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 164
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRIOBuffer__Read__BeginInvoke(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar8;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_02b3c81c(DG_Tweening_Core_DOSetter<float>_TypeInfo);
  FUN_02b3c81c(DG_Tweening_Core_DOSetter<string>_TypeInfo);
  FUN_02b3c81c(DG_Tweening_Core_DOSetter<Vector2>_TypeInfo);
  FUN_02b3c81c(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
  FUN_02b3c81c(DG_Tweening_Core_DOSetter<Vector4>_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_Input_DataModifier<BodyDataAsset>_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_Input_DataModifier<ControllerDataAsset>_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_Input_DataModifier<HandDataAsset>_TypeInfo);
  FUN_02b3c81c(Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Serialization_DataNode<byte[]>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Serialization_DataNode<bool>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Serialization_DataNode<byte>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Serialization_DataNode<char>_TypeInfo);
  FUN_02b3c81c(DG_Tweening_Core_DOSetter<Color2>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Serialization_DataNode<DateTime>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Serialization_DataNode<Decimal>_TypeInfo);
  FUN_02b3c81c(System_Runtime_Serialization_DataNode<double>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x8a9) = 1;
  lVar4 = FUN_02b3c908(*unaff_x23,5);
  uVar5 = FUN_02b3c908(*unaff_x22,3);
  FUN_04cac0f0(uVar5,*unaff_x20,0);
  puVar2 = DG_Tweening_Core_DOSetter<Quaternion>_TypeInfo;
  if (lVar4 == 0) goto LAB_04f1f01c;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20),uVar5);
    uVar5 = FUN_02b3c908(*unaff_x22,3);
    FUN_04cac0f0(uVar5,*(undefined8 *)puVar2,0);
    puVar2 = System_Runtime_Serialization_DataNode<char>_TypeInfo;
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x28),uVar5);
      uVar5 = FUN_02b3c908(*unaff_x22,3);
      FUN_04cac0f0(uVar5,*(undefined8 *)puVar2,0);
      puVar2 = System_Runtime_Serialization_DataNode<double>_TypeInfo;
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = uVar5;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x30),uVar5);
        uVar5 = FUN_02b3c908(*unaff_x22,3);
        FUN_04cac0f0(uVar5,*(undefined8 *)puVar2,0);
        puVar2 = DG_Tweening_Core_DOSetter<Vector4>_TypeInfo;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar4 + 0x38) = uVar5;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x38),uVar5);
          uVar5 = FUN_02b3c908(*unaff_x22,3);
          FUN_04cac0f0(uVar5,*(undefined8 *)puVar2,0);
          puVar3 = Oculus_Interaction_Input_DataModifier<HandDataAsset>_TypeInfo;
          puVar2 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
          if (4 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x40) = uVar5;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x40),uVar5);
            **(long **)(*(long *)puVar2 + 0xb8) = lVar4;
            thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar4);
            lVar4 = FUN_02b3c908(*unaff_x23,5);
            uVar5 = FUN_02b3c908(*unaff_x22,3);
            FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
            puVar3 = System_Runtime_Serialization_DataNode<byte[]>_TypeInfo;
            if (lVar4 == 0) goto LAB_04f1f01c;
            if (*(int *)(lVar4 + 0x18) != 0) {
              *(undefined8 *)(lVar4 + 0x20) = uVar5;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20),uVar5);
              uVar5 = FUN_02b3c908(*unaff_x22,3);
              FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
              puVar3 = Oculus_Interaction_Input_DataModifier<ControllerDataAsset>_TypeInfo;
              if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar4 + 0x28) = uVar5;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x28),uVar5);
                uVar5 = FUN_02b3c908(*unaff_x22,3);
                FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                puVar3 = System_Runtime_Serialization_DataNode<bool>_TypeInfo;
                if (2 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x30) = uVar5;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x30),uVar5);
                  uVar5 = FUN_02b3c908(*unaff_x22,3);
                  FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                  puVar3 = System_Runtime_Serialization_DataNode<byte>_TypeInfo;
                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar4 + 0x38) = uVar5;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x38),uVar5);
                    uVar5 = FUN_02b3c908(*unaff_x22,3);
                    FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                    puVar3 = Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo;
                    if (4 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x40) = uVar5;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x40),uVar5);
                      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                      *plVar6 = lVar4;
                      thunk_FUN_02bb0e9c(plVar6,lVar4);
                      lVar4 = FUN_02b3c908(*unaff_x23,5);
                      uVar5 = FUN_02b3c908(*unaff_x22,4);
                      FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                      puVar3 = DG_Tweening_Core_DOSetter<string>_TypeInfo;
                      if (lVar4 == 0) goto LAB_04f1f01c;
                      if (*(int *)(lVar4 + 0x18) != 0) {
                        *(undefined8 *)(lVar4 + 0x20) = uVar5;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20),uVar5);
                        uVar5 = FUN_02b3c908(*unaff_x22,4);
                        FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                        puVar3 = System_Runtime_Serialization_DataNode<Decimal>_TypeInfo;
                        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar4 + 0x28) = uVar5;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x28),uVar5);
                          uVar5 = FUN_02b3c908(*unaff_x22,4);
                          FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                          puVar3 = DG_Tweening_Core_DOSetter<Vector2>_TypeInfo;
                          if (2 < *(uint *)(lVar4 + 0x18)) {
                            *(undefined8 *)(lVar4 + 0x30) = uVar5;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x30),uVar5);
                            uVar5 = FUN_02b3c908(*unaff_x22,4);
                            FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                            puVar3 = DG_Tweening_Core_DOSetter<int>_TypeInfo;
                            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar4 + 0x38) = uVar5;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x38),uVar5);
                              lVar8 = *(long *)puVar3;
                              lVar7 = *(long *)(lVar8 + 0x38);
                              if (lVar7 == 0) {
                                FUN_02b76274(lVar8);
                                lVar7 = *(long *)(lVar8 + 0x38);
                              }
                              lVar7 = *(long *)(lVar7 + 0x10);
                              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                                lVar7 = FUN_02b76218();
                              }
                              if (*(int *)(lVar7 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                              }
                              lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                                lVar7 = FUN_02b76218();
                              }
                              if (4 < *(uint *)(lVar4 + 0x18)) {
                                *(undefined8 *)(lVar4 + 0x40) = **(undefined8 **)(lVar7 + 0xb8);
                                thunk_FUN_02bb0e9c();
                                plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                                *plVar6 = lVar4;
                                thunk_FUN_02bb0e9c(plVar6,lVar4);
                                lVar4 = FUN_02b3c908(*unaff_x23,5);
                                lVar8 = *(long *)puVar3;
                                lVar7 = *(long *)(lVar8 + 0x38);
                                if (lVar7 == 0) {
                                  FUN_02b76274(lVar8);
                                  lVar7 = *(long *)(lVar8 + 0x38);
                                }
                                lVar7 = *(long *)(lVar7 + 0x10);
                                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                                  lVar7 = FUN_02b76218();
                                }
                                if (*(int *)(lVar7 + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                }
                                lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                                  lVar7 = FUN_02b76218();
                                }
                                if (lVar4 == 0) {
LAB_04f1f01c:
                    /* WARNING: Subroutine does not return */
                                  FUN_02b3cac4();
                                }
                                if (*(int *)(lVar4 + 0x18) != 0) {
                                  *(undefined8 *)(lVar4 + 0x20) = **(undefined8 **)(lVar7 + 0xb8);
                                  thunk_FUN_02bb0e9c();
                                  lVar7 = FUN_02b3c908(*unaff_x22,2);
                                  if (lVar7 == 0) goto LAB_04f1f01c;
                                  if ((*(int *)(lVar7 + 0x18) != 0) &&
                                     (*(undefined4 *)(lVar7 + 0x20) = 5, *(int *)(lVar7 + 0x18) != 1
                                     )) {
                                    *(undefined4 *)(lVar7 + 0x24) = 10;
                                    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                      *(long *)(lVar4 + 0x28) = lVar7;
                                      thunk_FUN_02bb0e9c();
                                      lVar7 = FUN_02b3c908(*unaff_x22,2);
                                      if (lVar7 == 0) goto LAB_04f1f01c;
                                      if ((*(int *)(lVar7 + 0x18) != 0) &&
                                         (*(undefined4 *)(lVar7 + 0x20) = 5,
                                         *(int *)(lVar7 + 0x18) != 1)) {
                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                        *(undefined4 *)(lVar7 + 0x24) = 0xf;
                                        if (2 < uVar1) {
                                          *(long *)(lVar4 + 0x30) = lVar7;
                                          thunk_FUN_02bb0e9c();
                                          lVar7 = FUN_02b3c908(*unaff_x22,2);
                                          if (lVar7 == 0) goto LAB_04f1f01c;
                                          if ((*(int *)(lVar7 + 0x18) != 0) &&
                                             (*(undefined4 *)(lVar7 + 0x20) = 5,
                                             *(int *)(lVar7 + 0x18) != 1)) {
                                            *(undefined4 *)(lVar7 + 0x24) = 0x14;
                                            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                                              *(long *)(lVar4 + 0x38) = lVar7;
                                              thunk_FUN_02bb0e9c();
                                              lVar7 = FUN_02b3c908(*unaff_x22,2);
                                              if (lVar7 == 0) goto LAB_04f1f01c;
                                              if ((*(int *)(lVar7 + 0x18) != 0) &&
                                                 (*(undefined4 *)(lVar7 + 0x20) = 5,
                                                 *(int *)(lVar7 + 0x18) != 1)) {
                                                uVar1 = *(uint *)(lVar4 + 0x18);
                                                *(undefined4 *)(lVar7 + 0x24) = 0x19;
                                                puVar3 = DG_Tweening_Core_DOSetter<Rect>_TypeInfo;
                                                if (4 < uVar1) {
                                                  *(long *)(lVar4 + 0x40) = lVar7;
                                                  thunk_FUN_02bb0e9c();
                                                  plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 0x18);
                                                  *plVar6 = lVar4;
                                                  thunk_FUN_02bb0e9c(plVar6,lVar4);
                                                  lVar4 = FUN_02b3c908(*unaff_x23,5);
                                                  uVar5 = FUN_02b3c908(*unaff_x22,4);
                                                  FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                                                  puVar3 = 
                                                  Oculus_Interaction_Input_DataModifier<BodyDataAsset>_TypeInfo
                                                  ;
                                                  if (lVar4 == 0) goto LAB_04f1f01c;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x20) = uVar5;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20),
                                                                       uVar5);
                                                    uVar5 = FUN_02b3c908(*unaff_x22,4);
                                                    FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                                                    puVar3 = 
                                                  System_Runtime_Serialization_DataNode<DateTime>_TypeInfo
                                                  ;
                                                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x28) = uVar5;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x28),
                                                                       uVar5);
                                                    uVar5 = FUN_02b3c908(*unaff_x22,4);
                                                    FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                                                    puVar3 = 
                                                  DG_Tweening_Core_DOSetter<Vector3>_TypeInfo;
                                                  if (2 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x30) = uVar5;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x30),
                                                                       uVar5);
                                                    uVar5 = FUN_02b3c908(*unaff_x22,4);
                                                    FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                                                    puVar3 = 
                                                  DG_Tweening_Core_DOSetter<float>_TypeInfo;
                                                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x38) = uVar5;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x38),
                                                                       uVar5);
                                                    uVar5 = FUN_02b3c908(*unaff_x22,4);
                                                    FUN_04cac0f0(uVar5,*(undefined8 *)puVar3,0);
                                                    if (4 < *(uint *)(lVar4 + 0x18)) {
                                                      *(undefined8 *)(lVar4 + 0x40) = uVar5;
                                                      thunk_FUN_02bb0e9c((undefined8 *)
                                                                         (lVar4 + 0x40),uVar5);
                                                      plVar6 = (long *)(*(long *)(*(long *)puVar2 +
                                                                                 0xb8) + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar4);
                                                      return;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


