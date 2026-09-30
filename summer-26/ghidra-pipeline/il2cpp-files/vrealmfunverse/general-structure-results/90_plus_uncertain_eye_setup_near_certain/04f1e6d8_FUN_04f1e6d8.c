/*
FUNCTION_NAME: FUN_04f1e6d8
ENTRY_POINT: 04f1e6d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04f1e6d8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = DG_Tweening_Core_DOSetter<Color2>_TypeInfo;
  puVar4 = DG_Tweening_Core_DOSetter<Color>_TypeInfo;
  puVar2 = System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo;
  if ((DAT_066c98a9 & 1) == 0) {
    FUN_02b3c81c(DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_02b3c81c(DG_Tweening_Core_DOSetter<Color>_TypeInfo);
    FUN_02b3c81c(System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo);
    FUN_02b3c81c(DG_Tweening_Core_DOSetter<Quaternion>_TypeInfo);
    FUN_02b3c81c(DG_Tweening_Core_DOSetter<Rect>_TypeInfo);
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
    DAT_066c98a9 = 1;
  }
  lVar6 = FUN_02b3c908(*(undefined8 *)puVar4,5);
  uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
  FUN_04cac0f0(uVar7,*(undefined8 *)puVar3,0);
  puVar3 = DG_Tweening_Core_DOSetter<Quaternion>_TypeInfo;
  if (lVar6 == 0) goto LAB_04f1f01c;
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(undefined8 *)(lVar6 + 0x20) = uVar7;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20),uVar7);
    uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
    FUN_04cac0f0(uVar7,*(undefined8 *)puVar3,0);
    puVar3 = System_Runtime_Serialization_DataNode<char>_TypeInfo;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x28),uVar7);
      uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
      FUN_04cac0f0(uVar7,*(undefined8 *)puVar3,0);
      puVar3 = System_Runtime_Serialization_DataNode<double>_TypeInfo;
      if (2 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x30) = uVar7;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x30),uVar7);
        uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
        FUN_04cac0f0(uVar7,*(undefined8 *)puVar3,0);
        puVar3 = DG_Tweening_Core_DOSetter<Vector4>_TypeInfo;
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar6 + 0x38) = uVar7;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x38),uVar7);
          uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
          FUN_04cac0f0(uVar7,*(undefined8 *)puVar3,0);
          puVar5 = Oculus_Interaction_Input_DataModifier<HandDataAsset>_TypeInfo;
          puVar3 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
          if (4 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x40) = uVar7;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x40),uVar7);
            **(long **)(*(long *)puVar3 + 0xb8) = lVar6;
            thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar6);
            lVar6 = FUN_02b3c908(*(undefined8 *)puVar4,5);
            uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
            FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
            puVar5 = System_Runtime_Serialization_DataNode<byte[]>_TypeInfo;
            if (lVar6 == 0) goto LAB_04f1f01c;
            if (*(int *)(lVar6 + 0x18) != 0) {
              *(undefined8 *)(lVar6 + 0x20) = uVar7;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20),uVar7);
              uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
              FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
              puVar5 = Oculus_Interaction_Input_DataModifier<ControllerDataAsset>_TypeInfo;
              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar6 + 0x28) = uVar7;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x28),uVar7);
                uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
                FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                puVar5 = System_Runtime_Serialization_DataNode<bool>_TypeInfo;
                if (2 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x30) = uVar7;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x30),uVar7);
                  uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
                  FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                  puVar5 = System_Runtime_Serialization_DataNode<byte>_TypeInfo;
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar6 + 0x38) = uVar7;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x38),uVar7);
                    uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,3);
                    FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                    puVar5 = Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo;
                    if (4 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x40) = uVar7;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x40),uVar7);
                      plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                      *plVar8 = lVar6;
                      thunk_FUN_02bb0e9c(plVar8,lVar6);
                      lVar6 = FUN_02b3c908(*(undefined8 *)puVar4,5);
                      uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                      FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                      puVar5 = DG_Tweening_Core_DOSetter<string>_TypeInfo;
                      if (lVar6 == 0) goto LAB_04f1f01c;
                      if (*(int *)(lVar6 + 0x18) != 0) {
                        *(undefined8 *)(lVar6 + 0x20) = uVar7;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20),uVar7);
                        uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                        FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                        puVar5 = System_Runtime_Serialization_DataNode<Decimal>_TypeInfo;
                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar6 + 0x28) = uVar7;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x28),uVar7);
                          uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                          FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                          puVar5 = DG_Tweening_Core_DOSetter<Vector2>_TypeInfo;
                          if (2 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x30) = uVar7;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x30),uVar7);
                            uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                            FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                            puVar5 = DG_Tweening_Core_DOSetter<int>_TypeInfo;
                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar6 + 0x38) = uVar7;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x38),uVar7);
                              lVar10 = *(long *)puVar5;
                              lVar9 = *(long *)(lVar10 + 0x38);
                              if (lVar9 == 0) {
                                FUN_02b76274(lVar10);
                                lVar9 = *(long *)(lVar10 + 0x38);
                              }
                              lVar9 = *(long *)(lVar9 + 0x10);
                              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                                lVar9 = FUN_02b76218();
                              }
                              if (*(int *)(lVar9 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                              }
                              lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                              if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                                lVar9 = FUN_02b76218();
                              }
                              if (4 < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x40) = **(undefined8 **)(lVar9 + 0xb8);
                                thunk_FUN_02bb0e9c();
                                plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                                *plVar8 = lVar6;
                                thunk_FUN_02bb0e9c(plVar8,lVar6);
                                lVar6 = FUN_02b3c908(*(undefined8 *)puVar4,5);
                                lVar10 = *(long *)puVar5;
                                lVar9 = *(long *)(lVar10 + 0x38);
                                if (lVar9 == 0) {
                                  FUN_02b76274(lVar10);
                                  lVar9 = *(long *)(lVar10 + 0x38);
                                }
                                lVar9 = *(long *)(lVar9 + 0x10);
                                if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                                  lVar9 = FUN_02b76218();
                                }
                                if (*(int *)(lVar9 + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                }
                                lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                                if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
                                  lVar9 = FUN_02b76218();
                                }
                                if (lVar6 == 0) {
LAB_04f1f01c:
                    /* WARNING: Subroutine does not return */
                                  FUN_02b3cac4();
                                }
                                if (*(int *)(lVar6 + 0x18) != 0) {
                                  *(undefined8 *)(lVar6 + 0x20) = **(undefined8 **)(lVar9 + 0xb8);
                                  thunk_FUN_02bb0e9c();
                                  lVar9 = FUN_02b3c908(*(undefined8 *)puVar2,2);
                                  if (lVar9 == 0) goto LAB_04f1f01c;
                                  if ((*(int *)(lVar9 + 0x18) != 0) &&
                                     (*(undefined4 *)(lVar9 + 0x20) = 5, *(int *)(lVar9 + 0x18) != 1
                                     )) {
                                    *(undefined4 *)(lVar9 + 0x24) = 10;
                                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                                      *(long *)(lVar6 + 0x28) = lVar9;
                                      thunk_FUN_02bb0e9c();
                                      lVar9 = FUN_02b3c908(*(undefined8 *)puVar2,2);
                                      if (lVar9 == 0) goto LAB_04f1f01c;
                                      if ((*(int *)(lVar9 + 0x18) != 0) &&
                                         (*(undefined4 *)(lVar9 + 0x20) = 5,
                                         *(int *)(lVar9 + 0x18) != 1)) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        *(undefined4 *)(lVar9 + 0x24) = 0xf;
                                        if (2 < uVar1) {
                                          *(long *)(lVar6 + 0x30) = lVar9;
                                          thunk_FUN_02bb0e9c();
                                          lVar9 = FUN_02b3c908(*(undefined8 *)puVar2,2);
                                          if (lVar9 == 0) goto LAB_04f1f01c;
                                          if ((*(int *)(lVar9 + 0x18) != 0) &&
                                             (*(undefined4 *)(lVar9 + 0x20) = 5,
                                             *(int *)(lVar9 + 0x18) != 1)) {
                                            *(undefined4 *)(lVar9 + 0x24) = 0x14;
                                            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                                              *(long *)(lVar6 + 0x38) = lVar9;
                                              thunk_FUN_02bb0e9c();
                                              lVar9 = FUN_02b3c908(*(undefined8 *)puVar2,2);
                                              if (lVar9 == 0) goto LAB_04f1f01c;
                                              if ((*(int *)(lVar9 + 0x18) != 0) &&
                                                 (*(undefined4 *)(lVar9 + 0x20) = 5,
                                                 *(int *)(lVar9 + 0x18) != 1)) {
                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                *(undefined4 *)(lVar9 + 0x24) = 0x19;
                                                puVar5 = DG_Tweening_Core_DOSetter<Rect>_TypeInfo;
                                                if (4 < uVar1) {
                                                  *(long *)(lVar6 + 0x40) = lVar9;
                                                  thunk_FUN_02bb0e9c();
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8
                                                                             ) + 0x18);
                                                  *plVar8 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar8,lVar6);
                                                  lVar6 = FUN_02b3c908(*(undefined8 *)puVar4,5);
                                                  uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                                                  FUN_04cac0f0(uVar7,*(undefined8 *)puVar5,0);
                                                  puVar4 = 
                                                  Oculus_Interaction_Input_DataModifier<BodyDataAsset>_TypeInfo
                                                  ;
                                                  if (lVar6 == 0) goto LAB_04f1f01c;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) = uVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20),
                                                                       uVar7);
                                                    uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                                                    FUN_04cac0f0(uVar7,*(undefined8 *)puVar4,0);
                                                    puVar4 = 
                                                  System_Runtime_Serialization_DataNode<DateTime>_TypeInfo
                                                  ;
                                                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x28) = uVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x28),
                                                                       uVar7);
                                                    uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                                                    FUN_04cac0f0(uVar7,*(undefined8 *)puVar4,0);
                                                    puVar4 = 
                                                  DG_Tweening_Core_DOSetter<Vector3>_TypeInfo;
                                                  if (2 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x30) = uVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x30),
                                                                       uVar7);
                                                    uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                                                    FUN_04cac0f0(uVar7,*(undefined8 *)puVar4,0);
                                                    puVar4 = 
                                                  DG_Tweening_Core_DOSetter<float>_TypeInfo;
                                                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x38) = uVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x38),
                                                                       uVar7);
                                                    uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,4);
                                                    FUN_04cac0f0(uVar7,*(undefined8 *)puVar4,0);
                                                    if (4 < *(uint *)(lVar6 + 0x18)) {
                                                      *(undefined8 *)(lVar6 + 0x40) = uVar7;
                                                      thunk_FUN_02bb0e9c((undefined8 *)
                                                                         (lVar6 + 0x40),uVar7);
                                                      plVar8 = (long *)(*(long *)(*(long *)puVar3 +
                                                                                 0xb8) + 0x20);
                                                      *plVar8 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar6);
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


