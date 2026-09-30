/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializationReader$$ReadNullableString
ENTRY_POINT: 0573cfe4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_10;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0573dcbc) */
/* WARNING: Removing unreachable block (ram,0x0573e3fc) */
/* WARNING: Removing unreachable block (ram,0x0573df0c) */
/* WARNING: Removing unreachable block (ram,0x0573da4c) */
/* WARNING: Removing unreachable block (ram,0x0573e17c) */
/* WARNING: Removing unreachable block (ram,0x0573ef48) */
/* WARNING: Removing unreachable block (ram,0x0573e64c) */
/* WARNING: Removing unreachable block (ram,0x0573ef58) */

void System_Xml_Serialization_XmlSerializationReader__ReadNullableString(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  int *piVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  int iVar20;
  
  FUN_02f08768();
  FUN_02f08768(
              Method_System_Collections_Generic_List_Enumerator<KeyValuePair<TrackableId,_ARPlane>>_MoveNext__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TryGetValue__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_ContainsKey__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TryGetValue__
              );
  FUN_02f08768(
              Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_Clear__
              );
  FUN_02f08768(
              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<XRInputModalityManager_InputMode>_set_Value__
              );
  *(undefined1 *)(unaff_x23 + 0x82c) = 1;
  if (unaff_x19 == 0) goto LAB_0573eee0;
  if (*(char *)(unaff_x19 + 0x30) != '\0') {
    return;
  }
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    plVar11 = *(long **)(unaff_x20 + 0x10);
    if (plVar11 == (long *)0x0) goto LAB_0573eee0;
    lVar12 = (**(code **)(*plVar11 + 0x1a8))
                       (plVar11,*(long *)(unaff_x19 + 0x48),*(undefined8 *)(*plVar11 + 0x1b0));
    *(long *)(unaff_x19 + 0x48) = lVar12;
    if (lVar12 == 0) goto LAB_0573eee0;
    if (*(int *)(lVar12 + 0x10) == 0) {
      FUN_058572c8();
    }
    else {
      if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0581ee5c(lVar12,0);
    }
  }
  lVar12 = *(long *)(unaff_x19 + 0x50);
  if (lVar12 != 0) {
    if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0581b388(lVar12,0);
  }
  if (unaff_w22 == 2) {
    uVar13 = FUN_04f6dc3c();
joined_r0x0573d1bc:
    if ((uVar13 & 1) != 0) {
      FUN_05857408();
    }
  }
  else if (unaff_w22 == 1) {
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar13 = FUN_04f6dc3c();
      goto joined_r0x0573d1bc;
    }
  }
  else if (unaff_w22 == 0) {
    lVar17 = *(long *)(unaff_x19 + 0x48);
    lVar12 = lVar17;
    if (((unaff_x21 != 0) && (lVar12 = unaff_x21, lVar17 == 0)) &&
       (lVar12 = 0, *(int *)(unaff_x21 + 0x10) != 0)) {
      lVar12 = unaff_x21;
    }
    uVar13 = FUN_04f6dc3c(lVar12,lVar17,0);
    unaff_x21 = lVar12;
    goto joined_r0x0573d1bc;
  }
  puVar8 = 
  Method_System_Collections_Generic_List_Enumerator<KeyValuePair<TrackableId,_ARPlane>>_Dispose__;
  puVar5 = Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__;
  puVar3 = Oculus_Interaction_MAction<PokeInteractor>_TypeInfo;
  lVar12 = *(long *)(unaff_x19 + 0x58);
  if (lVar12 != 0) {
    iVar20 = 0;
    while (iVar9 = FUN_05079c6c(lVar12,0), iVar20 < iVar9) {
      plVar11 = *(long **)(unaff_x19 + 0x58);
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                      (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310)),
         plVar11 == (long *)0x0)) goto LAB_0573eee0;
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__ +
                       0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__))
      goto LAB_0573ef40;
      plVar11[5] = unaff_x19;
      FUN_0573f55c(plVar11,plVar11);
      lVar12 = plVar11[7];
      if (lVar12 == 0) {
        lVar12 = *plVar11;
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                         + 0x130);
        if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
           )) {
          bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
          if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8))
          goto LAB_0573d2d0;
        }
        if (plVar11[9] == 0) {
          FUN_05857240();
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_0581ee5c(lVar12,0);
      }
