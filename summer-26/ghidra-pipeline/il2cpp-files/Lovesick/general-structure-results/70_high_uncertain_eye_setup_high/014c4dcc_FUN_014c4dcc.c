/*
FUNCTION_NAME: FUN_014c4dcc
ENTRY_POINT: 014c4dcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_014c4dcc(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  
  if ((DAT_03776e44 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_702);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MockTouch>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_ThrowIncorrectTokenException__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventSystem>_RemoveAt__);
    thunk_FUN_00d48444(StringLiteral_10809);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_770);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                      );
    DAT_03776e44 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if ((lVar2 != 0) &&
       (lVar2 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered(lVar2,1,0),
       lVar2 != 0)) {
      lVar2 = FUN_0201bd24(lVar2,0);
      lVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      if ((lVar3 != 0) &&
         ((lVar3 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered(lVar3,2,0),
          lVar3 != 0 && (lVar3 = FUN_0201bd24(lVar3,0), lVar3 != 0)))) {
        lVar3 = FUN_01601fc0(lVar3,*(undefined8 *)(param_1 + 0x10),
                             *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo,0);
        lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if ((lVar4 != 0) &&
           (lVar4 = UnityEngine_InputSystem_InputActionMap__remove_actionTriggered(lVar4,3,0),
           lVar4 != 0)) {
          lVar4 = FUN_0201bd24(lVar4,0);
          uVar5 = FUN_016d3dec(lVar3,0);
          puVar1 = PTR_DAT_033ea8a0;
          if ((uVar5 & 1) == 0) {
            FUN_0201bd24(param_2,0);
            return;
          }
          if (*(int *)(*(long *)StringLiteral_702 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar6 = FUN_016d52b0(lVar3,0);
          plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,0xb);
          puVar1 = Method_System_Collections_Generic_List<EventSystem>_RemoveAt__;
          if (plVar7 != (long *)0x0) {
            if ((*(long *)Method_System_Collections_Generic_List<EventSystem>_RemoveAt__ != 0) &&
               (lVar8 = thunk_FUN_00d6225c(*(long *)
                                            Method_System_Collections_Generic_List<EventSystem>_RemoveAt__
                                           ,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_014c51a8:
              uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar9,0);
            }
            uVar10 = *(uint *)(plVar7 + 3);
            if (uVar10 != 0) {
              plVar7[4] = *(long *)puVar1;
              if (lVar2 != 0) {
                lVar8 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar8 == 0) goto LAB_014c51a8;
                uVar10 = *(uint *)(plVar7 + 3);
              }
              puVar1 = 
              Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
              ;
              if (1 < uVar10) {
                plVar7[5] = lVar2;
                lVar2 = *(long *)puVar1;
                if (lVar2 != 0) {
                  lVar2 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar7 + 0x40));
                  if (lVar2 == 0) goto LAB_014c51a8;
                  uVar10 = *(uint *)(plVar7 + 3);
                }
                if (2 < uVar10) {
                  plVar7[6] = *(long *)puVar1;
                  if (lVar3 != 0) {
                    lVar2 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar7 + 0x40));
                    if (lVar2 == 0) goto LAB_014c51a8;
                    uVar10 = *(uint *)(plVar7 + 3);
                  }
                  puVar1 = StringLiteral_10809;
                  if (3 < uVar10) {
                    plVar7[7] = lVar3;
                    lVar2 = *(long *)puVar1;
                    if (lVar2 != 0) {
                      lVar2 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar7 + 0x40));
                      if (lVar2 == 0) goto LAB_014c51a8;
                      uVar10 = *(uint *)(plVar7 + 3);
                    }
                    if (4 < uVar10) {
                      plVar7[8] = *(long *)puVar1;
                      if (lVar4 != 0) {
                        lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40));
                        if (lVar2 == 0) goto LAB_014c51a8;
                        uVar10 = *(uint *)(plVar7 + 3);
                      }
                      puVar1 = Method_System_Collections_Generic_List<MockTouch>__ctor__;
                      if (5 < uVar10) {
                        plVar7[9] = lVar4;
                        lVar2 = *(long *)puVar1;
                        if (lVar2 != 0) {
                          lVar2 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar7 + 0x40));
                          if (lVar2 == 0) goto LAB_014c51a8;
                          uVar10 = *(uint *)(plVar7 + 3);
                        }
                        if (6 < uVar10) {
                          plVar7[10] = *(long *)puVar1;
                          if (lVar6 != 0) {
                            lVar2 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
                            if (lVar2 == 0) goto LAB_014c51a8;
                            uVar10 = *(uint *)(plVar7 + 3);
                          }
                          puVar1 = StringLiteral_770;
                          if (7 < uVar10) {
                            plVar7[0xb] = lVar6;
                            lVar2 = *(long *)puVar1;
                            if (lVar2 != 0) {
                              lVar2 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar7 + 0x40));
                              if (lVar2 == 0) goto LAB_014c51a8;
                              uVar10 = *(uint *)(plVar7 + 3);
                            }
                            if (8 < uVar10) {
                              plVar7[0xc] = *(long *)puVar1;
                              if (lVar4 != 0) {
                                lVar2 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40));
                                if (lVar2 == 0) goto LAB_014c51a8;
                                uVar10 = *(uint *)(plVar7 + 3);
                              }
                              puVar1 = 
                              Method_System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_ThrowIncorrectTokenException__
                              ;
                              if (9 < uVar10) {
                                plVar7[0xd] = lVar4;
                                lVar2 = *(long *)puVar1;
                                if (lVar2 != 0) {
                                  lVar2 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*plVar7 + 0x40));
                                  if (lVar2 == 0) goto LAB_014c51a8;
                                  uVar10 = *(uint *)(plVar7 + 3);
                                }
                                if (10 < uVar10) {
                                  plVar7[0xe] = *(long *)puVar1;
                                  FUN_01600844(plVar7,0);
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
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


