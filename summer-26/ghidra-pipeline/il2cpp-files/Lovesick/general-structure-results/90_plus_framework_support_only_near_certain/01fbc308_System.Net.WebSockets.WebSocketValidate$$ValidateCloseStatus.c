/*
FUNCTION_NAME: System.Net.WebSockets.WebSocketValidate$$ValidateCloseStatus
ENTRY_POINT: 01fbc308
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void System_Net_WebSockets_WebSocketValidate__ValidateCloseStatus(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  ulong uVar12;
  undefined8 *unaff_x29;
  
  do {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      param_1 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x2a8);
      if (param_1 == 0) goto LAB_01fbc928;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_01fbc92c;
    lVar9 = *(long *)(param_1 + unaff_x22 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01fbc928;
    uVar11 = *(undefined8 *)(lVar9 + 0x10);
    lVar9 = thunk_FUN_00d62348(*unaff_x24);
    if (lVar9 == 0) goto LAB_01fbc928;
    FUN_01f75d58(lVar9,uVar11,*unaff_x29,0);
    plVar6 = (long *)FUN_01fbcbb8(*(undefined8 *)(lVar9 + 0x10));
    lVar7 = FUN_01fbcc78(lVar9,plVar6);
    if (plVar6 == (long *)0x0) goto LAB_01fbc928;
    plVar6[6] = lVar7;
    plVar8 = (long *)**(long **)(*unaff_x23 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_01fbc928;
    (**(code **)(*plVar8 + 0x2a8))(plVar8,lVar9,lVar7,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((int)plVar6[2] == 0) {
      lVar9 = *unaff_x23;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar9 = *unaff_x23;
      }
      plVar8 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
      uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar8 == (long *)0x0) goto LAB_01fbc928;
      if ((lVar7 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_01fbc944;
      if (*(uint *)(plVar8 + 3) <= uVar5) goto LAB_01fbc92c;
                    /* try { // try from 01fbc410 to 020bc437 has its CatchHandler @ 01fbc5d8 */
      plVar8[(long)(int)uVar5 + 4] = lVar7;
    }
    do {
      unaff_x22 = unaff_x22 + 1;
      param_2 = *unaff_x23;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        param_2 = *unaff_x23;
      }
      param_1 = *(long *)(*(long *)(param_2 + 0xb8) + 0x2a8);
      if (param_1 == 0) goto LAB_01fbc928;
      if ((long)*(int *)(param_1 + 0x18) <= (long)unaff_x22) {
        uVar12 = 0;
        goto LAB_01fbc420;
      }
    } while (unaff_x22 == 0xb);
  } while( true );
LAB_01fbc420:
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    param_2 = *unaff_x23;
  }
  puVar10 = *(undefined8 **)(param_2 + 0xb8);
  lVar9 = puVar10[0x55];
  if (lVar9 == 0) goto LAB_01fbc928;
  if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar12) goto LAB_01fbc5d8;
  if (uVar12 != 0xb) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      puVar10 = *(undefined8 **)(*unaff_x23 + 0xb8);
      lVar9 = puVar10[0x55];
      if (lVar9 == 0) goto LAB_01fbc928;
    }
                    /* try { // try from 01fbc46c to 020bc497 has its CatchHandler @ 01fbc5d4 */
    if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01fbc92c;
    lVar9 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_01fbc928;
    plVar6 = (long *)*puVar10;
    uVar11 = *(undefined8 *)(lVar9 + 0x10);
    lVar7 = thunk_FUN_00d62348(*unaff_x24);
    if ((lVar7 == 0) || (FUN_01f75d58(lVar7,uVar11,*unaff_x29,0), plVar6 == (long *)0x0))
    goto LAB_01fbc928;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x310));
    if (plVar6 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x27 + 300);
      if ((*(byte *)(*plVar6 + 300) < bVar2) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar6);
      }
    }
    lVar7 = *unaff_x23;
    iVar1 = *(int *)(lVar9 + 0x20);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *unaff_x23;
    }
    puVar10 = *(undefined8 **)(lVar7 + 0xb8);
    if (iVar1 == 0xb) {
      plVar8 = (long *)puVar10[2];
    }
    else {
      lVar7 = puVar10[0x55];
      if (lVar7 == 0) goto LAB_01fbc928;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar9 + 0x20)) goto LAB_01fbc92c;
      lVar9 = *(long *)(lVar7 + (long)(int)*(uint *)(lVar9 + 0x20) * 8 + 0x20);
      if (lVar9 == 0) goto LAB_01fbc928;
      plVar8 = (long *)*puVar10;
      uVar11 = *(undefined8 *)(lVar9 + 0x10);
      lVar9 = thunk_FUN_00d62348(*unaff_x24);
      if ((lVar9 == 0) || (FUN_01f75d58(lVar9,uVar11,*unaff_x29,0), plVar8 == (long *)0x0))
      goto LAB_01fbc928;
      plVar8 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310))
      ;
      if (plVar8 != (long *)0x0) {
        lVar9 = *unaff_x27;
        if ((*(byte *)(*plVar8 + 300) < *(byte *)(lVar9 + 300)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) != lVar9))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar8,lVar9);
        }
      }
    }
    FUN_01fbcd4c(plVar6,plVar8);
  }
  param_2 = *unaff_x23;
  uVar12 = uVar12 + 1;
  goto LAB_01fbc420;
