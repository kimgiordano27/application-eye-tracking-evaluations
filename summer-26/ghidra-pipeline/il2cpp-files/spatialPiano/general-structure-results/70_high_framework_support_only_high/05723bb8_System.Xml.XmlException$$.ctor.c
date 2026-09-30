/*
FUNCTION_NAME: System.Xml.XmlException$$.ctor
ENTRY_POINT: 05723bb8
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


void System_Xml_XmlException___ctor(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *in_x9;
  long unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar16;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  
code_r0x05723bb8:
                    /* try { // try from 05723bb8 to 05823bc3 has its CatchHandler @ 05723ce0 */
  plVar9 = (long *)(*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x310));
  if (plVar9 == (long *)0x0) goto LAB_05723f3c;
  bVar2 = *(byte *)(*plVar9 + 0x130);
  bVar3 = *(byte *)(*unaff_x29 + 0x130);
  if ((bVar2 < bVar3) ||
     (lVar15 = *(long *)(*plVar9 + 200), *(long *)(lVar15 + (ulong)bVar3 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar9);
  }
  lVar16 = plVar9[9];
  iVar7 = (int)plVar9[0xc];
  if (lVar16 == 0) {
    if (iVar7 == 3) {
      bVar3 = *(byte *)(*unaff_x26 + 0x130);
      if ((bVar2 < bVar3) || (*(long *)(lVar15 + (ulong)bVar3 * 8 + -8) != *unaff_x26))
      goto LAB_05723f3c;
      lVar15 = plVar9[8];
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar11 = FUN_058658f4(lVar15,0,0);
      if ((uVar11 & 1) != 0) {
        lVar15 = plVar9[0xd];
        if (lVar15 == 0) goto LAB_05723f3c;
        iVar7 = 0;
        while (iVar8 = FUN_05079c6c(lVar15,0), iVar7 < iVar8) {
          plVar10 = (long *)plVar9[0xd];
          if (plVar10 == (long *)0x0) goto LAB_05723f3c;
          plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                      (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
          if (plVar10 == (long *)0x0) {
LAB_05723f08:
            FUN_058572c8(unaff_x28,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                         ,plVar9,0);
            break;
          }
          bVar2 = *(byte *)(*unaff_x27 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27))
          goto LAB_05723f08;
          lVar15 = plVar9[0xd];
          iVar7 = iVar7 + 1;
          if (lVar15 == 0) goto LAB_05723f3c;
        }
      }
    }
  }
  else {
    if (iVar7 == 3) {
      plVar10 = *(long **)(unaff_x28 + 0xb0);
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar10,0);
        *(long **)(unaff_x28 + 0xb0) = plVar10;
      }
      uVar13 = *(undefined8 *)(unaff_x28 + 0xa8);
      lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar2 = *(byte *)(*unaff_x26 + 0x130);
      if (*(byte *)(*plVar9 + 0x130) < bVar2) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x26) {
          plVar12 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar15,0);
      *(long **)(lVar15 + 0x10) = plVar12;
      *(undefined8 *)(lVar15 + 0x18) = uVar13;
      if (plVar10 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar10 + 0x308))(plVar10,lVar15,*(undefined8 *)(*plVar10 + 0x310));
      plVar10 = *(long **)(unaff_x28 + 0x90);
      if (plVar10 == (long *)0x0) goto LAB_05723f3c;
      lVar15 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar16,*(undefined8 *)(*plVar10 + 0x310));
      unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      unaff_x26 = (long *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
joined_r0x05723ed0:
      if (lVar15 == 0) {
        plVar10 = *(long **)(unaff_x28 + 0x90);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x2a8))(plVar10,lVar16,plVar9,*(undefined8 *)(*plVar10 + 0x2b0));
          System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar16);
          goto LAB_05723f24;
        }
        goto LAB_05723f3c;
      }
      goto LAB_05723f30;
    }
    if (iVar7 == 2) {
      if (lVar16 != *(long *)(unaff_x28 + 0x58)) {
        bVar3 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__
                         + 0x130);
        if ((bVar2 < bVar3) ||
           (*(long *)(lVar15 + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
        goto LAB_05723f3c;
        lVar15 = plVar9[0xd];
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
        uVar11 = (**(code **)(*unaff_x21 + 0x348))
                           (unaff_x21,lVar16,*(undefined8 *)(*unaff_x21 + 0x350));
        if ((uVar11 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar16,*(undefined8 *)(*unaff_x21 + 0x310));
        }
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar10 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar10 == (long *)0x0))
        goto LAB_05723f3c;
        uVar11 = (**(code **)(*plVar10 + 0x348))(plVar10,lVar15,*(undefined8 *)(*plVar10 + 0x350));
        if ((uVar11 & 1) != 0) goto LAB_05723f24;
        if ((*(long *)(unaff_x28 + 0x58) == 0) ||
           (plVar10 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar10 == (long *)0x0))
        goto LAB_05723f3c;
        (**(code **)(*plVar10 + 0x308))(plVar10,lVar15,*(undefined8 *)(*plVar10 + 0x310));
      }
    }
    else if (iVar7 == 1) {
      plVar10 = *(long **)(unaff_x28 + 0x90);
      if (plVar10 != (long *)0x0) {
        lVar15 = (**(code **)(*plVar10 + 0x308))(plVar10,lVar16,*(undefined8 *)(*plVar10 + 0x310));
        goto joined_r0x05723ed0;
      }
      goto LAB_05723f3c;
    }
  }
