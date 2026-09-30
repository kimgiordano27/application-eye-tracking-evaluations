/*
FUNCTION_NAME: System.Xml.XmlException$$.ctor
ENTRY_POINT: 05723db0
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


void System_Xml_XmlException___ctor(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long lVar13;
  long unaff_x25;
  long *plVar14;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 uVar15;
  long *unaff_x29;
  
code_r0x05723db0:
                    /* catch() { ... } // from try @ 0572325c with catch @ 05723db0 */
                    /* catch() { ... } // from try @ 057237a4 with catch @ 05723db4 */
                    /* catch() { ... } // from try @ 057233f0 with catch @ 05723db8 */
  uVar8 = (**(code **)(param_1 + 0x348))(param_2,param_3,*(undefined8 *)(param_1 + 0x350));
                    /* catch() { ... } // from try @ 05723c40 with catch @ 05723dbc */
  if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 05723c3c with catch @ 05723dc0 */
                    /* catch() { ... } // from try @ 05723c38 with catch @ 05723dc4 */
                    /* catch() { ... } // from try @ 05723c34 with catch @ 05723dc8 */
                    /* catch() { ... } // from try @ 05723c30 with catch @ 05723dcc */
                    /* catch() { ... } // from try @ 057236ac with catch @ 05723dd0 */
    if ((*(long *)(unaff_x28 + 0x58) == 0) ||
       (plVar9 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), plVar9 == (long *)0x0))
    goto LAB_05723f3c;
                    /* catch() { ... } // from try @ 05723c2c with catch @ 05723dd4 */
                    /* catch() { ... } // from try @ 0572354c with catch @ 05723dd8 */
                    /* catch() { ... } // from try @ 05723584 with catch @ 05723ddc */
                    /* catch() { ... } // from try @ 057235b0 with catch @ 05723de0 */
                    /* catch() { ... } // from try @ 057235d4 with catch @ 05723de4 */
    (**(code **)(*plVar9 + 0x308))(plVar9,unaff_x25,*(undefined8 *)(*plVar9 + 0x310));
                    /* catch() { ... } // from try @ 05723c28 with catch @ 05723de8 */
  }