LAB_0573d2d0:
      lVar12 = *plVar11;
      bVar1 = *(byte *)(lVar12 + 0x130);
      if (plVar11[9] == 0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if (((bVar2 <= bVar1) &&
            (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) &&
           (lVar12 = plVar11[0xd], lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x10) == 0) {
            FUN_05857240();
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_0581ee5c(lVar12,0);
          }
        }
      }
      else {
        bVar2 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)
             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
           )) {
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((bVar2 <= bVar1) &&
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) {
            if (((plVar11[0xd] == 0) && (*(long *)(unaff_x19 + 0x48) == 0)) ||
               (uVar13 = thunk_FUN_04f6d944(plVar11[0xd],*(undefined8 *)(unaff_x19 + 0x48),0),
               (uVar13 & 1) != 0)) {
              FUN_058572c8();
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
LAB_0573ef40:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar11);
            }
          }
        }
        FUN_0573ce9c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x58);
      iVar20 = iVar20 + 1;
      if (lVar12 == 0) goto LAB_0573eee0;
    }
    FUN_0573f350();
    if (unaff_x21 == 0) {
      unaff_x21 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
    }
    if (unaff_x20 != 0) {
      *(long *)(unaff_x20 + 0x48) = unaff_x21;
      uVar18 = *(uint *)(unaff_x19 + 0x3c);
      if (uVar18 != 0xff) {
        if (uVar18 == 0x100) {
          uVar18 = 0;
        }
        else {
          if (7 < uVar18) {
            FUN_058572c8();
            uVar18 = *(uint *)(unaff_x19 + 0x3c);
          }
          uVar18 = uVar18 & 7;
        }
      }
      *(uint *)(unaff_x20 + 0x5c) = uVar18;
      uVar18 = *(uint *)(unaff_x19 + 0x40);
      if (uVar18 != 0xff) {
        if (uVar18 == 0x100) {
          uVar18 = 0;
        }
        else {
          if ((uVar18 & 0xffffffe1) != 0) {
            FUN_058572c8();
            uVar18 = *(uint *)(unaff_x19 + 0x40);
          }
          uVar18 = uVar18 & 0x1e;
        }
      }
      *(uint *)(unaff_x20 + 0x60) = uVar18;
      iVar20 = 2;
      if (*(int *)(unaff_x19 + 0x38) != 0) {
        iVar20 = *(int *)(unaff_x19 + 0x38);
      }
      *(int *)(unaff_x20 + 0x54) = iVar20;
      iVar20 = 2;
      if (*(int *)(unaff_x19 + 0x34) != 0) {
        iVar20 = *(int *)(unaff_x19 + 0x34);
      }
      *(int *)(unaff_x20 + 0x58) = iVar20;
      puVar8 = 
      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
      ;
      puVar5 = 
      Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
      ;
      puVar3 = PTR_DAT_067c91b8;
      lVar12 = *(long *)(unaff_x19 + 0x58);
      if (lVar12 != 0) {
        iVar20 = 0;
        goto LAB_0573d690;
      }
    }
  }
