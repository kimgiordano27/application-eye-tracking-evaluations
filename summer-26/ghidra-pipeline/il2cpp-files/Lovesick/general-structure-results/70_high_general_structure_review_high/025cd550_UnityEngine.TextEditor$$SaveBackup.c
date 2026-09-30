/*
FUNCTION_NAME: UnityEngine.TextEditor$$SaveBackup
ENTRY_POINT: 025cd550
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_TextEditor__SaveBackup(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  
  puVar3 = Method_System_Collections_Generic_List<Edge>_Clear__;
  if ((DAT_03783168 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Edge>_Clear__);
    thunk_FUN_00d48444(System_Predicate<Collider>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(PTR_DAT_033f0e38);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<ISerializationPolicy,_IFormatter>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<IEventDispatchingStrategy>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_ArrayUtility_AddOrAppend<int,_SimpleTuple<FaceRebuildData,_List<int>>>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<LocomotionSystem>__);
    thunk_FUN_00d48444(System_Xml_XmlTextWriter_TagInfo___TypeInfo);
    thunk_FUN_00d48444(Method_RCG_Lovesick_ControllerMapping_TeleportRighReleased__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__);
    thunk_FUN_00d48444(StringLiteral_6792);
    thunk_FUN_00d48444(PTR_DAT_033eced8);
    thunk_FUN_00d48444(StringLiteral_7555);
    thunk_FUN_00d48444(PTR_DAT_033f2ff8);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<PlatformInitialize>_OnComplete__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<BranchLabel>_MoveNext__);
    thunk_FUN_00d48444(StringLiteral_12728);
    DAT_03783168 = 1;
  }
  lVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,0x16);
  puVar3 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if (lVar6 == 0) {
LAB_025cd970:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar9 = *(uint *)(lVar6 + 0x18);
  if (uVar9 != 0) {
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    if (uVar9 != 1) {
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)StringLiteral_7555;
      *(undefined8 *)(lVar6 + 0x38) = 1;
      if (2 < uVar9) {
        *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_033eced8;
        *(undefined8 *)(lVar6 + 0x48) = 2;
        if (uVar9 != 3) {
          *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)StringLiteral_6792;
          *(undefined8 *)(lVar6 + 0x58) = 2;
          if (4 < uVar9) {
            *(undefined8 *)(lVar6 + 0x60) =
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponentInParent<LocomotionSystem>__;
            *(undefined8 *)(lVar6 + 0x68) = 1;
            if (uVar9 != 5) {
              *(undefined8 *)(lVar6 + 0x70) =
                   *(undefined8 *)Method_RCG_Lovesick_ControllerMapping_TeleportRighReleased__;
              *(undefined8 *)(lVar6 + 0x78) = 1;
              if (6 < uVar9) {
                *(undefined8 *)(lVar6 + 0x80) =
                     *(undefined8 *)System_Xml_XmlTextWriter_TagInfo___TypeInfo;
                *(undefined8 *)(lVar6 + 0x88) = 1;
                if (uVar9 != 7) {
                  *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)StringLiteral_12728;
                  *(undefined8 *)(lVar6 + 0x98) = 1;
                  if (8 < uVar9) {
                    *(undefined8 *)(lVar6 + 0xa0) =
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<BranchLabel>_MoveNext__;
                    *(undefined8 *)(lVar6 + 0xa8) = 1;
                    if (uVar9 != 9) {
                      *(undefined8 *)(lVar6 + 0xb0) =
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<IEventDispatchingStrategy>_GetEnumerator__
                      ;
                      *(undefined8 *)(lVar6 + 0xb8) = 1;
                      if (10 < uVar9) {
                        *(undefined8 *)(lVar6 + 0xc0) =
                             *(undefined8 *)
                              Method_Oculus_Platform_Request<PlatformInitialize>_OnComplete__;
                        *(undefined8 *)(lVar6 + 200) = 1;
                        if (uVar9 != 0xb) {
                          *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)PTR_DAT_033f2ff8;
                          *(undefined8 *)(lVar6 + 0xd8) = 1;
                          if (0xc < uVar9) {
                            *(undefined8 *)(lVar6 + 0xe0) =
                                 *(undefined8 *)
                                  System_Collections_Generic_Dictionary<ISerializationPolicy,_IFormatter>_TypeInfo
                            ;
                            *(undefined8 *)(lVar6 + 0xe8) = 1;
                            if (uVar9 != 0xd) {
                              *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)PTR_DAT_033f0e38;
                              *(undefined8 *)(lVar6 + 0xf8) = 1;
                              puVar5 = 
                              Method_UnityEngine_ProBuilder_ArrayUtility_AddOrAppend<int,_SimpleTuple<FaceRebuildData,_List<int>>>__
                              ;
                              if (0xe < uVar9) {
                                *(undefined8 *)(lVar6 + 0x100) =
                                     *(undefined8 *)
                                      Method_UnityEngine_ProBuilder_ArrayUtility_AddOrAppend<int,_SimpleTuple<FaceRebuildData,_List<int>>>__
                                ;
                                *(undefined8 *)(lVar6 + 0x108) = 3;
                                if (uVar9 != 0xf) {
                                  *(undefined8 *)(lVar6 + 0x110) = *(undefined8 *)puVar5;
                                  *(undefined8 *)(lVar6 + 0x118) = 4;
                                  if (0x10 < uVar9) {
                                    *(undefined8 *)(lVar6 + 0x120) = *(undefined8 *)puVar5;
                                    *(undefined8 *)(lVar6 + 0x128) = 5;
                                    if (uVar9 != 0x11) {
                                      *(undefined8 *)(lVar6 + 0x130) = *(undefined8 *)puVar5;
                                      *(undefined8 *)(lVar6 + 0x138) = 6;
                                      puVar4 = 
                                      Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__
                                      ;
                                      if (0x12 < uVar9) {
                                        *(undefined8 *)(lVar6 + 0x140) =
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_LinkedList<WebConnection>_AddFirst__
                                        ;
                                        *(undefined8 *)(lVar6 + 0x148) = 3;
                                        if (uVar9 != 0x13) {
                                          *(undefined8 *)(lVar6 + 0x150) = *(undefined8 *)puVar4;
                                          *(undefined8 *)(lVar6 + 0x158) = 4;
                                          if (0x14 < uVar9) {
                                            *(undefined8 *)(lVar6 + 0x160) = *(undefined8 *)puVar4;
                                            *(undefined8 *)(lVar6 + 0x168) = 5;
                                            puVar2 = System_Predicate<Collider>_TypeInfo;
                                            if (uVar9 != 0x15) {
                                              *(undefined8 *)(lVar6 + 0x170) = *(undefined8 *)puVar4
                                              ;
                                              *(undefined8 *)(lVar6 + 0x178) = 6;
                                              puVar1 = PTR_DAT_033ea8a0;
                                              **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
                                              plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,3)
                                              ;
                                              if (plVar7 == (long *)0x0) goto LAB_025cd970;
                                              lVar6 = *(long *)puVar3;
                                              if ((lVar6 != 0) &&
                                                 (lVar6 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)
                                                                                    (*plVar7 + 0x40)
                                                                            ), lVar6 == 0)) {
LAB_025cd974:
                                                uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                FUN_00da5038(uVar8,0);
                                              }
                                              uVar9 = *(uint *)(plVar7 + 3);
                                              if (uVar9 != 0) {
                                                plVar7[4] = *(long *)puVar3;
                                                if (*(long *)puVar5 != 0) {
                                                  lVar6 = thunk_FUN_00d6225c(*(long *)puVar5,
                                                                             *(undefined8 *)
                                                                              (*plVar7 + 0x40));
                                                  if (lVar6 == 0) goto LAB_025cd974;
                                                  uVar9 = *(uint *)(plVar7 + 3);
                                                }
                                                if (1 < uVar9) {
                                                  plVar7[5] = *(long *)puVar5;
                                                  if (*(long *)puVar4 != 0) {
                                                    lVar6 = thunk_FUN_00d6225c(*(long *)puVar4,
                                                                               *(undefined8 *)
                                                                                (*plVar7 + 0x40));
                                                    if (lVar6 == 0) goto LAB_025cd974;
                                                    uVar9 = *(uint *)(plVar7 + 3);
                                                  }
                                                  if (2 < uVar9) {
                                                    plVar7[6] = *(long *)puVar4;
                                                    *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 8
                                                              ) = plVar7;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


