/*
FUNCTION_NAME: System.Xml.XmlException$$.ctor
ENTRY_POINT: 05723ba4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void System_Xml_XmlException___ctor(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long lVar15;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  
code_r0x05723ba4:
  plVar8 = *(long **)(unaff_x19 + 0x58);
  if ((plVar8 == (long *)0x0) ||
     (plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                 (plVar8,unaff_w22,*(undefined8 *)(*plVar8 + 0x310)),
     plVar8 == (long *)0x0)) goto LAB_05723f3c;
  bVar1 = *(byte *)(*plVar8 + 0x130);
  bVar2 = *(byte *)(*unaff_x29 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar14 = *(long *)(*plVar8 + 200), *(long *)(lVar14 + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar8);
  }
  lVar15 = plVar8[9];
  iVar6 = (int)plVar8[0xc];
  if (lVar15 == 0) {
    if (iVar6 == 3) {
      bVar2 = *(byte *)(*unaff_x26 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar14 + (ulong)bVar2 * 8 + -8) != *unaff_x26))
      goto LAB_05723f3c;
      lVar14 = plVar8[8];
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_058658f4(lVar14,0,0);
      if ((uVar10 & 1) != 0) {
        lVar14 = plVar8[0xd];
        if (lVar14 == 0) goto LAB_05723f3c;
        iVar6 = 0;
        while (iVar7 = FUN_05079c6c(lVar14,0), iVar6 < iVar7) {
          plVar9 = (long *)plVar8[0xd];
          if (plVar9 == (long *)0x0) goto LAB_05723f3c;
          plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                     (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
          if (plVar9 == (long *)0x0) {
LAB_05723f08:
            FUN_058572c8(unaff_x28,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                         ,plVar8,0);
            break;
          }
          bVar1 = *(byte *)(*unaff_x27 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
          goto LAB_05723f08;
          lVar14 = plVar8[0xd];
          iVar6 = iVar6 + 1;
          if (lVar14 == 0) goto LAB_05723f3c;
        }
      }
    }
  }
  else {
    if (iVar6 == 3) {
      plVar9 = *(long **)(unaff_x28 + 0xb0);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar9,0);
        *(long **)(unaff_x28 + 0xb0) = plVar9;
      }
      uVar12 = *(undefined8 *)(unaff_x28 + 0xa8);
      lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = plVar8;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26) {
          plVar11 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar14,0);
      *(long **)(lVar14 + 0x10) = plVar11;
      *(undefined8 *)(lVar14 + 0x18) = uVar12;
      if (plVar9 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar9 + 0x308))(plVar9,lVar14,*(undefined8 *)(*plVar9 + 0x310));
      plVar9 = *(long **)(unaff_x28 + 0x90);
      if (plVar9 == (long *)0x0) goto LAB_05723f3c;
      lVar14 = (**(code **)(*plVar9 + 0x308))(plVar9,lVar15,*(undefined8 *)(*plVar9 + 0x310));
      unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      unaff_x26 = (long *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
joined_r0x05723ed0:
      if (lVar14 == 0) {
        plVar9 = *(long **)(unaff_x28 + 0x90);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x2a8))(plVar9,lVar15,plVar8,*(undefined8 *)(*plVar9 + 0x2b0));
          System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar15);
          goto LAB_05723f24;
        }
        goto LAB_05723f3c;
      }
      goto LAB_05723f30;
    }
    if (iVar6 == 2) {
      if (lVar15 != *(long *)(unaff_x28 + 0x58)) {
        bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar14 + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
        goto LAB_05723f3c;
        lVar14 = plVar8[0xd];
        if (lVar14 == 0) {
          lVar14 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
        uVar10 = (**(code **)(*unaff_x21 + 0x348))
                           (unaff_x21,lVar15,*(undefined8 *)(*unaff_x21 + 0x350));
        if ((uVar10 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar15,*(undefined8 *)(*unaff_x21 + 0x310));
        }
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar9 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar9 == (long *)0x0))
        goto LAB_05723f3c;
        uVar10 = (**(code **)(*plVar9 + 0x348))(plVar9,lVar14,*(undefined8 *)(*plVar9 + 0x350));
        if ((uVar10 & 1) != 0) goto LAB_05723f24;
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar9 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar9 == (long *)0x0))
        goto LAB_05723f3c;
        (**(code **)(*plVar9 + 0x308))(plVar9,lVar14,*(undefined8 *)(*plVar9 + 0x310));
      }
    }
    else if (iVar6 == 1) {
      plVar9 = *(long **)(unaff_x28 + 0x90);
      if (plVar9 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar9 + 0x308))(plVar9,lVar15,*(undefined8 *)(*plVar9 + 0x310));
        goto joined_r0x05723ed0;
      }
      goto LAB_05723f3c;
    }
  }
LAB_05723f24:
  FUN_05725d60(unaff_x28,plVar8);
LAB_05723f30:
  unaff_w22 = unaff_w22 + 1;
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
  iVar6 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
  if (iVar6 <= unaff_w22) goto LAB_05723f40;
  goto code_r0x05723ba4;
LAB_05723f40:
  lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                             );
  FUN_03abf108(lVar14,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
              );
  plVar8 = *(long **)(unaff_x19 + 0x60);
  if (plVar8 != (long *)0x0) {
    iVar6 = FUN_05079c6c(plVar8,0);
    puVar5 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
    puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
    puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
    if (0 < iVar6) {
      iVar6 = 0;
      plVar9 = (long *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
      ;
      do {
        lVar15 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (lVar15 == 0) goto LAB_05723f3c;
        *(long *)(lVar15 + 0x28) = unaff_x19;
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 == (long *)0x0) {
LAB_05724010:
          plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                      (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
          if (plVar11 != (long *)0x0) {
            lVar15 = *(long *)puVar4;
            bVar1 = *(byte *)(lVar15 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
            goto LAB_05724058;
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              lVar15 = *(long *)puVar4;
              bVar1 = *(byte *)(lVar15 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
              goto LAB_05724640;
            }
            FUN_0572740c(unaff_x28,plVar11);
            uVar12 = FUN_05769f9c();
            if (plVar11 != (long *)0x0) {
LAB_05724540:
              lVar15 = plVar11[0xd];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
LAB_05724058:
          plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                      (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
          if (plVar11 == (long *)0x0) {
LAB_057240a0:
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar9 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar9)) {
                plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                            (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
                if (plVar11 != (long *)0x0) {
                  bVar1 = *(byte *)(*plVar9 + 0x130);
                  if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9))
                  goto LAB_05724640;
                }
                FUN_05727d7c(unaff_x28,plVar11,0);
                goto LAB_057243d8;
              }
            }
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
                plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                            (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
                if (plVar11 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)
                                     Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__
                                   + 0x130);
                  if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
                  goto LAB_05724640;
                }
                FUN_0572831c(unaff_x28,plVar11);
                uVar12 = FUN_0576a064();
                if (plVar11 != (long *)0x0) {
                  lVar15 = plVar11[0x18];
                  goto System_Xml_XmlException__get_LineNumber;
                }
                goto LAB_05723f3c;
              }
            }
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                               + 0x130);
              if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                 )) {
                plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                            (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
                if (plVar11 == (long *)0x0) {
                  FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                bVar1 = *(byte *)(*(long *)
                                   Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                                 + 0x130);
                if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)
                     Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                   )) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(plVar11);
                }
                FUN_05728564(unaff_x28,plVar11);
                uVar12 = *(undefined8 *)(unaff_x19 + 0xa0);
                goto LAB_05724540;
              }
            }
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                               + 0x130);
              if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)
                   Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                 )) {
                uVar12 = (**(code **)(*plVar8 + 0x308))
                                   (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
                plVar11 = (long *)FUN_02a7e998(uVar12,*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                              );
                FUN_05728728(unaff_x28,plVar11);
                if (plVar11 != (long *)0x0) {
                  uVar12 = *(undefined8 *)(unaff_x19 + 0xa8);
                  goto LAB_05724540;
                }
                goto LAB_05723f3c;
              }
            }
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*unaff_x27 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
                plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                            (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
                if (plVar11 == (long *)0x0) {
LAB_057245a4:
                  plVar11 = (long *)0x0;
                }
                else {
                  bVar1 = *(byte *)(*unaff_x27 + 0x130);
                  if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_057245a4;
                  if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27) {
                    plVar11 = (long *)0x0;
                  }
                }
                FUN_0572897c(unaff_x28,plVar11);
                goto System_Xml_XmlException__get_Message;
              }
            }
            uVar12 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            FUN_058572c8(unaff_x28,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                         ,uVar12,0);
            uVar12 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (lVar14 == 0) goto LAB_05723f3c;
            FUN_02e441a0(lVar14,uVar12,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                        );
          }
          else {
            lVar15 = *(long *)puVar3;
            bVar1 = *(byte *)(lVar15 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
            goto LAB_057240a0;
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              lVar15 = *(long *)puVar3;
              bVar1 = *(byte *)(lVar15 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
              goto LAB_05724640;
            }
            FUN_05727504(unaff_x28,plVar11,0);
LAB_057243d8:
            uVar12 = FUN_0576a000();
            if (plVar11 == (long *)0x0) goto LAB_05723f3c;
            uVar13 = FUN_0577ac88(plVar11,0);
            FUN_05856a70(unaff_x28,uVar12,uVar13,plVar11,0);
            plVar9 = (long *)
                     Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
            ;
          }
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
          goto LAB_05724010;
          FUN_057272a8(unaff_x28,plVar11);
          uVar12 = FUN_05769f38();
          lVar15 = plVar11[0x10];
System_Xml_XmlException__get_LineNumber:
          FUN_05856a70(unaff_x28,uVar12,lVar15,plVar11,0);
        }
System_Xml_XmlException__get_Message:
        iVar6 = iVar6 + 1;
        iVar7 = FUN_05079c6c(plVar8,0);
      } while (iVar6 < iVar7);
    }
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
    ;
    if (lVar14 != 0) {
      if (0 < *(int *)(lVar14 + 0x18)) {
        iVar6 = 0;
        do {
          lVar15 = *(long *)(unaff_x19 + 0x60);
          uVar12 = FUN_03abf644(lVar14,iVar6,*(undefined8 *)puVar3);
          if (lVar15 == 0) goto LAB_05723f3c;
          FUN_0577173c(lVar15,uVar12,0);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar14 + 0x18));
      }
      return;
    }
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