LAB_0573eee0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_0573d690:
  iVar9 = FUN_05079c6c(lVar12,0);
  if (iVar20 < iVar9) {
    plVar11 = *(long **)(unaff_x19 + 0x58);
    if ((plVar11 != (long *)0x0) &&
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310)),
       plVar11 != (long *)0x0)) {
      bVar1 = *(byte *)(*plVar11 + 0x130);
      bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__ +
                       0x130);
      if ((bVar1 < bVar2) ||
         (lVar12 = *(long *)(*plVar11 + 200),
         *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) !=
         *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar11);
      }
      bVar2 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
                       + 0x130);
      if ((bVar2 <= bVar1) &&
         (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) ==
          *(long *)
           Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
         )) {
        if (plVar11[9] == 0) {
          lVar12 = plVar11[0xd];
          if (lVar12 == 0) goto LAB_0573eee0;
          iVar9 = 0;
          while (iVar10 = FUN_05079c6c(lVar12,0), iVar9 < iVar10) {
            plVar15 = (long *)plVar11[0xd];
            if (plVar15 == (long *)0x0) goto LAB_0573eee0;
            plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                        (plVar15,iVar9,*(undefined8 *)(*plVar15 + 0x310));
            if (plVar15 == (long *)0x0) {
LAB_0573d7b8:
              FUN_058572c8();
              break;
            }
            bVar1 = *(byte *)(*(long *)
                               Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__ +
                             0x130);
            if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__))
            goto LAB_0573d7b8;
            lVar12 = plVar11[0xd];
            iVar9 = iVar9 + 1;
            if (lVar12 == 0) goto LAB_0573eee0;
          }
        }
        else {
          FUN_0573f630();
        }
      }
      lVar12 = plVar11[9];
      if (lVar12 == 0) goto LAB_0573e650;
      lVar17 = FUN_0576a064(lVar12,0);
      if ((lVar17 != 0) &&
         (plVar11 = (long *)FUN_05772310(lVar17,0),
         puVar4 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__,
         plVar11 != (long *)0x0)) {
        lVar17 = *plVar11;
        uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar13 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067cb558) {
              puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0573d85c;
            }
            uVar13 = uVar13 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067cb558,0);
LAB_0573d85c:
        plVar11 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
        do {
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar17 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar13 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0573d8d0;
              }
              uVar13 = uVar13 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_0573d8d0:
          uVar13 = (*(code *)*puVar14)(plVar11,puVar14[1]);
          if ((uVar13 & 1) == 0) goto LAB_0573d9b0;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar17 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar13 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar14 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0573d938;
              }
              uVar13 = uVar13 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,1);
LAB_0573d938:
          plVar15 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
          if (plVar15 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar15);
            }
          }
          uVar16 = FUN_0576a064();
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8(uVar16,uVar16);
          }
          FUN_05856a70();
        } while( true );
      }
    }
  }
  else {
    lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                               );
    FUN_03abf108(lVar12,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    puVar6 = 
    Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
    ;
    puVar4 = 
    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
    ;
    puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
    lVar17 = *(long *)(unaff_x19 + 0x60);
    if (lVar17 != 0) {
      iVar20 = 0;
      goto LAB_0573e8e0;
    }
  }
  goto LAB_0573eee0;
LAB_0573d9b0:
  plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar11 != (long *)0x0) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573da34;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c91b0,0);
LAB_0573da34:
    (*(code *)*puVar14)(plVar11,puVar14[1]);
  }
  lVar17 = FUN_05769f38(lVar12,0);
  if ((lVar17 != 0) &&
     (plVar11 = (long *)FUN_05772310(lVar17,0),
     puVar4 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__,
     plVar11 != (long *)0x0)) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573dacc;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067cb558,0);
LAB_0573dacc:
    plVar11 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0573db40;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_0573db40:
      uVar13 = (*(code *)*puVar14)(plVar11,puVar14[1]);
      if ((uVar13 & 1) == 0) goto LAB_0573dc20;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0573dba8;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,1);
LAB_0573dba8:
      plVar15 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar15);
        }
      }
      uVar16 = FUN_05769f38();
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar16,uVar16);
      }
      FUN_05856a70();
    } while( true );
  }
  goto LAB_0573eee0;
LAB_0573dc20:
  plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar11 != (long *)0x0) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573dca4;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c91b0,0);
LAB_0573dca4:
    (*(code *)*puVar14)(plVar11,puVar14[1]);
  }
  if ((*(long *)(lVar12 + 0xa0) != 0) &&
     (plVar11 = (long *)FUN_05772310(*(long *)(lVar12 + 0xa0),0), plVar11 != (long *)0x0)) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573dd30;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067cb558,0);
LAB_0573dd30:
    plVar11 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0573dda4;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_0573dda4:
      uVar13 = (*(code *)*puVar14)(plVar11,puVar14[1]);
      if ((uVar13 & 1) == 0) goto LAB_0573de70;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0573de0c;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,1);
LAB_0573de0c:
      plVar15 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar15);
      }
      FUN_05856a70();
    } while( true );
  }
  goto LAB_0573eee0;