LAB_05723f24:
  do {
    FUN_05725d60(unaff_x28,unaff_x23);
    do {
      while( true ) {
        unaff_w22 = unaff_w22 + 1;
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05723f3c;
        iVar6 = FUN_05079c6c(*(long *)(unaff_x19 + 0x58),0);
        if (iVar6 <= unaff_w22) {
          lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>__ctor__
                                     );
          FUN_03abf108(lVar12,*(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                      );
          plVar9 = *(long **)(unaff_x19 + 0x60);
          if (plVar9 == (long *)0x0) goto LAB_05723f3c;
          iVar6 = FUN_05079c6c(plVar9,0);
          puVar5 = Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__;
          puVar4 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__;
          puVar3 = 
          System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo;
          if (iVar6 < 1) goto FUN_057245cc;
          iVar6 = 0;
          plVar14 = (long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
          ;
          goto LAB_05723fa4;
        }
        plVar9 = *(long **)(unaff_x19 + 0x58);
        if ((plVar9 == (long *)0x0) ||
           (unaff_x23 = (long *)(**(code **)(*plVar9 + 0x308))
                                          (plVar9,unaff_w22,*(undefined8 *)(*plVar9 + 0x310)),
           unaff_x23 == (long *)0x0)) goto LAB_05723f3c;
        bVar1 = *(byte *)(*unaff_x23 + 0x130);
        bVar2 = *(byte *)(*unaff_x29 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar12 = *(long *)(*unaff_x23 + 200),
           *(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x23);
        }
        lVar13 = unaff_x23[9];
        iVar6 = (int)unaff_x23[0xc];
        if (lVar13 == 0) {
          if (iVar6 != 3) goto LAB_05723f24;
          bVar2 = *(byte *)(*unaff_x26 + 0x130);
          if ((bVar1 < bVar2) || (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) != *unaff_x26))
          goto LAB_05723f3c;
          lVar12 = unaff_x23[8];
          if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_058658f4(lVar12,0,0);
          if ((uVar8 & 1) == 0) goto LAB_05723f24;
          lVar12 = unaff_x23[0xd];
          if (lVar12 == 0) goto LAB_05723f3c;
          iVar6 = 0;
          goto LAB_05723ca0;
        }
        if (iVar6 == 3) break;
        if (iVar6 == 2) {
          if (lVar13 == *(long *)(unaff_x28 + 0x58)) goto LAB_05723f24;
          bVar2 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ +
                           0x130);
          if ((bVar1 < bVar2) ||
             (*(long *)(lVar12 + (ulong)bVar2 * 8 + -8) !=
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__))
          goto LAB_05723f3c;
          param_3 = unaff_x23[0xd];
          if (param_3 == 0) {
            param_3 = **(long **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
          }
          if (unaff_x21 == (long *)0x0) goto LAB_05723f3c;
          uVar8 = (**(code **)(*unaff_x21 + 0x348))
                            (unaff_x21,lVar13,*(undefined8 *)(*unaff_x21 + 0x350));
          if ((uVar8 & 1) == 0) {
            (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar13,*(undefined8 *)(*unaff_x21 + 0x310));
          }
          if ((*(long *)(unaff_x28 + 0x58) == 0) ||
             (param_2 = (long *)FUN_0576b140(*(long *)(unaff_x28 + 0x58),0), param_2 == (long *)0x0)
             ) goto LAB_05723f3c;
          param_1 = *param_2;
          unaff_x25 = param_3;
          goto code_r0x05723db0;
        }
        if (iVar6 != 1) goto LAB_05723f24;
        plVar9 = *(long **)(unaff_x28 + 0x90);
        if (plVar9 == (long *)0x0) goto LAB_05723f3c;
        lVar12 = (**(code **)(*plVar9 + 0x308))(plVar9,lVar13,*(undefined8 *)(*plVar9 + 0x310));
        if (lVar12 == 0) goto LAB_05723ed4;
      }
      plVar9 = *(long **)(unaff_x28 + 0xb0);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d4730);
        FUN_05079bb8(plVar9,0);
        *(long **)(unaff_x28 + 0xb0) = plVar9;
      }
      uVar15 = *(undefined8 *)(unaff_x28 + 0xa8);
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                                 );
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if (*(byte *)(*unaff_x23 + 0x130) < bVar1) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = unaff_x23;
        if (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26) {
          plVar14 = (long *)0x0;
        }
      }
      FUN_05116b38(lVar12,0);
      *(long **)(lVar12 + 0x10) = plVar14;
      *(undefined8 *)(lVar12 + 0x18) = uVar15;
      if (plVar9 == (long *)0x0) goto LAB_05723f3c;
      (**(code **)(*plVar9 + 0x308))(plVar9,lVar12,*(undefined8 *)(*plVar9 + 0x310));
      plVar9 = *(long **)(unaff_x28 + 0x90);
      if (plVar9 == (long *)0x0) goto LAB_05723f3c;
      lVar12 = (**(code **)(*plVar9 + 0x308))(plVar9,lVar13,*(undefined8 *)(*plVar9 + 0x310));
      unaff_x26 = (long *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Remove__
      ;
      unaff_x29 = (long *)Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__;
    } while (lVar12 != 0);
LAB_05723ed4:
    plVar9 = *(long **)(unaff_x28 + 0x90);
    if (plVar9 == (long *)0x0) goto LAB_05723f3c;
    (**(code **)(*plVar9 + 0x2a8))(plVar9,lVar13,unaff_x23,*(undefined8 *)(*plVar9 + 0x2b0));
    System_Xml_XmlUrlResolver__GetEntity(unaff_x28,lVar13);
  } while( true );
LAB_05723ca0:
  iVar7 = FUN_05079c6c(lVar12,0);
  if (iVar7 <= iVar6) goto LAB_05723f24;
  plVar9 = (long *)unaff_x23[0xd];
  if (plVar9 == (long *)0x0) goto LAB_05723f3c;
  plVar9 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
  if (plVar9 == (long *)0x0) {
LAB_05723f08:
    FUN_058572c8(unaff_x28,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_Add__
                 ,unaff_x23,0);
    goto LAB_05723f24;
  }
  bVar1 = *(byte *)(*unaff_x27 + 0x130);
  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) goto LAB_05723f08;
  lVar12 = unaff_x23[0xd];
  iVar6 = iVar6 + 1;
  if (lVar12 == 0) goto LAB_05723f3c;
  goto LAB_05723ca0;