LAB_05723f24:
  FUN_05725d60(unaff_x28,plVar9);
LAB_05723f30:
  uVar1 = (int)unaff_x22 + 1;
  param_3 = (ulong)uVar1;
  if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
  iVar7 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
  if (iVar7 <= (int)uVar1) {
    lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                               );
    FUN_03abf108(lVar15,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    plVar9 = *(long **)(unaff_x19 + 0x60);
    if (plVar9 != (long *)0x0) {
      iVar7 = FUN_05079c6c(plVar9,0);
      puVar6 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
      puVar5 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
      puVar4 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
      if (iVar7 < 1) goto FUN_057245cc;
      iVar7 = 0;
      plVar10 = (long *)
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
      ;
      goto LAB_05723fa4;
    }
    goto LAB_05723f3c;
  }
  param_2 = *(long **)(unaff_x19 + 0x58);
  if (param_2 == (long *)0x0) goto LAB_05723f3c;
  param_1 = *param_2;
  in_x9 = *(code **)(param_1 + 0x308);
  unaff_x22 = param_3;
  goto code_r0x05723bb8;
LAB_05723fa4:
  do {
    lVar16 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
    if (lVar16 == 0) goto LAB_05723f3c;
    *(long *)(lVar16 + 0x28) = unaff_x19;
    plVar12 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
    if (plVar12 == (long *)0x0) {
LAB_05724010:
      plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                  (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
      if (plVar12 != (long *)0x0) {
        lVar16 = *(long *)puVar5;
        bVar2 = *(byte *)(lVar16 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar16))
        goto LAB_05724058;
        plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar16 = *(long *)puVar5;
          bVar2 = *(byte *)(lVar16 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar16))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar12);
        uVar13 = FUN_05769f9c();
        if (plVar12 != (long *)0x0) {
LAB_05724540:
          lVar16 = plVar12[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                  (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
      if (plVar12 == (long *)0x0) {
LAB_057240a0:
        plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*plVar10 + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) == *plVar10)) {
            plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar2 = *(byte *)(*plVar10 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *plVar10))
              goto LAB_05724640;
            }
            FUN_05727d7c(unaff_x28,plVar12,0);
            goto LAB_057243d8;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x28,plVar12);
            uVar13 = FUN_0576a064();
            if (plVar12 != (long *)0x0) {
              lVar16 = plVar12[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar12 == (long *)0x0) {
              FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar2 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar12);
            }
            FUN_05728564(unaff_x28,plVar12);
            uVar13 = *(undefined8 *)(unaff_x19 + 0xa0);
            goto LAB_05724540;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar13 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
            plVar12 = (long *)FUN_02a7e998(uVar13,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x28,plVar12);
            if (plVar12 != (long *)0x0) {
              uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*unaff_x27 + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) == *unaff_x27)) {
            plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar12 == (long *)0x0) {
LAB_057245a4:
              plVar12 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*unaff_x27 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27) {
                plVar12 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x28,plVar12);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar13 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar13,0);
        uVar13 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (lVar15 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar15,uVar13,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar16 = *(long *)puVar4;
        bVar2 = *(byte *)(lVar16 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar16))
        goto LAB_057240a0;
        plVar12 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar7,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar16 = *(long *)puVar4;
          bVar2 = *(byte *)(lVar16 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar16))
          goto LAB_05724640;
        }
        FUN_05727504(unaff_x28,plVar12,0);
LAB_057243d8:
        uVar13 = FUN_0576a000();
        if (plVar12 == (long *)0x0) goto LAB_05723f3c;
        uVar14 = FUN_0577ac88(plVar12,0);
        FUN_05856a70(unaff_x28,uVar13,uVar14,plVar12,0);
        plVar10 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6))
      goto LAB_05724010;
      FUN_057272a8(unaff_x28,plVar12);
      uVar13 = FUN_05769f38();
      lVar16 = plVar12[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar13,lVar16,plVar12,0);
    }
System_Xml_XmlException__get_Message:
    iVar7 = iVar7 + 1;
    iVar8 = FUN_05079c6c(plVar9,0);
  } while (iVar7 < iVar8);
FUN_057245cc:
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar15 != 0) {
    if (0 < *(int *)(lVar15 + 0x18)) {
      iVar7 = 0;
      do {
        lVar16 = *(long *)(unaff_x19 + 0x60);
        uVar13 = FUN_03abf644(lVar15,iVar7,*(undefined8 *)puVar4);
        if (lVar16 == 0) goto LAB_05723f3c;
        FUN_0577173c(lVar16,uVar13,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar15 + 0x18));
    }
    return;
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