LAB_01fbc5d8:
  lVar9 = thunk_FUN_00d62348(*unaff_x24);
  puVar4 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__;
  if (lVar9 != 0) {
    FUN_01f75d58(lVar9,*(undefined8 *)Method_System_Collections_Generic_List<float[]>__ctor__,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
                 ,0);
    puVar3 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
    ;
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *unaff_x23;
    }
    uVar11 = FUN_01fbcc78(lVar9,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x270));
    lVar7 = *(long *)(*unaff_x23 + 0xb8);
    *(undefined8 *)(lVar7 + 0x18) = uVar11;
    if (*(long *)(lVar7 + 0x270) != 0) {
      *(undefined8 *)(*(long *)(lVar7 + 0x270) + 0x30) = uVar11;
      FUN_01fbcd4c(uVar11,*(undefined8 *)(lVar7 + 0x10));
      plVar6 = (long *)**(long **)(*unaff_x23 + 0xb8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x2a8))
                  (plVar6,lVar9,(*(long **)(*unaff_x23 + 0xb8))[3],*(undefined8 *)(*plVar6 + 0x2b0))
        ;
        plVar6 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (plVar6 != (long *)0x0) {
          lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_01fbc944:
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          if (*(uint *)(plVar6 + 3) < 0xb) goto LAB_01fbc92c;
          plVar6[0xe] = lVar9;
          lVar9 = thunk_FUN_00d62348(*unaff_x24);
          if (lVar9 != 0) {
            FUN_01f75d58(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar4,0);
            uVar11 = FUN_01fbcc78(lVar9,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x280));
            lVar7 = *(long *)(*unaff_x23 + 0xb8);
            *(undefined8 *)(lVar7 + 0x20) = uVar11;
            if (*(long *)(lVar7 + 0x280) != 0) {
              *(undefined8 *)(*(long *)(lVar7 + 0x280) + 0x30) = uVar11;
              FUN_01fbcd4c(uVar11,*(undefined8 *)(lVar7 + 0x18));
              plVar6 = (long *)**(long **)(*unaff_x23 + 0xb8);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x2a8))
                          (plVar6,lVar9,(*(long **)(*unaff_x23 + 0xb8))[4],
                           *(undefined8 *)(*plVar6 + 0x2b0));
                plVar6 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
                if (plVar6 != (long *)0x0) {
                  lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                  if ((lVar9 != 0) &&
                     (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
                     ) goto LAB_01fbc944;
                  if (*(uint *)(plVar6 + 3) < 0xc) goto LAB_01fbc92c;
                  plVar6[0xf] = lVar9;
                  lVar9 = thunk_FUN_00d62348(*unaff_x24);
                  if (lVar9 != 0) {
                    FUN_01f75d58(lVar9,*unaff_x25,*(undefined8 *)puVar4,0);
                    uVar11 = FUN_01fbcc78(lVar9,*(undefined8 *)
                                                 (*(long *)(*unaff_x23 + 0xb8) + 0x288));
                    lVar7 = *(long *)(*unaff_x23 + 0xb8);
                    *(undefined8 *)(lVar7 + 0x28) = uVar11;
                    if (*(long *)(lVar7 + 0x288) != 0) {
                      *(undefined8 *)(*(long *)(lVar7 + 0x288) + 0x30) = uVar11;
                      lVar7 = *(long *)(lVar7 + 8);
                      if (lVar7 != 0) {
                        if (*(uint *)(lVar7 + 0x18) < 0x12) goto LAB_01fbc92c;
                        FUN_01fbcd4c(uVar11,*(undefined8 *)(lVar7 + 0xa8));
                        plVar6 = (long *)**(long **)(*unaff_x23 + 0xb8);
                        if (plVar6 != (long *)0x0) {
                          (**(code **)(*plVar6 + 0x2a8))
                                    (plVar6,lVar9,(*(long **)(*unaff_x23 + 0xb8))[5],
                                     *(undefined8 *)(*plVar6 + 0x2b0));
                          plVar6 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
                          if (plVar6 != (long *)0x0) {
                            lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
                            if ((lVar9 != 0) &&
                               (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar7 == 0)) goto LAB_01fbc944;
                            if (*(uint *)(plVar6 + 3) < 0x36) goto LAB_01fbc92c;
                            plVar6[0x39] = lVar9;
                            lVar9 = thunk_FUN_00d62348(*unaff_x24);
                            if (lVar9 != 0) {
                              FUN_01f75d58(lVar9,*unaff_x26,*(undefined8 *)puVar4,0);
                              uVar11 = FUN_01fbcc78(lVar9,*(undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x278));
                              lVar7 = *(long *)(*unaff_x23 + 0xb8);
                              *(undefined8 *)(lVar7 + 0x30) = uVar11;
                              if (*(long *)(lVar7 + 0x278) != 0) {
                                *(undefined8 *)(*(long *)(lVar7 + 0x278) + 0x30) = uVar11;
                                lVar7 = *(long *)(lVar7 + 8);
                                if (lVar7 != 0) {
                                  if (*(uint *)(lVar7 + 0x18) < 0x12) {
LAB_01fbc92c:
                    /* WARNING: Subroutine does not return */
                                    FUN_00da5194();
                                  }
                                  FUN_01fbcd4c(uVar11,*(undefined8 *)(lVar7 + 0xa8));
                                  plVar6 = (long *)**(long **)(*unaff_x23 + 0xb8);
                                  if (plVar6 != (long *)0x0) {
                                    (**(code **)(*plVar6 + 0x2a8))
                                              (plVar6,lVar9,(*(long **)(*unaff_x23 + 0xb8))[6],
                                               *(undefined8 *)(*plVar6 + 0x2b0));
                                    plVar6 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
                                    if (plVar6 != (long *)0x0) {
                                      lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
                                      if ((lVar9 != 0) &&
                                         (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                            (*plVar6 + 0x40)),
                                         lVar7 == 0)) goto LAB_01fbc944;
                                      if (0x36 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x3a] = lVar9;
                                        return;
                                      }
                                      goto LAB_01fbc92c;
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
LAB_01fbc928:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


