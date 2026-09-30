/*
FUNCTION_NAME: System.Xml.XmlException$$.ctor
ENTRY_POINT: 05723b8c
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


void System_Xml_XmlException___ctor(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long lVar13;
  long unaff_x26;
  long *plVar14;
  long unaff_x27;
  long *plVar15;
  long *plVar16;
  long unaff_x28;
  undefined8 uVar17;
  long *unaff_x29;
  
                    /* try { // try from 05723b8c to 05823b8f has its CatchHandler @ 05723ca8 */
  plVar14 = *(long **)(unaff_x26 + 0xd40);
                    /* try { // try from 05723b90 to 05823b9b has its CatchHandler @ 05723ce8 */
  plVar15 = *(long **)(unaff_x27 + 0x4f8);
LAB_05723b94:
  iVar6 = FUN_05079c6c(param_1,0);
                    /* try { // try from 05723b9c to 05823bb3 has its CatchHandler @ 05723ce4 */
  if (iVar6 <= unaff_w22) {
    lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                               );
    FUN_03abf108(lVar12,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    plVar14 = *(long **)(unaff_x19 + 0x60);
    if (plVar14 != (long *)0x0) {
      iVar6 = FUN_05079c6c(plVar14,0);
      puVar5 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
      puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
      puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
      if (iVar6 < 1) goto FUN_057245cc;
      iVar6 = 0;
      plVar8 = (long *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
      ;
      goto LAB_05723fa4;
    }
    goto LAB_05723f3c;
  }
  plVar8 = *(long **)(unaff_x19 + 0x58);
  if ((plVar8 == (long *)0x0) ||
     (plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                 (plVar8,unaff_w22,*(undefined8 *)(*plVar8 + 0x310)),
     plVar8 == (long *)0x0)) goto LAB_05723f3c;
  bVar1 = *(byte *)(*plVar8 + 0x130);
  bVar2 = *(byte *)(*unaff_x29 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar12 = *(long *)(*plVar8 + 200), *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar8);
  }
  lVar13 = plVar8[9];
  iVar6 = (int)plVar8[0xc];
  if (lVar13 == 0) {
    if (iVar6 == 3) {
      bVar2 = *(byte *)(*plVar14 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *plVar14))
      goto LAB_05723f3c;
      lVar12 = plVar8[8];
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_058658f4(lVar12,0,0);
      if ((uVar10 & 1) != 0) {
        lVar12 = plVar8[0xd];
        if (lVar12 == 0) goto LAB_05723f3c;
        iVar6 = 0;
        while (iVar7 = FUN_05079c6c(lVar12,0), iVar6 < iVar7) {
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
          bVar1 = *(byte *)(*plVar15 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15))
          goto LAB_05723f08;
          lVar12 = plVar8[0xd];
          iVar6 = iVar6 + 1;
          if (lVar12 == 0) goto LAB_05723f3c;
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
      uVar17 = *(undefined8 *)(unaff_x28 + 0xa8);
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar1 = *(byte *)(*plVar14 + 0x130);
      if (*(byte *)(*plVar8 + 0x130) < bVar1) {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = plVar8;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14) {
          plVar16 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar12,0);
      *(long **)(lVar12 + 0x10) = plVar16;
      *(undefined8 *)(lVar12 + 0x18) = uVar17;
      if (plVar9 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar9 + 0x308))(plVar9,lVar12,*(undefined8 *)(*plVar9 + 0x310));
      plVar14 = *(long **)(unaff_x28 + 0x90);
      if (plVar14 == (long *)0x0) goto LAB_05723f3c;
      lVar12 = (**(code **)(*plVar14 + 0x308))(plVar14,lVar13,*(undefined8 *)(*plVar14 + 0x310));
      unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      plVar14 = (long *)
                Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
joined_r0x05723ed0:
      if (lVar12 == 0) {
        plVar9 = *(long **)(unaff_x28 + 0x90);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x2a8))(plVar9,lVar13,plVar8,*(undefined8 *)(*plVar9 + 0x2b0));
          System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar13);
          goto LAB_05723f24;
        }
        goto LAB_05723f3c;
      }
      goto LAB_05723f30;
    }
    if (iVar6 == 2) {
      if (lVar13 != *(long *)(unaff_x28 + 0x58)) {
        bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
        goto LAB_05723f3c;
        lVar12 = plVar8[0xd];
        if (lVar12 == 0) {
          lVar12 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
        uVar10 = (**(code **)(*unaff_x21 + 0x348))
                           (unaff_x21,lVar13,*(undefined8 *)(*unaff_x21 + 0x350));
        if ((uVar10 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar13,*(undefined8 *)(*unaff_x21 + 0x310));
        }
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar9 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar9 == (long *)0x0))
        goto LAB_05723f3c;
        uVar10 = (**(code **)(*plVar9 + 0x348))(plVar9,lVar12,*(undefined8 *)(*plVar9 + 0x350));
        if ((uVar10 & 1) != 0) goto LAB_05723f24;
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar9 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar9 == (long *)0x0))
        goto LAB_05723f3c;
        (**(code **)(*plVar9 + 0x308))(plVar9,lVar12,*(undefined8 *)(*plVar9 + 0x310));
      }
    }
    else if (iVar6 == 1) {
      plVar9 = *(long **)(unaff_x28 + 0x90);
      if (plVar9 != (long *)0x0) {
        lVar12 = (**(code **)(*plVar9 + 0x308))(plVar9,lVar13,*(undefined8 *)(*plVar9 + 0x310));
        goto joined_r0x05723ed0;
      }
      goto LAB_05723f3c;
    }
  }
