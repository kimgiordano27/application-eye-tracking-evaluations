/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaValidator$$SendValidationEvent
ENTRY_POINT: 054ce210
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


bool System_Xml_Schema_XmlSchemaValidator__SendValidationEvent(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long unaff_x22;
  long *unaff_x23;
  
  FUN_02d6084c(System_Action<ARHumanBodiesChangedEventArgs>_TypeInfo);
  FUN_02d6084c(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
  FUN_02d6084c(System_Action<Column,_ColumnDataType>_TypeInfo);
  FUN_02d6084c(System_Action<Column,_int>_TypeInfo);
  FUN_02d6084c(System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo);
  FUN_02d6084c(System_Action<DragGesture,_Touch>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xba7) = 1;
  *unaff_x19 = 0;
  thunk_FUN_02dd37b4();
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x10) == 0) {
LAB_054cf450:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = thunk_FUN_04e8bd3c();
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar1);
    lVar1 = *unaff_x23;
  }
  if ((uVar2 & 1) == 0) {
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x18) == 0) goto LAB_054cf450;
    uVar2 = thunk_FUN_04e8bd3c();
    lVar1 = *unaff_x23;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar1);
      lVar1 = *unaff_x23;
    }
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xf0);
      if (lVar1 == 0) goto LAB_054cf450;
      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
      if ((uVar2 & 1) == 0) {
        lVar1 = *unaff_x23;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar1 = *unaff_x23;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xf8);
        if (lVar1 == 0) goto LAB_054cf450;
        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
        if ((uVar2 & 1) == 0) {
          lVar1 = *unaff_x23;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar1 = *unaff_x23;
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x68);
          if (lVar1 == 0) goto LAB_054cf450;
          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
          if ((uVar2 & 1) == 0) {
            uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                        System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo)
            ;
            if ((uVar2 & 1) == 0) goto System_Xml_Schema_XmlSchemaValidator__PrintExpectedElements;
            lVar1 = *(long *)(PTR_DAT_0675e258 + 0xa0);
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar3 = FUN_05015c2c(lVar1 + 0x20,0);
            lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Unity_VisualScripting_Antlr3_Runtime_Tree_TreeWizard_WildcardTreePattern_var
                                      );
            FUN_054bd96c(lVar1,uVar3,0);
            goto LAB_054ce718;
          }
          lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<Task>_TypeInfo);
          FUN_054e0c34(lVar1,0);
        }
        else {
          lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<TransformDispatchData>_TypeInfo);
          FUN_054e3d4c(lVar1,0);
        }
      }
      else {
        lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<VFXOutputEventArgs>_TypeInfo);
        FUN_054e3a54(lVar1,0);
      }
      goto FUN_054cf280;
    }
    if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x1e0) == 0) goto LAB_054cf450;
    uVar2 = thunk_FUN_04e8bd3c();
    if ((uVar2 & 1) != 0) {
      lVar1 = *unaff_x23;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x23;
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x68);
      if (lVar1 == 0) goto LAB_054cf450;
      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
      if ((uVar2 & 1) == 0) {
        lVar1 = *unaff_x23;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar1 = *unaff_x23;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xf8);
        if (lVar1 == 0) goto LAB_054cf450;
        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
        if ((uVar2 & 1) == 0) goto System_Xml_Schema_XmlSchemaValidator__PrintExpectedElements;
        lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<XRInputValueReader>_TypeInfo);
        FUN_054e3fe0(lVar1,0);
      }
      else {
        lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<XRInputSubsystem>_TypeInfo);
        FUN_054e0e5c(lVar1,0);
      }
      goto FUN_054cf280;
    }
    uVar2 = thunk_FUN_04e8bd3c();
    if ((uVar2 & 1) == 0) goto System_Xml_Schema_XmlSchemaValidator__PrintExpectedElements;
    uVar2 = thunk_FUN_04e8bd3c();
    if ((uVar2 & 1) == 0) {
      uVar2 = thunk_FUN_04e8bd3c();
      if ((uVar2 & 1) == 0) goto System_Xml_Schema_XmlSchemaValidator__PrintExpectedElements;
      lVar1 = *(long *)(PTR_DAT_0675e258 + 0xe0);
      puVar4 = (undefined8 *)System_Action<ARHumanBodiesChangedEventArgs>_TypeInfo;
    }
    else {
      lVar1 = *(long *)(PTR_DAT_0675e258 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_06782670;
    }
    uVar3 = *puVar4;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_05015c2c(uVar3,0);
    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<ShareAndLocalizeParams>_TypeInfo);
    FUN_054e7118(lVar1,uVar3,0);
