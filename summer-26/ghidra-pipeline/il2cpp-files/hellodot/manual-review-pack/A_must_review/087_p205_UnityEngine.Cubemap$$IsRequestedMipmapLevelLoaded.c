/*
FUNCTION_NAME: UnityEngine.Cubemap$$IsRequestedMipmapLevelLoaded
ENTRY_POINT: 05ddc6e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Cubemap__IsRequestedMipmapLevelLoaded(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8918);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<Expression>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<Guid>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<HandJointId>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<IDisposable>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<IInteractor>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06610a88);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c87d8);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8668);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum
            (System_Collections_Generic_IReadOnlyCollection<Pose>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xfba) = 1;
  lVar7 = FUN_02ce7ad4(*unaff_x20,0x16);
  puVar2 = PTR_DAT_065c8668;
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_065c8668;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      if (uVar1 != 1) {
        *(undefined8 *)(lVar7 + 0x30) =
             *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Instruction>_TypeInfo;
        *(undefined8 *)(lVar7 + 0x38) = 1;
        if (2 < uVar1) {
          *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_065c87d8;
          *(undefined8 *)(lVar7 + 0x48) = 2;
          if (uVar1 != 3) {
            *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)PTR_DAT_06610a88;
            *(undefined8 *)(lVar7 + 0x58) = 2;
            if (4 < uVar1) {
              *(undefined8 *)(lVar7 + 0x60) =
                   *(undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo;
              *(undefined8 *)(lVar7 + 0x68) = 1;
              if (uVar1 != 5) {
                *(undefined8 *)(lVar7 + 0x70) =
                     *(undefined8 *)
                      System_Collections_Generic_IReadOnlyCollection<IInteractor>_TypeInfo;
                *(undefined8 *)(lVar7 + 0x78) = 1;
                if (6 < uVar1) {
                  *(undefined8 *)(lVar7 + 0x80) =
                       *(undefined8 *)
                        System_Collections_Generic_IReadOnlyCollection<IDisposable>_TypeInfo;
                  *(undefined8 *)(lVar7 + 0x88) = 1;
                  if (uVar1 != 7) {
                    *(undefined8 *)(lVar7 + 0x90) =
                         *(undefined8 *)
                          System_Collections_Generic_IReadOnlyCollection<Pose>_TypeInfo;
                    *(undefined8 *)(lVar7 + 0x98) = 1;
                    if (8 < uVar1) {
                      *(undefined8 *)(lVar7 + 0xa0) =
                           *(undefined8 *)
                            System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo
                      ;
                      *(undefined8 *)(lVar7 + 0xa8) = 1;
                      if (uVar1 != 9) {
                        *(undefined8 *)(lVar7 + 0xb0) =
                             *(undefined8 *)
                              System_Collections_Generic_IReadOnlyCollection<HandJointId>_TypeInfo;
                        *(undefined8 *)(lVar7 + 0xb8) = 1;
                        if (10 < uVar1) {
                          *(undefined8 *)(lVar7 + 0xc0) =
                               *(undefined8 *)
                                System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo
                          ;
                          *(undefined8 *)(lVar7 + 200) = 1;
                          if (uVar1 != 0xb) {
                            *(undefined8 *)(lVar7 + 0xd0) =
                                 *(undefined8 *)
                                  System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo;
                            *(undefined8 *)(lVar7 + 0xd8) = 1;
                            if (0xc < uVar1) {
                              *(undefined8 *)(lVar7 + 0xe0) =
                                   *(undefined8 *)
                                    System_Collections_Generic_IReadOnlyCollection<Guid>_TypeInfo;
                              *(undefined8 *)(lVar7 + 0xe8) = 1;
                              if (uVar1 != 0xd) {
                                *(undefined8 *)(lVar7 + 0xf0) =
                                     *(undefined8 *)
                                      System_Collections_Generic_IReadOnlyCollection<Expression>_TypeInfo
                                ;
                                *(undefined8 *)(lVar7 + 0xf8) = 1;
                                puVar5 = 
                                System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo
                                ;
                                if (0xe < uVar1) {
                                  *(undefined8 *)(lVar7 + 0x100) =
                                       *(undefined8 *)
                                        System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo
                                  ;
                                  *(undefined8 *)(lVar7 + 0x108) = 3;
                                  if (uVar1 != 0xf) {
                                    *(undefined8 *)(lVar7 + 0x110) = *(undefined8 *)puVar5;
                                    *(undefined8 *)(lVar7 + 0x118) = 4;
                                    if (0x10 < uVar1) {
                                      *(undefined8 *)(lVar7 + 0x120) = *(undefined8 *)puVar5;
                                      *(undefined8 *)(lVar7 + 0x128) = 5;
                                      if (uVar1 != 0x11) {
                                        *(undefined8 *)(lVar7 + 0x130) = *(undefined8 *)puVar5;
                                        *(undefined8 *)(lVar7 + 0x138) = 6;
                                        puVar6 = 
                                        System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                        ;
                                        if (0x12 < uVar1) {
                                          *(undefined8 *)(lVar7 + 0x140) =
                                               *(undefined8 *)
                                                System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                          ;
                                          *(undefined8 *)(lVar7 + 0x148) = 3;
                                          if (uVar1 != 0x13) {
                                            *(undefined8 *)(lVar7 + 0x150) = *(undefined8 *)puVar6;
                                            *(undefined8 *)(lVar7 + 0x158) = 4;
                                            if (0x14 < uVar1) {
                                              *(undefined8 *)(lVar7 + 0x160) = *(undefined8 *)puVar6
                                              ;
                                              *(undefined8 *)(lVar7 + 0x168) = 5;
                                              puVar4 = System_Func<string,_InternedString>_TypeInfo;
                                              if (uVar1 != 0x15) {
                                                *(undefined8 *)(lVar7 + 0x170) =
                                                     *(undefined8 *)puVar6;
                                                *(undefined8 *)(lVar7 + 0x178) = 6;
                                                puVar3 = PTR_DAT_065c8918;
                                                **(long **)(*(long *)puVar4 + 0xb8) = lVar7;
                                                lVar7 = FUN_02ce7ad4(*(undefined8 *)puVar3,3);
                                                if (lVar7 == 0) goto LAB_05ddca7c;
                                                uVar1 = *(uint *)(lVar7 + 0x18);
                                                if (((uVar1 != 0) &&
                                                    (*(undefined8 *)(lVar7 + 0x20) =
                                                          *(undefined8 *)puVar2, uVar1 != 1)) &&
                                                   (*(undefined8 *)(lVar7 + 0x28) =
                                                         *(undefined8 *)puVar5, 2 < uVar1)) {
                                                  *(undefined8 *)(lVar7 + 0x30) =
                                                       *(undefined8 *)puVar6;
                                                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) =
                                                       lVar7;
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
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_05ddca7c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