LAB_05723f24:
  FUN_05725d60(unaff_x28,plVar8);
LAB_05723f30:
  param_1 = *(long *)(unaff_x19 + 0x58);
  unaff_w22 = unaff_w22 + 1;
  if (param_1 == 0) goto LAB_05723f3c;
  goto LAB_05723b94;
LAB_05723fa4:
  do {
    lVar13 = (**(code **)(*plVar14 + 0x308))(plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
    if (lVar13 == 0) goto LAB_05723f3c;
    *(long *)(lVar13 + 0x28) = unaff_x19;
    plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                               (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
    if (plVar9 == (long *)0x0) {
LAB_05724010:
      plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                 (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
      if (plVar9 != (long *)0x0) {
        lVar13 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
        goto LAB_05724058;
        plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar9 != (long *)0x0) {
          lVar13 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar9);
        uVar17 = FUN_05769f9c();
        if (plVar9 != (long *)0x0) {
LAB_05724540:
          lVar13 = plVar9[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                 (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
      if (plVar9 == (long *)0x0) {
LAB_057240a0:
        plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar8 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *plVar8)) {
            plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                       (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
            if (plVar9 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar8 + 0x130);
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar8))
              goto LAB_05724640;
            }
            FUN_05727d7c(unaff_x28,plVar9,0);
            goto LAB_057243d8;
          }
        }
        plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                       (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
            if (plVar9 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x28,plVar9);
            uVar17 = FUN_0576a064();
            if (plVar9 != (long *)0x0) {
              lVar13 = plVar9[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                       (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
            if (plVar9 == (long *)0x0) {
              FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar9);
            }
            FUN_05728564(unaff_x28,plVar9);
            uVar17 = *(undefined8 *)(unaff_x19 + 0xa0);
            goto LAB_05724540;
          }
        }
        plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar17 = (**(code **)(*plVar14 + 0x308))
                               (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
            plVar9 = (long *)FUN_02a7e998(uVar17,*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                         );
            FUN_05728728(unaff_x28,plVar9);
            if (plVar9 != (long *)0x0) {
              uVar17 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar9 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar15 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *plVar15)) {
            plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                       (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
            if (plVar9 == (long *)0x0) {
LAB_057245a4:
              plVar9 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*plVar15 + 0x130);
              if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15) {
                plVar9 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x28,plVar9);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar17 = (**(code **)(*plVar14 + 0x308))(plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar17,0);
        uVar17 = (**(code **)(*plVar14 + 0x308))(plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (lVar12 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar12,uVar17,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar13 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
        goto LAB_057240a0;
        plVar9 = (long *)(**(code **)(*plVar14 + 0x308))
                                   (plVar14,iVar6,*(undefined8 *)(*plVar14 + 0x310));
        if (plVar9 != (long *)0x0) {
          lVar13 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
          goto LAB_05724640;
        }
        FUN_05727504(unaff_x28,plVar9,0);
LAB_057243d8:
        uVar17 = FUN_0576a000();
        if (plVar9 == (long *)0x0) goto LAB_05723f3c;
        uVar11 = FUN_0577ac88(plVar9,0);
        FUN_05856a70(unaff_x28,uVar17,uVar11,plVar9,0);
        plVar8 = (long *)
                 Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
      goto LAB_05724010;
      FUN_057272a8(unaff_x28,plVar9);
      uVar17 = FUN_05769f38();
      lVar13 = plVar9[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar17,lVar13,plVar9,0);
    }
System_Xml_XmlException__get_Message:
    iVar6 = iVar6 + 1;
    iVar7 = FUN_05079c6c(plVar14,0);
  } while (iVar6 < iVar7);
FUN_057245cc:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar12 != 0) {
    if (0 < *(int *)(lVar12 + 0x18)) {
      iVar6 = 0;
      do {
        lVar13 = *(long *)(unaff_x19 + 0x60);
        uVar17 = FUN_03abf644(lVar12,iVar6,*(undefined8 *)puVar3);
        if (lVar13 == 0) goto LAB_05723f3c;
        FUN_0577173c(lVar13,uVar17,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar12 + 0x18));
    }
    return;
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