LAB_05723fa4:
  do {
    lVar13 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
    if (lVar13 == 0) goto LAB_05723f3c;
    *(long *)(lVar13 + 0x28) = unaff_x19;
    plVar10 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
    if (plVar10 == (long *)0x0) {
LAB_05724010:
      plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                  (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
      if (plVar10 != (long *)0x0) {
        lVar13 = *(long *)puVar4;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
        goto LAB_05724058;
        plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar10 != (long *)0x0) {
          lVar13 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
          goto LAB_05724640;
        }
        FUN_0572740c(unaff_x28,plVar10);
        uVar15 = FUN_05769f9c();
        if (plVar10 != (long *)0x0) {
LAB_05724540:
          lVar13 = plVar10[0xd];
          goto System_Xml_XmlException__get_LineNumber;
        }
        goto LAB_05723f3c;
      }
LAB_05724058:
      plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                  (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
      if (plVar10 == (long *)0x0) {
LAB_057240a0:
        plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar14 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *plVar14)) {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar10 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar14 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar14))
              goto LAB_05724640;
            }
            FUN_05727d7c(unaff_x28,plVar10,0);
            goto LAB_057243d8;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar10 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                               0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__))
              goto LAB_05724640;
            }
            FUN_0572831c(unaff_x28,plVar10);
            uVar15 = FUN_0576a064();
            if (plVar10 != (long *)0x0) {
              lVar13 = plVar10[0x18];
              goto System_Xml_XmlException__get_LineNumber;
            }
            goto LAB_05723f3c;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
             )) {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar10 == (long *)0x0) {
              FUN_05728564(unaff_x28,0);
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                             + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
               )) {
LAB_05724640:
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar10);
            }
            FUN_05728564(unaff_x28,plVar10);
            uVar15 = *(undefined8 *)(unaff_x19 + 0xa0);
            goto LAB_05724540;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
             )) {
            uVar15 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
            plVar10 = (long *)FUN_02a7e998(uVar15,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Clear__
                                          );
            FUN_05728728(unaff_x28,plVar10);
            if (plVar10 != (long *)0x0) {
              uVar15 = *(undefined8 *)(unaff_x19 + 0xa8);
              goto LAB_05724540;
            }
            goto LAB_05723f3c;
          }
        }
        plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x27 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27)) {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                        (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
            if (plVar10 == (long *)0x0) {
LAB_057245a4:
              plVar10 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*unaff_x27 + 0x130);
              if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_057245a4;
              if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27) {
                plVar10 = (long *)0x0;
              }
            }
            FUN_0572897c(unaff_x28,plVar10);
            goto System_Xml_XmlException__get_Message;
          }
        }
        uVar15 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        FUN_058572c8(unaff_x28,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_get_Item__
                     ,uVar15,0);
        uVar15 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (lVar12 == 0) goto LAB_05723f3c;
        FUN_02e441a0(lVar12,uVar15,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                    );
      }
      else {
        lVar13 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
        goto LAB_057240a0;
        plVar10 = (long *)(**(code **)(*plVar9 + 0x308))
                                    (plVar9,iVar6,*(undefined8 *)(*plVar9 + 0x310));
        if (plVar10 != (long *)0x0) {
          lVar13 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
          goto LAB_05724640;
        }
        FUN_05727504(unaff_x28,plVar10,0);
LAB_057243d8:
        uVar15 = FUN_0576a000();
        if (plVar10 == (long *)0x0) goto LAB_05723f3c;
        uVar11 = FUN_0577ac88(plVar10,0);
        FUN_05856a70(unaff_x28,uVar15,uVar11,plVar10,0);
        plVar14 = (long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
      goto LAB_05724010;
      FUN_057272a8(unaff_x28,plVar10);
      uVar15 = FUN_05769f38();
      lVar13 = plVar10[0x10];
System_Xml_XmlException__get_LineNumber:
      FUN_05856a70(unaff_x28,uVar15,lVar13,plVar10,0);
    }
System_Xml_XmlException__get_Message:
    iVar6 = iVar6 + 1;
    iVar7 = FUN_05079c6c(plVar9,0);
  } while (iVar6 < iVar7);
FUN_057245cc:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
  ;
  if (lVar12 == 0) {
LAB_05723f3c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (0 < *(int *)(lVar12 + 0x18)) {
    iVar6 = 0;
    do {
      lVar13 = *(long *)(unaff_x19 + 0x60);
      uVar15 = FUN_03abf644(lVar12,iVar6,*(undefined8 *)puVar3);
      if (lVar13 == 0) goto LAB_05723f3c;
      FUN_0577173c(lVar13,uVar15,0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar12 + 0x18));
  }
  return;
}