LAB_054ce718:
    *unaff_x19 = lVar1;
  }
  else {
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x70);
    if (lVar1 == 0) goto LAB_054cf450;
    uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
    if ((uVar2 & 1) == 0) {
      lVar1 = *unaff_x23;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar1 = *unaff_x23;
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x78);
      if (lVar1 == 0) goto LAB_054cf450;
      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
      if ((uVar2 & 1) == 0) {
        lVar1 = *unaff_x23;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar1 = *unaff_x23;
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x80);
        if (lVar1 == 0) goto LAB_054cf450;
        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
        if ((uVar2 & 1) == 0) {
          lVar1 = *unaff_x23;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar1 = *unaff_x23;
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x88);
          if (lVar1 == 0) goto LAB_054cf450;
          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
          if ((uVar2 & 1) == 0) {
            lVar1 = *unaff_x23;
            if (*(int *)(lVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar1 = *unaff_x23;
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x90);
            if (lVar1 == 0) goto LAB_054cf450;
            uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
            if ((uVar2 & 1) == 0) {
              lVar1 = *unaff_x23;
              if (*(int *)(lVar1 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar1 = *unaff_x23;
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x98);
              if (lVar1 == 0) goto LAB_054cf450;
              uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
              if ((uVar2 & 1) == 0) {
                lVar1 = *unaff_x23;
                if (*(int *)(lVar1 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar1 = *unaff_x23;
                }
                lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xa0);
                if (lVar1 == 0) goto LAB_054cf450;
                uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                if ((uVar2 & 1) == 0) {
                  lVar1 = *unaff_x23;
                  if (*(int *)(lVar1 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar1 = *unaff_x23;
                  }
                  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xa8);
                  if (lVar1 == 0) goto LAB_054cf450;
                  uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                  if ((uVar2 & 1) == 0) {
                    lVar1 = *unaff_x23;
                    if (*(int *)(lVar1 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar1 = *unaff_x23;
                    }
                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x158);
                    if (lVar1 == 0) goto LAB_054cf450;
                    uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                    if ((uVar2 & 1) == 0) {
                      lVar1 = *unaff_x23;
                      if (*(int *)(lVar1 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar1 = *unaff_x23;
                      }
                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x160);
                      if (lVar1 == 0) goto LAB_054cf450;
                      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                      if ((uVar2 & 1) == 0) {
                        lVar1 = *unaff_x23;
                        if (*(int *)(lVar1 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar1 = *unaff_x23;
                        }
                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x168);
                        if (lVar1 == 0) goto LAB_054cf450;
                        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                        if ((uVar2 & 1) == 0) {
                          lVar1 = *unaff_x23;
                          if (*(int *)(lVar1 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                            lVar1 = *unaff_x23;
                          }
                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x170);
                          if (lVar1 == 0) goto LAB_054cf450;
                          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                          if ((uVar2 & 1) == 0) {
                            lVar1 = *unaff_x23;
                            if (*(int *)(lVar1 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4();
                              lVar1 = *unaff_x23;
                            }
                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x178);
                            if (lVar1 == 0) goto LAB_054cf450;
                            uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                            if ((uVar2 & 1) == 0) {
                              lVar1 = *unaff_x23;
                              if (*(int *)(lVar1 + 0xe4) == 0) {
                                thunk_FUN_02dbd7b4();
                                lVar1 = *unaff_x23;
                              }
                              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xb0);
                              if (lVar1 == 0) goto LAB_054cf450;
                              uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                              if ((uVar2 & 1) == 0) {
                                lVar1 = *unaff_x23;
                                if (*(int *)(lVar1 + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                  lVar1 = *unaff_x23;
                                }
                                lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xb8);
                                if (lVar1 == 0) goto LAB_054cf450;
                                uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                                if ((uVar2 & 1) == 0) {
                                  lVar1 = *unaff_x23;
                                  if (*(int *)(lVar1 + 0xe4) == 0) {
                                    thunk_FUN_02dbd7b4();
                                    lVar1 = *unaff_x23;
                                  }
                                  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xc0);
                                  if (lVar1 == 0) goto LAB_054cf450;
                                  uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                                  if ((uVar2 & 1) == 0) {
                                    lVar1 = *unaff_x23;
                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                      thunk_FUN_02dbd7b4();
                                      lVar1 = *unaff_x23;
                                    }
                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 200);
                                    if (lVar1 == 0) goto LAB_054cf450;
                                    uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                                    if ((uVar2 & 1) == 0) {
                                      lVar1 = *unaff_x23;
                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                        thunk_FUN_02dbd7b4();
                                        lVar1 = *unaff_x23;
                                      }
                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xd0);
                                      if (lVar1 == 0) goto LAB_054cf450;
                                      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                                      if ((uVar2 & 1) == 0) {
                                        lVar1 = *unaff_x23;
                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                          thunk_FUN_02dbd7b4();
                                          lVar1 = *unaff_x23;
                                        }
                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xd8);
                                        if (lVar1 == 0) goto LAB_054cf450;
                                        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                                        if ((uVar2 & 1) == 0) {
                                          lVar1 = *unaff_x23;
                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                            thunk_FUN_02dbd7b4();
                                            lVar1 = *unaff_x23;
                                          }
                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x118);
                                          if (lVar1 == 0) goto LAB_054cf450;
                                          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18));
                                          if ((uVar2 & 1) == 0) {
                                            lVar1 = *unaff_x23;
                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                              thunk_FUN_02dbd7b4();
                                              lVar1 = *unaff_x23;
                                            }
                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x120);
                                            if (lVar1 == 0) goto LAB_054cf450;
                                            uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)(lVar1 + 0x18)
                                                                      );
                                            if ((uVar2 & 1) == 0) {
                                              lVar1 = *unaff_x23;
                                              if (*(int *)(lVar1 + 0xe4) == 0) {
                                                thunk_FUN_02dbd7b4();
                                                lVar1 = *unaff_x23;
                                              }
                                              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x128);
                                              if (lVar1 == 0) goto LAB_054cf450;
                                              uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                          (lVar1 + 0x18));
                                              if ((uVar2 & 1) == 0) {
                                                lVar1 = *unaff_x23;
                                                if (*(int *)(lVar1 + 0xe4) == 0) {
                                                  thunk_FUN_02dbd7b4();
                                                  lVar1 = *unaff_x23;
                                                }
                                                lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x130);
                                                if (lVar1 == 0) goto LAB_054cf450;
                                                uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                            (lVar1 + 0x18));
                                                if ((uVar2 & 1) == 0) {
                                                  lVar1 = *unaff_x23;
                                                  if (*(int *)(lVar1 + 0xe4) == 0) {
                                                    thunk_FUN_02dbd7b4();
                                                    lVar1 = *unaff_x23;
                                                  }
                                                  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x138)
                                                  ;
                                                  if (lVar1 == 0) goto LAB_054cf450;
                                                  uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                              (lVar1 + 0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x23;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02dbd7b4();
                                                      lVar1 = *unaff_x23;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                     0x140);
                                                    if (lVar1 == 0) goto LAB_054cf450;
                                                    uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x23;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02dbd7b4();
                                                        lVar1 = *unaff_x23;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0x148);
                                                      if (lVar1 == 0) goto LAB_054cf450;
                                                      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x23;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02dbd7b4();
                                                          lVar1 = *unaff_x23;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0x150);
                                                        if (lVar1 == 0) goto LAB_054cf450;
                                                        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x23;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02dbd7b4();
                                                            lVar1 = *unaff_x23;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x180);
                                                          if (lVar1 == 0) goto LAB_054cf450;
                                                          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x23;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02dbd7b4();
                                                              lVar1 = *unaff_x23;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x188);
                                                            if (lVar1 == 0) goto LAB_054cf450;
                                                            uVar2 = thunk_FUN_04e8bd3c(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x23;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02dbd7b4();
                                                      lVar1 = *unaff_x23;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 400)
                                                    ;
                                                    if (lVar1 == 0) goto LAB_054cf450;
                                                    uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x23;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02dbd7b4();
                                                        lVar1 = *unaff_x23;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0x198);
                                                      if (lVar1 == 0) goto LAB_054cf450;
                                                      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x23;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02dbd7b4();
                                                          lVar1 = *unaff_x23;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0x1a0);
                                                        if (lVar1 == 0) goto LAB_054cf450;
                                                        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x23;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02dbd7b4();
                                                            lVar1 = *unaff_x23;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x1a8);
                                                          if (lVar1 == 0) goto LAB_054cf450;
                                                          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x23;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02dbd7b4();
                                                              lVar1 = *unaff_x23;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x1b0);
                                                            if (lVar1 == 0) goto LAB_054cf450;
                                                            uVar2 = thunk_FUN_04e8bd3c(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x23;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02dbd7b4();
                                                      lVar1 = *unaff_x23;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                     0x1b8);
                                                    if (lVar1 == 0) goto LAB_054cf450;
                                                    uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x23;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02dbd7b4();
                                                        lVar1 = *unaff_x23;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0x1c0);
                                                      if (lVar1 == 0) goto LAB_054cf450;
                                                      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x23;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02dbd7b4();
                                                          lVar1 = *unaff_x23;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0x1c8);
                                                        if (lVar1 == 0) goto LAB_054cf450;
                                                        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x23;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02dbd7b4();
                                                            lVar1 = *unaff_x23;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x1d0);
                                                          if (lVar1 == 0) goto LAB_054cf450;
                                                          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x23;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02dbd7b4();
                                                              lVar1 = *unaff_x23;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x1d8);
                                                            if (lVar1 == 0) goto LAB_054cf450;
                                                            uVar2 = thunk_FUN_04e8bd3c(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar1 = *unaff_x23;
                                                    if (*(int *)(lVar1 + 0xe4) == 0) {
                                                      thunk_FUN_02dbd7b4();
                                                      lVar1 = *unaff_x23;
                                                    }
                                                    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0xe0
                                                                     );
                                                    if (lVar1 == 0) goto LAB_054cf450;
                                                    uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                (lVar1 + 0x18));
                                                    if ((uVar2 & 1) == 0) {
                                                      lVar1 = *unaff_x23;
                                                      if (*(int *)(lVar1 + 0xe4) == 0) {
                                                        thunk_FUN_02dbd7b4();
                                                        lVar1 = *unaff_x23;
                                                      }
                                                      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                       0xe8);
                                                      if (lVar1 == 0) goto LAB_054cf450;
                                                      uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                  (lVar1 + 0x18));
                                                      if ((uVar2 & 1) == 0) {
                                                        lVar1 = *unaff_x23;
                                                        if (*(int *)(lVar1 + 0xe4) == 0) {
                                                          thunk_FUN_02dbd7b4();
                                                          lVar1 = *unaff_x23;
                                                        }
                                                        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) +
                                                                         0xf0);
                                                        if (lVar1 == 0) goto LAB_054cf450;
                                                        uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                    (lVar1 + 0x18));
                                                        if ((uVar2 & 1) == 0) {
                                                          lVar1 = *unaff_x23;
                                                          if (*(int *)(lVar1 + 0xe4) == 0) {
                                                            thunk_FUN_02dbd7b4();
                                                            lVar1 = *unaff_x23;
                                                          }
                                                          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8)
                                                                           + 0x100);
                                                          if (lVar1 == 0) goto LAB_054cf450;
                                                          uVar2 = thunk_FUN_04e8bd3c(*(undefined8 *)
                                                                                      (lVar1 + 0x18)
                                                                                    );
                                                          if ((uVar2 & 1) == 0) {
                                                            lVar1 = *unaff_x23;
                                                            if (*(int *)(lVar1 + 0xe4) == 0) {
                                                              thunk_FUN_02dbd7b4();
                                                              lVar1 = *unaff_x23;
                                                            }
                                                            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8
                                                                                       ) + 0x108);
                                                            if (lVar1 == 0) goto LAB_054cf450;
                                                            uVar2 = thunk_FUN_04e8bd3c(*(undefined8
                                                                                         *)(lVar1 + 
                                                  0x18));
                                                  if ((uVar2 & 1) == 0)
                                                  goto 
                                                  System_Xml_Schema_XmlSchemaValidator__PrintExpectedElements
                                                  ;
                                                  lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  System_Action<Type>_TypeInfo);
                                                  FUN_054e4274(lVar1,0);
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<XRInputButtonReader>_TypeInfo);
                                                  FUN_054e4044(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<bool,_List<OVRAnchor>>_TypeInfo);
                                                  FUN_054e3ce8(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<TwoFingerDragGesture>_TypeInfo);
                                                  FUN_054e36b4(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<TapGesture>_TypeInfo);
                                                  FUN_054e3488(lVar1,0);
                                                  }
                                                  goto FUN_054cf280;
                                                  }
                                                  }
                                                  lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo
                                                  );
                                                  FUN_054e3424(lVar1,0);
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<XRNodeState>_TypeInfo);
                                                  FUN_054e33c0(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<float3>_TypeInfo);
                                                  FUN_054e335c(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<OVRColocationSession_Data>_TypeInfo)
                                                  ;
                                                  FUN_054e32f8(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<NearFarInteractor_Region>_TypeInfo);
                                                  FUN_054e3294(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<InputStateHistory_Record>_TypeInfo);
                                                  FUN_054e3230(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo
                                                  );
                                                  FUN_054e31cc(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo
                                                  );
                                                  FUN_054e3168(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<OVRManager_PassthroughInitializationState>_TypeInfo
                                                  );
                                                  FUN_054e3104(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                                                  );
                                                  FUN_054e30a0(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<DebugUI_Field<int>,_int>_TypeInfo);
                                                  FUN_054e303c(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<BestFitAllocator_Block>_TypeInfo);
                                                  FUN_054e2fd8(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<Allocator2D_Row>_TypeInfo);
                                                  FUN_054e2f74(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<DebugUI_Panel>_TypeInfo);
                                                  FUN_054e2f10(lVar1,0);
                                                  }
                                                  }
                                                  else {
                                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
                                                  FUN_054e2eac(lVar1,0);
                                                  }
                                                }
                                                else {
                                                  lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  System_Action<HandTracking_SubsystemCreatedEventArgs>_TypeInfo
                                                  );
                                                  FUN_054e2e48(lVar1,0);
                                                }
                                              }
                                              else {
                                                lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                        
                                                  System_Action<InputAction_CallbackContext>_TypeInfo
                                                  );
                                                FUN_054e2de4(lVar1,0);
                                              }
                                            }
                                            else {
                                              lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                    
                                                  System_Action<XRMovableBody>_TypeInfo);
                                              FUN_054e2d80(lVar1,0);
                                            }
                                          }
                                          else {
                                            lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  System_Action<List<OVRAnchor>,_int>_TypeInfo);
                                            FUN_054e2d1c(lVar1,0);
                                          }
                                        }
                                        else {
                                          lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                      System_Action<ulong>_TypeInfo)
                                          ;
                                          FUN_054e2b18(lVar1,0);
                                        }
                                      }
                                      else {
                                        lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                        
                                                  System_Action<TeleportationMultiAnchorVolume>_TypeInfo
                                                  );
                                        FUN_054e28bc(lVar1,0);
                                      }
                                    }
                                    else {
                                      lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                  System_Action<TimerState>_TypeInfo
                                                                );
                                      FUN_054e263c(lVar1,0);
                                    }
                                  }
                                  else {
                                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                
                                                  System_Action<TrackedDevice>_TypeInfo);
                                    FUN_054e2454(lVar1,0);
                                  }
                                }
                                else {
                                  lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                              System_Action<Transform>_TypeInfo);
                                  FUN_054e226c(lVar1,0);
                                }
                              }
                              else {
                                lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                        
                                                  System_Action<XRBodyTransformer>_TypeInfo);
                                FUN_054e2070(lVar1,0);
                              }
                            }
                            else {
                              lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  System_Action<XRInputModalityManager_InputMode>_TypeInfo
                                                  );
                              FUN_054e200c(lVar1,0);
                            }
                          }
                          else {
                            lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                
                                                  System_Action<DebugUI_Field<bool>,_bool>_TypeInfo)
                            ;
                            FUN_054e1fa8(lVar1,0);
                          }
                        }
                        else {
                          lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo
                                                  );
                          FUN_054e1f44(lVar1,0);
                        }
                      }
                      else {
                        lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  System_Action<DebugUI_Field<Object>,_Object>_TypeInfo
                                                  );
                        FUN_054e1ee0(lVar1,0);
                      }
                    }
                    else {
                      lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  System_Action<OVRHand_MicrogestureType>_TypeInfo);
                      FUN_054e1e7c(lVar1,0);
                    }
                  }
                  else {
                    lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<TwistGesture>_TypeInfo);
                    FUN_054e1c60(lVar1,0);
                  }
                }
                else {
                  lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<VisualElement>_TypeInfo);
                  FUN_054e1a6c(lVar1,0);
                }
              }
              else {
                lVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                            System_Action<TreeViewExpansionChangedArgs>_TypeInfo);
                FUN_054e187c(lVar1,0);
              }
            }
            else {
              lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<XRHand>_TypeInfo);
              FUN_054e1688(lVar1,0);
            }
          }
          else {
            lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<TypeDispatchData>_TypeInfo);
            FUN_054e1494(lVar1,0);
          }
        }
        else {
          lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<VectorImageRenderInfo>_TypeInfo);
          FUN_054e12a0(lVar1,0);
        }
      }
      else {
        lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<TypePathVisitor>_TypeInfo);
        FUN_054e10ac(lVar1,0);
      }
    }
    else {
      lVar1 = thunk_FUN_02d9d534(*(undefined8 *)System_Action<Tab>_TypeInfo);
      FUN_054e0ec0(lVar1,0);
    }
FUN_054cf280:
    *unaff_x19 = lVar1;
  }
  thunk_FUN_02dd37b4();
System_Xml_Schema_XmlSchemaValidator__PrintExpectedElements:
  return *unaff_x19 != 0;
}


