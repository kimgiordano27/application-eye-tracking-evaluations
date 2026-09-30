/*
FUNCTION_NAME: FUN_0369fdbc
ENTRY_POINT: 0369fdbc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0369fdbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  
  puVar3 = PTR_DAT_04230910;
  puVar2 = PTR_DAT_0422fb38;
  puVar1 = PTR_DAT_0422fb28;
  if ((DAT_0453863f & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fb38);
    FUN_01c5d288(PTR_DAT_0422fb40);
    FUN_01c5d288(PTR_DAT_0422fb48);
    FUN_01c5d288(PTR_DAT_0422fb50);
    FUN_01c5d288(Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<PenData>__)
    ;
    FUN_01c5d288(PTR_DAT_0422fb68);
    FUN_01c5d288(PTR_DAT_0422fb70);
    FUN_01c5d288(PTR_DAT_0422fb78);
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
                );
    FUN_01c5d288(PTR_DAT_0422fb80);
    FUN_01c5d288(PTR_DAT_0422fb88);
    FUN_01c5d288(PTR_DAT_0422fb90);
    FUN_01c5d288(System_MonoCustomAttrs_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb20);
    FUN_01c5d288(PTR_DAT_0422fbd0);
    FUN_01c5d288(Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__);
    FUN_01c5d288(Method_Newtonsoft_Json_Serialization_DefaultContractResolver_FilterMembers__);
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_GetAttributeConstructor__
                );
    FUN_01c5d288(Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__);
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                );
    FUN_01c5d288(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                );
    FUN_01c5d288(Method_System_Data_DataColumn_set_MaxLength__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_IInput>>__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<DefaultEventSystem>__
                );
    FUN_01c5d288(Method_System_Data_DataColumn_set_Namespace__);
    FUN_01c5d288(Method_System_Data_DataColumn_set_Prefix__);
    FUN_01c5d288(Method_System_Data_DataColumn_set_ReadOnly__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<EventModifiers,_Vector2>>__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<int,_int,_EventModifiers>>__
                );
    FUN_01c5d288(Method_System_Data_DataColumnCollection_AddAt__);
    FUN_01c5d288(Method_System_Net_Configuration_DefaultProxySection_Reset__);
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230910);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(PTR_DAT_0422fbe8);
    FUN_01c5d288(PTR_DAT_0422fbf0);
    FUN_01c5d288(PTR_DAT_0422fbf8);
    DAT_0453863f = 1;
  }
  plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,0x23);
  uVar7 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar1);
  }
  lVar5 = FUN_032e04b8(uVar7,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_036a08c8:
    uVar7 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar7,0);
  }
  puVar1 = PTR_DAT_0422fb48;
  puVar8 = (uint *)(plVar4 + 3);
  if (*puVar8 != 0) {
    plVar4[4] = lVar5;
    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_036a08c8;
    puVar1 = PTR_DAT_0422fb40;
    if (1 < *puVar8) {
      plVar4[5] = lVar5;
      lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_036a08c8;
      puVar1 = PTR_DAT_0422fb50;
      if (2 < *puVar8) {
        plVar4[6] = lVar5;
        lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_036a08c8;
        puVar1 = PTR_DAT_0422fb68;
        if (3 < *puVar8) {
          plVar4[7] = lVar5;
          lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_036a08c8;
          puVar1 = PTR_DAT_0422fb70;
          if (4 < *puVar8) {
            plVar4[8] = lVar5;
            lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_036a08c8;
            puVar1 = PTR_DAT_0422fb78;
            if (5 < *puVar8) {
              plVar4[9] = lVar5;
              lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
              goto LAB_036a08c8;
              puVar1 = 
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
              ;
              if (6 < *puVar8) {
                plVar4[10] = lVar5;
                lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                goto LAB_036a08c8;
                puVar1 = PTR_DAT_0422fb80;
                if (7 < *puVar8) {
                  plVar4[0xb] = lVar5;
                  lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)
                     ) goto LAB_036a08c8;
                  puVar1 = PTR_DAT_0422fb88;
                  if (8 < *puVar8) {
                    plVar4[0xc] = lVar5;
                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_036a08c8;
                    puVar1 = PTR_DAT_0422fb90;
                    if (9 < *puVar8) {
                      plVar4[0xd] = lVar5;
                      lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                      if ((lVar5 != 0) &&
                         (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar6 == 0)) goto LAB_036a08c8;
                      puVar1 = System_MonoCustomAttrs_TypeInfo;
                      if (10 < *puVar8) {
                        plVar4[0xe] = lVar5;
                        lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_036a08c8;
                        puVar1 = PTR_DAT_0422fb20;
                        if (0xb < *puVar8) {
                          plVar4[0xf] = lVar5;
                          lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar6 == 0)) goto LAB_036a08c8;
                          puVar1 = PTR_DAT_0422fbd0;
                          if (0xc < *puVar8) {
                            plVar4[0x10] = lVar5;
                            lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                               lVar6 == 0)) goto LAB_036a08c8;
                            puVar1 = PTR_DAT_0422fbe0;
                            if (0xd < *puVar8) {
                              plVar4[0x11] = lVar5;
                              lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                              if ((lVar5 != 0) &&
                                 (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)),
                                 lVar6 == 0)) goto LAB_036a08c8;
                              puVar1 = 
                              System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo;
                              if (0xe < *puVar8) {
                                plVar4[0x12] = lVar5;
                                lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar4 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_036a08c8;
                                puVar1 = PTR_DAT_0422fbe8;
                                if (0xf < *puVar8) {
                                  plVar4[0x13] = lVar5;
                                  lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                  if ((lVar5 != 0) &&
                                     (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                        (*plVar4 + 0x40)),
                                     lVar6 == 0)) goto LAB_036a08c8;
                                  puVar1 = PTR_DAT_0422fbf0;
                                  if (0x10 < *puVar8) {
                                    plVar4[0x14] = lVar5;
                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                    if ((lVar5 != 0) &&
                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                          (*plVar4 + 0x40)),
                                       lVar6 == 0)) goto LAB_036a08c8;
                                    puVar1 = PTR_DAT_0422fbf8;
                                    if (0x11 < *puVar8) {
                                      plVar4[0x15] = lVar5;
                                      lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                      if ((lVar5 != 0) &&
                                         (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                            (*plVar4 + 0x40)),
                                         lVar6 == 0)) goto LAB_036a08c8;
                                      puVar1 = Method_System_Data_DataColumn_set_Namespace__;
                                      if (0x12 < *puVar8) {
                                        plVar4[0x16] = lVar5;
                                        lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                        if ((lVar5 != 0) &&
                                           (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                              (*plVar4 + 0x40)),
                                           lVar6 == 0)) goto LAB_036a08c8;
                                        puVar1 = Method_System_Data_DataColumn_set_Prefix__;
                                        if (0x13 < *puVar8) {
                                          plVar4[0x17] = lVar5;
                                          lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                          if ((lVar5 != 0) &&
                                             (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                                (*plVar4 + 0x40)),
                                             lVar6 == 0)) goto LAB_036a08c8;
                                          puVar1 = Method_System_Data_DataColumn_set_ReadOnly__;
                                          if (0x14 < *puVar8) {
                                            plVar4[0x18] = lVar5;
                                            lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                            if ((lVar5 != 0) &&
                                               (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                                  (*plVar4 + 0x40)),
                                               lVar6 == 0)) goto LAB_036a08c8;
                                            puVar1 = Method_System_Data_DataColumn_set_MaxLength__;
                                            if (0x15 < *puVar8) {
                                              plVar4[0x19] = lVar5;
                                              lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                              if ((lVar5 != 0) &&
                                                 (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                                    (*plVar4 + 0x40)
                                                                            ), lVar6 == 0))
                                              goto LAB_036a08c8;
                                              puVar1 = 
                                              Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<int,_int,_EventModifiers>>__
                                              ;
                                              if (0x16 < *puVar8) {
                                                plVar4[0x1a] = lVar5;
                                                lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                if ((lVar5 != 0) &&
                                                   (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                                                      (*plVar4 +
                                                                                      0x40)),
                                                   lVar6 == 0)) goto LAB_036a08c8;
                                                puVar1 = 
                                                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_IInput>>__
                                                ;
                                                if (0x17 < *puVar8) {
                                                  plVar4[0x1b] = lVar5;
                                                  lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                  if ((lVar5 != 0) &&
                                                     (lVar6 = thunk_FUN_01c495e4(lVar5,*(undefined8
                                                                                         *)(*plVar4 
                                                  + 0x40)), lVar6 == 0)) goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_System_Data_DataColumnCollection_AddAt__;
                                                  if (0x18 < *puVar8) {
                                                    plVar4[0x1c] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_FilterMembers__
                                                  ;
                                                  if (0x19 < *puVar8) {
                                                    plVar4[0x1d] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__
                                                  ;
                                                  if (0x1a < *puVar8) {
                                                    plVar4[0x1e] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_GetAttributeConstructor__
                                                  ;
                                                  if (0x1b < *puVar8) {
                                                    plVar4[0x1f] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                                                  ;
                                                  if (0x1c < *puVar8) {
                                                    plVar4[0x20] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<DefaultEventSystem>__
                                                  ;
                                                  if (0x1d < *puVar8) {
                                                    plVar4[0x21] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<EventModifiers,_Vector2>>__
                                                  ;
                                                  if (0x1e < *puVar8) {
                                                    plVar4[0x22] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__
                                                  ;
                                                  if (0x1f < *puVar8) {
                                                    plVar4[0x23] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                                                  ;
                                                  if (0x20 < *puVar8) {
                                                    plVar4[0x24] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_System_Net_Configuration_DefaultProxySection_Reset__
                                                  ;
                                                  if (0x21 < *puVar8) {
                                                    plVar4[0x25] = lVar5;
                                                    lVar5 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                                                    if ((lVar5 != 0) &&
                                                       (lVar6 = thunk_FUN_01c495e4(lVar5,*(
                                                  undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
                                                  goto LAB_036a08c8;
                                                  puVar1 = 
                                                  Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<PenData>__
                                                  ;
                                                  if (0x22 < *puVar8) {
                                                    plVar4[0x26] = lVar5;
                                                    **(long **)(*(long *)puVar1 + 0xb8) =
                                                         (long)plVar4;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


