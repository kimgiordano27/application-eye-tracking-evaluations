/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch0deltax
ENTRY_POINT: 0206d884
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch0deltax(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x810));
  thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaAnnotation_TypeInfo);
  thunk_FUN_00d48444(Method_RhythmGameStarter_NoteRecorder_<Start>b__38_0__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_Material>_set_Item__);
  thunk_FUN_00d48444(PTR_DAT_033f3338);
  thunk_FUN_00d48444(Method_SaveLoaderInterface_SaveSelected__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_GlyphPairAdjustmentRecord>_Add__);
  thunk_FUN_00d48444(
                    Method_RhythmGameStarter_CountDown_<CountDownCoroutine>d__4_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_00d48444(System_Collections_Generic_List<UnityEvent>_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<OVRAnchor,_MRUK_TrackableState>__ctor__
                    );
  thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_143__);
  thunk_FUN_00d48444(Method_System_Collections_Queue__ctor__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<WitResponseNode>_Pop__);
  thunk_FUN_00d48444(PTR_DAT_033eecb0);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_set_Item__
                    );
  thunk_FUN_00d48444(StringLiteral_13163);
  thunk_FUN_00d48444(StringLiteral_12198);
  thunk_FUN_00d48444(Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__);
  thunk_FUN_00d48444(StringLiteral_4028);
  thunk_FUN_00d48444(PTR_DAT_033eec50);
  thunk_FUN_00d48444(
                    Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Contains__
                    );
  *(undefined1 *)(unaff_x19 + 0xc20) = 1;
  lVar8 = thunk_FUN_00d62348(*unaff_x20);
  puVar3 = System_Xml_Schema_XmlSchemaAnnotation_TypeInfo;
  puVar1 = PTR_DAT_033ea8a0;
  if (lVar8 != 0) {
    FUN_017b46ec(lVar8,0);
    **(long **)(*(long *)puVar3 + 0xb8) = lVar8;
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,0x13);
    puVar1 = StringLiteral_13163;
    if (plVar9 != (long *)0x0) {
      if ((*(long *)StringLiteral_13163 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(*(long *)StringLiteral_13163,*(undefined8 *)(*plVar9 + 0x40)),
         lVar8 == 0)) {
LAB_0206de70:
        uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar10,0);
      }
      puVar2 = PTR_DAT_033eecb0;
      uVar11 = *(uint *)(plVar9 + 3);
      if (uVar11 != 0) {
        plVar9[4] = *(long *)puVar1;
        lVar8 = *(long *)puVar2;
        if (lVar8 != 0) {
          lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar8 == 0) goto LAB_0206de70;
          uVar11 = *(uint *)(plVar9 + 3);
        }
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<OVRAnchor,_MRUK_TrackableState>__ctor__;
        if (1 < uVar11) {
          plVar9[5] = *(long *)puVar2;
          lVar8 = *(long *)puVar1;
          if (lVar8 != 0) {
            lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar8 == 0) goto LAB_0206de70;
            uVar11 = *(uint *)(plVar9 + 3);
          }
          puVar2 = 
          Method_RhythmGameStarter_CountDown_<CountDownCoroutine>d__4_System_Collections_IEnumerator_Reset__
          ;
          if (2 < uVar11) {
            plVar9[6] = *(long *)puVar1;
            lVar8 = *(long *)puVar2;
            if (lVar8 != 0) {
              lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar8 == 0) goto LAB_0206de70;
              uVar11 = *(uint *)(plVar9 + 3);
            }
            puVar1 = Method_SaveLoaderInterface_SaveSelected__;
            if (3 < uVar11) {
              plVar9[7] = *(long *)puVar2;
              lVar8 = *(long *)puVar1;
              if (lVar8 != 0) {
                lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar8 == 0) goto LAB_0206de70;
                uVar11 = *(uint *)(plVar9 + 3);
              }
              puVar2 = Method_System_Collections_Queue__ctor__;
              if (4 < uVar11) {
                plVar9[8] = *(long *)puVar1;
                lVar8 = *(long *)puVar2;
                if (lVar8 != 0) {
                  lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                  if (lVar8 == 0) goto LAB_0206de70;
                  uVar11 = *(uint *)(plVar9 + 3);
                }
                puVar1 = PTR_DAT_033f3338;
                if (5 < uVar11) {
                  plVar9[9] = *(long *)puVar2;
                  lVar8 = *(long *)puVar1;
                  if (lVar8 != 0) {
                    lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar8 == 0) goto LAB_0206de70;
                    uVar11 = *(uint *)(plVar9 + 3);
                  }
                  puVar2 = 
                  Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_set_Item__
                  ;
                  if (6 < uVar11) {
                    plVar9[10] = *(long *)puVar1;
                    lVar8 = *(long *)puVar2;
                    if (lVar8 != 0) {
                      lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                      if (lVar8 == 0) goto LAB_0206de70;
                      uVar11 = *(uint *)(plVar9 + 3);
                    }
                    puVar1 = Method_System_Collections_Generic_Dictionary<uint,_Material>_set_Item__
                    ;
                    if (7 < uVar11) {
                      plVar9[0xb] = *(long *)puVar2;
                      lVar8 = *(long *)puVar1;
                      if (lVar8 != 0) {
                        lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                        if (lVar8 == 0) goto LAB_0206de70;
                        uVar11 = *(uint *)(plVar9 + 3);
                      }
                      puVar2 = StringLiteral_12198;
                      if (8 < uVar11) {
                        plVar9[0xc] = *(long *)puVar1;
                        lVar8 = *(long *)puVar2;
                        if (lVar8 != 0) {
                          lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                          if (lVar8 == 0) goto LAB_0206de70;
                          uVar11 = *(uint *)(plVar9 + 3);
                        }
                        puVar1 = 
                        Method_System_Collections_Generic_List<TMP_GlyphPairAdjustmentRecord>_Add__;
                        if (9 < uVar11) {
                          plVar9[0xd] = *(long *)puVar2;
                          lVar8 = *(long *)puVar1;
                          if (lVar8 != 0) {
                            lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                            if (lVar8 == 0) goto LAB_0206de70;
                            uVar11 = *(uint *)(plVar9 + 3);
                          }
                          puVar2 = StringLiteral_4028;
                          if (10 < uVar11) {
                            plVar9[0xe] = *(long *)puVar1;
                            lVar8 = *(long *)puVar2;
                            if (lVar8 != 0) {
                              lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                              if (lVar8 == 0) goto LAB_0206de70;
                              uVar11 = *(uint *)(plVar9 + 3);
                            }
                            puVar1 = System_Collections_Generic_List<UnityEvent>_TypeInfo;
                            if (0xb < uVar11) {
                              plVar9[0xf] = *(long *)puVar2;
                              lVar8 = *(long *)puVar1;
                              if (lVar8 != 0) {
                                lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                                if (lVar8 == 0) goto LAB_0206de70;
                                uVar11 = *(uint *)(plVar9 + 3);
                              }
                              puVar2 = Method_RhythmGameStarter_NoteRecorder_<Start>b__38_0__;
                              if (0xc < uVar11) {
                                plVar9[0x10] = *(long *)puVar1;
                                lVar8 = *(long *)puVar2;
                                if (lVar8 != 0) {
                                  lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                                  if (lVar8 == 0) goto LAB_0206de70;
                                  uVar11 = *(uint *)(plVar9 + 3);
                                }
                                puVar1 = 
                                Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_Contains__
                                ;
                                if (0xd < uVar11) {
                                  plVar9[0x11] = *(long *)puVar2;
                                  lVar8 = *(long *)puVar1;
                                  if (lVar8 != 0) {
                                    lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40)
                                                              );
                                    if (lVar8 == 0) goto LAB_0206de70;
                                    uVar11 = *(uint *)(plVar9 + 3);
                                  }
                                  puVar2 = 
                                  Method_System_Collections_Generic_Stack<WitResponseNode>_Pop__;
                                  if (0xe < uVar11) {
                                    plVar9[0x12] = *(long *)puVar1;
                                    lVar8 = *(long *)puVar2;
                                    if (lVar8 != 0) {
                                      lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                        (*plVar9 + 0x40));
                                      if (lVar8 == 0) goto LAB_0206de70;
                                      uVar11 = *(uint *)(plVar9 + 3);
                                    }
                                    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_143__;
                                    if (0xf < uVar11) {
                                      plVar9[0x13] = *(long *)puVar2;
                                      lVar8 = *(long *)puVar1;
                                      if (lVar8 != 0) {
                                        lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                          (*plVar9 + 0x40));
                                        if (lVar8 == 0) goto LAB_0206de70;
                                        uVar11 = *(uint *)(plVar9 + 3);
                                      }
                                      puVar2 = PTR_DAT_033eec50;
                                      if (0x10 < uVar11) {
                                        plVar9[0x14] = *(long *)puVar1;
                                        lVar8 = *(long *)puVar2;
                                        if (lVar8 != 0) {
                                          lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                            (*plVar9 + 0x40));
                                          if (lVar8 == 0) goto LAB_0206de70;
                                          uVar11 = *(uint *)(plVar9 + 3);
                                        }
                                        puVar1 = 
                                        Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__;
                                        if (0x11 < uVar11) {
                                          plVar9[0x15] = *(long *)puVar2;
                                          lVar8 = *(long *)puVar1;
                                          if (lVar8 != 0) {
                                            lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)
                                                                              (*plVar9 + 0x40));
                                            if (lVar8 == 0) goto LAB_0206de70;
                                            uVar11 = *(uint *)(plVar9 + 3);
                                          }
                                          if (0x12 < uVar11) {
                                            plVar9[0x16] = *(long *)puVar1;
                                            puVar6 = StringLiteral_8260;
                                            puVar4 = 
                                            Method_System_Xml_Schema_XdrBuilder_XDR_EndAttributeDtType__
                                            ;
                                            puVar2 = 
                                            Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                                            ;
                                            *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 8) =
                                                 plVar9;
                                            puVar7 = StringLiteral_13820;
                                            puVar5 = StringLiteral_7511;
                                            puVar1 = 
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_StreamWriter_<FlushAsyncInternal>d__74>__
                                            ;
                                            uVar10 = FUN_00da4fb8(*(undefined8 *)puVar6,0x20);
                                            FUN_016a34e8(uVar10,*(undefined8 *)puVar4,0);
                                            *(undefined8 *)
                                             (*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar10;
                                            uVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,6);
                                            FUN_016a34e8(uVar10,*(undefined8 *)puVar1,0);
                                            *(undefined8 *)
                                             (*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar10;
                                            uVar10 = FUN_00da4fb8(*(undefined8 *)puVar7,0x80);
                                            FUN_016a34e8(uVar10,*(undefined8 *)puVar5,0);
                                            *(undefined8 *)
                                             (*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar10;
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
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


