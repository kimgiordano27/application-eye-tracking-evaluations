/*
FUNCTION_NAME: System.Xml.XmlException$$.ctor
ENTRY_POINT: 05723e30
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


void System_Xml_XmlException___ctor(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar15;
  long *unaff_x26;
  undefined8 unaff_x28;
  long *unaff_x29;
  
code_r0x05723e30:
                    /* catch() { ... } // from try @ 05723bfc with catch @ 05723e30 */
  lVar9 = thunk_FUN_02f45270(param_1);
                    /* catch() { ... } // from try @ 057234d8 with catch @ 05723e34 */
  bVar2 = *(byte *)(*unaff_x26 + 0x130);
                    /* try { // try from 05723e4c to 05823e63 has its CatchHandler @ 05723efc */
  if (*(byte *)(*unaff_x23 + 0x130) < bVar2) {
    plVar10 = (long *)0x0;
  }
  else {
                    /* try { // try from 05723e64 to 05823eeb has its CatchHandler @ 057230e4 */
    plVar10 = unaff_x23;
    if (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x26) {
      plVar10 = (long *)0x0;
    }
  }
  FUN_05116b38(lVar9,0);
  *(long **)(lVar9 + 0x10) = plVar10;
  *(undefined8 *)(lVar9 + 0x18) = unaff_x28;
  if (unaff_x25 != (long *)0x0) {
    (**(code **)(*unaff_x25 + 0x308))(unaff_x25,lVar9,*(undefined8 *)(*unaff_x25 + 0x310));
    plVar10 = *(long **)(unaff_x20 + 0x90);
    if (plVar10 != (long *)0x0) {
      lVar9 = (**(code **)(*plVar10 + 0x308))(plVar10,unaff_x24,*(undefined8 *)(*plVar10 + 0x310));
      unaff_x26 = (long *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
      puVar3 = Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
      if (lVar9 != 0) goto LAB_05723f30;
LAB_05723ed4:
      plVar10 = *(long **)(unaff_x20 + 0x90);
      if (plVar10 != (long *)0x0) {
                    /* try { // try from 05723eec to 05823efb has its CatchHandler @ 05723efc */
        (**(code **)(*plVar10 + 0x2a8))
                  (plVar10,unaff_x24,unaff_x23,*(undefined8 *)(*plVar10 + 0x2b0));
        System_Xml_XmlUrlResolver__GetEntity(unaff_x20,unaff_x24);
LAB_05723f24:
        do {
          FUN_05725d60(unaff_x20,unaff_x23);
LAB_05723f30:
          while( true ) {
            unaff_w22 = unaff_w22 + 1;
            if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
            iVar6 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
            if (iVar6 <= unaff_w22) {
              lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                                        );
              FUN_03abf108(lVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                          );
              plVar10 = *(long **)(unaff_x19 + 0x60);
              if (plVar10 == (long *)0x0) goto LAB_05723f3c;
              iVar6 = FUN_05079c6c(plVar10,0);
              puVar5 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
              puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
              puVar3 = 
              System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
              if (iVar6 < 1) goto FUN_057245cc;
              iVar6 = 0;
              plVar15 = (long *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
              ;
              goto LAB_05723fa4;
            }
            plVar10 = *(long **)(unaff_x19 + 0x58);
            if ((plVar10 == (long *)0x0) ||
               (unaff_x23 = (long *)(**(code **)(*plVar10 + 0x308))
                                              (plVar10,unaff_w22,*(undefined8 *)(*plVar10 + 0x310)),
               unaff_x23 == (long *)0x0)) goto LAB_05723f3c;
            bVar2 = *(byte *)(*unaff_x23 + 0x130);
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if ((bVar2 < bVar1) ||
               (lVar9 = *(long *)(*unaff_x23 + 200),
               *(long *)(lVar9 + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(unaff_x23);
            }
            unaff_x24 = unaff_x23[9];
            iVar6 = (int)unaff_x23[0xc];
            if (unaff_x24 == 0) break;
            if (iVar6 == 3) {
              unaff_x25 = *(long **)(unaff_x20 + 0xb0);
              if (unaff_x25 == (long *)0x0) {
                unaff_x25 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
                FUN_05079bb8(unaff_x25,0);
                *(long **)(unaff_x20 + 0xb0) = unaff_x25;
              }
              unaff_x28 = *(undefined8 *)(unaff_x20 + 0xa8);
              param_1 = *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
              ;
              goto code_r0x05723e30;
            }
            if (iVar6 == 2) {
              if (unaff_x24 != *(long *)(unaff_x20 + 0x58)) {
                bVar1 = *(byte *)(*(long *)
                                   Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__
                                 + 0x130);
                if ((bVar2 < bVar1) ||
                   (*(long *)(lVar9 + (ulong)bVar1 * 8 + -8) !=
                    *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
                goto LAB_05723f3c;
                lVar9 = unaff_x23[0xd];
                if (lVar9 == 0) {
                  lVar9 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
                }
                if (unaff_x29 == (long *)0x0) goto LAB_05723f3c;
                uVar8 = (**(code **)(*unaff_x29 + 0x348))
                                  (unaff_x29,unaff_x24,*(undefined8 *)(*unaff_x29 + 0x350));
                if ((uVar8 & 1) == 0) {
                  (**(code **)(*unaff_x29 + 0x308))
                            (unaff_x29,unaff_x24,*(undefined8 *)(*unaff_x29 + 0x310));
                }
                if ((*(long *)(unaff_x20 + 0x58) == 0) ||
                   (plVar10 = (long *)FUN_0576b140(*(long *)(unaff_x20 + 0x58),0),
                   plVar10 == (long *)0x0)) goto LAB_05723f3c;
                uVar8 = (**(code **)(*plVar10 + 0x348))
                                  (plVar10,lVar9,*(undefined8 *)(*plVar10 + 0x350));
                if ((uVar8 & 1) == 0) {
                  if ((*(long *)(unaff_x20 + 0x58) == 0) ||
                     (plVar10 = (long *)FUN_0576b140(*(long *)(unaff_x20 + 0x58),0),
                     plVar10 == (long *)0x0)) goto LAB_05723f3c;
                  (**(code **)(*plVar10 + 0x308))(plVar10,lVar9,*(undefined8 *)(*plVar10 + 0x310));
                }
              }
              goto LAB_05723f24;
            }
            if (iVar6 != 1) goto LAB_05723f24;
            plVar10 = *(long **)(unaff_x20 + 0x90);
            if (plVar10 == (long *)0x0) goto LAB_05723f3c;
            lVar9 = (**(code **)(*plVar10 + 0x308))
                              (plVar10,unaff_x24,*(undefined8 *)(*plVar10 + 0x310));
            if (lVar9 == 0) goto LAB_05723ed4;
          }
          if (iVar6 == 3) {
            bVar1 = *(byte *)(*unaff_x26 + 0x130);
            if ((bVar2 < bVar1) || (*(long *)(lVar9 + (ulong)bVar1 * 8 + -8) != *unaff_x26)) break;
            lVar9 = unaff_x23[8];
            if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar8 = FUN_058658f4(lVar9,0,0);
            if ((uVar8 & 1) != 0) {
              lVar9 = unaff_x23[0xd];
              if (lVar9 == 0) break;
              iVar6 = 0;
              goto LAB_05723ca0;
            }
          }
        } while( true );
      }
    }
  }
  goto LAB_05723f3c;
LAB_05723ca0:
  iVar7 = FUN_05079c6c(lVar9,0);
  if (iVar7 <= iVar6) goto LAB_05723f24;
  plVar10 = (long *)unaff_x23[0xd];
  if (plVar10 == (long *)0x0) goto LAB_05723f3c;
  plVar10 = (long *)(**(code **)(*plVar10 + 0x308))(plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310))
  ;
  if (plVar10 == (long *)0x0) {
LAB_05723f08:
    FUN_058572c8(unaff_x20,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                 ,unaff_x23,0);
    goto LAB_05723f24;
  }
  bVar2 = *(byte *)(*unaff_x21 + 0x130);
  if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x21))
  goto LAB_05723f08;
  lVar9 = unaff_x23[0xd];
  iVar6 = iVar6 + 1;
  if (lVar9 == 0) goto LAB_05723f3c;
  goto LAB_05723ca0;
LAB_05723fa4:
  do {
    lVar11 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
    if (lVar11 == 0) goto LAB_05723f3c;
    *(long *)(lVar11 + 0x28) = unaff_x19;
    plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
    if (plVar12 == (long *)0x0) {
LAB_05724010:
      plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar12 != (long *)0x0) {
        lVar11 = *(long *)puVar4;
        bVar2 = *(byte *)(lVar11 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar11))
        goto LAB_05724058;
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar11 = *(long *)puVar4;
          bVar2 = *(byte *)(lVar11 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar11))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x20,plVar12);
        uVar13 = FUN_05769f9c();
        if (plVar12 != (long *)0x0) {
LAB_05724540:
          lVar11 = plVar12[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar12 == (long *)0x0) {
LAB_057240a0:
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*plVar15 + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) == *plVar15)) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar2 = *(byte *)(*plVar15 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *plVar15))
              goto LAB_05724640;
            }
            FUN_05727d7c(unaff_x20,plVar12,0);
            goto LAB_057243d8;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x20,plVar12);
            uVar13 = FUN_0576a064();
            if (plVar12 != (long *)0x0) {
              lVar11 = plVar12[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 == (long *)0x0) {
              FUN_05728564(unaff_x20,0);
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
            FUN_05728564(unaff_x20,plVar12);
            uVar13 = *(undefined8 *)(unaff_x19 + 0xa0);
            goto LAB_05724540;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar13 = (**(code **)(*plVar10 + 0x308))
                               (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
            plVar12 = (long *)FUN_02a7e998(uVar13,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x20,plVar12);
            if (plVar12 != (long *)0x0) {
              uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*unaff_x21 + 0x130);
          if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) == *unaff_x21)) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar12 == (long *)0x0) {
LAB_057245a4:
              plVar12 = (long *)0x0;
            }
            else {
              bVar2 = *(byte *)(*unaff_x21 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x21) {
                plVar12 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x20,plVar12);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar13 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        FUN_058572c8(unaff_x20,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar13,0);
        uVar13 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (lVar9 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar9,uVar13,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar11 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar11 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar11))
        goto LAB_057240a0;
        plVar12 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar6,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar12 != (long *)0x0) {
          lVar11 = *(long *)puVar3;
          bVar2 = *(byte *)(lVar11 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != lVar11))
          goto LAB_05724640;
        }
        FUN_05727504(unaff_x20,plVar12,0);
LAB_057243d8:
        uVar13 = FUN_0576a000();
        if (plVar12 == (long *)0x0) goto LAB_05723f3c;
        uVar14 = FUN_0577ac88(plVar12,0);
        FUN_05856a70(unaff_x20,uVar13,uVar14,plVar12,0);
        plVar15 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5))
      goto LAB_05724010;
      FUN_057272a8(unaff_x20,plVar12);
      uVar13 = FUN_05769f38();
      lVar11 = plVar12[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x20,uVar13,lVar11,plVar12,0);
    }
System_Xml_XmlException__get_Message:
    iVar6 = iVar6 + 1;
    iVar7 = FUN_05079c6c(plVar10,0);
  } while (iVar6 < iVar7);
FUN_057245cc:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar9 == 0) {
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(lVar9 + 0x18)) {
    iVar6 = 0;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x60);
      uVar13 = FUN_03abf644(lVar9,iVar6,*(undefined8 *)puVar3);
      if (lVar11 == 0) goto LAB_05723f3c;
      FUN_0577173c(lVar11,uVar13,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar9 + 0x18));
  }
  return;
}


