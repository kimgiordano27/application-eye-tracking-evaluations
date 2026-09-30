/*
FUNCTION_NAME: System.Xml.XmlException$$.ctor
ENTRY_POINT: 05723ef0
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


void System_Xml_XmlException___ctor(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  code *in_x9;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar14;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 uVar15;
  long unaff_x28;
  long *unaff_x29;
  
code_r0x05723ef0:
  (*in_x9)(param_1,param_2,param_3,param_4);
                    /* catch() { ... } // from try @ 05723e4c with catch @ 05723efc
                       catch() { ... } // from try @ 05723eec with catch @ 05723efc */
                    /* try { // try from 05723f00 to 05823f03 has its CatchHandler @ 05723f0c */
  System_Xml_XmlUrlResolver__GetEntity(unaff_x28,unaff_x24);
  param_3 = unaff_x23;
                    /* try { // try from 05723f04 to 05823f0f has its CatchHandler @ 057230e4 */
LAB_05723f24:
  do {
    FUN_05725d60(unaff_x28,param_3);
    while( true ) {
      unaff_w22 = unaff_w22 + 1;
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
      iVar6 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
      if (iVar6 <= unaff_w22) {
        lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                                   );
        FUN_03abf108(lVar13,*(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                    );
        plVar8 = *(long **)(unaff_x19 + 0x60);
        if (plVar8 == (long *)0x0) goto LAB_05723f3c;
        iVar6 = FUN_05079c6c(plVar8,0);
        puVar5 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
        puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
        puVar3 = System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
        ;
        if (iVar6 < 1) goto FUN_057245cc;
        iVar6 = 0;
        plVar14 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
        goto LAB_05723fa4;
      }
      plVar8 = *(long **)(unaff_x19 + 0x58);
      if ((plVar8 == (long *)0x0) ||
         (param_3 = (long *)(**(code **)(*plVar8 + 0x308))
                                      (plVar8,unaff_w22,*(undefined8 *)(*plVar8 + 0x310)),
         param_3 == (long *)0x0)) goto LAB_05723f3c;
      bVar1 = *(byte *)(*param_3 + 0x130);
      bVar2 = *(byte *)(*unaff_x29 + 0x130);
      if ((bVar1 < bVar2) ||
         (lVar13 = *(long *)(*param_3 + 200),
         *(long *)(lVar13 + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(param_3);
      }
      param_2 = param_3[9];
      iVar6 = (int)param_3[0xc];
      if (param_2 == 0) break;
      if (iVar6 == 3) {
        plVar8 = *(long **)(unaff_x28 + 0xb0);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
          FUN_05079bb8(plVar8,0);
          *(long **)(unaff_x28 + 0xb0) = plVar8;
        }
        uVar15 = *(undefined8 *)(unaff_x28 + 0xa8);
        lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                   );
        bVar1 = *(byte *)(*unaff_x26 + 0x130);
        if (*(byte *)(*param_3 + 0x130) < bVar1) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = param_3;
          if (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26) {
            plVar14 = (long *)0x0;
          }
        }
        FUN_05116b38(lVar13,0);
        *(long **)(lVar13 + 0x10) = plVar14;
        *(undefined8 *)(lVar13 + 0x18) = uVar15;
        if (plVar8 == (long *)0x0) goto LAB_05723f3c;
        (**(code **)(*plVar8 + 0x308))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x310));
        plVar8 = *(long **)(unaff_x28 + 0x90);
        if (plVar8 == (long *)0x0) goto LAB_05723f3c;
        lVar13 = (**(code **)(*plVar8 + 0x308))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x310));
        unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
        unaff_x26 = (long *)
                    Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
        ;
      }
      else {
        if (iVar6 == 2) {
          if (param_2 != *(long *)(unaff_x28 + 0x58)) {
            bVar2 = *(byte *)(*(long *)
                               Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ +
                             0x130);
            if ((bVar1 < bVar2) ||
               (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) !=
                *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
            goto LAB_05723f3c;
            lVar13 = param_3[0xd];
            if (lVar13 == 0) {
              lVar13 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
            }
            if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
            uVar9 = (**(code **)(*unaff_x21 + 0x348))
                              (unaff_x21,param_2,*(undefined8 *)(*unaff_x21 + 0x350));
            if ((uVar9 & 1) == 0) {
              (**(code **)(*unaff_x21 + 0x308))
                        (unaff_x21,param_2,*(undefined8 *)(*unaff_x21 + 0x310));
            }
            if ((*(long *)(unaff_x28 + 0x58) == 0) ||
               (plVar8 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar8 == (long *)0x0)
               ) goto LAB_05723f3c;
            uVar9 = (**(code **)(*plVar8 + 0x348))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x350));
            if ((uVar9 & 1) == 0) {
              if ((*(long *)(unaff_x28 + 0x58) == 0) ||
                 (plVar8 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0),
                 plVar8 == (long *)0x0)) goto LAB_05723f3c;
              (**(code **)(*plVar8 + 0x308))(plVar8,lVar13,*(undefined8 *)(*plVar8 + 0x310));
            }
          }
          goto LAB_05723f24;
        }
        if (iVar6 != 1) goto LAB_05723f24;
        plVar8 = *(long **)(unaff_x28 + 0x90);
        if (plVar8 == (long *)0x0) goto LAB_05723f3c;
        lVar13 = (**(code **)(*plVar8 + 0x308))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x310));
      }
      if (lVar13 == 0) {
        param_1 = *(long **)(unaff_x28 + 0x90);
        if (param_1 == (long *)0x0) goto LAB_05723f3c;
        in_x9 = *(code **)(*param_1 + 0x2a8);
        param_4 = *(undefined8 *)(*param_1 + 0x2b0);
        unaff_x23 = param_3;
        unaff_x24 = param_2;
        goto code_r0x05723ef0;
      }
    }
    if (iVar6 == 3) {
      bVar2 = *(byte *)(*unaff_x26 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) != *unaff_x26))
      goto LAB_05723f3c;
      lVar13 = param_3[8];
      if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_058658f4(lVar13,0,0);
      if ((uVar9 & 1) != 0) {
        lVar13 = param_3[0xd];
        if (lVar13 == 0) goto LAB_05723f3c;
        iVar6 = 0;
        break;
      }
    }
  } while( true );