LAB_0573de70:
  plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar11 != (long *)0x0) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573def4;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c91b0,0);
LAB_0573def4:
    (*(code *)*puVar14)(plVar11,puVar14[1]);
  }
  lVar17 = FUN_05769f9c(lVar12,0);
  if ((lVar17 != 0) &&
     (plVar11 = (long *)FUN_05772310(lVar17,0),
     puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__,
     plVar11 != (long *)0x0)) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573df8c;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067cb558,0);
LAB_0573df8c:
    plVar11 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0573e000;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_0573e000:
      uVar13 = (*(code *)*puVar14)(plVar11,puVar14[1]);
      if ((uVar13 & 1) == 0) goto LAB_0573e0e0;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0573e068;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,1);
LAB_0573e068:
      plVar15 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar15);
        }
      }
      uVar16 = FUN_05769f9c();
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8(uVar16,uVar16);
      }
      FUN_05856a70();
    } while( true );
  }
  goto LAB_0573eee0;
LAB_0573e0e0:
  plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar11 != (long *)0x0) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573e164;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c91b0,0);
LAB_0573e164:
    (*(code *)*puVar14)(plVar11,puVar14[1]);
  }
  lVar17 = FUN_0576a000(lVar12,0);
  if ((lVar17 != 0) &&
     (plVar11 = (long *)FUN_05772310(lVar17,0),
     puVar4 = Method_UnityEngine_UIElements_BaseField<string>_OnViewDataReady__,
     plVar11 != (long *)0x0)) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto System_Xml_Serialization_XmlSerializationReader__ReadReferencingElement;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067cb558,0);
System_Xml_Serialization_XmlSerializationReader__ReadReferencingElement:
    plVar11 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0573e270;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_0573e270:
      uVar13 = (*(code *)*puVar14)(plVar11,puVar14[1]);
      if ((uVar13 & 1) == 0) goto LAB_0573e360;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar17 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0573e2d8;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,1);
LAB_0573e2d8:
      plVar15 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar15);
        }
      }
      FUN_0576a000();
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0577ac88(plVar15,0);
      FUN_05856a70();
    } while( true );
  }
  goto LAB_0573eee0;
LAB_0573e360:
  plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar11 != (long *)0x0) {
    lVar17 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573e3e4;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c91b0,0);
LAB_0573e3e4:
    (*(code *)*puVar14)(plVar11,puVar14[1]);
  }
  if ((*(long *)(lVar12 + 0xa8) != 0) &&
     (plVar11 = (long *)FUN_05772310(*(long *)(lVar12 + 0xa8),0), plVar11 != (long *)0x0)) {
    lVar12 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067cb558) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573e470;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067cb558,0);
LAB_0573e470:
    plVar11 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0573e4e4;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,0);
LAB_0573e4e4:
      uVar13 = (*(code *)*puVar14)(plVar11,puVar14[1]);
      if ((uVar13 & 1) == 0) goto LAB_0573e5b0;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar11;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar14 = (undefined8 *)(lVar12 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0573e54c;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar3,1);
LAB_0573e54c:
      plVar15 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar15);
      }
      FUN_05856a70();
    } while( true );
  }
  goto LAB_0573eee0;
LAB_0573e5b0:
  plVar11 = (long *)thunk_FUN_02f45174(plVar11,*(undefined8 *)PTR_DAT_067c91b0);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0573e634;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c91b0,0);
LAB_0573e634:
    (*(code *)*puVar14)(plVar11,puVar14[1]);
  }
LAB_0573e650:
  FUN_0573cc40();
  lVar12 = *(long *)(unaff_x19 + 0x58);
  iVar20 = iVar20 + 1;
  if (lVar12 == 0) goto LAB_0573eee0;
  goto LAB_0573d690;
