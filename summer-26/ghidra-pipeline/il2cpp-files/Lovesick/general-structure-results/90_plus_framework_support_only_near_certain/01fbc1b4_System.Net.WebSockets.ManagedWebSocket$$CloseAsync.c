/*
FUNCTION_NAME: System.Net.WebSockets.ManagedWebSocket$$CloseAsync
ENTRY_POINT: 01fbc1b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Net_WebSockets_ManagedWebSocket__CloseAsync(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long unaff_x19;
  undefined8 uVar15;
  ulong uVar16;
  long *unaff_x23;
  
  thunk_FUN_00d48444(
                    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
                    );
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<float[]>__ctor__);
  thunk_FUN_00d48444(OVRTrackedKeyboard_<>c_TypeInfo);
  thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_5925);
  *(undefined1 *)(unaff_x19 + 0x683) = 1;
  lVar9 = *unaff_x23;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *unaff_x23;
  }
  puVar6 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x2a8);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) < 0xc) goto LAB_01fbc92c;
    if (*(long *)(lVar9 + 0x78) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x78) + 0x10);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
      puVar5 = Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo;
      if (lVar9 != 0) {
        FUN_01f75d58(lVar9,uVar15,
                     *(undefined8 *)Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo,
                     0);
        lVar10 = FUN_01fbcbb8(*(undefined8 *)(lVar9 + 0x10));
        lVar11 = FUN_01fbcc78(lVar9,lVar10);
        plVar13 = *(long **)(*unaff_x23 + 0xb8);
        plVar13[2] = lVar11;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x30) = lVar11;
          puVar7 = StringLiteral_5925;
          puVar4 = OVRTrackedKeyboard_<>c_TypeInfo;
          puVar3 = PTR_DAT_033f19d8;
          plVar13 = (long *)*plVar13;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x2a8))(plVar13,lVar9,lVar11,*(undefined8 *)(*plVar13 + 0x2b0));
            uVar16 = 0;
            while( true ) {
              lVar9 = *unaff_x23;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                    /* try { // try from 01fbc2e4 to 020bc40f has its CatchHandler @ 01fbc2e4
                       catch() { ... } // from try @ 01fbc2e4 with catch @ 01fbc2e4
                       catch() { ... } // from try @ 01fbc4f0 with catch @ 01fbc2e4
                       catch() { ... } // from try @ 01fbc5ac with catch @ 01fbc2e4
                       catch() { ... } // from try @ 01fbc5b4 with catch @ 01fbc2e4
                       catch() { ... } // from try @ 01fbc668 with catch @ 01fbc2e4 */
                lVar9 = *unaff_x23;
              }
              lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x2a8);
              if (lVar10 == 0) goto LAB_01fbc928;
              if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar16) break;
              if (uVar16 != 0xb) {
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar10 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x2a8);
                  if (lVar10 == 0) goto LAB_01fbc928;
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_01fbc92c;
                lVar9 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_01fbc928;
                uVar15 = *(undefined8 *)(lVar9 + 0x10);
                lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                if (lVar9 == 0) goto LAB_01fbc928;
                FUN_01f75d58(lVar9,uVar15,*(undefined8 *)puVar5,0);
                plVar13 = (long *)FUN_01fbcbb8(*(undefined8 *)(lVar9 + 0x10));
                lVar10 = FUN_01fbcc78(lVar9,plVar13);
                if (plVar13 == (long *)0x0) goto LAB_01fbc928;
                plVar13[6] = lVar10;
                plVar12 = (long *)**(long **)(*unaff_x23 + 0xb8);
                if (plVar12 == (long *)0x0) goto LAB_01fbc928;
                (**(code **)(*plVar12 + 0x2a8))
                          (plVar12,lVar9,lVar10,*(undefined8 *)(*plVar12 + 0x2b0));
                if ((int)plVar13[2] == 0) {
                  lVar9 = *unaff_x23;
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar9 = *unaff_x23;
                  }
                  plVar12 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
                  uVar8 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0))
                  ;
                  if (plVar12 == (long *)0x0) goto LAB_01fbc928;
                  if ((lVar10 != 0) &&
                     (lVar9 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar9 == 0)) goto LAB_01fbc944;
                  if (*(uint *)(plVar12 + 3) <= uVar8) goto LAB_01fbc92c;
                  plVar12[(long)(int)uVar8 + 4] = lVar10;
                }
              }
              uVar16 = uVar16 + 1;
            }
            uVar16 = 0;
            while( true ) {
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar9 = *unaff_x23;
              }
              puVar14 = *(undefined8 **)(lVar9 + 0xb8);
              lVar10 = puVar14[0x55];
              if (lVar10 == 0) goto LAB_01fbc928;
              if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar16) break;
              if (uVar16 != 0xb) {
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  puVar14 = *(undefined8 **)(*unaff_x23 + 0xb8);
                  lVar10 = puVar14[0x55];
                  if (lVar10 == 0) goto LAB_01fbc928;
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_01fbc92c;
                lVar9 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_01fbc928;
                plVar13 = (long *)*puVar14;
                uVar15 = *(undefined8 *)(lVar9 + 0x10);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                if ((lVar10 == 0) ||
                   (FUN_01f75d58(lVar10,uVar15,*(undefined8 *)puVar5,0), plVar13 == (long *)0x0))
                goto LAB_01fbc928;
                plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                            (plVar13,lVar10,*(undefined8 *)(*plVar13 + 0x310));
                if (plVar13 != (long *)0x0) {
                  lVar10 = *(long *)puVar3;
                  bVar2 = *(byte *)(lVar10 + 300);
                  if ((*(byte *)(*plVar13 + 300) < bVar2) ||
                     (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(plVar13);
                  }
                }
                lVar10 = *unaff_x23;
                iVar1 = *(int *)(lVar9 + 0x20);
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar10 = *unaff_x23;
                }
                puVar14 = *(undefined8 **)(lVar10 + 0xb8);
                if (iVar1 == 0xb) {
                  plVar12 = (long *)puVar14[2];
                }
                else {
                  lVar10 = puVar14[0x55];
                  if (lVar10 == 0) goto LAB_01fbc928;
                  if (*(uint *)(lVar10 + 0x18) <= *(uint *)(lVar9 + 0x20)) goto LAB_01fbc92c;
                  lVar9 = *(long *)(lVar10 + (long)(int)*(uint *)(lVar9 + 0x20) * 8 + 0x20);
                  if (lVar9 == 0) goto LAB_01fbc928;
                  plVar12 = (long *)*puVar14;
                  uVar15 = *(undefined8 *)(lVar9 + 0x10);
                  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                  if ((lVar9 == 0) ||
                     (FUN_01f75d58(lVar9,uVar15,*(undefined8 *)puVar5,0), plVar12 == (long *)0x0))
                  goto LAB_01fbc928;
                  plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                              (plVar12,lVar9,*(undefined8 *)(*plVar12 + 0x310));
                  if (plVar12 != (long *)0x0) {
                    lVar9 = *(long *)puVar3;
                    if ((*(byte *)(*plVar12 + 300) < *(byte *)(lVar9 + 300)) ||
                       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8
                                 ) != lVar9)) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(plVar12,lVar9);
                    }
                  }
                }
                FUN_01fbcd4c(plVar13,plVar12);
              }
              lVar9 = *unaff_x23;
              uVar16 = uVar16 + 1;
            }
            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
            puVar5 = 
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
            ;
            if (lVar9 != 0) {
              FUN_01f75d58(lVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<float[]>__ctor__,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
                           ,0);
              puVar3 = 
              Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
              ;
              lVar10 = *unaff_x23;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *unaff_x23;
              }
              uVar15 = FUN_01fbcc78(lVar9,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x270));
              lVar10 = *(long *)(*unaff_x23 + 0xb8);
              *(undefined8 *)(lVar10 + 0x18) = uVar15;
              if (*(long *)(lVar10 + 0x270) != 0) {
                *(undefined8 *)(*(long *)(lVar10 + 0x270) + 0x30) = uVar15;
                FUN_01fbcd4c(uVar15,*(undefined8 *)(lVar10 + 0x10));
                plVar13 = (long *)**(long **)(*unaff_x23 + 0xb8);
                if (plVar13 != (long *)0x0) {
                  (**(code **)(*plVar13 + 0x2a8))
                            (plVar13,lVar9,(*(long **)(*unaff_x23 + 0xb8))[3],
                             *(undefined8 *)(*plVar13 + 0x2b0));
                  plVar13 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  if (plVar13 != (long *)0x0) {
                    lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
                    if ((lVar9 != 0) &&
                       (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar10 == 0)) {
LAB_01fbc944:
                      uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                      FUN_00da5038(uVar15,0);
                    }
                    if (*(uint *)(plVar13 + 3) < 0xb) goto LAB_01fbc92c;
                    plVar13[0xe] = lVar9;
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                    if (lVar9 != 0) {
                      FUN_01f75d58(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar5,0);
                      uVar15 = FUN_01fbcc78(lVar9,*(undefined8 *)
                                                   (*(long *)(*unaff_x23 + 0xb8) + 0x280));
                      lVar10 = *(long *)(*unaff_x23 + 0xb8);
                      *(undefined8 *)(lVar10 + 0x20) = uVar15;
                      if (*(long *)(lVar10 + 0x280) != 0) {
                        *(undefined8 *)(*(long *)(lVar10 + 0x280) + 0x30) = uVar15;
                        FUN_01fbcd4c(uVar15,*(undefined8 *)(lVar10 + 0x18));
                        plVar13 = (long *)**(long **)(*unaff_x23 + 0xb8);
                        if (plVar13 != (long *)0x0) {
                          (**(code **)(*plVar13 + 0x2a8))
                                    (plVar13,lVar9,(*(long **)(*unaff_x23 + 0xb8))[4],
                                     *(undefined8 *)(*plVar13 + 0x2b0));
                          plVar13 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
                          if (plVar13 != (long *)0x0) {
                            lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
                            if ((lVar9 != 0) &&
                               (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40)),
                               lVar10 == 0)) goto LAB_01fbc944;
                            if (*(uint *)(plVar13 + 3) < 0xc) goto LAB_01fbc92c;
                            plVar13[0xf] = lVar9;
                            lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                            if (lVar9 != 0) {
                              FUN_01f75d58(lVar9,*(undefined8 *)puVar7,*(undefined8 *)puVar5,0);
                              uVar15 = FUN_01fbcc78(lVar9,*(undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x288));
                              lVar10 = *(long *)(*unaff_x23 + 0xb8);
                              *(undefined8 *)(lVar10 + 0x28) = uVar15;
                              if (*(long *)(lVar10 + 0x288) != 0) {
                                *(undefined8 *)(*(long *)(lVar10 + 0x288) + 0x30) = uVar15;
                                lVar10 = *(long *)(lVar10 + 8);
                                if (lVar10 != 0) {
                                  if (*(uint *)(lVar10 + 0x18) < 0x12) goto LAB_01fbc92c;
                                  FUN_01fbcd4c(uVar15,*(undefined8 *)(lVar10 + 0xa8));
                                  plVar13 = (long *)**(long **)(*unaff_x23 + 0xb8);
                                  if (plVar13 != (long *)0x0) {
                                    (**(code **)(*plVar13 + 0x2a8))
                                              (plVar13,lVar9,(*(long **)(*unaff_x23 + 0xb8))[5],
                                               *(undefined8 *)(*plVar13 + 0x2b0));
                                    plVar13 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8);
                                    if (plVar13 != (long *)0x0) {
                                      lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
                                      if ((lVar9 != 0) &&
                                         (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)
                                                                             (*plVar13 + 0x40)),
                                         lVar10 == 0)) goto LAB_01fbc944;
                                      if (*(uint *)(plVar13 + 3) < 0x36) goto LAB_01fbc92c;
                                      plVar13[0x39] = lVar9;
                                      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                      if (lVar9 != 0) {
                                        FUN_01f75d58(lVar9,*(undefined8 *)puVar4,
                                                     *(undefined8 *)puVar5,0);
                                        uVar15 = FUN_01fbcc78(lVar9,*(undefined8 *)
                                                                     (*(long *)(*unaff_x23 + 0xb8) +
                                                                     0x278));
                                        lVar10 = *(long *)(*unaff_x23 + 0xb8);
                                        *(undefined8 *)(lVar10 + 0x30) = uVar15;
                                        if (*(long *)(lVar10 + 0x278) != 0) {
                                          *(undefined8 *)(*(long *)(lVar10 + 0x278) + 0x30) = uVar15
                                          ;
                                          lVar10 = *(long *)(lVar10 + 8);
                                          if (lVar10 != 0) {
                                            if (*(uint *)(lVar10 + 0x18) < 0x12) {
LAB_01fbc92c:
                    /* WARNING: Subroutine does not return */
                                              FUN_00da5194();
                                            }
                                            FUN_01fbcd4c(uVar15,*(undefined8 *)(lVar10 + 0xa8));
                                            plVar13 = (long *)**(long **)(*unaff_x23 + 0xb8);
                                            if (plVar13 != (long *)0x0) {
                                              (**(code **)(*plVar13 + 0x2a8))
                                                        (plVar13,lVar9,
                                                         (*(long **)(*unaff_x23 + 0xb8))[6],
                                                         *(undefined8 *)(*plVar13 + 0x2b0));
                                              plVar13 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 8)
                                              ;
                                              if (plVar13 != (long *)0x0) {
                                                lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) +
                                                                 0x30);
                                                if ((lVar9 != 0) &&
                                                   (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *
                                                                                       )(*plVar13 +
                                                                                        0x40)),
                                                   lVar10 == 0)) goto LAB_01fbc944;
                                                if (0x36 < *(uint *)(plVar13 + 3)) {
                                                  plVar13[0x3a] = lVar9;
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
          }
        }
      }
    }
  }
LAB_01fbc928:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