LAB_05723ca0:
  iVar7 = FUN_05079c6c(lVar13,0);
  if (iVar7 <= iVar6) goto LAB_05723f24;
  plVar8 = (long *)param_3[0xd];
  if (plVar8 == (long *)0x0) goto LAB_05723f3c;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
  if (plVar8 == (long *)0x0) {
LAB_05723f08:
    FUN_058572c8(unaff_x28,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                 ,param_3,0);
    goto LAB_05723f24;
  }
  bVar1 = *(byte *)(*unaff_x27 + 0x130);
  if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) goto LAB_05723f08;
  lVar13 = param_3[0xd];
  iVar6 = iVar6 + 1;
  if (lVar13 == 0) goto LAB_05723f3c;
  goto LAB_05723ca0;
LAB_05723fa4:
  do {
    lVar10 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
    if (lVar10 == 0) goto LAB_05723f3c;
    *(long *)(lVar10 + 0x28) = unaff_x19;
    plVar11 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
    if (plVar11 == (long *)0x0) {
LAB_05724010:
      plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                  (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar10 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
        goto LAB_05724058;
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          lVar10 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar10 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar11);
        uVar15 = FUN_05769f9c();
        if (plVar11 != (long *)0x0) {
LAB_05724540:
          lVar10 = plVar11[0xd];
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
          bVar1 = *(byte *)(*plVar14 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar14)) {
            plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                        (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar14 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14))
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
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x28,plVar11);
            uVar15 = FUN_0576a064();
            if (plVar11 != (long *)0x0) {
              lVar10 = plVar11[0x18];
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
            uVar15 = *(undefined8 *)(unaff_x19 + 0xa0);
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
            uVar15 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
            plVar11 = (long *)FUN_02a7e998(uVar15,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x28,plVar11);
            if (plVar11 != (long *)0x0) {
              uVar15 = *(undefined8 *)(unaff_x19 + 0xa8);
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
        uVar15 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar15,0);
        uVar15 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (lVar13 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar13,uVar15,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar10 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
        goto LAB_057240a0;
        plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                    (plVar8,iVar6,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar11 != (long *)0x0) {
          lVar10 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar10 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
          goto LAB_05724640;
        }
        FUN_05727504(unaff_x28,plVar11,0);
LAB_057243d8:
        uVar15 = FUN_0576a000();
        if (plVar11 == (long *)0x0) goto LAB_05723f3c;
        uVar12 = FUN_0577ac88(plVar11,0);
        FUN_05856a70(unaff_x28,uVar15,uVar12,plVar11,0);
        plVar14 = (long *)
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
      uVar15 = FUN_05769f38();
      lVar10 = plVar11[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar15,lVar10,plVar11,0);
    }
System_Xml_XmlException__get_Message:
    iVar6 = iVar6 + 1;
    iVar7 = FUN_05079c6c(plVar8,0);
  } while (iVar6 < iVar7);
FUN_057245cc:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar13 != 0) {
    if (0 < *(int *)(lVar13 + 0x18)) {
      iVar6 = 0;
      do {
        lVar10 = *(long *)(unaff_x19 + 0x60);
        uVar15 = FUN_03abf644(lVar13,iVar6,*(undefined8 *)puVar3);
        if (lVar10 == 0) goto LAB_05723f3c;
        FUN_0577173c(lVar10,uVar15,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar13 + 0x18));
    }
    return;
  }
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