LAB_0573e8e0:
  iVar9 = FUN_05079c6c(lVar17,0);
  puVar7 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (iVar9 <= iVar20) {
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) < 1) goto LAB_0573ef38;
      iVar20 = 0;
      while( true ) {
        lVar17 = *(long *)(unaff_x19 + 0x60);
        uVar16 = FUN_03abf644(lVar12,iVar20,*(undefined8 *)puVar7);
        if (lVar17 == 0) break;
        FUN_0577173c(lVar17,uVar16,0);
        iVar20 = iVar20 + 1;
        if (*(int *)(lVar12 + 0x18) <= iVar20) {
LAB_0573ef38:
          *(undefined1 *)(unaff_x19 + 0x30) = 0;
          return;
        }
      }
    }
    goto LAB_0573eee0;
  }
  plVar11 = *(long **)(unaff_x19 + 0x60);
  if ((plVar11 == (long *)0x0) ||
     (lVar17 = (**(code **)(*plVar11 + 0x308))(plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310)),
     lVar17 == 0)) goto LAB_0573eee0;
  *(long *)(lVar17 + 0x28) = unaff_x19;
  plVar11 = *(long **)(unaff_x19 + 0x60);
  if (plVar11 == (long *)0x0) goto LAB_0573eee0;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                              (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
  if (plVar11 == (long *)0x0) {
LAB_0573e96c:
    plVar11 = *(long **)(unaff_x19 + 0x60);
    if (plVar11 == (long *)0x0) goto LAB_0573eee0;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__
                       + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__))
      goto LAB_0573e9c0;
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 != (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__ +
                           0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__))
          goto LAB_0573ef60;
        }
        FUN_057407ec();
        FUN_05769f9c();
joined_r0x0573ee10:
        if (plVar11 != (long *)0x0) goto LAB_0573eec4;
      }
      goto LAB_0573eee0;
    }
LAB_0573e9c0:
    plVar11 = *(long **)(unaff_x19 + 0x60);
    if (plVar11 == (long *)0x0) goto LAB_0573eee0;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 == (long *)0x0) {
LAB_0573ea0c:
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar17 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar17 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == lVar17)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 != (long *)0x0) {
              lVar17 = *(long *)puVar4;
              bVar1 = *(byte *)(lVar17 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar17))
              goto LAB_0573ef60;
            }
            FUN_0574114c();
            goto LAB_0573ed5c;
          }
          goto LAB_0573eee0;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__
                         + 0x130);
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_0573ef60;
            }
            FUN_05741704();
            FUN_0576a064();
            goto joined_r0x0573ee10;
          }
          goto LAB_0573eee0;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 == (long *)0x0) {
              FUN_0574194c();
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
LAB_0573ef60:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar11);
            }
            FUN_0574194c();
            goto LAB_0573eec4;
          }
          goto LAB_0573eee0;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar8)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            uVar16 = (**(code **)(*plVar11 + 0x308))
                               (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
            plVar11 = (long *)FUN_02a7e998(uVar16,*(undefined8 *)puVar8);
            FUN_05741b0c();
            goto joined_r0x0573ee10;
          }
          goto LAB_0573eee0;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__ +
                         0x130);
        if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__))
        goto LAB_0573eed4;
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      (**(code **)(*plVar11 + 0x308))(plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
      FUN_058572c8();
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if ((plVar11 == (long *)0x0) ||
         (uVar16 = (**(code **)(*plVar11 + 0x308))(plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310))
         , lVar12 == 0)) goto LAB_0573eee0;
      FUN_02e441a0(lVar12,uVar16,*(undefined8 *)puVar6);
    }
    else {
      lVar17 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar17 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar17))
      goto LAB_0573ea0c;
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar20,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar17 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar17 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar17))
        goto LAB_0573ef60;
      }
      FUN_057408e0();
LAB_0573ed5c:
      FUN_0576a000();
      if (plVar11 == (long *)0x0) goto LAB_0573eee0;
      FUN_0577ac88(plVar11,0);
      FUN_05856a70();
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__
                     + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__))
    goto LAB_0573e96c;
    FUN_05740688();
    FUN_05769f38();
LAB_0573eec4:
    FUN_05856a70();
  }
LAB_0573eed4:
  lVar17 = *(long *)(unaff_x19 + 0x60);
  iVar20 = iVar20 + 1;
  if (lVar17 == 0) goto LAB_0573eee0;
  goto LAB_0573e8e0;
}


